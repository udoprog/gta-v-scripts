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
int iLocal_43 = 0;
vector3 vLocal_44 = {0f, 0f, 0f};
var uLocal_47 = 0;
int iLocal_48 = 0;
int iLocal_49 = 0;
int iLocal_50 = 0;
int iLocal_51 = 0;
struct<15> Local_52[14];
struct<15> Local_263 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
int iLocal_278 = 0;
vector3 vLocal_279 = {0f, 0f, 0f};
var uLocal_282 = 0;
var uLocal_283 = 0;
var uLocal_284 = 0;
int iLocal_285 = 0;
int iLocal_286 = 0;
var uLocal_287[5] = {0, 0, 0, 0, 0};
var uLocal_293[5] = {0, 0, 0, 0, 0};
int iLocal_299 = 0;
int iLocal_300[5] = {0, 0, 0, 0, 0};
int iLocal_306 = 0;
var uLocal_307 = 0;
float fLocal_308 = 0f;
int iLocal_309 = 0;
int iLocal_310 = 0;
int iLocal_311 = 0;
int iLocal_312 = 0;
int iLocal_313 = 0;
int iLocal_314 = 0;
int iLocal_315 = 0;
int iLocal_316 = 0;
int iLocal_317 = 0;
int iLocal_318 = 0;
int iLocal_319 = 0;
vector3 vLocal_320 = {0f, 0f, 0f};
vector3 vLocal_323 = {0f, 0f, 0f};
int iLocal_326 = 0;
int iLocal_327 = 0;
int iLocal_328 = 0;
int iLocal_329 = 0;
int iLocal_330 = 0;
int iLocal_331 = 0;
int iLocal_332 = 0;
int iLocal_333 = 0;
var *uLocal_334 = NULL;
int iLocal_335 = 0;
int iLocal_336 = 0;
int *iLocal_337 = NULL;
bool bLocal_338 = 0;
int iLocal_339 = 0;
int iLocal_340 = 0;
float fLocal_341 = 0f;
float fLocal_342 = 0f;
var *uLocal_343 = NULL;
var uLocal_344 = 0;
var uLocal_345 = 0;
var uLocal_346 = 0;
var uLocal_347 = 0;
var uLocal_348 = 0;
var uLocal_349 = 0;
var uLocal_350 = 0;
var uLocal_351 = 0;
var uLocal_352 = 0;
var uLocal_353 = 0;
var uLocal_354 = 0;
var uLocal_355 = 0;
var uLocal_356 = 0;
var uLocal_357 = 0;
var uLocal_358 = 0;
var uLocal_359 = 0;
var uLocal_360 = 0;
var uLocal_361 = 0;
var uLocal_362 = 0;
var uLocal_363 = 0;
var uLocal_364 = 0;
var uLocal_365 = 0;
var uLocal_366 = 0;
var uLocal_367 = 0;
var uLocal_368 = 0;
var uLocal_369 = 0;
var uLocal_370 = 0;
var uLocal_371 = 0;
var uLocal_372 = 0;
var uLocal_373 = 0;
var uLocal_374 = 0;
var uLocal_375 = 0;
var uLocal_376 = 0;
var uLocal_377 = 0;
var uLocal_378 = 0;
var uLocal_379 = 0;
var uLocal_380 = 0;
var uLocal_381 = 0;
var uLocal_382 = 0;
var uLocal_383 = 0;
var uLocal_384 = 0;
var uLocal_385 = 0;
var uLocal_386 = 0;
var uLocal_387 = 0;
var uLocal_388 = 0;
var uLocal_389 = 0;
var uLocal_390 = 0;
var uLocal_391 = 0;
var uLocal_392 = 0;
var uLocal_393 = 0;
var uLocal_394 = 0;
var uLocal_395 = 0;
var uLocal_396 = 0;
var uLocal_397 = 0;
var uLocal_398 = 0;
var uLocal_399 = 0;
var uLocal_400 = 0;
var uLocal_401 = 0;
var uLocal_402 = 0;
var uLocal_403 = 0;
var uLocal_404 = 0;
var uLocal_405 = 0;
var uLocal_406 = 0;
var uLocal_407 = 0;
var uLocal_408 = 0;
var uLocal_409 = 0;
var uLocal_410 = 0;
var uLocal_411 = 0;
var uLocal_412 = 0;
var uLocal_413 = 0;
var uLocal_414 = 0;
var uLocal_415 = 0;
var uLocal_416 = 0;
var uLocal_417 = 0;
var uLocal_418 = 0;
var uLocal_419 = 0;
var uLocal_420 = 0;
var uLocal_421 = 0;
var uLocal_422 = 0;
var uLocal_423 = 0;
var uLocal_424 = 0;
var uLocal_425 = 0;
var uLocal_426 = 0;
var uLocal_427 = 0;
var uLocal_428 = 0;
var uLocal_429 = 0;
var uLocal_430 = 0;
var uLocal_431 = 0;
var uLocal_432 = 0;
var uLocal_433 = 0;
var uLocal_434 = 0;
var uLocal_435 = 0;
var uLocal_436 = 0;
var uLocal_437 = 0;
var uLocal_438 = 0;
var uLocal_439 = 0;
var uLocal_440 = 0;
var uLocal_441 = 0;
var uLocal_442 = 0;
var uLocal_443 = 0;
var uLocal_444 = 0;
var uLocal_445 = 0;
var uLocal_446 = 0;
var uLocal_447 = 0;
var uLocal_448 = 0;
var uLocal_449 = 0;
var uLocal_450 = 0;
var uLocal_451 = 0;
var uLocal_452 = 0;
var uLocal_453 = 0;
var uLocal_454 = 0;
var uLocal_455 = 0;
var uLocal_456 = 0;
var uLocal_457 = 0;
var uLocal_458 = 0;
var uLocal_459 = 0;
var uLocal_460 = 0;
var uLocal_461 = 0;
var uLocal_462 = 0;
var uLocal_463 = 0;
var uLocal_464 = 0;
var uLocal_465 = 0;
var uLocal_466 = 0;
var uLocal_467 = 0;
var uLocal_468 = 0;
var uLocal_469 = 0;
var uLocal_470 = 0;
var uLocal_471 = 0;
var uLocal_472 = 0;
var uLocal_473 = 0;
var uLocal_474 = 0;
var uLocal_475 = 0;
var uLocal_476 = 0;
var uLocal_477 = 0;
var uLocal_478 = 0;
var uLocal_479 = 0;
var uLocal_480 = 0;
var uLocal_481 = 0;
var uLocal_482 = 0;
var uLocal_483 = 0;
var uLocal_484 = 0;
var uLocal_485 = 0;
var uLocal_486 = 0;
var uLocal_487 = 0;
var uLocal_488 = 0;
var uLocal_489 = 0;
var uLocal_490 = 0;
var uLocal_491 = 0;
var uLocal_492 = 0;
var uLocal_493 = 0;
var uLocal_494 = 0;
var uLocal_495 = 0;
var uLocal_496 = 0;
var uLocal_497 = 0;
var uLocal_498 = 0;
var uLocal_499 = 0;
var uLocal_500 = 0;
var uLocal_501 = 0;
var uLocal_502 = 0;
var uLocal_503 = 0;
var uLocal_504 = 0;
var uLocal_505 = 0;
var uLocal_506 = 0;
var uLocal_507 = 0;
int iLocal_508 = 0;
char *sLocal_509 = NULL;
int iLocal_510 = 0;
int iLocal_511 = 0;
int iLocal_512 = 0;
int iLocal_513 = 0;
char *sLocal_514[22] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
						NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
int iLocal_537 = 0;
int iLocal_538 = 0;
int iLocal_539 = 0;
int iLocal_540 = 0;
int iLocal_541 = 0;
int iLocal_542 = 0;
int iLocal_543 = 0;
int iLocal_544 = 0;
int iLocal_545 = 0;
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
	vLocal_320 = {0f, 0f, 0f};
	vLocal_323 = {0f, 0f, 0f};
	sLocal_509 = "RANDOM@BUS_TOUR_GUIDE@IDLE_A";
	iLocal_511 = 524459;
	iLocal_512 = 40;
	iLocal_542 = 7500;
	vLocal_279 = {ScriptParam_0.f_1[0 /*3*/]};
	if (player::has_force_cleanup_occurred(11)) {
		if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_306, 0)) {
					entity::set_entity_coords(
						player::player_ped_id(),
						entity::get_offset_from_entity_in_world_coords(iLocal_306, 2.5f, 1.5f, 0f), 1, 0, 0, 1);
					entity::set_entity_heading(player::player_ped_id(), entity::get_entity_heading(iLocal_306));
					ped::set_ped_can_play_ambient_anims(player::player_ped_id(), 1);
					audio::stop_audio_scene("RE_BUS_TOUR_SCENE");
					audio::_0x18EB48CFC41F2EA0(iLocal_306, 0);
				}
			}
		}
		func_216();
	}
	if (!func_215()) {
		script::terminate_this_thread();
	}
	if (func_182(vLocal_279, 2, 0, 1, 0)) {
		func_179(-1);
	}
	else {
		script::terminate_this_thread();
	}
	func_177();
	func_176();
	while (true) {
		func_175();
		if (player::is_player_playing(player::player_id())) {
			player::set_all_random_peds_flee_this_frame(player::player_id());
		}
		switch (iLocal_312) {
		case 0:
			if (brain::is_world_point_within_brain_activation_range()) {
				if (func_215()) {
					switch (iLocal_48) {
					case 0: func_171(); break;

					case 1:
						if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
							if (ped::is_ped_injured(iLocal_285) || ped::is_ped_injured(iLocal_286)) {
								func_216();
							}
							else {
								iLocal_312 = 1;
							}
						}
						break;
					}
				}
				else {
					func_216();
				}
			}
			else {
				func_216();
			}
			break;

		case 1:
			if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
				func_1();
			}
			else {
				func_216();
			}
			break;
		}
		system::wait(0);
	}
}

// Position - 0x208
void func_1() {
	func_170();
	func_169();
	func_168();
	func_167();
	switch (iLocal_49) {
	case 0: func_113(); break;

	case 1: func_84(); break;

	case 2:
		func_83();
		func_2();
		break;
	}
}

