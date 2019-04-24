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
var uLocal_47 = 0;
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 0;
var uLocal_57 = 10;
var uLocal_58 = 0;
var uLocal_59 = 0;
var uLocal_60 = 0;
var uLocal_61 = 0;
var uLocal_62 = 0;
var uLocal_63 = 0;
var uLocal_64 = 0;
var uLocal_65 = 0;
var uLocal_66 = 0;
var uLocal_67 = 0;
var uLocal_68 = 2;
var uLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 8;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 0;
var uLocal_77 = 0;
var uLocal_78 = 0;
var uLocal_79 = 0;
var uLocal_80 = 8;
var uLocal_81 = 0;
var uLocal_82 = 0;
var uLocal_83 = 0;
var uLocal_84 = 0;
var uLocal_85 = 0;
var uLocal_86 = 0;
var uLocal_87 = 0;
var uLocal_88 = 0;
var uLocal_89 = 0;
float fLocal_90 = 0f;
var uLocal_91 = 0;
var uLocal_92 = 0;
float fLocal_93 = 0f;
float fLocal_94 = 0f;
float fLocal_95 = 0f;
float fLocal_96 = 0f;
float fLocal_97 = 0f;
var uLocal_98 = 0;
int *iLocal_99 = NULL;
int iLocal_100 = 0;
int iLocal_101 = 0;
int iLocal_102 = 0;
int iLocal_103 = 0;
var *uLocal_104 = NULL;
var uLocal_105 = 0;
var *uLocal_106 = NULL;
var uLocal_107 = 0;
var *uLocal_108 = NULL;
var uLocal_109 = 0;
int iLocal_110 = 0;
int iLocal_111 = 0;
int iLocal_112 = 0;
vector3 vLocal_113 = {0f, 0f, 0f};
vector3 vLocal_116 = {0f, 0f, 0f};
char cLocal_119[16] = "";
var uLocal_121 = 0;
var uLocal_122 = 0;
int iScriptParam_0 = 0;
#pragma endregion //}

void __EntryFunction__() {
	bool bVar0;
	char *sVar1;
	var uVar2[25];
	int iVar28;
	vector3 vVar29;
	int iVar32;
	vector3 vVar33;
	int iVar36;
	int iVar37;
	int iVar38;
	vector3 vVar39;
	int iVar42;
	int iVar43;

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
	fLocal_90 = 0.05f + 0.275f - 0.01f;
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	iLocal_99 = -1;
	vLocal_113 = {0f, 0f, 0f};
	iLocal_110 = iScriptParam_0;
	if (!entity::does_entity_exist(iLocal_110)) {
		script::terminate_this_thread();
	}
	if (player::has_force_cleanup_occurred(3)) {
		func_215();
		script::terminate_this_thread();
	}
	if (func_214(13) || func_214(14)) {
		func_215();
		script::terminate_this_thread();
	}
	if (Global_31552) {
		func_215();
		script::terminate_this_thread();
	}
	if (Global_68189) {
		script::terminate_this_thread();
	}
	bVar0 = false;
	sVar1 = "tvscreen";
	iVar28 = 1;
	vVar29 = {entity::get_entity_coords(iScriptParam_0, 1) -
			  entity::get_entity_forward_vector(iScriptParam_0) * FtoV(0.6f)};
	vVar29.z += 0.5f;
	vLocal_116 = {entity::get_offset_from_entity_in_world_coords(iScriptParam_0, vLocal_113)};
	Global_1764566 = 0;
	Global_1764661 = 0;
	while (iVar28) {
		if (entity::does_entity_exist(iLocal_110)) {
			if (iLocal_101) {
				if (!func_212(player::player_id())) {
					if (!func_211(&uLocal_104)) {
						func_210(&uLocal_104, 1, 0);
					}
				}
			}
			if (Global_1764566 && (func_209(player::player_id()) || func_208(player::player_id()))) {
				if (!func_211(&uLocal_108)) {
					func_210(&uLocal_108, 0, 0);
				}
				else if (func_207(&uLocal_108, 10000, 0)) {
					func_206(&uLocal_108);
					Global_1764566 = 0;
				}
				func_202();
			}
			if (Global_1591073) {
				if (!bVar0) {
					iVar32 = entity::get_entity_model(iLocal_110);
					if (iVar32 == 1385417869) {
						entity::create_model_hide(entity::get_entity_coords(iScriptParam_0, 1), 1f, 1385417869, 0);
						vVar33 = {entity::get_entity_rotation(iLocal_110, 2)};
						iLocal_110 = object::create_object(joaat("prop_laptop_lester2"),
														   entity::get_entity_coords(iLocal_110, 1), 0, 1, 0);
						entity::set_entity_rotation(iLocal_110, vVar33, 2, 1);
						bVar0 = true;
					}
				}
			}
			if (object::has_object_been_broken(iLocal_110)) {
				func_215();
				script::terminate_this_thread();
			}
		}
		if (!entity::is_entity_dead(player::player_ped_id(), 0) && entity::does_entity_exist(iLocal_110) &&
			!cutscene::is_cutscene_playing() && player::is_player_playing(player::get_player_index())) {
			if (interior::get_interior_from_entity(player::player_ped_id()) ==
				interior::get_interior_from_entity(iLocal_110)) {
				iVar36 = 0;
				iVar37 = ped::get_ped_nearby_peds(player::player_ped_id(), &uVar2, -1);
				iVar38 = 0;
				iVar38 = 0;
				while (iVar38 < iVar37) {
					if (!entity::is_entity_dead(uVar2[iVar38], 0)) {
						if (entity::is_entity_playing_anim(uVar2[iVar38], "MP_COMMON_MISS", "HACK_INTRO", 3)) {
							iVar36 = 1;
						}
						else if (entity::is_entity_playing_anim(uVar2[iVar38], "MP_COMMON_MISS", "HACK_LOOP", 3)) {
							iVar36 = 1;
						}
					}
					iVar38++;
				}
				if (Global_16) {
					iVar36 = 1;
				}
				vVar39 = {0.6f, 0.6f, 0.8f};
				if (func_201() || func_200(player::player_id()) || func_208(player::player_id()) || func_199()) {
					vVar39 = {1f, 1f, 0.9f};
				}
				iVar42 = func_198(player::player_id());
				if (!iVar36 && !Global_25456 && !func_197(0) && !ped::is_ped_in_cover(player::player_ped_id(), 0) &&
					!func_196() && entity::is_entity_at_coord(player::player_ped_id(), vVar29, vVar39, 0, 1, 1) &&
					interior::get_room_key_from_entity(player::player_ped_id()) ==
						interior::get_room_key_from_entity(iLocal_110) &&
					!gameplay::is_bit_set(Global_2359301, 15) && !func_195() && !(Global_69702 && func_194()) &&
					!(!Global_69702 && func_193()) &&
					!(Global_69702 && gameplay::is_bit_set(Global_1633501.f_14, 24) &&
					  network::network_is_activity_session()) &&
					!(Global_69702 && func_192() && func_191()) && !network::network_is_in_mp_cutscene() &&
					!Global_68529) {
					if (func_189(player::player_id())) {
					}
					if (!func_188(Global_1591201[player::player_id() /*602*/].f_258.f_15) &&
						!func_187(Global_1591201[player::player_id() /*602*/].f_258.f_15, -1) &&
						!func_189(player::player_id())) {
						if (iLocal_102 != iVar42) {
							if (func_209(player::player_id()) || func_186(player::player_id()) ||
								func_208(player::player_id())) {
								if (iLocal_99 != -1) {
									func_185(&iLocal_99);
								}
								if (func_183()) {
									ui::clear_help(1);
								}
							}
						}
						iLocal_102 = iVar42;
						if (iLocal_99 == -1) {
							if (bVar0) {
								func_182(&iLocal_99, 1, "MPLA_BILL", 0, 0, 0, 0);
							}
							else if (func_201()) {
								func_181(iVar42);
							}
							else if (func_179()) {
								func_176(iVar42);
							}
							else if (func_199()) {
								func_164(iVar42);
							}
							else {
								func_182(&iLocal_99, 1, "BROWSEINPUTTRIG", 0, 0, 0, 0);
							}
						}
					}
					if (iLocal_99 != -1 && func_162(iLocal_99, 1) && !ai::is_ped_running(player::player_ped_id()) &&
						func_161()) {
						if (iLocal_99 != -1) {
							func_185(&iLocal_99);
						}
						if (!bVar0) {
							if (func_160() || func_159()) {
								func_152();
							}
							if (func_201()) {
								func_20(0, iVar42);
								func_19(0, 1, 0, 0);
							}
							else if (func_199()) {
								func_20(0, iVar42);
								func_19(0, 0, 0, 1);
							}
							else if (func_179()) {
								func_20(1, iVar42);
								func_19(0, 0, 1, 0);
							}
							else {
								func_19(0, 0, 0, 0);
							}
							if (!iLocal_100) {
								func_15();
								iLocal_100 = 1;
							}
							iVar43 = 1;
							if (func_160() || func_159()) {
								func_14(&uLocal_106, 0, 0);
								while (!func_207(&uLocal_106, 500, 0)) {
									func_202();
									system::wait(0);
								}
								func_206(&uLocal_106);
							}
							while (iVar43) {
								if (!entity::does_entity_exist(iLocal_110) ||
									!entity::is_entity_at_coord(player::player_ped_id(),
																entity::get_entity_coords(iLocal_110, 1), 1.5f, 1.5f,
																4f, 0, 1, 1)) {
									Global_68134 = 1;
								}
								if (func_160() || func_159() || func_189(player::player_id())) {
									if (!Global_68131 && !Global_68529) {
										iVar43 = 0;
									}
								}
								else if (Global_68131 || Global_68134) {
									iVar43 = 0;
								}
								if (func_160()) {
									func_202();
								}
								system::wait(0);
							}
							if (func_160() || func_159()) {
								func_1();
							}
							func_202();
							func_206(&uLocal_108);
							iLocal_100 = 0;
						}
					}
				}
				else {
					if (iLocal_99 != -1) {
						func_185(&iLocal_99);
					}
					if (func_209(player::player_id()) || func_186(player::player_id())) {
						if (func_183()) {
							ui::clear_help(1);
						}
					}
					if (entity::does_entity_exist(iScriptParam_0)) {
						if (!brain::is_object_within_brain_activation_range(iScriptParam_0)) {
							iVar28 = 0;
						}
					}
				}
			}
			else if (iLocal_99 != -1) {
				func_185(&iLocal_99);
			}
		}
		else {
			if (iLocal_99 != -1) {
				func_185(&iLocal_99);
			}
			iVar28 = 0;
		}
		system::wait(0);
	}
	if (bVar0) {
		if (ui::is_named_rendertarget_registered(sVar1)) {
			ui::release_named_rendertarget(sVar1);
		}
	}
}

