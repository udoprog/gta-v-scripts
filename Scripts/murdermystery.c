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
var uLocal_18 = 0;
var uLocal_19 = 0;
char *sLocal_20 = NULL;
float fLocal_21 = 0f;
var uLocal_22 = 0;
var uLocal_23 = 0;
var uLocal_24 = 0;
float fLocal_25 = 0f;
float fLocal_26 = 0f;
var uLocal_27 = 0;
int iLocal_28 = 0;
var uLocal_29 = 0;
var uLocal_30 = 0;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
float fLocal_33 = 0f;
var uLocal_34 = 0;
var uLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
int iLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
var uLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
float fLocal_47 = 0f;
float fLocal_48 = 0f;
float fLocal_49 = 0f;
float fLocal_50 = 0f;
vector3 vLocal_51 = {0f, 0f, 0f};
vector3 vLocal_54 = {0f, 0f, 0f};
vector3 vLocal_57 = {0f, 0f, 0f};
float fLocal_60 = 0f;
vector3 vLocal_61 = {0f, 0f, 0f};
float fLocal_64 = 0f;
vector3 vLocal_65 = {0f, 0f, 0f};
vector3 vLocal_68 = {0f, 0f, 0f};
int iLocal_71 = 0;
int iLocal_72 = 0;
int iLocal_73 = 0;
int iLocal_74 = 0;
int iLocal_75 = 0;
int iLocal_76 = 0;
int iLocal_77 = 0;
int iLocal_78 = 0;
char *sLocal_79 = NULL;
char *sLocal_80 = NULL;
int iLocal_81 = 0;
vector3 vLocal_82 = {0f, 0f, 0f};
int iLocal_85 = 0;
int iLocal_86 = 0;
int iLocal_87 = 0;
char *sLocal_88 = NULL;
char *sLocal_89 = NULL;
char *sLocal_90 = NULL;
char *sLocal_91 = NULL;
int iLocal_92 = 0;
struct<2> ScriptParam_0 = {
	0, 5
};
var uScriptParam_2 = 0;
var uScriptParam_3 = 0;
var uScriptParam_4 = 0;
var uScriptParam_5 = 0;
var uScriptParam_6 = 0;
var uScriptParam_7 = 0;
var uScriptParam_8 = 0;
var uScriptParam_9 = 0;
var uScriptParam_10 = 0;
var uScriptParam_11 = 0;
var uScriptParam_12 = 0;
var uScriptParam_13 = 0;
var uScriptParam_14 = 0;
var uScriptParam_15 = 0;
var uScriptParam_16 = 0;
var uScriptParam_17 = 5;
var uScriptParam_18 = 0;
var uScriptParam_19 = 0;
var uScriptParam_20 = 0;
var uScriptParam_21 = 0;
var uScriptParam_22 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_47 = 175f * 175f;
	fLocal_48 = 5f * 5f;
	fLocal_49 = 5f * 5f;
	fLocal_50 = 2f * 2f;
	vLocal_51 = {-1011.737f, -480.254f, 39.0734f};
	vLocal_54 = {-1003.078f, -477.962f, 49.1374f};
	vLocal_57 = {-1018.376f, -483.9436f, 36.0964f};
	fLocal_60 = 114.7664f;
	vLocal_61 = {-1005.191f, -478.2104f, 49.0262f};
	fLocal_64 = 80.6659f;
	vLocal_65 = {1f, 1f, 2f};
	vLocal_68 = {-596.05f, 2088.56f, 130.59f};
	sLocal_79 = "FOUND_CLUE";
	sLocal_80 = "NOIR_FILTER_SOUNDS";
	iLocal_85 = 7;
	sLocal_88 = "missmurder";
	sLocal_89 = "idle";
	sLocal_90 = "MM_LETREAD";
	sLocal_91 = "MM_LETCANC";
	if (player::has_force_cleanup_occurred(83)) {
		func_82();
	}
	func_75(ScriptParam_0.f_1[0 /*3*/]);
	while (true) {
		func_74();
		if (func_69()) {
			func_1();
		}
		else {
			func_82();
		}
		system::wait(0);
	}
}

// Position - 0x15D
void func_1() {
	switch (iLocal_85) {
	case 0:
	case 1:
	case 2:
	case 3:
		if (!func_68(iLocal_85)) {
			if (func_65() && !func_64() && func_63() && !func_62(0)) {
				if (iLocal_87 != 0) {
					if (graphics::is_tracked_point_visible(iLocal_87)) {
						func_60(iLocal_85, 1, 0);
					}
				}
			}
		}
		break;

	case 4:
		if (func_59(iLocal_78)) {
			ped::set_ped_capsule(iLocal_78, 0.75f);
		}
		if (!func_68(4)) {
			if (func_65() && func_63() && !func_62(0)) {
				func_60(4, 1, 0);
			}
		}
		break;

	case 5:
		if (func_55()) {
			func_29();
		}
		if (!func_68(5) && iLocal_73 == 4 && func_63() && !func_62(0)) {
			func_60(5, 1, 0);
		}
		break;

	case 6:
		if (!func_28(3)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), -580.8914f, 2033.12f, 130.5113f, -578.4783f,
												 2035.029f, 127.5615f, 0.75f, 0, 1, 0)) {
				func_27(3, 1);
			}
		}
		if (entity::is_entity_in_angled_area(player::player_ped_id(), -580.2305f, 2032.054f, 130.2928f, -577.6669f,
											 2033.917f, 127.5157f, 0.75f, 0, 1, 0)) {
			if (func_28(3)) {
				func_18(-595.1746f, 2085.768f, 136.8813f, -601.5754f, 2106.162f, 125.4619f, 20.5f, -602.8466f,
						2115.511f, 126.4209f, 128.0735f, 13.5f, 22.2f, 5.7f, 1, 0, 1, 1, 0);
				func_27(3, 0);
			}
		}
		if (!func_28(2)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), -580.2305f, 2032.054f, 130.2928f, -577.6669f,
												 2033.917f, 127.5157f, 0.75f, 0, 1, 0) ||
				cam::is_screen_faded_out()) {
				entity::create_model_hide(vLocal_68, 200f, -1241212535, 0);
				func_27(2, 1);
			}
		}
		if (func_65() && !func_64()) {
			controls::disable_control_action(0, 54, 1);
			if (func_16(6)) {
				if (!func_68(6) && func_63() && !func_62(0)) {
					func_7(134, 4, 1);
					func_60(6, 1, 0);
					func_27(1, 1);
				}
			}
			if (func_6()) {
				if (!func_5(0)) {
					if (controls::is_control_just_pressed(0, 51)) {
						func_3();
					}
					func_2("MM_TOGGLE", 10);
				}
			}
		}
		if (func_28(1)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), -594.9976f, 2089.005f, 130.3449f, -597.1125f,
												 2088.365f, 133.3035f, 1f, 0, 1, 0)) {
				func_2("MM_HELP", 10000);
				func_27(1, 0);
			}
		}
		break;
	}
}

// Position - 0x449
void func_2(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x460
void func_3() {
	switch (Global_101700.f_9008.f_134) {
	case 0: Global_101700.f_9008.f_134 = 1; break;

	case 1:
		Global_101700.f_9008.f_134 = 2;
		graphics::_0x5096FD9CCB49056D(func_4());
		audio::play_sound_frontend(-1, "ON", "NOIR_FILTER_SOUNDS", 1);
		break;

	case 2: Global_101700.f_9008.f_134 = 0; break;
	}
}

// Position - 0x4C3
char *func_4() {
	switch (Global_101700.f_9008.f_134) {
	case 1: return "NG_filmnoir_BW02";

	case 2: return "NG_filmnoir_BW01";

	default:
	}
	return "";
}

// Position - 0x4F4
bool func_5(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(Global_2313, 14)) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return true;
	}
	if (Global_14443.f_1 > 3) {
		return true;
	}
	return false;
}

// Position - 0x54E
bool func_6() { return Global_101700.f_9008.f_133 == 127; }