// Position - 0x252
void func_2() {
	char cVar0[64];

	StringCopy(&cVar0, "curiCurrentRambler ", 64);
	StringIntConCat(&cVar0, iLocal_508, 64);
	StringConCat(&cVar0, " ", 64);
	StringIntConCat(&cVar0, iLocal_278, 64);
	graphics::draw_debug_text_2d(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	controls::disable_control_action(0, 68, 1);
	controls::disable_control_action(0, 99, 1);
	controls::disable_control_action(0, 1, 1);
	controls::disable_control_action(0, 2, 1);
	if (!ped::is_ped_injured(iLocal_286) && !ped::is_ped_injured(iLocal_285)) {
		if (iLocal_537) {
			if (!func_82()) {
				if (iLocal_508 < 14) {
					func_81(&uLocal_343, "BUSTOAU", "BUSTO_RAMB", sLocal_514[iLocal_508], 4, 0, 0);
				}
				func_216();
			}
		}
		else if (!func_80()) {
			cam::_disable_vehicle_first_person_cam_this_frame();
			ui::hide_hud_component_this_frame(2);
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (!ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iLocal_306) && iLocal_278 + 1 < 13) {
					func_216();
				}
			}
			if (!iLocal_317) {
				if (system::timera() > 12000) {
					func_78();
				}
			}
			else {
				graphics::draw_debug_text_2d("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_39();
			func_27();
			func_21(0);
			if (func_20(iLocal_306)) {
				iLocal_316 = 1;
			}
			vehicle::request_vehicle_high_detail_model(iLocal_306);
		}
		else {
			func_3(&uLocal_343, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			vehicle::set_vehicle_doors_locked(iLocal_306, 3);
			vehicle::set_vehicle_is_considered_by_player(iLocal_306, 0);
			iLocal_537 = 1;
		}
	}
	else {
		func_216();
	}
}

// Position - 0x3B8
int func_3(var *uParam0, char *sParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6) {
	func_19(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7) {
		if (iParam4 < 12) {
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

// Position - 0x40C
int func_4(char *sParam0, int iParam1, int iParam2) {
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2) {
		if (Global_15745 != 0) {
			if (iParam1 > Global_15747) {
				if (Global_15752 == 0) {
					audio::stop_scripted_conversation(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else {
					func_18();
					return 0;
				}
			}
			else {
				return 0;
			}
		}
		if (audio::is_scripted_conversation_ongoing()) {
			return 0;
		}
		if (func_17(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_16();
		Global_15034 = {Global_15199};
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = {Global_15776};
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = {Global_16749};
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751) {
			gameplay::clear_bit(&G_SleepModeOnOn25, 20);
			gameplay::clear_bit(&G_SleepModeOffOn11, 17);
			gameplay::clear_bit(&Global_2315, 0);
			if (iParam2) {
				func_9();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
					if (iParam1 == 13) {
					}
					else {
						return 0;
					}
				}
				if (Global_14443.f_1 > 3) {
					return 0;
				}
			}
			if (Global_14409 == 1) {
				return 0;
			}
			if (player::is_player_playing(player::player_id())) {
				if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
					return 0;
				}
				if (func_8()) {
					return 0;
				}
				if (ai::is_ped_sprinting(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_ragdoll(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_in_parachute_free_fall(player::player_ped_id())) {
					return 0;
				}
				if (weapon::get_is_ped_gadget_equipped(player::player_ped_id(), joaat("gadget_parachute"))) {
					return 0;
				}
				if (!Global_69702) {
					if (entity::is_entity_in_water(player::player_ped_id())) {
						return 0;
					}
					if (player::is_player_climbing(player::player_id())) {
						return 0;
					}
					if (ped::is_ped_planting_bomb(player::player_ped_id())) {
						return 0;
					}
					if (player::is_special_ability_active(player::player_id())) {
						return 0;
					}
				}
			}
			if (func_7()) {
				return 0;
			}
			else {
				switch (Global_14443.f_1) {
				case 7: return 0;

				case 8: return 0;

				case 9: break;

				case 10: break;

				default: break;
				}
				if (gameplay::is_bit_set(G_SleepModeOnOn25, 9)) {
					return 0;
				}
			}
			func_6();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_5();
		return 1;
	}
	if (Global_15745 == 5) {
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747) {
		return 0;
	}
	if (iParam1 == 2) {
	}
	else {
		func_18();
	}
	return 0;
}

// Position - 0x6D8
void func_5() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x709
void func_6() {
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = {Global_15827};
	Global_15845 = {Global_15833};
	Global_15800 = Global_15799;
	Global_15869 = {Global_15851};
	Global_15875 = {Global_15857};
	Global_15881 = {Global_15863};
	Global_15887 = {Global_15893};
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = {Global_15776};
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	gameplay::clear_bit(&G_SleepModeOffOn11, 16);
}

// Position - 0x79E
bool func_7() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x7C5
bool func_8() {
	int iVar0;
	int iVar1;

	if (Global_69702) {
		iVar0 = 0;
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar1, 1);
		if (player::is_player_playing(player::player_id())) {
			if (iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper") ||
				iVar1 == joaat("weapon_remotesniper")) {
				iVar0 = 1;
			}
		}
		if (cam::is_aim_cam_active() && iVar0 == 1) {
			return true;
		}
		else {
			return false;
		}
	}
	if (player::is_player_playing(player::player_id())) {
		if (ped::get_ped_config_flag(player::player_ped_id(), 78, 1)) {
			return true;
		}
		else {
			return false;
		}
	}
	return true;
}

// Position - 0x85E
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

// Position - 0x900
int func_10() {
	func_11();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x919
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

// Position - 0xA16
bool func_12(int iParam0) { return iParam0 < 3; }

// Position - 0xA22
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

// Position - 0xA5F
int func_14(int iParam0) {
	if (func_12(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xA89
bool func_15(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xA97
void func_16() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15) {
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&Global_15034[iVar0 /*10*/].f_1, "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = {0f, 0f, 0f};
}

// Position - 0xAEE
bool func_17(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0xB29
void func_18() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_mobile_phone_call_ongoing() || Global_14443.f_1 == 9 || Global_14442 == 1) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0xB80
void func_19(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	Global_15199 = {*uParam0};
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0) {
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else {
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0) {
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else {
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

// Position - 0xBD6
bool func_20(int iParam0) {
	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (vehicle::is_vehicle_stuck_timer_up(iParam0, 0, 7000) ||
			vehicle::is_vehicle_stuck_timer_up(iParam0, 1, 7000) ||
			vehicle::is_vehicle_stuck_timer_up(iParam0, 2, 7000)) {
			return true;
		}
	}
	return false;
}

// Position - 0xC1A
void func_21(int iParam0) {
	if (!iParam0) {
		if (controls::is_control_just_pressed(2, 225)) {
			if (iLocal_319) {
				iLocal_319 = 0;
				player::set_player_control(player::player_id(), 0, 256);
				graphics::_0xEF398BEEE4EF45F9(1);
			}
			else {
				iLocal_319 = 1;
				player::set_player_control(player::player_id(), 0, 0);
				graphics::_0xEF398BEEE4EF45F9(0);
			}
		}
	}
	if (iLocal_319 && !Local_52[13 /*15*/].f_9) {
		if (cam::is_gameplay_hint_active()) {
			cam::stop_gameplay_hint(0);
		}
		func_24();
	}
	else if (iLocal_317) {
		if (cam::does_cam_exist(iLocal_328)) {
			cam::destroy_cam(iLocal_328, 0);
			cam::render_script_cams(0, 0, 0, 1, 0, 0);
			entity::set_entity_visible(player::player_ped_id(), 1, 0);
			func_22(Local_52[iLocal_278 /*15*/].f_4, Local_52[iLocal_278 /*15*/].f_7);
		}
	}
	else if (cam::does_cam_exist(iLocal_328)) {
		cam::destroy_cam(iLocal_328, 0);
		cam::render_script_cams(0, 0, 0, 1, 0, 0);
		entity::set_entity_visible(player::player_ped_id(), 1, 0);
	}
}

// Position - 0xCF7
void func_22(vector3 vParam0, int iParam3) {
	if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
		if (!cam::does_cam_exist(iLocal_328) && !cam::is_gameplay_hint_active()) {
			if (!entity::is_entity_at_coord(player::player_ped_id(), Local_263.f_4, 12f, 12f, 12f, 0, 1, 0)) {
				cam::set_gameplay_coord_hint(vParam0, iParam3, 3000, 3000, 0);
				func_23(vParam0);
				iLocal_314 = gameplay::get_game_timer();
			}
		}
		if (!ped::is_ped_injured(iLocal_285)) {
			ai::set_drive_task_cruise_speed(iLocal_285, 3f);
		}
		iLocal_317 = 1;
	}
}

// Position - 0xD7B
void func_23(vector3 vParam0) {
	int iVar0;
	int iVar1;

	iLocal_299 = gameplay::get_game_timer();
	if (!ped::is_ped_injured(player::player_ped_id())) {
		iVar1 = gameplay::get_random_int_in_range(6000, 16000);
		ai::task_look_at_coord(player::player_ped_id(), vParam0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		if (!ped::is_ped_injured(uLocal_287[iVar0])) {
			iVar1 = gameplay::get_random_int_in_range(6000, 16000);
			uLocal_293[iVar0] = gameplay::get_random_int_in_range(0, 2000);
			iLocal_300[iVar0] = 0;
		}
		iVar0++;
	}
}

// Position - 0xDF6
void func_24() {
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	fVar1 = 70f;
	fVar2 = -20f;
	fVar3 = 42f;
	fVar4 = -89f;
	fVar5 = 69f;
	fVar6 = 4f;
	vVar7 = {0.2f, 0.9f, -0.15f};
	if (cam::does_cam_exist(iLocal_328)) {
		if (controls::_is_input_disabled(2)) {
			fVar6 = 8f;
		}
		else {
			fVar6 = 4f;
		}
		func_26();
		iVar10 = system::floor(controls::_0x5B84D09CEC5209C5(2, 218) * 127f);
		iVar11 = system::floor(controls::_0x5B84D09CEC5209C5(2, 219) * 127f);
		iVar12 = system::floor(controls::_0x5B84D09CEC5209C5(2, 220) * 127f);
		iVar13 = system::floor(controls::_0x5B84D09CEC5209C5(2, 221) * 127f);
		if (!controls::is_look_inverted()) {
			iVar11 *= -1;
			iVar13 *= -1;
		}
		if (iVar13 > 28 || iVar13 < -28 || controls::_is_input_disabled(2)) {
			fVar0 = system::to_float(iVar13);
			fVar0 *= fVar0;
			fVar0 /= (system::to_float(100) * system::to_float(100));
			fVar0 *= fVar6;
			if (iVar13 < 0) {
				fVar0 *= -1f;
			}
			fLocal_342 += fVar0;
			if (fLocal_342 < fVar2) {
				fLocal_342 = fVar2;
			}
			if (fLocal_342 > fVar3) {
				fLocal_342 = fVar3;
			}
		}
		if (iVar12 > 28 || iVar12 < -28 || controls::_is_input_disabled(2)) {
			fVar0 = system::to_float(iVar12);
			fVar0 *= fVar0;
			fVar0 /= (system::to_float(100) * system::to_float(100));
			fVar0 *= fVar6;
			if (iVar12 > 0) {
				fVar0 *= -1f;
			}
			fLocal_341 += fVar0;
			if (fLocal_341 < fVar4) {
				fLocal_341 = fVar4;
			}
			if (fLocal_341 > fVar5) {
				fLocal_341 = fVar5;
			}
		}
		if (iVar11 > 28 || iVar11 < -28 || controls::_is_input_disabled(2)) {
			fVar0 = system::to_float(iVar11);
			fVar0 *= fVar0;
			fVar0 /= (system::to_float(100) * system::to_float(100));
			fVar0 *= fVar6;
			if (iVar11 < 0) {
				fVar0 *= -1f;
			}
			fLocal_342 += fVar0;
			if (fLocal_342 < fVar2) {
				fLocal_342 = fVar2;
			}
			if (fLocal_342 > fVar3) {
				fLocal_342 = fVar3;
			}
		}
		if (iVar10 > 28 || iVar10 < -28 || controls::_is_input_disabled(2)) {
			fVar0 = system::to_float(iVar10);
			fVar0 *= fVar0;
			fVar0 /= (system::to_float(100) * system::to_float(100));
			fVar0 *= fVar6;
			if (iVar10 > 0) {
				fVar0 *= -1f;
			}
			fLocal_341 += fVar0;
			if (fLocal_341 < fVar4) {
				fLocal_341 = fVar4;
			}
			if (fLocal_341 > fVar5) {
				fLocal_341 = fVar5;
			}
		}
		func_25(player::player_ped_id(), &iLocal_328, fLocal_342, 0f, fLocal_341);
		cam::set_cam_fov(iLocal_328, fVar1);
		cam::attach_cam_to_entity(iLocal_328, player::player_ped_id(), vVar7.x, vVar7.y - 1f, vVar7.z + 1f, 1);
	}
	else {
		iLocal_328 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 1);
		cam::attach_cam_to_entity(iLocal_328, player::player_ped_id(), vVar7.x, vVar7.y - 1f, vVar7.z + 1f, 1);
		cam::set_cam_near_clip(iLocal_328, 0.01f);
		fLocal_341 = -70f;
		fLocal_342 = 3f;
		func_25(player::player_ped_id(), &iLocal_328, fLocal_342, 0f, fLocal_341);
		cam::set_cam_fov(iLocal_328, fVar1);
		entity::set_entity_visible(player::player_ped_id(), 0, 0);
		cam::render_script_cams(1, 0, 2000, 1, 0, 0);
	}
}

// Position - 0x1140
void func_25(int iParam0, int iParam1, vector3 vParam2) {
	var uVar0;
	vector3 vVar1;

	if (!ped::is_ped_injured(iParam0)) {
		if (cam::does_cam_exist(*iParam1)) {
			uVar0 = entity::get_entity_heading(iParam0);
			vVar1.x = 0f;
			vVar1.y = 0f;
			vVar1.z = uVar0;
			vVar1 = {vVar1 + vParam2};
			cam::set_cam_rot(*iParam1, vVar1.x, vVar1.y, vVar1.z, 2);
		}
	}
}

// Position - 0x1191
void func_26() {
	vector3 vVar0;
	int iVar3;

	if (!ped::is_ped_injured(uLocal_287[2])) {
		if (ai::get_script_task_status(uLocal_287[2], -880529684) == 7) {
			if (gameplay::get_game_timer() > iLocal_336 + 8000) {
				ped::set_ped_can_play_ambient_anims(uLocal_287[2], 0);
				vVar0 = {entity::get_offset_from_entity_in_world_coords(
					uLocal_287[2], gameplay::get_random_float_in_range(0f, 2f),
					gameplay::get_random_float_in_range(0f, 2f), 0.5f)};
				iVar3 = gameplay::get_random_int_in_range(1000, 6000);
				ai::task_look_at_coord(uLocal_287[2], vVar0, iVar3, 2049, 2);
				iLocal_336 = gameplay::get_game_timer();
			}
		}
	}
}

// Position - 0x1218
void func_27() {
	int iVar0;

	iVar0 = iLocal_278 + 1;
	if (!iLocal_339 && cam::is_screen_faded_in()) {
		ui::display_help_text_this_frame("Tour_help", 0);
	}
	if (iVar0 < 14) {
		if (controls::is_control_just_pressed(2, 223) || iLocal_316 == 1) {
			if (cam::is_screen_faded_in()) {
				if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
					if (!ped::is_ped_injured(iLocal_285)) {
						if (!Local_52[iVar0 /*15*/].f_14 && !Local_52[iVar0 /*15*/].f_9) {
							system::settimera(0);
							Local_52[iLocal_278 /*15*/].f_9 = 1;
							func_30(Local_52[iVar0 /*15*/].f_10, Local_52[iVar0 /*15*/].f_13);
							func_29();
							if (iVar0 == 13) {
								iLocal_339 = 1;
								func_28();
							}
							Local_52[iVar0 /*15*/].f_14 = 1;
							iLocal_278 = iVar0;
						}
						iLocal_316 = 0;
					}
				}
			}
		}
	}
}

// Position - 0x12DC
void func_28() {
	if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
		if (!ped::is_ped_injured(iLocal_285)) {
			ai::clear_ped_tasks(iLocal_285);
			ai::open_sequence_task(&iLocal_326);
			ai::task_vehicle_drive_to_coord(0, iLocal_306, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"),
											iLocal_511, 5f, 15f);
			ai::task_vehicle_drive_to_coord(0, iLocal_306, Local_263.f_1, 3f, 0, joaat("tourbus"), iLocal_511, 3f, 15f);
			ai::close_sequence_task(iLocal_326);
			ai::task_perform_sequence(iLocal_285, iLocal_326);
			ai::clear_sequence_task(&iLocal_326);
		}
	}
}

// Position - 0x1366
void func_29() {
	Global_14611 = 0;
	func_18();
}

// Position - 0x1376
void func_30(vector3 vParam0, float fParam3) {
	int iVar0;

	iVar0 = iLocal_278 + 1;
	audio::start_audio_scene("RE_BUS_TOUR_FADE_OUT_WORLD");
	cam::do_screen_fade_out(1000);
	while (!cam::is_screen_faded_out()) {
		cam::_disable_vehicle_first_person_cam_this_frame();
		ui::hide_hud_component_this_frame(2);
		if (!vehicle::is_vehicle_driveable(iLocal_306, 0)) {
			func_216();
		}
		if (ped::is_ped_injured(iLocal_285)) {
			func_216();
		}
		system::wait(0);
	}
	if (cam::is_gameplay_hint_active()) {
		cam::stop_gameplay_hint(1);
	}
	cam::set_gameplay_cam_relative_heading(0f);
	if (!ped::is_ped_injured(iLocal_285)) {
		ai::clear_ped_tasks(iLocal_285);
	}
	if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
		gameplay::clear_area_of_vehicles(vParam0.x, vParam0.y, vParam0.z, 5f, 0, 0, 0, 0, 0);
		entity::set_entity_coords(iLocal_306, vParam0.x, vParam0.y, vParam0.z, 1, 0, 0, 1);
		entity::set_entity_heading(iLocal_306, fParam3);
		vehicle::set_vehicle_forward_speed(iLocal_306, 0f);
		ai::task_vehicle_drive_to_coord(iLocal_285, iLocal_306, entity::get_entity_coords(iLocal_306, 1), 0f, 0,
										joaat("tourbus"), iLocal_511, 5f, 15f);
		func_33(vParam0, 1112014848, 12, 5000, 0, 0);
	}
	if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
		vehicle::set_vehicle_on_ground_properly(iLocal_306, 1084227584);
		vehicle::set_vehicle_engine_on(iLocal_306, 1, 1, 0);
		if (iVar0 < 13) {
			if (!ped::is_ped_injured(iLocal_285)) {
				ai::task_vehicle_drive_to_coord(iLocal_285, iLocal_306, Local_52[iVar0 /*15*/].f_1,
												Local_52[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_511, 5f, 15f);
			}
		}
		else if (!ped::is_ped_injured(iLocal_285)) {
			ai::task_vehicle_drive_to_coord(iLocal_285, iLocal_306, Local_263.f_1, Local_52[iVar0 /*15*/].f_8, 0,
											joaat("tourbus"), iLocal_511, 5f, 15f);
		}
		vehicle::set_vehicle_forward_speed(iLocal_306, 8f);
	}
	func_31();
	cam::set_follow_vehicle_cam_zoom_level(3);
	iLocal_50 = 3;
	func_21(1);
	audio::stop_audio_scene("RE_BUS_TOUR_FADE_OUT_WORLD");
	cam::do_screen_fade_in(1000);
	while (cam::is_screen_fading_in()) {
		cam::_disable_vehicle_first_person_cam_this_frame();
		ui::hide_hud_component_this_frame(2);
		func_21(1);
		system::wait(0);
	}
	cam::_disable_vehicle_first_person_cam_this_frame();
	ui::hide_hud_component_this_frame(2);
	func_21(1);
}

// Position - 0x1554
void func_31() {
	Global_14611 = 0;
	func_32();
}

// Position - 0x1564
void func_32() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x1585
void func_33(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	int iVar0;
	int iVar1;

	iVar0 = streaming::format_focus_heading(vParam0, iParam3, iParam4, 127);
	if (streaming::_0x07C313F94746702C(iVar0)) {
		iVar1 = gameplay::get_game_timer() + iParam5;
		while (!streaming::_0x7D41E9D2D17C5B2D(iVar0) && gameplay::get_game_timer() < iVar1) {
			if (iParam7) {
				func_35();
			}
			if (iParam6) {
				func_34();
			}
			system::wait(0);
		}
		if (gameplay::get_game_timer() < iVar1) {
		}
		streaming::_0x1EE7D8DF4425F053(iVar0);
	}
}

// Position - 0x15F4
void func_34() { Global_17151.f_6 = 1; }

// Position - 0x1602
void func_35() {
	if (Global_14443.f_1 != 1) {
		if (func_38(0)) {
			func_36(0);
		}
		gameplay::set_bit(&G_SleepModeOffOn11, 2);
	}
}

// Position - 0x162A
void func_36(int iParam0) {
	if (Global_14604) {
		func_37(0, 0);
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
	if (!func_7()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x169A
void func_37(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_38(0)) {
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

// Position - 0x170E
bool func_38(int iParam0) {
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

// Position - 0x1768
void func_39() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = iLocal_278 + 1;
	if (!ped::is_ped_injured(player::player_ped_id())) {
		switch (iLocal_50) {
		case 0:
			if (!iLocal_339) {
				if (Local_52[12 /*15*/].f_9 || Local_52[13 /*15*/].f_14) {
					iLocal_339 = 1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 14) {
				if (!Local_52[iVar0 /*15*/].f_9) {
					if (iVar0 == 13) {
						if (entity::is_entity_at_coord(player::player_ped_id(), Local_52[iVar0 /*15*/].f_1, 30f, 30f,
													   15f, 0, 1, 0)) {
							if (Local_52[12 /*15*/].f_9) {
								Local_52[13 /*15*/].f_9 = 1;
								iLocal_314 = gameplay::get_game_timer();
								iLocal_50 = 2;
							}
						}
					}
					else if (entity::is_entity_at_coord(player::player_ped_id(), Local_52[iVar0 /*15*/].f_1, 40f, 40f,
														12f, 0, 1, 0)) {
						if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_306, 0)) {
							func_22(Local_52[iVar0 /*15*/].f_4, Local_52[iVar0 /*15*/].f_7);
							iLocal_278 = iVar0;
							if (iLocal_318) {
								iLocal_318 = 0;
							}
							func_29();
							iLocal_50 = 1;
						}
						else {
							iLocal_50 = 3;
						}
					}
				}
				iVar0++;
			}
			break;

		case 1:
			func_22(Local_52[iLocal_278 /*15*/].f_4, Local_52[iLocal_278 /*15*/].f_7);
			iLocal_313 = gameplay::get_game_timer();
			if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
				if (iVar1 <= 13) {
					func_77(entity::get_entity_coords(iLocal_306, 1), Local_52[iVar1 /*15*/].f_1, &vLocal_320,
							&vLocal_323, 500);
				}
				if (pathfind::_0xF7B79A50B905A30D(vLocal_320.x, vLocal_320.y, vLocal_323.x, vLocal_323.y)) {
					if (iLocal_313 - iLocal_314 > 0) {
						if (func_76(&uLocal_343, "BUSTOAU", Local_52[iLocal_278 /*15*/], 4, 0, 0, 0)) {
							if (iVar1 <= 13) {
								if (iVar1 == 11) {
									ai::open_sequence_task(&iVar2);
									ai::task_vehicle_drive_to_coord(0, iLocal_306, -100.461f, -206.1412f, 44.4215f,
																	Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"),
																	iLocal_511, 4f, 15f);
									ai::task_vehicle_drive_to_coord(0, iLocal_306, Local_52[iVar1 /*15*/].f_1,
																	Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"),
																	iLocal_511, 4f, 15f);
									ai::close_sequence_task(iVar2);
									ai::task_perform_sequence(iLocal_285, iVar2);
									ai::clear_sequence_task(&iVar2);
								}
								else {
									ai::task_vehicle_drive_to_coord(iLocal_285, iLocal_306, Local_52[iVar1 /*15*/].f_1,
																	Local_52[iVar1 /*15*/].f_8, 0, joaat("tourbus"),
																	iLocal_511, 4f, 15f);
								}
							}
							iLocal_314 = gameplay::get_game_timer();
							Local_52[iLocal_278 /*15*/].f_14 = 1;
							Local_52[iLocal_278 /*15*/].f_9 = 1;
							iLocal_50 = 3;
						}
					}
				}
			}
			break;

		case 2:
			if (func_41()) {
				iLocal_50 = 3;
			}
			break;

		case 3:
			iLocal_313 = gameplay::get_game_timer();
			func_40(Local_52[iLocal_278 /*15*/].f_4);
			if (iLocal_313 - iLocal_314 > 5000) {
				if (!func_82()) {
					iLocal_317 = 0;
					iLocal_314 = gameplay::get_game_timer();
					if (cam::is_gameplay_hint_active()) {
						cam::stop_gameplay_hint(1);
					}
					if (Local_52[13 /*15*/].f_9 == 1) {
						iLocal_50 = 4;
					}
					else {
						if (!ped::is_ped_injured(iLocal_285)) {
							ai::set_drive_task_cruise_speed(iLocal_285, 15f);
						}
						iLocal_50 = 0;
					}
				}
			}
			break;

		case 4: func_216(); break;
		}
	}
}

// Position - 0x1A89
void func_40(vector3 vParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5) {
		if (gameplay::get_game_timer() - iLocal_299 > uLocal_293[iVar0] && iLocal_300[iVar0] == 0) {
			if (!entity::is_entity_dead(uLocal_287[iVar0], 0)) {
				ai::task_look_at_coord(uLocal_287[iVar0], vParam0, 20000, 2050, 4);
			}
			iLocal_300[iVar0] = 1;
		}
		iVar0++;
	}
}

// Position - 0x1AF2
bool func_41() {
	float fVar0[5];
	vector3 vVar6[5];

	if (func_74(1000)) {
		iLocal_333 = 3;
	}
	iLocal_538 = 1;
	switch (iLocal_333) {
	case 0:
		if (cam::does_cam_exist(iLocal_328)) {
			cam::destroy_cam(iLocal_328, 0);
			entity::set_entity_visible(player::player_ped_id(), 1, 0);
		}
		func_66(1, 1, 1, 0);
		gameplay::set_minigame_in_progress(1);
		ui::display_radar(0);
		player::set_player_control(player::player_id(), 0, 0);
		graphics::_0xEF398BEEE4EF45F9(1);
		iLocal_329 = cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f,
												 0.101f, -61.7699f, 40f, 1, 2);
		iLocal_330 = cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f,
												 -91.5944f, 50f, 1, 2);
		cam::set_cam_active(iLocal_329, 1);
		cam::render_script_cams(1, 0, 3000, 1, 0, 0);
		cam::set_cam_active_with_interp(iLocal_330, iLocal_329, 17000, 1, 1);
		func_76(&uLocal_343, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
		entity::set_entity_coords(iLocal_306, Local_263.f_1, 1, 0, 0, 1);
		entity::set_entity_heading(iLocal_306, Local_263.f_13);
		vehicle::set_vehicle_on_ground_properly(iLocal_306, 1084227584);
		vehicle::set_vehicle_doors_locked(iLocal_306, 3);
		if (!ped::is_ped_injured(iLocal_285)) {
			ai::clear_ped_tasks(iLocal_285);
			ai::set_drive_task_cruise_speed(iLocal_285, 0f);
			ai::open_sequence_task(&iLocal_326);
			ai::task_vehicle_temp_action(0, iLocal_306, 24, 10000);
			ai::close_sequence_task(iLocal_326);
			ai::task_perform_sequence(iLocal_285, iLocal_326);
			ai::clear_sequence_task(&iLocal_326);
		}
		ai::clear_ped_tasks_immediately(player::player_ped_id());
		entity::set_entity_coords(player::player_ped_id(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 268.4057f);
		ped::_0x2208438012482A1A(player::player_ped_id(), 0, 0);
		entity::set_entity_visible(player::player_ped_id(), 1, 0);
		iLocal_317 = 1;
		iLocal_314 = gameplay::get_game_timer();
		iLocal_333 = 1;
		break;

	case 1:
		iLocal_313 = gameplay::get_game_timer();
		if (iLocal_313 - iLocal_314 > 3000) {
			ai::clear_ped_tasks_immediately(player::player_ped_id());
			entity::set_entity_coords(player::player_ped_id(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
			entity::set_entity_heading(player::player_ped_id(), 268.4057f);
			ped::_0x2208438012482A1A(player::player_ped_id(), 0, 0);
			entity::set_entity_visible(player::player_ped_id(), 1, 0);
			vVar6[0 /*3*/] = {105.1253f, 247.7461f, 107.1111f};
			vVar6[1 /*3*/] = {109.2535f, 247.9478f, 107.0121f};
			vVar6[2 /*3*/] = {110.3568f, 249.2771f, 107.0133f};
			vVar6[3 /*3*/] = {104.8579f, 251.0388f, 107.1858f};
			vVar6[4 /*3*/] = {105.4064f, 248.0866f, 107.1104f};
			fVar0[0] = 269.6692f;
			fVar0[1] = 283.6581f;
			fVar0[2] = 278.7632f;
			fVar0[3] = 228.5865f;
			fVar0[4] = 263.4406f;
			iLocal_335 = 0;
			while (iLocal_335 < 5) {
				if (entity::does_entity_exist(uLocal_287[iLocal_335])) {
					if (!ped::is_ped_injured(uLocal_287[iLocal_335])) {
						ai::clear_ped_tasks_immediately(uLocal_287[iLocal_335]);
						entity::set_entity_heading(uLocal_287[iLocal_335], fVar0[iLocal_335]);
						entity::set_entity_coords(uLocal_287[iLocal_335], vVar6[iLocal_335 /*3*/], 1, 0, 0, 1);
						ai::task_wander_standard(uLocal_287[iLocal_335], 1193033728, 0);
					}
				}
				iLocal_335++;
			}
			iLocal_314 = gameplay::get_game_timer();
			iLocal_333 = 2;
		}
		break;

	case 2:
		iLocal_313 = gameplay::get_game_timer();
		if (iLocal_313 - iLocal_314 > 13000) {
			iLocal_333 = 3;
		}
		break;

	case 3:
		cam::set_cam_active(iLocal_329, 0);
		cam::render_script_cams(0, 1, 3000, 0, 0, 0);
		cam::set_gameplay_cam_relative_heading(0f);
		cam::destroy_cam(iLocal_329, 0);
		cam::destroy_cam(iLocal_330, 0);
		gameplay::set_minigame_in_progress(0);
		ui::display_radar(1);
		func_66(0, 1, 1, 0);
		player::set_player_control(player::player_id(), 1, 0);
		iLocal_314 = 10000;
		func_42();
		return true;
	}
	return false;
}

// Position - 0x1EC8
void func_42() {
	func_46(-1, 0);
	func_43();
	func_216();
}

// Position - 0x1EDE
void func_43() { func_44(); }

// Position - 0x1EEB
int func_44() {
	if (func_45(0)) {
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

// Position - 0x1F36
bool func_45(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x1F61
void func_46(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		iParam0 = func_64();
	}
	if (iParam0 == -1) {
		return;
	}
	if (iParam1 <= func_63(iParam0)) {
		func_62(iParam0, iParam1);
		if (!func_61(51)) {
			func_57("RE_REWARD", 1, 0, 4000, 10000, func_60(), 0, 138, 0);
			func_56(51);
		}
		if (func_55(iParam0)) {
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_54(iParam0, iParam1) != 322) {
			func_48(func_54(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0) {
			if (Global_101689 == 1 || Global_101689 == 5 || Global_101689 == 11 || Global_101689 == 25) {
				func_47(2);
			}
			else if (Global_101689 == 26 || Global_101689 == 8 || Global_101689 == 17) {
				func_47(7);
			}
			else {
				func_47(1);
			}
		}
	}
}

// Position - 0x2064
void func_47(int iParam0) { Global_101686 = iParam0; }

// Position - 0x2072
void func_48(int iParam0, var uParam1, var uParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_52(891 + iParam0, 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1) {
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12) {
			bVar0 = false;
		}
	}
	else {
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = uParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0) {
		func_49();
	}
}

// Position - 0x215A
void func_49() {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	iVar0 = 0;
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321) {
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1) {
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6) {
			case 1:
				Global_101436++;
				fVar1 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 3:
				Global_101437++;
				fVar2 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 5:
				Global_101438++;
				fVar3 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 7:
				Global_101439++;
				fVar4 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 9:
				Global_101440++;
				fVar5 += Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f;
				break;

			case 11:
				Global_101441++;
				fVar6 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 13:
				Global_101442++;
				fVar7 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			default: break;
			}
		}
		iVar0++;
	}
	if (Global_101419 > 0) {
		if (Global_101436 == Global_101419) {
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0) {
		if (Global_101437 == Global_101420) {
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0) {
		if (Global_101438 == Global_101421) {
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0) {
		if (Global_101439 == Global_101422) {
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0) {
		if (Global_101440 == Global_101423 || Global_101423 * 10 / Global_101440 < 41 ||
			Global_101440 > Global_101426 || Global_101440 == Global_101426) {
			if (!gameplay::is_bit_set(Global_101700.f_9153.f_3856, 14)) {
				if (Global_101440 == Global_101423) {
					stats::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_101423, 0);
					gameplay::set_bit(&Global_101700.f_9153.f_3856, 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0) {
		if (Global_101441 == Global_101424) {
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0) {
		if (Global_101442 == Global_101425) {
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426) {
		iVar9 = Global_101426;
	}
	else {
		iVar9 = Global_101440;
	}
	stats::stat_set_int(joaat("num_missions_completed"), Global_101436, 1);
	stats::stat_set_int(joaat("num_missions_available"), Global_101419, 1);
	stats::stat_set_int(joaat("num_minigames_completed"), Global_101437, 1);
	stats::stat_set_int(joaat("num_minigames_available"), Global_101420, 1);
	stats::stat_set_int(joaat("num_oddjobs_completed"), Global_101438, 1);
	stats::stat_set_int(joaat("num_oddjobs_available"), Global_101421, 1);
	stats::stat_set_int(joaat("num_rndpeople_completed"), Global_101439, 1);
	stats::stat_set_int(joaat("num_rndpeople_available"), Global_101422, 1);
	stats::stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stats::stat_set_int(joaat("num_rndevents_available"), Global_101426, 1);
	stats::stat_set_int(joaat("num_misc_completed"), Global_101442 + Global_101441, 1);
	stats::stat_set_int(joaat("num_misc_available"), Global_101425 + Global_101424, 1);
	Global_101443 = Global_101436 * 100 / Global_101419;
	Global_101445 = Global_101438 + Global_101437 * 100 / (Global_101421 + Global_101420);
	Global_101444 = Global_101439 + iVar9 * 100 / (Global_101422 + Global_101426);
	Global_101446 = Global_101441 + Global_101442 * 100 / (Global_101424 + Global_101425);
	stats::stat_set_float(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	stats::stat_set_int(joaat("percent_story_missions"), Global_101443, 1);
	stats::stat_set_int(joaat("percent_ambient_missions"), Global_101444, 1);
	stats::stat_set_int(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_101700.f_9153.f_3853)) {
		func_51(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_50() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_44();
				}
			}
		}
	}
}

// Position - 0x261B
int func_50() { return Global_25190; }

// Position - 0x2626
int func_51(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 < 0) {
		return 0;
	}
	if (iParam0 > 70) {
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100) {
		return 0;
	}
	iVar0 = player::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0) {
		return player::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

// Position - 0x2677
int func_52(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;

	if (iParam2 == -1) {
		iParam2 = func_53();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		uVar2 = stats::_get_pstat_bool_hash(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - stats::_0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		uVar3 = stats::_get_pstat_bool_hash(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - stats::_0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		uVar4 = stats::_get_pstat_bool_hash(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - stats::_0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		uVar5 = stats::_get_pstat_bool_hash(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - stats::_0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		uVar6 = stats::_get_tupstat_bool_hash(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - stats::_0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		uVar7 = stats::_get_tupstat_bool_hash(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - stats::_0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		uVar8 = stats::_get_ngstat_bool_hash(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		uVar9 = stats::_get_ngstat_bool_hash(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		uVar10 = stats::_get_ngstat_bool_hash(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - stats::_0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		uVar11 = stats::_get_ngstat_bool_hash(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		uVar12 = stats::_get_ngstat_bool_hash(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		uVar13 = stats::_get_ngstat_bool_hash(iParam0 - 9361, 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = iParam0 - 9361 - stats::_0xF4D8E7AC2A27758C(iParam0 - 9361) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

// Position - 0x2A06
var func_53() { return Global_1312735; }

// Position - 0x2A12
int func_54(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return 250;

	case 1: return 226;

	case 2: return 243;

	case 3: return 256;

	case 4: return 259;

	case 5:
		if (iParam1 == 1) {
			return 281;
		}
		if (iParam1 == 2) {
			return 282;
		}
		break;

	case 6: return 265;

	case 7: return 218;

	case 9:
		if (iParam1 == 1) {
			return 271;
		}
		if (iParam1 == 2) {
			return 272;
		}
		if (iParam1 == 3) {
			return 273;
		}
		if (iParam1 == 4) {
			return 274;
		}
		if (iParam1 == 5) {
			return 275;
		}
		if (iParam1 == 6) {
			return 276;
		}
		if (iParam1 == 7) {
			return 277;
		}
		if (iParam1 == 8) {
			return 278;
		}
		if (iParam1 == 9) {
			return 279;
		}
		if (iParam1 == 10) {
			return 280;
		}
		break;

	case 10: return 219;

	case 11:
		if (iParam1 == 1) {
			return 246;
		}
		if (iParam1 == 2) {
			return 247;
		}
		if (iParam1 == 3) {
			return 248;
		}
		if (iParam1 == 4) {
			return 249;
		}
		break;

	case 12: return 254;

	case 13:
		if (iParam1 == 1) {
			return 260;
		}
		if (iParam1 == 2) {
			return 261;
		}
		if (iParam1 == 3) {
			return 262;
		}
		if (iParam1 == 4) {
			return 264;
		}
		break;

	case 14: return 283;

	case 15:
		if (iParam1 == 1) {
			return 224;
		}
		if (iParam1 == 2) {
			return 225;
		}
		break;

	case 16: return 252;

	case 17:
		if (iParam1 == 1) {
			return 244;
		}
		if (iParam1 == 2) {
			return 245;
		}
		break;

	case 18: return 253;

	case 19: return 215;

	case 20: return 216;

	case 21: return 251;

	case 22:
		if (iParam1 == 1) {
			return 221;
		}
		if (iParam1 == 2) {
			return 222;
		}
		break;

	case 23:
		if (iParam1 == 1) {
			return 213;
		}
		if (iParam1 == 2) {
			return 214;
		}
		break;

	case 24: return 242;

	case 25:
		if (iParam1 == 1) {
			return 267;
		}
		if (iParam1 == 2) {
			return 268;
		}
		if (iParam1 == 3) {
			return 269;
		}
		break;

	case 8: return 255;

	case 26:
		if (iParam1 == 1) {
			return 227;
		}
		if (iParam1 == 2) {
			return 228;
		}
		break;

	case 27:
		if (iParam1 == 1) {
			return 257;
		}
		if (iParam1 == 2) {
			return 258;
		}
		break;

	case 28: return 217;

	case 29:
		if (iParam1 == 1) {
			return 229;
		}
		if (iParam1 == 2) {
			return 230;
		}
		if (iParam1 == 3) {
			return 231;
		}
		break;

	case 30: return 285;

	case 31: return 318;

	case 32: return 319;

	case 33: return 320;
	}
	return 322;
}

// Position - 0x2D86
bool func_55(int iParam0) {
	switch (iParam0) {
	case 29:
	case 30:
	case 2:
	case 18: return false;
	}
	return true;
}

// Position - 0x2DB5
void func_56(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		gameplay::set_bit(&Global_101700.f_19369.f_150[iVar1], iVar0);
	}
}

// Position - 0x2DF7
void func_57(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_58(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x2E18
void func_58(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, var uParam9) {
	int iVar0;

	if (gameplay::are_strings_equal(sParam0, "")) {
		return;
	}
	if (iParam3 < 0) {
		return;
	}
	if (iParam5 < 500 && iParam5 != -1) {
		return;
	}
	if (iParam4 < 0 && iParam4 != -1) {
		return;
	}
	if (iParam6 < 1 || iParam6 > 7) {
		return;
	}
	if (iParam7 == 235) {
		return;
	}
	if (iParam8 == 235) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::are_strings_equal(&Global_101700.f_19369[iVar0 /*16*/], sParam0)) {
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9) {
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/], sParam0, 16);
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4, sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = gameplay::get_game_timer() + iParam3;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1) {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 =
				gameplay::get_game_timer() + iParam3 + iParam4;
		}
		else {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_59();
	}
}

// Position - 0x2FEB
void func_59() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 0)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0]) {
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 1)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1]) {
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 2)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2]) {
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

// Position - 0x310B
int func_60() {
	func_11();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x3151
int func_61(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		return gameplay::is_bit_set(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

// Position - 0x3194
void func_62(int iParam0, int iParam1) { gameplay::set_bit(&Global_101700.f_23954.f_8[iParam0], iParam1); }

// Position - 0x31AF
int func_63(int iParam0) {
	int iVar0;

	iVar0 = 1;
	switch (iParam0) {
	case 1: iVar0 = 5; break;

	case 5: iVar0 = 2; break;

	case 9: iVar0 = 10; break;

	case 11: iVar0 = 4; break;

	case 13: iVar0 = 4; break;

	case 15: iVar0 = 2; break;

	case 17: iVar0 = 2; break;

	case 22: iVar0 = 2; break;

	case 23: iVar0 = 2; break;

	case 25: iVar0 = 3; break;

	case 26: iVar0 = 2; break;

	case 27: iVar0 = 2; break;

	case 29: iVar0 = 3; break;
	}
	return iVar0;
}

// Position - 0x3260
int func_64() {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, script::get_this_script_name(), 64);
	iVar16 = func_65(Var0);
	return iVar16;
}

// Position - 0x327D
int func_65(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5,
			char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11,
			char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15) {
	switch (gameplay::get_hash_key(&cParam0)) {
	case joaat("re_abandonedcar"): return 23;

	case joaat("re_accident"): return 0;

	case joaat("re_arrests"): return 15;

	case joaat("re_atmrobbery"): return 1;

	case joaat("re_bikethief"): return 26;

	case joaat("re_border"): return 29;

	case joaat("re_burials"): return 24;

	case joaat("re_bus_tours"): return 2;

	case joaat("re_cartheft"): return 17;

	case joaat("re_chasethieves"): return 11;

	case joaat("re_crashrescue"): return 16;

	case joaat("re_cultshootout"): return 18;

	case joaat("re_dealgonewrong"): return 12;

	case joaat("re_domestic"): return 3;

	case joaat("re_drunkdriver"): return 27;

	case joaat("re_gang_intimidation"): return 20;

	case joaat("re_gangfight"): return 19;

	case joaat("re_getaway_driver"): return 4;

	case joaat("re_hitch_lift"): return 13;

	case joaat("re_homeland_security"): return 28;

	case joaat("re_lured"): return 7;

	case joaat("re_muggings"): return 25;

	case joaat("re_paparazzi"): return 10;

	case joaat("re_prisonerlift"): return 22;

	case joaat("re_prisonvanbreak"): return 21;

	case joaat("re_securityvan"): return 9;

	case joaat("re_shoprobbery"): return 5;

	case joaat("re_snatched"): return 6;

	case joaat("re_stag_do"): return 14;

	case joaat("re_yetarian"): return 30;

	case joaat("re_duel"): return 31;

	case joaat("re_seaplane"): return 32;

	case joaat("re_monkey"): return 33;
	}
	return -1;
}

// Position - 0x3457
void func_66(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_73(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_7()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_72(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		G_DisableMessagesAndCalls1 = 1;
	}
	else {
		func_73(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_72(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_70(player::player_id()) &&
				!func_68(player::player_id(), 0) && !func_67()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_70(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		G_DisableMessagesAndCalls1 = 0;
	}
}

// Position - 0x3570
bool func_67() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x358D
bool func_68(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_69(-1, 0) == 8;
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

// Position - 0x35D8
int func_69(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_53();
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

// Position - 0x3619
int func_70(int iParam0) {
	if (func_68(iParam0, 0)) {
		return 1;
	}
	if (func_71()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x365B
bool func_71() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x366C
int func_72(int iParam0, int iParam1, var uParam2, int iParam3) {
	int iVar0;

	iVar0 = 0;
	if (gameplay::is_pc_version()) {
		if (cutscene::_0xA0FE76168A189DDB() != iParam0 && uParam2) {
			cutscene::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

// Position - 0x369F
void func_73(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 13);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 13);
	}
}

// Position - 0x36C2
bool func_74(int iParam0) {
	if (cam::is_screen_faded_in()) {
		if (gameplay::get_game_timer() - Global_28 > iParam0) {
			Global_27 = gameplay::get_game_timer();
		}
		Global_28 = gameplay::get_game_timer();
		if (gameplay::get_game_timer() - Global_27 > iParam0) {
			if (func_75()) {
				Global_27 = gameplay::get_game_timer();
				return true;
			}
		}
	}
	return false;
}

// Position - 0x370C
bool func_75() {
	if (ui::is_pause_menu_active()) {
		return false;
	}
	if (controls::is_control_just_pressed(0, 18) || controls::is_control_just_pressed(2, 18)) {
		return true;
	}
	return false;
}

// Position - 0x373E
bool func_76(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_19(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7) {
		if (iParam3 < 12) {
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_4(sParam2, iParam3, 0);
}

// Position - 0x378C
void func_77(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, float fParam6, float fParam7,
			 int iParam8) {
	if (!iLocal_318) {
		if (Param3 <= Param0) {
			*fParam6 = Param3;
			*fParam7 = Param0;
		}
		else {
			*fParam6 = Param0;
			*fParam7 = Param3;
		}
		if (Param3.f_1 <= Param0.f_1) {
			fParam6->f_1 = Param3.f_1;
			fParam7->f_1 = Param0.f_1;
		}
		else {
			fParam6->f_1 = Param0.f_1;
			fParam7->f_1 = Param3.f_1;
		}
		*fParam6 = {*fParam6 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8))};
		*fParam7 = {*fParam7 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8))};
		iLocal_318 = 1;
	}
}

// Position - 0x3811
void func_78() {
	int iVar0[24];
	char *sVar25;

	sLocal_514[0] = "BUSTO_RAMB_1";
	sLocal_514[1] = "BUSTO_RAMB_2";
	sLocal_514[2] = "BUSTO_RAMB_3";
	sLocal_514[3] = "BUSTO_RAMB_4";
	sLocal_514[4] = "BUSTO_RAMB_5";
	sLocal_514[5] = "BUSTO_RAMB_6";
	sLocal_514[6] = "BUSTO_RAMB_7";
	sLocal_514[7] = "BUSTO_RAMB_8";
	sLocal_514[8] = "BUSTO_RAMB_9";
	sLocal_514[9] = "BUSTO_RAMB_10";
	sLocal_514[10] = "BUSTO_RAMB_11";
	sLocal_514[11] = "BUSTO_RAMB_12";
	sLocal_514[12] = "BUSTO_RAMB_13";
	sLocal_514[13] = "BUSTO_RAMB_14";
	iVar0[0] = 12000;
	iVar0[1] = 12000;
	iVar0[2] = 36000;
	iVar0[3] = 0;
	iVar0[4] = 36000;
	iVar0[5] = 0;
	iVar0[6] = 36000;
	iVar0[7] = 36000;
	iVar0[8] = 0;
	iVar0[9] = 36000;
	iVar0[10] = 36000;
	iVar0[11] = 0;
	iVar0[12] = 36000;
	iVar0[13] = 0;
	iVar0[14] = 36000;
	iVar0[15] = 0;
	iVar0[16] = 48000;
	iVar0[17] = 0;
	iVar0[18] = 48000;
	iVar0[19] = 0;
	iVar0[20] = 48000;
	iVar0[21] = 0;
	iVar0[0] = iVar0[0];
	switch (iLocal_315) {
	case 0:
		iLocal_314 = gameplay::get_game_timer();
		iLocal_315 = 1;
		break;

	case 1:
		iLocal_313 = gameplay::get_game_timer();
		if (iLocal_313 - iLocal_314 > 2000) {
			if (!func_82()) {
				iLocal_314 = gameplay::get_game_timer();
				iLocal_315 = 2;
			}
		}
		break;

	case 2:
		if (func_82()) {
			graphics::draw_debug_text_2d("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
		}
		if (iLocal_539) {
			iLocal_313 = gameplay::get_game_timer();
			if (iLocal_313 - iLocal_314 > iLocal_542) {
				if (func_79(uLocal_287[iLocal_540])) {
					if (iLocal_278 == 0) {
						sVar25 = "TOUR_ABOUT_TO_START";
					}
					else if (iLocal_278 % 2 == 0) {
						sVar25 = "TOUR_CHAT";
					}
					else {
						sVar25 = "TOUR_LANDMARK";
					}
					graphics::draw_debug_text_2d("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
					audio::_play_ambient_speech1(uLocal_287[iLocal_540], sVar25, "SPEECH_PARAMS_FORCE", 1);
					iLocal_541++;
					if (iLocal_541 == 3) {
						iLocal_539 = 0;
					}
					iLocal_542 = gameplay::get_random_int_in_range(9000, 14000);
					iLocal_314 = gameplay::get_game_timer();
				}
				iLocal_540++;
				if (iLocal_540 == 5) {
					iLocal_540 = 0;
				}
			}
		}
		else if (iLocal_508 < 14) {
			iLocal_313 = gameplay::get_game_timer();
			if (iLocal_313 - iLocal_314 > 10000) {
				if (!func_82()) {
					if (func_81(&uLocal_343, "BUSTOAU", "BUSTO_RAMB", sLocal_514[iLocal_508], 4, 0, 0)) {
						iLocal_508++;
						iLocal_314 = gameplay::get_game_timer();
						iLocal_539 = 1;
						iLocal_541 = 0;
					}
					else {
						graphics::draw_debug_text_2d("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0,
													 255, 255);
					}
				}
			}
		}
		else {
			iLocal_539 = 1;
		}
		break;
	}
}

// Position - 0x3B1A
bool func_79(int iParam0) {
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (audio::_0x49B99BF3FDA89A7A(iParam0, "TOUR_ABOUT_TO_START", 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x3B40
int func_80() {
	if (controls::is_control_just_pressed(2, 222) && !iLocal_538) {
		if (entity::does_entity_exist(iLocal_306)) {
			if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
				if (!ped::is_ped_injured(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_306, 0)) {
						if (!ped::is_ped_injured(iLocal_285)) {
							ai::task_vehicle_temp_action(iLocal_285, iLocal_306, 24, 5000);
							fLocal_308 = entity::get_entity_speed(iLocal_306);
							while (fLocal_308 > 5f) {
								system::wait(0);
								if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
									fLocal_308 = entity::get_entity_speed(iLocal_306);
								}
							}
							func_29();
							cam::set_follow_vehicle_cam_zoom_level(iLocal_510);
							ped::set_ped_can_play_ambient_anims(player::player_ped_id(), 1);
							audio::stop_audio_scene("RE_BUS_TOUR_SCENE");
							audio::_0x18EB48CFC41F2EA0(iLocal_306, 0);
							if (cam::does_cam_exist(iLocal_328)) {
								cam::destroy_cam(iLocal_328, 0);
								cam::render_script_cams(0, 0, 0, 1, 0, 0);
								entity::set_entity_visible(player::player_ped_id(), 1, 0);
							}
							ai::task_leave_vehicle(player::player_ped_id(), iLocal_306, 0);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

// Position - 0x3C2E
bool func_81(var *uParam0, char *sParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6) {
	func_19(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7) {
		if (iParam4 < 12) {
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

// Position - 0x3C82
bool func_82() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0x3CA4
void func_83() {
	switch (iLocal_278) {
	case 0: vehicle::set_vehicle_density_multiplier_this_frame(0.5f); break;

	case 1:
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
	case 13: vehicle::set_vehicle_density_multiplier_this_frame(0.6f); break;
	}
}

// Position - 0x3D1A
void func_84() {
	if (!ped::is_ped_injured(iLocal_286) && !ped::is_ped_injured(iLocal_285)) {
		switch (iLocal_51) {
		case 0:
			cam::set_cinematic_button_active(0);
			audio::start_audio_scene("RE_BUS_TOUR_SCENE");
			audio::_dynamic_mixer_related_fn(iLocal_306, "RE_BUS_TOUR_BUS_VEHICLE", 0);
			ped::set_ped_can_play_ambient_anims(player::player_ped_id(), 0);
			func_66(1, 1, 1, 0);
			player::set_player_control(player::player_id(), 0, 256);
			ai::clear_ped_tasks_immediately(player::player_ped_id());
			gameplay::clear_area_of_projectiles(Local_263.f_1, 30f, 0);
			ped::set_ped_can_be_dragged_out(iLocal_285, 0);
			ped::set_ped_into_vehicle(player::player_ped_id(), iLocal_306, 2);
			gameplay::set_minigame_in_progress(1);
			ui::display_radar(0);
			iLocal_329 = cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f,
													 -11.5369f, 0f, -74.512f, 40f, 1, 2);
			iLocal_330 = cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f,
													 -26.2154f, 0f, -59.2407f, 50f, 1, 2);
			cam::set_cam_active(iLocal_329, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			cam::set_cam_active_with_interp(iLocal_330, iLocal_329, 6500, 1, 1);
			if (vehicle::is_vehicle_driveable(player::get_players_last_vehicle(), 0)) {
				if (entity::is_entity_at_entity(player::get_players_last_vehicle(), iLocal_306, 8f, 8f, 5f, 0, 1, 0)) {
					entity::set_entity_heading(player::get_players_last_vehicle(), 65f);
					entity::set_entity_coords(player::get_players_last_vehicle(), 115.1136f, 241.6893f, 106.6493f, 1, 0,
											  0, 1);
				}
			}
			controls::_0x3D42B92563939375("BusTours");
			if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
				func_77(entity::get_entity_coords(iLocal_306, 1), Local_52[0 /*15*/].f_1, &vLocal_320, &vLocal_323,
						500);
				iLocal_544 = gameplay::get_game_timer();
				iLocal_51 = 1;
			}
			if (cam::get_follow_ped_cam_view_mode() == 4) {
				iLocal_319 = 1;
			}
			iLocal_545 = 0;
			break;

		case 1:
			if (!iLocal_340) {
				func_112();
			}
			if (gameplay::get_game_timer() - iLocal_544 > 5000 && !iLocal_543) {
				func_76(&uLocal_343, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
				if (func_111("Enter_bus")) {
					ui::clear_help(1);
				}
				iLocal_543 = 1;
			}
			if (gameplay::get_game_timer() - iLocal_544 > 6200) {
				if (iLocal_319 == 1) {
					if (iLocal_545 == 0) {
						graphics::_start_screen_effect("CamPushInNeutral", 0, 0);
						audio::play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_545 = 1;
					}
				}
			}
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iLocal_306) &&
					ped::is_ped_sitting_in_vehicle(iLocal_286, iLocal_306) &&
					ped::is_ped_sitting_in_vehicle(iLocal_285, iLocal_306)) {
					iLocal_51 = 2;
				}
				else if (func_74(1000)) {
					if (vehicle::is_vehicle_seat_free(iLocal_306, 0, 0)) {
						ped::set_ped_into_vehicle(iLocal_286, iLocal_306, 0);
					}
					iLocal_51 = 2;
				}
			}
			break;

		case 2:
			ai::task_vehicle_drive_to_coord(iLocal_285, iLocal_306, Local_52[0 /*15*/].f_1, Local_52[0 /*15*/].f_8, 0,
											joaat("tourbus"), iLocal_511, 5f, 15f);
			cam::set_cam_active(iLocal_329, 0);
			cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			cam::destroy_cam(iLocal_329, 0);
			cam::destroy_cam(iLocal_330, 0);
			gameplay::set_minigame_in_progress(0);
			ui::display_radar(1);
			cam::_disable_vehicle_first_person_cam_this_frame();
			ui::hide_hud_component_this_frame(2);
			func_66(0, 1, 1, 0);
			iLocal_331 = func_10();
			func_85(iLocal_331, 1, iLocal_512);
			iLocal_510 = cam::get_follow_vehicle_cam_zoom_level();
			if (!iLocal_319) {
				cam::set_follow_vehicle_cam_zoom_level(3);
			}
			else {
				func_21(1);
			}
			ui::remove_blip(&iLocal_310);
			iLocal_49 = 2;
			break;
		}
	}
	else {
		func_216();
	}
}

// Position - 0x406C
int func_85(int iParam0, int iParam1, int iParam2) {
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return 0;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return 0;
	}
	return func_86(Global_101700.f_27009[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

// Position - 0x40B5
int func_86(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_110();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_109(99, 1);
			func_108(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_108(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_108(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_94(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_93(5)) {
				fVar0 = 0.9f;
				iVar1 = 5;
			}
			break;

		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
			switch (iParam0) {
			case 0: func_108(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_108(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_108(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_93(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_108(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_108(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_108(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_108(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_108(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_108(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
			}
			break;

		case 98:
		case 99:
		case 100:
		case 101:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			switch (iParam0) {
			case 0: func_108(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_108(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_108(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_108(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_108(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_108(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_108(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_108(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_108(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_93(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_108(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_108(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_108(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_108(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_108(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_108(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_92(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_109(95, iParam3); break;

		case 1: func_109(97, iParam3); break;

		case 2: func_109(96, iParam3); break;
		}
		func_109(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_89(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_89(iVar1);
	}
	iVar5 = Global_52996[iVar2] + iParam3;
	switch (iParam1) {
	case 1:
		if (Global_52996[iVar2] >= 0 && iParam3 > 0) {
			if (iVar5 <= 0) {
				Global_52996[iVar2] = 2147483647;
			}
			else {
				Global_52996[iVar2] += iParam3;
			}
		}
		switch (iParam0) {
		case 0: func_108(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_108(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_108(joaat("sp2_total_cash_earned"), iParam3); break;
		}
		break;

	case 0:
		if (!iParam4) {
			if (Global_52996[iVar2] - iParam3 < 0) {
				return 0;
			}
		}
		iVar3 = Global_52996[iVar2];
		Global_52996[iVar2] -= iParam3;
		if (iParam4) {
			iVar4 = iVar3;
		}
		break;
	}
	if (iParam2 == 1) {
		if (iVar4 > 20) {
		}
	}
	else {
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 =
			iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 =
			iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10) {
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_88(iParam0);
	if (Global_35781 == 15) {
		func_87(0);
	}
	return 1;
}

// Position - 0x46B4
void func_87(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = 0;
		while (iVar1 < 11) {
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!iParam0) {
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

// Position - 0x4936
void func_88(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x4990
void func_89(int iParam0) {
	bool bVar0;
	char cVar1[64];

	bVar0 = false;
	if (!network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0)) {
			bVar0 = true;
			gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		}
	}
	else if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0) ||
			 gameplay::is_bit_set(Global_2097152[func_91() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_91() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_90(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x4A52
char *func_90(int iParam0) {
	switch (iParam0) {
	case 0: return "COUP_HAIRC";

	case 1: return "COUP_TATTOO";

	case 2: return "COUP_WARSTOCK";

	case 3: return "COUP_MOSPORT";

	case 4: return "COUP_ELITAS";

	case 5: return "COUP_MEDSPENS";

	case 6: return "COUP_SPRUNK";

	case 7: return "COUP_RESPRAY";

	default:
	}
	return "";
}

// Position - 0x4ACC
int func_91() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x4AD9
void func_92(int iParam0) {
	func_109(93, iParam0);
	func_109(29, iParam0);
	func_109(30, iParam0);
}

// Position - 0x4AF9
bool func_93(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_91() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x4B35
int func_94(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (player::has_achievement_been_passed(27)) {
		return 0;
	}
	if (stats::stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (iParam0) {
	}
	iVar2 = 0;
	stats::stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000) {
		stats::stat_set_int(joaat("num_cash_spent"), iVar1, 1);
		func_51(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_95(27, 1);
	return 1;
}

// Position - 0x4BEC
int func_95(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_96(iParam0, iParam1);
}

// Position - 0x4C07
int func_96(int iParam0, int iParam1) {
	if (func_15(14) && !func_107(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_106(&Global_2595550)) {
		if (func_104(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_97(&Global_2595550, iParam0)) {
			return 1;
		}
	}
	else {
		if (!player::give_achievement_to_player(iParam0)) {
			return 0;
		}
		if (player::has_achievement_been_passed(iParam0)) {
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x4CA4
bool func_97(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_15(14) && !func_107(iParam1)) {
		return false;
	}
	if (func_104(uParam0, iParam1)) {
		return false;
	}
	if (func_103(uParam0) < 0f) {
		func_102(uParam0, 0);
	}
	func_100(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_98(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x4D55
int func_98(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_15(14) && !func_107(iParam1)) {
		return 0;
	}
	if (func_104(uParam0, iParam1)) {
		return 0;
	}
	if (func_103(uParam0) < 0f) {
		func_102(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_99(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x4DD0
bool func_99(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x4DE1
void func_100(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_101(uParam0, iVar0);
		iVar0++;
	}
	func_102(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x4E15
void func_101(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x4E25
void func_102(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x4E42
float func_103(var *uParam0) { return uParam0->f_72; }

// Position - 0x4E4E
bool func_104(var *uParam0, int iParam1) { return func_105(uParam0, iParam1) != -1; }

// Position - 0x4E60
int func_105(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x4E8D
bool func_106(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x4E9B
int func_107(int iParam0) {
	switch (iParam0) {
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69: return 1;

	default:
	}
	return 0;
}

// Position - 0x4EEB
void func_108(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x4F0E
void func_109(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 < 1) {
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2) {
		return;
	}
	if (network::network_is_game_in_progress()) {
		return;
	}
	if (Global_51564[iParam0 /*7*/]) {
		stats::stat_get_int(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stats::stat_set_int(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

// Position - 0x4F6B
void func_110() {
	int iVar0;

	if (network::network_is_signed_in()) {
		stats::stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (Global_52996[0] != iVar0) {
			Global_52996[0] = iVar0;
		}
		stats::stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (Global_52996[1] != iVar0) {
			Global_52996[1] = iVar0;
		}
		stats::stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (Global_52996[2] != iVar0) {
			Global_52996[2] = iVar0;
		}
	}
}

// Position - 0x4FE0
bool func_111(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x4FF3
void func_112() {
	if (!ped::is_ped_injured(iLocal_286)) {
		ai::clear_ped_tasks(iLocal_286);
		ai::task_enter_vehicle(iLocal_286, iLocal_306, 10000, 0, 2f, 262144, 0);
		ped::set_ped_keep_task(iLocal_286, 1);
		iLocal_340 = 1;
	}
}

// Position - 0x502D
void func_113() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (func_153()) {
			vehicle::set_vehicle_doors_locked(iLocal_306, 3);
			vehicle::set_vehicle_is_considered_by_player(iLocal_306, 0);
			func_216();
		}
		else if (func_144(4)) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_306, 5f, 5f, 5f, 0, 1, 0) &&
				!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) && !func_111("TX_H02")) {
				if (func_142()) {
					if (!iLocal_513) {
						vehicle::set_vehicle_doors_locked(iLocal_306, 1);
						iLocal_513 = 1;
					}
					ui::display_help_text_this_frame("Enter_bus", 0);
					if (controls::is_control_pressed(2, 23)) {
						ai::task_enter_vehicle(player::player_ped_id(), iLocal_306, -1, 2, 1f, 8, 0);
					}
					if (!ui::does_blip_exist(iLocal_310)) {
						if (ui::does_blip_exist(iLocal_311)) {
							ui::remove_blip(&iLocal_311);
						}
						iLocal_310 = ui::add_blip_for_entity(iLocal_306);
						ui::set_blip_as_friendly(iLocal_310, 1);
						ui::set_blip_scale(iLocal_310, Global_25236);
						if (!ped::is_ped_injured(iLocal_286)) {
							ai::task_look_at_entity(iLocal_286, player::player_ped_id(), -1, 0, 2);
						}
						if (!func_141()) {
							if (func_129()) {
								func_216();
							}
							else {
								func_119(1);
							}
						}
					}
					if (func_118()) {
						iLocal_538 = 0;
						func_117(1);
					}
				}
				else {
					ui::display_help_text_this_frame("No_bus_money", 0);
					if (iLocal_513) {
						vehicle::set_vehicle_doors_locked(iLocal_306, 2);
						iLocal_513 = 0;
					}
				}
			}
		}
		if (iLocal_335 < 5) {
			if (func_114(&uLocal_287[iLocal_335])) {
				iLocal_335++;
			}
		}
	}
}

// Position - 0x518F
bool func_114(int *iParam0) {
	char *sVar0;

	*iParam0 = 0;
	if (ped::get_closest_ped(vLocal_279, 100f, 1, 0, iParam0, 0, 0, 28)) {
		if (!ped::is_ped_injured(*iParam0)) {
			if (func_116(*iParam0)) {
				if (!entity::is_entity_a_mission_entity(*iParam0)) {
					entity::set_entity_as_mission_entity(*iParam0, 1, 0);
					ai::clear_ped_tasks(*iParam0);
					ped::set_blocking_of_non_temporary_events(*iParam0, 1);
					ped::set_ped_name_debug(*iParam0, "randompassenger");
					ped::set_ped_config_flag(*iParam0, 134, 1);
					switch (iLocal_335) {
					case 0:
						if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
							ped::set_ped_into_vehicle(*iParam0, iLocal_306, 3);
							ped::set_ped_keep_task(*iParam0, 1);
						}
						break;

					case 1:
						if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
							ped::set_ped_into_vehicle(*iParam0, iLocal_306, 7);
							ped::set_ped_keep_task(*iParam0, 1);
						}
						break;

					case 2:
						if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
							ped::set_ped_into_vehicle(*iParam0, iLocal_306, 6);
							ped::set_ped_keep_task(*iParam0, 1);
						}
						break;

					case 3:
						if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
							ped::set_ped_into_vehicle(*iParam0, iLocal_306, 8);
							ped::set_ped_keep_task(*iParam0, 1);
						}
						break;

					case 4:
						if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
							ped::set_ped_into_vehicle(*iParam0, iLocal_306, 1);
							ped::set_ped_keep_task(*iParam0, 1);
						}
						break;
					}
					sVar0 = func_115(ped::is_ped_male(*iParam0));
					audio::set_ambient_voice_name(*iParam0, sVar0);
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x52E8
char *func_115(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		iVar0 = gameplay::get_random_int_in_range(0, 16);
		if (iVar0 == 0) {
			return "A_F_M_DOWNTOWN_01_BLACK_FULL_01";
		}
		else if (iVar0 == 1) {
			return "A_F_M_EASTSA_01_LATINO_FULL_01";
		}
		else if (iVar0 == 2) {
			return "A_F_M_FATWHITE_01_WHITE_FULL_01";
		}
		else if (iVar0 == 3) {
			return "A_F_M_KTOWN_02_KOREAN_FULL_01";
		}
		else if (iVar0 == 4) {
			return "A_F_M_SOUCENT_02_BLACK_FULL_01";
		}
		else if (iVar0 == 5) {
			return "A_F_M_TOURIST_01_WHITE_MINI_01";
		}
		else if (iVar0 == 6) {
			return "A_F_O_KTOWN_01_KOREAN_FULL_01";
		}
		else if (iVar0 == 7) {
			return "A_F_O_SOUCENT_01_BLACK_FULL_01";
		}
		else if (iVar0 == 8) {
			return "A_F_Y_EASTSA_02_WHITE_FULL_01";
		}
		else if (iVar0 == 9) {
			return "A_F_Y_HIKER_01_WHITE_FULL_01";
		}
		else if (iVar0 == 10) {
			return "A_F_Y_HIKER_01_WHITE_MINI_01";
		}
		else if (iVar0 == 11) {
			return "A_F_Y_HIPSTER_03_WHITE_FULL_01";
		}
		else if (iVar0 == 12) {
			return "A_F_Y_TOURIST_01_BLACK_FULL_01";
		}
		else if (iVar0 == 13) {
			return "A_F_Y_TOURIST_01_LATINO_FULL_01";
		}
		else if (iVar0 == 14) {
			return "A_F_Y_TOURIST_01_WHITE_FULL_01";
		}
		else {
			return "A_F_Y_TOURIST_02_WHITE_MINI_01";
		}
	}
	iVar0 = gameplay::get_random_int_in_range(0, 33);
	if (iVar0 == 0) {
		return "A_M_M_AFRIAMER_01_BLACK_FULL_01";
	}
	if (iVar0 == 1) {
		return "A_M_M_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 2) {
		return "A_M_M_EASTSA_02_LATINO_FULL_01";
	}
	if (iVar0 == 3) {
		return "A_M_M_FATLATIN_01_LATINO_FULL_01";
	}
	if (iVar0 == 4) {
		return "A_M_M_GENFAT_01_LATINO_FULL_01";
	}
	if (iVar0 == 5) {
		return "A_M_M_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	if (iVar0 == 6) {
		return "A_M_M_SALTON_01_WHITE_FULL_01";
	}
	if (iVar0 == 7) {
		return "A_M_M_SALTON_02_WHITE_FULL_01";
	}
	if (iVar0 == 8) {
		return "A_M_M_STLAT_02_LATINO_FULL_01";
	}
	if (iVar0 == 9) {
		return "A_M_M_TOURIST_01_WHITE_MINI_01";
	}
	if (iVar0 == 10) {
		return "A_M_O_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 11) {
		return "A_M_Y_BEACH_01_CHINESE_FULL_01";
	}
	if (iVar0 == 12) {
		return "A_M_Y_BEACH_01_CHINESE_MINI_01";
	}
	if (iVar0 == 13) {
		return "A_M_Y_BEACH_01_WHITE_FULL_01";
	}
	if (iVar0 == 14) {
		return "A_M_Y_BEACH_02_LATINO_FULL_01";
	}
	if (iVar0 == 15) {
		return "A_M_Y_BEACH_03_WHITE_FULL_01";
	}
	if (iVar0 == 16) {
		return "A_M_Y_BEACHVESP_01_CHINESE_FULL_01";
	}
	if (iVar0 == 17) {
		return "A_M_Y_BEACHVESP_01_CHINESE_MINI_01";
	}
	if (iVar0 == 18) {
		return "A_M_Y_BEACHVESP_01_WHITE_FULL_01";
	}
	if (iVar0 == 19) {
		return "A_M_Y_BEACHVESP_02_WHITE_FULL_01";
	}
	if (iVar0 == 20) {
		return "A_M_Y_BEACHVESP_02_WHITE_MINI_01";
	}
	if (iVar0 == 21) {
		return "A_M_Y_BEVHILLS_01_WHITE_FULL_01";
	}
	if (iVar0 == 22) {
		return "A_M_Y_BUSINESS_01_BLACK_FULL_01";
	}
	if (iVar0 == 23) {
		return "A_M_Y_BUSINESS_01_CHINESE_FULL_01";
	}
	if (iVar0 == 24) {
		return "A_M_Y_BUSINESS_02_BLACK_FULL_01";
	}
	if (iVar0 == 25) {
		return "A_M_Y_BUSINESS_02_WHITE_FULL_01";
	}
	if (iVar0 == 26) {
		return "A_M_Y_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 27) {
		return "A_M_Y_GENSTREET_01_CHINESE_FULL_01";
	}
	if (iVar0 == 28) {
		return "A_M_Y_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 29) {
		return "A_M_Y_GENSTREET_02_BLACK_FULL_01";
	}
	if (iVar0 == 30) {
		return "A_M_Y_GENSTREET_02_LATINO_FULL_01";
	}
	if (iVar0 == 31) {
		return "A_M_Y_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	return "A_M_Y_STLAT_01_LATINO_FULL_01";
}

// Position - 0x5625
bool func_116(int iParam0) {
	int iVar0;

	iVar0 = 1;
	if (entity::get_entity_model(iParam0) == joaat("a_m_m_tramp_01") ||
		entity::get_entity_model(iParam0) == joaat("a_f_m_tramp_01") ||
		entity::get_entity_model(iParam0) == joaat("a_m_o_tramp_01") ||
		entity::get_entity_model(iParam0) == joaat("s_m_y_cop_01") ||
		entity::get_entity_model(iParam0) == joaat("s_m_y_fireman_01") ||
		entity::get_entity_model(iParam0) == joaat("a_f_y_hiker_01")) {
		iVar0 = 0;
	}
	return iVar0;
}

// Position - 0x569E
void func_117(int iParam0) {
	iLocal_51 = 0;
	iLocal_49 = iParam0;
}

// Position - 0x56AD
bool func_118() {
	if (vehicle::is_vehicle_driveable(iLocal_306, 0)) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_getting_into_a_vehicle(player::player_ped_id())) {
				if (ped::set_exclusive_phone_relationships(player::player_ped_id()) == iLocal_306) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x56EA
int func_119(int iParam0) {
	if (func_123()) {
		Global_101690 = 1;
		Global_101687 = gameplay::get_game_timer();
		if (func_55(Global_101689)) {
			func_120(0);
		}
		ui::set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_55(Global_101689)) {
			ui::flash_minimap_display();
		}
		return 1;
	}
	return 0;
}

// Position - 0x573D
void func_120(int iParam0) {
	switch (iParam0) {
	case 0:
		if (Global_101700.f_23954.f_2 < 3) {
			if (!ui::is_help_message_on_screen()) {
				func_121(func_122(iParam0), -1);
				Global_101700.f_23954.f_2++;
				gameplay::set_bit(&Global_101696, 0);
			}
		}
		break;

	case 1:
		if (!gameplay::is_bit_set(Global_101696, 1)) {
			if (!ui::is_help_message_on_screen()) {
				func_121(func_122(iParam0), -1);
				Global_101700.f_23954.f_3++;
				gameplay::set_bit(&Global_101696, 1);
			}
		}
		break;

	case 2:
		if (!gameplay::is_bit_set(Global_101696, 2)) {
			if (!ui::is_help_message_on_screen()) {
				func_121(func_122(iParam0), -1);
				Global_101700.f_23954.f_4++;
				gameplay::set_bit(&Global_101696, 2);
			}
		}
		break;
	}
}

// Position - 0x581E
void func_121(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x5835
char *func_122(int iParam0) {
	char *sVar0;

	sVar0 = "";
	switch (iParam0) {
	case 0: sVar0 = "AM_H_REFS"; break;

	case 1: sVar0 = "RE_FLASHBLIP"; break;

	case 2: sVar0 = "RE_HANDOVER"; break;
	}
	return sVar0;
}

// Position - 0x5878
bool func_123() {
	switch (func_124(&Global_25249, 0, 5, 0, script::get_id_of_this_thread())) {
	case 1: return true;

	case 0: return true;
	}
	return false;
}

// Position - 0x58AE
int func_124(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_128(0)) {
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
		if (!func_126(iParam2)) {
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
			func_125(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x59E5
void func_125(int *iParam0, int iParam1) {
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

// Position - 0x5A34
bool func_126(int iParam0) { return func_127(iParam0, Global_35781); }

// Position - 0x5A45
int func_127(int iParam0, int iParam1) {
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

// Position - 0x5C26
bool func_128(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_126(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x5C48
bool func_129() {
	if (!func_126(5)) {
		return true;
	}
	if (func_137()) {
		return true;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_136()) {
			return false;
		}
	}
	if (func_130(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x5CAA
int func_130(float fParam0, int iParam1) {
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;

	iVar33 = -1;
	fVar34 = fParam0;
	if (player::is_player_playing(player::player_id())) {
		if (func_12(func_10())) {
			iVar36 = func_60();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63) {
				iVar32 = iVar37;
				if (gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 2) &&
					!gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 3)) {
					func_131(iVar32, &Var0);
					fVar35 = gameplay::get_distance_between_coords(
						entity::get_entity_coords(player::player_ped_id(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34) {
						bVar38 = true;
						if (iParam1) {
							if (iVar36 != Var0.f_26) {
								bVar38 = false;
							}
						}
						if (bVar38) {
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

// Position - 0x5D61
void func_131(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_132(uParam1, "Abigail1", func_134(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
		break;

	case 1:
		func_132(uParam1, "Abigail2", func_134(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
		break;

	case 2:
		func_132(uParam1, "Barry1", func_134(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_133(iParam0), 1, 0);
		break;

	case 3:
		func_132(uParam1, "Barry2", func_134(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_133(iParam0), 1, 1);
		break;

	case 4:
		func_132(uParam1, "Barry3", func_134(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 5:
		func_132(uParam1, "Barry3A", func_134(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 6:
		func_132(uParam1, "Barry3C", func_134(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 7:
		func_132(uParam1, "Barry4", func_134(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_133(iParam0), 0, 0);
		break;

	case 8:
		func_132(uParam1, "Dreyfuss1", func_134(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 9:
		func_132(uParam1, "Epsilon1", func_134(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 10:
		func_132(uParam1, "Epsilon2", func_134(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
		break;

	case 11:
		func_132(uParam1, "Epsilon3", func_134(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 12:
		func_132(uParam1, "Epsilon4", func_134(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 13:
		func_132(uParam1, "Epsilon5", func_134(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
		break;

	case 14:
		func_132(uParam1, "Epsilon6", func_134(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 15:
		func_132(uParam1, "Epsilon7", func_134(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 16:
		func_132(uParam1, "Epsilon8", func_134(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
		break;

	case 17:
		func_132(uParam1, "Extreme1", func_134(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 18:
		func_132(uParam1, "Extreme2", func_134(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 19:
		func_132(uParam1, "Extreme3", func_134(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 20:
		func_132(uParam1, "Extreme4", func_134(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 21:
		func_132(uParam1, "Fanatic1", func_134(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_133(iParam0), 1, 0);
		break;

	case 22:
		func_132(uParam1, "Fanatic2", func_134(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_133(iParam0), 1, 0);
		break;

	case 23:
		func_132(uParam1, "Fanatic3", func_134(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_133(iParam0), 0, 1);
		break;

	case 24:
		func_132(uParam1, "Hao1", func_134(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_133(iParam0), 0, 1);
		break;

	case 25:
		func_132(uParam1, "Hunting1", func_134(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 26:
		func_132(uParam1, "Hunting2", func_134(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 27:
		func_132(uParam1, "Josh1", func_134(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
		break;

	case 28:
		func_132(uParam1, "Josh2", func_134(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
		break;

	case 29:
		func_132(uParam1, "Josh3", func_134(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
		break;

	case 30:
		func_132(uParam1, "Josh4", func_134(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_133(iParam0), 1, 0);
		break;

	case 31:
		func_132(uParam1, "Maude1", func_134(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 32:
		func_132(uParam1, "Minute1", func_134(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 33:
		func_132(uParam1, "Minute2", func_134(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 34:
		func_132(uParam1, "Minute3", func_134(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 35:
		func_132(uParam1, "MrsPhilips1", func_134(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 36:
		func_132(uParam1, "MrsPhilips2", func_134(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_133(iParam0), 0, 0);
		break;

	case 37:
		func_132(uParam1, "Nigel1", func_134(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_133(iParam0), 1, 0);
		break;

	case 38:
		func_132(uParam1, "Nigel1A", func_134(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
		break;

	case 39:
		func_132(uParam1, "Nigel1B", func_134(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
		break;

	case 40:
		func_132(uParam1, "Nigel1C", func_134(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
		break;

	case 41:
		func_132(uParam1, "Nigel1D", func_134(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
		break;

	case 42:
		func_132(uParam1, "Nigel2", func_134(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
		break;

	case 43:
		func_132(uParam1, "Nigel3", func_134(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
		break;

	case 44:
		func_132(uParam1, "Omega1", func_134(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 45:
		func_132(uParam1, "Omega2", func_134(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 46:
		func_132(uParam1, "Paparazzo1", func_134(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 47:
		func_132(uParam1, "Paparazzo2", func_134(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 48:
		func_132(uParam1, "Paparazzo3", func_134(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 49:
		func_132(uParam1, "Paparazzo3A", func_134(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 50:
		func_132(uParam1, "Paparazzo3B", func_134(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 51:
		func_132(uParam1, "Paparazzo4", func_134(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 52:
		func_132(uParam1, "Rampage1", func_134(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 54:
		func_132(uParam1, "Rampage3", func_134(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_133(iParam0), 1, 0);
		break;

	case 55:
		func_132(uParam1, "Rampage4", func_134(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_133(iParam0), 1, 0);
		break;

	case 56:
		func_132(uParam1, "Rampage5", func_134(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
		break;

	case 53:
		func_132(uParam1, "Rampage2", func_134(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
		break;

	case 57:
		func_132(uParam1, "TheLastOne", func_134(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 58:
		func_132(uParam1, "Tonya1", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 59:
		func_132(uParam1, "Tonya2", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	case 60:
		func_132(uParam1, "Tonya3", func_134(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_133(iParam0), 0, 1);
		break;

	case 61:
		func_132(uParam1, "Tonya4", func_134(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_133(iParam0), 0, 1);
		break;

	case 62:
		func_132(uParam1, "Tonya5", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x6F16
void func_132(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
			  int iParam10, char *sParam11, int iParam12, int iParam13, char *sParam14, int iParam15, int iParam16,
			  int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23,
			  int iParam24) {
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = {Param2};
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = {vParam7};
	uParam0->f_9 = iParam10;
	StringCopy(&uParam0->f_10, sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&uParam0->f_16, sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

// Position - 0x6FA7
int func_133(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 0;

	case 2: return 1;

	case 3: return 1;

	case 4: return 0;

	case 5: return 1;

	case 6: return 1;

	case 7: return 0;

	case 8: return 1;

	case 9: return 0;

	case 10: return 0;

	case 11: return 0;

	case 12: return 1;

	case 13: return 0;

	case 14: return 1;

	case 15: return 0;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 1;

	case 23: return 1;

	case 24: return 1;

	case 25: return 1;

	case 26: return 1;

	case 27: return 0;

	case 28: return 1;

	case 29: return 1;

	case 30: return 1;

	case 31: return 0;

	case 32: return 1;

	case 33: return 1;

	case 34: return 1;

	case 35: return 0;

	case 36: return 0;

	case 37: return 0;

	case 38: return 1;

	case 39: return 1;

	case 40: return 1;

	case 41: return 1;

	case 42: return 1;

	case 43: return 1;

	case 44: return 0;

	case 45: return 0;

	case 46: return 1;

	case 47: return 1;

	case 48: return 0;

	case 49: return 1;

	case 50: return 1;

	case 51: return 1;

	case 52: return 1;

	case 54: return 1;

	case 55: return 1;

	case 56: return 1;

	case 53: return 1;

	case 57: return 1;

	case 58: return 1;

	case 59: return 1;

	case 60: return 1;

	case 61: return 1;

	case 62: return 1;

	default: break;
	}
	return 0;
}

// Position - 0x72ED
struct<2> func_134(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_135(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x7324
struct<2>
func_135(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0) {
	case 0: StringCopy(&Var0, "ABI1", 8); break;

	case 1: StringCopy(&Var0, "ABI2", 8); break;

	case 2: StringCopy(&Var0, "BA1", 8); break;

	case 3: StringCopy(&Var0, "BA2", 8); break;

	case 4: StringCopy(&Var0, "BA3", 8); break;

	case 5: StringCopy(&Var0, "BA3A", 8); break;

	case 6: StringCopy(&Var0, "BA3C", 8); break;

	case 7: StringCopy(&Var0, "BA4", 8); break;

	case 8: StringCopy(&Var0, "DRE1", 8); break;

	case 9: StringCopy(&Var0, "EPS1", 8); break;

	case 10: StringCopy(&Var0, "EPS2", 8); break;

	case 11: StringCopy(&Var0, "EPS3", 8); break;

	case 12: StringCopy(&Var0, "EPS4", 8); break;

	case 13: StringCopy(&Var0, "EPS5", 8); break;

	case 14: StringCopy(&Var0, "EPS6", 8); break;

	case 15: StringCopy(&Var0, "EPS7", 8); break;

	case 16: StringCopy(&Var0, "EPS8", 8); break;

	case 17: StringCopy(&Var0, "EXT1", 8); break;

	case 18: StringCopy(&Var0, "EXT2", 8); break;

	case 19: StringCopy(&Var0, "EXT3", 8); break;

	case 20: StringCopy(&Var0, "EXT4", 8); break;

	case 21: StringCopy(&Var0, "FAN1", 8); break;

	case 22: StringCopy(&Var0, "FAN2", 8); break;

	case 23: StringCopy(&Var0, "FAN3", 8); break;

	case 24: StringCopy(&Var0, "HAO1", 8); break;

	case 25: StringCopy(&Var0, "HUN1", 8); break;

	case 26: StringCopy(&Var0, "HUN2", 8); break;

	case 27: StringCopy(&Var0, "JOS1", 8); break;

	case 28: StringCopy(&Var0, "JOS2", 8); break;

	case 29: StringCopy(&Var0, "JOS3", 8); break;

	case 30: StringCopy(&Var0, "JOS4", 8); break;

	case 31: StringCopy(&Var0, "MAU1", 8); break;

	case 32: StringCopy(&Var0, "MIN1", 8); break;

	case 33: StringCopy(&Var0, "MIN2", 8); break;

	case 34: StringCopy(&Var0, "MIN3", 8); break;

	case 35: StringCopy(&Var0, "MRS1", 8); break;

	case 36: StringCopy(&Var0, "MRS2", 8); break;

	case 37: StringCopy(&Var0, "NI1", 8); break;

	case 38: StringCopy(&Var0, "NI1A", 8); break;

	case 39: StringCopy(&Var0, "NI1B", 8); break;

	case 40: StringCopy(&Var0, "NI1C", 8); break;

	case 41: StringCopy(&Var0, "NI1D", 8); break;

	case 42: StringCopy(&Var0, "NI2", 8); break;

	case 43: StringCopy(&Var0, "NI3", 8); break;

	case 44: StringCopy(&Var0, "OME1", 8); break;

	case 45: StringCopy(&Var0, "OME2", 8); break;

	case 46: StringCopy(&Var0, "PA1", 8); break;

	case 47: StringCopy(&Var0, "PA2", 8); break;

	case 48: StringCopy(&Var0, "PA3", 8); break;

	case 49: StringCopy(&Var0, "PA3A", 8); break;

	case 50: StringCopy(&Var0, "PA3B", 8); break;

	case 51: StringCopy(&Var0, "PA4", 8); break;

	case 52: StringCopy(&Var0, "RAM1", 8); break;

	case 53: StringCopy(&Var0, "RAM2", 8); break;

	case 54: StringCopy(&Var0, "RAM3", 8); break;

	case 55: StringCopy(&Var0, "RAM4", 8); break;

	case 56: StringCopy(&Var0, "RAM5", 8); break;

	case 57: StringCopy(&Var0, "SAS1", 8); break;

	case 58: StringCopy(&Var0, "TON1", 8); break;

	case 59: StringCopy(&Var0, "TON2", 8); break;

	case 60: StringCopy(&Var0, "TON3", 8); break;

	case 61: StringCopy(&Var0, "TON4", 8); break;

	case 62: StringCopy(&Var0, "TON5", 8); break;

	default: break;
	}
	return Var0;
}

//Position - 0x7770
int func_136()
{
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x778D
bool func_137() {
	if (func_140() && !func_136()) {
		return true;
	}
	if (func_139() && func_138()) {
		return true;
	}
	return false;
}

// Position - 0x77BF
bool func_138() { return Global_101418 > 0; }

// Position - 0x77CD
int func_139() {
	if (Global_88746 != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x77E2
int func_140() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x7808
bool func_141() {
	if (Global_101689 == func_64() && gameplay::get_random_event_flag() && Global_101690) {
		return true;
	}
	return false;
}

// Position - 0x7833
bool func_142() {
	if (func_143(func_10()) >= iLocal_512) {
		return true;
	}
	return false;
}

// Position - 0x784E
int func_143(int iParam0) {
	var uVar0;

	switch (iParam0) {
	case 0: stats::stat_get_int(joaat("sp0_total_cash"), &uVar0, -1); return uVar0;

	case 1: stats::stat_get_int(joaat("sp1_total_cash"), &uVar0, -1); return uVar0;

	case 2: stats::stat_get_int(joaat("sp2_total_cash"), &uVar0, -1); return uVar0;

	default:
	}
	return 0;
}

// Position - 0x78A6
bool func_144(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_10();
				if (!func_12(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_152() || Global_100747 ||
						Global_25192 || func_151() || func_17(8, -1) || func_150() || func_149() || func_148() ||
						func_147() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_152() || Global_25192 ||
						func_151() || func_17(8, -1) || func_148() || func_150() || func_149() || func_147() ||
						G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_152() || Global_100747 ||
						Global_25192 || func_151() || func_17(8, -1) || func_148() || func_150() || func_149() ||
						func_147() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5 || LastDispatchedMessageOrCall != -1) {
						return false;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_152() || Global_100747 ||
						Global_25192 || func_151() || func_17(8, -1) || func_150() || func_149() || func_147() ||
						G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 4:
					if (func_152() || player::get_player_wanted_level(player::player_id()) > 0 || func_17(8, -1) ||
						func_147() || func_146() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 5:
					if (func_17(8, -1) || func_150() || func_149() || func_146() || func_145()) {
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
							player::is_player_climbing(player::player_id()) || func_152() || Global_25192 ||
							func_151() || func_17(8, -1) || func_149() || func_148() || func_147() ||
							G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
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
						player::is_player_being_arrested(player::player_id(), 1) || func_152() || func_149() ||
						Global_100747 || Global_25192 || func_151() || Global_36912 || func_17(8, -1) || func_148() ||
						func_146() || func_147() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_152() || Global_100747 ||
						Global_25192 || func_151() || func_17(8, -1) || func_148() || func_146() || func_150() ||
						func_149() || func_147()) {
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

// Position - 0x7FC3
var func_145() { return Global_91530.f_1; }

// Position - 0x7FD1
int func_146() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x7FF7
int func_147() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x8015
int func_148() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x803F
bool func_149() { return Global_91543.f_304 > 0; }

// Position - 0x8050
bool func_150() { return Global_91543.f_303 > 0; }

// Position - 0x8061
var func_151() { return Global_1315233; }

// Position - 0x806D
int func_152() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x8089
bool func_153() {
	if (func_166(iLocal_286)) {
		if (!ped::is_ped_injured(iLocal_286)) {
			if (func_158(iLocal_286)) {
				func_156(iLocal_286, "HIT_WOMAN", 24);
				return true;
			}
			else {
				func_155();
			}
		}
		else {
			return true;
		}
	}
	else {
		return true;
	}
	if (!ped::is_ped_injured(iLocal_285)) {
		if (func_158(iLocal_285) || !ped::is_ped_in_any_vehicle(iLocal_285, 0) ||
			player::is_player_targetting_entity(player::player_id(), iLocal_285) ||
			player::is_player_free_aiming_at_entity(player::player_id(), iLocal_285)) {
			func_154(iLocal_286);
			return true;
		}
	}
	else {
		func_154(iLocal_286);
		return true;
	}
	if (entity::has_entity_been_damaged_by_entity(iLocal_306, player::player_ped_id(), 1)) {
		if (func_166(iLocal_286)) {
			if (!ped::is_ped_injured(iLocal_286)) {
				func_154(iLocal_286);
				func_156(iLocal_286, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_216();
	}
	if (time::get_clock_hours() >= 19 || time::get_clock_hours() <= 6) {
		if (!func_82()) {
			if (func_76(&uLocal_343, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0)) {
				return true;
			}
		}
	}
	if (!entity::is_entity_at_entity(player::player_ped_id(), iLocal_306, 220f, 220f, 30f, 0, 1, 0)) {
		return true;
	}
	return false;
}

// Position - 0x81CE
void func_154(int iParam0) {
	if (func_166(iLocal_286)) {
		if (!ped::is_ped_injured(iLocal_286)) {
			ped::set_blocking_of_non_temporary_events(iParam0, 0);
			ai::clear_ped_tasks(iParam0);
			ai::task_smart_flee_ped(iParam0, player::player_ped_id(), 100f, -1, 0, 0);
			ped::set_ped_keep_task(iParam0, 1);
			func_31();
		}
	}
}

// Position - 0x8215
void func_155() {
	if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_286, 40f, 40f, 5f, 0, 1, 0)) {
		iLocal_313 = gameplay::get_game_timer();
		if (iLocal_313 - iLocal_314 > 10000) {
			if (!func_82()) {
				func_76(&uLocal_343, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_314 = gameplay::get_game_timer();
		}
	}
}

// Position - 0x826F
void func_156(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_157(iParam2), 1);
}

// Position - 0x8286
int func_157(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 0: return "SPEECH_PARAMS_STANDARD";

	case 1: return "SPEECH_PARAMS_ALLOW_REPEAT";

	case 2: return "SPEECH_PARAMS_BEAT";

	case 3: return "SPEECH_PARAMS_FORCE";

	case 4: return "SPEECH_PARAMS_FORCE_FRONTEND";

	case 5: return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";

	case 6: return "SPEECH_PARAMS_FORCE_NORMAL";

	case 7: return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";

	case 8: return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";

	case 9: return "SPEECH_PARAMS_FORCE_SHOUTED";

	case 10: return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";

	case 11: return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";

	case 12: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";

	case 13: return "SPEECH_PARAMS_MEGAPHONE";

	case 14: return "SPEECH_PARAMS_HELI";

	case 15: return "SPEECH_PARAMS_FORCE_MEGAPHONE";

	case 16: return "SPEECH_PARAMS_FORCE_HELI";

	case 17: return "SPEECH_PARAMS_INTERRUPT";

	case 18: return "SPEECH_PARAMS_INTERRUPT_SHOUTED";

	case 19: return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";

	case 20: return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";

	case 21: return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";

	case 22: return "SPEECH_PARAMS_INTERRUPT_FRONTEND";

	case 23: return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";

	case 24: return "SPEECH_PARAMS_ADD_BLIP";

	case 25: return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";

	case 26: return "SPEECH_PARAMS_ADD_BLIP_FORCE";

	case 27: return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";

	case 28: return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";

	case 29: return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";

	case 30: return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";

	case 31: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";

	case 32: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";

	case 33: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";

	case 34: return "SPEECH_PARAMS_SHOUTED";

	case 35: return "SPEECH_PARAMS_SHOUTED_CLEAR";

	case 36: return "SPEECH_PARAMS_SHOUTED_CRITICAL";

	default:
	}
	iVar0 = 0;
	return iVar0;
}

// Position - 0x847B
bool func_158(int iParam0) {
	if (func_159(iParam0, &iLocal_337, &uLocal_334, iLocal_332, bLocal_338, 1077936128, 0) ||
		ped::is_ped_ragdoll(iParam0)) {
		func_154(iParam0);
		return true;
	}
	return false;
}

// Position - 0x84B5
int func_159(int iParam0, int *iParam1, var *uParam2, int iParam3, bool bParam4, float fParam5, int iParam6) {
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	iVar2 = 0;
	if (!entity::is_entity_dead(iParam0, 0) && !bParam4) {
		if (ped::is_ped_on_foot(iParam0)) {
			fVar1 = fParam5;
		}
		else {
			fVar1 = fParam5 + 3f;
		}
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (!entity::is_entity_dead(iParam0, 0) && !bParam4) {
			vVar3 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			vVar6 = {entity::get_entity_coords(iParam0, 1)};
			fVar9 = system::vdist(vVar3, vVar6);
			if (!gameplay::is_bit_set(iParam3, 3)) {
				if (func_165(iParam0, iParam6)) {
					func_164("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_164("	aggroReason = EAggro_Attacked\n");
					*iParam1 = 3;
					func_163(iParam0);
					return 1;
				}
			}
			if (!gameplay::is_bit_set(iParam3, 1)) {
				if (fVar1 < 20f) {
				}
				if (gameplay::is_bullet_in_area(vVar6, fParam5, 1)) {
					func_164("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_164("	aggroReason = EAggro_ShotNear\n");
					*iParam1 = 1;
					func_163(iParam0);
					return 1;
				}
				if (gameplay::is_projectile_in_area(vVar6 - Vector(fParam5 / 2f, fParam5 / 2f, fParam5 / 2f),
													vVar6 + Vector(fParam5 / 2f, fParam5 / 2f, fParam5 / 2f), 0)) {
					func_164("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_164("	aggroReason = EAggro_ShotNear\n");
					*iParam1 = 1;
					func_163(iParam0);
					return 1;
				}
			}
			if (!gameplay::is_bit_set(iParam3, 2)) {
				fVar0 = weapon::_get_lockon_range_of_current_ped_weapon(player::player_ped_id());
				if (fVar0 < 0f) {
					fVar0 = 25f;
				}
				else if (fVar0 > 25f) {
					fVar0 = 25f;
				}
				if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
					if (player::is_player_targetting_entity(player::player_id(), iParam0) ||
						player::is_player_free_aiming_at_entity(player::player_id(), iParam0)) {
						if (fVar9 < fVar0) {
							if (entity::has_entity_clear_los_to_entity(iParam0, player::player_ped_id(), 17)) {
								func_164("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_164("	aggro Ped knows player is pointing "
										 "gun\n");
								func_160("		lockOnTimer = ", *uParam2);
								func_164("\n");
								func_160("		time since not LockedOn = ", gameplay::get_game_timer() - iLocal_43);
								func_164("\n");
								iVar2 = 1;
								if (gameplay::get_game_timer() > iLocal_43 + *uParam2) {
									func_164("			aggroReason = "
											 "EAggro_HostileOrEnemy\n");
									*iParam1 = 2;
									func_163(iParam0);
									return 1;
								}
							}
						}
						else {
							iVar2 = 0;
						}
					}
					else {
						iVar2 = 0;
					}
				}
			}
			if (!gameplay::is_bit_set(iParam3, 0)) {
				if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
					func_164("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_164("			aggroReason = EAggro_Danger\n");
					*iParam1 = 0;
					func_163(iParam0);
					return 1;
				}
			}
		}
	}
	if (!iVar2) {
		iLocal_43 = gameplay::get_game_timer();
	}
	return 0;
}

// Position - 0x8713
void func_160(char *sParam0, int iParam1) {
	func_162(sParam0);
	func_161(iParam1);
}

// Position - 0x8727
void func_161(int iParam0) {
	if (iParam0 > 0) {
	}
}

// Position - 0x8735
void func_162(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, sParam0)) {
	}
}

// Position - 0x8748
void func_163(int iParam0) { audio::stop_current_playing_ambient_speech(iParam0); }

// Position - 0x8756
void func_164(char *sParam0) { func_162(sParam0); }

// Position - 0x8764
bool func_165(int iParam0, int iParam1) {
	if (ped::is_ped_on_foot(player::player_ped_id())) {
		if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
			return true;
		}
	}
	else if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
		if (ped::get_ped_max_health(iParam0) - entity::get_entity_health(iParam0) > iParam1) {
			return true;
		}
	}
	return false;
}

// Position - 0x87B1
bool func_166(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x87D2
void func_167() {
	gameplay::_0x1EAE0A6E978894A2(0, 1);
	gameplay::_0x1EAE0A6E978894A2(1, 1);
	gameplay::_0x1EAE0A6E978894A2(2, 1);
	gameplay::_0x1EAE0A6E978894A2(3, 1);
	gameplay::_0x1EAE0A6E978894A2(4, 1);
	gameplay::_0x1EAE0A6E978894A2(5, 1);
	gameplay::_0x1EAE0A6E978894A2(6, 1);
	gameplay::_0x1EAE0A6E978894A2(7, 1);
	gameplay::_0x1EAE0A6E978894A2(8, 1);
}

// Position - 0x8811
void func_168() {
	player::_0x36F1B38855F2A8DF(player::player_id());
	player::_switch_crime_type(player::player_id(), 5);
	player::_switch_crime_type(player::player_id(), 3);
	player::_switch_crime_type(player::player_id(), 15);
	player::_switch_crime_type(player::player_id(), 2);
	player::_switch_crime_type(player::player_id(), 4);
}

// Position - 0x884F
void func_169() {
	if (iLocal_318) {
		pathfind::_0x07FB139B592FA687(vLocal_320.x, vLocal_320.y, vLocal_323.x, vLocal_323.y);
	}
}

// Position - 0x8872
void func_170() {
	if (gameplay::is_next_weather_type("RAIN") || gameplay::is_next_weather_type("THUNDER")) {
		gameplay::_set_weather_type_over_time("OVERCAST", 10000f);
	}
}

// Position - 0x88A0
void func_171() {
	int iVar0;
	int iVar1;

	if (func_174()) {
		func_216();
	}
	else {
		iVar0 = joaat("a_f_m_bevhills_02");
		iVar1 = joaat("s_m_m_gentransport");
		streaming::request_model(iVar0);
		streaming::request_model(iVar1);
		streaming::request_anim_dict(sLocal_509);
		streaming::request_model(joaat("tourbus"));
		ui::request_additional_text("BUSTOUR", 2);
		if (streaming::has_model_loaded(iVar0) && streaming::has_model_loaded(iVar1) &&
			streaming::has_anim_dict_loaded(sLocal_509) && streaming::has_model_loaded(joaat("tourbus")) &&
			ui::has_additional_text_loaded(2)) {
			audio::register_script_with_audio(0);
			pathfind::get_closest_vehicle_node_with_heading(vLocal_279, &uLocal_282, &uLocal_307, 1, 1077936128, 0);
			iLocal_306 = vehicle::create_vehicle(joaat("tourbus"), Local_263.f_1, Local_263.f_13, 1, 1);
			vehicle::set_vehicle_on_ground_properly(iLocal_306, 1084227584);
			vehicle::set_vehicle_doors_locked(iLocal_306, 3);
			entity::_0xA80AE305E0A3044F(iLocal_306, 0);
			audio::set_veh_radio_station(iLocal_306, "OFF");
			vehicle::set_vehicle_automatically_attaches(iLocal_306, 0, 0);
			vehicle::set_vehicle_extra(iLocal_306, 2, 1);
			vehicle::set_vehicle_model_is_suppressed(joaat("tourbus"), 1);
			vehicle::set_vehicle_lod_multiplier(iLocal_306, 100f);
			iLocal_285 = ped::create_ped_inside_vehicle(iLocal_306, 26, iVar1, -1, 1, 1);
			ped::set_blocking_of_non_temporary_events(iLocal_285, 1);
			ped::set_ped_config_flag(iLocal_285, 251, 1);
			ped::set_ped_stay_in_vehicle_when_jacked(iLocal_285, 1);
			if (entity::does_entity_exist(iLocal_285)) {
				if (!ped::is_ped_injured(iLocal_285)) {
					ped::set_ped_component_variation(iLocal_285, 3, 1, 2, 0);
					ped::set_ped_component_variation(iLocal_285, 4, 0, 2, 0);
				}
			}
			iLocal_286 = ped::create_ped(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, 1, 1);
			audio::set_ambient_voice_name(iLocal_286, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			ped::set_blocking_of_non_temporary_events(iLocal_286, 1);
			ped::set_ped_can_be_targetted(iLocal_286, 0);
			ped::set_ped_component_variation(iLocal_286, 0, 1, 0, 0);
			ped::set_ped_component_variation(iLocal_286, 2, 1, 0, 0);
			ped::set_ped_component_variation(iLocal_286, 3, 0, 0, 0);
			ped::set_ped_component_variation(iLocal_286, 4, 1, 0, 0);
			ai::open_sequence_task(&iLocal_327);
			ai::task_play_anim(0, sLocal_509, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
			ai::task_play_anim(0, sLocal_509, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
			ai::task_play_anim(0, sLocal_509, "IDLE_C", 8f, -8f, -1, 0, 0, 0, 0, 0);
			ai::set_sequence_to_repeat(iLocal_327, 1);
			ai::close_sequence_task(iLocal_327);
			ai::task_perform_sequence(iLocal_286, iLocal_327);
			ai::clear_sequence_task(&iLocal_327);
			func_173(&uLocal_343, 3, iLocal_286, "TOURGUIDE", 0, 1);
			if (!ui::does_blip_exist(iLocal_311)) {
				iLocal_311 = ui::add_blip_for_entity(iLocal_306);
				ui::set_blip_sprite(iLocal_311, 85);
			}
			func_172();
			iLocal_48 = 1;
		}
	}
}

// Position - 0x8B17
void func_172() {
	ped::set_ped_combat_attributes(iLocal_285, 17, 1);
	ped::set_ped_combat_attributes(iLocal_286, 17, 1);
	ped::add_relationship_group("re_bus_tours1", &iLocal_309);
	ped::set_ped_relationship_group_hash(iLocal_285, iLocal_309);
	ped::set_ped_relationship_group_hash(iLocal_286, iLocal_309);
	ped::set_relationship_between_groups(1, iLocal_309, 1862763509);
}

// Position - 0x8B60
void func_173(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&(*uParam0)[iParam1 /*10*/].f_1, sParam3, 24);
	(*uParam0)[iParam1 /*10*/].f_7 = 1;
	(*uParam0)[iParam1 /*10*/].f_8 = iParam4;
	(*uParam0)[iParam1 /*10*/].f_9 = iParam5;
	if (!Global_69702) {
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_8 == 0) {
				ped::set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else {
				ped::set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_9 == 0) {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

// Position - 0x8BFB
bool func_174() {
	if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
		if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_44) < 75f * 75f) {
			return true;
		}
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_136()) {
			return false;
		}
	}
	if (func_137()) {
		return true;
	}
	if (func_130(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x8C81
void func_175() {}

// Position - 0x8C89
void func_176() {}

// Position - 0x8C91
void func_177() {
	struct<15> Var0;
	struct<15> Var15;
	struct<15> Var30;
	struct<15> Var45;
	struct<15> Var60;
	struct<15> Var75;
	struct<15> Var90;
	struct<15> Var105;
	struct<15> Var120;
	struct<15> Var135;
	struct<15> Var150;
	struct<15> Var165;
	struct<15> Var180;

	Var0.f_1 = {-24.85f, 263.6119f, 106.5301f};
	Var0.f_4 = {-62.9588f, 335.2273f, 136.055f};
	Var0.f_7 = 10000;
	Var0.f_8 = 8f - 1f;
	Var0.f_10 = {-0.9281f, 266.8539f, 108.0699f};
	Var0.f_13 = 82f;
	Var0 = "BUSTO_P1";
	Var15.f_1 = {-214.9f, 267.4f, 91.5f};
	Var15.f_4 = {-253.7246f, 247.9038f, 95.2063f};
	Var15.f_7 = 9000;
	Var15.f_8 = 8f - 1f;
	Var15.f_10 = {-188.67f, 265.43f, 92.15f};
	Var15.f_13 = 81.79f;
	Var15 = "BUSTO_P5";
	Var30.f_1 = {-522.1094f, 260.8653f, 82.063f};
	Var30.f_4 = {-549.5739f, 272.7824f, 82.9753f};
	Var30.f_7 = 9000;
	Var30.f_8 = 8f;
	Var30.f_10 = {-435.0476f, 249.8727f, 82.0866f};
	Var30.f_13 = 85f;
	Var30 = "BUSTO_P6";
	Var45.f_1 = {-575.5643f, 512.5427f, 105.0293f};
	Var45.f_4 = {-586.4406f, 529.1188f, 108.8539f};
	Var45.f_7 = 9000;
	Var45.f_8 = 8f + 2f;
	Var45.f_10 = {-552.3732f, 481.7021f, 102.1826f};
	Var45.f_13 = 25f;
	Var45 = "BUSTO_P7";
	Var60.f_1 = {-732.2224f, 474.0897f, 105.0424f};
	Var60.f_4 = {-728.4921f, 448.0321f, 107.9036f};
	Var60.f_7 = 9000;
	Var60.f_8 = 8f + 3f;
	Var60.f_10 = {-688.5469f, 490.5489f, 108.784f};
	Var60.f_13 = 105f;
	Var60 = "BUSTO_P8";
	Var75.f_1 = {-1037.97f, 468.9468f, 76.7167f};
	Var75.f_4 = {-1065.762f, 469.4401f, 80.3204f};
	Var75.f_7 = 9000;
	Var75.f_8 = 8f + 2f;
	Var75.f_10 = {-973.6752f, 499.3758f, 78.8246f};
	Var75.f_13 = 47f;
	Var75 = "BUSTO_P9";
	Var90.f_1 = {-1231.581f, 239.014f, 64.8339f};
	Var90.f_4 = {-1309.778f, 261.4181f, 65.87f};
	Var90.f_7 = 9000;
	Var90.f_8 = 8f + 4f;
	Var90.f_10 = {-1168.448f, 257.0845f, 66.3477f};
	Var90.f_13 = 105f;
	Var90 = "BUSTO_P10";
	Var105.f_1 = {-1406.729f, -160.0764f, 46.5244f};
	Var105.f_4 = {-1421.479f, -193.5715f, 50f};
	Var105.f_7 = 9000;
	Var105.f_8 = 8f + 4f;
	Var105.f_10 = {-1398.391f, -114.7998f, 50.028f};
	Var105.f_13 = 178f;
	Var105 = "BUSTO_P11";
	Var120.f_1 = {-1316.205f, -487.0228f, 32.3407f};
	Var120.f_4 = {-1271.75f, -500.2502f, 44.4638f};
	Var120.f_7 = 9000;
	Var120.f_8 = 15f + 4f;
	Var120.f_10 = {-1356.912f, -437.5389f, 34.0665f};
	Var120.f_13 = 215f;
	Var120 = "BUSTO_P3";
	Var135.f_1 = {-723.1427f, -239.0515f, 36.0196f};
	Var135.f_4 = {-696.7581f, -239.2147f, 40.8147f};
	Var135.f_7 = 9000;
	Var135.f_8 = 15f + 6f;
	Var135.f_10 = {-777.5432f, -262.5703f, 36.0082f};
	Var135.f_13 = 290f;
	Var135 = "BUSTO_P2";
	Var150.f_1 = {-690.7699f, -25.762f, 36.9897f};
	Var150.f_4 = {-695f, 22f, 53f};
	Var150.f_7 = 9000;
	Var150.f_8 = 15f + 5f;
	Var150.f_10 = {-696.695f, -40.7958f, 36.8186f};
	Var150.f_13 = 27.9347f;
	Var150 = "BUSTO_P14";
	Var165.f_1 = {179.6443f, -340.3767f, 43.0448f};
	Var165.f_4 = {235.139f, -393.0182f, 50.0242f};
	Var165.f_7 = 6000;
	Var165.f_8 = 15f + 5f;
	Var165.f_10 = {113.5266f, -317.9667f, 44.6514f};
	Var165.f_13 = 250f;
	Var165 = "BUSTO_P13";
	Var180.f_1 = {288.2845f, 166.6872f, 103.309f};
	Var180.f_4 = {299.9585f, 198.3281f, 113.3522f};
	Var180.f_7 = 6000;
	Var180.f_8 = 15f + 3f;
	Var180.f_10 = {344.1458f, 148.4554f, 102.159f};
	Var180.f_13 = 70f;
	Var180 = "BUSTO_P4";
	Local_263.f_1 = {99.4291f, 246.9366f, 107.2005f};
	Local_263.f_4 = {102.6186f, 254.6904f, 114.0255f};
	Local_263.f_7 = -1;
	Local_263.f_8 = 8f;
	Local_263.f_10 = {177.5471f, 209.657f, 105.0543f};
	Local_263.f_13 = 70f;
	Local_263 = "BUSTO_Px";
	func_178(Var0);
	func_178(Var15);
	func_178(Var30);
	func_178(Var45);
	func_178(Var60);
	func_178(Var75);
	func_178(Var90);
	func_178(Var105);
	func_178(Var120);
	func_178(Var135);
	func_178(Var150);
	func_178(Var165);
	func_178(Var180);
	func_178(Local_263);
	iLocal_278 = 0;
}

// Position - 0x925D
void func_178(char[60] cParam0) {
	Local_52[iLocal_278 /*15*/] = {cParam0};
	iLocal_278++;
}

// Position - 0x927C
void func_179(int iParam0) {
	if (iParam0 == -1) {
		iParam0 = func_64();
	}
	if (iParam0 == -1) {
		return;
	}
	func_181(iParam0);
	gameplay::_0x65D2EBB47E1CEC21(0);
	gameplay::set_random_event_flag(1);
	Global_101686 = 0;
	func_180();
}

// Position - 0x92B2
void func_180() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			vehicle::set_vehicle_model_is_suppressed(
				entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)), 1);
		}
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
	}
}

// Position - 0x92EF
void func_181(int iParam0) { Global_101689 = iParam0; }

// Position - 0x92FD
bool func_182(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;

	if (!Global_138924) {
		return false;
	}
	if (iParam3 == -1) {
		iParam3 = func_64();
	}
	if (iParam3 == -1) {
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32) {
		if (!func_214()) {
			return false;
		}
	}
	vLocal_44 = {vParam0};
	iVar0 = 0;
	if (!iVar0) {
		if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
			vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_136()) {
				return false;
			}
		}
		if (!Global_101700.f_8044) {
			return false;
		}
		if (func_45(0)) {
			return false;
		}
		if (func_137()) {
			return false;
		}
		if (func_213()) {
			return false;
		}
		if (Global_101689 != -1) {
			return false;
		}
		if (func_12(func_10())) {
			if (func_130(100f, 1) != -1) {
				return false;
			}
		}
		if (player::is_player_playing(player::player_id()) && !iParam6) {
			if (vVar1.z - vLocal_44.z > 50f) {
				return false;
			}
		}
		if (!func_212(iParam3)) {
			return false;
		}
		if (func_12(func_10())) {
			if (func_211(func_10()) == 4 || func_211(func_10()) == 5) {
				return false;
			}
		}
		if (func_12(func_10())) {
			if (!func_210(iParam3, iParam4, 145)) {
				return false;
			}
		}
		if (!func_209(Global_101700.f_23954.f_43[iParam3])) {
			return false;
		}
		if (gameplay::get_game_timer() - Global_101691 < 150000) {
			if (iParam3 != 30) {
				return false;
			}
		}
		if (func_208()) {
			return false;
		}
		if (gameplay::get_mission_flag()) {
			return false;
		}
		if (gameplay::get_random_event_flag()) {
			return false;
		}
		if (!func_144(4)) {
			return false;
		}
		if (!func_126(5)) {
			return false;
		}
		if (func_207(iParam3, iParam4) && !iParam5) {
			return false;
		}
		if (Global_3 && iParam3 != 10) {
			return false;
		}
		if (interior::is_valid_interior(interior::get_interior_from_entity(player::player_ped_id()))) {
			if (interior::get_interior_from_entity(player::player_ped_id()) ==
					interior::get_interior_at_coords(377.153f, -717.567f, 10.0536f) ||
				interior::get_interior_from_entity(player::player_ped_id()) ==
					interior::get_interior_at_coords(320.9934f, 265.2515f, 82.1221f) ||
				interior::get_interior_from_entity(player::player_ped_id()) ==
					interior::get_interior_at_coords(-1425.564f, -244.3f, 15.8053f)) {
				return false;
			}
		}
		if (iParam3 == 9 && (iParam4 == 2 || iParam4 == 5) && !func_207(0, 0)) {
			return false;
		}
		if (Global_25336) {
			return false;
		}
		if (func_212(30) && !func_207(30, 0)) {
			if (iParam3 != 30) {
				if (system::vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f) {
					return false;
				}
			}
		}
		if (func_12(func_10())) {
			iVar4 = 0;
			while (iVar4 < 3) {
				vVar5 = {Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_206(iVar8)) {
					if (func_184(iVar4)) {
						if (!func_183(vVar5, 0f, 0f, 0f, 0)) {
							if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 0), vVar5) <
								210f * 210f) {
								if (func_10() != iVar4) {
									return false;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return true;
}

// Position - 0x9697
bool func_183(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x96DE
bool func_184(int iParam0) {
	int iVar0;

	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
	return func_185(iVar0);
}

// Position - 0x96FF
int func_185(int iParam0) { return func_186(iParam0, 1); }

// Position - 0x970E
int func_186(int iParam0, int iParam1) {
	int *iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_206(iParam0)) {
		return 0;
	}
	func_187(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (iVar5 > 0 || iVar4 > 0 || iVar3 > 0 || iVar2 >= iParam1) {
		return 1;
	}
	return 0;
}

// Position - 0x9761
void func_187(int iParam0, int *iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6) {
	func_188(func_199(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x977F
void func_188(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6,
			  int *iParam7) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_198(iParam0, iParam1)) {
		iVar0 = func_197(iParam1);
		iVar1 = func_195(iParam0);
		iVar2 = func_195(iParam0) - func_195(iParam1);
		iVar3 = func_197(iParam0) - func_197(iParam1);
		iVar4 = func_194(iParam0) - func_194(iParam1);
		iVar5 = func_193(iParam0) - func_193(iParam1);
		iVar6 = func_192(iParam0) - func_192(iParam1);
		iVar7 = func_191(iParam0) - func_191(iParam1);
	}
	else {
		iVar0 = func_197(iParam0);
		iVar1 = func_195(iParam1);
		iVar2 = func_195(iParam1) - func_195(iParam0);
		iVar3 = func_197(iParam1) - func_197(iParam0);
		iVar4 = func_194(iParam1) - func_194(iParam0);
		iVar5 = func_193(iParam1) - func_193(iParam0);
		iVar6 = func_192(iParam1) - func_192(iParam0);
		iVar7 = func_191(iParam1) - func_191(iParam0);
	}
	while (iVar7 < 0) {
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59) {
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0) {
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59) {
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0) {
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23) {
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0) {
		while (iVar3 < 0) {
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_190(iVar0, iVar1);
		iVar3--;
		iVar0 = system::round(func_189(system::to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0) {
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12) {
		iVar3 -= 12;
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

// Position - 0x9980
float func_189(float fParam0, float fParam1, float fParam2) {
	float fVar0;

	if (fParam1 == fParam2) {
		return fParam1;
	}
	fVar0 = fParam2 - fParam1;
	fParam0 -= IntToFloat(system::round((fParam0 - fParam1) / fVar0)) * fVar0;
	if (fParam0 < fParam1) {
		fParam0 += fVar0;
	}
	return fParam0;
}

// Position - 0x99C2
int func_190(int iParam0, int iParam1) {
	if (iParam1 < 0) {
		iParam1 = 0;
	}
	switch (iParam0) {
	case 0:
	case 2:
	case 4:
	case 6:
	case 7:
	case 9:
	case 11: return 31;

	case 3:
	case 5:
	case 8:
	case 10: return 30;

	case 1:
		if (iParam1 % 4 == 0) {
			if (iParam1 % 100 != 0) {
				return 29;
			}
			else if (iParam1 % 400 == 0) {
				return 29;
			}
		}
		return 28;
	}
	return 30;
}

// Position - 0x9A64
int func_191(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x9A77
int func_192(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x9A8A
int func_193(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x9A9D
int func_194(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x9AAF
int func_195(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_196(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x9AD4
int func_196(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x9AEB
int func_197(int iParam0) { return iParam0 & 15; }

// Position - 0x9AF8
bool func_198(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_206(iParam1) || !func_206(iParam0)) {
		return true;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_193(iParam0);
	iVar1 = func_193(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_192(iParam0);
	iVar1 = func_192(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_191(iParam0);
	iVar1 = func_191(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	return false;
}

// Position - 0x9C04
int func_199() {
	int *iVar0;

	func_205(&iVar0, time::get_clock_seconds());
	func_204(&iVar0, time::get_clock_minutes());
	func_203(&iVar0, time::get_clock_hours());
	func_202(&iVar0, time::get_clock_day_of_month());
	func_201(&iVar0, time::get_clock_month());
	func_200(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x9C4A
void func_200(int *iParam0, int iParam1) {
	if (iParam1 <= 0) {
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979) {
		return;
	}
	*iParam0 -= (*iParam0 & 2080374784);
	if (iParam1 < 2011) {
		*iParam0 |= system::shift_left(2011 - iParam1, 26);
		*iParam0 |= -2147483648;
	}
	else {
		*iParam0 |= system::shift_left(iParam1 - 2011, 26);
		*iParam0 -= (*iParam0 & -2147483648);
	}
}

// Position - 0x9CD0
void func_201(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x9D03
void func_202(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_197(*uParam0);
	iVar1 = func_195(*uParam0);
	if (iParam1 < 1 || iParam1 > func_190(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x9D54
void func_203(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x9D8E
void func_204(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x9DC9
void func_205(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x9E05
bool func_206(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return false;
	}
	iVar0 = func_191(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return false;
	}
	iVar1 = func_192(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return false;
	}
	iVar2 = func_193(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return false;
	}
	iVar3 = func_195(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return false;
	}
	iVar4 = func_197(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return false;
	}
	iVar5 = func_194(iParam0);
	if (iVar5 < 1 || iVar5 > func_190(iVar4, iVar3)) {
		return false;
	}
	return true;
}

// Position - 0x9EE1
int func_207(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_101700.f_23954.f_8[iParam0], iParam1)) {
		return 1;
	}
	return 0;
}

// Position - 0x9F04
bool func_208() {
	func_9();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
		return true;
	}
	return false;
}

// Position - 0x9F2C
int func_209(int iParam0) { return func_198(func_199(), iParam0); }

// Position - 0x9F3E
int func_210(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_10();
	if (iParam2 != 145 && (iParam2 == 0 || iParam2 == 1 || iParam2 == 2)) {
		iVar1 = iParam2;
	}
	switch (iParam0) {
	case 18:
		if (iVar1 == 2) {
			iVar0 = 1;
		}
		break;

	case 19:
		if (iVar1 != 2) {
			iVar0 = 1;
		}
		break;

	case 20:
		if (iVar1 != 1) {
			iVar0 = 1;
		}
		break;

	case 28:
		if (iVar1 != 2) {
			iVar0 = 1;
		}
		break;

	case 13:
		if (iVar1 == 0) {
			if (iParam1 == 2) {
				iVar0 = 0;
			}
			else {
				iVar0 = 1;
			}
		}
		else {
			iVar0 = 1;
		}
		break;

	case 22:
		if (iParam1 == 2 || iVar1 != 2) {
			iVar0 = 1;
		}
		break;

	case 30:
		if (iVar1 != 2) {
			iVar0 = 1;
		}
		break;

	default: iVar0 = 1; break;
	}
	return iVar0;
}

// Position - 0xA022
int func_211(int iParam0) {
	if (!func_12(iParam0)) {
		return 7;
	}
	return G_SomeGlobalState.MessageCallStates.f_919[iParam0];
}

// Position - 0xA046
int func_212(int iParam0) {
	int iVar0;
	var uVar1;

	if (iParam0 == 31 || iParam0 == 32) {
		if (!func_214()) {
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31) {
		uVar1 = gameplay::is_bit_set(Global_101700.f_23954, iVar0);
	}
	else {
		iVar0 -= 31;
		uVar1 = gameplay::is_bit_set(Global_101700.f_23954.f_1, iVar0);
	}
	return uVar1;
}

// Position - 0xA0A4
bool func_213() {
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

// Position - 0xA0E8
int func_214() {
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

// Position - 0xA1A3
bool func_215() {
	if (time::get_clock_hours() > 19 || time::get_clock_hours() < 6) {
		return false;
	}
	return true;
}

// Position - 0xA1C6
void func_216() {
	int iVar0;

	controls::_0x643ED62D5EA3BEBD();
	gameplay::clear_weather_type_persist();
	if (cam::is_gameplay_hint_active()) {
		cam::stop_gameplay_hint(0);
		cam::set_gameplay_cam_relative_heading(0f);
	}
	if (cam::does_cam_exist(iLocal_329)) {
		cam::set_cam_active(iLocal_329, 0);
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		cam::destroy_cam(iLocal_329, 0);
		gameplay::set_minigame_in_progress(0);
	}
	if (cam::does_cam_exist(iLocal_330)) {
		cam::destroy_cam(iLocal_330, 0);
	}
	if (iLocal_49 >= 2) {
		cam::set_follow_vehicle_cam_zoom_level(iLocal_510);
	}
	ui::display_radar(1);
	if (iLocal_49 >= 1) {
		if (!player::is_player_control_on(player::player_id())) {
			player::set_player_control(player::player_id(), 1, 0);
		}
	}
	if (entity::does_entity_exist(iLocal_285)) {
		if (!ped::is_ped_injured(iLocal_285)) {
			ped::set_ped_config_flag(iLocal_285, 251, 0);
			ped::set_ped_can_be_dragged_out(iLocal_285, 1);
			ped::set_ped_keep_task(iLocal_285, 1);
			ped::set_blocking_of_non_temporary_events(iLocal_285, 0);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_285);
	}
	if (entity::does_entity_exist(iLocal_286)) {
		if (!ped::is_ped_injured(iLocal_286)) {
			ped::set_ped_can_be_targetted(iLocal_286, 1);
			ped::set_ped_keep_task(iLocal_286, 1);
			ped::set_blocking_of_non_temporary_events(iLocal_286, 0);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_286);
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		if (entity::does_entity_exist(uLocal_287[iVar0])) {
			if (func_166(uLocal_287[iVar0])) {
				ped::set_blocking_of_non_temporary_events(uLocal_287[iVar0], 0);
			}
			entity::set_ped_as_no_longer_needed(&uLocal_287[iVar0]);
		}
		iVar0++;
	}
	if (entity::does_entity_exist(iLocal_306)) {
		vehicle::set_vehicle_doors_locked(iLocal_306, 1);
		vehicle::set_vehicle_is_considered_by_player(iLocal_306, 1);
		entity::set_vehicle_as_no_longer_needed(&iLocal_306);
	}
	cam::set_cinematic_button_active(1);
	if (func_141()) {
		func_228();
	}
	else {
		func_227(&Global_25249);
	}
	graphics::_0xEF398BEEE4EF45F9(1);
	func_217(-1);
	system::wait(0);
	script::terminate_this_thread();
}

// Position - 0xA357
void func_217(int iParam0) {
	char cVar0[64];

	if (iParam0 == -1) {
		iParam0 = func_64();
	}
	if (iParam0 == -1) {
		return;
	}
	if (func_141()) {
		func_220(iParam0);
		ui::set_mission_name(0, 0);
		Global_101691 = gameplay::get_game_timer();
		func_219(30000);
		StringCopy(&cVar0, func_218(Global_101689, 1), 64);
		if (func_63(Global_101689) > 0) {
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		stats::_0x71862B1D855F32E1(&cVar0, Global_101686, gameplay::get_game_timer() - Global_101687, 0);
	}
	else if (gameplay::is_bit_set(Global_101696, 0) && Global_101700.f_23954.f_2 < 3) {
		gameplay::clear_bit(&Global_101696, 0);
	}
	func_227(&Global_25249);
	Global_101690 = 0;
	func_181(-1);
}

// Position - 0xA40C
char *func_218(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return "RE_ACCIDENT";

	case 1: return "RE_ATMROBBERY";

	case 2: return "RE_BUSTOUR";

	case 3: return "RE_DOMESTIC";

	case 4: return "RE_GETAWAYDRIVER";

	case 5: return "RE_SHOPROBBERY";

	case 6: return "RE_SNATCHED";

	case 7: return "RE_LURED";

	case 8: return "RE_BIKETHIEFSTAMP";

	case 9: return "RE_SECURITYVAN";

	case 10: return "RE_PAPARAZZI";

	case 11: return "RE_CHASETHIEVES";

	case 12: return "RE_DEALGONEWRONG";

	case 13: return "RE_HITCHLIFT";

	case 14: return "RE_STAG";

	case 15: return "RE_ARREST";

	case 16: return "RE_CRASHRESCUE";

	case 17: return "RE_CARTHEFT";

	case 18: return "RE_CULTSHOOTOUT";

	case 19: return "RE_GANGFIGHT";

	case 20: return "RE_GANGINTIMIDATION";

	case 21: return "RE_PRISONVANBREAK";

	case 22: return "RE_PRISONERLIFT";

	case 23: return "RE_ABANDONEDCAR";

	case 24: return "RE_BURIAL";

	case 25: return "RE_MUGGING";

	case 26: return "RE_BIKETHIEF";

	case 27: return "RE_DRUNKDRIVER";

	case 28: return "RE_HOMELANDSECURITY";

	case 29: return "RE_BORDERPATROL";

	case 30: return "RE_SIMEONYETARIAN";

	case 31: return "RE_DUEL";

	case 32: return "RE_SEAPLANE";

	case 33: return "RE_MONKEYPHOTO";

	case -1: return "RE_NONE";
	}
	if (!iParam1) {
	}
	return "UNKNOWN";
}

// Position - 0xA655
void func_219(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0xA667
void func_220(int iParam0) { func_221(iParam0, 0, func_226(iParam0)); }

// Position - 0xA67C
void func_221(int iParam0, int iParam1, int iParam2) {
	int *iVar0;
	struct<16> Var1;

	iVar0 = func_199();
	func_224(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_223(iParam0, &iVar0);
	Var1 = {func_222(&iVar0)};
}

// Position - 0xA6AB
struct<16> func_222(int *iParam0) {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_193(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_192(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_191(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_194(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_197(*iParam0);
	if (iVar16 < 9) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_195(*iParam0), 64);
	return Var0;
}

//Position - 0xA77B
void func_223(int iParam0, int* iParam1)
{
	Global_101700.f_23954.f_43[iParam0] = *iParam1;
}

// Position - 0xA793
void func_224(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_195(*iParam0);
	iVar1 = func_197(*iParam0);
	iVar2 = func_194(*iParam0);
	iVar3 = func_193(*iParam0);
	iVar4 = func_192(*iParam0);
	iVar5 = func_191(*iParam0);
	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0) {
		return;
	}
	if (iParam1 < 0) {
		return;
	}
	if (iParam2 < 0) {
		return;
	}
	if (iParam3 < 0) {
		return;
	}
	if (iParam4 < 0) {
		return;
	}
	if (iParam5 < 0) {
		return;
	}
	if (iParam6 < 0) {
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60) {
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60) {
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24) {
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_190(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_190(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_225(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0xA915
void func_225(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_205(iParam0, iParam1);
	func_204(iParam0, iParam2);
	func_203(iParam0, iParam3);
	func_201(iParam0, iParam5);
	func_202(iParam0, iParam4);
	func_200(iParam0, iParam6);
}

// Position - 0xA94D
int func_226(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 23: iVar0 = 30; break;

	case 0: iVar0 = 30; break;

	case 15: iVar0 = 30; break;

	case 1: iVar0 = 200; break;

	case 26: iVar0 = 30; break;

	case 8: iVar0 = 30; break;

	case 29: iVar0 = 30; break;

	case 24: iVar0 = 30; break;

	case 2: iVar0 = 0; break;

	case 17: iVar0 = 30; break;

	case 11: iVar0 = 30; break;

	case 16: iVar0 = 30; break;

	case 18: iVar0 = 30; break;

	case 12: iVar0 = 120; break;

	case 3: iVar0 = 60; break;

	case 27: iVar0 = 60; break;

	case 19: iVar0 = 30; break;

	case 20: iVar0 = 30; break;

	case 4: iVar0 = 60; break;

	case 28: iVar0 = 30; break;

	case 13: iVar0 = 35; break;

	case 7: iVar0 = 30; break;

	case 25: iVar0 = 40; break;

	case 10: iVar0 = 30; break;

	case 22: iVar0 = 30; break;

	case 21: iVar0 = 30; break;

	case 5: iVar0 = 30; break;

	case 30: iVar0 = 60; break;

	case 9: iVar0 = 60; break;

	case 6: iVar0 = 40; break;

	case 14: iVar0 = 40; break;
	}
	return iVar0;
}

// Position - 0xAAF0
void func_227(int *iParam0) {
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

// Position - 0xAB2D
void func_228() {
	func_219(30000);
	func_227(&Global_25249);
	Global_25237 = gameplay::get_game_timer();
}