// Position - 0x765
void func_1() {
	char *sVar0;

	if (!ped::is_ped_dead_or_dying(player::player_ped_id(), 1) && entity::does_entity_exist(iLocal_110)) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (ped::is_ped_using_any_scenario(player::player_ped_id())) {
					ped::_0xF1C03A5352243A30(player::player_ped_id());
					if (!ped::is_ped_dead_or_dying(player::player_ped_id(), 1)) {
						ai::clear_ped_tasks(player::player_ped_id());
					}
				}
				if (func_2(1, &sVar0)) {
					streaming::remove_anim_dict(&sVar0);
				}
				if (func_2(2, &sVar0)) {
					if (iLocal_111 != 0) {
						if (ped::is_synchronized_scene_running(iLocal_112)) {
							ped::detach_synchronized_scene(iLocal_112);
							iLocal_112 = -1;
						}
						iLocal_112 = network::network_create_synchronised_scene(
							vLocal_116, entity::get_entity_rotation(iLocal_110, 2), 2, 0, 0, 1065353216, 0, 1065353216);
						network::network_add_ped_to_synchronised_scene(player::player_ped_id(), iLocal_112, &sVar0,
																	   "exit", 8f, -4f, 5, 0, 1148846080, 0);
						network::network_start_synchronised_scene(iLocal_112);
						streaming::remove_anim_dict(&sVar0);
					}
				}
			}
		}
	}
	Global_1764565 = 0;
}

// Position - 0x859
bool func_2(int iParam0, char *sParam1) {
	if (!network::network_is_game_in_progress()) {
		StringCopy(sParam1, "", 64);
		return false;
	}
	if (func_3()) {
		StringCopy(sParam1, "", 64);
		return false;
	}
	if (!func_209(player::player_id()) && !func_208(player::player_id())) {
		StringCopy(sParam1, "", 64);
		return false;
	}
	StringCopy(sParam1, "anim@amb@warehouse@laptop@", 64);
	return true;
}

// Position - 0x8B3
bool func_3() {
	bool bVar0;
	int *iVar1;

	func_10(&bVar0, &iVar1);
	if (bVar0) {
		return true;
	}
	if (Global_1315210 == 0) {
		if (!network::network_is_game_in_progress()) {
			return true;
		}
	}
	if (func_9()) {
		return true;
	}
	if (Global_2454747) {
		return true;
	}
	if (func_8()) {
		return true;
	}
	if (func_7(157)) {
		if (!func_6()) {
			return true;
		}
	}
	if (func_7(155)) {
		return true;
	}
	if (!network::network_is_signed_online()) {
		return true;
	}
	if (func_4() != 0) {
		if (script::_get_number_of_instances_of_script_with_name_hash(func_4()) == 0) {
			return true;
		}
	}
	return false;
}

// Position - 0x948
int func_4() {
	switch (func_5()) {
	case 0: return joaat("freemode");

	case 2: return joaat("creator");
	}
	return 0;
}

// Position - 0x97C
int func_5() { return Global_25190; }

// Position - 0x987
bool func_6() { return Global_2443134.f_577; }

// Position - 0x996
bool func_7(int iParam0) {
	if (script::get_event_exists(1, iParam0)) {
		return true;
	}
	return false;
}

// Position - 0x9AD
bool func_8() { return Global_2452525; }

// Position - 0x9B9
bool func_9() { return Global_2443134.f_572; }

// Position - 0x9C8
void func_10(int *iParam0, int *iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < script::get_number_of_events(1)) {
		iVar1 = script::get_event_at_index(1, iVar0);
		if (iVar1 == 171) {
			script::get_event_data(1, iVar0, &iVar2, 2);
			switch (iVar2) {
			case 381: func_11(iVar0); break;

			case 2:
				script::get_event_data(1, iVar0, &vVar4, 3);
				if (vVar4.z == 55) {
					*iParam0 = 1;
				}
				else if (vVar4.z == 32) {
					*iParam1 = 1;
				}
				break;
			}
		}
		iVar0++;
	}
}

// Position - 0xA48
void func_11(int iParam0) {
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (script::get_event_data(1, iParam0, &vVar0, 3)) {
		if (func_13(vVar0.y, 1, 1)) {
			iVar3 = player::get_player_ped(vVar0.y);
			if (entity::does_entity_exist(iVar3)) {
				if (ped::is_ped_in_any_vehicle(iVar3, 0)) {
					iVar4 = ped::get_vehicle_ped_is_in(iVar3, 0);
					if (vehicle::is_vehicle_window_intact(iVar4, vVar0.z) &&
						network::network_get_this_script_is_network_script()) {
						if (func_12(iVar4, &bVar5)) {
							vehicle::remove_vehicle_window(iVar4, vVar0.z);
						}
						if (bVar5) {
							entity::set_vehicle_as_no_longer_needed(&iVar4);
						}
					}
				}
			}
		}
	}
}

