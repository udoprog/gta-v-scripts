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
char *sLocal_18 = NULL;
var uLocal_19 = 0;
var uLocal_20 = 0;
var uLocal_21 = 0;
var uLocal_22 = 0;
float fLocal_23 = 0f;
float fLocal_24 = 0f;
float fLocal_25 = 0f;
var uLocal_26 = 0;
var uLocal_27 = 0;
int *iLocal_28 = NULL;
var uLocal_29 = 0;
struct<2> Local_30 = {
	0, 0
};
var uLocal_32 = 0;
var uLocal_33 = 0;
struct<2> Local_34 = {
	0, 0
};
var uLocal_36 = 0;
var uLocal_37 = 0;
struct<2> Local_38 = {
	0, 0
};
var uLocal_40 = 0;
var uLocal_41 = 0;
struct<2> Local_42 = {
	0, 0
};
var uLocal_44 = 0;
var uLocal_45 = 0;
struct<2> Local_46 = {
	0, 0
};
var uLocal_48 = 0;
var uLocal_49 = 0;
struct<2> Local_50 = {
	0, 0
};
var uLocal_52 = 0;
var uLocal_53 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	StringCopy(&Local_30, "CELL_212", 16);
	StringCopy(&Local_34, "CELL_213", 16);
	StringCopy(&Local_38, "CELL_39", 16);
	StringCopy(&Local_42, "CELL_MP_300", 16);
	StringCopy(&Local_46, "CELL_MP_301", 16);
	StringCopy(&Local_50, "CELL_MP_302", 16);
	gameplay::network_set_script_is_safe_for_network_game();
	func_41(&iLocal_28);
	func_32();
	while (true) {
		system::wait(0);
		if (!network::network_is_in_session()) {
			func_30(1);
			func_29();
		}
		if (Global_14443.f_1 != 9 && Global_14443.f_1 > 3) {
			func_3();
			if (Global_14443.f_1 != 8) {
				if (func_2()) {
					func_29();
				}
			}
		}
		if (func_1()) {
			func_29();
		}
	}
}

