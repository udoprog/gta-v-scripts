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
float fLocal_46 = 0f;
var uLocal_47 = 0;
int iLocal_48 = 0;
int iLocal_49 = 0;
int iLocal_50 = 0;
vector3 vLocal_51[16] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_100[16] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
vector3 vLocal_117 = {0f, 0f, 0f};
vector3 vLocal_120 = {0f, 0f, 0f};
vector3 vLocal_123 = {0f, 0f, 0f};
vector3 vLocal_126 = {0f, 0f, 0f};
float fLocal_129 = 0f;
vector3 vLocal_130 = {0f, 0f, 0f};
vector3 vLocal_133 = {0f, 0f, 0f};
float fLocal_136 = 0f;
vector3 vLocal_137 = {0f, 0f, 0f};
vector3 vLocal_140 = {0f, 0f, 0f};
float fLocal_143 = 0f;
vector3 vLocal_144 = {0f, 0f, 0f};
vector3 vLocal_147 = {0f, 0f, 0f};
float fLocal_150 = 0f;
vector3 vLocal_151 = {0f, 0f, 0f};
vector3 vLocal_154 = {0f, 0f, 0f};
float fLocal_157 = 0f;
vector3 vLocal_158 = {0f, 0f, 0f};
vector3 vLocal_161 = {0f, 0f, 0f};
float fLocal_164 = 0f;
vector3 vLocal_165 = {0f, 0f, 0f};
vector3 vLocal_168 = {0f, 0f, 0f};
float fLocal_171 = 0f;
bool bLocal_172 = 0;
int iLocal_173 = 0;
int iLocal_174 = 0;
int iLocal_175 = 0;
int iLocal_176 = 0;
bool bLocal_177 = 0;
int iLocal_178 = 0;
int iLocal_179 = 0;
int iLocal_180 = 0;
int iLocal_181 = 0;
float fLocal_182 = 0f;
float fLocal_183 = 0f;
float fLocal_184 = 0f;
float fLocal_185 = 0f;
var uLocal_186 = 0;
int iLocal_187 = 0;
int iLocal_188 = 0;
int iLocal_189 = 0;
int iLocal_190 = 0;
int iLocal_191 = 0;
int iLocal_192 = 0;
var uLocal_193[2] = {0, 0};
int iLocal_196[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_213 = 0;
int iLocal_214 = 0;
int iLocal_215 = 0;
var uLocal_216[4] = {0, 0, 0, 0};
int iLocal_221[6] = {0, 0, 0, 0, 0, 0};
int iLocal_228 = 0;
int iLocal_229[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_246 = 0;
int iLocal_247 = 0;
int iLocal_248 = 0;
int iLocal_249 = 0;
var uLocal_250 = 0;
var uLocal_251 = 0;
var uLocal_252 = 0;
var uLocal_253 = 0;
int *iLocal_254 = NULL;
var uLocal_255 = 0;
var uLocal_256 = 0;
var uLocal_257 = 0;
var uLocal_258 = 0;
var uLocal_259 = 0;
int *iLocal_260 = NULL;
var uLocal_261 = 0;
var uLocal_262 = 0;
var uLocal_263 = 0;
var uLocal_264 = 0;
var uLocal_265 = 0;
var uLocal_266 = 0;
var uLocal_267 = 0;
var uLocal_268 = 0;
var uLocal_269 = 0;
var uLocal_270 = 0;
var uLocal_271 = 0;
var uLocal_272 = 8;
var uLocal_273 = 0;
var uLocal_274 = 0;
var uLocal_275 = 0;
var uLocal_276 = 4;
var uLocal_277 = 0;
var uLocal_278 = 0;
var uLocal_279 = 0;
var uLocal_280 = 0;
var uLocal_281 = 0;
var uLocal_282 = 0;
var uLocal_283 = 0;
var uLocal_284 = 0;
var uLocal_285 = 0;
var uLocal_286 = 0;
var uLocal_287 = 0;
var uLocal_288 = 0;
var uLocal_289 = 0;
var uLocal_290 = 0;
var uLocal_291 = 4;
var uLocal_292 = 0;
var uLocal_293 = 0;
var uLocal_294 = 0;
var uLocal_295 = 0;
var uLocal_296 = 0;
var uLocal_297 = 0;
var uLocal_298 = 0;
var uLocal_299 = 0;
var uLocal_300 = 0;
var uLocal_301 = 0;
var uLocal_302 = 0;
var uLocal_303 = 0;
var uLocal_304 = 0;
var uLocal_305 = 0;
var uLocal_306 = 4;
var uLocal_307 = 0;
var uLocal_308 = 0;
var uLocal_309 = 0;
var uLocal_310 = 0;
var uLocal_311 = 0;
var uLocal_312 = 0;
var uLocal_313 = 0;
var uLocal_314 = 0;
var uLocal_315 = 0;
var uLocal_316 = 0;
var uLocal_317 = 0;
var uLocal_318 = 0;
var uLocal_319 = 0;
var uLocal_320 = 0;
var uLocal_321 = 4;
var uLocal_322 = 0;
var uLocal_323 = 0;
var uLocal_324 = 0;
var uLocal_325 = 0;
var uLocal_326 = 0;
var uLocal_327 = 0;
var uLocal_328 = 0;
var uLocal_329 = 0;
var uLocal_330 = 0;
var uLocal_331 = 0;
var uLocal_332 = 0;
var uLocal_333 = 0;
var uLocal_334 = 0;
var uLocal_335 = 0;
var uLocal_336 = 4;
var uLocal_337 = 0;
var uLocal_338 = 0;
var uLocal_339 = 0;
var uLocal_340 = 0;
var uLocal_341 = 0;
var uLocal_342 = 0;
var uLocal_343 = 0;
var uLocal_344 = 0;
var uLocal_345 = 0;
var uLocal_346 = 0;
var uLocal_347 = 0;
var uLocal_348 = 0;
var uLocal_349 = 0;
var uLocal_350 = 0;
var uLocal_351 = 4;
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
var uLocal_366 = 4;
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
var uLocal_381 = 4;
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
int iLocal_399 = 0;
int iLocal_400 = 0;
char[] cLocal_401[8] = 0;
char *sLocal_402 = NULL;
char *sLocal_403 = NULL;
char *sLocal_404 = NULL;
char *sLocal_405 = NULL;
char *sLocal_406 = NULL;
char *sLocal_407 = NULL;
char *sLocal_408 = NULL;
char *sLocal_409 = NULL;
int iLocal_410 = 0;
var *uLocal_411 = NULL;
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
var uLocal_508 = 0;
var uLocal_509 = 0;
var uLocal_510 = 0;
var uLocal_511 = 0;
var uLocal_512 = 0;
var uLocal_513 = 0;
var uLocal_514 = 0;
var uLocal_515 = 0;
var uLocal_516 = 0;
var uLocal_517 = 0;
var uLocal_518 = 0;
var uLocal_519 = 0;
var uLocal_520 = 0;
var uLocal_521 = 0;
var uLocal_522 = 0;
var uLocal_523 = 0;
var uLocal_524 = 0;
var uLocal_525 = 0;
var uLocal_526 = 0;
var uLocal_527 = 0;
var uLocal_528 = 0;
var uLocal_529 = 0;
var uLocal_530 = 0;
var uLocal_531 = 0;
var uLocal_532 = 0;
var uLocal_533 = 0;
var uLocal_534 = 0;
var uLocal_535 = 0;
var uLocal_536 = 0;
var uLocal_537 = 0;
var uLocal_538 = 0;
var uLocal_539 = 0;
var uLocal_540 = 0;
var uLocal_541 = 0;
var uLocal_542 = 0;
var uLocal_543 = 0;
var uLocal_544 = 0;
var uLocal_545 = 0;
var uLocal_546 = 0;
var uLocal_547 = 0;
var uLocal_548 = 0;
var uLocal_549 = 0;
var uLocal_550 = 0;
var uLocal_551 = 0;
var uLocal_552 = 0;
var uLocal_553 = 0;
var uLocal_554 = 0;
var uLocal_555 = 0;
var uLocal_556 = 0;
var uLocal_557 = 0;
var uLocal_558 = 0;
var uLocal_559 = 0;
var uLocal_560 = 0;
var uLocal_561 = 0;
var uLocal_562 = 0;
var uLocal_563 = 0;
var uLocal_564 = 0;
var uLocal_565 = 0;
var uLocal_566 = 0;
var uLocal_567 = 0;
var uLocal_568 = 0;
var uLocal_569 = 0;
var uLocal_570 = 0;
var uLocal_571 = 0;
var uLocal_572 = 0;
var uLocal_573 = 0;
var uLocal_574 = 0;
var uLocal_575 = 0;
int iLocal_576 = 0;
var uScriptParam_0 = 0;
var uScriptParam_1 = 5;
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
	int iVar0;
	int iVar1;

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
	fLocal_46 = -1f;
	vLocal_117 = {-1109.213f, 4914.744f, 216.101f};
	vLocal_120 = {-1034.6f, 4918.6f, 205.9f};
	vLocal_123 = {-1066.963f, 4873.13f, 207.3281f};
	vLocal_126 = {-1112.946f, 4986.957f, 241.133f};
	fLocal_129 = 72.3125f;
	vLocal_130 = {-1138.386f, 4872.04f, 207.5488f};
	vLocal_133 = {-1091.959f, 4983.27f, 241.1698f};
	fLocal_136 = 57.8125f;
	vLocal_137 = {-1171.648f, 4888.658f, 211.0756f};
	vLocal_140 = {-1137.907f, 4926.572f, 240.999f};
	fLocal_143 = 17.9375f;
	vLocal_144 = {-1177.981f, 4903.231f, 212.477f};
	vLocal_147 = {-1153.398f, 4902.631f, 241.155f};
	fLocal_150 = 17.9375f;
	vLocal_151 = {-1175.693f, 4904.839f, 207.5207f};
	vLocal_154 = {-1142.08f, 4985.32f, 241.2887f};
	fLocal_157 = 36.375f;
	vLocal_158 = {-1106.212f, 4860.086f, 206.1207f};
	vLocal_161 = {-1105.016f, 4873.854f, 241.1453f};
	fLocal_164 = 11.5625f;
	vLocal_165 = {-1044.268f, 4916.587f, 209.8365f};
	vLocal_168 = {-1063.605f, 4972.88f, 241.1299f};
	fLocal_171 = 12.875f;
	iLocal_192 = 4;
	cLocal_401 = "REPLAY_TMG";
	sLocal_402 = "CMN_TDIED";
	if (player::has_force_cleanup_occurred(26)) {
		func_177();
	}
	if (gameplay::_0x9689123E3F213AA5()) {
		script::terminate_this_thread();
	}
	while (true) {
		system::wait(0);
		if (brain::is_world_point_within_brain_activation_range() || iLocal_173) {
			player::set_wanted_level_multiplier(0f);
			switch (iLocal_50) {
			case 0:
				if (!ped::is_ped_injured(player::player_ped_id())) {
					if (Global_101700.f_23954.f_5 >= iLocal_192 && !func_176()) {
						iLocal_50 = 2;
					}
					func_173();
					func_170();
				}
				break;

			case 1:
				player::set_all_random_peds_flee_this_frame(player::player_id());
				if (!ped::is_ped_injured(player::player_ped_id())) {
					if (system::timera() > 2000) {
						if (iLocal_187 == 1) {
							func_169();
						}
						else if (iLocal_187 == 2) {
							func_148();
						}
					}
					if (system::timera() > 1300) {
						if (iLocal_189 < 3) {
							func_147();
						}
						else {
							func_146();
						}
					}
					if (iLocal_174) {
						func_133(26, 1);
						iLocal_174 = 0;
						iLocal_50 = 0;
					}
				}
				break;

			case 2:
				player::set_all_random_peds_flee_this_frame(player::player_id());
				if (!ped::is_ped_injured(player::player_ped_id())) {
					func_108();
				}
				object::_set_door_acceleration_limit(Global_34904[9 /*31*/], 0, 0, 1);
				object::_set_door_acceleration_limit(Global_34904[10 /*31*/], 0, 0, 1);
				break;

			case 4:
				if (!player::is_player_playing(player::player_id())) {
					iLocal_50 = 3;
					break;
				}
				iLocal_175 = 0;
				player::set_wanted_level_multiplier(0f);
				iVar0 = 0;
				while (iVar0 < iLocal_196) {
					if (ped::is_ped_injured(iLocal_196[iVar0])) {
						if (ui::does_blip_exist(iLocal_229[iVar0])) {
							ui::remove_blip(&iLocal_229[iVar0]);
						}
					}
					else {
						if (ai::is_ped_in_writhe(iLocal_196[iVar0])) {
							if (ui::does_blip_exist(iLocal_229[iVar0])) {
								ui::remove_blip(&iLocal_229[iVar0]);
							}
						}
						else if (entity::is_entity_at_entity(iLocal_196[iVar0], player::player_ped_id(), 30f, 30f, 30f,
															 0, 1, 0)) {
							if (!func_107()) {
								if (iLocal_191 < gameplay::get_game_timer()) {
									iVar1 = gameplay::get_random_int_in_range(0, 3);
									if (iVar1 == 0) {
										func_97(&uLocal_411, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
									}
									else if (iVar1 == 1) {
										func_96(&uLocal_411, 1, iLocal_196[iVar0], "ACULTMember1", 0, 1);
										func_97(&uLocal_411, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
									}
									else if (iVar1 == 2) {
										func_96(&uLocal_411, 2, iLocal_196[iVar0], "ACULTMember2", 0, 1);
										func_97(&uLocal_411, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
									}
									iLocal_191 =
										gameplay::get_game_timer() + gameplay::get_random_int_in_range(4500, 6000);
								}
							}
						}
						iLocal_175 = 1;
					}
					iVar0++;
				}
				if (!iLocal_175) {
					func_60();
				}
				break;

			case 3:
				if (!iLocal_173) {
					iLocal_249 = func_59();
					if (!graphics::has_scaleform_movie_loaded(iLocal_249)) {
						break;
					}
					func_58(&iLocal_254, 0);
					iLocal_173 = 1;
				}
				if (func_29(&iLocal_254, &iLocal_260, &iLocal_249, cLocal_401, sLocal_402, &bLocal_172, 78)) {
					iLocal_190 = 0;
					ped::remove_relationship_group(iLocal_410);
					ai::remove_cover_point(iLocal_248);
					iVar0 = 0;
					while (iVar0 < iLocal_196) {
						if (entity::does_entity_exist(iLocal_196[iVar0])) {
							ped::delete_ped(&iLocal_196[iVar0]);
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 < iLocal_221) {
						if (entity::does_entity_exist(iLocal_221[iVar0])) {
							object::delete_object(&iLocal_221[iVar0]);
						}
						iVar0++;
					}
					if (cam::does_cam_exist(iLocal_246)) {
						cam::set_cam_active(iLocal_246, 0);
					}
					if (entity::does_entity_exist(iLocal_215)) {
						object::delete_object(&iLocal_215);
					}
					if (entity::does_entity_exist(iLocal_215)) {
						object::delete_object(&iLocal_215);
					}
					if (bLocal_172) {
						func_9();
						func_3(0);
						func_1(1);
						iLocal_173 = 0;
						iLocal_50 = 2;
					}
					else {
						iLocal_173 = 0;
						func_177();
					}
				}
				break;
			}
		}
		else if (bLocal_177) {
		}
		else {
			func_177();
		}
	}
}

// Position - 0x55E
void func_1(int iParam0) {
	if (iParam0) {
		gameplay::set_fade_in_after_death_arrest(0);
		gameplay::_disable_automatic_respawn(1);
		gameplay::set_fade_out_after_death(0);
		func_2(1);
		Global_87082 = 1;
	}
	else {
		gameplay::set_fade_in_after_death_arrest(1);
		gameplay::_disable_automatic_respawn(0);
		gameplay::set_fade_out_after_death(1);
		func_2(0);
		Global_87082 = 0;
	}
}

// Position - 0x5A0
void func_2(int iParam0) {
	if (Global_35781 == 9 || Global_35781 == 10 || Global_35781 == 5) {
		Global_100351 = iParam0;
		if (iParam0) {
		}
	}
	else {
		if (iParam0) {
		}
		Global_100351 = 0;
	}
}

// Position - 0x5E6
void func_3(int iParam0) {
	if (iParam0) {
		func_8();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&Global_2314, 16);
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

// Position - 0x649
void func_4(int iParam0) {
	if (Global_14604) {
		func_6(0, 0);
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
	if (!func_5()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x6B9
bool func_5() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x6E0
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

// Position - 0x754
bool func_7(int iParam0) {
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

// Position - 0x7AE
void func_8() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

// Position - 0x7D7
void func_9() {
	func_19();
	func_12(0, 1);
	func_10(0, 1);
}

// Position - 0x7EF
void func_10(int iParam0, int iParam1) {
	if (iParam0 == 1) {
		func_12(0, 0);
		graphics::_start_screen_effect("DeathFailOut", 0, 0);
		gameplay::set_bit(&iLocal_48, 1);
		func_11(1, 2, 0);
		cam::_set_cam_effect(2);
	}
	else {
		if (gameplay::is_bit_set(iLocal_48, 1) || iParam1) {
			graphics::_stop_screen_effect("DeathFailOut");
			func_11(0, 2, 1);
			cam::_set_cam_effect(0);
		}
		gameplay::clear_bit(&iLocal_48, 1);
	}
}

// Position - 0x84E
void func_11(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == 1) {
		gameplay::set_bit(&iLocal_48, 2);
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 1) {
				gameplay::set_time_scale(0.2f);
			}
			else {
				gameplay::set_time_scale(0.075f);
			}
		}
	}
	else {
		if (gameplay::is_bit_set(iLocal_48, 2) || iParam2) {
			if (!network::network_is_game_in_progress()) {
				gameplay::set_time_scale(1f);
			}
		}
		gameplay::clear_bit(&iLocal_48, 2);
	}
}

// Position - 0x8AF
void func_12(int iParam0, int iParam1) {
	char *sVar0;

	switch (func_13()) {
	case 0: sVar0 = "DeathFailMichaelIn"; break;

	case 1: sVar0 = "DeathFailFranklinIn"; break;

	case 2: sVar0 = "DeathFailTrevorIn"; break;
	}
	if (iParam0 == 1) {
		if (!gameplay::is_bit_set(iLocal_48, 0) || iParam1) {
			graphics::_start_screen_effect(sVar0, 0, 0);
			gameplay::set_bit(&iLocal_48, 0);
			func_11(1, 1, 0);
			cam::_set_cam_effect(1);
		}
	}
	else {
		if (gameplay::is_bit_set(iLocal_48, 0) || iParam1) {
			graphics::_stop_screen_effect(sVar0);
			func_11(0, 1, 1);
			cam::_set_cam_effect(0);
		}
		gameplay::clear_bit(&iLocal_48, 0);
	}
}

// Position - 0x94C
int func_13() {
	func_14();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x965
void func_14() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_18(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_17(player::player_ped_id());
			if (func_16(iVar0) && (!func_15(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_16(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0xA62
bool func_15(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xA70
bool func_16(int iParam0) { return iParam0 < 3; }

// Position - 0xA7C
int func_17(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_18(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0xAB9
int func_18(int iParam0) {
	if (func_16(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xAE3
void func_19() {
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_20(0, 1, 1, 0);
	func_3(1);
}

// Position - 0xAFE
void func_20(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_28(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_5()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_27(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_28(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_27(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_25(player::player_id()) &&
				!func_22(player::player_id(), 0) && !func_21()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_25(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0xC17
bool func_21() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0xC34
bool func_22(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_23(-1, 0) == 8;
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

// Position - 0xC7F
int func_23(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_24();
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

// Position - 0xCC0
var func_24() { return Global_1312735; }

// Position - 0xCCC
int func_25(int iParam0) {
	if (func_22(iParam0, 0)) {
		return 1;
	}
	if (func_26()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0xD0E
bool func_26() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0xD1F
int func_27(int iParam0, int iParam1, var uParam2, int iParam3) {
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

// Position - 0xD52
void func_28(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}

// Position - 0xD75
bool func_29(int *iParam0, int *iParam1, int iParam2, char *sParam3, char *sParam4, int iParam5, int iParam6) {
	switch (*iParam0) {
	case 0:
		*iParam0 = 1;
		audio::start_audio_scene("DEATH_SCENE");
		audio::play_sound_frontend(-1, "ScreenFlash", "WastedSounds", 1);
		func_57(&iParam0->f_1);
		func_19();
		func_56(iParam1, 0.15f * 0.075f, 0.5f);
		script::set_no_loading_screen(1);
		break;

	case 1:
		if (func_54() || cam::is_screen_faded_out()) {
			*iParam0 = 2;
		}
		if (!func_53(iParam0->f_4, 4)) {
			if (audio::request_script_audio_bank("OFFMISSION_WASTED", 0, -1)) {
				audio::play_sound_frontend(-1, "Bed", "WastedSounds", 1);
				func_51(&iParam0->f_4, 4);
			}
		}
		if (IntToFloat(system::timera()) > 1500f * 0.2f) {
			if (!func_53(iParam0->f_4, 2)) {
				audio::play_sound_frontend(-1, "TextHit", "WastedSounds", 1);
				func_51(&iParam0->f_4, 2);
			}
			func_30(iParam2, iParam1, sParam3, sParam4, iParam5, iParam6 - (4 & iParam6) - (2 & iParam6) | 16, 7, 1,
					1097859072, 0);
		}
		break;

	case 2:
		if (func_30(iParam2, iParam1, sParam3, sParam4, iParam5,
					iParam6 - (8 & iParam6) - (4 & iParam6) - (2 & iParam6), 7, 1, 1097859072, 1)) {
			func_12(0, 1);
			func_10(0, 1);
			func_19();
			if (*iParam5) {
				gameplay::ignore_next_restart(1);
			}
			else if (!iParam0->f_5) {
				func_2(0);
			}
			script::set_no_loading_screen(0);
			gameplay::_disable_automatic_respawn(0);
			*iParam0 = 3;
		}
		break;

	case 3:
		if (player::is_player_playing(player::player_id())) {
			gameplay::set_fade_in_after_death_arrest(1);
			func_12(0, 1);
			func_10(0, 1);
			audio::stop_audio_scene("DEATH_SCENE");
			script::set_no_loading_screen(0);
			return true;
		}
		break;

	case 4: script::set_no_loading_screen(0); return true;
	}
	return false;
}

// Position - 0xF2D
bool func_30(var *uParam0, int *iParam1, char *sParam2, char *sParam3, var *uParam4, int iParam5, int iParam6,
			 int iParam7, float fParam8, int iParam9) {
	switch (*iParam1) {
	case 0:
		if (!cam::is_screen_faded_out() || cam::is_screen_fading_out()) {
			cam::do_screen_fade_out(2500);
			unk1::_0xEB2D525B57F42B40();
		}
		if (iParam9) {
			script::set_no_loading_screen(1);
		}
		gameplay::set_time_scale(0.2f);
		if (func_50(iParam5, 4)) {
			if (audio::request_script_audio_bank("generic_failed", 0, -1)) {
				*iParam1 = 1;
			}
		}
		else {
			*iParam1 = 1;
		}
		break;

	case 1:
		graphics::_push_scaleform_movie_function(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
		graphics::begin_text_command_scaleform_string("STRING");
		ui::_set_notification_color_next(6);
		ui::add_text_component_substring_text_label(sParam2);
		graphics::end_text_command_scaleform_string();
		func_49(sParam3);
		graphics::_push_scaleform_movie_function_parameter_int(100);
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		graphics::_pop_scaleform_movie_function();
		if (func_50(iParam5, 32)) {
			if (!iParam1->f_136) {
				graphics::_push_scaleform_movie_function(*uParam0, "TRANSITION_UP");
				graphics::_push_scaleform_movie_function_parameter_float(iParam1->f_134);
				graphics::_pop_scaleform_movie_function_void();
				iParam1->f_136 = 1;
			}
		}
		if (!func_50(iParam5, 1)) {
			controls::disable_all_control_actions(0);
		}
		func_48(&iParam1->f_10, 0, 1, 1, 1);
		func_47(&iParam1->f_10, "IB_RETRY", 2, 201, 1, 1, 0);
		func_47(&iParam1->f_10, "FE_HLP16", 2, 202, 1, 1, 0);
		if (func_50(iParam5, 4)) {
			audio::play_sound_frontend(-1, "ScreenFlash", "MissionFailedSounds", 1);
		}
		if (func_50(iParam5, 8)) {
			switch (func_13()) {
			case 0: graphics::_start_screen_effect("MinigameEndMichael", 500, 0); break;

			case 1: graphics::_start_screen_effect("MinigameEndFranklin", 500, 0); break;

			case 2: graphics::_start_screen_effect("MinigameEndTrevor", 500, 0); break;
			}
		}
		if (!func_46(&iParam1->f_1)) {
			func_45(&iParam1->f_1);
		}
		if (func_50(iParam5, 2)) {
			if (!func_46(&iParam1->f_4)) {
				func_45(&iParam1->f_4);
			}
		}
		*iParam1 = 2;
		break;

	case 2:
		ui::hide_loading_on_fade_this_frame();
		if (func_50(iParam5, 32)) {
			if (!iParam1->f_136) {
				graphics::_push_scaleform_movie_function(*uParam0, "TRANSITION_UP");
				graphics::_push_scaleform_movie_function_parameter_float(iParam1->f_134);
				graphics::_pop_scaleform_movie_function_void();
				iParam1->f_136 = 1;
			}
		}
		graphics::_set_2d_layer(iParam6);
		func_43(uParam0, 0, 0);
		if (!func_50(iParam5, 16) && (func_41(&iParam1->f_1) >= iParam1->f_135 || cam::is_screen_faded_out())) {
			func_35(&iParam1->f_10, 1128792064, iParam6, iParam7, 1, 1065353216);
			ui::_show_cursor_this_frame();
			if (controls::is_control_just_released(2, 201)) {
				iParam1->f_138 = 1;
				audio::play_sound_frontend(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				if (!func_50(iParam5, 1)) {
					controls::enable_all_control_actions(0);
				}
				func_34(&iParam1->f_10);
				*iParam1 = 3;
				return false;
			}
			else if (controls::is_control_just_released(2, 202)) {
				iParam1->f_138 = 0;
				audio::play_sound_frontend(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				if (!func_50(iParam5, 1)) {
					controls::enable_all_control_actions(0);
				}
				func_34(&iParam1->f_10);
				*iParam1 = 3;
				return false;
			}
		}
		if (func_50(iParam5, 2)) {
			if (func_41(&iParam1->f_4) >= fParam8) {
				iParam1->f_138 = 0;
				audio::play_sound_frontend(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				if (!func_50(iParam5, 1)) {
					controls::enable_all_control_actions(0);
				}
				func_34(&iParam1->f_10);
				*iParam1 = 3;
				return false;
			}
		}
		break;

	case 3:
		func_43(uParam0, 0, 0);
		gameplay::set_time_scale(1f);
		if (iParam1->f_138 || !(gameplay::are_strings_equal("stunt_plane_races", script::get_this_script_name()) ||
								gameplay::are_strings_equal("pilot_school", script::get_this_script_name()) ||
								gameplay::are_strings_equal("bj", script::get_this_script_name()) &&
									ped::is_ped_injured(player::player_ped_id()))) {
			cam::do_screen_fade_in(2500);
		}
		if (func_50(iParam5, 64) && iParam1->f_138) {
			cam::do_screen_fade_out(500);
		}
		func_31(&iParam1->f_4);
		if (iParam9) {
			script::set_no_loading_screen(0);
		}
		*iParam1 = 4;
		break;

	case 4:
		if (func_41(&iParam1->f_4) <= 0.1f) {
			func_43(uParam0, 0, 0);
		}
		else {
			*uParam4 = iParam1->f_138;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x130D
void func_31(var *uParam0) { func_32(uParam0, 0f); }

// Position - 0x131C
void func_32(int *iParam0, float fParam1) {
	uParam0->f_1 = func_33(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x134A
float func_33(bool bParam0) {
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

// Position - 0x13A2
void func_34(int *iParam0) {
	if (*uParam0 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(uParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

// Position - 0x13C5
void func_35(var *uParam0, float fParam1, int iParam2, bool bParam3, int iParam4, float fParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	char *sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;

	if (cam::is_screen_fading_out() || cam::is_screen_fading_in() || cam::is_screen_faded_out() ||
		gameplay::is_frontend_fading()) {
		if (!bParam3) {
			return;
		}
	}
	if (!func_40(uParam0)) {
		return;
	}
	ui::hide_loading_on_fade_this_frame();
	graphics::_set_2d_layer(iParam2);
	if (!func_50(uParam0->f_1, 256) || func_50(uParam0->f_1, 8192) && controls::_0x6CD79468A1E595C6(2)) {
		graphics::_push_scaleform_movie_function(*uParam0, "SET_CLEAR_SPACE");
		graphics::_push_scaleform_movie_function_parameter_float(fParam1);
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(*uParam0, "SET_MAX_WIDTH");
		graphics::_push_scaleform_movie_function_parameter_float(fParam5);
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(*uParam0, "SET_DATA_SLOT_EMPTY");
		graphics::_pop_scaleform_movie_function_void();
		if (gameplay::is_pc_version()) {
			graphics::_push_scaleform_movie_function(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			graphics::_push_scaleform_movie_function_parameter_bool(func_50(uParam0->f_1, 4096));
			graphics::_pop_scaleform_movie_function_void();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123) {
			switch (uParam0->f_2[iVar6 /*15*/].f_2) {
			case 0: bVar4 = true; break;

			case 1: bVar4 = controls::_is_input_disabled(2); break;

			case 2: bVar4 = !controls::_is_input_disabled(2); break;

			default: bVar4 = false; break;
			}
			if (bVar4) {
				if (graphics::_push_scaleform_movie_function(*uParam0, "SET_DATA_SLOT")) {
					graphics::_push_scaleform_movie_function_parameter_int(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14) {
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						iVar2 = gameplay::is_bit_set(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!gameplay::is_bit_set(uParam0->f_2[iVar6 /*15*/].f_12, iVar7)) {
							sVar3 = controls::get_control_instructional_button(iVar0, iVar1, iVar2);
						}
						else {
							sVar3 = controls::_0x80C2FD58D720C801(iVar0, iVar1, iVar2);
						}
						if (!gameplay::is_string_null_or_empty(sVar3)) {
							func_39(sVar3);
						}
						iVar7++;
					}
					if (!gameplay::is_string_null_or_empty(uParam0->f_2[iVar6 /*15*/])) {
						func_49(uParam0->f_2[iVar6 /*15*/]);
					}
					if (gameplay::is_pc_version()) {
						if (func_50(uParam0->f_1, 4096)) {
							if (uParam0->f_2[iVar6 /*15*/].f_1) {
								graphics::_push_scaleform_movie_function_parameter_bool(1);
								graphics::_push_scaleform_movie_function_parameter_int(
									uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else {
								graphics::_push_scaleform_movie_function_parameter_bool(0);
								graphics::_push_scaleform_movie_function_parameter_int(-1);
							}
						}
					}
					graphics::_pop_scaleform_movie_function_void();
				}
			}
			iVar6++;
		}
		fVar8 = func_38(iParam4, func_38(func_50(uParam0->f_1, 32), 1f, 0f), -1f);
		graphics::_push_scaleform_movie_function(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		graphics::_push_scaleform_movie_function_parameter_float(fVar8);
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(*uParam0, "SET_BACKGROUND_COLOUR");
		graphics::_push_scaleform_movie_function_parameter_float(0f);
		graphics::_push_scaleform_movie_function_parameter_float(0f);
		graphics::_push_scaleform_movie_function_parameter_float(0f);
		graphics::_push_scaleform_movie_function_parameter_float(80f);
		graphics::_pop_scaleform_movie_function_void();
		func_37(&uParam0->f_1, 256);
		func_36(&uParam0->f_1, 128);
	}
	graphics::draw_scaleform_movie_fullscreen(*uParam0, 255, 255, 255, 0, 0);
}

// Position - 0x1685
void func_36(int *iParam0, int iParam1) { *iParam0 -= (*iParam0 & iParam1); }

// Position - 0x169A
void func_37(var *uParam0, int iParam1) { *uParam0 |= iParam1; }

// Position - 0x16AB
float func_38(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x16C2
void func_39(char *sParam0) { graphics::_0xE83A3E3557A56640(sParam0); }

// Position - 0x16D0
int func_40(var *uParam0) {
	if (*uParam0 != 0) {
		if (graphics::has_scaleform_movie_loaded(*uParam0)) {
			func_37(&uParam0->f_1, 1);
			return 1;
		}
	}
	return 0;
}

// Position - 0x16F7
float func_41(var *uParam0) {
	if (func_46(uParam0)) {
		if (func_42(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_33(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x1736
bool func_42(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x1746
int func_43(var *uParam0, int iParam1, int iParam2) {
	if (!func_46(&uParam0->f_2)) {
		func_31(&uParam0->f_2);
	}
	ui::hide_hud_component_this_frame(14);
	if (!iParam2) {
		graphics::draw_scaleform_movie_fullscreen(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (iParam2) {
		graphics::draw_scaleform_movie_fullscreen(*uParam0, 255, 255, 255, 255, 0);
	}
	if (iParam1) {
		if (controls::is_control_pressed(2, 201)) {
			return 0;
		}
	}
	if (uParam0->f_1 == -1) {
		return 1;
	}
	if (func_41(&uParam0->f_2) * 1000f > system::to_float(uParam0->f_1)) {
		func_44(&uParam0->f_2);
		return 0;
	}
	return 1;
}

// Position - 0x17D8
void func_44(int *iParam0) {
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

// Position - 0x17EE
void func_45(var *uParam0) {
	if (!func_46(uParam0)) {
		func_31(uParam0);
	}
}

// Position - 0x1806
bool func_46(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x1816
int func_47(var *uParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;

	if (*uParam0 == 0) {
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1) {
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8) {
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1) {
			gameplay::set_bit(&uParam0->f_2[iVar1 /*15*/].f_13, 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

// Position - 0x18DF
void func_48(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (*uParam0 == 0) {
		*uParam0 = graphics::request_scaleform_movie_instance("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (iParam1) {
		func_37(&uParam0->f_1, 32);
	}
	if (graphics::has_scaleform_movie_loaded(*uParam0)) {
		func_37(&uParam0->f_1, 1);
		if (iParam2) {
			graphics::set_scaleform_movie_to_use_system_time(*uParam0, 1);
		}
	}
	if (gameplay::is_pc_version()) {
		if (iParam3) {
			func_37(&uParam0->f_1, 4096);
		}
	}
	if (iParam4) {
		func_37(&uParam0->f_1, 8192);
	}
}

// Position - 0x1959
void func_49(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x196B
bool func_50(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0x197A
void func_51(var *uParam0, int iParam1) { func_52(uParam0, iParam1); }

// Position - 0x198A
void func_52(var *uParam0, var uParam1) { *uParam0 |= uParam1; }

// Position - 0x199B
bool func_53(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0x19AA
int func_54() {
	if (!gameplay::is_bit_set(iLocal_48, 0) && !gameplay::is_bit_set(iLocal_48, 1)) {
		system::settimera(0);
		func_12(1, 0);
	}
	if (!cutscene::is_cutscene_playing()) {
		ui::clear_prints();
	}
	controls::disable_control_action(2, 199, 1);
	controls::disable_control_action(0, 59, 1);
	controls::disable_control_action(0, 60, 1);
	controls::disable_control_action(0, 37, 1);
	controls::disable_control_action(0, 25, 1);
	ped::_0x5A7F62FDA59759BD();
	if (IntToFloat(system::timera()) > 1500f * 0.2f) {
		if (!gameplay::is_bit_set(iLocal_48, 1)) {
			func_10(1, 0);
			system::settimerb(0);
		}
		else if (IntToFloat(system::timerb()) > 1500f * 0.075f || cam::is_screen_faded_out()) {
			if (!cam::is_screen_faded_out()) {
				if (!cam::is_screen_fading_out()) {
					cam::do_screen_fade_out(1500);
				}
			}
			else if (iLocal_49 == 0) {
				iLocal_49 = gameplay::get_game_timer() + 1000;
				if (player::is_player_playing(player::player_id())) {
					player::set_player_control(player::player_id(), 0, 0);
				}
				func_11(0, 2, 1);
				func_20(1, 1, 1, 0);
				func_3(1);
				ui::set_frontend_active(0);
				ui::set_pause_menu_active(0);
				ui::clear_help(1);
				ui::clear_prints();
				if (player::is_player_playing(player::player_id())) {
					player::set_player_control(player::player_id(), 0, 0);
				}
				func_12(0, 0);
				func_55(0);
			}
			else if (gameplay::get_game_timer() < iLocal_49) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x1AEE
void func_55(int iParam0) {
	int iVar0;

	iVar0 = 0;
	if (iVar0 == 0) {
		if (iParam0 == 1) {
			if (!gameplay::is_bit_set(iLocal_48, 3)) {
				gameplay::set_game_paused(1);
				gameplay::set_bit(&iLocal_48, 3);
			}
		}
		else if (gameplay::is_bit_set(iLocal_48, 3)) {
			gameplay::set_game_paused(0);
			gameplay::clear_bit(&iLocal_48, 3);
		}
	}
}

// Position - 0x1B35
void func_56(int *iParam0, float fParam1, float fParam2) {
	if (func_46(&iParam0->f_1)) {
		func_44(&iParam0->f_1);
	}
	if (func_46(&iParam0->f_4)) {
		func_44(&iParam0->f_4);
	}
	func_34(&iParam0->f_10);
	iParam0->f_134 = fParam1;
	iParam0->f_135 = fParam2;
	iParam0->f_137 = 1;
	iParam0->f_136 = 0;
	*iParam0 = 0;
}

// Position - 0x1B85
void func_57(var *uParam0) {
	if (!func_46(uParam0)) {
		func_45(uParam0);
	}
	else {
		func_31(uParam0);
	}
}

// Position - 0x1BA6
void func_58(var *uParam0, int iParam1) {
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	audio::request_script_audio_bank("OFFMISSION_WASTED", 0, -1);
}

// Position - 0x1BC7
var func_59() { return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE"); }

// Position - 0x1BD7
void func_60() {
	if (!iLocal_176) {
		audio::set_static_emitter_enabled("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_101700.f_23954.f_5 = 1000;
		audio::unlock_mission_news_story(64);
		Global_101700.f_19523.f_472 = 54;
		iLocal_399 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
		func_95(1);
		while (!graphics::has_scaleform_movie_loaded(iLocal_399)) {
			system::wait(0);
		}
		graphics::_push_scaleform_movie_function(iLocal_399, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_49("CULT_PASS");
		graphics::_pop_scaleform_movie_function();
		while (!func_94()) {
			system::wait(0);
		}
		func_93();
		system::settimera(0);
		audio::play_sound_frontend(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_176 = 1;
	}
	graphics::draw_scaleform_movie_fullscreen(iLocal_399, 255, 255, 255, 255, 0);
	if (!iLocal_178) {
		if (system::timera() > 9500) {
			graphics::_push_scaleform_movie_function(iLocal_399, "SHARD_ANIM_OUT");
			graphics::_push_scaleform_movie_function_parameter_int(1);
			graphics::_push_scaleform_movie_function_parameter_float(0.33f);
			graphics::_pop_scaleform_movie_function_void();
			iLocal_178 = 1;
		}
	}
	if (system::timera() > 10000) {
		if (graphics::has_scaleform_movie_loaded(iLocal_399)) {
			graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_399);
			func_95(0);
		}
		while (gameplay::get_distance_between_coords(func_92(player::player_id()), vLocal_117, 1) < 209f &&
			   !ped::is_ped_injured(player::player_ped_id())) {
			system::wait(0);
		}
		func_61(18);
		func_177();
	}
}

// Position - 0x1D0B
void func_61(int iParam0) {
	char cVar0[64];

	if (iParam0 == -1) {
		iParam0 = func_90();
	}
	if (iParam0 == -1) {
		return;
	}
	if (func_89()) {
		func_67(iParam0);
		ui::set_mission_name(0, 0);
		Global_101691 = gameplay::get_game_timer();
		func_66(30000);
		StringCopy(&cVar0, func_65(Global_101689, 1), 64);
		if (func_64(Global_101689) > 0) {
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		stats::_0x71862B1D855F32E1(&cVar0, Global_101686, gameplay::get_game_timer() - Global_101687, 0);
	}
	else if (gameplay::is_bit_set(Global_101696, 0) && Global_101700.f_23954.f_2 < 3) {
		gameplay::clear_bit(&Global_101696, 0);
	}
	func_63(&Global_25249);
	Global_101690 = 0;
	func_62(-1);
}

// Position - 0x1DC0
void func_62(int iParam0) { Global_101689 = iParam0; }

// Position - 0x1DCE
void func_63(int *iParam0) {
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

// Position - 0x1E0B
int func_64(int iParam0) {
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

// Position - 0x1EBC
char *func_65(int iParam0, int iParam1) {
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

// Position - 0x2105
void func_66(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0x2117
void func_67(int iParam0) { func_68(iParam0, 0, func_88(iParam0)); }

// Position - 0x212C
void func_68(int iParam0, int iParam1, int iParam2) {
	int *iVar0;
	struct<16> Var1;

	iVar0 = func_87();
	func_78(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_77(iParam0, &iVar0);
	Var1 = {func_69(&iVar0)};
}

// Position - 0x215B
struct<16> func_69(int *iParam0) {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_76(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_75(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_74(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_73(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_72(*iParam0);
	if (iVar16 < 9) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_70(*iParam0), 64);
	return Var0;
}

//Position - 0x222C
int func_70(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31) * func_71(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x2251
int func_71(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x2268
int func_72(var uParam0) { return uParam0 & 15; }

// Position - 0x2275
int func_73(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x2287
int func_74(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x229A
int func_75(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x22AD
int func_76(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x22C0
void func_77(int iParam0, int *iParam1) { Global_101700.f_23954.f_43[iParam0] = *iParam1; }

// Position - 0x22D8
void func_78(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_70(*iParam0);
	iVar1 = func_72(*iParam0);
	iVar2 = func_73(*iParam0);
	iVar3 = func_76(*iParam0);
	iVar4 = func_75(*iParam0);
	iVar5 = func_74(*iParam0);
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
	iVar6 = func_86(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_86(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_79(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0x245A
void func_79(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_85(iParam0, iParam1);
	func_84(iParam0, iParam2);
	func_83(iParam0, iParam3);
	func_82(iParam0, iParam5);
	func_81(iParam0, iParam4);
	func_80(iParam0, iParam6);
}

// Position - 0x2492
void func_80(int *iParam0, int iParam1) {
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

// Position - 0x2518
void func_81(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_72(*uParam0);
	iVar1 = func_70(*uParam0);
	if (iParam1 < 1 || iParam1 > func_86(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x2569
void func_82(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x259C
void func_83(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x25D6
void func_84(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x2611
void func_85(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x264D
int func_86(int iParam0, int iParam1) {
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

// Position - 0x26EF
var func_87() {
	int *iVar0;

	func_85(&iVar0, time::get_clock_seconds());
	func_84(&iVar0, time::get_clock_minutes());
	func_83(&iVar0, time::get_clock_hours());
	func_81(&iVar0, time::get_clock_day_of_month());
	func_82(&iVar0, time::get_clock_month());
	func_80(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x2735
int func_88(int iParam0) {
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

// Position - 0x28D8
bool func_89() {
	if (Global_101689 == func_90() && gameplay::get_random_event_flag() && Global_101690) {
		return true;
	}
	return false;
}

// Position - 0x2903
int func_90() {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, script::get_this_script_name(), 64);
	iVar16 = func_91(Var0);
	return iVar16;
}

// Position - 0x2920
int func_91(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5,
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

// Position - 0x2AFA
Vector3 func_92(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0x2B0D
void func_93() {
	Global_25424 = 0;
	Global_25425 = 0;
	Global_25427 = 0;
	Global_25428 = 0;
	Global_25429 = 0;
}

// Position - 0x2B29
int func_94() { return 1; }

// Position - 0x2B32
void func_95(int iParam0) {
	Global_69962 = iParam0;
	Global_69963 = iParam0;
}

// Position - 0x2B46
void func_96(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x2BE1
int func_97(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_106(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_98(sParam2, iParam3, 0);
}

// Position - 0x2C2F
int func_98(char *sParam0, int iParam1, int iParam2) {
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
					func_105();
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
		if (func_104(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_103();
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
			gameplay::clear_bit(&Global_2313, 20);
			gameplay::clear_bit(&Global_2314, 17);
			gameplay::clear_bit(&Global_2315, 0);
			if (iParam2) {
				func_102();
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
				if (func_101()) {
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
			if (func_5()) {
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
				if (gameplay::is_bit_set(Global_2313, 9)) {
					return 0;
				}
			}
			func_100();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_99();
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
		func_105();
	}
	return 0;
}

// Position - 0x2EFB
void func_99() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x2F2D
void func_100() {
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
	gameplay::clear_bit(&Global_2314, 16);
}

// Position - 0x2FC2
bool func_101() {
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

// Position - 0x305B
void func_102() {
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
		Global_14443 = func_13();
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

// Position - 0x30FD
void func_103() {
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

// Position - 0x3155
bool func_104(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x3190
void func_105() {
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

// Position - 0x31E7
void func_106(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, var uParam5) {
	Global_15199 = {*uParam0};
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
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

// Position - 0x323D
int func_107() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0x325F
void func_108() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	switch (iLocal_190) {
	case 0:
		gameplay::_set_weather_type_over_time("THUNDER", 20f);
		if (!cutscene::is_cutscene_active()) {
			cutscene::request_cutscene("ac_ig_3_p3_b", 8);
		}
		streaming::request_model(joaat("a_m_o_acult_02"));
		streaming::request_model(joaat("a_m_y_acult_02"));
		streaming::request_model(-2022916910);
		streaming::request_model(-1322183878);
		streaming::request_model(joaat("prop_box_wood05a"));
		streaming::request_model(joaat("prop_security_case_01"));
		while (!func_132() || !streaming::has_model_loaded(joaat("a_m_o_acult_02")) ||
			   !streaming::has_model_loaded(joaat("a_m_y_acult_02")) || !streaming::has_model_loaded(-2022916910) ||
			   !streaming::has_model_loaded(-1322183878) || !streaming::has_model_loaded(joaat("prop_box_wood05a")) ||
			   !streaming::has_model_loaded(joaat("prop_security_case_01"))) {
			system::wait(0);
		}
		iLocal_576 = func_128(player::player_ped_id(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
		if (entity::does_entity_exist(iLocal_576)) {
			cutscene::register_entity_for_cutscene(iLocal_576, "Trevors_weapon", 0, 0, 0);
		}
		cutscene::register_entity_for_cutscene(
			0, "Rifle_Mag1^1", 3, weapon::get_weapon_component_type_model(joaat("component_assaultrifle_clip_01")), 0);
		if (func_132() && !ped::is_ped_injured(player::player_ped_id())) {
			cutscene::register_entity_for_cutscene(player::player_ped_id(), "TREVOR", 0, 0, 0);
			cutscene::register_entity_for_cutscene(iLocal_196[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
			cutscene::register_entity_for_cutscene(iLocal_196[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
			cutscene::register_entity_for_cutscene(iLocal_196[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
			cutscene::register_entity_for_cutscene(iLocal_196[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
			cutscene::register_entity_for_cutscene(iLocal_196[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
			cutscene::start_cutscene(0);
		}
		system::wait(0);
		if (!bLocal_172 && Global_101700.f_23954.f_5 != 1000) {
			func_127();
		}
		if (entity::does_entity_exist(iLocal_196[0])) {
			ped::delete_ped(&iLocal_196[0]);
		}
		if (entity::does_entity_exist(iLocal_196[1])) {
			ped::delete_ped(&iLocal_196[1]);
		}
		if (cam::does_cam_exist(iLocal_246)) {
			cam::set_cam_active(iLocal_246, 0);
		}
		if (entity::does_entity_exist(iLocal_215)) {
			object::delete_object(&iLocal_215);
		}
		if (entity::does_entity_exist(iLocal_215)) {
			object::delete_object(&iLocal_215);
		}
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		if (ui::does_blip_exist(iLocal_228)) {
			ui::remove_blip(&iLocal_228);
		}
		func_20(1, 1, 1, 0);
		player::set_player_control(player::player_id(), 0, 0);
		ui::clear_help(1);
		ui::display_hud(0);
		ui::display_radar(0);
		if (!ped::is_ped_injured(player::player_ped_id())) {
			weapon::hide_ped_weapon_for_scripted_cutscene(player::player_ped_id(), 1);
		}
		gameplay::clear_area(vLocal_117, 100f, 1, 0, 0, 0);
		ped::add_scenario_blocking_area(vLocal_117 - Vector(100f, 60f, 80f), vLocal_117 + Vector(100f, 60f, 80f), 0, 1,
										1, 1);
		player::set_wanted_level_multiplier(0f);
		gameplay::enable_dispatch_service(3, 0);
		gameplay::enable_dispatch_service(5, 0);
		iLocal_248 = ai::add_cover_point(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
		streaming::request_model(joaat("a_m_o_acult_01"));
		while (!streaming::has_model_loaded(joaat("a_m_o_acult_01"))) {
			system::wait(0);
		}
		iLocal_190 = 6;
		break;

	case 1: break;

	case 2: break;

	case 3: break;

	case 4: break;

	case 6:
		if (cutscene::can_set_exit_state_for_camera(0)) {
			if (cutscene::can_set_exit_state_for_registered_entity("CULT_MASTER", 0)) {
				if (!entity::does_entity_exist(iLocal_196[11])) {
					iLocal_196[11] = entity::get_ped_index_from_entity_index(
						cutscene::get_entity_index_of_registered_entity("CULT_MASTER", 0));
				}
			}
			if (cutscene::can_set_exit_state_for_registered_entity("REAR_CULT", 0)) {
				if (!entity::does_entity_exist(iLocal_196[12])) {
					iLocal_196[12] = entity::get_ped_index_from_entity_index(
						cutscene::get_entity_index_of_registered_entity("REAR_CULT", 0));
				}
			}
			if (cutscene::can_set_exit_state_for_registered_entity("LEFT_OLD_CULT", 0)) {
				if (!entity::does_entity_exist(iLocal_196[13])) {
					iLocal_196[13] = entity::get_ped_index_from_entity_index(
						cutscene::get_entity_index_of_registered_entity("LEFT_OLD_CULT", 0));
				}
			}
			if (cutscene::can_set_exit_state_for_registered_entity("CARBINE_CULT", 0)) {
				if (!entity::does_entity_exist(iLocal_196[14])) {
					iLocal_196[14] = entity::get_ped_index_from_entity_index(
						cutscene::get_entity_index_of_registered_entity("CARBINE_CULT", 0));
				}
			}
			if (cutscene::can_set_exit_state_for_registered_entity("SHOTGUN_CULT", 0)) {
				if (!entity::does_entity_exist(iLocal_196[15])) {
					iLocal_196[15] = entity::get_ped_index_from_entity_index(
						cutscene::get_entity_index_of_registered_entity("SHOTGUN_CULT", 0));
				}
			}
			if (cutscene::can_set_exit_state_for_registered_entity("TREVOR", 0)) {
				weapon::hide_ped_weapon_for_scripted_cutscene(player::player_ped_id(), 0);
				entity::set_entity_coords(player::player_ped_id(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
				entity::set_entity_heading(player::player_ped_id(), 188.9369f);
				ai::task_put_ped_directly_into_cover(player::player_ped_id(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f,
													 1, 0, iLocal_248, 0);
				ped::_0x2208438012482A1A(player::player_ped_id(), 1, 0);
			}
			if (cutscene::can_set_exit_state_for_registered_entity("Trevors_weapon", 0)) {
				weapon::give_weapon_object_to_ped(iLocal_576, player::player_ped_id());
			}
			cam::set_gameplay_cam_relative_heading(91.3878f);
			cam::set_gameplay_cam_relative_pitch(4.4337f, 1065353216);
			func_20(0, 1, 1, 0);
			player::set_player_control(player::player_id(), 1, 0);
			ui::display_hud(1);
			ui::display_radar(1);
			vLocal_51[0 /*3*/] = {-1044.632f, 4918.149f, 211.3315f};
			fLocal_100[0] = 254.8275f;
			vLocal_51[1 /*3*/] = {-1054.92f, 4915.155f, 210.8241f};
			fLocal_100[1] = 270.2025f;
			vLocal_51[2 /*3*/] = {-1051.859f, 4903.902f, 209.6199f};
			fLocal_100[2] = 299.8404f;
			vLocal_51[3 /*3*/] = {-1068.246f, 4899.532f, 213.2755f};
			fLocal_100[3] = 298.4257f;
			vLocal_51[4 /*3*/] = {-1083.322f, 4899.532f, 213.2755f};
			fLocal_100[4] = 283.5311f;
			vLocal_51[5 /*3*/] = {-1084.058f, 4933.805f, 228.2246f};
			fLocal_100[5] = 87.5233f;
			vLocal_51[6 /*3*/] = {-1081.976f, 4937.339f, 232.3275f};
			fLocal_100[6] = 109.6546f;
			vLocal_51[7 /*3*/] = {-1092.075f, 4939.958f, 217.3385f};
			fLocal_100[7] = 210.2433f;
			vLocal_51[8 /*3*/] = {-1101.798f, 4930.33f, 217.3544f};
			fLocal_100[8] = 203.732f;
			vLocal_51[9 /*3*/] = {-1070.675f, 4869.301f, 220.2917f};
			fLocal_100[9] = 39.1109f;
			vLocal_51[10 /*3*/] = {-1115.703f, 4878.439f, 225.8085f};
			fLocal_100[10] = 25.8472f;
			ped::add_relationship_group("rghCult", &iLocal_410);
			iVar1 = 0;
			while (iVar1 < iLocal_196) {
				if (iVar1 == 0 || iVar1 == 5 || iVar1 == 6 || iVar1 == 10) {
					iLocal_196[iVar1] =
						ped::create_ped(26, joaat("a_m_o_acult_01"), vLocal_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
					ped::set_ped_random_component_variation(iLocal_196[iVar1], 0);
					weapon::give_weapon_to_ped(iLocal_196[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
					ped::set_ped_combat_movement(iLocal_196[iVar1], 0);
					ped::set_ped_combat_ability(iLocal_196[iVar1], 2);
					ped::set_ped_to_inform_respected_friends(iLocal_196[iVar1], 50f, 20);
					ped::set_ped_accuracy(iLocal_196[iVar1], 5);
					ped::set_ped_hearing_range(iLocal_196[iVar1], 100f);
					ped::set_ped_seeing_range(iLocal_196[iVar1], 100f);
					entity::set_entity_health(iLocal_196[iVar1], 150);
					ped::set_ped_shoot_rate(iLocal_196[iVar1], gameplay::get_random_int_in_range(40, 60));
					ai::task_combat_ped(iLocal_196[iVar1], player::player_ped_id(), 0, 16);
				}
				else if (iVar1 == 2) {
					iLocal_196[iVar1] =
						ped::create_ped(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
					ped::set_ped_random_component_variation(iLocal_196[iVar1], 0);
					weapon::give_weapon_to_ped(iLocal_196[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
					ped::set_ped_combat_attributes(iLocal_196[iVar1], 50, 1);
					ped::set_ped_combat_movement(iLocal_196[iVar1], 2);
					ped::set_ped_combat_ability(iLocal_196[iVar1], 1);
					ped::set_ped_to_inform_respected_friends(iLocal_196[iVar1], 50f, 20);
					ped::set_ped_accuracy(iLocal_196[iVar1], 5);
					ped::set_ped_hearing_range(iLocal_196[iVar1], 100f);
					ped::set_ped_seeing_range(iLocal_196[iVar1], 100f);
					ped::set_ped_shoot_rate(iLocal_196[iVar1], gameplay::get_random_int_in_range(40, 60));
					ai::task_combat_ped(iLocal_196[iVar1], player::player_ped_id(), 0, 16);
				}
				else if (iVar1 > 10 && iVar1 < 20) {
					if (!ped::is_ped_injured(iLocal_196[iVar1]) && !ped::is_ped_injured(iLocal_196[11]) &&
						!ped::is_ped_injured(iLocal_196[12]) && !ped::is_ped_injured(iLocal_196[13]) &&
						!ped::is_ped_injured(iLocal_196[14]) && !ped::is_ped_injured(iLocal_196[15])) {
						weapon::give_weapon_to_ped(iLocal_196[11], joaat("weapon_pistol"), -1, 1, 1);
						weapon::give_weapon_to_ped(iLocal_196[12], joaat("weapon_assaultrifle"), -1, 1, 1);
						weapon::give_weapon_to_ped(iLocal_196[13], joaat("weapon_assaultrifle"), -1, 1, 1);
						weapon::give_weapon_to_ped(iLocal_196[14], joaat("weapon_carbinerifle"), -1, 1, 1);
						weapon::give_weapon_to_ped(iLocal_196[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
						ped::set_ped_combat_attributes(iLocal_196[iVar1], 0, 1);
						ped::set_ped_combat_movement(iLocal_196[iVar1], 3);
						ped::set_ped_combat_ability(iLocal_196[iVar1], 0);
						ped::set_ped_accuracy(iLocal_196[iVar1], 0);
						weapon::set_ped_chance_of_firing_blanks(iLocal_196[iVar1], 1f, 1f);
						ai::open_sequence_task(&iLocal_247);
						ai::task_go_to_coord_while_aiming_at_entity(0, -1159.33f, 4924.412f, 221.6576f,
																	player::player_ped_id(), 2f, 1, 1056964608,
																	1082130432, 1, 0, 0, -957453492, 20000);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 6000, 0);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 4500, 0);
						ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
						ai::close_sequence_task(iLocal_247);
						ai::task_perform_sequence(iLocal_196[15], iLocal_247);
						ai::clear_sequence_task(&iLocal_247);
						ai::open_sequence_task(&iLocal_247);
						ai::task_go_to_coord_while_aiming_at_entity(0, -1163.279f, 4932.933f, 222.541f,
																	player::player_ped_id(), 1f, 1, 1056964608,
																	1082130432, 1, 0, 0, -957453492, 20000);
						ai::task_seek_cover_from_ped(0, player::player_ped_id(), 5000, 0);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 7500, 0);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 4500, 0);
						ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
						ai::close_sequence_task(iLocal_247);
						ai::task_perform_sequence(iLocal_196[14], iLocal_247);
						ai::clear_sequence_task(&iLocal_247);
						ai::open_sequence_task(&iLocal_247);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 2500, 0);
						ai::task_seek_cover_from_ped(0, player::player_ped_id(), 5000, 0);
						ai::task_go_to_coord_while_aiming_at_entity(0, -1156.175f, 4926.073f, 221.3447f,
																	player::player_ped_id(), 2f, 1, 1056964608,
																	1082130432, 1, 0, 0, -957453492, 20000);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 6500, 0);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 4500, 0);
						ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
						ai::close_sequence_task(iLocal_247);
						ai::task_perform_sequence(iLocal_196[13], iLocal_247);
						ai::clear_sequence_task(&iLocal_247);
						ai::open_sequence_task(&iLocal_247);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 3000, 0);
						ai::task_go_to_coord_while_aiming_at_entity(0, -1157.962f, 4922.196f, 221.309f,
																	player::player_ped_id(), 2f, 1, 1056964608,
																	1082130432, 1, 0, 0, -957453492, 20000);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 5500, 0);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 4500, 0);
						ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
						ai::close_sequence_task(iLocal_247);
						ai::task_perform_sequence(iLocal_196[12], iLocal_247);
						ai::clear_sequence_task(&iLocal_247);
						ai::open_sequence_task(&iLocal_247);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 4500, 0);
						ai::task_seek_cover_from_ped(0, player::player_ped_id(), 10000, 0);
						ai::task_go_to_coord_while_aiming_at_entity(0, -1161.475f, 4916.061f, 220.5658f,
																	player::player_ped_id(), 2f, 1, 1056964608,
																	1082130432, 1, 0, 0, -957453492, 20000);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 4500, 0);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), 4500, 0);
						ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
						ai::close_sequence_task(iLocal_247);
						ai::task_perform_sequence(iLocal_196[11], iLocal_247);
						ai::clear_sequence_task(&iLocal_247);
						ped::set_ped_keep_task(iLocal_196[iVar1], 1);
						ped::set_ped_reset_flag(iLocal_196[iVar1], 156, 1);
					}
				}
				else {
					iLocal_196[iVar1] =
						ped::create_ped(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
					ped::set_ped_random_component_variation(iLocal_196[iVar1], 0);
					weapon::give_weapon_to_ped(iLocal_196[iVar1], joaat("weapon_pistol"), -1, 1, 1);
					ped::set_ped_combat_attributes(iLocal_196[iVar1], 50, 1);
					ped::set_ped_combat_movement(iLocal_196[iVar1], 2);
					ped::set_ped_combat_ability(iLocal_196[iVar1], 0);
					ped::set_ped_to_inform_respected_friends(iLocal_196[iVar1], 50f, 20);
					ped::set_ped_combat_range(iLocal_196[iVar1], 1);
					ped::set_ped_accuracy(iLocal_196[iVar1], 5);
					ped::set_ped_hearing_range(iLocal_196[iVar1], 100f);
					ped::set_ped_seeing_range(iLocal_196[iVar1], 100f);
					ped::set_ped_shoot_rate(iLocal_196[iVar1], gameplay::get_random_int_in_range(40, 60));
					ai::task_combat_ped(iLocal_196[iVar1], player::player_ped_id(), 0, 16);
				}
				ped::set_ped_relationship_group_hash(iLocal_196[iVar1], iLocal_410);
				entity::set_entity_heading(iLocal_196[iVar1], func_126(entity::get_entity_coords(iLocal_196[iVar1], 1),
																	   func_92(player::player_id())));
				ped::set_blocking_of_non_temporary_events(iLocal_196[iVar1], 1);
				ped::set_ped_config_flag(iLocal_196[iVar1], 42, 1);
				iLocal_229[iVar1] = func_124(iLocal_196[iVar1], 1, 145);
				iVar1++;
			}
			func_96(&uLocal_411, 0, player::player_ped_id(), "TREVOR", 0, 1);
			func_96(&uLocal_411, 3, iLocal_196[11], "ACULTMaster", 0, 1);
			func_96(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			gameplay::set_bit(&iVar0, 1);
			gameplay::set_bit(&iVar0, 3);
			gameplay::set_bit(&iVar0, 4);
			if (!bLocal_172) {
				uLocal_216[0] =
					object::create_pickup_rotate(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f,
												 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				uLocal_216[1] =
					object::create_pickup_rotate(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f,
												 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				uLocal_216[2] =
					object::create_pickup_rotate(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f,
												 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				uLocal_216[3] =
					object::create_pickup_rotate(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f,
												 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			}
			uLocal_216[0] = uLocal_216[0];
			uLocal_216[1] = uLocal_216[1];
			uLocal_216[2] = uLocal_216[2];
			uLocal_216[3] = uLocal_216[3];
			iLocal_221[0] = object::create_object(-1322183878, -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
			iLocal_221[1] = object::create_object(-2022916910, -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
			iLocal_221[2] = object::create_object(-1322183878, -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
			iLocal_221[3] = object::create_object(-1322183878, -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
			iLocal_221[4] = object::create_object(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
			iLocal_221[5] = object::create_object(-2022916910, -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
			entity::set_entity_rotation(iLocal_221[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
			entity::set_entity_rotation(iLocal_221[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
			entity::set_entity_rotation(iLocal_221[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
			entity::set_entity_rotation(iLocal_221[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
			entity::set_entity_rotation(iLocal_221[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
			entity::set_entity_rotation(iLocal_221[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
			if (func_123() < 50) {
				player::special_ability_charge_normalized(player::player_id(), 0.5f, 1);
			}
			if (func_122() != 18) {
				func_120(18);
			}
			if (!func_89()) {
				func_109(0);
			}
			func_1(1);
			bLocal_172 = false;
			iLocal_50 = 4;
		}
		break;
	}
}

// Position - 0x4217
int func_109(int iParam0) {
	if (func_114()) {
		Global_101690 = 1;
		Global_101687 = gameplay::get_game_timer();
		if (func_113(Global_101689)) {
			func_110(0);
		}
		ui::set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_113(Global_101689)) {
			ui::flash_minimap_display();
		}
		return 1;
	}
	return 0;
}

// Position - 0x426A
void func_110(int iParam0) {
	switch (iParam0) {
	case 0:
		if (Global_101700.f_23954.f_2 < 3) {
			if (!ui::is_help_message_on_screen()) {
				func_111(func_112(iParam0), -1);
				Global_101700.f_23954.f_2++;
				gameplay::set_bit(&Global_101696, 0);
			}
		}
		break;

	case 1:
		if (!gameplay::is_bit_set(Global_101696, 1)) {
			if (!ui::is_help_message_on_screen()) {
				func_111(func_112(iParam0), -1);
				Global_101700.f_23954.f_3++;
				gameplay::set_bit(&Global_101696, 1);
			}
		}
		break;

	case 2:
		if (!gameplay::is_bit_set(Global_101696, 2)) {
			if (!ui::is_help_message_on_screen()) {
				func_111(func_112(iParam0), -1);
				Global_101700.f_23954.f_4++;
				gameplay::set_bit(&Global_101696, 2);
			}
		}
		break;
	}
}

// Position - 0x434B
void func_111(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x4362
char *func_112(int iParam0) {
	char *sVar0;

	sVar0 = "";
	switch (iParam0) {
	case 0: sVar0 = "AM_H_REFS"; break;

	case 1: sVar0 = "RE_FLASHBLIP"; break;

	case 2: sVar0 = "RE_HANDOVER"; break;
	}
	return sVar0;
}

// Position - 0x43A6
bool func_113(int iParam0) {
	switch (iParam0) {
	case 29:
	case 30:
	case 2:
	case 18: return false;
	}
	return true;
}

// Position - 0x43D5
bool func_114() {
	switch (func_115(&Global_25249, 0, 5, 0, script::get_id_of_this_thread())) {
	case 1: return true;

	case 0: return true;
	}
	return false;
}

// Position - 0x440B
int func_115(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_119(0)) {
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
		if (!func_117(iParam2)) {
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
			func_116(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x4542
void func_116(int *iParam0, int iParam1) {
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

// Position - 0x4591
bool func_117(int iParam0) { return func_118(iParam0, Global_35781); }

// Position - 0x45A2
int func_118(int iParam0, int iParam1) {
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

// Position - 0x4783
bool func_119(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_117(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x47A5
void func_120(int iParam0) {
	if (iParam0 == -1) {
		iParam0 = func_90();
	}
	if (iParam0 == -1) {
		return;
	}
	func_62(iParam0);
	gameplay::_0x65D2EBB47E1CEC21(0);
	gameplay::set_random_event_flag(1);
	Global_101686 = 0;
	func_121();
}

// Position - 0x47DB
void func_121() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			vehicle::set_vehicle_model_is_suppressed(
				entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)), 1);
		}
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
	}
}

// Position - 0x4818
int func_122() { return Global_101689; }

// Position - 0x4824
int func_123() {
	var uVar0;

	switch (func_13()) {
	case 0: stats::stat_get_int(joaat("sp0_special_ability"), &uVar0, -1); break;

	case 1: stats::stat_get_int(joaat("sp1_special_ability"), &uVar0, -1); break;

	case 2: stats::stat_get_int(joaat("sp2_special_ability"), &uVar0, -1); break;
	}
	return uVar0;
}

// Position - 0x4879
int func_124(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = func_125(iParam0, !iParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x48CB
int func_125(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_38(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_38(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_38(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x496F
var func_126(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5) {
	return gameplay::get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

// Position - 0x4989
void func_127() { Global_25425 = 1; }

// Position - 0x4995
int func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;

	iVar0 = 0;
	iVar2 = iParam1;
	if (!weapon::has_ped_got_weapon(iParam0, iParam1, 0)) {
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed")) {
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			iVar3 = weapon::get_ammo_in_ped_weapon(iParam0, iVar2);
		}
		if (iVar3 == -1) {
			iVar4 = weapon::get_weapon_clip_size(iVar2);
			if (iVar4 > 0) {
				iVar3 = iVar4;
			}
			else {
				weapon::get_max_ammo(iParam0, iVar2, &iVar3);
			}
		}
	}
	vVar5 = {entity::get_entity_coords(iParam0, 0) - Vector(10f, 0f, 0f)};
	if (iParam3) {
		vVar5 = {iParam4, iParam5, iParam6};
	}
	while (func_130(iVar2, iVar8) != 0) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			if (weapon::has_ped_got_weapon_component(iParam0, iVar2, func_130(iVar2, iVar8))) {
				if (func_129(func_130(iVar2, iVar8))) {
					iVar9 = weapon::get_weapon_component_type_model(func_130(iVar2, iVar8));
				}
			}
		}
		iVar8++;
	}
	iVar1 = weapon::create_weapon_object(iVar2, iVar3, vVar5, iVar0, 1065353216, iVar9, iParam7, iParam8);
	while (func_130(iVar2, iVar8) != 0) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			if (weapon::has_ped_got_weapon_component(iParam0, iVar2, func_130(iVar2, iVar8))) {
				weapon::give_weapon_component_to_weapon_object(iVar1, func_130(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (weapon::has_ped_got_weapon(iParam0, iVar2, 0)) {
			weapon::set_weapon_object_tint_index(iVar1, weapon::get_ped_weapon_tint_index(iParam0, iVar2));
		}
	}
	return iVar1;
}

// Position - 0x4AFB
bool func_129(int iParam0) {
	if (iParam0 == joaat("component_pistol_varmod_luxe") ||
		iParam0 == joaat("component_combatpistol_varmod_lowrider") ||
		iParam0 == joaat("component_appistol_varmod_luxe") || iParam0 == joaat("component_microsmg_varmod_luxe") ||
		iParam0 == joaat("component_smg_varmod_luxe") || iParam0 == joaat("component_assaultrifle_varmod_luxe") ||
		iParam0 == joaat("component_carbinerifle_varmod_luxe") ||
		iParam0 == joaat("component_advancedrifle_varmod_luxe") || iParam0 == joaat("component_mg_varmod_lowrider") ||
		iParam0 == joaat("component_combatmg_varmod_lowrider") ||
		iParam0 == joaat("component_pumpshotgun_varmod_lowrider") ||
		iParam0 == joaat("component_sniperrifle_varmod_luxe") ||
		iParam0 == joaat("component_assaultsmg_varmod_lowrider") ||
		iParam0 == joaat("component_pistol50_varmod_luxe") ||
		iParam0 == joaat("component_sawnoffshotgun_varmod_luxe") ||
		iParam0 == joaat("component_bullpuprifle_varmod_low") ||
		iParam0 == joaat("component_snspistol_varmod_lowrider") ||
		iParam0 == joaat("component_specialcarbine_varmod_lowrider") ||
		iParam0 == joaat("component_sawnoffshotgun_varmod_luxe") || iParam0 == joaat("component_knuckle_varmod_pimp") ||
		iParam0 == joaat("component_knuckle_varmod_ballas") || iParam0 == joaat("component_knuckle_varmod_dollar") ||
		iParam0 == joaat("component_knuckle_varmod_diamond") || iParam0 == joaat("component_knuckle_varmod_hate") ||
		iParam0 == joaat("component_knuckle_varmod_love") || iParam0 == joaat("component_knuckle_varmod_player") ||
		iParam0 == joaat("component_knuckle_varmod_king") || iParam0 == joaat("component_knuckle_varmod_vagos") ||
		iParam0 == joaat("component_switchblade_varmod_var1") ||
		iParam0 == joaat("component_switchblade_varmod_var2") || iParam0 == joaat("component_revolver_varmod_boss") ||
		iParam0 == joaat("component_revolver_varmod_goon")) {
		return true;
	}
	return false;
}

// Position - 0x4CC5
int func_130(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var *uVar2;
	struct<4> Var41;

	iVar0 = 0;
	switch (iParam0) {
	case joaat("weapon_pistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpistol_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_combatpistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_appistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_appistol_clip_01"); break;

		case 1: iVar0 = joaat("component_appistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_appistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_microsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_microsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_microsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_microsmg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_smg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_smg_clip_01"); break;

		case 1: iVar0 = joaat("component_smg_clip_02"); break;

		case 2: iVar0 = joaat("component_smg_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_pi_supp"); break;

		case 5: iVar0 = joaat("component_at_scope_macro_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_smg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_assaultrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_assaultrifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_at_ar_flsh"); break;

		case 5: iVar0 = joaat("component_at_scope_macro"); break;

		case 6: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 7: iVar0 = joaat("component_assaultrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_carbinerifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_carbinerifle_clip_01"); break;

		case 1: iVar0 = joaat("component_carbinerifle_clip_02"); break;

		case 2: iVar0 = joaat("component_carbinerifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_railcover_01"); break;

		case 4: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 5: iVar0 = joaat("component_at_ar_flsh"); break;

		case 6: iVar0 = joaat("component_at_scope_medium"); break;

		case 7: iVar0 = joaat("component_at_ar_supp"); break;

		case 8: iVar0 = joaat("component_carbinerifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_advancedrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_advancedrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_advancedrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_advancedrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_mg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_mg_clip_01"); break;

		case 1: iVar0 = joaat("component_mg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_scope_small_02"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_mg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_combatmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatmg_clip_01"); break;

		case 1: iVar0 = joaat("component_combatmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_scope_medium"); break;

		case 4: iVar0 = joaat("component_combatmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_pumpshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_sr_supp"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_pumpshotgun_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_assaultshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultshotgun_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultshotgun_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;
		}
		break;

	case joaat("weapon_sniperrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sniperrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_sniperrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_heavysniper"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_heavysniper_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;
		}
		break;

	case joaat("weapon_grenadelauncher"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_scope_small"); break;
		}
		break;

	case joaat("weapon_minigun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_minigun_clip_01"); break;
		}
		break;

	case joaat("weapon_assaultsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_assaultsmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_bullpupshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_ar_supp_02"); break;
		}
		break;

	case joaat("weapon_pistol50"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol50_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol50_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol50_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpdw"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpdw_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpdw_clip_02"); break;

		case 2: iVar0 = joaat("component_combatpdw_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_small"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;
		}
		break;

	case joaat("weapon_sawnoffshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sawnoffshotgun_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_bullpuprifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_bullpuprifle_clip_01"); break;

		case 1: iVar0 = joaat("component_bullpuprifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 6: iVar0 = joaat("component_bullpuprifle_varmod_low"); break;
		}
		break;

	case joaat("weapon_snspistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_snspistol_clip_01"); break;

		case 1: iVar0 = joaat("component_snspistol_clip_02"); break;

		case 2: iVar0 = joaat("component_snspistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_specialcarbine"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_specialcarbine_clip_01"); break;

		case 1: iVar0 = joaat("component_specialcarbine_clip_02"); break;

		case 2: iVar0 = joaat("component_specialcarbine_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_medium"); break;

		case 5: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_specialcarbine_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_knuckle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_knuckle_varmod_pimp"); break;

		case 1: iVar0 = joaat("component_knuckle_varmod_ballas"); break;

		case 2: iVar0 = joaat("component_knuckle_varmod_dollar"); break;

		case 3: iVar0 = joaat("component_knuckle_varmod_diamond"); break;

		case 4: iVar0 = joaat("component_knuckle_varmod_hate"); break;

		case 5: iVar0 = joaat("component_knuckle_varmod_love"); break;

		case 6: iVar0 = joaat("component_knuckle_varmod_player"); break;

		case 7: iVar0 = joaat("component_knuckle_varmod_king"); break;

		case 8: iVar0 = joaat("component_knuckle_varmod_vagos"); break;
		}
		break;

	case joaat("weapon_machinepistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_machinepistol_clip_01"); break;

		case 1: iVar0 = joaat("component_machinepistol_clip_02"); break;

		case 2: iVar0 = joaat("component_machinepistol_clip_03"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;
		}
		break;

	case joaat("weapon_switchblade"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_switchblade_varmod_var1"); break;

		case 1: iVar0 = joaat("component_switchblade_varmod_var2"); break;
		}
		break;

	case joaat("weapon_revolver"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_revolver_clip_01"); break;

		case 1: iVar0 = joaat("component_revolver_varmod_boss"); break;

		case 2: iVar0 = joaat("component_revolver_varmod_goon"); break;
		}
		break;

	case -1121678507:
		switch (iParam1) {
		case 0: iVar0 = -2067221805; break;

		case 1: iVar0 = -1820405577; break;
		}
		break;

	default:
		if (iParam0 != 0) {
			iVar1 = func_131(iParam0, &uVar2);
			if (iVar1 != -1) {
				if (iParam1 < dlc1::get_num_dlc_weapon_components(iVar1)) {
					if (dlc1::get_dlc_weapon_component_data(iVar1, iParam1, &Var41)) {
						return Var41.f_3;
					}
				}
			}
		}
		break;
	}
	return iVar0;
}

// Position - 0x57B1
int func_131(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;

	iVar1 = dlc1::get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1) {
		if (dlc1::get_dlc_weapon_data(iVar0, uParam1)) {
			if (uParam1->f_1 == iParam0) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x57EC
bool func_132() {
	bool bVar0;

	bVar0 = cutscene::has_cutscene_loaded();
	if (!Global_69701) {
		if (!bVar0) {
			Global_69701 = 1;
		}
	}
	return bVar0;
}

// Position - 0x580F
int func_133(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_134(iParam0, iParam1);
}

// Position - 0x582A
int func_134(int iParam0, int iParam1) {
	if (func_15(14) && !func_145(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_144(&Global_2595550)) {
		if (func_142(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_135(&Global_2595550, iParam0)) {
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

// Position - 0x58C7
bool func_135(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_15(14) && !func_145(iParam1)) {
		return false;
	}
	if (func_142(uParam0, iParam1)) {
		return false;
	}
	if (func_141(uParam0) < 0f) {
		func_140(uParam0, 0);
	}
	func_138(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_136(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x5978
int func_136(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_15(14) && !func_145(iParam1)) {
		return 0;
	}
	if (func_142(uParam0, iParam1)) {
		return 0;
	}
	if (func_141(uParam0) < 0f) {
		func_140(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_137(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x59F3
bool func_137(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x5A04
void func_138(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_139(uParam0, iVar0);
		iVar0++;
	}
	func_140(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x5A38
void func_139(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x5A48
void func_140(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x5A65
float func_141(var *uParam0) { return uParam0->f_72; }

// Position - 0x5A71
bool func_142(var *uParam0, int iParam1) { return func_143(uParam0, iParam1) != -1; }

// Position - 0x5A83
int func_143(var *uParam0, int iParam1) {
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

// Position - 0x5AB0
bool func_144(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x5ABE
int func_145(int iParam0) {
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

// Position - 0x5B0E
void func_146() {
	if (fLocal_183 > 0f) {
		fLocal_183 -= 0.6f / (1f / gameplay::get_frame_time());
	}
	else {
		fLocal_183 = 0f;
	}
	if (fLocal_183 >= 0f) {
		object::_set_door_ajar_angle(Global_34904[10 /*31*/], fLocal_183, 0, 1);
		object::_set_door_acceleration_limit(Global_34904[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 < 0f) {
		fLocal_182 += 0.6f / (1f / gameplay::get_frame_time());
	}
	else {
		fLocal_182 = 0f;
	}
	if (fLocal_182 <= 0f) {
		object::_set_door_ajar_angle(Global_34904[9 /*31*/], fLocal_182, 0, 1);
		object::_set_door_acceleration_limit(Global_34904[9 /*31*/], 4, 0, 1);
	}
}

// Position - 0x5B9A
void func_147() {
	if (fLocal_183 < 1f) {
		fLocal_183 += 0.6f / (1f / gameplay::get_frame_time());
	}
	else {
		fLocal_183 = 1f;
	}
	if (fLocal_183 <= 1f) {
		object::_set_door_ajar_angle(Global_34904[10 /*31*/], fLocal_183, 0, 1);
		object::_set_door_acceleration_limit(Global_34904[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 > -1f) {
		fLocal_182 -= 0.6f / (1f / gameplay::get_frame_time());
	}
	else {
		fLocal_182 = -1f;
	}
	if (fLocal_182 >= -1f) {
		object::_set_door_ajar_angle(Global_34904[9 /*31*/], fLocal_182, 0, 1);
		object::_set_door_acceleration_limit(Global_34904[9 /*31*/], 4, 0, 1);
	}
}

// Position - 0x5C26
void func_148() {
	switch (iLocal_189) {
	case 0:
		streaming::request_model(joaat("a_m_o_acult_02"));
		streaming::request_model(joaat("prop_anim_cash_pile_02"));
		streaming::request_anim_dict("random@altruist_cult");
		audio::prepare_music_event("AC_DELIVERED");
		weapon::request_weapon_asset(joaat("weapon_assaultrifle"), 31, 0);
		if (streaming::has_model_loaded(joaat("a_m_o_acult_02")) &&
			streaming::has_model_loaded(joaat("prop_anim_cash_pile_02")) &&
			streaming::has_anim_dict_loaded("random@altruist_cult") && audio::prepare_music_event("AC_DELIVERED") &&
			weapon::has_weapon_asset_loaded(joaat("weapon_assaultrifle"))) {
			if (Global_101700.f_23954.f_5 < 2) {
				if (Global_101700.f_23954.f_5 == 0) {
					sLocal_409 = "ACULT_HI";
				}
				else {
					sLocal_409 = "ACULT_LEAVE5";
				}
				sLocal_403 = "cult_p5_guard";
				sLocal_405 = "cult_p5_trv";
				sLocal_406 = "cult_p5_victim_01";
				sLocal_407 = "cult_p5_victim_02";
				sLocal_408 = "cult_p5_cam";
				fLocal_185 = 0.75f;
				fLocal_184 = 0.999f;
			}
			else if (Global_101700.f_23954.f_5 >= 2) {
				sLocal_409 = "ACULT_CAPT";
				sLocal_403 = "cult_p7_guard_01";
				sLocal_404 = "cult_p7_guard_02";
				sLocal_405 = "cult_p7_trv";
				sLocal_406 = "cult_p7_victim_01";
				sLocal_407 = "cult_p7_victim_02";
				sLocal_408 = "cult_p7_cam";
				fLocal_185 = 0.98f;
				fLocal_184 = 0.98f;
				streaming::request_model(-2022916910);
				streaming::request_model(-1322183878);
				streaming::request_model(joaat("prop_box_wood05a"));
				streaming::request_model(joaat("prop_security_case_01"));
				if (!cutscene::is_cutscene_active()) {
					cutscene::request_cutscene("ac_ig_3_p3_b", 8);
				}
			}
			if (ui::does_blip_exist(iLocal_228)) {
				ui::remove_blip(&iLocal_228);
			}
			func_20(1, 1, 1, 0);
			player::set_player_control(player::player_id(), 0, 0);
			ui::clear_help(1);
			ui::display_hud(0);
			ui::display_radar(0);
			weapon::hide_ped_weapon_for_scripted_cutscene(player::player_ped_id(), 1);
			weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
			audio::trigger_music_event("AC_DELIVERED");
			if (func_168()) {
				func_167(0);
			}
			func_165();
			system::wait(0);
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iLocal_213 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (vehicle::is_vehicle_driveable(iLocal_213, 0)) {
					if (vehicle::is_vehicle_stopped(iLocal_213)) {
						iLocal_189++;
					}
				}
			}
			else {
				iLocal_213 = player::get_players_last_vehicle();
				if (!ped::is_ped_injured(uLocal_193[0]) && !ped::is_ped_injured(uLocal_193[1])) {
					ai::clear_ped_tasks(uLocal_193[0]);
					ped::remove_ped_from_group(uLocal_193[0]);
					ai::clear_ped_tasks(uLocal_193[1]);
					ped::remove_ped_from_group(uLocal_193[1]);
				}
				iLocal_189++;
			}
		}
		break;

	case 1:
		if (entity::does_entity_exist(iLocal_213)) {
			if (!entity::is_entity_a_mission_entity(iLocal_213)) {
				entity::set_entity_as_mission_entity(iLocal_213, 1, 0);
			}
			if (entity::is_entity_at_coord(iLocal_213, vLocal_120, 13f, 13f, 13f, 0, 1, 0)) {
				entity::set_entity_coords(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
				if (!entity::is_entity_dead(iLocal_213, 0)) {
					entity::set_entity_heading(iLocal_213, 149.8882f);
					vehicle::set_vehicle_on_ground_properly(iLocal_213, 1084227584);
				}
			}
		}
		gameplay::clear_area(vLocal_120, 12f, 1, 0, 0, 0);
		entity::set_entity_coords(player::player_ped_id(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 128.2065f);
		if (!ped::is_ped_injured(uLocal_193[0]) && !ped::is_ped_injured(uLocal_193[1])) {
			entity::set_entity_coords(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1,
									  0, 0, 1);
			entity::set_entity_heading(uLocal_193[0], 128.2065f);
			entity::set_entity_coords(uLocal_193[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1,
									  0, 0, 1);
			entity::set_entity_heading(uLocal_193[1], 128.2065f);
		}
		iLocal_196[0] = ped::create_ped(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
		func_96(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
		if (Global_101700.f_23954.f_5 >= 2) {
			iLocal_196[1] =
				ped::create_ped(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
			func_96(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
		}
		func_96(&uLocal_411, 0, player::player_ped_id(), "TREVOR", 0, 1);
		func_96(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
		func_96(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
		func_97(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
		ped::set_blocking_of_non_temporary_events(iLocal_196[0], 1);
		iLocal_215 = weapon::create_weapon_object(joaat("weapon_assaultrifle"), -1,
												  entity::get_entity_coords(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
		entity::attach_entity_to_entity(iLocal_215, iLocal_196[0], ped::get_ped_bone_index(iLocal_196[0], 60309), 0.12f,
										0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
		if (Global_101700.f_23954.f_5 < 2) {
			iLocal_214 = object::create_object(joaat("prop_anim_cash_pile_02"), vLocal_117, 1, 1, 0);
			entity::attach_entity_to_entity(iLocal_214, player::player_ped_id(),
											ped::get_ped_bone_index(player::player_ped_id(), 28422), 0f, 0f, 0f, 0f, 0f,
											0f, 0, 0, 0, 0, 2, 1);
		}
		else if (Global_101700.f_23954.f_5 >= 2) {
			weapon::give_weapon_to_ped(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
		}
		iLocal_246 = cam::create_cam("DEFAULT_ANIMATED_CAMERA", 1);
		iLocal_188 = ped::create_synchronized_scene(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
		ai::task_synchronized_scene(player::player_ped_id(), iLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f,
									4, 0, 1148846080, 0);
		ai::task_synchronized_scene(iLocal_196[0], iLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0,
									1148846080, 0);
		if (Global_101700.f_23954.f_5 >= 2) {
			ai::task_synchronized_scene(iLocal_196[1], iLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0,
										1148846080, 0);
		}
		cam::play_synchronized_cam_anim(iLocal_246, iLocal_188, sLocal_408, "random@altruist_cult");
		cam::render_script_cams(1, 0, 3000, 1, 0, 0);
		if (!ped::is_ped_injured(uLocal_193[0]) && !ped::is_ped_injured(uLocal_193[1])) {
			ai::task_synchronized_scene(uLocal_193[0], iLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0,
										1148846080, 0);
			ai::task_synchronized_scene(uLocal_193[1], iLocal_188, "random@altruist_cult", sLocal_407, 1000f, -2f, 4, 0,
										1148846080, 0);
		}
		iLocal_189++;
		break;

	case 2:
		if (!ped::is_ped_injured(uLocal_193[0])) {
			if (ped::is_ped_male(uLocal_193[0])) {
				func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
			}
			else {
				func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
			}
		}
		if (!ped::is_ped_injured(uLocal_193[1])) {
			if (ped::is_ped_male(uLocal_193[1])) {
				func_163(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
			}
			else {
				func_163(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
			}
		}
		if (ped::get_synchronized_scene_phase(iLocal_188) > fLocal_185) {
			iLocal_189++;
		}
		break;

	case 3:
		if (!ped::is_ped_injured(uLocal_193[0])) {
			if (ped::is_ped_male(uLocal_193[0])) {
				func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
			}
			else {
				func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
			}
		}
		if (!ped::is_ped_injured(uLocal_193[1])) {
			if (ped::is_ped_male(uLocal_193[1])) {
				func_163(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
			}
			else {
				func_163(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
			}
		}
		if (ped::get_synchronized_scene_phase(iLocal_188) > fLocal_184) {
			iLocal_189++;
		}
		break;

	case 4:
		if (Global_101700.f_23954.f_5 < 2) {
			func_127();
			if (entity::does_entity_exist(iLocal_196[0])) {
				ped::delete_ped(&iLocal_196[0]);
			}
			if (entity::does_entity_exist(iLocal_196[1])) {
				ped::delete_ped(&iLocal_196[1]);
			}
			if (entity::does_entity_exist(iLocal_214)) {
				object::delete_object(&iLocal_214);
			}
			if (entity::does_entity_exist(iLocal_215)) {
				object::delete_object(&iLocal_215);
			}
			ai::clear_ped_tasks(player::player_ped_id());
			cam::_0xC819F3CBB62BF692(0, 0, 3, 0);
			cam::set_cam_active(iLocal_246, 0);
			func_20(0, 1, 1, 0);
			player::set_player_control(player::player_id(), 1, 0);
			ui::display_hud(1);
			ui::display_radar(1);
			weapon::hide_ped_weapon_for_scripted_cutscene(player::player_ped_id(), 0);
			cam::set_gameplay_cam_relative_heading(0f);
			func_149(func_13(), 1, 2000, 0, 0);
		}
		audio::trigger_music_event("AC_DONE");
		Global_101700.f_23954.f_5 += 2;
		iLocal_174 = 1;
		break;
	}
}

// Position - 0x6458
void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return;
	}
	func_150(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (iParam3) {
		iVar0 = 0;
		if (iParam4) {
			switch (iParam0) {
			case 0: iVar1 = joaat("sp0_money_made_from_random_peds"); break;

			case 1: iVar1 = joaat("sp1_money_made_from_random_peds"); break;

			case 2: iVar1 = joaat("sp2_money_made_from_random_peds"); break;

			default: return;
			}
		}
		else {
			switch (iParam0) {
			case 0: iVar1 = joaat("sp0_money_made_from_missions"); break;

			case 1: iVar1 = joaat("sp1_money_made_from_missions"); break;

			case 2: iVar1 = joaat("sp2_money_made_from_missions"); break;

			default: return;
			}
		}
		stats::stat_get_int(iVar1, &iVar0, -1);
		iVar0 += iParam2;
		stats::stat_set_int(iVar1, iVar0, 1);
	}
}

// Position - 0x653F
int func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_162();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_161(99, 1);
			func_160(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_160(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_160(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_158(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_157(5)) {
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
			case 0: func_160(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_160(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_160(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_157(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_160(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_160(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_160(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_160(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_160(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_160(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
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
			case 0: func_160(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_160(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_160(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_160(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_160(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_160(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_160(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_160(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_160(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_157(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_160(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_160(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_160(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_160(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_160(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_160(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_156(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_161(95, iParam3); break;

		case 1: func_161(97, iParam3); break;

		case 2: func_161(96, iParam3); break;
		}
		func_161(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_153(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_153(iVar1);
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
		case 0: func_160(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_160(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_160(joaat("sp2_total_cash_earned"), iParam3); break;
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
	func_152(iParam0);
	if (Global_35781 == 15) {
		func_151(0);
	}
	return 1;
}

// Position - 0x6B3E
void func_151(int iParam0) {
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

// Position - 0x6DC0
void func_152(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x6E1A
void func_153(int iParam0) {
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
			 gameplay::is_bit_set(Global_2097152[func_155() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_155() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_154(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x6EDD
char *func_154(int iParam0) {
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

// Position - 0x6F58
int func_155() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x6F65
void func_156(int iParam0) {
	func_161(93, iParam0);
	func_161(29, iParam0);
	func_161(30, iParam0);
}

// Position - 0x6F85
bool func_157(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_155() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x6FC1
int func_158(int iParam0) {
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
		func_159(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_133(27, 1);
	return 1;
}

// Position - 0x7078
int func_159(int iParam0, int iParam1) {
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

// Position - 0x70C9
void func_160(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x70EC
void func_161(int iParam0, int iParam1) {
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

// Position - 0x7149
void func_162() {
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

// Position - 0x71BE
void func_163(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	audio::_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_164(iParam3), 0);
}

// Position - 0x71D7
int func_164(int iParam0) {
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

// Position - 0x73CC
void func_165() {
	Global_14611 = 0;
	func_166();
}

// Position - 0x73DC
void func_166() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x73FD
void func_167(int iParam0) { Global_16756 = iParam0; }

// Position - 0x740A
bool func_168() {
	if (Global_16756 == 1) {
		return true;
	}
	return false;
}

// Position - 0x7421
void func_169() {
	switch (iLocal_189) {
	case 0:
		streaming::request_model(joaat("a_m_o_acult_02"));
		streaming::request_model(joaat("prop_anim_cash_pile_02"));
		streaming::request_anim_dict("random@altruist_cult");
		audio::prepare_music_event("AC_DELIVERED");
		weapon::request_weapon_asset(joaat("weapon_assaultrifle"), 31, 0);
		if (streaming::has_model_loaded(joaat("a_m_o_acult_02")) &&
			streaming::has_model_loaded(joaat("prop_anim_cash_pile_02")) &&
			streaming::has_anim_dict_loaded("random@altruist_cult") && audio::prepare_music_event("AC_DELIVERED") &&
			weapon::has_weapon_asset_loaded(joaat("weapon_assaultrifle"))) {
			if (Global_101700.f_23954.f_5 == 0) {
				sLocal_409 = "ACULT_HI";
				sLocal_403 = "cult_p2_guard";
				sLocal_405 = "cult_p2_trv";
				sLocal_406 = "cult_p2_victim";
				sLocal_408 = "cult_p2_cam";
				fLocal_185 = 0.8f;
				fLocal_184 = 0.968f;
			}
			else if (Global_101700.f_23954.f_5 == 1) {
				sLocal_409 = "ACULT_LEAVE3";
				sLocal_403 = "cult_p4_guard";
				sLocal_405 = "cult_p4_trv";
				sLocal_406 = "cult_p4_victim";
				sLocal_408 = "cult_p4_cam";
				fLocal_185 = 0.77f;
				fLocal_184 = 0.999f;
			}
			else if (Global_101700.f_23954.f_5 == 2) {
				sLocal_409 = "ACULT_LEAVE3";
				sLocal_403 = "cult_p4_guard";
				sLocal_405 = "cult_p4_trv";
				sLocal_406 = "cult_p4_victim";
				sLocal_408 = "cult_p4_cam";
				fLocal_185 = 0.77f;
				fLocal_184 = 0.999f;
			}
			else if (Global_101700.f_23954.f_5 >= 3) {
				sLocal_409 = "ACULT_CAPT";
				sLocal_403 = "cult_p7_guard_01";
				sLocal_404 = "cult_p7_guard_02";
				sLocal_405 = "cult_p7_trv";
				sLocal_406 = "cult_p7_victim_01";
				sLocal_408 = "cult_p7_cam";
				fLocal_185 = 0.98f;
				fLocal_184 = 0.98f;
				streaming::request_model(-2022916910);
				streaming::request_model(-1322183878);
				streaming::request_model(joaat("prop_box_wood05a"));
				streaming::request_model(joaat("prop_security_case_01"));
				if (!cutscene::is_cutscene_active()) {
					cutscene::request_cutscene("ac_ig_3_p3_b", 8);
				}
			}
			if (ui::does_blip_exist(iLocal_228)) {
				ui::remove_blip(&iLocal_228);
			}
			func_20(1, 1, 1, 0);
			player::set_player_control(player::player_id(), 0, 0);
			ui::clear_help(1);
			ui::display_hud(0);
			ui::display_radar(0);
			weapon::hide_ped_weapon_for_scripted_cutscene(player::player_ped_id(), 1);
			weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
			audio::trigger_music_event("AC_DELIVERED");
			if (func_168()) {
				func_167(0);
			}
			func_165();
			system::wait(0);
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iLocal_213 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (vehicle::is_vehicle_driveable(iLocal_213, 0)) {
					if (vehicle::is_vehicle_stopped(iLocal_213)) {
						iLocal_189++;
					}
				}
			}
			else {
				iLocal_213 = player::get_players_last_vehicle();
				if (!ped::is_ped_injured(uLocal_193[0])) {
					ai::clear_ped_tasks(uLocal_193[0]);
					ped::remove_ped_from_group(uLocal_193[0]);
				}
				iLocal_189++;
			}
		}
		break;

	case 1:
		if (entity::does_entity_exist(iLocal_213)) {
			if (!entity::is_entity_a_mission_entity(iLocal_213)) {
				entity::set_entity_as_mission_entity(iLocal_213, 1, 0);
			}
			if (entity::is_entity_at_coord(iLocal_213, vLocal_120, 13f, 13f, 13f, 0, 1, 0)) {
				entity::set_entity_coords(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
				if (!entity::is_entity_dead(iLocal_213, 0)) {
					entity::set_entity_heading(iLocal_213, 149.8882f);
					vehicle::set_vehicle_on_ground_properly(iLocal_213, 1084227584);
				}
			}
		}
		gameplay::clear_area(vLocal_120, 12f, 1, 0, 0, 0);
		entity::set_entity_coords(player::player_ped_id(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 128.2065f);
		if (!ped::is_ped_injured(uLocal_193[0])) {
			entity::set_entity_coords(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1,
									  0, 0, 1);
			entity::set_entity_heading(uLocal_193[0], 128.2065f);
		}
		iLocal_196[0] = ped::create_ped(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
		func_96(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
		if (Global_101700.f_23954.f_5 >= 3) {
			iLocal_196[1] =
				ped::create_ped(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
			func_96(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
		}
		func_96(&uLocal_411, 0, player::player_ped_id(), "TREVOR", 0, 1);
		func_96(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
		func_96(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
		if (Global_101700.f_23954.f_5 != 1 && Global_101700.f_23954.f_5 != 2) {
			func_97(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
		}
		system::settimerb(0);
		ped::set_blocking_of_non_temporary_events(iLocal_196[0], 1);
		iLocal_214 = object::create_object(joaat("prop_anim_cash_pile_02"), vLocal_117, 1, 1, 0);
		iLocal_215 = weapon::create_weapon_object(joaat("weapon_assaultrifle"), -1,
												  entity::get_entity_coords(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
		entity::attach_entity_to_entity(iLocal_215, iLocal_196[0], ped::get_ped_bone_index(iLocal_196[0], 60309), 0.12f,
										0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
		if (Global_101700.f_23954.f_5 < 3) {
			if (Global_101700.f_23954.f_5 == 0) {
				entity::attach_entity_to_entity(iLocal_214, player::player_ped_id(),
												ped::get_ped_bone_index(player::player_ped_id(), 60309), 0f, 0f, 0f, 0f,
												0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else {
				entity::attach_entity_to_entity(iLocal_214, player::player_ped_id(),
												ped::get_ped_bone_index(player::player_ped_id(), 28422), 0f, 0f, 0f, 0f,
												0f, 0f, 0, 0, 0, 0, 2, 1);
			}
		}
		else if (Global_101700.f_23954.f_5 >= 3) {
			weapon::give_weapon_to_ped(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
		}
		iLocal_246 = cam::create_cam("DEFAULT_ANIMATED_CAMERA", 1);
		iLocal_188 = ped::create_synchronized_scene(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
		ai::task_synchronized_scene(player::player_ped_id(), iLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f,
									4, 0, 1148846080, 0);
		ai::task_synchronized_scene(iLocal_196[0], iLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0,
									1148846080, 0);
		if (Global_101700.f_23954.f_5 >= 3) {
			ai::task_synchronized_scene(iLocal_196[1], iLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0,
										1148846080, 0);
		}
		cam::play_synchronized_cam_anim(iLocal_246, iLocal_188, sLocal_408, "random@altruist_cult");
		cam::render_script_cams(1, 0, 3000, 1, 0, 0);
		if (!ped::is_ped_injured(uLocal_193[0])) {
			ai::task_synchronized_scene(uLocal_193[0], iLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0,
										1148846080, 0);
		}
		iLocal_189++;
		break;

	case 2:
		if (!ped::is_ped_injured(uLocal_193[0])) {
			if (ped::is_ped_male(uLocal_193[0])) {
				func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
			}
			else {
				func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
			}
		}
		if (system::timerb() > 2000 && system::timerb() < 2100) {
			if (Global_101700.f_23954.f_5 == 1 || Global_101700.f_23954.f_5 == 2) {
				if (!func_107()) {
					func_97(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
				}
			}
		}
		if (ped::get_synchronized_scene_phase(iLocal_188) > fLocal_185) {
			iLocal_189++;
		}
		break;

	case 3:
		if (!ped::is_ped_injured(uLocal_193[0])) {
			if (ped::is_ped_male(uLocal_193[0])) {
				func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
			}
			else {
				func_163(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
			}
		}
		if (Global_101700.f_23954.f_5 == 1 || Global_101700.f_23954.f_5 == 2) {
			if (ped::get_synchronized_scene_phase(iLocal_188) > 0.9742857f && !iLocal_181 &&
				cam::get_follow_ped_cam_view_mode() == 4) {
				graphics::_start_screen_effect("CamPushInNeutral", 0, 0);
				audio::play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_181 = 1;
			}
		}
		if (ped::get_synchronized_scene_phase(iLocal_188) > fLocal_184) {
			iLocal_189++;
		}
		break;

	case 4:
		if (Global_101700.f_23954.f_5 < 3) {
			if (Global_101700.f_23954.f_5 != 1 && Global_101700.f_23954.f_5 != 2) {
				func_127();
				if (entity::does_entity_exist(iLocal_196[0])) {
					ped::delete_ped(&iLocal_196[0]);
				}
				if (entity::does_entity_exist(iLocal_196[1])) {
					ped::delete_ped(&iLocal_196[1]);
				}
			}
			else {
				system::settimerb(0);
				if (entity::does_entity_exist(iLocal_196[0])) {
					entity::set_entity_visible(iLocal_196[0], 0, 0);
				}
				if (entity::does_entity_exist(iLocal_196[1])) {
					entity::set_entity_visible(iLocal_196[1], 0, 0);
				}
				if (entity::does_entity_exist(uLocal_193[0])) {
					entity::set_entity_visible(uLocal_193[0], 0, 0);
				}
				iLocal_189++;
			}
			if (entity::does_entity_exist(iLocal_214)) {
				object::delete_object(&iLocal_214);
			}
			if (entity::does_entity_exist(iLocal_215)) {
				object::delete_object(&iLocal_215);
			}
			ai::clear_ped_tasks(player::player_ped_id());
			if (Global_101700.f_23954.f_5 == 0) {
				ped::force_ped_motion_state(player::player_ped_id(), -668482597, 0, 0, 0);
				player::simulate_player_input_gait(player::player_id(), 1f, 750, 0, 1, 0);
			}
			if (gameplay::are_strings_equal(sLocal_408, "cult_p4_cam")) {
				cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			}
			else {
				cam::_0xC819F3CBB62BF692(0, 0, 3, 0);
			}
			cam::set_cam_active(iLocal_246, 0);
			func_20(0, 1, 1, 0);
			player::set_player_control(player::player_id(), 1, 0);
			ui::display_hud(1);
			ui::display_radar(1);
			weapon::hide_ped_weapon_for_scripted_cutscene(player::player_ped_id(), 0);
			cam::set_gameplay_cam_relative_heading(0f);
			func_149(func_13(), 1, 1000, 0, 0);
		}
		if (Global_101700.f_23954.f_5 != 1 && Global_101700.f_23954.f_5 != 2) {
			audio::trigger_music_event("AC_DONE");
			Global_101700.f_23954.f_5++;
			iLocal_174 = 1;
		}
		break;

	case 5:
		if (!func_107() || system::timerb() > 7000) {
			func_127();
			if (entity::does_entity_exist(iLocal_196[0])) {
				ped::delete_ped(&iLocal_196[0]);
			}
			if (entity::does_entity_exist(iLocal_196[1])) {
				ped::delete_ped(&iLocal_196[1]);
			}
			audio::trigger_music_event("AC_DONE");
			Global_101700.f_23954.f_5++;
			iLocal_174 = 1;
		}
		break;
	}
}

// Position - 0x7DE7
void func_170() {
	if (func_172()) {
		if (func_13() == 2) {
			if (ped::does_group_exist(func_171())) {
				ped::get_group_size(func_171(), &uLocal_186, &iLocal_187);
				if (iLocal_187 == 1) {
					uLocal_193[0] = ped::get_ped_as_group_member(func_171(), 0);
					if (entity::is_entity_at_coord(uLocal_193[0], vLocal_120, 5f, 5f, 5f, 0, 1, 0)) {
						if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
								vehicle::_set_vehicle_halt(player::get_players_last_vehicle(), 10.5f, 5, 0);
							}
						}
						system::settimera(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_187 == 2) {
					uLocal_193[0] = ped::get_ped_as_group_member(func_171(), 0);
					uLocal_193[1] = ped::get_ped_as_group_member(func_171(), 1);
					if (entity::is_entity_at_coord(uLocal_193[0], vLocal_120, 5f, 5f, 5f, 0, 1, 0) &&
						entity::is_entity_at_coord(uLocal_193[1], vLocal_120, 5f, 5f, 5f, 0, 1, 0)) {
						if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
								vehicle::_set_vehicle_halt(player::get_players_last_vehicle(), 10.5f, 5, 0);
							}
						}
						system::settimera(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

// Position - 0x7EF2
var func_171() { return player::get_player_group(player::get_player_index()); }

// Position - 0x7F02
bool func_172() { return Global_25424; }

// Position - 0x7F0D
void func_173() {
	if (func_176()) {
		if (iLocal_400 == 0) {
			iLocal_400 = ped::add_scenario_blocking_area(vLocal_117 - Vector(100f, 60f, 80f),
														 vLocal_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (gameplay::get_distance_between_coords(func_92(player::player_id()), vLocal_117, 1) < 209f) {
			system::wait(0);
		}
	}
	if (func_13() == 0 || func_13() == 1) {
		if (ped::get_relationship_between_groups(2017343592, 1862763509) != 5) {
			if (func_175()) {
				ped::set_relationship_between_groups(5, 2017343592, 1862763509);
			}
			else if (func_174()) {
				ped::set_relationship_between_groups(5, 2017343592, 1862763509);
			}
		}
	}
	else if (func_13() == 2) {
		if (ped::get_relationship_between_groups(2017343592, 1862763509) != 5) {
			if (func_175()) {
				if (ped::is_ped_shooting(player::player_ped_id()) ||
					ped::is_ped_in_melee_combat(player::player_ped_id()) &&
						player::is_player_targetting_anything(player::player_id())) {
					ped::set_relationship_between_groups(5, 2017343592, 1862763509);
				}
			}
			else if (func_174()) {
				ped::set_relationship_between_groups(5, 2017343592, 1862763509);
			}
			else if (ped::get_relationship_between_groups(2017343592, 1862763509) != 1) {
				ped::set_relationship_between_groups(1, 2017343592, 1862763509);
			}
		}
	}
	if (func_175()) {
		if (iLocal_179) {
			if (!player::is_player_wanted_level_greater(player::player_id(), 3)) {
				audio::trigger_music_event("AC_START");
			}
			player::set_wanted_level_multiplier(0f);
			audio::set_static_emitter_enabled("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (object::does_object_of_type_exist_at_coords(Global_34904[9 /*31*/].f_2, 6f, Global_34904[9 /*31*/].f_5,
															0)) {
				object::set_state_of_closest_door_of_type(Global_34904[9 /*31*/].f_5, Global_34904[9 /*31*/].f_2, 0, 0f,
														  0);
			}
			if (object::does_object_of_type_exist_at_coords(Global_34904[10 /*31*/].f_2, 6f,
															Global_34904[10 /*31*/].f_5, 0)) {
				object::set_state_of_closest_door_of_type(Global_34904[10 /*31*/].f_5, Global_34904[10 /*31*/].f_2, 0,
														  0f, 0);
			}
			iLocal_180 = 1;
			iLocal_179 = 0;
		}
	}
	else if (!iLocal_179) {
		if (unk_0x2DD39BF3E2F9C47F()) {
			audio::trigger_music_event("AC_END");
		}
		player::set_wanted_level_multiplier(1f);
		audio::set_static_emitter_enabled("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!iLocal_180) {
			func_146();
		}
		iLocal_179 = 1;
	}
}

// Position - 0x8142
bool func_174() {
	if (gameplay::is_bullet_in_angled_area(vLocal_123, vLocal_126, fLocal_129, 1) ||
		gameplay::is_bullet_in_angled_area(vLocal_130, vLocal_133, fLocal_136, 1) ||
		gameplay::is_bullet_in_angled_area(vLocal_137, vLocal_140, fLocal_143, 1) ||
		gameplay::is_bullet_in_angled_area(vLocal_144, vLocal_147, fLocal_150, 1) ||
		gameplay::is_bullet_in_angled_area(vLocal_151, vLocal_154, fLocal_157, 1) ||
		gameplay::is_bullet_in_angled_area(vLocal_158, vLocal_161, fLocal_164, 1) ||
		gameplay::is_bullet_in_angled_area(vLocal_165, vLocal_168, fLocal_171, 1)) {
		return true;
	}
	return false;
}

// Position - 0x81DF
bool func_175() {
	if (entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_123, vLocal_126, fLocal_129, 0, 1, 0) ||
		entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_130, vLocal_133, fLocal_136, 0, 1, 0) ||
		entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_137, vLocal_140, fLocal_143, 0, 1, 0) ||
		entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_144, vLocal_147, fLocal_150, 0, 1, 0) ||
		entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_151, vLocal_154, fLocal_157, 0, 1, 0) ||
		entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_158, vLocal_161, fLocal_164, 0, 1, 0) ||
		entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_165, vLocal_168, fLocal_171, 0, 1, 0)) {
		return true;
	}
	return false;
}

// Position - 0x82A6
bool func_176() {
	if (Global_101700.f_23954.f_5 == 1000) {
		return true;
	}
	return false;
}

// Position - 0x82C2
void func_177() {
	ped::set_relationship_between_groups(255, 2017343592, 1862763509);
	if (Global_101700.f_23954.f_5 >= iLocal_192 && Global_101700.f_23954.f_5 != 1000) {
		if (bLocal_172) {
			func_1(1);
			func_9();
			func_3(0);
			iLocal_50 = 3;
		}
		else {
			func_178(&iLocal_249);
			Global_87081 = 0;
			Global_87082 = 0;
			Global_87083 = 0;
			func_12(0, 1);
			func_10(0, 1);
			func_2(0);
			gameplay::set_fade_out_after_death(1);
			gameplay::_disable_automatic_respawn(0);
			gameplay::ignore_next_restart(0);
			func_3(0);
			player::set_wanted_level_multiplier(1f);
			gameplay::enable_dispatch_service(3, 1);
			gameplay::enable_dispatch_service(5, 1);
			gameplay::clear_weather_type_persist();
			iLocal_179 = 0;
			func_93();
			Global_101700.f_23954.f_5 = iLocal_192 - 1;
			script::terminate_this_thread();
		}
	}
	else {
		ped::remove_scenario_blocking_areas();
		func_178(&iLocal_249);
		Global_87081 = 0;
		Global_87082 = 0;
		Global_87083 = 0;
		func_12(0, 1);
		func_10(0, 1);
		func_2(0);
		gameplay::set_fade_out_after_death(1);
		gameplay::_disable_automatic_respawn(0);
		gameplay::ignore_next_restart(0);
		func_3(0);
		if (graphics::has_scaleform_movie_loaded(iLocal_399)) {
			graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_399);
			func_95(0);
		}
		player::set_wanted_level_multiplier(1f);
		gameplay::enable_dispatch_service(3, 1);
		gameplay::enable_dispatch_service(5, 1);
		gameplay::clear_weather_type_persist();
		iLocal_179 = 0;
		script::terminate_this_thread();
	}
}

// Position - 0x83EE
void func_178(int *iParam0) {
	if (graphics::has_scaleform_movie_loaded(*iParam0)) {
		graphics::set_scaleform_movie_as_no_longer_needed(iParam0);
		*iParam0 = 0;
	}
}
