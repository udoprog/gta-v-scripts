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
vector3 vLocal_45 = {0f, 0f, 0f};
int iLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
int iLocal_52 = 0;
struct<16> Local_53 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
struct<16> Local_69 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
int iLocal_85 = 0;
int iLocal_86 = 0;
vector3 vLocal_87 = {0f, 0f, 0f};
vector3 vLocal_90 = {0f, 0f, 0f};
float fLocal_93 = 0f;
int *iLocal_94 = NULL;
int iLocal_95 = 0;
int *iLocal_96 = NULL;
int iLocal_97 = 0;
int iLocal_98 = 0;
int iLocal_99 = 0;
int iLocal_100 = 0;
char *sLocal_101 = NULL;
float fLocal_102 = 0f;
int iLocal_103 = 0;
int iLocal_104 = 0;
int iLocal_105 = 0;
int iLocal_106 = 0;
int *iLocal_107 = NULL;
var uLocal_108 = 0;
var uLocal_109 = 0;
float fLocal_110 = 0f;
vector3 vLocal_111 = {0f, 0f, 0f};
vector3 vLocal_114 = {0f, 0f, 0f};
float fLocal_117 = 0f;
int iLocal_118 = 0;
float fLocal_119 = 0f;
int *iLocal_120 = NULL;
var uLocal_121 = 0;
var uLocal_122 = 0;
var uLocal_123 = 0;
var uLocal_124 = 0;
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
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

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
	vLocal_45 = {500f, 500f, 500f};
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	fLocal_119 = 0f;
	vLocal_90 = {ScriptParam_0.f_1[0 /*3*/]};
	vLocal_90 = {vLocal_90};
	iLocal_86 = iLocal_86;
	Local_69 = {Local_69};
	bVar0 = false;
	if (player::has_force_cleanup_occurred(82)) {
		func_110(1);
	}
	iLocal_85 = player::get_player_ped(player::player_id());
	iLocal_95 = 0;
	func_108(&Global_100353, 0);
	func_107();
	if (func_106(iLocal_94, 1)) {
		iLocal_100 = 10;
	}
	else {
		iLocal_100 = 9;
	}
	while (!Global_31554) {
		system::wait(0);
	}
	if (!func_106(iLocal_94, 8)) {
		if (!func_104(iLocal_100)) {
			if (func_103(0, iLocal_99)) {
				func_110(0);
			}
			else {
				func_110(1);
			}
		}
	}
	if (iLocal_99 != -1) {
		if (!func_103(0, iLocal_99)) {
			func_110(1);
		}
	}
	if (func_106(iLocal_94, 8388608)) {
		func_110(1);
	}
	if (func_106(iLocal_94, 524288) && func_102() && !func_101()) {
		func_110(1);
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(script::get_hash_of_this_script_name()) > 1 &&
		!func_106(iLocal_94, 4194304)) {
		if (iLocal_105 != 263) {
			func_100(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_99(10);
	}
	if (!entity::does_entity_exist(iLocal_86)) {
		if (func_98() && !Global_100747) {
			func_97(1);
		}
		else if (Global_100747) {
		}
	}
	while (true) {
		if (!func_96() && !func_95() && !func_94()) {
			func_110(1);
		}
		iLocal_85 = player::get_player_ped(player::player_id());
		if (func_106(iLocal_94, 1048576)) {
			if (entity::is_entity_dead(iLocal_85, 0)) {
				func_110(1);
			}
		}
		if (entity::does_entity_exist(iLocal_85) && !entity::is_entity_dead(iLocal_85, 0)) {
			vLocal_87 = {entity::get_entity_coords(iLocal_85, 1)};
			fLocal_93 = system::vdist2(vLocal_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = {vLocal_87};
			vLocal_114 = {ScriptParam_0.f_1[0 /*3*/]};
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = system::vdist2(vLocal_111, vLocal_114);
			switch (iLocal_95) {
			case 0:
				if (func_104(iLocal_100) || func_106(iLocal_94, 16) && !func_106(iLocal_94, 524288)) {
					streaming::request_model(iLocal_118);
					iLocal_98 = -1;
					func_93();
					func_99(1);
				}
				else {
					if (fLocal_110 > fLocal_102 * fLocal_102) {
						if (iLocal_105 != 263) {
							func_100(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_99(10);
					}
					if (vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2 > 500f) {
					}
				}
				break;

			case 1:
				if (func_92() && streaming::has_model_loaded(iLocal_118)) {
					iLocal_103 = iLocal_103;
					func_99(3);
				}
				else {
					func_93();
				}
				break;

			case 3:
				if (network::network_is_in_session()) {
					func_110(1);
					return;
				}
				if (!func_104(iLocal_100)) {
					if (!func_106(iLocal_94, 8)) {
						bVar1 = true;
						if (gameplay::are_strings_equal(&Global_91491.f_3, &Local_69)) {
							Local_69 = {Local_53};
							bVar1 = false;
						}
						if (bVar1) {
							func_110(0);
							break;
						}
					}
				}
				if (!entity::does_entity_exist(iLocal_86) &&
					(fLocal_93 > 10f * 10f && !cam::is_sphere_visible(ScriptParam_0.f_1[0 /*3*/], 5f) ||
					 fLocal_93 > 80f * 80f || !entity::does_entity_exist(iLocal_86) && cam::is_screen_faded_out())) {
					gameplay::clear_area_of_vehicles(ScriptParam_0.f_1[0 /*3*/], 8f, 0, 0, 0, 0, 0);
					iLocal_86 = vehicle::create_vehicle(iLocal_118, ScriptParam_0.f_1[0 /*3*/], fLocal_119, 1, 1);
					func_91();
					vehicle::set_vehicle_has_strong_axles(iLocal_86, 1);
					iVar2 = 0;
					if (func_90() && !iVar2) {
						vehicle::set_vehicle_doors_locked(iLocal_86, 2);
						func_88(&iLocal_94, 32);
					}
				}
				else if (func_106(iLocal_94, 32)) {
					if (!func_90()) {
						if (!entity::is_entity_dead(iLocal_86, 0)) {
							vehicle::set_vehicle_doors_locked(iLocal_86, 1);
						}
						func_108(&iLocal_94, 32);
					}
				}
				if (!func_106(iLocal_94, 4)) {
					func_87();
					func_86(&iLocal_94, 4);
				}
				if (fLocal_110 > fLocal_102 * fLocal_102 && !Global_91525) {
					if (iLocal_105 != 263) {
						if (func_85(6) && !func_84(iLocal_105)) {
						}
						else {
							func_100(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
					}
					func_99(10);
				}
				else {
					Local_69 = {Local_53};
					bVar3 = !func_106(iLocal_94, 64);
					func_108(&iLocal_94, 128);
					if (!func_83(3) && !Global_91525) {
						if (func_106(iLocal_94, 2097152)) {
							if ((!func_106(iLocal_94, 1) || !entity::does_entity_exist(func_82())) && !Global_91525) {
								func_99(10);
								break;
							}
						}
					}
					if (func_106(iLocal_94, 524288) && func_102() && !func_101()) {
						func_110(1);
					}
					if (func_81()) {
						func_110(1);
					}
					if (!func_73(6) || Global_100747 || func_72()) {
						bVar3 = false;
					}
					if (func_106(iLocal_94, 1)) {
						if (!func_71()) {
							func_88(&iLocal_94, 128);
							bVar3 = false;
						}
					}
					if (func_70(1)) {
						bVar3 = false;
					}
					if (Global_69702) {
						bVar3 = false;
					}
					if (func_69()) {
						bVar3 = false;
					}
					if (streaming::is_player_switch_in_progress()) {
						bVar3 = false;
					}
					if (func_68() || func_67(8, -1)) {
						bVar3 = false;
					}
					if (!player::can_player_start_mission(player::player_id())) {
						bVar3 = false;
					}
					if (!player::is_player_script_control_on(player::player_id())) {
						bVar3 = false;
					}
					if (func_66(0) || func_65()) {
						bVar3 = false;
					}
					if (bVar3) {
						if (entity::does_entity_exist(iLocal_86)) {
							if (!entity::is_entity_at_coord(iLocal_86, vLocal_90, fLocal_117, fLocal_117, fLocal_117, 0,
															1, 0)) {
								func_99(7);
							}
						}
						if (entity::is_entity_dead(iLocal_86, 0)) {
							func_88(&iLocal_94, 128);
							bVar3 = false;
						}
						else if (!ped::is_ped_getting_into_a_vehicle(player::player_ped_id())) {
							func_88(&iLocal_94, 128);
							bVar3 = false;
						}
						else {
							iVar4 = ped::set_exclusive_phone_relationships(player::player_ped_id());
							if (bVar3) {
								if (iLocal_86 == iVar4) {
									if (!entity::is_entity_at_coord(iLocal_85, ScriptParam_0.f_1[0 /*3*/], 4f, 4f, 2f,
																	0, 1, 0)) {
										func_88(&iLocal_94, 128);
										bVar3 = false;
									}
								}
								else {
									func_88(&iLocal_94, 128);
									bVar3 = false;
								}
							}
						}
						if (!player::is_player_control_on(player::player_id())) {
							bVar3 = false;
						}
						if (bVar3) {
							controls::set_input_exclusive(0, 51);
							if (func_64(iLocal_86)) {
								if (iLocal_96 == -1) {
									func_63(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
									func_88(&iLocal_94, 2048);
								}
								else if (!func_106(iLocal_94, 2048) || !ui::is_help_message_being_displayed()) {
									func_62(&iLocal_96);
									func_108(&iLocal_94, 2048);
								}
								if (func_60(iLocal_96, 1)) {
									sLocal_101 = sLocal_101;
									func_62(&iLocal_96);
									func_108(&iLocal_94, 2048);
									script::request_script(&Local_69);
									player::set_player_control(player::player_id(), 0, 56);
									func_99(5);
								}
							}
							else {
								sLocal_101 = sLocal_101;
								func_62(&iLocal_96);
								func_108(&iLocal_94, 2048);
								script::request_script(&Local_69);
								player::set_player_control(player::player_id(), 0, 56);
								func_99(5);
							}
						}
					}
					if (!bVar3) {
						if (iLocal_96 != -1) {
							func_62(&iLocal_96);
							func_108(&iLocal_94, 2048);
							ui::clear_help(0);
						}
					}
				}
				func_54();
				break;

			case 5:
				controls::set_input_exclusive(0, 51);
				if (script::has_script_loaded(&Local_69)) {
					if (iLocal_96 != -1) {
						func_62(&iLocal_96);
					}
					iVar5 = 2;
					bVar0 = false;
					if (func_106(iLocal_94, 1)) {
						if (func_85(6) || func_85(7)) {
							iVar5 = 1;
							bVar0 = true;
						}
					}
					if (iVar5 != 1) {
						iVar5 = func_51(&iLocal_98, 6, iLocal_100, 0, 0);
					}
					if (iVar5 == 1) {
						if (!entity::is_entity_dead(iLocal_86, 0)) {
							entity::set_vehicle_as_no_longer_needed(&iLocal_86);
						}
						if (player::is_player_playing(player::player_id())) {
							player::clear_player_wanted_level(player::player_id());
						}
						func_50();
						if (Global_36912) {
							func_41(player::player_ped_id());
						}
						player::set_player_control(player::player_id(), 1, 56);
						iLocal_52 = func_25();
						func_88(&iLocal_94, 2);
						func_99(6);
						func_21(&iLocal_107);
						if (iLocal_99 != -1) {
							func_20(iLocal_99);
							func_17(func_19(iLocal_99), 0, 0);
						}
					}
					else if (iVar5 == 2) {
						func_16();
					}
					else if (iVar5 == 0) {
						func_99(10);
					}
				}
				else {
					func_16();
				}
				break;

			case 6:
				if (!func_106(iLocal_94, 256)) {
					if (cam::is_screen_fading_out() || cam::is_screen_faded_in()) {
						controls::set_input_exclusive(0, 51);
					}
					else if (cam::is_screen_faded_out()) {
						func_88(&iLocal_94, 256);
					}
				}
				if (func_106(Global_100353, 262144)) {
					func_108(&Global_100353, 262144);
					func_15();
				}
				if (func_106(iLocal_94, 2097152)) {
					if (!func_83(3) && !script::is_thread_active(iLocal_52)) {
						func_99(10);
					}
				}
				if (!script::is_thread_active(iLocal_52)) {
					stats::playstats_oddjob_done(system::round(func_11(&iLocal_107) * 1000f), iLocal_99, 0);
					func_10(&iLocal_107);
					func_108(&iLocal_94, 256);
					func_9();
					if (entity::does_entity_exist(iLocal_86)) {
						if (!entity::is_entity_dead(iLocal_86, 0)) {
							entity::set_vehicle_as_no_longer_needed(&iLocal_86);
							iLocal_86 = 0;
						}
					}
					if (bVar0) {
						func_108(&iLocal_94, 2);
					}
					else if (func_106(iLocal_94, 2)) {
						if (func_106(Global_100353, 0)) {
							func_8(&iLocal_98);
							iLocal_98 = -1;
							func_108(&iLocal_94, 2);
						}
						else {
							func_8(&iLocal_98);
							iLocal_98 = -1;
							func_108(&iLocal_94, 2);
						}
					}
					func_99(0);
					if (iLocal_99 != -1) {
						if (func_106(Global_100353, 0)) {
							stats::playstats_mission_checkpoint(func_19(iLocal_99), 0, Global_91528, 0);
							func_7(func_19(iLocal_99), 0, Global_91528, 1, 0);
						}
						else {
							stats::playstats_mission_checkpoint(func_19(iLocal_99), 0, Global_91528, 0);
							func_7(func_19(iLocal_99), 0, Global_91528, 0, 0);
						}
					}
					func_4();
					func_108(&Global_100353, 0);
					if (func_106(iLocal_94, 16777216)) {
						func_110(1);
					}
					if (iLocal_99 != -1) {
						if (Global_101700.f_8044) {
							if (!func_103(0, iLocal_99)) {
								func_110(1);
							}
						}
					}
				}
				func_3();
				break;

			case 8: func_99(0); break;

			case 10: func_110(1); break;

			case 9:
				if (fLocal_110 > fLocal_102 * fLocal_102) {
					if (iLocal_105 != 263) {
						func_100(iLocal_105, 1, 0);
						iLocal_105 = 263;
					}
					func_99(10);
				}
				break;

			case 7:
				func_2();
				if (iLocal_105 != 263) {
					func_100(iLocal_105, 0, 0);
				}
				if (iLocal_96 != -1) {
					func_62(&iLocal_96);
				}
				if (!gameplay::is_string_null_or_empty(sLocal_101)) {
					if (func_1(sLocal_101)) {
						ui::clear_help(1);
					}
				}
				func_99(4);
				break;

			case 4:
				if (iLocal_104 % 150 == 0) {
					if (!ped::is_ped_injured(player::player_ped_id())) {
						if (iLocal_106 == 2) {
							if (iLocal_106 == 2) {
								if (func_104(iLocal_100) && func_103(0, iLocal_99)) {
									func_107();
									if (iLocal_105 != 263) {
										func_100(iLocal_105, 1, 0);
									}
									func_99(0);
								}
							}
						}
						else if (iLocal_106 == 0) {
							if (fLocal_110 > fLocal_102 * fLocal_102) {
								if (iLocal_105 != 263) {
									func_100(iLocal_105, 1, 0);
									iLocal_105 = 263;
								}
								func_99(10);
							}
						}
						else if (iLocal_106 == 1) {
							if (fLocal_110 > (80f + 5f) * (80f + 5f)) {
								func_107();
								if (iLocal_105 != 263) {
									func_100(iLocal_105, 1, 0);
								}
								func_99(0);
							}
						}
					}
					else {
						func_100(iLocal_105, 1, 0);
					}
				}
				else {
					iLocal_104++;
				}
				break;
			}
		}
		system::wait(0);
	}
}

// Position - 0xBFE
bool func_1(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0xC11
void func_2() {}

// Position - 0xC19
void func_3() {}

// Position - 0xC21
void func_4() {
	int iVar0;
	int iVar1;

	iVar0 = cam::create_camera_with_params(26379945, 1697.183f, 3279.226f, 41.7283f, 1.5897f, 0f, 146.8519f, 50f, 1, 2);
	iVar1 =
		cam::create_camera_with_params(26379945, 1697.755f, 3280.423f, 41.7708f, -9.1434f, 0f, 168.0244f, 50f, 0, 2);
	cam::set_cam_active_with_interp(iVar1, iVar0, 3650, 1, 1);
	cam::set_cinematic_mode_active(0);
	cam::render_script_cams(1, 0, 3000, 1, 0, 0);
	if (entity::does_entity_exist(player::player_ped_id()) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
			ped::is_ped_getting_into_a_vehicle(player::player_ped_id())) {
			iLocal_86 = ped::get_vehicle_ped_is_using(player::player_ped_id());
			vehicle::set_vehicle_doors_locked(iLocal_86, 1);
			audio::set_vehicle_radio_enabled(iLocal_86, 1);
			ai::task_leave_any_vehicle(player::player_ped_id(), 0, 0);
		}
	}
	entity::set_entity_as_mission_entity(iLocal_86, 1, 1);
	func_5(&iLocal_120);
	if (entity::does_entity_exist(iLocal_120)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_120);
	}
	while (cam::is_cam_interpolating(iVar0) || cam::is_cam_interpolating(iVar1)) {
		ui::hide_hud_and_radar_this_frame();
		system::wait(0);
	}
	cam::_0xC819F3CBB62BF692(0, 0, 3, 0);
	if (cam::does_cam_exist(iVar0)) {
		cam::destroy_cam(iVar0, 0);
	}
	if (cam::does_cam_exist(iVar1)) {
		cam::destroy_cam(iVar1, 0);
	}
}

// Position - 0xD5B
void func_5(var *uParam0) {
	int iVar0;

	iVar0 = *uParam0;
	if (entity::does_entity_exist(iVar0)) {
		if (!func_6(iVar0)) {
			entity::set_entity_collision(iVar0, 1, 0);
			entity::set_entity_visible(iVar0, 1, 0);
			entity::freeze_entity_position(iVar0, 0);
		}
	}
}

// Position - 0xD92
int func_6(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (entity::is_entity_dead(iParam0, 0)) {
			return 1;
		}
		else if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return 1;
			}
		}
	}
	else {
		return 1;
	}
	return 0;
}

// Position - 0xDD5
void func_7(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (gameplay::is_string_null_or_empty(&Global_88894)) {
		return;
	}
	if (gameplay::compare_strings(sParam0, &Global_88894, 0, -1) != 0) {
		return;
	}
	stats::playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_86001);
	StringCopy(&Global_88894, "", 64);
}

// Position - 0xE19
void func_8(int *iParam0) {
	if (*iParam0 == -1) {
		return;
	}
	if (*iParam0 != Global_35743) {
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35742 = 0;
	Global_35744 = 0;
	Global_35781 = 15;
	Global_55819 = 0;
	Global_55820 = 0;
}

// Position - 0xE56
void func_9() {
	vector3 vVar0[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		network::network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		network::_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

// Position - 0xE98
void func_10(int *iParam0) {
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

// Position - 0xEAE
float func_11(var *uParam0) {
	if (func_14(uParam0)) {
		if (func_13(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_12(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0xEED
float func_12(bool bParam0) {
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0) {
		fVar0 = system::to_float(gameplay::get_game_timer());
		fVar1 = fVar0 / 1000f;
		return fVar1;
	}
	if (network::network_is_game_in_progress()) {
		iVar2 = network::get_network_time();
		fVar3 = system::to_float(iVar2);
		fVar4 = fVar3 / 1000f;
		return fVar4;
	}
	return system::to_float(gameplay::get_game_timer()) / 1000f;
}

// Position - 0xF45
bool func_13(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0xF55
bool func_14(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0xF65
int func_15() { return 1; }

// Position - 0xF6E
void func_16() {}

// Position - 0xF76
void func_17(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null_or_empty(&Global_88894)) {
		stats::playstats_mission_over(&Global_88894, 0, 0, 0, 1, 0);
		StringCopy(&Global_88894, "", 64);
	}
	StringCopy(&Global_88894, sParam0, 64);
	stats::playstats_mission_started(sParam0, iParam1, iParam2, func_18(0));
}

// Position - 0xFB7
int func_18(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xFE2
char *func_19(int iParam0) {
	switch (iParam0) {
	case 0: return "OJBJ";

	case 1: return "MGDT";

	case 2: return "MGGF";

	case 3: return "OJHU";

	case 4: return "MGOR";

	case 5: return "MGPS";

	case 6: return "MGRP";

	case 7: return "MGSEA";

	case 8: return "MGSTR";

	case 9: return "MGSC";

	case 10: return "MGSP";

	case 11: return "MGSRm";

	case 12: return "OJTX";

	case 13: return "MGTN";

	case 14: return "OJTW";

	case 15: return "OJDA";

	case 16: return "OJDG";

	case 17: return "MGTR";

	case 18: return "MGYG";

	case 19: return "MGCR";
	}
	return "INVALID!";
}

// Position - 0x1120
void func_20(int iParam0) {
	var uVar0;
	vector3 vVar1[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		uVar0 = iParam0;
		network::network_set_rich_presence(8, &uVar0, 1, 1);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		network::_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

// Position - 0x1177
void func_21(var *uParam0) {
	if (!func_14(uParam0)) {
		func_24(uParam0);
	}
	else {
		func_22(uParam0);
	}
}

// Position - 0x1198
void func_22(var *uParam0) { func_23(uParam0, 0f); }

// Position - 0x11A7
void func_23(int *iParam0, float fParam1) {
	uParam0->f_1 = func_12(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x11D5
void func_24(var *uParam0) {
	if (!func_14(uParam0)) {
		func_22(uParam0);
	}
}

// Position - 0x11ED
var func_25() {
	int iVar0;
	int iVar1;
	var uVar2;

	if (func_1(sLocal_101)) {
		ui::clear_help(1);
	}
	if (streaming::is_ipl_active("airfield")) {
		streaming::remove_ipl("airfield");
	}
	iVar0 = player::get_players_last_vehicle();
	if (entity::does_entity_exist(iVar0) && iVar0 != iLocal_86 && !entity::is_entity_dead(iVar0, 0) &&
		entity::get_entity_model(iVar0) != joaat("stunt") && vehicle::is_vehicle_seat_free(iVar0, -1, 0) &&
		entity::get_entity_model(iVar0) != joaat("cargobob")) {
		iVar1 = vehicle::get_closest_vehicle(1694.736f, 3276.483f, 41.2979f, 5f, joaat("stunt"), 16384);
		if (entity::does_entity_exist(iVar1)) {
			entity::set_entity_as_mission_entity(iVar1, 1, 0);
		}
		func_27(1689.662f, 3274.546f, 40.00918f, 1696.669f, 3271.265f, 42.80674f, 7.25f, 1673.428f, 3267.02f, 40.0898f,
				108.5236f, 1, 1, 1, 0, 0);
		if (entity::does_entity_exist(iVar1)) {
			entity::set_vehicle_as_no_longer_needed(&iVar1);
		}
		if (func_26(&iLocal_120)) {
		}
	}
	if (entity::does_entity_exist(player::player_ped_id()) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
		iVar0 = ped::get_vehicle_ped_is_using(player::player_ped_id());
	}
	if (entity::does_entity_exist(iVar0)) {
		vehicle::set_vehicle_doors_locked(iVar0, 1);
	}
	uVar2 = system::start_new_script(&Local_53, iLocal_97);
	script::set_script_as_no_longer_needed(&Local_53);
	return uVar2;
}

// Position - 0x133C
bool func_26(int *iParam0) {
	int iVar0;

	iVar0 = player::get_players_last_vehicle();
	if (entity::does_entity_exist(iVar0)) {
		if (!func_6(iVar0)) {
			if (!ped::is_ped_injured(player::player_ped_id()) &&
				entity::is_entity_at_entity(iVar0, player::player_ped_id(), vLocal_45, 0, 1, 0)) {
				vehicle::set_last_driven_vehicle(iVar0);
				entity::set_entity_collision(iVar0, 0, 0);
				entity::set_entity_visible(iVar0, 0, 0);
				entity::freeze_entity_position(iVar0, 1);
				entity::set_entity_as_mission_entity(iVar0, 1, 1);
				*iParam0 = iVar0;
				return true;
			}
		}
	}
	return false;
}

// Position - 0x13AE
void func_27(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, int iParam11,
			 int iParam12, int iParam13, int iParam14, int iParam15) {
	func_28(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, iParam11, iParam12, iParam13, iParam14, iParam15);
}

// Position - 0x13D7
void func_28(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11,
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
				func_40(iVar0);
			}
			if (entity::is_entity_in_angled_area(iVar0, vParam0, vParam3, fParam6, 0, 1, 0)) {
				bVar1 = true;
			}
			else {
				vVar10 = {entity::get_entity_coords(iVar0, 1)};
				if (vVar10.z > vParam0.z && vVar10.z < vParam3.z || vVar10.z > vParam3.z && vVar10.z < vParam0.z) {
					if (func_37(iVar0, vParam0, vParam3, fParam6)) {
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
				if (func_30(iVar0, func_32(), 1)) {
					bVar1 = false;
				}
			}
			if (bVar1) {
				if (!func_29(vParam11)) {
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

// Position - 0x17C9
int func_29(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return 1;
	}
	return 0;
}

// Position - 0x17F3
bool func_30(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_31(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x1864
bool func_31(int iParam0, int iParam1, char *sParam2, int *iParam3) {
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

// Position - 0x1935
int func_32() {
	func_33();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x194E
void func_33() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_36(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_35(player::player_ped_id());
			if (func_34(iVar0) && (!func_85(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_34(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x1A4B
bool func_34(int iParam0) { return iParam0 < 3; }

// Position - 0x1A57
int func_35(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_36(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x1A94
int func_36(int iParam0) {
	if (func_34(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x1ABE
bool func_37(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7) {
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
		vVar0 = {func_39(vParam1 - vParam4)};
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
		if (func_38(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) ||
			func_38(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15) ||
			func_38(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15) ||
			func_38(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12) ||
			func_38(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9) ||
			func_38(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15) ||
			func_38(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15) ||
			func_38(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12) ||
			func_38(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9) ||
			func_38(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15) ||
			func_38(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15) ||
			func_38(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12) ||
			func_38(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9) ||
			func_38(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15) ||
			func_38(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15) ||
			func_38(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12)) {
			return true;
		}
	}
	return false;
}

// Position - 0x1DB4
int func_38(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8,
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

// Position - 0x1E68
Vector3 func_39(vector3 vParam0) {
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

// Position - 0x1EA7
void func_40(int iParam0) {
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

// Position - 0x1F0C
void func_41(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0) {
		return;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return;
	}
	iVar0 = func_49(iParam0);
	if (iVar0 != -1) {
		iVar1 = Global_36715[iVar0 /*5*/];
		func_44(1, iVar1, 1);
		return;
	}
	iVar2 = func_43(iParam0);
	if (iVar2 == -1) {
		return;
	}
	func_42(iVar2);
}

// Position - 0x1F65
void func_42(int iParam0) {
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

// Position - 0x1FE8
int func_43(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		if (Global_36689[iVar0 /*5*/].f_1 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x2019
void func_44(int iParam0, int iParam1, int iParam2) { func_45(iParam0, iParam1, iParam2, 0, 0); }

// Position - 0x202D
void func_45(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam0 == -1) {
		return;
	}
	if (iParam1 == -1) {
		return;
	}
	if (iParam2 == 6) {
		return;
	}
	if (func_47(iParam0, iParam1, iParam2)) {
		return;
	}
	iVar0 = func_46();
	if (iVar0 == -1) {
		return;
	}
	Global_36796[iVar0 /*5*/] = iParam0;
	Global_36796[iVar0 /*5*/].f_1 = iParam1;
	Global_36796[iVar0 /*5*/].f_2 = iParam2;
	Global_36796[iVar0 /*5*/].f_3 = iParam3;
	Global_36796[iVar0 /*5*/].f_4 = iParam4;
}

// Position - 0x20A4
int func_46() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (Global_36796[iVar0 /*5*/].f_2 == 6) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x20D5
bool func_47(int iParam0, int iParam1, int iParam2) {
	if (func_48(iParam0, iParam1, iParam2) == -1) {
		return false;
	}
	return true;
}

// Position - 0x20F0
int func_48(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (iParam2 == Global_36796[iVar0 /*5*/].f_2) {
			if (iParam0 == Global_36796[iVar0 /*5*/]) {
				if (iParam1 == Global_36796[iVar0 /*5*/].f_1) {
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x213C
int func_49(int iParam0) {
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

// Position - 0x2185
void func_50() {
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	gameplay::clear_bit(&Global_2313, 25);
	gameplay::set_bit(&Global_2314, 11);
}

// Position - 0x2202
int func_51(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam1 == 7) {
		return 0;
	}
	if (!iParam3) {
		if (Global_89302.f_44 == 1) {
			return 2;
		}
	}
	if (iParam1 == 0) {
		if (func_53(0)) {
			return 0;
		}
		Global_35745++;
		*iParam0 = Global_35745;
		player::set_player_invincible(player::get_player_index(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5) {
			player::force_cleanup(8);
		}
		Global_35781 = iParam2;
		Global_35743 = *iParam0;
		Global_35744 = iParam4;
		Global_35742 = 0;
		return 1;
	}
	if (*iParam0 != -1) {
		if (Global_35742 > 0) {
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35742) {
				if (Global_35748[iVar0 /*4*/] == *iParam0) {
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35743 == *iParam0) {
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1) {
		if (!func_104(iParam2)) {
			return 0;
		}
		if (Global_35742 == 8) {
			return 0;
		}
		Global_35745++;
		*iParam0 = Global_35745;
		Global_35748[Global_35742 /*4*/] = Global_35745;
		Global_35748[Global_35742 /*4*/].f_1 = iParam1;
		Global_35748[Global_35742 /*4*/].f_2 = iParam2;
		Global_35748[Global_35742 /*4*/].f_3 = 0;
		Global_35742++;
		if (iParam4 != 0) {
			func_52(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x2339
void func_52(int *iParam0, int iParam1) {
	int iVar0;

	if (Global_35742 == 0) {
		return;
	}
	if (*iParam0 == -1) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35742) {
		if (Global_35748[iVar0 /*4*/] == *iParam0) {
			Global_35748[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*iParam0 = -1;
}

// Position - 0x2388
bool func_53(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_104(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x23AA
void func_54() {
	if (!entity::does_entity_exist(iLocal_86) || entity::is_entity_dead(iLocal_86, 0) ||
		!vehicle::is_vehicle_driveable(iLocal_86, 1) ||
		player::is_player_wanted_level_greater(player::player_id(), 0)) {
		if (entity::does_entity_exist(iLocal_86) && vehicle::is_vehicle_driveable(iLocal_86, 0)) {
			vehicle::set_vehicle_doors_locked(iLocal_86, 2);
		}
		func_97(0);
		if (func_1(sLocal_101)) {
			ui::clear_help(1);
		}
		return;
	}
	if (fLocal_93 < fLocal_117 * fLocal_117) {
		vehicle::set_vehicle_doors_locked(iLocal_86, 1);
		func_59(sLocal_101);
		func_55();
	}
	else if (func_1(sLocal_101)) {
		ui::clear_help(1);
	}
}

// Position - 0x2445
void func_55() {
	if (Global_14443.f_1 != 1) {
		if (func_66(0)) {
			func_56(0);
		}
		gameplay::set_bit(&Global_2314, 2);
	}
}

// Position - 0x246D
void func_56(int iParam0) {
	if (Global_14604) {
		func_58(0, 0);
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
	if (!func_57()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x24DD
int func_57() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x2504
void func_58(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_66(0)) {
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

// Position - 0x2578
void func_59(char *sParam0) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0x258E
bool func_60(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_61(iParam0);
	if (iVar0 == -1) {
		return false;
	}
	if (!player::is_player_playing(player::get_player_index())) {
		return false;
	}
	if (func_66(0)) {
		return false;
	}
	if (cutscene::is_cutscene_playing()) {
		return false;
	}
	if (iVar0 > -1 && iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/] == 1 && Global_36484[iVar0 /*32*/].f_4 == 1) {
			if (iParam1) {
				if (Global_36484[iVar0 /*32*/].f_29) {
					return false;
				}
			}
			Global_36484[iVar0 /*32*/].f_5 = 1;
			Global_36484[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else {
			if (Global_36484[iVar0 /*32*/] == 0) {
			}
			if (Global_36484[iVar0 /*32*/].f_7) {
			}
		}
	}
	return false;
}

// Position - 0x2646
int func_61(int iParam0) {
	int iVar0;

	if (iParam0 < 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/].f_1 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x2681
void func_62(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_61(*iParam0);
	if (iVar0 == -1) {
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/]) {
			Global_36484[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

// Position - 0x26D8
void func_63(int iParam0, int iParam1, char *sParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) < 1) {
	}
	if (streaming::is_player_switch_in_progress()) {
		if (*iParam0 != -1) {
			func_62(iParam0);
		}
		return;
	}
	if (*iParam0 != -1) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (!Global_36484[iVar0 /*32*/]) {
			Global_36484[iVar0 /*32*/] = 1;
			Global_36484[iVar0 /*32*/].f_1 = Global_36685;
			Global_36685++;
			Global_36484[iVar0 /*32*/].f_4 = 0;
			Global_36484[iVar0 /*32*/].f_29 = 0;
			Global_36484[iVar0 /*32*/].f_5 = 0;
			Global_36484[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&Global_36484[iVar0 /*32*/].f_8, sParam2, 16);
			Global_36484[iVar0 /*32*/].f_6 = iParam3;
			Global_36484[iVar0 /*32*/].f_31 = script::get_id_of_this_thread();
			Global_36484[iVar0 /*32*/].f_7 = 0;
			Global_36484[iVar0 /*32*/].f_3 = iParam5;
			if (!gameplay::is_string_null_or_empty(sParam4)) {
				Global_36484[iVar0 /*32*/].f_12 = 1;
				StringCopy(&Global_36484[iVar0 /*32*/].f_13, sParam4, 64);
				Global_36484[iVar0 /*32*/].f_30 = iParam6;
			}
			else {
				Global_36484[iVar0 /*32*/].f_12 = 0;
				Global_36484[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36484[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

// Position - 0x2803
bool func_64(int iParam0) {
	return false;
	return true;
}

// Position - 0x2810
var func_65() { return Global_68131; }

// Position - 0x281C
bool func_66(int iParam0) {
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

// Position - 0x2876
var func_67(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x28B1
bool func_68() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x28C6
bool func_69() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x28E0
bool func_70(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0x2909
int func_71() { return 1; }

// Position - 0x2912
bool func_72() {
	int iVar0;
	bool bVar1;

	if (ped::is_ped_injured(player::player_ped_id())) {
		return false;
	}
	weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1);
	if (iVar0 == 0 || iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("weapon_electric_fence") ||
		iVar0 == joaat("gadget_parachute")) {
		bVar1 = false;
	}
	else {
		bVar1 = true;
	}
	if (bVar1) {
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		return bVar1 && controls::is_control_pressed(0, 69) || bVar1 && controls::is_control_pressed(0, 70) ||
			   bVar1 && controls::is_control_pressed(0, 68) ||
			   player::is_player_targetting_anything(player::player_id());
	}
	return bVar1 && controls::is_control_pressed(0, 24) || bVar1 && controls::is_control_pressed(0, 25) ||
		   bVar1 && controls::is_control_pressed(0, 47) || ped::_0xDCCA191DF9980FD7(player::player_ped_id()) ||
		   player::is_player_targetting_anything(player::player_id());
}

// Position - 0x2A1C
bool func_73(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_32();
				if (!func_34(iVar0)) {
					return false;
				}
				switch (iParam0) {
				case 9:
				case 0:
					if (!player::is_player_ready_for_cutscene(player::player_id()) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_80() || Global_100747 ||
						Global_25192 || func_79() || func_67(8, -1) || func_78() || func_77() || func_76() ||
						func_69() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_80() || Global_25192 ||
						func_79() || func_67(8, -1) || func_76() || func_78() || func_77() || func_69() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 2:
					if (!player::is_player_ready_for_cutscene(player::player_id()) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_80() || Global_100747 ||
						Global_25192 || func_79() || func_67(8, -1) || func_76() || func_78() || func_77() ||
						func_69() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return false;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_80() || Global_100747 ||
						Global_25192 || func_79() || func_67(8, -1) || func_78() || func_77() || func_69() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 4:
					if (func_80() || player::get_player_wanted_level(player::player_id()) > 0 || func_67(8, -1) ||
						func_69() || func_75() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 5:
					if (func_67(8, -1) || func_78() || func_77() || func_75() || func_74()) {
						return false;
					}
					if (streaming::is_player_switch_in_progress() && streaming::get_player_switch_type() != 3 &&
						streaming::get_player_switch_state() < 8) {
						return false;
					}
					break;

				case 6:
					if (entity::does_entity_exist(player::player_ped_id())) {
						if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
							player::get_player_wanted_level(player::player_id()) > 0 ||
							entity::is_entity_in_air(player::player_ped_id()) ||
							ped::is_ped_ragdoll(player::player_ped_id()) ||
							ped::is_ped_falling(player::player_ped_id()) ||
							player::is_player_being_arrested(player::player_id(), 1) ||
							player::is_player_climbing(player::player_id()) || func_80() || Global_25192 || func_79() ||
							func_67(8, -1) || func_77() || func_76() || func_69() ||
							Global_101700.f_6647.f_919[iVar0] == 5) {
							return false;
						}
					}
					break;

				case 7:
					if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
						!player::is_player_control_on(player::player_id()) ||
						!player::is_player_ready_for_cutscene(player::player_id()) || !cam::is_screen_faded_in() ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) || func_80() || func_77() ||
						Global_100747 || Global_25192 || func_79() || Global_36912 || func_67(8, -1) || func_76() ||
						func_75() || func_69() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 8:
					if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
						!player::is_player_control_on(player::player_id()) ||
						!player::is_player_ready_for_cutscene(player::player_id()) || !cam::is_screen_faded_in() ||
						player::is_player_wanted_level_greater(player::player_id(), 0) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						ped::is_ped_swimming(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) || func_80() || Global_100747 || Global_25192 ||
						func_79() || func_67(8, -1) || func_76() || func_75() || func_78() || func_77() || func_69()) {
						return false;
					}
					break;
				}
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
	return true;
}

// Position - 0x3139
var func_74() { return Global_91530.f_1; }

// Position - 0x3147
int func_75() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x316D
int func_76() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x3197
bool func_77() { return Global_91543.f_304 > 0; }

// Position - 0x31A8
bool func_78() { return Global_91543.f_303 > 0; }

// Position - 0x31B9
var func_79() { return Global_1315233; }

// Position - 0x31C5
int func_80() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x31E1
bool func_81() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("stripperhome")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x31FB
var func_82() { return Global_87656; }

// Position - 0x3207
int func_83(int iParam0) {
	switch (iParam0) {
	case 0: return 1;

	case 1:
		if (func_85(6) || func_85(7)) {
			return 1;
		}
		else {
			return func_83(3);
		}
		break;

	case 2: return 1;

	case 3:
		if (func_104(5)) {
			if (func_73(4)) {
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x3279
int func_84(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0;
	}
	return ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19);
}

// Position - 0x32B5
bool func_85(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x32C3
void func_86(int *iParam0, int iParam1) { *iParam0 |= iParam1; }

// Position - 0x32D4
void func_87() {}

// Position - 0x32DC
void func_88(int *iParam0, int iParam1) { func_89(iParam0, iParam1); }

// Position - 0x32EC
void func_89(var *uParam0, var uParam1) { *uParam0 |= uParam1; }

// Position - 0x32FD
int func_90() {
	if (Global_35781 == 15) {
		return 0;
	}
	return 1;
}

// Position - 0x3312
void func_91() { iLocal_48++; }

// Position - 0x3320
int func_92() { return 1; }

// Position - 0x3329
void func_93() {}

// Position - 0x3331
int func_94() { return 0; }

// Position - 0x333A
int func_95() { return 1; }

// Position - 0x3343
int func_96() { return 1; }

// Position - 0x334C
void func_97(int iParam0) {
	if (iParam0 == 2) {
	}
	else if (iParam0 == 0) {
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

// Position - 0x336D
int func_98() {
	vector3 vVar0;
	float fVar3;

	if (ped::is_ped_injured(player::player_ped_id())) {
		return 0;
	}
	vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	fVar3 = system::vdist2(vVar0, vLocal_90);
	if (fVar3 < 10f * 10f) {
		return 1;
	}
	else if (fVar3 < 80f * 80f) {
		if (cam::is_sphere_visible(vLocal_90, 5f)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	return 0;
}

// Position - 0x33E0
void func_99(int iParam0) { iLocal_95 = iParam0; }

// Position - 0x33EC
void func_100(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (!iParam2) {
		iVar1 = gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 15);
		if (iVar1 == iParam1) {
			return;
		}
	}
	if (iParam1 != gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 0)) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
		if (Global_25498 == 1) {
			Global_25499 = 1;
		}
		Global_25498 = 1;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 0);
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 15);
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 3);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 0);
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 15);
	}
	if (!gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 0)) {
		if (ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19)) {
			gameplay::set_this_script_can_remove_blips_created_by_any_script(1);
			ui::remove_blip(&Global_25501[iVar0 /*23*/].f_19);
			gameplay::set_this_script_can_remove_blips_created_by_any_script(0);
		}
	}
}

// Position - 0x34F5
int func_101() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x3512
int func_102() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x3538
bool func_103(int iParam0, int iParam1) {
	var uVar0;

	if (iParam0 == 11 || iParam0 == -1) {
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32) {
		return false;
	}
	uVar0 = gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iParam0], iParam1);
	return uVar0;
}

// Position - 0x3585
bool func_104(int iParam0) { return func_105(iParam0, Global_35781); }

// Position - 0x3596
int func_105(int iParam0, int iParam1) {
	if (iParam1 == 15) {
		return 1;
	}
	if (iParam0 == 15) {
		return 0;
	}
	switch (iParam0) {
	case 16:
		switch (iParam1) {
		case 9:
		case 10:
		case 7:
		case 13:
		case 14: return 0;
		}
		return 1;

	case 0:
		switch (iParam1) {
		case 5:
		case 17: return 1;
		}
		break;

	case 2:
	case 3:
		switch (iParam1) {
		case 5:
		case 6:
		case 8:
		case 17: return 1;
		}
		break;

	case 4:
		if (iParam1 == 17) {
			return 1;
		}
		break;

	case 5: break;

	case 6:
	case 8:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 7:
		if (iParam1 == 6) {
			return 1;
		}
		break;

	case 9:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 10:
		switch (iParam1) {
		case 5:
		case 6:
		case 17: return 1;
		}
		break;

	case 11:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 17:
		switch (iParam1) {
		case 17:
		case 12:
		case 5: return 1;
		}
		break;

	case 18:
	case 12:
		switch (iParam1) {
		case 5:
		case 6:
		case 8: return 1;
		}
		break;

	case 13:
		switch (iParam1) {
		case 5: return 1;
		}
		break;

	case 14:
		switch (iParam1) {
		case 5: return 1;
		}
		break;
	}
	return 0;
}

// Position - 0x3777
bool func_106(int *iParam0, int iParam1) { return (iParam0 & iParam1) != 0; }

// Position - 0x3786
void func_107() {
	StringCopy(&Local_53, "stunt_plane_races", 64);
	iLocal_118 = joaat("stunt");
	fLocal_119 = 154.8464f;
	fLocal_102 = 209f;
	iLocal_105 = 95;
	gameplay::clear_area_of_vehicles(vLocal_114, 10f, 0, 0, 0, 0, 0);
	iLocal_99 = 10;
	sLocal_101 = "PLAY_STUNT";
	fLocal_117 = 6f;
	iLocal_97 = 20500;
}

// Position - 0x37D3
void func_108(int *iParam0, int iParam1) { func_109(iParam0, iParam1); }

// Position - 0x37E3
void func_109(int *iParam0, var uParam1) { *iParam0 -= (*iParam0 & uParam1); }

// Position - 0x37F8
void func_110(int iParam0) {
	if (iParam0) {
		if (iLocal_105 != 263) {
			func_100(iLocal_105, 0, 0);
		}
	}
	func_62(&iLocal_96);
	if (func_106(iLocal_94, 2)) {
		func_4();
		func_108(&iLocal_94, 2);
		func_8(&iLocal_98);
	}
	iLocal_98 = -1;
	func_111();
	script::terminate_this_thread();
}

// Position - 0x3841
void func_111() {
	if (entity::does_entity_exist(iLocal_86)) {
		if (!entity::is_entity_dead(iLocal_86, 0)) {
			entity::set_entity_as_mission_entity(iLocal_86, 1, 1);
			entity::set_vehicle_as_no_longer_needed(&iLocal_86);
			vehicle::delete_vehicle(&iLocal_86);
		}
	}
	func_108(&iLocal_94, 4);
	func_112();
	if (script::is_thread_active(iLocal_52)) {
		player::force_cleanup_for_thread_with_this_id(iLocal_52, 3);
	}
	if (!gameplay::is_string_null(&Local_69)) {
		if (ui::get_length_of_literal_string(&Local_69) != 0) {
			script::set_script_as_no_longer_needed(&Local_69);
		}
	}
}

// Position - 0x38A6
void func_112() {}