// Position - 0xAC9
bool func_12(int iParam0, int *iParam1) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_a_mission_entity(iParam0)) {
			if (network::network_get_entity_is_local(iParam0)) {
				if (!vehicle::is_this_model_a_train(entity::get_entity_model(iParam0))) {
					entity::set_entity_as_mission_entity(iParam0, 0, 1);
					*iParam1 = 1;
				}
			}
		}
		if (entity::does_entity_belong_to_this_script(iParam0, 0)) {
			if (network::network_has_control_of_entity(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xB28
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

// Position - 0xB72
void func_14(var *uParam0, int iParam1, int iParam2) {
	if (network::network_is_game_in_progress() && !iParam1) {
		if (!iParam2) {
			*uParam0 = network::get_network_time();
		}
		else {
			*uParam0 = network::_0x89023FBBF9200E9F();
		}
	}
	else {
		*uParam0 = gameplay::get_game_timer();
	}
	uParam0->f_1 = 1;
}

// Position - 0xBAF
void func_15() {
	if (func_18() || func_17()) {
		func_16();
	}
}

// Position - 0xBCC
void func_16() { Global_2443134.f_634 = 1; }

// Position - 0xBDC
var func_17() { return Global_2443134.f_613; }

// Position - 0xBEB
var func_18() { return gameplay::is_bit_set(Global_2443134.f_2, 11); }

// Position - 0xBFF
void func_19(int iParam0, int iParam1, int iParam2, int iParam3) {
	Global_68192 = iParam0;
	switch (Global_68192) {
	case 3: Global_68190 = 0; break;

	case 4: Global_68190 = 3; break;
	}
	if (iParam1) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appsecuroserv")) > 0) {
			return;
		}
	}
	else if (iParam2) {
		if (script::_get_number_of_instances_of_script_with_name_hash(1476056117) > 0) {
			return;
		}
	}
	else if (iParam3) {
		if (script::_get_number_of_instances_of_script_with_name_hash(290327540) > 0) {
			return;
		}
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appinternet")) > 0) {
		return;
	}
	if (Global_69702 && func_194()) {
		return;
	}
	if (!Global_69702 && func_193()) {
		return;
	}
	if (iParam1) {
		if (!script::has_script_loaded("appSecuroServ")) {
			script::request_script("appSecuroServ");
		}
		while (!script::has_script_loaded("appSecuroServ")) {
			system::wait(0);
		}
		system::start_new_script("appSecuroServ", 4592);
		script::set_script_as_no_longer_needed("appSecuroServ");
	}
	else if (iParam2) {
		if (!script::has_script_loaded("appBikerBusiness")) {
			script::request_script("appBikerBusiness");
		}
		while (!script::has_script_loaded("appBikerBusiness")) {
			system::wait(0);
		}
		system::start_new_script("appBikerBusiness", 4592);
		script::set_script_as_no_longer_needed("appBikerBusiness");
	}
	else if (iParam3) {
		if (!script::has_script_loaded("appImportExport")) {
			script::request_script("appImportExport");
		}
		while (!script::has_script_loaded("appImportExport")) {
			system::wait(0);
		}
		system::start_new_script("appImportExport", 4592);
		script::set_script_as_no_longer_needed("appImportExport");
	}
	else {
		if (!script::has_script_loaded("appInternet")) {
			script::request_script("appInternet");
		}
		while (!script::has_script_loaded("appInternet")) {
			system::wait(0);
		}
		system::start_new_script("appInternet", 4592);
		script::set_script_as_no_longer_needed("appInternet");
	}
}

// Position - 0xDA5
void func_20(int iParam0, int iParam1) {
	if (!iParam1 && !func_151(player::player_id(), 1) && func_150() < func_149() &&
		!network::network_is_activity_session() && !func_145(player::player_id())) {
		func_21(1, iParam0);
	}
}

// Position - 0xDEF
void func_21(int iParam0, int iParam1) {
	struct<14> Var0;

	func_98(1, 1, iParam1);
	if (iParam0) {
		if (func_97(91) || func_97(98)) {
			func_96();
		}
		func_80();
		func_79(17);
		Var0.f_2 = 183;
		Var0.f_3 = iParam1;
		if (func_78(player::player_id()) && iParam1 == 0) {
			Var0.f_3 = 100;
		}
		func_76(Var0, func_77(0, 1));
		func_40();
		if (!func_78(player::player_id()) && iParam1 != 1) {
			func_22(82, "GB_TXTMSG_INIT", 2, 0, 0, 0, 0, 1, 0, 1);
		}
	}
}

// Position - 0xE86
int func_22(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9) {
	int iVar0;
	char *sVar1;
	int iVar2;
	char *sVar3;
	int iVar4;
	char *sVar5;
	char *sVar6;
	int iVar7;

	gameplay::clear_bit(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_23(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8,
				iParam9, iVar4, sVar5, sVar6, iVar7) == 1) {
		if (iParam7 == 1) {
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
			Global_3000 = iParam0;
			gameplay::set_bit(&Global_2313, 1);
			gameplay::set_bit(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

// Position - 0xF1E
int func_23(var uParam0, char *sParam1, int iParam2, int iParam3, char *sParam4, char *sParam5, int iParam6,
			int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13,
			char *sParam14, char *sParam15, int iParam16) {
	int iVar0;

	if (iParam13 > 99) {
	}
	if (gameplay::are_strings_equal(sParam14, sParam15)) {
	}
	func_34();
	iVar0 = 0;
	switch (iParam16) {
	case 0:
		if (Global_14443 == 0) {
			iVar0 = 0;
		}
		else {
			iVar0 = 1;
		}
		break;

	case 2:
		if (Global_14443 == 2) {
			iVar0 = 0;
		}
		else {
			iVar0 = 1;
		}
		break;

	case 1:
		if (Global_14443 == 1) {
			iVar0 = 0;
		}
		else {
			iVar0 = 1;
		}
		break;

	default: iVar0 = 0; break;
	}
	if (iVar0 == 0) {
		if (player::is_player_playing(player::player_id())) {
			if (ped::is_ped_swimming_under_water(player::player_ped_id())) {
				return 0;
			}
		}
		if (Global_101700.f_13010[Global_14443 /*20*/].f_17 == 1) {
			return 0;
		}
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("apptextmessage")) > 0) {
			return 0;
		}
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("apptextmessage")) > 0) {
			return 0;
		}
	}
	if (func_33() == 0) {
		func_31();
		return 0;
	}
	func_30(Global_16812);
	StringCopy(&Global_101700.f_13100[Global_16812 /*104*/], sParam1, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0) {
	}
	else {
		Global_101700.f_13100[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_25 = iParam7;
	Global_101700.f_13100[Global_16812 /*104*/].f_26 = uParam8;
	Global_101700.f_13100[Global_16812 /*104*/].f_29 = uParam9;
	Global_101700.f_13100[Global_16812 /*104*/].f_30 = uParam12;
	Global_101700.f_13100[Global_16812 /*104*/].f_31 = uParam11;
	Global_101700.f_13100[Global_16812 /*104*/].f_28 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&Global_101700.f_13100[Global_16812 /*104*/].f_33, sParam4, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&Global_101700.f_13100[Global_16812 /*104*/].f_50, sParam5, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&Global_101700.f_13100[Global_16812 /*104*/].f_67, sParam14, 64);
	StringCopy(&Global_101700.f_13100[Global_16812 /*104*/].f_83, sParam15, 64);
	if (gameplay::is_bit_set(Global_2313, 10)) {
		Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 1;
		Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 1;
		Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_29(0);
		func_29(2);
		func_29(1);
	}
	else {
		func_34();
		switch (iParam16) {
		case 3: Global_101700.f_13100[Global_16812 /*104*/].f_99[Global_14443] = 1; break;

		case 0: Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 1; break;

		case 2: Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 1; break;

		case 1: Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 1; break;
		}
		if (iParam16 == 3) {
			switch (Global_14443) {
			case 0:
				func_29(0);
				Global_3019 = 0;
				break;

			case 1:
				func_29(1);
				Global_3019 = 1;
				break;

			case 2:
				func_29(2);
				Global_3019 = 2;
				break;

			case 3:
				func_29(3);
				Global_3019 = 3;
				break;

			default: Global_3019 = 4; break;
			}
		}
	}
	if (iParam7 == 1) {
		if (gameplay::is_bit_set(Global_2313, 10)) {
			Global_101700.f_13010[0 /*20*/].f_17 = 1;
			Global_101700.f_13010[1 /*20*/].f_17 = 1;
			Global_101700.f_13010[2 /*20*/].f_17 = 1;
		}
		else {
			switch (iParam16) {
			case 3: Global_101700.f_13010[Global_14443 /*20*/].f_17 = 1; break;

			case 0: Global_101700.f_13010[0 /*20*/].f_17 = 1; break;

			case 2: Global_101700.f_13010[2 /*20*/].f_17 = 1; break;

			case 1: Global_101700.f_13010[1 /*20*/].f_17 = 1; break;
			}
		}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10) {
		func_34();
		if (Global_14386) {
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else {
			switch (Global_14443) {
			case 0: StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24); break;

			case 2: StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24); break;

			case 1: StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24); break;

			default: StringCopy(&Global_14432, "Phone_SoundSet_Default", 24); break;
			}
		}
		if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 != 1) {
			if (!func_28()) {
				audio::play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605) {
		if (Global_14443.f_1 == 6) {
			func_27(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_24(1);
			func_27(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14423), -1082130432, -1082130432,
					-1082130432);
		}
	}
	return 1;
}

// Position - 0x13D1
void func_24(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9) {
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		iVar1 = 0;
		if (func_214(14)) {
			while (iVar1 < 34) {
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11) {
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4) {
						if (Global_2882[iVar0] == 0) {
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3) {
								if (gameplay::is_bit_set(Global_2314, 3)) {
									iVar2 = 42;
									Global_14608 = 1;
								}
								else {
									iVar2 = 255;
									Global_14608 = 0;
								}
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_26(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar2);
								graphics::_pop_scaleform_movie_function_void();
							}
							if (Global_2452520) {
								if (iVar1 == 14) {
									func_25(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
											system::to_float(Global_2320[iVar1 /*15*/].f_10),
											system::to_float(Global_16808), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0,
											0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else {
			while (iVar1 < 34) {
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11) {
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4) {
						if (Global_2882[iVar0] == 0) {
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1) {
								iVar3 = 0;
								while (iVar3 < 35) {
									if (Global_101700.f_13100[iVar3 /*104*/].f_24 != 0) {
										if (Global_101700.f_13100[iVar3 /*104*/].f_28 == 0) {
											if (Global_101700.f_13100[iVar3 /*104*/].f_99[Global_14443] == 1) {
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_25(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										system::to_float(Global_2320[iVar1 /*15*/].f_10),
										system::to_float(Global_16813), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 7) {
								if (Global_69702) {
									iVar4 = 0;
									iVar4 = Global_2594052;
									iVar5 = 0;
									while (iVar5 < 12) {
										if (Global_2594053[iVar5 /*104*/].f_24 != 0) {
											if (Global_2594053[iVar5 /*104*/].f_28 == 0) {
												if (Global_2594053[iVar5 /*104*/
												]
														.f_99[Global_14443] == 1) {
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_25(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
											system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar4),
											-1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
								}
								else {
									switch (Global_14443) {
									case 0: iVar6 = Global_36917; break;

									case 1: iVar6 = Global_36918; break;

									case 2: iVar6 = Global_36919; break;

									default: break;
									}
									func_25(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
											system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar6),
											-1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14) {
								func_25(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										system::to_float(Global_2320[iVar1 /*15*/].f_10),
										system::to_float(Global_16808), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 20) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_26(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2319);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2) {
								if (gameplay::is_bit_set(Global_2314, 6)) {
									iVar7 = 42;
								}
								else {
									iVar7 = 255;
								}
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_26(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar7);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3) {
								if (gameplay::is_bit_set(Global_2314, 3)) {
									iVar8 = 42;
									Global_14608 = 1;
								}
								else {
									iVar8 = 255;
									Global_14608 = 0;
								}
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_26(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar8);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 8) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_26(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(42);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 23 &&
									 gameplay::are_strings_equal(&Global_2320[iVar1 /*15*/], "CELL_BENWEB") &&
									 gameplay::is_bit_set(Global_2314, 6)) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_26(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(42);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23) {
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
								func_25(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f,
										&Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else {
								func_25(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(0), -1f,
										&Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

// Position - 0x1977
void func_25(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
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
		func_26(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_26(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_26(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_26(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_26(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x1A2A
void func_26(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x1A3C
void func_27(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
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

// Position - 0x1A9F
bool func_28() { return Global_1315233; }

// Position - 0x1AAB
void func_29(int iParam0) {
	var uVar0;
	var uVar1;

	uVar0 = Global_101700.f_13010[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

// Position - 0x1ACA
void func_30(int iParam0) {
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	uVar0 = time::get_clock_seconds();
	uVar1 = time::get_clock_minutes();
	uVar2 = time::get_clock_hours();
	uVar3 = time::get_clock_day_of_month();
	uVar4 = time::get_clock_month() + 1;
	uVar5 = time::get_clock_year();
	Global_101700.f_13100[iParam0 /*104*/].f_18 = uVar0;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_5 = uVar5;
}

// Position - 0x1B5C
void func_31() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_69702) {
		iVar0 = 24;
		iVar1 = 33;
	}
	else {
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101700.f_13100[Global_16812 /*104*/].f_18 = -1;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1) {
		if (!func_32(Global_101700.f_13100[iVar2 /*104*/].f_18, Global_101700.f_13100[Global_16812 /*104*/].f_18)) {
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_24 = 1;
}

// Position - 0x1C27
int func_32(struct<6> Param0, struct<6> Param6) {
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;

	if (Param0.f_5 < Param6.f_5) {
		return 0;
	}
	if (Param0.f_5 > Param6.f_5) {
		return 1;
	}
	if (Param0.f_5 == Param6.f_5) {
		if (Param0.f_4 < Param6.f_4) {
			return 0;
		}
		if (Param0.f_4 > Param6.f_4) {
			return 1;
		}
		if (Param0.f_4 == Param6.f_4) {
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = Param0.f_3 * 86400;
			iVar12 = Var0 + Var0.f_1 + Var0.f_2 + Var0.f_3;
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = Param6.f_3 * 86400;
			iVar13 = Var6 + Var6.f_1 + Var6.f_2 + Var6.f_3;
			if (iVar12 > iVar13 || iVar12 == iVar13) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
	return 0;
}

// Position - 0x1D12
int func_33() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_69702) {
		iVar0 = 24;
		iVar1 = 33;
	}
	else {
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1) {
		if (Global_101700.f_13100[iVar2 /*104*/].f_24 == 0) {
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101700.f_13100[Global_16812 /*104*/].f_18 = -1;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1) {
		if (Global_101700.f_13100[iVar2 /*104*/].f_24 == 0 || Global_101700.f_13100[iVar2 /*104*/].f_24 == 1) {
			if (!func_32(Global_101700.f_13100[iVar2 /*104*/].f_18, Global_101700.f_13100[Global_16812 /*104*/].f_18)) {
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34) {
		return 0;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

// Position - 0x1E69
void func_34() {
	if (func_214(14)) {
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
		Global_14443 = func_35();
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

// Position - 0x1F0B
var func_35() {
	func_36();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x1F24
void func_36() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_39(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_38(player::player_ped_id());
			if (func_37(iVar0) && (!func_214(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_37(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x2021
bool func_37(int iParam0) { return iParam0 < 3; }

// Position - 0x202D
int func_38(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_39(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x206A
int func_39(int iParam0) {
	if (func_37(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x2094
void func_40() {
	if (!func_70() && func_56() && func_53(player::player_id())) {
		if (func_49()) {
			func_41("GB_INFO_MC_L", 1);
		}
		else {
			func_41("GB_INFO_LFG", 1);
		}
	}
}

// Position - 0x20D8
int func_41(char *sParam0, int iParam1) {
	int iVar0;

	iVar0 = -1;
	ui::_set_notification_text_entry(sParam0);
	iVar0 = ui::_draw_notification(0, 1);
	func_42(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

// Position - 0x2104
void func_42(int iParam0, char *sParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, char *sParam9, char *sParam10, char *sParam11) {
	int iVar0;

	if (!func_48() || !network::network_is_activity_session() || !func_45(player::player_id(), 0)) {
		return;
	}
	iVar0 = func_43(iParam2);
	if (iVar0 >= 0 && iVar0 < 5) {
		Global_1759864.f_5[iVar0 /*53*/] = iParam0;
		Global_1759864.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&Global_1759864.f_5[iVar0 /*53*/].f_8, sParam1, 16);
		Global_1759864.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1759864.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1759864.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1759864.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1759864.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&Global_1759864.f_5[iVar0 /*53*/].f_12, sParam3, 64);
		StringCopy(&Global_1759864.f_5[iVar0 /*53*/].f_28[0 /*6*/], sParam9, 24);
		StringCopy(&Global_1759864.f_5[iVar0 /*53*/].f_28[1 /*6*/], sParam10, 24);
		StringCopy(&Global_1759864.f_5[iVar0 /*53*/].f_28[2 /*6*/], sParam11, 24);
	}
}

// Position - 0x220C
int func_43(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= Global_1759864 - 1) {
		if (iParam0 > Global_1759864.f_5[iVar0 /*53*/].f_1) {
			func_44(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1759864++;
	if (Global_1759864 > 5) {
		Global_1759864 = 5;
		return Global_1759864;
	}
	return Global_1759864 - 1;
}

// Position - 0x226E
void func_44(int iParam0) {
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1) {
		Global_1759864.f_5[iVar0 /*53*/] = {Global_1759864.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

// Position - 0x22A7
bool func_45(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_46(-1, 0) == 8;
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

// Position - 0x22F2
int func_46(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_47();
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

// Position - 0x2333
int func_47() { return Global_1312735; }

// Position - 0x233F
bool func_48() { return dlc2::is_dlc_present(-1762644250); }

// Position - 0x2350
bool func_49() { return func_50(player::player_id()); }

// Position - 0x2360
bool func_50(int iParam0) { return func_51(iParam0, 1); }

// Position - 0x236F
bool func_51(int iParam0, int iParam1) {
	if (iParam0 != func_52()) {
		if (Global_1619421[iParam0 /*390*/].f_11 != func_52()) {
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 &&
				Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x23BE
int func_52() { return -1; }

// Position - 0x23C7
int func_53(int iParam0) {
	if (iParam0 == func_52()) {
		return 0;
	}
	if (!func_13(iParam0, 0, 1)) {
		return 0;
	}
	if (func_45(iParam0, 0)) {
		return 0;
	}
	if (gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_139, 2) ||
		gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_139, 5)) {
		return 0;
	}
	if (func_54(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x2435
bool func_54(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1) {
		return func_55(iParam0, 9);
	}
	return false;
}

// Position - 0x2453
bool func_55(int iParam0, int iParam1) {
	return gameplay::is_bit_set(Global_1619421[iParam0 /*390*/].f_11.f_4, iParam1);
}

// Position - 0x246E
int func_56() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32) {
		iVar1 = player::int_to_playerindex(iVar0);
		if (func_57(iVar1)) {
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x249F
bool func_57(int iParam0) {
	int iVar0;

	if (func_13(iParam0, 0, 1)) {
		if (iParam0 != player::player_id()) {
			iVar0 = 0;
			if (func_69(1)) {
				if (func_68(iParam0, 18)) {
					iVar0 = 1;
				}
			}
			else if (func_55(iParam0, 15)) {
				iVar0 = 1;
			}
			if (iVar0 && func_58(iParam0, 0, 0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x24FC
int func_58(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == func_52()) {
		return 0;
	}
	if (!func_13(iParam0, 0, 1)) {
		return 0;
	}
	if (func_45(iParam0, 0)) {
		return 0;
	}
	if (func_66(iParam0)) {
		return 0;
	}
	if (gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_139, 2) ||
		gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_139, 5)) {
		return 0;
	}
	if (func_65(iParam0)) {
		return 0;
	}
	if (iParam2) {
		if (func_63(iParam0, iParam1, 1)) {
			return 0;
		}
		if (func_62(iParam0)) {
			return 0;
		}
		if (func_60(iParam0, 1)) {
			return 0;
		}
	}
	else if (func_151(iParam0, 1)) {
		return 0;
	}
	if (func_59(iParam0)) {
		return 0;
	}
	if (func_54(iParam0)) {
		return 0;
	}
	if (func_145(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x25DF
bool func_59(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1) {
		return gameplay::is_bit_set(Global_1619421[iVar0 /*390*/].f_1, 0);
	}
	return false;
}

// Position - 0x2605
bool func_60(int iParam0, int iParam1) { return func_61(iParam0, iParam1, 1); }

// Position - 0x2616
int func_61(int iParam0, bool bParam1, int iParam2) {
	int iVar0;

	if (iParam0 == func_52()) {
		return 0;
	}
	if (!bParam1) {
		if (func_51(iParam0, iParam2)) {
			return 0;
		}
	}
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_52() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2) {
		return 1;
	}
	return 0;
}

// Position - 0x2672
bool func_62(int iParam0) { return func_55(iParam0, 20); }

// Position - 0x2682
bool func_63(int iParam0, int iParam1, int iParam2) {
	if (iParam1 != func_52()) {
		if (!iParam2) {
			if (func_64(iParam0, iParam1)) {
				return false;
			}
		}
		if (Global_1619421[iParam0 /*390*/].f_11 != func_52()) {
			return iParam1 == Global_1619421[iParam0 /*390*/].f_11;
		}
	}
	return false;
}

// Position - 0x26CC
bool func_64(int iParam0, int iParam1) {
	if (iParam1 != func_52()) {
		if (iParam0 != func_52()) {
			if (Global_1619421[iParam0 /*390*/].f_11 != func_52()) {
				if (Global_1619421[iParam0 /*390*/].f_11 == iParam0) {
					return iParam1 == iParam0;
				}
			}
		}
	}
	return false;
}

// Position - 0x2711
bool func_65(int iParam0) { return func_55(iParam0, 30); }

// Position - 0x2721
bool func_66(int iParam0) {
	if (!func_55(iParam0, 2)) {
		return true;
	}
	if (func_55(iParam0, 1)) {
		return true;
	}
	if (func_67(iParam0) > 0) {
		return true;
	}
	return false;
}

// Position - 0x2755
int func_67(int iParam0) { return Global_1619421[iParam0 /*390*/].f_11.f_22; }

// Position - 0x276A
bool func_68(int iParam0, int iParam1) {
	return gameplay::is_bit_set(Global_1619421[iParam0 /*390*/].f_11.f_5, iParam1);
}

// Position - 0x2785
bool func_69(int iParam0) { return func_60(player::player_id(), iParam0); }

// Position - 0x2797
int func_70() {
	int iVar0;
	var uVar1;
	struct<16> Var17;

	iVar0 = 0;
	while (iVar0 < 7) {
		if (Global_1619421[player::player_id() /*390*/].f_11.f_10[iVar0] == func_52()) {
			StringCopy(&Var17, "", 64);
			Var17 = {func_71(func_72(iVar0))};
			if (gameplay::are_strings_equal(&Var17, &uVar1)) {
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x27F1
struct<16> func_71(int iParam0) {
	return Global_2443905.f_3065.f_18[iParam0 /*16*/];
}

//Position - 0x2809
int func_72(int iParam0)
{
	if (iParam0 >= func_73()) {
		return 0;
	}
	switch (iParam0) {
	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	default:
	}
	return 0;
}

// Position - 0x286C
int func_73() { return func_74() - 1; }

// Position - 0x287A
int func_74() { return func_75(player::player_id()); }

// Position - 0x288A
int func_75(int iParam0) {
	int iVar0;

	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_52() && Global_1619421[iVar0 /*390*/].f_11.f_289 == 1) {
		return 8;
	}
	return 4;
}

// Position - 0x28C4
void func_76(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			 var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14) {
	Param0 = 0;
	Param0.f_1 = player::player_id();
	if (iParam14 != 0) {
		script::trigger_script_event(1, &Param0, 14, iParam14);
	}
}

// Position - 0x28ED
int func_77(int iParam0, int iParam1) {
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
				else if (!func_45(iVar2, 0)) {
					gameplay::set_bit(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

// Position - 0x2952
bool func_78(int iParam0) {
	if (iParam0 == -1) {
		return false;
	}
	return gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_258.f_13, 26);
}

// Position - 0x2978
void func_79(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	gameplay::set_bit(&Global_2494199.f_4710.f_7[iVar0], iVar1);
}

// Position - 0x29A1
void func_80() {
	struct<8> Var0;
	int iVar16;

	Var0 = {func_95(59, 61, -1)};
	iVar16 = 0;
	if (func_69(1)) {
		Var0 = {func_95(47, 48, -1)};
		iVar16 = 1;
	}
	if (gameplay::is_string_null_or_empty(&Var0)) {
		StringCopy(&Var0, func_93(player::player_id(), 0), 64);
	}
	func_84(&Var0, iVar16, 0);
	if (!gameplay::is_durango_version() && network::_0x595F028698072DD9(0, -1, 1) || func_83()) {
		func_82(28);
	}
	else {
		func_81(28);
	}
}

// Position - 0x2A1D
void func_81(int iParam0) { gameplay::set_bit(&Global_1619421[player::player_id() /*390*/].f_11.f_4, iParam0); }

// Position - 0x2A3A
void func_82(int iParam0) { gameplay::clear_bit(&Global_1619421[player::player_id() /*390*/].f_11.f_4, iParam0); }

// Position - 0x2A57
int func_83() {
	if (network::_0x66B59CFFD78467AF() == 0) {
		return 0;
	}
	if (gameplay::is_ps3_version()) {
		if (network::_0xAEEF48CDF5B6CE7C(1, -1)) {
			if (network::network_have_online_privileges()) {
				return 1;
			}
		}
	}
	if (gameplay::is_orbis_version()) {
		if (network::_0x72D918C99BCACC54(1)) {
			if (network::network_have_online_privileges()) {
				return 1;
			}
		}
	}
	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		if (network::_0x595F028698072DD9(0, -3, 1)) {
			return 1;
		}
	}
	if (gameplay::is_pc_version()) {
		if (network::_0xAEEF48CDF5B6CE7C(0, -1)) {
			if (network::network_have_online_privileges()) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x2ADD
void func_84(char *sParam0, int iParam1, int iParam2) {
	if (iParam2) {
		if (func_69(1) || iParam1 == 1) {
			func_90(47, 48, sParam0, -1, 1);
			if (func_49() && iParam1 == 1) {
				func_89(sParam0, iParam2);
			}
		}
		else {
			func_90(59, 61, sParam0, -1, 1);
			if (func_191() && iParam1 == 0) {
				func_85(sParam0, iParam2);
			}
		}
	}
	StringCopy(&Global_1619421[player::player_id() /*390*/].f_11.f_97, sParam0, 64);
	Global_1619421[player::player_id() /*390*/].f_11.f_113 = unk_0x497420E022796B3F();
	if (!gameplay::is_durango_version() && network::_0x595F028698072DD9(0, -1, 1) || func_83()) {
		func_82(28);
	}
	else {
		func_81(28);
	}
}

// Position - 0x2B98
void func_85(char *sParam0, int iParam1) {
	struct<16> Var0;
	bool bVar16;

	if (iParam1) {
		if (!gameplay::is_string_null_or_empty(sParam0)) {
			func_90(45, 46, sParam0, -1, 1);
			Var0 = {func_95(59, 61, -1)};
			if (gameplay::is_string_null_or_empty(&Var0)) {
				func_90(59, 61, sParam0, -1, 1);
			}
		}
	}
	if (!gameplay::is_durango_version() && network::_0x595F028698072DD9(0, -1, 1) || func_83()) {
		func_82(28);
	}
	else {
		func_81(28);
	}
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		bVar16 = true;
		if (func_55(player::player_id(), 28) || func_88(player::player_id()))
			&&!func_86(player::player_id()) { bVar16 = false; }
		if (bVar16) {
			StringCopy(&Global_1619421[player::player_id() /*390*/].f_11.f_251, sParam0, 64);
		}
	}
}

// Position - 0x2C59
int func_86(int iParam0) {
	struct<13> Var0;

	Var0 = {func_87(iParam0)};
	if (gameplay::is_durango_version() && network::_0xB57A49545BA53CE7(&Var0)) {
		return 1;
	}
	return 0;
}

// Position - 0x2C83
struct<13> func_87(int iParam0) {
	struct<13> Var0;

	network::network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

//Position - 0x2C9A
int func_88(int iParam0)
{
	struct<13> Var0;

	Var0 = {func_87(iParam0)};
	if (gameplay::is_orbis_version() || gameplay::is_pc_version()) {
		if (network::_0x72D918C99BCACC54(0)) {
			return 0;
		}
	}
	else if (gameplay::is_durango_version()) {
		if (network::_0xB57A49545BA53CE7(&Var0)) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x2CE2
void func_89(char *sParam0, int iParam1) {
	if (iParam1) {
		if (!gameplay::is_string_null_or_empty(sParam0)) {
			func_90(49, 50, sParam0, -1, 1);
		}
	}
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		StringCopy(&Global_1619421[player::player_id() /*390*/].f_11.f_267, sParam0, 64);
	}
	if (!gameplay::is_durango_version() && network::_0x595F028698072DD9(0, -1, 1) || func_83()) {
		func_82(28);
	}
	else {
		func_81(28);
	}
}

// Position - 0x2D4F
void func_90(int iParam0, int iParam1, char *sParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar10[32];
	int iVar18;
	int iVar19;

	if (func_92()) {
		iVar0 = Global_2523488[iParam0 /*3*/][func_91(iParam3)];
		iVar1 = Global_2523488[iParam1 /*3*/][func_91(iParam3)];
		if (iVar0 != 0 && iVar1 != 0) {
			StringCopy(&cVar2, "", 32);
			StringCopy(&cVar10, "", 32);
			iVar18 = ui::get_length_of_literal_string(sParam2);
			if (iVar18 > 0) {
				iVar19 = 10;
				if (iVar18 < 10) {
					iVar19 = iVar18;
				}
				StringCopy(&cVar2, ui::_get_text_substring_safe(sParam2, 0, iVar19, 31), 32);
				if (iVar18 > 10) {
					StringCopy(&cVar10, ui::_get_text_substring_safe(sParam2, 10, iVar18, 31), 32);
				}
			}
			stats::stat_set_string(iVar0, &cVar2, iParam4);
			stats::stat_set_string(iVar1, &cVar10, iParam4);
		}
	}
}

// Position - 0x2DF9
int func_91(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_47();
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

// Position - 0x2E2D
bool func_92() {
	return true;
	return false;
}

// Position - 0x2E3A
var func_93(int iParam0, int iParam1) {
	if (!iParam1) {
		if (func_60(iParam0, 1)) {
			return func_94();
		}
	}
	return ui::_get_label_text("GB_REST_ACC");
}

// Position - 0x2E61
var func_94() { return ui::_get_label_text("GB_REST_ACCM"); }

// Position - 0x2E71
struct<16> func_95(int iParam0, int iParam1, int iParam2) {
	var uVar0;
	var uVar1;
	struct<16> Var2;
	char cVar18[32];

	uVar0 = Global_2523488[iParam0 /*3*/][func_91(iParam2)];
	uVar1 = Global_2523488[iParam1 /*3*/][func_91(iParam2)];
	StringCopy(&Var2, stats::stat_get_string(uVar0, -1), 64);
	StringCopy(&cVar18, stats::stat_get_string(uVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

//Position - 0x2EBE
void func_96()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3) {
		if (Global_2433125.f_2199[iVar0 /*76*/].f_2 != 0) {
			Global_2433125.f_2199[iVar0 /*76*/].f_2 = 5;
			gameplay::set_bit(&Global_2433125.f_2199[iVar0 /*76*/].f_67, 0);
		}
		iVar0++;
	}
}

// Position - 0x2F09
bool func_97(int iParam0) { return Global_2433125.f_2199[0 /*76*/].f_1 == iParam0; }

// Position - 0x2F20
void func_98(int iParam0, int iParam1, int iParam2) {
	var uVar0;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	char *sVar10;
	struct<16> Var11;
	int iVar27;
	int iVar28;

	if (!func_142()) {
		return;
	}
	iVar7 = 1;
	if (func_78(player::player_id())) {
		iVar7 = 2;
	}
	if (iParam2 == 1) {
		iVar7 = 3;
	}
	if (Global_1619421[player::player_id() /*390*/].f_11 != player::player_id()) {
		if (iParam1) {
			unk_0x3EBEAC6C3F81F6BD(iVar7);
			func_139(0);
			func_137(0);
			func_82(21);
			func_82(22);
			Global_1619421[player::player_id() /*390*/].f_11.f_327 = iVar7;
		}
		Global_1619421[player::player_id() /*390*/].f_11 = player::player_id();
		Global_1619421[player::player_id() /*390*/].f_11.f_289 = iParam2;
		Global_1619421[player::player_id() /*390*/].f_11.f_326 = iParam2;
		unk_0x6BC0ACD0673ACEBE(func_47(), &uVar8, &uVar9);
		func_136(uVar8, uVar9);
		sVar10 = network::network_player_get_userid(player::player_id(), &uVar0);
		StringCopy(&Var11, sVar10, 64);
		func_135(Var11);
		func_134();
		if (func_133(5887, -1, 0) <= 0) {
			iVar6 = network::_get_posix_time();
		}
		else {
			iVar6 = func_133(5887, -1, 0) - 43200;
		}
		func_130(iVar6);
		if (decorator::decor_is_registered_as_type("Player_Boss", 3)) {
			decorator::decor_set_int(player::player_ped_id(), "Player_Boss", player::player_id());
		}
		Global_1619421[player::player_id() /*390*/].f_11.f_23 = -1;
		Global_1619421[player::player_id() /*390*/].f_11.f_24 = -1;
		Global_2494199.f_4710.f_32 = -1;
		func_124();
		func_116(0);
		if (iParam0) {
			func_79(0);
		}
		if (Global_2494199.f_4710.f_68 != func_52()) {
			Global_2494199.f_4710.f_68 = func_52();
		}
		if (gameplay::is_bit_set(Global_2494199.f_1644, 15)) {
			gameplay::clear_bit(&Global_2494199.f_1644, 15);
		}
		if (func_115(15)) {
			func_114(15);
		}
		if (!func_113() && !network::network_is_activity_session()) {
			func_112();
			func_111(2);
		}
		func_110(5927, 2, -1, 1, 0);
		func_82(31);
		func_80();
		func_109();
		func_108();
		func_107();
		if (iParam2 != 1) {
			if (!func_106(82, 3)) {
				iVar27 = 0;
				iVar28 = func_133(5884, -1, 0);
				if (!gameplay::is_bit_set(iVar28, 11)) {
					gameplay::set_bit(&iVar28, 11);
					func_110(5884, iVar28, -1, 1, 0);
					iVar27 = 1;
				}
				func_104(82, 3, iVar27);
			}
		}
		if (iParam2 == 1) {
			unk_0x0B565B0AAE56A0E8(func_102(func_103()), func_101(func_103()), func_100(), func_99(),
								   Global_1619421[player::player_id() /*390*/].f_11.f_290, 4,
								   Global_1619421[player::player_id() /*390*/].f_11.f_328);
		}
	}
}

// Position - 0x3198
int func_99() {
	if (Global_1763183.f_3 != 0) {
		return Global_1763183.f_3;
	}
	return -1;
}

// Position - 0x31B4
int func_100() {
	if (Global_1763183.f_2 != 0) {
		return Global_1763183.f_2;
	}
	return -1;
}

// Position - 0x31D0
int func_101(int iParam0) {
	if (iParam0 == func_52()) {
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[1];
}

// Position - 0x31F5
int func_102(int iParam0) {
	if (iParam0 == func_52()) {
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[0];
}

// Position - 0x321A
int func_103() { return Global_1619421[player::player_id() /*390*/].f_11; }

// Position - 0x322F
void func_104(int iParam0, int iParam1, int iParam2) {
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		func_34();
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
						func_105();
					}
				}
				else {
					Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_105();
				}
			}
			else {
				Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_105();
			}
		}
	}
}

// Position - 0x33D9
void func_105() {
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

// Position - 0x3458
int func_106(int iParam0, int iParam1) {
	if (Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] == 1) {
		return 1;
	}
	return 0;
}

// Position - 0x347D
void func_107() {
	if (!Global_2494199.f_4710.f_147) {
		Global_2494199.f_4710.f_147 = 1;
	}
}

// Position - 0x349C
void func_108() {
	struct<16> Var0;

	Var0 = {func_95(49, 50, -1)};
	func_89(&Var0, 0);
	if (!gameplay::is_durango_version() && network::_0x595F028698072DD9(0, -1, 1) || func_83()) {
		func_82(28);
	}
	else {
		func_81(28);
	}
}

// Position - 0x34E5
void func_109() {
	struct<16> Var0;

	Var0 = {func_95(45, 46, -1)};
	func_85(&Var0, 0);
	if (!gameplay::is_durango_version() && network::_0x595F028698072DD9(0, -1, 1) || func_83()) {
		func_82(28);
	}
	else {
		func_81(28);
	}
}

// Position - 0x352E
void func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x355E
void func_111(int iParam0) {
	gameplay::set_bit(&Global_2391018.f_2, iParam0);
	if (Global_2391018) {
		return;
	}
	Global_2391018 = 1;
	Global_2391018.f_1 = 0;
}

// Position - 0x3588
void func_112() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15) {
		if (Global_2390944.f_28[iVar0 /*2*/] != -1 && Global_2390944.f_28[iVar0 /*2*/].f_1 != 0) {
			if (ui::does_blip_exist(Global_2390944.f_28[iVar0 /*2*/].f_1)) {
				ui::set_blip_as_short_range(Global_2390944.f_28[iVar0 /*2*/].f_1, 1);
			}
		}
		iVar0++;
	}
}

// Position - 0x35E9
bool func_113() { return Global_2443134.f_618; }

// Position - 0x35F8
void func_114(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	gameplay::clear_bit(&Global_2494199.f_4710.f_7[iVar0], iVar1);
}

// Position - 0x3621
bool func_115(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	return gameplay::is_bit_set(Global_2494199.f_4710.f_7[iVar0], iVar1);
}

// Position - 0x364A
void func_116(int iParam0) {
	if (func_123()) {
		if (iParam0 == 1) {
			if (Global_2494199.f_4257 == -1) {
				Global_2494199.f_4257 = 60000;
			}
			func_14(&Global_2494199.f_4255, 0, 0);
			if (Global_2494199.f_4260 == -1) {
				Global_2494199.f_4260 = 10000;
			}
			func_14(&Global_2494199.f_4258, 0, 0);
		}
		else {
			Global_1312416 = 0;
			func_122(1);
		}
		if (!network::network_is_activity_session() && !func_121() && !func_117(player::player_id())) {
			Global_979731 = 0;
		}
		Global_1619421[player::player_id() /*390*/].f_8 = 0;
	}
}

// Position - 0x36E4
int func_117(int iParam0) {
	if (func_118(iParam0, 1)) {
		if (Global_1591201[iParam0 /*602*/] != 6) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x3708
bool func_118(int iParam0, int iParam1) {
	if (iParam1) {
		if (func_119(iParam0)) {
			return true;
		}
	}
	if (Global_1591201[iParam0 /*602*/] == -1) {
		return false;
	}
	return true;
}

// Position - 0x3734
bool func_119(int iParam0) { return func_120(iParam0); }

// Position - 0x3742
var func_120(int iParam0) { return gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_13.f_1, 0); }

// Position - 0x375C
bool func_121() { return Global_2443134.f_718; }

// Position - 0x376B
void func_122(int iParam0) {
	if (network::network_is_game_in_progress()) {
		if (!func_123()) {
			if (func_13(player::player_id(), 1, 0)) {
				ped::set_ped_can_be_dragged_out(player::player_ped_id(), 1);
				ped::set_ped_config_flag(player::player_ped_id(), 342, 0);
				ped::set_ped_config_flag(player::player_ped_id(), 122, 0);
			}
			player::set_player_vehicle_defense_modifier(player::player_id(), 1f);
			network::_0x1B857666604B1A74(0);
			network::network_set_friendly_fire_option(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1) {
				Global_1312416.f_2 = 0;
				if (iParam0) {
					network::use_player_colour_instead_of_team_colour(0, 0);
				}
			}
		}
		else {
			if (func_13(player::player_id(), 1, 1)) {
				ped::set_ped_can_be_dragged_out(player::player_ped_id(), 0);
				weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
				ped::set_ped_config_flag(player::player_ped_id(), 342, 1);
				ped::set_ped_config_flag(player::player_ped_id(), 122, 1);
				player::set_player_vehicle_defense_modifier(player::player_id(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1) {
					network::use_player_colour_instead_of_team_colour(1, 0);
				}
			}
			network::_0x1B857666604B1A74(1);
			network::network_set_friendly_fire_option(0);
		}
	}
}

// Position - 0x3864
bool func_123() { return Global_1312416; }

// Position - 0x3870
void func_124() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32) {
		iVar1 = player::int_to_playerindex(iVar0);
		if (network::network_is_player_active(iVar1)) {
			func_126(1, iVar1);
			if (iVar1 != player::player_id()) {
				func_125(iVar1);
			}
		}
		iVar0++;
	}
}

// Position - 0x38B2
void func_125(int iParam0) {
	int iVar0;

	if (gameplay::is_bit_set(Global_1619421[player::player_id() /*390*/].f_11.f_93, iParam0)) {
		iVar0 = player::get_player_ped(iParam0);
		ped::set_ped_can_be_targetted_by_player(iVar0, player::player_id(), 1);
		unk_0x55FCC0C390620314(player::player_id(), iParam0, 1);
		unk_0x55FCC0C390620314(iParam0, player::player_id(), 1);
		func_126(1, iParam0);
		gameplay::clear_bit(&Global_1619421[player::player_id() /*390*/].f_11.f_93, iParam0);
	}
}

// Position - 0x3917
void func_126(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_13(iParam1, 0, 1)) {
		iVar1 = player::get_player_ped(iParam1);
		if (entity::does_entity_exist(iVar1) && !entity::is_entity_dead(iVar1, 0)) {
			if (ped::is_ped_in_any_vehicle(iVar1, 0)) {
				iVar0 = ped::get_vehicle_ped_is_in(iVar1, 0);
				if (entity::does_entity_exist(iVar0) && !entity::is_entity_dead(iVar0, 0)) {
					vehicle::_0x7D6F9A3EF26136A0(iVar0, iParam0, 1);
					if (func_63(iParam1, func_103(), 1)) {
						if (func_103() == iParam1) {
							if (Global_2494199.f_4710.f_69[3] != iVar0) {
								Global_2494199.f_4710.f_69[3] = iVar0;
							}
						}
						else {
							iVar2 = func_127(func_103(), iParam1);
							if (iVar2 != -1) {
								if (Global_2494199.f_4710.f_69[iVar2] != iVar0) {
									Global_2494199.f_4710.f_69[iVar2] = iVar0;
								}
							}
						}
					}
				}
			}
			else if (!iParam0) {
				if (func_63(iParam1, func_103(), 1)) {
					if (func_103() == iParam1) {
						if (entity::does_entity_exist(Global_2494199.f_4710.f_69[3]) &&
							!entity::is_entity_dead(Global_2494199.f_4710.f_69[3], 0)) {
							vehicle::_0x7D6F9A3EF26136A0(Global_2494199.f_4710.f_69[3], 1, 1);
							Global_2494199.f_4710.f_69[3] = 0;
						}
					}
					else {
						iVar3 = func_127(func_103(), iParam1);
						if (iVar3 != -1) {
							if (entity::does_entity_exist(Global_2494199.f_4710.f_69[iVar3]) &&
								!entity::is_entity_dead(Global_2494199.f_4710.f_69[iVar3], 0)) {
								vehicle::_0x7D6F9A3EF26136A0(Global_2494199.f_4710.f_69[iVar3], 1, 1);
								Global_2494199.f_4710.f_69[iVar3] = 0;
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x3AB1
int func_127(int iParam0, int iParam1) {
	int iVar0;

	if (func_198(iParam0)) {
		if (func_63(iParam1, iParam0, 0) || func_129(iParam1, iParam0)) {
			iVar0 = 0;
			while (iVar0 < 7) {
				if (func_128(iParam0, iVar0) == iParam1) {
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

// Position - 0x3B07
int func_128(int iParam0, int iParam1) {
	if (func_198(iParam0)) {
		if (iParam1 > -1 && iParam1 < 7) {
			return Global_1619421[iParam0 /*390*/].f_11.f_10[iParam1];
		}
	}
	return func_52();
}

// Position - 0x3B43
int func_129(int iParam0, int iParam1) {
	if (iParam1 != func_52()) {
		if (Global_1619421[iParam0 /*390*/].f_11.f_25 != func_52()) {
			return iParam1 == Global_1619421[iParam0 /*390*/].f_11.f_25;
		}
	}
	return 0;
}

// Position - 0x3B7C
void func_130(int iParam0) {
	if (!func_142()) {
		return;
	}
	Global_1619421[player::player_id() /*390*/].f_11.f_1 = iParam0;
	if (func_133(5887, -1, 0) != func_131(player::player_id())) {
		func_110(5887, func_131(player::player_id()), -1, 1, 0);
	}
}

// Position - 0x3BC6
int func_131(int iParam0) {
	if (func_132(iParam0) == -1) {
		return -1;
	}
	return func_132(iParam0) + 43200;
}

// Position - 0x3BE7
int func_132(int iParam0) { return Global_1619421[iParam0 /*390*/].f_11.f_1; }

// Position - 0x3BFC
int func_133(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_91(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x3C2E
void func_134() {
	if (gameplay::is_pc_version()) {
		unk_0x265559DA40B3F327(1);
		if (func_69(1)) {
			unk_0x6A1738B4323FE2D9(1253452001);
		}
		else {
			unk_0x6A1738B4323FE2D9(-1755491431);
		}
	}
}

// Position - 0x3C5F
void func_135(char[64] cParam0) { Global_2443905.f_3065.f_2 = {cParam0}; }

// Position - 0x3C78
void func_136(var uParam0, var uParam1) {
	Global_1619421[player::player_id() /*390*/].f_11.f_7[0] = uParam0;
	Global_1619421[player::player_id() /*390*/].f_11.f_7[1] = uParam1;
}

// Position - 0x3CA8
void func_137(int iParam0) { func_138(204, iParam0, -1, 1); }

// Position - 0x3CBA
void func_138(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (func_92()) {
		iVar0 = Global_2522581[iParam0 /*3*/][func_91(iParam2)];
		if (iVar0 != 0) {
			stats::stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

// Position - 0x3CEC
void func_139(int iParam0) {
	if (iParam0) {
		if (func_141(4)) {
			func_81(21);
			func_81(22);
		}
		func_81(31);
		func_140(iParam0);
	}
	else {
		if (func_55(player::player_id(), 21)) {
			func_82(21);
			if (!func_141(3) && func_141(4)) {
				func_81(22);
			}
		}
		func_82(31);
		func_140(iParam0);
	}
}

// Position - 0x3D54
void func_140(int iParam0) { func_138(286, iParam0, -1, 1); }

// Position - 0x3D67
bool func_141(int iParam0) { return gameplay::is_bit_set(Global_2494199.f_4710.f_25, iParam0); }

// Position - 0x3D7E
int func_142() {
	if (func_144() && func_143(0)) {
		return 1;
	}
	return 0;
}

// Position - 0x3D9C
var func_143(int iParam0) { return Global_1312373[iParam0]; }

// Position - 0x3DAC
var func_144() { return func_143(func_47() + 1); }

// Position - 0x3DBE
bool func_145(int iParam0) { return func_146(iParam0) > 0; }

// Position - 0x3DCE
int func_146(int iParam0) {
	int iVar0;
	int iVar1;

	if (func_13(iParam0, 0, 1)) {
		if (Global_1619421[iParam0 /*390*/].f_11.f_171 != -1) {
			iVar0 = Global_1619421[iParam0 /*390*/].f_11.f_171;
		}
		else {
			iVar0 = func_148(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = iVar0 + func_147() - network::_get_posix_time();
		return iVar1;
	}
	return -1;
}

// Position - 0x3E23
int func_147() { return Global_262145.f_13071; }

// Position - 0x3E32
int func_148(int iParam0) {
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x3E50
int func_149() { return Global_262145.f_10986; }

// Position - 0x3E5F
int func_150() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 32) {
		iVar2 = player::int_to_playerindex(iVar0);
		if (network::network_is_player_active(iVar2)) {
			if (func_198(iVar2)) {
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

// Position - 0x3E9C
bool func_151(int iParam0, int iParam1) {
	if (!iParam1) {
		if (func_198(iParam0)) {
			return false;
		}
	}
	return Global_1619421[iParam0 /*390*/].f_11 != func_52();
}

// Position - 0x3EC7
void func_152() {
	char *sVar0;
	vector3 vVar16;
	int iVar19;

	Global_1764565 = 1;
	if (!ped::is_ped_injured(player::player_ped_id())) {
		weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
		vVar16 = {entity::get_offset_from_entity_in_world_coords(iLocal_110, 0.0328f, -0.8f, 0.3f)};
		iVar19 = 0;
		func_206(&uLocal_106);
		if (func_2(0, &sVar0)) {
			while (!iVar19) {
				func_202();
				if (!func_211(&uLocal_106)) {
					func_210(&uLocal_106, 0, 0);
				}
				else if (func_207(&uLocal_106, 4000, 0)) {
					iVar19 = 1;
				}
				if (!func_158(entity::get_entity_coords(player::player_ped_id(), 1), vVar16, 0.05f, 0) &&
					!func_157(entity::get_entity_heading(player::player_ped_id()),
							  entity::get_entity_heading(iLocal_110), 5f)) {
					if (!func_154(player::player_ped_id(), 2106541073)) {
						ai::task_go_straight_to_coord(player::player_ped_id(), vVar16, 1f, 5000,
													  entity::get_entity_heading(iLocal_110), 0.25f);
					}
				}
				else {
					iVar19 = 1;
				}
				system::wait(0);
			}
			func_206(&uLocal_106);
			iLocal_111 = 0;
		}
	}
	while (iLocal_111 != 3) {
		func_153(iLocal_110);
		func_202();
		system::wait(0);
	}
}

// Position - 0x3FD8
void func_153(int iParam0) {
	char *sVar0;
	char *sVar16;
	char *sVar32;
	char *sVar48;
	int iVar49;
	int iVar50;
	int iVar51;

	if (!network::network_is_game_in_progress()) {
		return;
	}
	if (ped::is_ped_injured(player::player_ped_id())) {
		return;
	}
	if (!func_209(player::player_id()) && !func_208(player::player_id())) {
		return;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return;
	}
	func_2(0, &sVar0);
	func_2(1, &sVar16);
	func_2(2, &sVar32);
	streaming::request_anim_dict(&sVar32);
	streaming::request_anim_dict(&sVar0);
	sVar48 = "idle_a";
	iVar49 = 1;
	if (entity::get_entity_model(player::player_ped_id()) == joaat("mp_f_freemode_01")) {
		iVar49 = 1;
	}
	switch (iLocal_111) {
	case 0:
		iLocal_103 = 0;
		graphics::draw_debug_text("walk", entity::get_entity_coords(player::player_ped_id(), 1), 64, 256, 64, 64);
		if (streaming::has_anim_dict_loaded(&sVar0)) {
			if (ai::get_script_task_status(player::player_ped_id(), 2106541073) == 7 &&
				streaming::has_anim_dict_loaded(&sVar0)) {
				if (ped::is_synchronized_scene_running(iLocal_112)) {
					ped::detach_synchronized_scene(iLocal_112);
					iLocal_112 = -1;
				}
				iLocal_112 = network::network_create_synchronised_scene(
					vLocal_116, entity::get_entity_rotation(iParam0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
				network::network_add_ped_to_synchronised_scene(player::player_ped_id(), iLocal_112, &sVar0, "enter", 4f,
															   -2f, 5, 0, 1148846080, 0);
				network::network_start_synchronised_scene(iLocal_112);
				streaming::remove_anim_dict(&sVar0);
				iLocal_111 = 1;
			}
		}
		break;

	case 1:
		graphics::draw_debug_text("enter", entity::get_entity_coords(player::player_ped_id(), 1), 64, 256, 64, 64);
		streaming::request_anim_dict(&sVar16);
		iVar50 = network::_network_unlink_networked_synchronised_scene(iLocal_112);
		if (!iLocal_103) {
			if (ped::get_synchronized_scene_phase(iVar50) >= 0.93f) {
				audio::play_sound_frontend(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
				iLocal_103 = 1;
			}
		}
		if (streaming::has_anim_dict_loaded(&sVar16) &&
			(!ped::is_synchronized_scene_running(iVar50) || ped::get_synchronized_scene_phase(iVar50) >= 0.96f)) {
			iVar51 = gameplay::get_random_int_in_range(0, iVar49);
			if (gameplay::are_strings_equal(&cLocal_119, "idle_a") && iVar51 == 0 ||
				gameplay::are_strings_equal(&cLocal_119, "idle_b") && iVar51 == 1 ||
				gameplay::are_strings_equal(&cLocal_119, "idle_c") && iVar51 == 2 ||
				gameplay::are_strings_equal(&cLocal_119, "idle_d") && iVar51 == 3) {
				iVar51++;
				if (iVar51 >= iVar49) {
					iVar51 = 0;
				}
			}
			if (ped::is_synchronized_scene_running(iLocal_112)) {
				ped::detach_synchronized_scene(iLocal_112);
				iLocal_112 = -1;
			}
			iLocal_112 = network::network_create_synchronised_scene(vLocal_116, entity::get_entity_rotation(iParam0, 2),
																	2, 0, 1, 1065353216, 0, 1065353216);
			switch (iVar51) {
			case 0:
				network::network_add_ped_to_synchronised_scene(player::player_ped_id(), iLocal_112, &sVar16, "idle_a",
															   4f, -2f, 5, 0, 1148846080, 0);
				network::network_start_synchronised_scene(iLocal_112);
				StringCopy(&cLocal_119, "idle_a", 16);
				iLocal_111 = 3;
				break;

			case 1:
				network::network_add_ped_to_synchronised_scene(player::player_ped_id(), iLocal_112, &sVar16, "idle_b",
															   4f, -2f, 5, 0, 1148846080, 0);
				network::network_start_synchronised_scene(iLocal_112);
				StringCopy(&cLocal_119, "idle_b", 16);
				iLocal_111 = 3;
				break;

			case 2:
				network::network_add_ped_to_synchronised_scene(player::player_ped_id(), iLocal_112, &sVar16, "idle_c",
															   4f, -2f, 5, 0, 1148846080, 0);
				network::network_start_synchronised_scene(iLocal_112);
				StringCopy(&cLocal_119, "idle_c", 16);
				iLocal_111 = 3;
				break;

			case 3:
				network::network_add_ped_to_synchronised_scene(player::player_ped_id(), iLocal_112, &sVar16, "idle_d",
															   4f, -2f, 5, 0, 1148846080, 0);
				network::network_start_synchronised_scene(iLocal_112);
				StringCopy(&cLocal_119, "idle_d", 16);
				iLocal_111 = 3;
				break;

			default: StringCopy(&cLocal_119, "idle_XXX", 16); break;
			}
		}
		break;

	case 3:
		iLocal_103 = 0;
		if (entity::is_entity_playing_anim(player::player_ped_id(), &sVar16, "idle_a", 2)) {
			graphics::draw_debug_text("idle_a", entity::get_entity_coords(player::player_ped_id(), 1), 256, 64, 64, 64);
		}
		else if (entity::is_entity_playing_anim(player::player_ped_id(), &sVar16, "idle_b", 2)) {
			graphics::draw_debug_text("idle_b", entity::get_entity_coords(player::player_ped_id(), 1), 256, 64, 64, 64);
		}
		else if (entity::is_entity_playing_anim(player::player_ped_id(), &sVar16, "idle_c", 2)) {
			graphics::draw_debug_text("idle_c", entity::get_entity_coords(player::player_ped_id(), 1), 256, 64, 64, 64);
		}
		else if (entity::is_entity_playing_anim(player::player_ped_id(), &sVar16, "idle_d", 2)) {
			graphics::draw_debug_text("idle_d", entity::get_entity_coords(player::player_ped_id(), 1), 256, 64, 64, 64);
		}
		else {
			graphics::draw_debug_text("idle_XXX", entity::get_entity_coords(player::player_ped_id(), 1), 256, 64, 64,
									  64);
		}
		iVar50 = network::_network_unlink_networked_synchronised_scene(iLocal_112);
		if (!ped::is_synchronized_scene_running(iLocal_112) && !ped::is_synchronized_scene_running(iVar50)) {
			if (ped::is_synchronized_scene_running(iLocal_112)) {
				ped::detach_synchronized_scene(iLocal_112);
				iLocal_112 = -1;
			}
			iLocal_112 = network::network_create_synchronised_scene(vLocal_116, entity::get_entity_rotation(iParam0, 2),
																	2, 0, 1, 1065353216, 0, 1065353216);
			iVar50 = network::_network_unlink_networked_synchronised_scene(iLocal_112);
			if (ped::is_synchronized_scene_running(iVar50)) {
				ped::set_synchronized_scene_phase(iVar50, 0f);
			}
			network::network_add_ped_to_synchronised_scene(player::player_ped_id(), iLocal_112, &sVar16, sVar48, 4f,
														   -2f, 5, 0, 1148846080, 0);
			network::network_start_synchronised_scene(iLocal_112);
			iLocal_111 = 3;
			return;
		}
		if (streaming::has_anim_dict_loaded(&sVar16) &&
			(!ped::is_synchronized_scene_running(iVar50) || ped::get_synchronized_scene_phase(iVar50) >= 0.99f)) {
			if (ped::is_synchronized_scene_running(iLocal_112)) {
				ped::detach_synchronized_scene(iLocal_112);
				iLocal_112 = -1;
			}
			iLocal_112 = network::network_create_synchronised_scene(vLocal_116, entity::get_entity_rotation(iParam0, 2),
																	2, 0, 1, 1065353216, 0, 1065353216);
			network::network_add_ped_to_synchronised_scene(player::player_ped_id(), iLocal_112, &sVar16, sVar48, 4f,
														   -2f, 5, 0, 1148846080, 0);
			network::network_start_synchronised_scene(iLocal_112);
			iLocal_111 = 3;
			return;
		}
		break;
	}
}

// Position - 0x4515
int func_154(int iParam0, int iParam1) {
	if (func_155(iParam0)) {
		if (ai::get_script_task_status(iParam0, iParam1) == 1 || ai::get_script_task_status(iParam0, iParam1) == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x4548
bool func_155(int iParam0) {
	if (func_156(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x4568
bool func_156(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x4589
int func_157(float fParam0, float fParam1, float fParam2) {
	float fVar0;
	float fVar1;

	fVar1 = fParam1 - fParam2;
	if (fVar1 < 0f) {
		fVar1 += 360f;
	}
	fVar0 = fParam1 + fParam2;
	if (fVar0 >= 360f) {
		fVar0 -= 360f;
	}
	if (fVar0 > fVar1) {
		if (fParam0 < fVar0 && fParam0 > fVar1) {
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1) {
		return 1;
	}
	return 0;
}

// Position - 0x45FE
int func_158(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
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

// Position - 0x4679
int func_159() {
	if (func_208(player::player_id())) {
		if (gameplay::is_bit_set(Global_1764677.f_2, 0) || gameplay::is_bit_set(Global_1764677.f_2, 2)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x46B0
bool func_160() {
	if (func_209(player::player_id())) {
		if (gameplay::is_bit_set(Global_1764677.f_2, 0) || gameplay::is_bit_set(Global_1764677.f_2, 2)) {
			return true;
		}
	}
	return false;
}

// Position - 0x46E7
int func_161() {
	if (func_145(player::player_id())) {
		return 0;
	}
	if (func_198(player::player_id())) {
		return 1;
	}
	else if (func_150() < func_149()) {
		return 1;
	}
	return 0;
}

// Position - 0x4720
int func_162(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_163(iParam0);
	if (iVar0 == -1) {
		return 0;
	}
	if (!player::is_player_playing(player::get_player_index())) {
		return 0;
	}
	if (func_197(0)) {
		return 0;
	}
	if (cutscene::is_cutscene_playing()) {
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/] == 1 && Global_36484[iVar0 /*32*/].f_4 == 1) {
			if (iParam1) {
				if (Global_36484[iVar0 /*32*/].f_29) {
					return 0;
				}
			}
			Global_36484[iVar0 /*32*/].f_5 = 1;
			Global_36484[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else {
			if (Global_36484[iVar0 /*32*/] == 0) {
			}
			if (Global_36484[iVar0 /*32*/].f_7) {
			}
		}
	}
	return 0;
}

// Position - 0x47D8
int func_163(int iParam0) {
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

// Position - 0x4813
void func_164(int iParam0) {
	if (func_189(player::player_id()) && func_174(player::player_id()) == func_173(player::player_id()) &&
		!network::network_is_player_in_mp_cutscene(player::player_id()) && !func_172() && !Global_1764566) {
		if (func_170()) {
			func_169("WHPRIVSESLAP");
		}
		else if (!iParam0) {
			if (func_150() >= func_149()) {
				func_182(&iLocal_99, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_145(player::player_id())) {
				func_182(&iLocal_99, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (network::network_is_activity_session()) {
				func_169("WHSECUROBLCK");
			}
			else {
				func_182(&iLocal_99, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_50(player::player_id())) {
			func_169("WHBIKERBLCK");
		}
		else if (func_211(&uLocal_104) && func_207(&uLocal_104, 10000, 1) || !iLocal_101) {
			if (func_165(player::player_id()) || Global_1764566 == 1) {
				iLocal_101 = 1;
				if (!Global_1764566) {
					func_169("WHSECUROBLCK");
				}
			}
			else {
				if (func_183()) {
					ui::clear_help(1);
				}
				iLocal_101 = 0;
				func_206(&uLocal_104);
				func_182(&iLocal_99, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_101) {
			if (!ui::is_help_message_being_displayed()) {
				func_169("WHSECUROBLCK");
			}
			if (!func_165(player::player_id())) {
				ui::clear_help(1);
				iLocal_101 = 0;
			}
		}
	}
}

// Position - 0x4988
int func_165(int iParam0) { return func_166(func_167(iParam0)); }

// Position - 0x499A
int func_166(int iParam0) {
	switch (iParam0) {
	case 178:
	case 188: return 1;

	default:
	}
	return 0;
}

// Position - 0x49BA
int func_167(int iParam0) {
	if (func_168(iParam0, 0)) {
		return Global_1619421[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

// Position - 0x49DD
bool func_168(int iParam0, int iParam1) {
	if (Global_1619421[iParam0 /*390*/].f_11.f_32 != -1 || iParam1 && Global_1619421[iParam0 /*390*/].f_11.f_31 != -1) {
		return true;
	}
	return false;
}

// Position - 0x4A18
void func_169(char *sParam0) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0x4A2E
bool func_170() {
	if (func_171()) {
		return true;
	}
	return Global_2443134.f_622;
}

// Position - 0x4A48
bool func_171() { return Global_1315193 == 10; }

// Position - 0x4A57
bool func_172() { return Global_1764677.f_12; }

// Position - 0x4A65
int func_173(int iParam0) {
	if (iParam0 == func_52()) {
		return 0;
	}
	return Global_1591201[iParam0 /*602*/].f_258.f_103;
}

// Position - 0x4A88
int func_174(int iParam0) {
	if (func_189(iParam0)) {
		return func_175(Global_2421664[iParam0 /*358*/].f_312.f_1);
	}
	return 0;
}

// Position - 0x4AAF
int func_175(int iParam0) {
	switch (iParam0) {
	case 57: return 1;

	case 58: return 2;

	case 59: return 3;

	case 60: return 4;

	case 61: return 5;

	case 62: return 6;

	case 63: return 7;

	case 64: return 8;

	case 65: return 9;

	case 66: return 10;

	default:
	}
	return 0;
}

// Position - 0x4B26
void func_176(int iParam0) {
	if (func_186(player::player_id()) || func_159())
		&&!network::network_is_player_in_mp_cutscene(player::player_id()) && !func_172() && !Global_1764566 &&
			func_157(entity::get_entity_heading(player::player_ped_id()), entity::get_entity_heading(iLocal_110), 90f) {
			if (network::network_is_activity_session()) {
				func_169("WHSECUROBLCK");
			}
			else if (func_170()) {
				if (func_186(player::player_id())) {
					func_169("BIKERWHBLCKC");
				}
				else {
					func_169("BIKERWHBLCKD");
				}
			}
			else if (func_50(player::player_id())) {
				if (func_211(&uLocal_104) && func_207(&uLocal_104, 10000, 1) || !iLocal_101) {
					if (func_177(player::player_id()) || Global_1764566 == 1) {
						iLocal_101 = 1;
						if (!Global_1764566) {
							func_169("WHSECUROBLCK");
						}
					}
					else {
						if (func_183()) {
							ui::clear_help(1);
						}
						iLocal_101 = 0;
						func_206(&uLocal_104);
						func_182(&iLocal_99, 1, "BIKERWHINPUT", 0, 0, 0, 0);
					}
				}
				else if (iLocal_101) {
					if (!ui::is_help_message_being_displayed()) {
						func_169("WHSECUROBLCK");
					}
					if (!func_177(player::player_id())) {
						iLocal_101 = 0;
						ui::clear_help(1);
					}
				}
			}
			else if (!iParam0 && func_150() < func_149()) {
				func_182(&iLocal_99, 1, "BIKERWHBLCKA", 0, 0, 0, 0);
			}
			else {
				func_169("BIKERWHBLCKB");
			}
		}
}

// Position - 0x4C95
int func_177(int iParam0) { return func_178(func_167(iParam0)); }

// Position - 0x4CA7
int func_178(int iParam0) {
	switch (iParam0) {
	case 190:
	case 191:
	case 192: return 1;

	default:
	}
	return 0;
}

// Position - 0x4CCD
bool func_179() {
	if (entity::does_entity_exist(iLocal_110)) {
		if (func_208(player::player_id()) || func_180(player::player_id())) {
			return true;
		}
	}
	return false;
}

// Position - 0x4CFC
int func_180(int iParam0) {
	if (func_187(Global_1591201[iParam0 /*602*/].f_258.f_15, -1)) {
		return 1;
	}
	return 0;
}

// Position - 0x4D1F
void func_181(int iParam0) {
	if (func_160() && !network::network_is_player_in_mp_cutscene(player::player_id()) && !func_172() &&
		!Global_1764566) {
		if (func_170()) {
			func_169("WHPRIVSESLAP");
		}
		else if (!iParam0) {
			if (func_150() >= func_149()) {
				func_182(&iLocal_99, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_145(player::player_id())) {
				func_182(&iLocal_99, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (network::network_is_activity_session()) {
				func_169("WHSECUROBLCK");
			}
			else {
				func_182(&iLocal_99, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_50(player::player_id())) {
			func_169("WHBIKERBLCK");
		}
		else if (func_211(&uLocal_104) && func_207(&uLocal_104, 10000, 1) || !iLocal_101) {
			if (func_212(player::player_id()) || Global_1764566 == 1) {
				iLocal_101 = 1;
				if (!Global_1764566) {
					func_169("WHSECUROBLCK");
				}
			}
			else {
				if (func_183()) {
					ui::clear_help(1);
				}
				iLocal_101 = 0;
				func_206(&uLocal_104);
				func_182(&iLocal_99, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_101) {
			if (!ui::is_help_message_being_displayed()) {
				func_169("WHSECUROBLCK");
			}
			if (!func_212(player::player_id())) {
				ui::clear_help(1);
				iLocal_101 = 0;
			}
		}
	}
}

// Position - 0x4E7A
void func_182(int iParam0, int iParam1, char *sParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) < 1) {
	}
	if (streaming::is_player_switch_in_progress()) {
		if (*iParam0 != -1) {
			func_185(iParam0);
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

// Position - 0x4FA5
bool func_183() {
	if (func_184("MP_OFF_LAP_1") || func_184("WHPRIVSESLAP") || func_184("WHSECUROBLCK") ||
		func_184("SECINPUTTREGLAP") || func_184("BIKERWHINPUT") || func_184("BIKERWHBLCKA") ||
		func_184("BIKERWHBLCKB") || func_184("WHBIKERBLCK") || func_184("BIKERWHBLCKC") || func_184("BIKERWHBLCKD")) {
		return true;
	}
	return false;
}

// Position - 0x503B
var func_184(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x504E
void func_185(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_163(*iParam0);
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

// Position - 0x50A5
bool func_186(int iParam0) {
	if (func_187(Global_1591201[iParam0 /*602*/].f_258.f_15, -1) &&
		!gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_258.f_13, 1)) {
		return true;
	}
	return false;
}

// Position - 0x50E1
bool func_187(int iParam0, int iParam1) {
	if (iParam1 == -1) {
		switch (iParam0) {
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102: return true;
		}
	}
	else if (iParam1 == 91) {
		switch (iParam0) {
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96: return true;
		}
	}
	else if (iParam1 == 97) {
		switch (iParam0) {
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102: return true;
		}
	}
	return false;
}

// Position - 0x51BE
int func_188(int iParam0) {
	switch (iParam0) {
	case 87:
	case 88:
	case 89:
	case 90: return 1;
	}
	return 0;
}

// Position - 0x51ED
bool func_189(int iParam0) {
	if (iParam0 != func_52()) {
		if (func_13(iParam0, 1, 1)) {
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1) {
				return func_190(Global_2421664[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return false;
}

// Position - 0x5233
int func_190(int iParam0) {
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21: return 0;

	case 57:
	case 58:
	case 59:
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66: return 1;

	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
	case 41: return 2;

	case 43:
	case 42:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56: return 3;
	}
	return -1;
}

// Position - 0x53F1
int func_191() { return func_198(player::player_id()); }

// Position - 0x5401
bool func_192() { return Global_1591201[player::player_id() /*602*/] == 148; }

// Position - 0x5417
var func_193() { return Global_68132; }

// Position - 0x5423
var func_194() { return Global_1751495; }

// Position - 0x542F
int func_195() {
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (vehicle::get_ped_in_vehicle_seat(ped::get_vehicle_ped_is_using(player::player_ped_id()), -1, 0) ==
			player::player_ped_id()) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x545D
int func_196() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x5477
bool func_197(int iParam0) {
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

// Position - 0x54D1
bool func_198(int iParam0) {
	if (iParam0 != func_52()) {
		if (Global_1619421[iParam0 /*390*/].f_11 != func_52()) {
			return Global_1619421[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return false;
}

// Position - 0x5506
bool func_199() {
	if (entity::does_entity_exist(iLocal_110) && func_189(player::player_id())) {
		return true;
	}
	return false;
}

// Position - 0x5529
int func_200(int iParam0) {
	if (func_187(Global_1591201[iParam0 /*602*/].f_258.f_15, -1)) {
		return 1;
	}
	return 0;
}

// Position - 0x554C
bool func_201() {
	if (entity::does_entity_exist(iLocal_110)) {
		if (entity::get_entity_model(iLocal_110) == 743064848 || func_209(player::player_id())) {
			return true;
		}
	}
	return false;
}

// Position - 0x557F
void func_202() {
	if (Global_14443.f_1 != 1) {
		if (func_197(0)) {
			func_203(0);
		}
		gameplay::set_bit(&Global_2314, 2);
	}
}

// Position - 0x55A7
void func_203(int iParam0) {
	if (Global_14604) {
		func_205(0, 0);
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
	if (!func_204()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x5617
int func_204() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x563E
void func_205(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_197(0)) {
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

// Position - 0x56B2
void func_206(var *uParam0) { uParam0->f_1 = 0; }

// Position - 0x56BF
bool func_207(var *uParam0, int iParam1, int iParam2) {
	if (iParam1 == -1) {
		return true;
	}
	func_210(uParam0, iParam2, 0);
	if (network::network_is_game_in_progress() && !iParam2) {
		if (gameplay::absi(network::get_time_difference(network::get_network_time(), *uParam0)) >= iParam1) {
			return true;
		}
	}
	else if (gameplay::absi(network::get_time_difference(gameplay::get_game_timer(), *uParam0)) >= iParam1) {
		return true;
	}
	return false;
}

// Position - 0x571D
bool func_208(int iParam0) {
	if (iParam0 != func_52()) {
		if (func_13(iParam0, 1, 1)) {
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1) {
				return func_190(Global_2421664[iParam0 /*358*/].f_312.f_1) == 2;
			}
		}
	}
	return false;
}

// Position - 0x5763
bool func_209(int iParam0) {
	if (iParam0 != func_52()) {
		if (func_13(iParam0, 1, 1)) {
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1) {
				return func_190(Global_2421664[iParam0 /*358*/].f_312.f_1) == 0;
			}
		}
	}
	return false;
}

// Position - 0x57A9
void func_210(var *uParam0, int iParam1, int iParam2) {
	if (uParam0->f_1 == 0) {
		if (network::network_is_game_in_progress() && !iParam1) {
			if (!iParam2) {
				*uParam0 = network::get_network_time();
			}
			else {
				*uParam0 = network::_0x89023FBBF9200E9F();
			}
		}
		else {
			*uParam0 = gameplay::get_game_timer();
		}
		uParam0->f_1 = 1;
	}
}

// Position - 0x57EE
bool func_211(var *uParam0) { return uParam0->f_1; }

// Position - 0x57FA
int func_212(int iParam0) { return func_213(func_167(iParam0)); }

// Position - 0x580C
int func_213(int iParam0) {
	switch (iParam0) {
	case 167:
	case 169:
	case 168: return 1;

	default:
	}
	return 0;
}

// Position - 0x5832
bool func_214(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x5840
void func_215() {
	if (iLocal_99 != -1) {
		func_185(&iLocal_99);
	}
	if (func_184("MP_OFF_LAP_1") || func_184("WHPRIVSESLAP") || func_184("WHSECUROBLCK") ||
		func_184("SECINPUTTREGLAP") || func_184("BIKERWHINPUT") || func_184("BIKERWHBLCKA") ||
		func_184("BIKERWHBLCKB") || func_184("WHBIKERBLCK") || func_184("BIKERWHBLCKC") || func_184("BIKERWHBLCKD")) {
		ui::clear_help(1);
	}
	Global_1764566 = 0;
	Global_1764565 = 0;
}