// Position - 0xDE
bool func_1() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 3 || Global_14443.f_1 == 0 || Global_14387 == 1) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x121
bool func_2() {
	if (Global_2919 == 1 || Global_14443.f_1 < 7) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x14A
void func_3() {
	if (func_25(&iLocal_28)) {
		if (func_14()) {
			if (Global_2452449) {
				network::_0x57B192B4D4AD23D5(0);
				func_8(37, func_9(1, 1));
				Global_2452449 = 0;
			}
			else {
				network::_0x57B192B4D4AD23D5(1);
				func_8(36, func_9(1, 1));
				Global_2452449 = 1;
			}
			func_4(0);
			return;
		}
	}
}

// Position - 0x1A0
void func_4(int iParam0) {
	if (Global_14604) {
		func_6(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&G_SleepModeOffOn11, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 30);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 30);
	}
	if (!func_5()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x210
int func_5() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x237
void func_6(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_7(0)) {
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

// Position - 0x2AB
bool func_7(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 14)) {
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

// Position - 0x305
void func_8(int iParam0, int iParam1) {
	vector3 vVar0;

	vVar0.x = 2;
	vVar0.y = player::player_id();
	vVar0.z = iParam0;
	if (iParam1 != 0) {
		script::trigger_script_event(1, &vVar0, 3, iParam1);
	}
}

// Position - 0x333
int func_9(int iParam0, int iParam1) {
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 32) {
		iVar2 = player::int_to_playerindex(iVar1);
		if (func_13(iVar2, 0, 0)) {
			if (iVar2 != player::player_id() || iParam0) {
				if (iParam1) {
					gameplay::set_bit(&uVar0, iVar1);
				}
				else if (!func_10(iVar2, 0)) {
					gameplay::set_bit(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

// Position - 0x398
bool func_10(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_11(-1, 0) == 8;
	}
	else {
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1) {
		if (network::network_is_player_active(iParam0)) {
			bVar0 = player::get_player_team(iParam0) == 8;
		}
	}
	return bVar0;
}

// Position - 0x3E3
int func_11(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_12();
	}
	if (Global_1315213[iVar1] == 1) {
		if (iParam1) {
		}
		iVar0 = 8;
	}
	else {
		iVar0 = Global_1312729[iVar1];
		if (iParam1) {
		}
	}
	return iVar0;
}

// Position - 0x424
var func_12() { return Global_1312735; }

// Position - 0x430
bool func_13(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1) {
		if (network::network_is_player_active(iParam0)) {
			if (iParam1) {
				if (!player::is_player_playing(iParam0)) {
					return false;
				}
			}
			if (iParam2) {
				if (!Global_2433125.f_3[iVar0]) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

// Position - 0x47A
bool func_14() {
	if (!func_20(player::player_id(), 1) && func_15()) {
		return true;
	}
	return false;
}

// Position - 0x49D
int func_15() {
	if (Global_1312446) {
		return 1;
	}
	if (func_19()) {
		return 1;
	}
	if (func_18()) {
		return 1;
	}
	return func_16(120, -1);
}

// Position - 0x4CD
int func_16(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_17(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x4F9
int func_17(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_12();
		if (iVar1 > -1) {
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else {
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

// Position - 0x52D
bool func_18() { return Global_1315221; }

// Position - 0x539
bool func_19() { return Global_1315223; }

// Position - 0x545
int func_20(int iParam0, int iParam1) {
	if (Global_1312447 != 0) {
		return func_24(iParam0) != 0;
	}
	return func_21(iParam0, iParam1);
}

// Position - 0x56B
int func_21(int iParam0, bool bParam1) {
	if (bParam1) {
		if (func_22(iParam0)) {
			return 1;
		}
	}
	if (Global_1591201[iParam0 /*602*/] == -1) {
		return 0;
	}
	return 1;
}

// Position - 0x597
bool func_22(int iParam0) { return func_23(iParam0); }

// Position - 0x5A5
var func_23(int iParam0) { return gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_13.f_1, 0); }

// Position - 0x5BF
int func_24(int iParam0) {
	if (func_13(iParam0, 0, 1)) {
		return Global_2421664[iParam0 /*358*/].f_1;
	}
	return 0;
}

// Position - 0x5E1
bool func_25(int *iParam0) {
	if (!gameplay::is_bit_set(*iParam0, 0)) {
		return false;
	}
	if (Global_14421) {
		return false;
	}
	if (!cam::is_screen_faded_in()) {
		return false;
	}
	if (!controls::is_control_just_pressed(2, Global_14412)) {
		return false;
	}
	func_26();
	Global_14421 = 1;
	return true;
}

// Position - 0x628
void func_26() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Accept", &Global_14432, 1);
		func_27();
	}
}

// Position - 0x64D
void func_27() {
	if (func_28()) {
		mobile::_move_finger(5);
	}
}

// Position - 0x661
bool func_28() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_69702) {
		return false;
	}
	iVar2 = 0;
	iVar0 = cam::_0x19CAFA3C87F7C2FF();
	iVar1 = cam::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4) {
		iVar2 = 1;
	}
	if (Global_2595532 || iVar2) {
		return true;
	}
	return true;
}

// Position - 0x6A8
void func_29() { script::terminate_this_thread(); }

// Position - 0x6B4
void func_30(int iParam0) {
	if (iParam0) {
		func_31();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&G_SleepModeOffOn11, 16);
		}
		Global_14443.f_1 = 1;
		if (func_7(0)) {
			func_4(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x717
void func_31() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

// Position - 0x740
void func_32() {
	if (Global_14443.f_1 != 7) {
		Global_14443.f_1 = 7;
	}
	func_40(Global_14424, "SET_DATA_SLOT_EMPTY", system::to_float(13), -1082130432, -1082130432, -1082130432,
			-1082130432);
	if (func_14()) {
		if (Global_2452449) {
			func_39(Global_14424, "SET_DATA_SLOT", system::to_float(13), system::to_float(0), system::to_float(12), -1f,
					-1f, &Local_46, 0, 0, 0, 0);
		}
		else {
			func_39(Global_14424, "SET_DATA_SLOT", system::to_float(13), system::to_float(0), system::to_float(12), -1f,
					-1f, &Local_42, 0, 0, 0, 0);
		}
	}
	else {
		func_39(Global_14424, "SET_DATA_SLOT", system::to_float(13), system::to_float(0), system::to_float(12), -1f,
				-1f, &Local_50, 0, 0, 0, 0);
	}
	func_40(Global_14424, "DISPLAY_VIEW", system::to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_36(&Local_38);
	if (func_14()) {
		func_33(13, &Local_30, 1, "", 4, &Local_34, &iLocal_28);
	}
	else {
		func_33(1, "", 1, "", 4, &Local_34, &iLocal_28);
	}
}

// Position - 0x850
void func_33(int iParam0, char *sParam1, int iParam2, char *sParam3, int iParam4, char *sParam5, int *iParam6) {
	func_34(2, iParam0, sParam1, 0, iParam6, -1);
	func_34(1, iParam2, sParam3, 1, iParam6, 17);
	func_34(3, iParam4, sParam5, 2, iParam6, -1);
}

// Position - 0x880
void func_34(int iParam0, int iParam1, char *sParam2, int iParam3, int *iParam4, int iParam5) {
	if (iParam1 == 1) {
		func_39(Global_14424, "SET_SOFT_KEYS", system::to_float(iParam0), 0f, system::to_float(iParam1), -1f, -1f, 0, 0,
				0, 0, 0);
		gameplay::clear_bit(iParam4, iParam3);
		func_35(iParam5, 0);
		return;
	}
	if (Global_14431) {
		func_39(Global_14424, "SET_SOFT_KEYS", system::to_float(iParam0), 1f, system::to_float(iParam1), -1f, -1f,
				sParam2, 0, 0, 0, 0);
		gameplay::set_bit(iParam4, iParam3);
		func_35(iParam5, 1);
		return;
	}
	func_39(Global_14424, "SET_SOFT_KEYS", system::to_float(iParam0), 1f, system::to_float(iParam1), -1f, -1f, 0, 0, 0,
			0, 0);
	gameplay::set_bit(iParam4, iParam3);
	func_35(iParam5, 1);
}

// Position - 0x922
void func_35(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&G_SleepModeOnOn25, iParam0);
		return;
	}
	gameplay::clear_bit(&G_SleepModeOnOn25, iParam0);
}

// Position - 0x94D
void func_36(char *sParam0) { func_37(Global_14424, "SET_HEADER", sParam0, 0, 0, 0, 0); }

// Position - 0x965
void func_37(int iParam0, char *sParam1, char *sParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	func_38(sParam2);
	if (!gameplay::is_string_null_or_empty(sParam3)) {
		func_38(sParam3);
	}
	if (!gameplay::is_string_null_or_empty(sParam4)) {
		func_38(sParam4);
	}
	if (!gameplay::is_string_null_or_empty(sParam5)) {
		func_38(sParam5);
	}
	if (!gameplay::is_string_null_or_empty(sParam6)) {
		func_38(sParam6);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x9C0
void func_38(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x9D2
void func_39(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
			 char *sParam7, char *sParam8, char *sParam9, char *sParam10, char *sParam11) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam2));
	if (fParam3 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam3));
	}
	if (fParam4 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam4));
	}
	if (fParam5 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam5));
	}
	if (fParam6 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam6));
	}
	if (!gameplay::is_string_null_or_empty(sParam7)) {
		func_38(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_38(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_38(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_38(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_38(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0xA85
void func_40(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam2));
	if (fParam3 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam3));
	}
	if (fParam4 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam4));
	}
	if (fParam5 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam5));
	}
	if (fParam6 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam6));
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0xAE8
void func_41(int *iParam0) { *iParam0 = 0; }