// Position - 0x562
void func_7(int iParam0, int iParam1, int iParam2) {
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		func_9();
		if (iParam1 == 4) {
			Global_101700.f_27009[iParam0 /*29*/].f_12[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[2] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[2] = 1;
		}
		else {
			if (Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] == 1 &&
				Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] == 1) {
				iParam2 = 0;
			}
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (iParam2) {
			if (!Global_69702) {
				if (iParam1 != 4) {
					if (Global_14443 != iParam1) {
						Global_2972[iParam1 /*4*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443) {
					}
					else {
						Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_8();
					}
				}
				else {
					Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_8();
				}
			}
			else {
				Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_8();
			}
		}
	}
}

// Position - 0x70C
void func_8() {
	char cVar0[64];
	char cVar16[64];
	char *sVar32;

	StringCopy(&cVar0, ui::_get_label_text(&Global_101700.f_27009[Global_2999 /*29*/].f_7), 64);
	if (Global_3018 == 0) {
		ui::_set_notification_text_entry("");
		StringCopy(&cVar16, ui::_get_label_text(&Global_2923[1 /*6*/]), 64);
		sVar32 = ui::_get_label_text("CELL_253");
		ui::_set_notification_message(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else {
		ui::_set_notification_text_entry("CELL_255");
		ui::add_text_component_substring_text_label(&Global_2923[1 /*6*/]);
		ui::_set_notification_message(&cVar0, &cVar0, 0, 3, "", 0);
	}
	gameplay::clear_bit(&Global_2313, 0);
}

// Position - 0x789
void func_9() {
	if (func_15(14)) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[0 /*29*/]) {
				Global_14443 = 0;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[1 /*29*/]) {
				Global_14443 = 1;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[2 /*29*/]) {
				Global_14443 = 2;
			}
			else {
				Global_14443 = 0;
			}
		}
	}
	else {
		Global_14443 = func_10();
		if (Global_14443 == 145) {
			Global_14443 = 3;
		}
		if (Global_69702) {
			Global_14443 = 3;
		}
		if (Global_14443 > 3) {
			Global_14443 = 3;
		}
	}
}

// Position - 0x82B
int func_10() {
	func_11();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x844
void func_11() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_14(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_13(player::player_ped_id());
			if (func_12(iVar0) && (!func_15(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_12(Global_101700.f_2095.f_539.f_3549)) {
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else {
			if (Global_101700.f_2095.f_539.f_3549 != 145) {
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

// Position - 0x941
bool func_12(int iParam0) { return iParam0 < 3; }

// Position - 0x94D
int func_13(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_14(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x98A
int func_14(int iParam0) {
	if (func_12(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x9B4
bool func_15(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x9C2
bool func_16(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == 0) {
		return true;
	}
	iVar1 = gameplay::get_bits_in_range(Global_101700.f_9008.f_133, 0, iVar0 - 1);
	return iVar1 == func_17(2, iVar0) - 1;
}

// Position - 0x9FB
int func_17(int iParam0, int iParam1) {
	if (iParam1 == 0) {
		return 1;
	}
	return iParam0 * func_17(iParam0, iParam1 - 1);
}

// Position - 0xA1D
void func_18(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11,
			 int iParam14, int iParam15, int iParam16, int iParam17, int iParam18) {
	func_19(vParam0, vParam3, fParam6, vParam7, fParam10, vParam11, iParam14, iParam15, iParam16, iParam17, iParam18);
}

// Position - 0xA47
void func_19(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11,
			 bool bParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18) {
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;

	if (iParam15) {
		iParam15 = 0;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = player::get_players_last_vehicle();
	if (entity::does_entity_exist(iVar0)) {
		if (!entity::is_entity_a_mission_entity(iVar0)) {
			entity::set_entity_as_mission_entity(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (vehicle::is_vehicle_driveable(iVar0, 0)) {
			if (bParam18) {
				func_26(iVar0);
			}
			if (entity::is_entity_in_angled_area(iVar0, vParam0, vParam3, fParam6, 0, 1, 0)) {
				bVar1 = true;
			}
			else {
				vVar10 = {entity::get_entity_coords(iVar0, 1)};
				if (vVar10.z > vParam0.z && vVar10.z < vParam3.z || vVar10.z > vParam3.z && vVar10.z < vParam0.z) {
					if (func_23(iVar0, vParam0, vParam3, fParam6)) {
						bVar1 = true;
					}
				}
			}
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				if (vehicle::is_vehicle_model(iVar0, joaat("taxi"))) {
					if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != player::player_ped_id() &&
						vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != 0) {
						if (gameplay::get_distance_between_coords(vParam0 + vParam3 / FtoV(2f),
																  entity::get_entity_coords(iVar0, 1), 1) < 20f) {
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16) {
				if (func_21(iVar0, func_10(), 1)) {
					bVar1 = false;
				}
			}
			if (bVar1) {
				if (!func_20(vParam11)) {
					if (vehicle::is_vehicle_driveable(iVar0, 0)) {
						iVar13 = entity::get_entity_model(iVar0);
						vehicle::_0xDF7E3EEB29642C38(iVar0, &vVar4, &vVar7);
						if (vehicle::is_this_model_a_heli(iVar13)) {
							vParam11.x += 3f;
							vParam11.y += 3f;
						}
						if (iVar13 == joaat("zentorno") || iVar13 == joaat("btype") || iVar13 == joaat("dubsta3") ||
							iVar13 == joaat("monster")) {
							vParam11 = {vParam11 * FtoV(1.1f)};
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo")) {
							vParam11 = {vParam11 * FtoV(1.2f)};
						}
						if (vVar7.x - vVar4.x > vParam11.x) {
							bVar2 = false;
						}
						else if (vVar7.y - vVar4.y > vParam11.y) {
							bVar2 = false;
						}
						else if (vVar7.z - vVar4.z > vParam11.z) {
							bVar2 = false;
						}
					}
				}
				if (vehicle::is_vehicle_driveable(iVar0, 0)) {
					if (bVar2) {
						gameplay::clear_area_of_vehicles(vParam7, 5f, 0, 0, 0, 0, 0);
						entity::set_entity_heading(iVar0, fParam10);
						entity::set_entity_coords(iVar0, vParam7, 1, 0, 0, 1);
						vehicle::set_vehicle_on_ground_properly(iVar0, 1084227584);
						if (bParam17) {
							vehicle::set_vehicle_engine_on(iVar0, 0, 1, 0);
							vehicle::set_vehicle_doors_shut(iVar0, 1);
						}
					}
					else {
						if (!entity::is_entity_a_mission_entity(iVar0) ||
							!entity::does_entity_belong_to_this_script(iVar0, 1)) {
							entity::set_entity_as_mission_entity(iVar0, 1, 1);
						}
						if (ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
							entity::set_entity_coords(player::player_ped_id(), entity::get_entity_coords(iVar0, 1), 1,
													  0, 0, 1);
						}
						vehicle::delete_vehicle(&iVar0);
					}
				}
			}
			if (bParam14) {
				gameplay::clear_angled_area_of_vehicles(vParam0, vParam3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1) {
				if (entity::does_entity_exist(iVar0)) {
					if (entity::is_entity_a_mission_entity(iVar0)) {
						entity::set_vehicle_as_no_longer_needed(&iVar0);
					}
				}
			}
		}
		else {
			if (!entity::is_entity_a_mission_entity(iVar0)) {
				entity::set_entity_as_mission_entity(iVar0, 1, 0);
			}
			iVar14 = vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0);
			if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
				entity::set_entity_coords(iVar14, entity::get_entity_coords(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = vehicle::get_vehicle_model_number_of_seats(entity::get_entity_model(iVar0));
			if (iVar15 <= 2) {
				iVar14 = vehicle::get_ped_in_vehicle_seat(iVar0, 0, 0);
				if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
					entity::set_entity_coords(iVar14, entity::get_entity_coords(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4) {
				iVar14 = vehicle::get_ped_in_vehicle_seat(iVar0, 1, 0);
				if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
					entity::set_entity_coords(iVar14, entity::get_entity_coords(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = vehicle::get_ped_in_vehicle_seat(iVar0, 2, 0);
				if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
					entity::set_entity_coords(iVar14, entity::get_entity_coords(iVar14, 1), 1, 0, 0, 1);
				}
			}
			vehicle::delete_vehicle(&iVar0);
		}
	}
}

// Position - 0xE39
int func_20(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return 1;
	}
	return 0;
}

// Position - 0xE63
bool func_21(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_22(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0xED4
bool func_22(int iParam0, int iParam1, char *sParam2, int *iParam3) {
	StringCopy(sParam2, "", 32);
	switch (iParam0) {
	case 0:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Michael - Beverly Hills", 32);
			*iParam3 = 0;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 1;
			return true;
		}
		break;

	case 1:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Franklin - Aunt", 32);
			*iParam3 = 5;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Franklin - Hills", 32);
			*iParam3 = 6;
			return true;
		}
		break;

	case 2:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 2;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - City", 32);
			*iParam3 = 3;
			return true;
		}
		else if (iParam1 == 2) {
			StringCopy(sParam2, "Trevor - Stripclub", 32);
			*iParam3 = 4;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0xFA5
bool func_23(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18[4];
	struct<2> Var31;
	struct<2> Var34;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		vParam1.z = vParam4.z;
		vVar0 = {func_25(vParam1 - vParam4)};
		vVar3 = {vVar0};
		vVar0.x = -vVar3.y;
		vVar0.y = vVar3.x;
		vVar0.z = 0f;
		vVar6 = {vParam1 - vVar0 * FtoV(fParam7 / 2f)};
		vVar9 = {vParam1 + vVar0 * FtoV(fParam7 / 2f)};
		vVar12 = {vParam4 - vVar0 * FtoV(fParam7 / 2f)};
		vVar15 = {vParam4 + vVar0 * FtoV(fParam7 / 2f)};
		gameplay::get_model_dimensions(entity::get_entity_model(iParam0), &Var31, &Var34);
		vVar18[0 /*3*/] = {entity::get_offset_from_entity_in_world_coords(iParam0, Var31, Var31.f_1, 0f)};
		vVar18[1 /*3*/] = {entity::get_offset_from_entity_in_world_coords(iParam0, Var31, Var34.f_1, 0f)};
		vVar18[2 /*3*/] = {entity::get_offset_from_entity_in_world_coords(iParam0, Var34, Var31.f_1, 0f)};
		vVar18[3 /*3*/] = {entity::get_offset_from_entity_in_world_coords(iParam0, Var34, Var34.f_1, 0f)};
		if (func_24(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) ||
			func_24(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15) ||
			func_24(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15) ||
			func_24(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12) ||
			func_24(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9) ||
			func_24(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15) ||
			func_24(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15) ||
			func_24(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12) ||
			func_24(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9) ||
			func_24(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15) ||
			func_24(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15) ||
			func_24(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12) ||
			func_24(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9) ||
			func_24(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15) ||
			func_24(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15) ||
			func_24(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12)) {
			return true;
		}
	}
	return false;
}

// Position - 0x129B
int func_24(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8,
			struct<2> Param9, var uParam11) {
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;

	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = fVar2 - fVar0;
	fVar9 = fVar3 - fVar1;
	fVar10 = fVar6 - fVar4;
	fVar11 = fVar7 - fVar5;
	fVar12 = (-fVar9 * (fVar0 - fVar4) + fVar8 * (fVar1 - fVar5)) / (-fVar10 * fVar9 + fVar8 * fVar11);
	fVar13 = (fVar10 * (fVar1 - fVar5) - fVar11 * (fVar0 - fVar4)) / (-fVar10 * fVar9 + fVar8 * fVar11);
	if (fVar12 >= 0f && fVar12 <= 1f && fVar13 >= 0f && fVar13 <= 1f) {
		return 1;
	}
	return 0;
}

// Position - 0x134F
Vector3 func_25(vector3 vParam0) {
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

// Position - 0x138E
void func_26(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (vehicle::get_vehicle_engine_health(iParam0) <= 200f) {
				vehicle::set_vehicle_engine_health(iParam0, 500f);
			}
			if (vehicle::get_vehicle_petrol_tank_health(iParam0) <= 700f) {
				vehicle::set_vehicle_engine_health(iParam0, 900f);
			}
			if (entity::get_entity_health(iParam0) < 200) {
				vehicle::set_vehicle_engine_health(iParam0, 500f);
			}
		}
	}
}

// Position - 0x13F3
void func_27(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&iLocal_92, iParam0);
	}
	else {
		gameplay::clear_bit(&iLocal_92, iParam0);
	}
}

// Position - 0x1413
bool func_28(int iParam0) { return gameplay::is_bit_set(iLocal_92, iParam0); }

// Position - 0x1423
void func_29() {
	int iVar0;

	switch (iLocal_72) {
	case 0:
		if (!gameplay::get_mission_flag()) {
			if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_51, vLocal_65, 1, 1, 0)) {
				if (func_54()) {
					iLocal_72 = 2;
					func_53(0, 800);
				}
			}
		}
		break;

	case 1:
		func_52();
		if (!cutscene::is_cutscene_playing()) {
			if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_54, vLocal_65, 1, 1, 0)) {
				func_48();
				iLocal_72 = 3;
				func_53(0, 800);
			}
			func_43();
			if (func_59(player::player_ped_id())) {
				if (weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1)) {
					if (iVar0 != joaat("weapon_unarmed")) {
						weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 0);
					}
				}
				ped::set_ped_max_move_blend_ratio(player::player_ped_id(), 1f);
				controls::disable_control_action(0, 37, 1);
				controls::disable_control_action(0, 24, 1);
				controls::disable_control_action(0, 22, 1);
				controls::disable_control_action(0, 141, 1);
				controls::disable_control_action(0, 140, 1);
				controls::disable_control_action(0, 142, 1);
				controls::disable_control_action(0, 257, 1);
				controls::disable_control_action(0, 25, 1);
				controls::disable_control_action(0, 37, 1);
				controls::disable_control_action(0, 44, 1);
			}
		}
		break;

	case 2:
		func_52();
		if (cam::is_screen_faded_out()) {
			func_39(24, 0);
			func_38(player::player_ped_id(), vLocal_61, fLocal_64);
			cam::set_gameplay_cam_relative_heading(0f);
			cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
			weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
			player::set_player_wanted_level(player::player_id(), 0, 0);
			player::set_player_wanted_level_now(player::player_id(), 0);
			func_37(1);
			func_18(-1023.439f, -479.5592f, 35.81806f, -1014.383f, -495.1239f, 40.10796f, 18.5f, -1024.096f, -485.1923f,
					35.9779f, 209.0203f, func_36(), 1, 0, 1, 1, 0);
			streaming::new_load_scene_start_sphere(vLocal_61, 20f, 0);
			func_33(24, &iLocal_71);
			interior::_load_interior(iLocal_71);
			iLocal_86 = gameplay::get_game_timer() + 40000;
			while (!streaming::is_new_load_scene_loaded() || !interior::is_interior_ready(iLocal_71))
				&&iLocal_86 > gameplay::get_game_timer() { system::wait(0); }
			streaming::new_load_scene_stop();
			if (iLocal_86 <= gameplay::get_game_timer()) {
				interior::unpin_interior(iLocal_71);
				func_38(player::player_ped_id(), vLocal_57, fLocal_60);
				func_53(1, 800);
				iLocal_72 = 0;
			}
			else {
				func_53(1, 800);
				iLocal_72 = 1;
				func_32();
			}
		}
		break;

	case 3:
		func_52();
		func_48();
		if (cam::is_screen_faded_out()) {
			func_38(player::player_ped_id(), vLocal_57, fLocal_60);
			func_39(24, 1);
			interior::unpin_interior(iLocal_71);
			cam::set_gameplay_cam_relative_heading(0f);
			cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
			func_37(0);
			func_31();
			func_30(vLocal_57, 30f, 12, 5000, 0, 0);
			func_53(1, 800);
			iLocal_72 = 0;
		}
		break;
	}
}

// Position - 0x16D0
void func_30(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	int iVar0;
	int iVar1;

	iVar0 = streaming::format_focus_heading(vParam0, iParam3, iParam4, 127);
	if (streaming::_0x07C313F94746702C(iVar0)) {
		iVar1 = gameplay::get_game_timer() + iParam5;
		while (!streaming::_0x7D41E9D2D17C5B2D(iVar0) && gameplay::get_game_timer() < iVar1) {
			if (iParam7) {
				func_48();
			}
			if (iParam6) {
				func_52();
			}
			system::wait(0);
		}
		if (gameplay::get_game_timer() < iVar1) {
		}
		streaming::_0x1EE7D8DF4425F053(iVar0);
	}
}

// Position - 0x173F
void func_31() {
	if (gameplay::is_pc_version()) {
		if (func_28(0)) {
			controls::_0x643ED62D5EA3BEBD();
			func_27(0, 0);
		}
	}
}

// Position - 0x1760
void func_32() {
	if (gameplay::is_pc_version()) {
		if (!func_28(0)) {
			controls::_0x3D42B92563939375("MYSTERY LETTER CAM");
			func_27(0, 1);
		}
	}
}

// Position - 0x1787
var func_33(int iParam0, int iParam1) {
	struct<5> Var0;

	Var0 = {func_34(iParam0)};
	*iParam1 = interior::get_interior_at_coords_with_type(Var0, Var0.f_3);
	return Var0.f_4;
}

// Position - 0x17AC
struct<5> func_34(int iParam0) {
	struct<5> Var0;
	vector3 vVar5;

	switch (iParam0) {
	case 0:
		Var0 = {-447.4833f, 280.3197f, 77.5215f};
		Var0.f_3 = "v_comedy";
		Var0.f_4 = Var0.f_3;
		break;

	case 1:
		Var0 = {-1906.786f, -573.7576f, 19.0773f};
		Var0.f_3 = "v_psycheoffice";
		Var0.f_4 = Var0.f_3;
		break;

	case 2:
		Var0 = {1399.973f, 1148.756f, 113.3336f};
		Var0.f_3 = "v_ranch";
		Var0.f_4 = Var0.f_3;
		break;

	case 3:
		Var0 = {-598.6379f, -1608.399f, 26.0108f};
		Var0.f_3 = "v_recycle";
		Var0.f_4 = Var0.f_3;
		break;

	case 4:
		Var0 = {-556.5089f, 286.3181f, 81.1763f};
		Var0.f_3 = "v_rockclub";
		Var0.f_4 = Var0.f_3;
		break;

	case 5:
		Var0 = {-111.7116f, -11.912f, 69.5196f};
		Var0.f_3 = "v_janitor";
		Var0.f_4 = Var0.f_3;
		break;

	case 6:
		Var0 = {1274.934f, -1714.726f, 53.7715f};
		Var0.f_3 = "v_lesters";
		Var0.f_4 = Var0.f_3;
		break;

	case 7:
		Var0 = {147.433f, -2201.37f, 3.688f};
		Var0.f_3 = "v_torture";
		Var0.f_4 = Var0.f_3;
		break;

	case 8:
		Var0 = {320.9934f, 265.2515f, 82.1221f};
		Var0.f_3 = "v_cinema";
		Var0.f_4 = "v_cinema (Vinewood)";
		break;

	case 9:
		Var0 = {-1425.564f, -244.3f, 15.8053f};
		Var0.f_3 = "v_cinema";
		Var0.f_4 = "v_cinema (Morningwood)";
		break;

	case 10:
		Var0 = {377.153f, -717.567f, 10.0536f};
		Var0.f_3 = "v_cinema";
		Var0.f_4 = "v_cinema (Downtown)";
		break;

	case 11:
		Var0 = {245.1564f, 370.211f, 104.7382f};
		Var0.f_3 = "v_epsilonism";
		Var0.f_4 = Var0.f_3;
		break;

	case 12:
		Var0 = {173.1176f, -1003.279f, -99.9999f};
		Var0.f_3 = "v_garages";
		Var0.f_4 = Var0.f_3;
		break;

	case 13:
		Var0 = {199.9715f, -999.6678f, -100f};
		Var0.f_3 = "v_garagem";
		Var0.f_4 = Var0.f_3;
		break;

	case 14:
		Var0 = {228.6058f, -992.0537f, -99.9999f};
		Var0.f_3 = "v_garagel";
		Var0.f_3 = "hei_dlc_garage_high_new";
		Var0.f_4 = Var0.f_3;
		break;

	case 15:
		Var0 = {1854.254f, 3686.739f, 33.2671f};
		Var0.f_3 = "v_sheriff";
		Var0.f_4 = Var0.f_3;
		break;

	case 16:
		Var0 = {-444.8907f, 6013.587f, 30.7164f};
		Var0.f_3 = "v_sheriff2";
		Var0.f_4 = Var0.f_3;
		break;

	case 17:
		Var0 = {3522.845f, 3707.965f, 19.9918f};
		Var0.f_3 = "v_lab";
		Var0.f_4 = Var0.f_3;
		break;

	case 18:
		Var0 = {717.2994f, -974.4271f, 23.9142f};
		Var0.f_3 = "v_sweat";
		Var0.f_4 = Var0.f_3;
		break;

	case 19:
		Var0 = {717.299f, -974.4271f, 23.9142f};
		Var0.f_3 = "v_sweatempty";
		Var0.f_4 = Var0.f_3;
		break;

	case 20:
		Var0 = {2449.785f, 4983.825f, 45.8106f};
		Var0.f_3 = "v_farmhouse";
		Var0.f_4 = Var0.f_3;
		break;

	case 22:
		Var0 = {1087.195f, -1988.445f, 28.649f};
		Var0.f_3 = "v_foundry";
		Var0.f_4 = Var0.f_3;
		break;

	case 23:
		Var0 = {982.233f, -2160.382f, 28.4761f};
		Var0.f_3 = "v_abattoir";
		Var0.f_4 = Var0.f_3;
		break;

	case 21:
		Var0 = {479.0568f, -1316.825f, 28.2038f};
		Var0.f_3 = "v_chopshop";
		Var0.f_4 = Var0.f_3;
		break;

	case 24:
		Var0 = {-1005.663f, -478.3461f, 49.0265f};
		Var0.f_3 = "v_58_sol_office";
		Var0.f_4 = Var0.f_3;
		break;

	case 25:
		vVar5 = {func_35(1, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (1)";
		break;

	case 26:
		vVar5 = {func_35(2, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (2)";
		break;

	case 27:
		vVar5 = {func_35(3, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (3)";
		break;

	case 28:
		vVar5 = {func_35(4, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (4)";
		break;

	case 29:
		vVar5 = {func_35(5, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (5)";
		break;

	case 30:
		vVar5 = {func_35(6, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (6)";
		break;

	case 31:
		vVar5 = {func_35(7, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (7)";
		break;

	case 32:
		Var0 = {Global_1049427[34 /*1942*/].f_146.f_1517 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (8)";
		break;

	case 33:
		vVar5 = {func_35(35, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (9)";
		break;

	case 34:
		vVar5 = {func_35(36, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (10)";
		break;

	case 35:
		vVar5 = {func_35(37, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (11)";
		break;

	case 36:
		vVar5 = {func_35(38, 0)};
		Var0 = {-20.1f, -580.8f, 91.3f};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (12)";
		break;

	case 37:
		vVar5 = {func_35(39, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (13)";
		break;

	case 38:
		vVar5 = {func_35(40, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (14)";
		break;

	case 39:
		vVar5 = {func_35(41, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (15)";
		break;

	case 40:
		vVar5 = {func_35(42, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (16)";
		break;

	case 41:
		vVar5 = {func_35(43, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (17)";
		break;

	case 42:
		Var0 = {-470.3754f, -698.5207f, 51.5276f};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (18)";
		break;

	case 43:
		Var0 = {-460.6133f, -691.5562f, 69.9067f};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (19)";
		break;

	case 44:
		Var0 = {300.633f, -997.4288f, -99.9727f};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (20)";
		break;

	case 49:
		Var0 = {-171.3969f, 494.2671f, 134.4935f};
		Var0.f_3 = "apa_v_mp_stilts_b";
		Var0.f_4 = "apa_v_mp_stilts_b (1)";
		break;

	case 50:
		Var0 = {339.4982f, 434.0887f, 146.2206f};
		Var0.f_3 = "apa_v_mp_stilts_b";
		Var0.f_4 = "apa_v_mp_stilts_b (2)";
		break;

	case 51:
		Var0 = {-761.3884f, 615.7333f, 140.9805f};
		Var0.f_3 = "apa_v_mp_stilts_b";
		Var0.f_4 = "apa_v_mp_stilts_b (3)";
		break;

	case 52:
		Var0 = {-678.1752f, 591.0076f, 142.2196f};
		Var0.f_3 = "apa_v_mp_stilts_b";
		Var0.f_4 = "apa_v_mp_stilts_b (4)";
		break;

	case 53:
		Var0 = {120.0541f, 553.793f, 181.0943f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (5)";
		break;

	case 54:
		Var0 = {-571.4039f, 655.2008f, 142.6293f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (7)";
		break;

	case 55:
		Var0 = {-742.2565f, 587.6547f, 143.0577f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (8)";
		break;

	case 56:
		Var0 = {-857.2222f, 685.051f, 149.6502f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (10)";
		break;

	case 57:
		Var0 = {-1287.65f, 443.2707f, 94.6919f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (12)";
		break;

	case 58:
		Var0 = {374.2012f, 416.9688f, 142.5991f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (13)";
		break;

	case 45:
		Var0 = {-16.29585f, -684.0385f, 33.50832f};
		Var0.f_3 = "dt1_03_carpark";
		Var0.f_4 = "dt1_03_carpark";
		break;

	case 46:
		Var0 = {341.1f, -1000f, -99.2f};
		Var0.f_3 = "v_apart_midspaz";
		Var0.f_4 = "v_apart_midspaz";
		break;

	case 47:
		Var0 = {199.9716f, -1018.954f, -100f};
		Var0.f_3 = "v_garagem_sp";
		Var0.f_4 = Var0.f_3;
		break;

	case 48:
		Var0 = {-1388.001f, -618.4197f, 30.8196f};
		Var0.f_3 = "v_bahama";
		Var0.f_4 = Var0.f_3;
		break;
	}
	switch (iParam0) {
	case 59:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 60:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_02";
		Var0.f_4 = Var0.f_3;
		break;

	case 61:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_03";
		Var0.f_4 = Var0.f_3;
		break;

	case 62:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_04";
		Var0.f_4 = Var0.f_3;
		break;

	case 63:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_05";
		Var0.f_4 = Var0.f_3;
		break;

	case 64:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_06";
		Var0.f_4 = Var0.f_3;
		break;

	case 65:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_07";
		Var0.f_4 = Var0.f_3;
		break;

	case 66:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_08";
		Var0.f_4 = Var0.f_3;
		break;

	case 67:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 68:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_02";
		Var0.f_4 = Var0.f_3;
		break;

	case 69:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_03";
		Var0.f_4 = Var0.f_3;
		break;

	case 70:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_04";
		Var0.f_4 = Var0.f_3;
		break;

	case 71:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_05";
		Var0.f_4 = Var0.f_3;
		break;

	case 72:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_06";
		Var0.f_4 = Var0.f_3;
		break;

	case 73:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_07";
		Var0.f_4 = Var0.f_3;
		break;

	case 74:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_08";
		Var0.f_4 = Var0.f_3;
		break;

	case 75:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 76:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_02";
		Var0.f_4 = Var0.f_3;
		break;

	case 77:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_03";
		Var0.f_4 = Var0.f_3;
		break;

	case 78:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_04";
		Var0.f_4 = Var0.f_3;
		break;

	case 79:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_05";
		Var0.f_4 = Var0.f_3;
		break;

	case 80:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_06";
		Var0.f_4 = Var0.f_3;
		break;

	case 81:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_07";
		Var0.f_4 = Var0.f_3;
		break;

	case 82:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_08";
		Var0.f_4 = Var0.f_3;
		break;

	case 83:
		vVar5 = {func_35(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 84:
		vVar5 = {func_35(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 85:
		vVar5 = {func_35(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 86:
		vVar5 = {func_35(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 87:
		vVar5 = {func_35(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 88:
		vVar5 = {func_35(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 89:
		vVar5 = {func_35(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 90:
		vVar5 = {func_35(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 91:
		vVar5 = {func_35(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 92:
		vVar5 = {func_35(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 93:
		vVar5 = {func_35(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 94:
		vVar5 = {func_35(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 95:
		vVar5 = {func_35(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 96:
		vVar5 = {func_35(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 97:
		vVar5 = {func_35(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 98:
		vVar5 = {func_35(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 99:
		vVar5 = {func_35(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 100:
		vVar5 = {func_35(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 101:
		vVar5 = {func_35(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 102:
		vVar5 = {func_35(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 103:
		vVar5 = {func_35(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 104:
		vVar5 = {func_35(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 105:
		vVar5 = {func_35(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 106:
		vVar5 = {func_35(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 107:
		vVar5 = {func_35(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 108:
		vVar5 = {func_35(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 109:
		vVar5 = {func_35(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 110:
		vVar5 = {func_35(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 111:
		vVar5 = {func_35(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 112:
		vVar5 = {func_35(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 113:
		vVar5 = {func_35(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 114:
		vVar5 = {func_35(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 115:
		vVar5 = {func_35(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 116:
		vVar5 = {func_35(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 117:
		vVar5 = {func_35(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 118:
		vVar5 = {func_35(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 119:
		vVar5 = {func_35(91, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "bkr_biker_dlc_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 120:
		vVar5 = {func_35(97, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "bkr_biker_dlc_int_02";
		Var0.f_4 = Var0.f_3;
		break;

	case 121:
		vVar5 = {func_35(103, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 122:
		vVar5 = {func_35(104, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 123:
		vVar5 = {func_35(105, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 124:
		vVar5 = {func_35(106, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 125:
		vVar5 = {func_35(107, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 126:
		vVar5 = {func_35(108, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 127:
		vVar5 = {func_35(109, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 128:
		vVar5 = {func_35(110, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 129:
		vVar5 = {func_35(111, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 130:
		vVar5 = {func_35(112, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 131:
		vVar5 = {func_35(113, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 132:
		vVar5 = {func_35(114, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 133:
		vVar5 = {func_35(103, 1)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_imptexp_mod_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 134:
		vVar5 = {func_35(106, 1)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_imptexp_mod_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 135:
		vVar5 = {func_35(109, 1)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_imptexp_mod_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 136:
		vVar5 = {func_35(112, 1)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_imptexp_mod_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	default: break;
	}
	return Var0;
}

// Position - 0x307A
struct<6>
func_35(int iParam0, int iParam1) {
	struct<6> Var0;

	switch (iParam0) {
	case -1:
		Var0 = {-794.9184f, 339.6266f, 200.4135f};
		Var0.f_3 = {0f, 0f, 180f};
		break;

	case 1:
		Var0 = {-794.9184f, 339.6266f, 200.4135f};
		Var0.f_3 = {0f, 0f, 180f};
		break;

	case 2:
		Var0 = {-761.0982f, 317.6259f, 169.5963f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 3:
		Var0 = {-761.1888f, 317.6295f, 216.0503f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 4:
		Var0 = {-795.3856f, 340.0188f, 152.7941f};
		Var0.f_3 = {0f, 0f, 180f};
		break;

	case 61:
		Var0 = {-778.5056f, 332.3779f, 212.1968f};
		Var0.f_3 = {0f, 0f, 90f};
		break;

	case 5:
		Var0 = {-258.1807f, -950.6853f, 70.0239f};
		Var0.f_3 = {0f, 0f, 70f};
		break;

	case 6:
		Var0 = {-285.0051f, -957.6552f, 85.3035f};
		Var0.f_3 = {0f, 0f, -110f};
		break;

	case 7:
		Var0 = {-1471.882f, -530.7484f, 62.34918f};
		Var0.f_3 = {0f, 0f, -145f};
		break;

	case 34:
		Var0 = {-1471.882f, -530.7484f, 49.72156f};
		Var0.f_3 = {0f, 0f, -145f};
		break;

	case 62:
		Var0 = {-1463.15f, -540.2369f, 74.2439f};
		Var0.f_3 = {0f, 0f, -145f};
		break;

	case 35:
		Var0 = {-885.3702f, -451.4775f, 119.327f};
		Var0.f_3 = {0f, 0f, 27.55617f};
		break;

	case 36:
		Var0 = {-913.0385f, -438.4284f, 114.3997f};
		Var0.f_3 = {0f, 0f, -153.3093f};
		break;

	case 37:
		Var0 = {-892.5499f, -430.4789f, 88.25368f};
		Var0.f_3 = {0f, 0f, 116.9193f};
		break;

	case 38:
		Var0 = {-35.0462f, -576.317f, 82.90739f};
		Var0.f_3 = {0f, 0f, 160f};
		break;

	case 39:
		Var0 = {-10.3788f, -590.7431f, 93.02542f};
		Var0.f_3 = {0f, 0f, 70f};
		break;

	case 65:
		Var0 = {-22.2487f, -589.1461f, 80.2305f};
		Var0.f_3 = {0f, 0f, 69.88f};
		break;

	case 40:
		Var0 = {-900.6311f, -376.7462f, 78.27306f};
		Var0.f_3 = {0f, 0f, 26.92611f};
		break;

	case 41:
		Var0 = {-929.483f, -374.5104f, 102.2329f};
		Var0.f_3 = {0f, 0f, -152.5531f};
		break;

	case 63:
		Var0 = {-914.4202f, -375.8189f, 114.4743f};
		Var0.f_3 = {0f, 0f, -63f};
		break;

	case 42:
		Var0 = {-617.1647f, 64.6042f, 100.8196f};
		Var0.f_3 = {0f, 0f, 180f};
		break;

	case 43:
		Var0 = {-584.2015f, 42.7133f, 86.4187f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 64:
		Var0 = {-609.5665f, 50.2203f, 98.3998f};
		Var0.f_3 = {0f, 0f, -90f};
		break;

	case 73:
		Var0 = {-171.3969f, 494.2671f, 134.4935f};
		Var0.f_3 = {0f, 0f, 11f};
		break;

	case 74:
		Var0 = {339.4982f, 434.0887f, 146.2206f};
		Var0.f_3 = {0f, 0f, -63.5f};
		break;

	case 75:
		Var0 = {-761.3884f, 615.7333f, 140.9805f};
		Var0.f_3 = {0f, 0f, -71.5f};
		break;

	case 76:
		Var0 = {-678.1752f, 591.0076f, 142.2196f};
		Var0.f_3 = {0f, 0f, 40.5f};
		break;

	case 77:
		Var0 = {120.0541f, 553.793f, 181.0943f};
		Var0.f_3 = {0f, 0f, 6f};
		break;

	case 78:
		Var0 = {-571.4039f, 655.2008f, 142.6293f};
		Var0.f_3 = {0f, 0f, -14.5f};
		break;

	case 79:
		Var0 = {-742.2565f, 587.6547f, 143.0577f};
		Var0.f_3 = {0f, 0f, -29f};
		break;

	case 80:
		Var0 = {-857.2222f, 685.051f, 149.6502f};
		Var0.f_3 = {0f, 0f, 4.5f};
		break;

	case 81:
		Var0 = {-1287.65f, 443.2707f, 94.6919f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 82:
		Var0 = {374.2012f, 416.9688f, 142.6977f};
		Var0.f_3 = {0f, 0f, -14f};
		break;

	case 83:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = {0f, 0f, 90f};
		break;

	case 84:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = {0f, 0f, 90f};
		break;

	case 85:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = {0f, 0f, -90f};
		break;

	case 86:
		Var0 = {-1573.098f, -4085.806f, 9.7851f};
		Var0.f_3 = {0f, 0f, 162f};
		break;

	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 66:
	case 67:
	case 68:
	case 69:
		Var0 = {342.8157f, -997.4288f, -100f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 70:
	case 71:
	case 72:
		Var0 = {260.3297f, -997.4288f, -100f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 87:
		Var0 = {-1572.187f, -570.8315f, 109.9879f};
		Var0.f_3 = {0f, 0f, -54f};
		break;

	case 88:
		Var0 = {-1383.954f, -476.7112f, 73.507f};
		Var0.f_3 = {0f, 0f, 8f};
		break;

	case 89:
		Var0 = {-138.0029f, -629.739f, 170.2854f};
		Var0.f_3 = {0f, 0f, -84f};
		break;

	case 90:
		Var0 = {-74.8895f, -817.6883f, 244.8508f};
		Var0.f_3 = {0f, 0f, 70f};
		break;

	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
		Var0 = {1100.764f, -3159.384f, -34.9342f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 97:
	case 98:
	case 99:
	case 100:
	case 101:
	case 102:
		Var0 = {1005.806f, -3157.67f, -36.0897f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 103:
		if (!iParam1) {
			Var0 = {-1576.571f, -569.7595f, 85.5f};
			Var0.f_3 = {0f, 0f, 36.1f};
		}
		else {
			Var0 = {-1578.022f, -576.4251f, 104.2f};
			Var0.f_3 = {0f, 0f, -144.04f};
		}
		break;

	case 104:
		if (!iParam1) {
			Var0 = {-1571.254f, -566.5865f, 85.5f};
			Var0.f_3 = {0f, 0f, -53.9f};
		}
		else {
			Var0 = {-1578.022f, -576.4251f, 104.2f};
			Var0.f_3 = {0f, 0f, -144.04f};
		}
		break;

	case 105:
		if (!iParam1) {
			Var0 = {-1568.098f, -571.9171f, 85.5f};
			Var0.f_3 = {0f, 0f, -143.9f};
		}
		else {
			Var0 = {-1578.022f, -576.4251f, 104.2f};
			Var0.f_3 = {0f, 0f, -144.04f};
		}
		break;

	case 106:
		if (!iParam1) {
			Var0 = {-1384.518f, -475.8657f, 56.1f};
			Var0.f_3 = {0f, 0f, 98.7f};
		}
		else {
			Var0 = {-1391.245f, -473.9638f, 77.2f};
			Var0.f_3 = {0f, 0f, 98.86f};
		}
		break;

	case 107:
		if (!iParam1) {
			Var0 = {-1384.538f, -475.8829f, 48.1f};
			Var0.f_3 = {0f, 0f, 98.7f};
		}
		else {
			Var0 = {-1391.245f, -473.9638f, 77.2f};
			Var0.f_3 = {0f, 0f, 98.86f};
		}
		break;

	case 108:
		if (!iParam1) {
			Var0 = {-1378.994f, -477.2481f, 56.1f};
			Var0.f_3 = {0f, 0f, -81.1f};
		}
		else {
			Var0 = {-1391.245f, -473.9638f, 77.2f};
			Var0.f_3 = {0f, 0f, 98.86f};
		}
		break;

	case 109:
		if (!iParam1) {
			Var0 = {-186.5683f, -576.4624f, 135f};
			Var0.f_3 = {0f, 0f, 96.16f};
		}
		else {
			Var0 = {-146.6167f, -596.6301f, 166f};
			Var0.f_3 = {0f, 0f, -140f};
		}
		break;

	case 110:
		if (!iParam1) {
			Var0 = {-113.886f, -564.3862f, 135f};
			Var0.f_3 = {0f, 0f, 110.96f};
		}
		else {
			Var0 = {-146.6167f, -596.6301f, 166f};
			Var0.f_3 = {0f, 0f, -140f};
		}
		break;

	case 111:
		if (!iParam1) {
			Var0 = {-134.6568f, -635.1774f, 135f};
			Var0.f_3 = {0f, 0f, -9.04f};
		}
		else {
			Var0 = {-146.6167f, -596.6301f, 166f};
			Var0.f_3 = {0f, 0f, -140f};
		}
		break;

	case 112:
		if (!iParam1) {
			Var0 = {-79.0479f, -822.6393f, 221f};
			Var0.f_3 = {0f, 0f, 70f};
		}
		else {
			Var0 = {-73.904f, -821.6204f, 284f};
			Var0.f_3 = {0f, 0f, -110f};
		}
		break;

	case 113:
		if (!iParam1) {
			Var0 = {-70.3086f, -819.5784f, 221f};
			Var0.f_3 = {0f, 0f, 160f};
		}
		else {
			Var0 = {-73.904f, -821.6204f, 284f};
			Var0.f_3 = {0f, 0f, -110f};
		}
		break;

	case 114:
		if (!iParam1) {
			Var0 = {-79.9861f, -818.425f, 221f};
			Var0.f_3 = {0f, 0f, -20f};
		}
		else {
			Var0 = {-73.904f, -821.6204f, 284f};
			Var0.f_3 = {0f, 0f, -110f};
		}
		break;
	}
	return Var0;
}

// Position - 0x3C30
Vector3
func_36() {
	return 2.55f, 5.665f, 2.55f;
}

// Position - 0x3C47
void func_37(int iParam0) {
	func_27(5, iParam0);
	time::pause_clock(iParam0);
}

// Position - 0x3C5C
void func_38(int iParam0, vector3 vParam1, float fParam4) {
	entity::set_entity_coords(iParam0, vParam1, 1, 0, 0, 1);
	entity::set_entity_heading(iParam0, fParam4);
}

// Position - 0x3C7A
void func_39(int iParam0, int iParam1) {
	char *sVar0;
	int iVar1;

	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_33(iParam0, &iVar1);
	if (!gameplay::are_strings_equal("NONE", sVar0) && iVar1 != 0) {
		if (iParam1) {
			if (interior::is_interior_disabled(iVar1)) {
				return;
			}
			if (interior::get_interior_from_entity(player::player_ped_id()) == iVar1) {
				func_42(iParam0, 1);
				return;
			}
		}
		else {
			if (!interior::is_interior_disabled(iVar1)) {
				return;
			}
			if (func_40(iParam0)) {
				func_42(iParam0, 0);
			}
		}
		interior::disable_interior(iVar1, iParam1);
		if (iParam1) {
		}
	}
}

// Position - 0x3D05
bool func_40(int iParam0) {
	struct<2> Var0;

	Var0 = {func_41(iParam0)};
	if (gameplay::is_bit_set(Global_31561[Var0.f_1], Var0)) {
		return true;
	}
	return false;
}

// Position - 0x3D2E
struct<2> func_41(var uParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 5) {
		iVar2 += 32;
		if (iVar0 < iVar2) {
			Var3.f_1 = iVar1;
			Var3 = iVar0 - Var3.f_1 * 32;
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

//Position - 0x3D80
void func_42(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = {func_41(iParam0)};
	if (iParam1) {
		gameplay::set_bit(&Global_31561[Var0.f_1], Var0);
	}
	else {
		gameplay::clear_bit(&Global_31561[Var0.f_1], Var0);
	}
}

// Position - 0x3DB8
void func_43() {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {-1007.013f, -478.3662f, 49.02818f};
	vVar3 = {-1007.85f, -476.9573f, 51.02807f};
	fVar6 = 1.75f;
	switch (iLocal_73) {
	case 0:
		if (entity::is_entity_in_angled_area(player::player_ped_id(), vVar0, vVar3, fVar6, 0, 1, 0) && !func_5(0)) {
			func_47(sLocal_90);
			iLocal_73++;
		}
		break;

	case 1:
		if (entity::is_entity_in_angled_area(player::player_ped_id(), vVar0, vVar3, fVar6, 0, 1, 0) && !func_5(0)) {
			if (!func_46(player::player_ped_id(), -880529684)) {
				ai::task_look_at_coord(player::player_ped_id(), -1007.995f, -476.8016f, 49.9117f, -1, 0, 2);
			}
			if (controls::is_control_just_pressed(2, 51)) {
				func_45(0);
				ai::task_follow_nav_mesh_to_coord(player::player_ped_id(), -1007.351f, -477.5197f, 49.0282f, 1f, -1,
												  0.5f, 0, 30.4025f);
				func_47(sLocal_91);
				ui::display_radar(0);
				cam::set_cam_active(iLocal_74, 1);
				cam::render_script_cams(1, 0, 3000, 1, 0, 0);
				iLocal_73++;
			}
		}
		else {
			ui::clear_help(1);
			ai::clear_ped_tasks(player::player_ped_id());
			iLocal_73--;
		}
		break;

	case 2:
		func_48();
		func_45(0);
		ui::display_radar(0);
		if (!func_44(sLocal_91)) {
			func_47(sLocal_91);
		}
		if (controls::is_control_just_pressed(2, 51)) {
			if (cam::_0xEE778F8C7E1142E2(0) == 4) {
				iLocal_86 = gameplay::get_game_timer() + 300;
				graphics::_start_screen_effect("CamPushInNeutral", 0, 0);
				audio::play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0);
			}
			else {
				iLocal_86 = 0;
			}
			iLocal_73++;
		}
		break;

	case 3:
		func_48();
		if (iLocal_86 < gameplay::get_game_timer()) {
			cam::set_gameplay_cam_relative_heading(0f);
			cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
			ui::display_radar(1);
			func_45(1);
			ai::clear_ped_tasks(player::player_ped_id());
			cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			cam::set_cam_active(iLocal_74, 0);
			iLocal_73++;
		}
		break;

	case 4: iLocal_73 = 0; break;
	}
}

// Position - 0x3FB3
bool func_44(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x3FC6
void func_45(int iParam0) {
	func_27(6, !iParam0);
	player::set_player_control(player::player_id(), iParam0, 0);
}

// Position - 0x3FE1
bool func_46(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = ai::get_script_task_status(iParam0, iParam1);
	return iVar0 == 1 || iVar0 == 0;
}

// Position - 0x4003
void func_47(char *sParam0) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0x4019
void func_48() {
	if (Global_14443.f_1 != 1) {
		if (func_5(0)) {
			func_49(0);
		}
		gameplay::set_bit(&Global_2314, 2);
	}
}

// Position - 0x4041
void func_49(int iParam0) {
	if (Global_14604) {
		func_51(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&Global_2314, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 30);
	}
	else {
		gameplay::clear_bit(&Global_2313, 30);
	}
	if (!func_50()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x40B1
int func_50() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x40D8
void func_51(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_5(0)) {
			Global_14604 = 1;
			if (iParam1) {
				mobile::get_mobile_phone_position(&Global_14380);
			}
			Global_14371 = {Global_14389[Global_14388 /*3*/]};
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
	else if (Global_14604 == 1) {
		Global_14604 = 0;
		Global_14371 = {Global_14396[Global_14388 /*3*/]};
		if (iParam1) {
			mobile::set_mobile_phone_position(Global_14380);
		}
		else {
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
}

// Position - 0x414C
void func_52() { Global_17151.f_6 = 1; }

// Position - 0x415A
void func_53(int iParam0, int iParam1) {
	func_27(4, !iParam0);
	if (iParam0) {
		cam::do_screen_fade_in(iParam1);
	}
	else {
		cam::do_screen_fade_out(iParam1);
	}
}

// Position - 0x417E
bool func_54() {
	int iVar0;

	iVar0 = time::get_clock_hours();
	if (iVar0 >= 21 || iVar0 < 6) {
		return true;
	}
	func_2("MM_SOLBUSY", 5000);
	return false;
}

// Position - 0x41B1
bool func_55() {
	if (iLocal_72 == 1) {
		return true;
	}
	if (!func_63()) {
		return false;
	}
	if (!func_58(61)) {
		return false;
	}
	if (player::get_player_wanted_level(player::player_id()) > 0 && iLocal_72 == 0) {
		return false;
	}
	if (func_62(0)) {
		return false;
	}
	if (func_57()) {
		return false;
	}
	if (func_12(func_10())) {
		if (func_56(func_10()) == 4 || func_56(func_10()) == 5) {
			return false;
		}
	}
	if (gameplay::get_random_event_flag()) {
		return false;
	}
	if (Global_25336) {
		return false;
	}
	return true;
}

// Position - 0x4250
int func_56(int iParam0) {
	if (!func_12(iParam0)) {
		return 7;
	}
	return Global_101700.f_6647.f_919[iParam0];
}

// Position - 0x4274
bool func_57() {
	int iVar0;

	if (Global_25340) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				if (!ped::is_ped_injured(vehicle::get_ped_in_vehicle_seat(iVar0, 0, 0))) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x42B8
int func_58(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x42E4
bool func_59(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x4305
void func_60(int iParam0, int iParam1, int iParam2) {
	if (iParam1) {
		gameplay::set_bit(&Global_101700.f_9008.f_133, iParam0);
		if (!iParam2) {
			audio::play_sound_frontend(iLocal_81, sLocal_79, sLocal_80, 0);
		}
		func_61();
	}
	else {
		gameplay::clear_bit(&Global_101700.f_9008.f_133, iParam0);
	}
}

// Position - 0x4349
int func_61() {
	if (func_62(0)) {
		return 0;
	}
	if (Global_91530.f_8) {
		if (Global_91530.f_10 > 0) {
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1) {
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

// Position - 0x4394
bool func_62(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x43BF
bool func_63() { return entity::get_entity_model(player::player_ped_id()) == joaat("player_zero"); }

// Position - 0x43D5
int func_64() {
	if (func_59(player::player_ped_id())) {
		return ped::is_ped_in_any_vehicle(player::player_ped_id(), 0);
	}
	return 0;
}

// Position - 0x43F5
bool func_65() { return system::vdist2(func_67(iLocal_85), vLocal_82) < func_66(iLocal_85); }

// Position - 0x4412
float func_66(int iParam0) {
	switch (iParam0) {
	case 0: return fLocal_48;

	case 1: return fLocal_48;

	case 2: return fLocal_48;

	case 3: return fLocal_48;

	case 4: return fLocal_49;

	case 5: return fLocal_50;

	case 6: return 4f;

	default:
	}
	return 0f;
}

// Position - 0x4483
Vector3 func_67(int iParam0) {
	switch (iParam0) {
	case 0: return 1.8941f, 309.6565f, 111.0097f;

	case 1: return 190.1696f, -431.7692f, 42.1372f;

	case 2: return 283.3024f, 212.6587f, 104.5986f;

	case 3: return -425.1273f, 1064.801f, 323.8097f;

	case 4: return -3160.96f, 3005.628f, -39.9701f;

	case 5: return -1008.142f, -476.2818f, 49.9633f;

	case 6: return -544.11f, 1986.58f, 127.03f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x4552
bool func_68(int iParam0) { return gameplay::is_bit_set(Global_101700.f_9008.f_133, iParam0); }

// Position - 0x4569
bool func_69() {
	switch (iLocal_85) {
	case 0:
	case 1:
	case 2:
	case 3: return !func_68(iLocal_85) && func_71();

	case 4: return func_71();

	case 5: return func_16(iLocal_85) && func_71() || iLocal_72 == 1 || iLocal_72 == 3 || iLocal_72 == 2;

	case 6: return func_71() | func_28(2) & func_70(vLocal_68);

	default:
	}
	return false;
}

// Position - 0x460C
var func_70(vector3 vParam0) {
	var uVar0;
	var uVar1;

	return graphics::get_screen_coord_from_world_coord(vParam0, &uVar0, &uVar1);
}

// Position - 0x4620
bool func_71() { return system::vdist2(func_73(iLocal_85), vLocal_82) < func_72(iLocal_85); }

// Position - 0x463D
float func_72(int iParam0) {
	switch (iParam0) {
	case 0: return fLocal_47;

	case 1: return fLocal_47;

	case 2: return fLocal_47;

	case 3: return fLocal_47;

	case 4: return fLocal_47;

	case 5: return fLocal_47;

	case 6: return fLocal_47;

	default:
	}
	return 0f;
}

// Position - 0x46AF
Vector3 func_73(int iParam0) {
	switch (iParam0) {
	case 0: return 1.8941f, 309.6565f, 111.0097f;

	case 1: return 190.1696f, -431.7692f, 42.1372f;

	case 2: return 283.3024f, 212.6587f, 104.5986f;

	case 3: return -425.1273f, 1064.801f, 323.8097f;

	case 4: return -3174.901f, 3034.061f, -35.645f;

	case 5: return -1008.69f, -476.4341f, 49.9544f;

	case 6: return -544.11f, 1986.58f, 127.03f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x477E
void func_74() {
	if (func_59(player::player_ped_id())) {
		vLocal_82 = {entity::get_entity_coords(player::player_ped_id(), 0)};
	}
}

// Position - 0x479E
void func_75(vector3 vParam0) {
	int iVar0;
	int iVar1;

	if (!func_81()) {
		script::terminate_this_thread();
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("murdermystery")) > 1) {
		script::terminate_this_thread();
	}
	iVar0 = 0;
	while (iVar0 < 7 && iLocal_85 == 7) {
		iVar1 = iVar0;
		if (func_80(vParam0, func_73(iVar1), 1056964608)) {
			iLocal_85 = iVar1;
		}
		iVar0++;
	}
	func_76();
}

// Position - 0x4801
void func_76() {
	switch (iLocal_85) {
	case 0:
	case 1:
	case 2:
	case 3: func_79(&iLocal_87, func_67(iLocal_85), 0.2f); break;

	case 4:
		func_78(-671910391);
		func_77(sLocal_88);
		iLocal_78 = ped::create_ped(26, -671910391, func_67(4), 184.5548f, 1, 1);
		streaming::set_model_as_no_longer_needed(-671910391);
		ai::task_play_anim(iLocal_78, sLocal_88, sLocal_89, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
		ped::set_blocking_of_non_temporary_events(iLocal_78, 1);
		ped::set_ped_keep_task(iLocal_78, 1);
		entity::freeze_entity_position(iLocal_78, 1);
		audio::stop_ped_speaking(iLocal_78, 1);
		audio::disable_ped_pain_audio(iLocal_78, 1);
		ped::set_ped_config_flag(iLocal_78, 118, 0);
		ped::set_ped_config_flag(iLocal_78, 208, 1);
		entity::set_entity_invincible(iLocal_78, 1);
		ped::set_ped_relationship_group_hash(iLocal_78, 1862763509);
		break;

	case 5:
		iLocal_75 = 731806707;
		object::add_door_to_system(iLocal_75, joaat("v_ilev_sol_off_door01"), -1002.147f, -478.064f, 50.117f, 1, 1, 0);
		object::_set_door_acceleration_limit(iLocal_75, 1, 1, 0);
		iLocal_74 = cam::create_camera_with_params(26379945, -1008.056f, -476.7573f, 50.2493f, -89.5003f, 0f, 38.7952f,
												   50f, 0, 2);
		break;

	case 6:
		func_78(732742363);
		iLocal_76 = ped::create_ped(26, 732742363, func_67(6), 22.9631f, 1, 1);
		ped::set_ped_prop_index(iLocal_76, 0, 0, 0, 0);
		streaming::set_model_as_no_longer_needed(732742363);
		audio::stop_ped_speaking(iLocal_76, 1);
		audio::disable_ped_pain_audio(iLocal_76, 1);
		ped::explode_ped_head(iLocal_76, joaat("weapon_sniperrifle"));
		ped::set_ped_relationship_group_hash(iLocal_76, 1862763509);
		iLocal_77 = object::create_object_no_offset(130556722, -543.71f, 1986.2f, 126.05f, 1, 1, 0);
		break;
	}
}

// Position - 0x49B9
void func_77(char *sParam0) {
	streaming::request_anim_dict(sParam0);
	while (!streaming::has_anim_dict_loaded(sParam0)) {
		system::wait(0);
	}
}

// Position - 0x49D9
void func_78(int iParam0) {
	streaming::request_model(iParam0);
	while (!streaming::has_model_loaded(iParam0)) {
		system::wait(0);
	}
}

// Position - 0x49F9
void func_79(int iParam0, vector3 vParam1, float fParam4) {
	*iParam0 = graphics::create_tracked_point();
	if (*iParam0 == 0) {
	}
	else {
		graphics::set_tracked_point_info(*iParam0, vParam1, fParam4);
	}
}

// Position - 0x4A1F
bool func_80(vector3 vParam0, vector3 vParam3, float fParam6) { return system::vdist(vParam0, vParam3) <= fParam6; }

// Position - 0x4A36
int func_81() {
	int iVar0;

	if (network::network_is_signed_in()) {
		if (network::_network_are_ros_available()) {
			if (network::_0x593570C289A77688()) {
				stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				gameplay::set_bit(&iVar0, 2);
				gameplay::set_bit(&iVar0, 4);
				gameplay::set_bit(&iVar0, 6);
				gameplay::set_bit(&Global_25, 2);
				gameplay::set_bit(&Global_25, 4);
				gameplay::set_bit(&Global_25, 6);
				stats::stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (gameplay::_0x5AA3BEFA29F03AD4()) {
					iVar0 = gameplay::get_profile_setting(866);
					gameplay::set_bit(&iVar0, 0);
					stats::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2) {
		return 1;
	}
	else if (Global_139179 == 3) {
		return 0;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x4AF1
void func_82() {
	func_83();
	func_31();
	script::terminate_this_thread();
}

// Position - 0x4B05
void func_83() {
	switch (iLocal_85) {
	case 0:
	case 1:
	case 2:
	case 3:
		graphics::destroy_tracked_point(iLocal_87);
		iLocal_87 = 0;
		break;

	case 4:
		if (entity::does_entity_exist(iLocal_78)) {
			entity::set_ped_as_no_longer_needed(&iLocal_78);
		}
		streaming::remove_anim_dict(sLocal_88);
		break;

	case 5:
		if (object::_does_door_exist(iLocal_75)) {
			object::remove_door_from_system(iLocal_75);
		}
		if (cam::does_cam_exist(iLocal_74)) {
			cam::destroy_cam(iLocal_74, 0);
		}
		if (func_28(4)) {
			cam::do_screen_fade_in(0);
		}
		if (func_28(5)) {
			time::pause_clock(0);
		}
		if (func_28(6)) {
			player::set_player_control(player::player_id(), 1, 0);
		}
		if (func_44(sLocal_90) || func_44(sLocal_91)) {
			ui::clear_help(1);
		}
		break;

	case 6:
		if (entity::does_entity_exist(iLocal_76)) {
			entity::set_ped_as_no_longer_needed(&iLocal_76);
		}
		if (entity::does_entity_exist(iLocal_77)) {
			entity::set_object_as_no_longer_needed(&iLocal_77);
		}
		if (func_28(2)) {
			entity::remove_model_hide(vLocal_68, 200f, -1241212535, 0);
		}
		break;
	}
}
