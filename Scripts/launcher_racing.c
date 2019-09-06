#pragma region Local Var //{
int iLocal_0 = 0;
var uLocal_1 = 0;
var uLocal_2 = 0;
var uLocal_3 = 0;
var uLocal_4 = 0;
int iLocal_5 = 0;
int iLocal_6 = 0;
int iLocal_7 = 0;
int iLocal_8 = 0;
int iLocal_9 = 0;
int iLocal_10 = 0;
int iLocal_11 = 0;
int iLocal_12 = 0;
int iLocal_13 = 0;
int iLocal_14 = 0;
var uLocal_15 = 0;
var uLocal_16 = 0;
float fLocal_17 = 0f;
var uLocal_18 = 0;
var uLocal_19 = 0;
int iLocal_20 = 0;
var uLocal_21 = 0;
var uLocal_22 = 0;
char *sLocal_23 = NULL;
float fLocal_24 = 0f;
var uLocal_25 = 0;
var uLocal_26 = 0;
var uLocal_27 = 0;
float fLocal_28 = 0f;
float fLocal_29 = 0f;
var uLocal_30 = 0;
var uLocal_31 = 0;
var uLocal_32 = 0;
float fLocal_33 = 0f;
float fLocal_34 = 0f;
float fLocal_35 = 0f;
var uLocal_36 = 0;
var uLocal_37 = 0;
int iLocal_38 = 0;
var uLocal_39 = 0;
struct<4> Local_40[10];
bool bLocal_81 = 0;
int iLocal_82 = 0;
struct<6> Local_83 = {
	10, 0, -1, 1000, -1, 0
};
vector3 vLocal_89 = {0f, 0f, 0f};
int iLocal_92 = 0;
int iLocal_93 = 0;
int iLocal_94 = 0;
int iLocal_95 = 0;
int iLocal_96 = 0;
int iLocal_97 = 0;
int iLocal_98 = 0;
bool bLocal_99 = 0;
int iLocal_100 = 0;
int iLocal_101 = 0;
bool bLocal_102 = 0;
var uLocal_103[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_111 = 0;
int iLocal_112 = 0;
vector3 vLocal_113 = {0f, 0f, 0f};
float fLocal_116 = 0f;
int iLocal_117 = 0;
vector3 vLocal_118 = {0f, 0f, 0f};
float fLocal_121 = 0f;
vector3 vLocal_122[3] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_132[3] = {0f, 0f, 0f};
vector3 vLocal_136[7] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_158[7] = {0f, 0f, 0f, 0f, 0f, 0f, 0f};
var uLocal_166[3] = {0, 0, 0};
int iLocal_170[3] = {0, 0, 0};
int iLocal_174[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_182 = 0;
int iLocal_183 = 0;
char[] cLocal_184[8] = 0;
char *sLocal_185[7] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL};
int iLocal_193 = 0;
int iLocal_194 = 0;
int iLocal_195 = 0;
int iLocal_196 = 0;
int iLocal_197 = 0;
var *uLocal_198 = NULL;
var uLocal_199 = 0;
var uLocal_200 = 0;
vector3 vLocal_201 = {0f, 0f, 0f};
vector3 vLocal_204 = {0f, 0f, 0f};
vector3 vLocal_207 = {0f, 0f, 0f};
vector3 vLocal_210 = {0f, 0f, 0f};
float *fLocal_213 = NULL;
int iLocal_214 = 0;
int iLocal_215 = 0;
var *uLocal_216 = NULL;
var uLocal_217 = 0;
var uLocal_218 = 0;
var uLocal_219 = 0;
var uLocal_220 = 0;
var uLocal_221 = 0;
var uLocal_222 = 0;
var uLocal_223 = 0;
var uLocal_224 = 0;
var uLocal_225 = 0;
var uLocal_226 = 0;
var uLocal_227 = 0;
var uLocal_228 = 0;
var uLocal_229 = 0;
var uLocal_230 = 0;
var uLocal_231 = 0;
var uLocal_232 = 0;
var uLocal_233 = 0;
var uLocal_234 = 0;
var uLocal_235 = 0;
var uLocal_236 = 0;
var uLocal_237 = 0;
var uLocal_238 = 0;
var uLocal_239 = 0;
var uLocal_240 = 0;
var uLocal_241 = 0;
var uLocal_242 = 0;
var uLocal_243 = 0;
var uLocal_244 = 0;
var uLocal_245 = 0;
var uLocal_246 = 0;
var uLocal_247 = 0;
var uLocal_248 = 0;
var uLocal_249 = 0;
var uLocal_250 = 0;
var uLocal_251 = 0;
var uLocal_252 = 0;
var uLocal_253 = 0;
var uLocal_254 = 0;
var uLocal_255 = 0;
var uLocal_256 = 0;
var uLocal_257 = 0;
var uLocal_258 = 0;
var uLocal_259 = 0;
var uLocal_260 = 0;
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
var uLocal_272 = 0;
var uLocal_273 = 0;
var uLocal_274 = 0;
var uLocal_275 = 0;
var uLocal_276 = 0;
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
var uLocal_291 = 0;
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
var uLocal_306 = 0;
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
var uLocal_321 = 0;
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
var uLocal_336 = 0;
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
var uLocal_363 = 1;
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
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	iLocal_20 = -1;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_93 = 1;
	bLocal_102 = true;
	iLocal_183 = joaat("feltzer2");
	iLocal_193 = 1;
	vLocal_201 = {0f, 0f, 0f};
	vLocal_204 = {1f, 1f, 1f};
	vLocal_207 = {0f, 0f, 0f};
	vLocal_210 = {0f, 0f, 0f};
	fLocal_213 = 0f;
	gameplay::_0x6F2135B6129620C1(1);
	vLocal_89 = {ScriptParam_0.f_1[0 /*3*/]};
	if (player::has_force_cleanup_occurred(83)) {
		func_204(0);
	}
	func_201();
	switch (Local_83.f_1) {
	case 1:
	case 2:
		if (!func_200(0, 8)) {
			func_204(0);
		}
		if (!func_199(Local_83)) {
			func_204(0);
		}
		break;

	case 3:
		if (!func_200(0, 7)) {
			func_204(0);
		}
		break;

	case 0: func_204(0); break;
	}
	func_193();
	if (!func_169()) {
		func_204(0);
	}
	func_163();
	while (true) {
		func_160(&uLocal_216);
		if (func_169()) {
			if (brain::is_world_point_within_brain_activation_range()) {
				switch (iLocal_82) {
				case 0: iLocal_82 = 1; break;

				case 1:
					func_151();
					func_120();
					break;

				case 2: func_56(); break;

				case 3: func_1(); break;
				}
			}
			else {
				func_204(0);
			}
		}
		else {
			func_204(0);
		}
		system::wait(0);
	}
}

// Position - 0x19F
void func_1() {
	if (!iLocal_100) {
		func_9();
	}
	else {
		func_2();
	}
}

// Position - 0x1B8
void func_2() {
	func_8(-1);
	func_7(0);
	func_6(vLocal_89);
	func_5();
	Global_1312348 = 1;
	Global_1312348.f_1 = Local_83;
	StringCopy(&Global_1312348.f_2, func_4(), 24);
	StringCopy(&Global_1312348.f_8, func_3(Local_83), 32);
	Global_1312348.f_16 = {vLocal_89};
	Global_1315236 = 1;
	func_204(1);
}

// Position - 0x213
char *func_3(int iParam0) {
	char *sVar0;

	if (gameplay::is_ps3_version()) {
		switch (iParam0) {
		case 8: sVar0 = "qLp8OsaeTkCjzhK0SZoRVA"; break;

		case 6: sVar0 = "JhV_7Ir4ekSQLafj22vFkg"; break;

		case 7: sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A"; break;

		case 5: sVar0 = "aNlcpqEkhUytgK-8IMbTYQ"; break;

		case 0: sVar0 = "9aLp9VEnME25Mp_6XZaw0A"; break;

		case 2: sVar0 = "lT9gI2mfrkGDhiW1lSlhbw"; break;

		case 3: sVar0 = "YxiNucGMGEu4lCKqizI2lA"; break;

		case 1: sVar0 = "szYNFSberECI5goiWsh1bw"; break;

		case 4: sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA"; break;
		}
	}
	else if (gameplay::is_xbox360_version()) {
		switch (iParam0) {
		case 0: sVar0 = "dm_test_20"; break;

		case 1: sVar0 = "dm_test_18"; break;

		case 2: sVar0 = "dm_test_2"; break;

		case 3: sVar0 = "dm_test_4"; break;

		case 4: sVar0 = "dm_test_5"; break;

		case 5: sVar0 = "dm_test_16"; break;

		case 6: sVar0 = "dm_test_13"; break;

		case 7: sVar0 = "dm_test_15"; break;

		case 8: sVar0 = "dm_test_24"; break;
		}
	}
	else if (gameplay::is_orbis_version()) {
		switch (iParam0) {
		case 8: sVar0 = "qLp8OsaeTkCjzhK0SZoRVA"; break;

		case 6: sVar0 = "JhV_7Ir4ekSQLafj22vFkg"; break;

		case 7: sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A"; break;

		case 5: sVar0 = "aNlcpqEkhUytgK-8IMbTYQ"; break;

		case 0: sVar0 = "9aLp9VEnME25Mp_6XZaw0A"; break;

		case 2: sVar0 = "lT9gI2mfrkGDhiW1lSlhbw"; break;

		case 3: sVar0 = "YxiNucGMGEu4lCKqizI2lA"; break;

		case 1: sVar0 = "szYNFSberECI5goiWsh1bw"; break;

		case 4: sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA"; break;
		}
	}
	else if (gameplay::is_durango_version()) {
		switch (iParam0) {
		case 0: sVar0 = "dm_test_20"; break;

		case 1: sVar0 = "dm_test_18"; break;

		case 2: sVar0 = "dm_test_2"; break;

		case 3: sVar0 = "dm_test_4"; break;

		case 4: sVar0 = "dm_test_5"; break;

		case 5: sVar0 = "dm_test_16"; break;

		case 6: sVar0 = "dm_test_13"; break;

		case 7: sVar0 = "dm_test_15"; break;

		case 8: sVar0 = "dm_test_24"; break;
		}
	}
	else if (gameplay::is_pc_version()) {
		switch (iParam0) {
		case 0: sVar0 = "dm_test_20"; break;

		case 1: sVar0 = "dm_test_18"; break;

		case 2: sVar0 = "dm_test_2"; break;

		case 3: sVar0 = "dm_test_4"; break;

		case 4: sVar0 = "dm_test_5"; break;

		case 5: sVar0 = "dm_test_16"; break;

		case 6: sVar0 = "dm_test_13"; break;

		case 7: sVar0 = "dm_test_15"; break;

		case 8: sVar0 = "dm_test_24"; break;
		}
	}
	return sVar0;
}

// Position - 0x4EF
char *func_4() {
	char *sVar0;

	if (gameplay::is_ps3_version()) {
		sVar0 = "SPRACE";
	}
	else if (gameplay::is_xbox360_version()) {
		sVar0 = "2535285330962926";
	}
	else if (gameplay::is_orbis_version()) {
		sVar0 = "SPRACE";
	}
	else if (gameplay::is_durango_version()) {
		sVar0 = "2535285330962926";
	}
	else if (gameplay::is_pc_version()) {
		sVar0 = "SPRACE";
	}
	else {
		sVar0 = "SPRACE";
	}
	return sVar0;
}

// Position - 0x54F
void func_5() { gameplay::set_bit(&Global_1312423, 0); }

// Position - 0x560
void func_6(vector3 vParam0) { Global_1312423.f_6 = {vParam0}; }

// Position - 0x574
void func_7(int iParam0) { Global_1312423.f_2 = iParam0; }

// Position - 0x584
void func_8(int iParam0) { Global_1312423.f_1 = iParam0; }

// Position - 0x594
void func_9() {
	int iVar0;
	int iVar1;
	int iVar2;

	Local_83.f_2 = -1;
	if (func_55(player::player_ped_id())) {
		if (!ped::is_ped_wearing_helmet(player::player_ped_id())) {
			ped::set_ped_helmet(player::player_ped_id(), 0);
		}
	}
	while (!func_49()) {
		system::wait(0);
	}
	if (Local_83.f_1 != 3) {
		func_16(func_44(), 1, Local_83.f_3);
		iVar0 = gameplay::get_game_timer() + 1500;
		iVar1 = player::get_players_last_vehicle();
		if (func_14(iVar1)) {
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || gameplay::get_game_timer() < iVar0) {
				system::wait(0);
			}
		}
		iVar2 = player::get_player_index();
		if (player::is_player_playing(iVar2)) {
			player::set_player_control(iVar2, 0, 0);
		}
	}
	func_10();
}

// Position - 0x643
void func_10() {
	if (!func_11(0)) {
		script::request_script("mission_Race");
		while (!script::has_script_loaded("mission_Race")) {
			script::request_script("mission_Race");
			system::wait(0);
		}
		system::start_new_script_with_args("mission_Race", &Local_83, 6, 20500);
	}
	script::set_script_as_no_longer_needed("mission_Race");
	func_204(1);
}

// Position - 0x697
int func_11(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x6C2
int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6) {
	controls::disable_control_action(0, 71, 1);
	controls::disable_control_action(0, 72, 1);
	controls::disable_control_action(0, 76, 1);
	controls::disable_control_action(0, 73, 1);
	controls::disable_control_action(0, 59, 1);
	controls::disable_control_action(0, 60, 1);
	if (iParam5) {
		controls::disable_control_action(0, 75, 1);
	}
	controls::disable_control_action(0, 80, 1);
	if (!iParam6) {
		controls::disable_control_action(0, 69, 1);
		controls::disable_control_action(0, 70, 1);
		controls::disable_control_action(0, 68, 1);
	}
	controls::disable_control_action(0, 74, 1);
	controls::disable_control_action(0, 86, 1);
	controls::disable_control_action(0, 81, 1);
	controls::disable_control_action(0, 82, 1);
	controls::disable_control_action(0, 138, 1);
	controls::disable_control_action(0, 136, 1);
	controls::disable_control_action(0, 114, 1);
	controls::disable_control_action(0, 107, 1);
	controls::disable_control_action(0, 110, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 87, 1);
	controls::disable_control_action(0, 88, 1);
	controls::disable_control_action(0, 113, 1);
	controls::disable_control_action(0, 115, 1);
	controls::disable_control_action(0, 116, 1);
	controls::disable_control_action(0, 117, 1);
	controls::disable_control_action(0, 118, 1);
	controls::disable_control_action(0, 119, 1);
	controls::disable_control_action(0, 131, 1);
	controls::disable_control_action(0, 132, 1);
	controls::disable_control_action(0, 123, 1);
	controls::disable_control_action(0, 126, 1);
	controls::disable_control_action(0, 129, 1);
	controls::disable_control_action(0, 130, 1);
	controls::disable_control_action(0, 133, 1);
	controls::disable_control_action(0, 134, 1);
	cam::_0x17FCA7199A530203();
	func_13(iParam0);
	if (gameplay::get_game_timer() - Global_29 > 500) {
		vehicle::_set_vehicle_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = gameplay::get_game_timer();
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (gameplay::absf(entity::get_entity_speed(iParam0)) <= fParam3) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x851
void func_13(int iParam0) {
	if (vehicle::_get_has_vehicle_got_rocket_boost(iParam0)) {
		if (vehicle::_is_vehicle_rocket_boost_active(iParam0)) {
			vehicle::_set_rocket_boost_active(iParam0, 0);
		}
	}
}

// Position - 0x872
bool func_14(int iParam0) {
	if (func_15(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x89C
bool func_15(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x8BD
int func_16(int iParam0, int iParam1, int iParam2) {
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return 0;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return 0;
	}
	return func_17(Global_101700.f_27009[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

// Position - 0x906
int func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_43();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_42(99, 1);
			func_41(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_41(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_41(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_25(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_24(5)) {
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
			case 0: func_41(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_41(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_41(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_24(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_41(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_41(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_41(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_41(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_41(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_41(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
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
			case 0: func_41(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_41(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_41(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_41(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_41(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_41(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_41(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_41(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_41(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_24(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_41(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_41(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_41(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_41(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_41(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_41(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_23(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_42(95, iParam3); break;

		case 1: func_42(97, iParam3); break;

		case 2: func_42(96, iParam3); break;
		}
		func_42(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_20(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_20(iVar1);
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
		case 0: func_41(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_41(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_41(joaat("sp2_total_cash_earned"), iParam3); break;
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
	func_19(iParam0);
	if (Global_35781 == 15) {
		func_18(0);
	}
	return 1;
}

// Position - 0xF05
void func_18(int iParam0) {
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

// Position - 0x1187
void func_19(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x11E1
void func_20(int iParam0) {
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
			 gameplay::is_bit_set(Global_2097152[func_22() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_22() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_21(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x12A4
char *func_21(int iParam0) {
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

// Position - 0x131F
int func_22() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x132C
void func_23(int iParam0) {
	func_42(93, iParam0);
	func_42(29, iParam0);
	func_42(30, iParam0);
}

// Position - 0x134C
bool func_24(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_22() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x1388
int func_25(int iParam0) {
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
		func_40(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_26(27, 1);
	return 1;
}

// Position - 0x143F
int func_26(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_27(iParam0, iParam1);
}

// Position - 0x145A
int func_27(int iParam0, int iParam1) {
	if (func_39(14) && !func_38(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_37(&Global_2595550)) {
		if (func_35(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_28(&Global_2595550, iParam0)) {
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

// Position - 0x14F7
bool func_28(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_39(14) && !func_38(iParam1)) {
		return false;
	}
	if (func_35(uParam0, iParam1)) {
		return false;
	}
	if (func_34(uParam0) < 0f) {
		func_33(uParam0, 0);
	}
	func_31(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_29(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x15A8
int func_29(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_39(14) && !func_38(iParam1)) {
		return 0;
	}
	if (func_35(uParam0, iParam1)) {
		return 0;
	}
	if (func_34(uParam0) < 0f) {
		func_33(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_30(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x1623
bool func_30(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x1634
void func_31(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_32(uParam0, iVar0);
		iVar0++;
	}
	func_33(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x1668
void func_32(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x1678
void func_33(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x1695
float func_34(var *uParam0) { return uParam0->f_72; }

// Position - 0x16A1
bool func_35(var *uParam0, int iParam1) { return func_36(uParam0, iParam1) != -1; }

// Position - 0x16B3
int func_36(var *uParam0, int iParam1) {
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

// Position - 0x16E0
bool func_37(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x16EE
int func_38(int iParam0) {
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

// Position - 0x173E
bool func_39(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x174C
int func_40(int iParam0, int iParam1) {
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

// Position - 0x179D
void func_41(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x17C0
void func_42(int iParam0, int iParam1) {
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

// Position - 0x181D
void func_43() {
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

// Position - 0x1892
int func_44() {
	func_45();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x18AB
void func_45() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_48(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_47(player::player_ped_id());
			if (func_46(iVar0) && (!func_39(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_46(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x19A8
bool func_46(int iParam0) { return iParam0 < 3; }

// Position - 0x19B4
int func_47(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_48(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x19F1
int func_48(int iParam0) {
	if (func_46(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x1A1B
int func_49() {
	int iVar0;

	iVar0 = func_50(&Local_83.f_2, 0, 9, 0, 0);
	if (iVar0 != 1) {
		return 0;
	}
	return 1;
}

// Position - 0x1A3F
int func_50(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_54(0)) {
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
		if (!func_52(iParam2)) {
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
			func_51(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x1B76
void func_51(int *iParam0, int iParam1) {
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

// Position - 0x1BC5
bool func_52(int iParam0) { return func_53(iParam0, Global_35781); }

// Position - 0x1BD6
int func_53(int iParam0, int iParam1) {
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

// Position - 0x1DB7
bool func_54(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_52(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x1DD9
bool func_55(int iParam0) {
	if (func_15(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x1DF9
void func_56() {
	int iVar0;

	switch (iLocal_96) {
	case 0:
		if (func_118(0, -1, 0)) {
			ui::clear_help(1);
			func_106();
			audio::set_user_radio_control_enabled(0);
			iLocal_101 = 1;
			bLocal_99 = false;
			iLocal_100 = 0;
			iLocal_96 = 1;
		}
		break;

	case 1:
		if (func_70()) {
			iLocal_96 = 2;
		}
		break;

	case 2:
		iVar0 = player::get_player_index();
		player::set_everyone_ignore_player(iVar0, 0);
		player::set_player_control(iVar0, 1, 0);
		func_60(0, 1, 1, 0);
		func_57(1, -1);
		iLocal_96 = 0;
		if (bLocal_99) {
			iLocal_82 = 3;
		}
		else {
			audio::set_user_radio_control_enabled(1);
			iLocal_82 = 1;
		}
		break;
	}
}

// Position - 0x1E8A
void func_57(int iParam0, int iParam1) {
	int iVar0;

	if (!func_59(&iVar0, 0, iParam1)) {
		return;
	}
	if (Global_17290.f_7899) {
		ui::reset_hud_component_values(15);
		Global_17290.f_7899 = 0;
	}
	ui::_0x55598D21339CB998(0f);
	if (Global_17290.f_5498[iVar0]) {
		ui::clear_additional_text(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0]) {
		graphics::set_streamed_texture_dict_as_no_longer_needed("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0]) {
		graphics::set_streamed_texture_dict_as_no_longer_needed("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (iParam0) {
		func_58(&Global_17290.f_5530[iVar0 /*10*/]);
		Global_17290.f_5591[iVar0] = 0;
	}
	else {
		Global_17290.f_5591[iVar0] = 0;
	}
}

// Position - 0x1F48
void func_58(int *iParam0) {
	if (uParam0->f_9 != 0) {
		if (graphics::has_scaleform_movie_loaded(*uParam0)) {
			graphics::set_scaleform_movie_as_no_longer_needed(uParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

// Position - 0x1F71
int func_59(int *iParam0, int iParam1, int iParam2) {
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1) {
		if (network::network_is_game_in_progress() && network::network_get_this_script_is_network_script()) {
			iParam2 = network::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, script::get_this_script_name(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = gameplay::get_hash_key(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6) {
		if (Global_17290.f_5591[iVar17] == iVar16) {
			*iParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0) {
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (iParam1) {
		if (iVar18 != -1) {
			Global_17290.f_5591[iVar18] = iVar16;
			*iParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

// Position - 0x200E
void func_60(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_69(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_68()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_67(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		G_DisableMessagesAndCalls1 = 1;
	}
	else {
		func_69(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_67(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_65(player::player_id()) &&
				!func_62(player::player_id(), 0) && !func_61()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_65(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		G_DisableMessagesAndCalls1 = 0;
	}
}

// Position - 0x2127
bool func_61() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x2144
bool func_62(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_63(-1, 0) == 8;
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

// Position - 0x218F
int func_63(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_64();
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

// Position - 0x21D0
var func_64() { return Global_1312735; }

// Position - 0x21DC
int func_65(int iParam0) {
	if (func_62(iParam0, 0)) {
		return 1;
	}
	if (func_66()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x221E
bool func_66() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x222F
int func_67(int iParam0, int iParam1, var uParam2, int iParam3) {
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

// Position - 0x2262
int func_68() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x2289
void func_69(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 13);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 13);
	}
}

// Position - 0x22AC
bool func_70() {
	int iVar0;
	int iVar1;
	var *uVar2;
	var *uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;

	func_105(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	controls::set_input_exclusive(2, 201);
	controls::set_input_exclusive(2, 202);
	controls::set_input_exclusive(2, 188);
	controls::set_input_exclusive(2, 187);
	if (iLocal_98 != 0) {
		if (system::timera() > 800 || iVar1 > -64 && iVar1 < 64 && iVar0 > -64 && iVar0 < 64) {
			iLocal_98 = 0;
		}
		else {
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = iVar1 < -64 || controls::is_control_just_pressed(2, 188);
	bVar5 = iVar1 > 64 || controls::is_control_just_pressed(2, 187);
	bVar6 = controls::is_control_just_pressed(2, 201);
	bVar7 = controls::is_control_just_pressed(2, 202);
	bVar8 = iVar1 < -64 || iVar1 > 64;
	if (bVar6) {
		if (iLocal_97 == 1) {
			iLocal_100 = 1;
		}
		else {
			iLocal_100 = 0;
		}
		bLocal_99 = true;
		return true;
	}
	else if (bVar7) {
		iLocal_194 = 0;
		bLocal_99 = false;
		return true;
	}
	else {
		if (bVar5) {
			if (iLocal_97 == 0) {
				iLocal_97 = 1;
			}
			else if (iLocal_97 == 0) {
			}
		}
		else if (bVar4) {
			if (iLocal_97 == 1) {
				iLocal_97 = 0;
			}
			else if (iLocal_97 == 1) {
			}
		}
		if (bVar5 || bVar4) {
			if (bVar8) {
				system::settimera(0);
				iLocal_98 = 1;
			}
			func_104(iLocal_97, 1, 1);
		}
	}
	func_71(1, -1, 1, 0, 1, -1082130432, 0, 0);
	return false;
}

// Position - 0x2407
void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7) {
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float *fVar36;
	vector3 vVar37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int *iVar46;
	int *iVar47;
	int *iVar48;
	float fVar49;
	int iVar50;
	int iVar51;
	bool bVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar80[64];
	float fVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;

	if (!func_59(&iVar0, 0, iParam1)) {
		return;
	}
	if (iVar0 == -1) {
	}
	if (!func_101(0, iParam6)) {
		return;
	}
	graphics::_set_screen_draw_position(76, 84);
	graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290) {
		if (func_99(29, 1, 1, &fVar35, &fVar36, iParam7)) {
			fVar56 = fVar36;
			fVar57 = fVar35;
			fVar56 += 0f;
		}
		else {
			Global_17290 = 0;
		}
	}
	if (gameplay::get_hash_key(&Global_17290.f_1) == gameplay::get_hash_key("HIDE")) {
		fVar58 = Global_17288;
	}
	else {
		fVar58 = Global_17288 + fVar56 + 0.034722f + 0f;
	}
	if (fParam5 == -1f) {
		fParam5 = Global_17289;
	}
	fVar61 = 1f;
	if (iParam7) {
		graphics::_get_active_screen_resolution(&iVar59, &iVar60);
		fVar62 = graphics::_get_aspect_ratio(0);
		if (func_98()) {
			iVar59 = system::round(system::to_float(iVar60) * fVar62);
		}
		fVar63 = system::to_float(iVar59) / system::to_float(iVar60);
		fVar61 = fVar63 / fVar62;
		if (func_98()) {
			fVar61 = 1f;
		}
		iVar59 = system::round(system::to_float(iVar59) / fVar61);
		iVar60 = system::round(system::to_float(iVar60) / fVar61);
	}
	else {
		graphics::get_screen_resolution(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2) {
		if (iVar5 == 1 && Global_17290.f_5598) {
			if (gameplay::get_hash_key(&Global_17290.f_1) == gameplay::get_hash_key("HIDE")) {
				fVar49 = Global_17288;
			}
			else {
				if (Global_17290) {
					StringCopy(&cVar64, func_97(29), 64);
					StringCopy(&cVar80, func_94(29, 1), 64);
					if (gameplay::get_hash_key(&Global_17290.f_6703[29 /*16*/]) == -1487683087) {
						func_93(Global_17287, Global_17288, fParam5, fVar56 - 0f, 0, 0, 0, 255);
						graphics::draw_sprite(&cVar64, &cVar80, Global_17287 + fParam5 * 0.5f,
											  Global_17288 + (fVar56 - 0f) * 0.5f, fVar57, fVar56 - 0f, 0f, 255, 255,
											  255, 255, 0);
					}
					else {
						graphics::draw_sprite(&cVar64, &cVar80, Global_17287 + fParam5 * 0.5f,
											  Global_17288 + (fVar56 - 0f) * 0.5f, fParam5, fVar56 - 0f, 0f, 255, 255,
											  255, 255, 0);
					}
				}
				if (Global_17290.f_7869) {
					iVar1 = Global_17290.f_7865;
					iVar2 = Global_17290.f_7866;
					iVar3 = Global_17290.f_7867;
					iVar4 = Global_17290.f_7868;
				}
				else {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_93(Global_17287, Global_17288 + fVar56, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = Global_17288 + fVar56 + 0.034722f + 0f;
				if (gameplay::get_hash_key(&Global_17290.f_1) != 0) {
					func_92();
					ui::begin_text_command_display_text(&Global_17290.f_1);
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68) {
						if (Global_17290.f_5[iVar14] == 2) {
							ui::add_text_component_integer(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3) {
							ui::add_text_component_float(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1) {
							ui::add_text_component_substring_text_label(&Global_17290.f_22[iVar17 /*4*/]);
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8) {
							ui::add_text_component_substring_text_label(&Global_17290.f_22[iVar17 /*4*/]);
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6) {
							ui::add_text_component_substring_text_label(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						iVar14++;
					}
					ui::end_text_command_display_text(Global_17287 + 0.00390625f, Global_17288 + fVar56 + 0.00416664f,
													  0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095) {
					if (Global_17290.f_5604 != 0) {
						func_92();
						func_90(Global_17287 + fParam5 - 0.00390625f -
									func_91("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603),
								Global_17288 + fVar56 + 0.00416664f, "CM_ITEM_COUNT", Global_17290.f_5604,
								Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar96 = fVar49;
			if (Global_17290.f_7879) {
				iVar1 = Global_17290.f_7875;
				iVar2 = Global_17290.f_7876;
				iVar3 = Global_17290.f_7877;
				iVar4 = Global_17290.f_7878;
			}
			else {
				ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088) {
				if (iVar6 >= 0) {
					if (Global_17290.f_5355[iVar6]) {
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605) {
							fVar49 += 0.00277776f;
						}
						fVar55 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f) {
							fVar55 = Global_17290.f_5612[iVar6];
						}
						fVar49 += fVar55;
						iVar9++;
					}
				}
				iVar6++;
			}
			if (iParam3) {
				if (iVar9 <= 1) {
					fVar55 = 0.034722f;
					fVar49 += fVar55;
					iVar9++;
					if (Global_17290.f_5088 <= 1) {
						Global_17290.f_5088++;
					}
					iVar53 = 1;
				}
			}
			graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
								  fVar96 + (fVar49 - fVar96) * 0.5f - 0.00138888f, fParam5, fVar49 - fVar96, 0f, 255,
								  255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095) {
				if (Global_17290.f_7884) {
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_93(Global_17287, fVar49 + 0f, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar37 = {graphics::get_texture_resolution("CommonMenu", "shop_arrows_upANDdown")};
				vVar37.x *= 0.5f / fVar61;
				vVar37.y *= 0.5f / fVar61;
				if (Global_17290.f_7897) {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else {
					ui::get_hud_colour(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "shop_arrows_upANDdown", Global_17287 + fParam5 * 0.5f,
									  fVar49 + 0f + 0.034722f * 0.5f, vVar37.x / 1280f * fVar61,
									  vVar37.y / 720f * fVar61, 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 += 0f + 0.034722f;
			}
			if (gameplay::get_hash_key(&Global_17290.f_4562) != 0 && Global_17290.f_4636 != -1) {
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17287 + 0.0046875f;
				if (Global_17290.f_4638 != 0) {
					func_99(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17287 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_89(fVar41);
				ui::_begin_text_command_line_count(&Global_17290.f_4562);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632) {
					if (Global_17290.f_4566[iVar14] == 2) {
						ui::add_text_component_integer(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3) {
						ui::add_text_component_float(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = ui::_end_text_command_get_line_count(fVar41, fVar49 + 0.00277776f);
				ui::get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_93(Global_17287, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7889) {
					iVar1 = Global_17290.f_7885;
					iVar2 = Global_17290.f_7886;
					iVar3 = Global_17290.f_7887;
					iVar4 = Global_17290.f_7888;
				}
				else {
					ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
									  fVar49 +
										  (ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) +
										   0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1)) *
											  0.5f -
										  0.00138888f,
									  fParam5,
									  ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
										  0.00138888f * 5f * IntToFloat(iVar6 - 1),
									  0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_89(fVar41);
				ui::begin_text_command_display_text(&Global_17290.f_4562);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632) {
					if (Global_17290.f_4566[iVar14] == 2) {
						ui::add_text_component_integer(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3) {
						ui::add_text_component_float(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					iVar14++;
				}
				ui::end_text_command_display_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_17290.f_4638 != 0) {
					func_99(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					func_88(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					graphics::draw_sprite(func_97(Global_17290.f_4638), func_94(Global_17290.f_4638, 1),
										  Global_17287 + fVar35 * 0.5f + 0.00078125f * 2f,
										  fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47,
										  iVar48, 255, 0);
				}
				fVar49 += ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
						  0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_17290.f_4636 > 0) {
					if (gameplay::get_game_timer() - Global_17290.f_4637 > Global_17290.f_4636) {
						StringCopy(&Global_17290.f_4562, "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (gameplay::get_hash_key(&Global_2593974.f_21) != 0 && Global_2593974.f_65 != -1) {
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17287 + 0.0046875f;
				if (Global_2593974.f_67 != 0) {
					func_99(Global_2593974.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17287 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_89(fVar41);
				ui::_begin_text_command_line_count(&Global_2593974.f_21);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593974.f_61) {
					if (Global_2593974.f_25[iVar14] == 2) {
						ui::add_text_component_integer(Global_2593974.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593974.f_25[iVar14] == 3) {
						ui::add_text_component_float(Global_2593974.f_34[iVar16], Global_2593974.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593974.f_25[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = ui::_end_text_command_get_line_count(fVar41, fVar49 + 0.00277776f);
				ui::get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_93(Global_17287, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7889) {
					iVar1 = Global_17290.f_7885;
					iVar2 = Global_17290.f_7886;
					iVar3 = Global_17290.f_7887;
					iVar4 = Global_17290.f_7888;
				}
				else {
					ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
									  fVar49 +
										  (ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) +
										   0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1)) *
											  0.5f -
										  0.00138888f,
									  fParam5,
									  ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
										  0.00138888f * 5f * IntToFloat(iVar6 - 1),
									  0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_89(fVar41);
				ui::begin_text_command_display_text(&Global_2593974.f_21);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593974.f_61) {
					if (Global_2593974.f_25[iVar14] == 2) {
						ui::add_text_component_integer(Global_2593974.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593974.f_25[iVar14] == 3) {
						ui::add_text_component_float(Global_2593974.f_34[iVar16], Global_2593974.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593974.f_25[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					iVar14++;
				}
				ui::end_text_command_display_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_2593974.f_67 != 0) {
					func_99(Global_2593974.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					func_88(Global_2593974.f_67, 1, &iVar46, &iVar47, &iVar48);
					graphics::draw_sprite(func_97(Global_2593974.f_67), func_94(Global_2593974.f_67, 1),
										  Global_17287 + fVar35 * 0.5f + 0.00078125f * 2f,
										  fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47,
										  iVar48, 255, 0);
				}
				fVar49 += ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
						  0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_2593974.f_65 > 0) {
					if (gameplay::get_game_timer() - Global_2593974.f_66 > Global_2593974.f_65) {
						StringCopy(&Global_2593974.f_21, "", 16);
						Global_2593974.f_65 = -1;
					}
				}
			}
			func_83(iVar59, iParam1, 0, 0, 0, 0, iParam4, 1, 0);
			graphics::_set_screen_draw_position(76, 84);
			graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598) {
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar97 = Global_17290.f_5088;
			if (Global_17290.f_5599) {
				iVar97 = Global_17290.f_5602 - 1;
			}
			fVar98 = 0f;
			fVar99 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar97) {
				fVar55 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f) {
					fVar55 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599) {
					iVar6 = Global_17290.f_7520[iVar7];
				}
				else {
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095) {
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6) {
						fVar99 = fVar98;
					}
					if (Global_17290.f_5226[iVar6]) {
						iVar12++;
					}
					fVar34 = fVar58 + fVar98 + 0.00277776f * IntToFloat(iVar12) + 0.00277776f;
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = Global_17287 + 0.0046875f;
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if (bVar31 && iVar5 == 1 && bVar32) {
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_17290.f_7891) {
						ui::get_hud_colour(Global_17290.f_7890, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else {
						ui::get_hud_colour(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					graphics::draw_sprite("CommonMenu", "Gradient_Nav", Global_17287 + fParam5 * 0.5f,
										  fVar58 + fVar99 + 0.00277776f * IntToFloat(iVar12) + fVar55 * 0.5f, fParam5,
										  fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97) {
					func_81(bVar31, 1, 0, 0, 0, 0, 0);
					ui::begin_text_command_display_text("DFLT_MNU_OPT");
					ui::end_text_command_display_text(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else {
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096) {
						if (gameplay::is_bit_set(Global_17290.f_4959[iVar6], iVar8) ||
							Global_17290.f_4926[iVar8] == 5) {
							if (Global_17290.f_5599) {
								iVar19 = Global_17290.f_7536[iVar9 * Global_17290.f_5096 + iVar8];
								iVar20 = Global_17290.f_7577[iVar9 * Global_17290.f_5096 + iVar8];
								iVar21 = Global_17290.f_7618[iVar9 * Global_17290.f_5096 + iVar8];
								iVar22 = Global_17290.f_7659[iVar9 * Global_17290.f_5096 + iVar8];
								iVar23 = Global_17290.f_7700[iVar9 * Global_17290.f_5096 + iVar8];
							}
							else {
								Global_17290.f_7536[iVar9 * Global_17290.f_5096 + iVar8] = iVar19;
								Global_17290.f_7577[iVar9 * Global_17290.f_5096 + iVar8] = iVar20;
								Global_17290.f_7618[iVar9 * Global_17290.f_5096 + iVar8] = iVar21;
								Global_17290.f_7659[iVar9 * Global_17290.f_5096 + iVar8] = iVar22;
								Global_17290.f_7700[iVar9 * Global_17290.f_5096 + iVar8] = iVar23;
							}
							iVar104 = 0;
							iVar54 = 0;
							if (Global_17290.f_5878[0] != -1) {
								if (iVar6 * 5 + iVar8 == Global_17290.f_5875[0]) {
									iVar54 = 1;
									iVar104 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1) {
								if (iVar6 * 5 + iVar8 == Global_17290.f_5875[1]) {
									iVar54 = 1;
									iVar104 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f) {
								fVar33 = Global_17287 + 0.0046875f + Global_17290.f_4932[iVar8];
							}
							if (iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f &&
								fVar33 < Global_17290.f_4932[iVar8 + 1]) {
								fVar45 = Global_17290.f_4932[iVar8 + 1] - fVar33;
							}
							else {
								fVar45 = Global_17287 + Global_17289 - 0.0046875f - fVar33;
							}
							if (Global_17290.f_4945[iVar8] && Global_17290.f_5741 && bVar31) {
								bVar52 = true;
							}
							else {
								bVar52 = false;
							}
							switch (Global_17290.f_4926[iVar8]) {
							case 0: break;

							case 1:
								iVar24 = iVar19;
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										fVar42 = 0f;
										fVar43 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
											iVar50 = 0;
											iVar51 = 0;
											iVar14 = 0;
											while (iVar14 < 4) {
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 ||
													Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
													iVar51 = 1;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
													iVar50 = 1;
												}
												iVar14++;
											}
											func_81(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
													iVar54, iVar104, iVar51, iVar50);
											ui::_begin_text_command_width(&Global_17290.f_73[iVar24 /*6*/]);
										}
										iVar14 = 0;
										while (iVar14 < 4) {
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
												iVar25++;
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
												}
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
												iVar25++;
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
												}
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_integer(
														Global_17290.f_3918[iVar20 + iVar26]);
												}
												iVar26++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_float(Global_17290.f_4175[iVar21 + iVar27],
																				 Global_17290.f_4304[iVar21 + iVar27]);
												}
												iVar27++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
												iVar28++;
											}
											iVar14++;
										}
										if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
											fVar42 = ui::_end_text_command_get_width(1);
										}
										if (iVar28 > 0) {
											iVar14 = 0;
											while (iVar14 < iVar28) {
												if (func_99(Global_17290.f_4433[iVar22 + iVar14], bVar31, 0, &fVar35,
															&fVar36, iParam7)) {
													fVar43 += fVar35;
													if (iVar14 > 0) {
														fVar43 -= 0.00078125f * 4f;
													}
													if (Global_17290.f_4433[iVar22 + iVar14] == 2 ||
														Global_17290.f_4433[iVar22 + iVar14] == 48) {
														fVar43 -= 0.00078125f * 5f;
													}
												}
												iVar14++;
											}
										}
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - (fVar42 + fVar43) + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - (fVar42 + fVar43) * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
										Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8] = fVar43;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
										fVar43 = Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_99(26, 1, 0, &fVar35, &fVar36, iParam7)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_99(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_88(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_97(26), func_94(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_99(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_99(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_88(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_97(27), func_94(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar30 = 0;
									if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
										iVar50 = 0;
										iVar51 = 0;
										iVar14 = 0;
										while (iVar14 < 4) {
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 ||
												Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
												iVar51 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
												iVar50 = 1;
											}
											iVar14++;
										}
										func_81(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												iVar54, 0, iVar51, iVar50);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_80(bVar31);
										}
										ui::begin_text_command_display_text(&Global_17290.f_73[iVar24 /*6*/]);
									}
									iVar14 = 0;
									while (iVar14 < 4) {
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
											iVar25++;
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
											}
											iVar30 = 1;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
											iVar25++;
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
											}
											iVar30 = 8;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 5;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 6;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 7;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 9;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_integer(Global_17290.f_3918[iVar20 + iVar26]);
											}
											iVar26++;
											iVar30 = 2;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_float(Global_17290.f_4175[iVar21 + iVar27],
																			 Global_17290.f_4304[iVar21 + iVar27]);
											}
											iVar27++;
											iVar30 = 3;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
											if (Global_17290.f_4433[iVar22 + iVar28] == 2 ||
												Global_17290.f_4433[iVar22 + iVar28] == 48) {
												if (func_99(Global_17290.f_4433[iVar22 + iVar28], bVar31, 0, &fVar35,
															&fVar36, iParam7)) {
													fVar41 += fVar35 * 0.5f;
													if (func_99(Global_17290.f_4433[iVar22 + iVar28], bVar31, 1,
																&fVar35, &fVar36, iParam7)) {
														func_88(Global_17290.f_4433[iVar22 + iVar28], bVar31, &iVar46,
																&iVar47, &iVar48);
														if (Global_17290.f_4953[iVar8] == 2) {
															graphics::draw_sprite(
																func_97(Global_17290.f_4433[iVar22 + iVar28]),
																func_94(Global_17290.f_4433[iVar22 + iVar28], bVar31),
																fVar33 + fVar41 - 0.00078125f * 8f + 0.00078125f * 4f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else {
															graphics::draw_sprite(
																func_97(Global_17290.f_4433[iVar22 + iVar28]),
																func_94(Global_17290.f_4433[iVar22 + iVar28], bVar31),
																fVar33 + fVar41 - 0.00078125f * 8f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														fVar41 += 0.00078125f * 3f;
													}
												}
											}
											iVar28++;
											iVar30 = 4;
										}
										iVar14++;
									}
									if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
										if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2) {
											ui::end_text_command_display_text(fVar33 + fVar41 + 0.00078125f * 7f,
																			  fVar34, 0);
										}
										else {
											ui::end_text_command_display_text(fVar33 + fVar41, fVar34, 0);
										}
									}
									if (iVar28 > 0) {
										fVar41 += 6f * 0.00078125f;
										iVar14 = 0;
										while (iVar14 < iVar28) {
											if (Global_17290.f_4433[iVar22 + iVar14] != 2 &&
												Global_17290.f_4433[iVar22 + iVar14] != 48) {
												if (func_99(Global_17290.f_4433[iVar22 + iVar14], bVar31, 0, &fVar35,
															&fVar36, iParam7)) {
													fVar41 += fVar35 * 0.5f;
													if (func_99(Global_17290.f_4433[iVar22 + iVar14], bVar31, 1,
																&fVar35, &fVar36, iParam7)) {
														func_88(Global_17290.f_4433[iVar22 + iVar14], bVar31, &iVar46,
																&iVar47, &iVar48);
														if (Global_17290.f_4433[iVar22 + iVar14] == 30) {
															graphics::draw_sprite(
																func_97(Global_17290.f_4433[iVar22 + iVar14]),
																func_94(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																Global_17287 + fVar35 * 0.5f,
																fVar34 + 0.00277776f + fVar36 * 0.5f -
																	0.00078125f * 11f,
																fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else if (Global_17290.f_4953[iVar8] == 2) {
															graphics::draw_sprite(
																func_97(Global_17290.f_4433[iVar22 + iVar14]),
																func_94(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																fVar33 + fVar41 + fVar42 - 0.00078125f * 8f +
																	0.00078125f * 4f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else {
															graphics::draw_sprite(
																func_97(Global_17290.f_4433[iVar22 + iVar14]),
																func_94(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																fVar33 + fVar41 + fVar42 - 0.00078125f * 12f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
													}
													fVar41 += 12f * 0.00078125f;
												}
											}
											iVar14++;
										}
									}
								}
								bVar40 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4) {
									if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
										iVar19++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
										iVar19++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
										iVar20++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
										iVar21++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
										iVar22++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
										iVar23++;
									}
									iVar14++;
								}
								break;

							case 2:
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										func_81(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												iVar54, 0, 0, 0);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_80(bVar31);
										}
										ui::_begin_text_command_width("NUMBER");
										ui::add_text_component_integer(Global_17290.f_3918[iVar20]);
										fVar42 = ui::_end_text_command_get_width(1);
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - fVar42 * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_99(26, 1, 0, &fVar35, &fVar36, iParam7)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_99(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_88(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_97(26), func_94(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_99(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_99(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_88(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_97(27), func_94(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									func_81(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], iVar54, 0,
											0, 0);
									func_79(fVar33 + fVar41, fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
								}
								bVar40 = true;
								iVar20++;
								break;

							case 3:
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										func_81(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												iVar54, 0, 0, 0);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_80(bVar31);
										}
										ui::_begin_text_command_width("NUMBER");
										ui::add_text_component_float(Global_17290.f_4175[iVar21],
																	 Global_17290.f_4304[iVar21]);
										fVar42 = ui::_end_text_command_get_width(1);
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - fVar42 * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_99(26, 1, 0, &fVar35, &fVar36, 0)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_99(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_88(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_97(26), func_94(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_99(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_99(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_88(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_97(27), func_94(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									func_81(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], iVar54, 0,
											0, 0);
									func_78(fVar33 + fVar41, fVar34, "NUMBER", Global_17290.f_4175[iVar21],
											Global_17290.f_4304[iVar21]);
								}
								bVar40 = true;
								iVar21++;
								break;

							case 4:
								if (iVar5 == 1 && bVar32) {
									if (func_99(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, iParam7)) {
										if (!Global_17290.f_5599) {
											fVar43 = fVar35;
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 += fVar45 - fVar43 + 0.00078125f * 1f;
											}
											else if (Global_17290.f_4953[iVar8] == 0) {
												fVar41 += (fVar45 - fVar33) * 0.5f - fVar43 * 0.5f;
											}
											Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
											Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8] = fVar43;
										}
										else {
											fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
											fVar43 = Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8];
										}
										if (bVar52) {
											if (func_99(26, 1, 0, &fVar35, &fVar36, iParam7)) {
												if (Global_17290.f_4953[iVar8] == 2) {
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_99(26, 1, 1, &fVar35, &fVar36, iParam7)) {
													func_88(26, 1, &iVar46, &iVar47, &iVar48);
													graphics::draw_sprite(func_97(26), func_94(26, 1),
																		  fVar33 + fVar41 + fVar44,
																		  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																		  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_99(27, 1, 0, &fVar35, &fVar36, iParam7)) {
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_99(27, 1, 1, &fVar35, &fVar36, iParam7)) {
													func_88(27, 1, &iVar46, &iVar47, &iVar48);
													graphics::draw_sprite(func_97(27), func_94(27, 1),
																		  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																		  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																		  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										if (func_99(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36,
													iParam7)) {
											func_88(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
											graphics::draw_sprite(func_97(Global_17290.f_4433[iVar22]),
																  func_94(Global_17290.f_4433[iVar22], bVar31),
																  fVar33 + fVar41 + fVar35 * 0.5f,
																  fVar34 - 0.00277776f + fVar55 * 0.5f,
																  fVar35 * func_77(Global_17290.f_4433[iVar22]),
																  fVar36 * func_77(Global_17290.f_4433[iVar22]), 0f,
																  iVar46, iVar47, iVar48, 255, 0);
										}
									}
								}
								bVar40 = true;
								iVar22++;
								break;

							case 5: bVar40 = true; break;
							}
							if (Global_17290.f_4926[iVar8] == 5) {
								if (Global_17290.f_4938[iVar8] > 0.05f) {
									fVar33 += Global_17290.f_4938[iVar8];
								}
								else {
									fVar33 += 0.05f;
								}
							}
							else {
								fVar33 += Global_17290.f_4938[iVar8];
								if (Global_17290.f_4945[iVar8]) {
									if (func_99(26, 1, 1, &fVar35, &fVar36, iParam7)) {
										fVar33 -= fVar35;
									}
								}
							}
						}
						else {
							fVar33 += Global_17290.f_4938[iVar8];
						}
						iVar8++;
					}
				}
				if (bVar40) {
					if (bVar32) {
						Global_17290.f_7520[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6]) {
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f) {
							fVar98 += Global_17290.f_5612[iVar6];
						}
						else {
							fVar98 += 0.034722f;
						}
					}
					if (!Global_17290.f_5598) {
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6]) {
							if (bVar31) {
								Global_17290.f_5604 = 0;
							}
						}
						else {
							iVar11++;
							if (bVar31) {
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598) {
				Global_17290.f_5600 = fVar58 + fVar98 + 0.00277776f * IntToFloat(iVar12);
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599) {
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar49;
	Global_17290.f_5745 = gameplay::get_game_timer();
	ui::_0x55598D21339CB998(Global_17290.f_5743);
	if (!Global_17290.f_7864) {
		func_73();
	}
	Global_17290.f_7864 = 0;
	if (iParam2) {
		ui::hide_hud_component_this_frame(10);
	}
	ui::hide_hud_component_this_frame(6);
	ui::hide_hud_component_this_frame(7);
	ui::hide_hud_component_this_frame(9);
	ui::hide_hud_component_this_frame(8);
	if (iParam0) {
		func_72(1);
	}
	graphics::_screen_draw_position_end();
}

// Position - 0x4F6E
void func_72(int iParam0) { Global_1354542.f_995 = iParam0; }

// Position - 0x4F7F
void func_73() {
	if (Global_14443.f_1 != 1) {
		if (func_76(0)) {
			func_74(0);
		}
		gameplay::set_bit(&G_SleepModeOffOn11, 2);
	}
}

// Position - 0x4FA7
void func_74(int iParam0) {
	if (Global_14604) {
		func_75(0, 0);
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
	if (!func_68()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x5017
void func_75(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_76(0)) {
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

// Position - 0x508B
bool func_76(int iParam0) {
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

// Position - 0x50E5
float func_77(int iParam0) {
	switch (iParam0) {
	case 35:
	case 34:
	case 47:
	case 46:
	case 42:
	case 36:
	case 37:
	case 39:
	case 40:
	case 38:
	case 50:
	case 43:
	case 44:
	case 45: return 0.85f;
	}
	return 1f;
}

// Position - 0x5154
void func_78(float fParam0, float fParam1, char *sParam2, float fParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_float(fParam3, iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x5173
void func_79(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::end_text_command_display_text(fParam0, fParam1, iParam4);
}

// Position - 0x5191
void func_80(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (iParam0) {
		ui::get_hud_colour(Global_17290.f_7892[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else {
		ui::get_hud_colour(Global_17290.f_7892[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	ui::set_text_colour(iVar0, iVar1, iVar2, 255);
}

// Position - 0x51D7
void func_81(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam2) {
		if (iParam3) {
			func_82(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if (iVar0 < 20 && iVar1 < 20 && iVar2 < 20) {
				if (iParam0 == 0) {
					ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if (iVar0 > 230 && iVar1 > 230 && iVar2 > 230) {
				if (iParam0) {
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			ui::set_text_colour(iVar0, iVar1, iVar2, 255);
		}
		else if (iParam1) {
			if (iParam0) {
				ui::get_hud_colour(14, &iVar0, &iVar1, &iVar2, &iVar3);
				ui::set_text_colour(iVar0, iVar1, iVar2, 255);
			}
			else {
				ui::get_hud_colour(12, &iVar0, &iVar1, &iVar2, &iVar3);
				ui::set_text_colour(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (iParam0) {
			ui::set_text_colour(155, 155, 155, 255);
		}
		else {
			ui::set_text_colour(155, 155, 155, 255);
		}
	}
	else if (iParam1) {
		if (iParam0) {
			ui::set_text_colour(0, 0, 0, system::floor(255f * 0.8f));
		}
		else {
			ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
			ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (iParam0) {
		ui::set_text_colour(155, 155, 155, 255);
	}
	else {
		ui::set_text_colour(155, 155, 155, 255);
	}
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_justification(1);
	if (iParam5) {
		ui::set_text_scale(0f, 0.425f);
		ui::set_text_font(4);
	}
	else if (iParam6) {
		ui::set_text_scale(0f, 0.425f);
		ui::set_text_font(6);
	}
	else {
		ui::set_text_font(0);
	}
	ui::set_text_wrap(0f, 1f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x5385
void func_82(int iParam0, int *iParam1, int *iParam2, int *iParam3) {
	switch (iParam0) {
	case 0:
		*iParam1 = 8;
		*iParam2 = 8;
		*iParam3 = 8;
		break;

	case 1:
		*iParam1 = 37;
		*iParam2 = 37;
		*iParam3 = 39;
		break;

	case 22:
		*iParam1 = 140;
		*iParam2 = 146;
		*iParam3 = 154;
		break;

	case 23:
		*iParam1 = 91;
		*iParam2 = 93;
		*iParam3 = 94;
		break;

	case 6:
		*iParam1 = 81;
		*iParam2 = 84;
		*iParam3 = 89;
		break;

	case 111:
		*iParam1 = 240;
		*iParam2 = 240;
		*iParam3 = 240;
		break;

	case 28:
		*iParam1 = 150;
		*iParam2 = 8;
		*iParam3 = 0;
		break;

	case 34:
		*iParam1 = 38;
		*iParam2 = 3;
		*iParam3 = 6;
		break;

	case 88:
		*iParam1 = 245;
		*iParam2 = 137;
		*iParam3 = 15;
		break;

	case 45:
		*iParam1 = 74;
		*iParam2 = 22;
		*iParam3 = 7;
		break;

	case 56:
		*iParam1 = 45;
		*iParam2 = 58;
		*iParam3 = 53;
		break;

	case 58:
		*iParam1 = 71;
		*iParam2 = 120;
		*iParam3 = 60;
		break;

	case 54:
		*iParam1 = 77;
		*iParam2 = 98;
		*iParam3 = 104;
		break;

	case 73:
		*iParam1 = 14;
		*iParam2 = 49;
		*iParam3 = 109;
		break;

	case 68:
		*iParam1 = 22;
		*iParam2 = 34;
		*iParam3 = 72;
		break;

	case 140:
		*iParam1 = 0;
		*iParam2 = 174;
		*iParam3 = 239;
		break;

	case 131:
		*iParam1 = 255;
		*iParam2 = 183;
		*iParam3 = 0;
		break;

	case 90:
		*iParam1 = 142;
		*iParam2 = 140;
		*iParam3 = 70;
		break;

	case 97:
		*iParam1 = 156;
		*iParam2 = 141;
		*iParam3 = 113;
		break;

	case 89:
		*iParam1 = 145;
		*iParam2 = 115;
		*iParam3 = 71;
		break;

	case 105:
		*iParam1 = 98;
		*iParam2 = 68;
		*iParam3 = 40;
		break;

	case 100:
		*iParam1 = 124;
		*iParam2 = 27;
		*iParam3 = 68;
		break;

	case 99:
		*iParam1 = 114;
		*iParam2 = 42;
		*iParam3 = 63;
		break;

	case 136:
		*iParam1 = 246;
		*iParam2 = 151;
		*iParam3 = 153;
		break;

	case 49:
		*iParam1 = 32;
		*iParam2 = 32;
		*iParam3 = 44;
		break;

	case 146:
		*iParam1 = 26;
		*iParam2 = 1;
		*iParam3 = 23;
		break;

	default:
		*iParam1 = 255;
		*iParam2 = 255;
		*iParam3 = 255;
		break;
	}
}

// Position - 0x560F
void func_83(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7,
			 int iParam8) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_59(&iVar0, 0, iParam1)) {
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_101(iParam4, iParam8)) {
		return;
	}
	if (func_86()) {
		return;
	}
	if (network::_network_is_text_chat_active()) {
		return;
	}
	if (iParam7 == 0) {
		if (func_62(player::player_id(), 0)) {
			return;
		}
	}
	if (gameplay::is_pc_version()) {
		if (gameplay::update_onscreen_keyboard() == 0 || network::_network_is_text_chat_active()) {
			return;
		}
	}
	if (Global_17290.f_4639 != 0) {
		if (controls::_0x6CD79468A1E595C6(2)) {
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639) {
				if (Global_17290.f_4896[iVar1] != 353) {
					StringCopy(&Global_17290.f_4641[iVar1 /*16*/],
							   controls::get_control_instructional_button(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32) {
					StringCopy(&Global_17290.f_4641[iVar1 /*16*/],
							   controls::_0x80C2FD58D720C801(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640) {
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			graphics::_push_scaleform_movie_function_parameter_float(1f - Global_17290.f_4951 / 100f);
			graphics::_pop_scaleform_movie_function_void();
			if (gameplay::is_pc_version()) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				graphics::_push_scaleform_movie_function_parameter_bool(1);
				graphics::_pop_scaleform_movie_function_void();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639) {
				if (gameplay::get_hash_key(&Global_17290.f_4834[iVar1 /*4*/]) != gameplay::get_hash_key("PREV")) {
					graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					graphics::_push_scaleform_movie_function_parameter_int(iVar1);
					func_85(&Global_17290.f_4641[iVar1 /*16*/]);
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && gameplay::get_hash_key(&Global_17290.f_4834[iVar2 /*4*/]) ==
											 gameplay::get_hash_key("PREV")) {
						func_85(&Global_17290.f_4641[iVar2 /*16*/]);
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1) {
						func_84(&Global_17290.f_4834[iVar1 /*4*/]);
					}
					else {
						graphics::begin_text_command_scaleform_string(&Global_17290.f_4834[iVar1 /*4*/]);
						if (iParam5) {
							ui::add_text_component_substring_time(iParam2, 70);
						}
						else {
							ui::add_text_component_integer(iParam2);
						}
						graphics::end_text_command_scaleform_string();
					}
					if (gameplay::is_pc_version()) {
						if (Global_17290.f_4896[iVar1] != 353 && gameplay::is_bit_set(Global_17290.f_4922, iVar1)) {
							graphics::_push_scaleform_movie_function_parameter_bool(1);
							graphics::_push_scaleform_movie_function_parameter_int(Global_17290.f_4896[iVar1]);
						}
						else {
							graphics::_push_scaleform_movie_function_parameter_bool(0);
							graphics::_push_scaleform_movie_function_parameter_int(353);
						}
					}
					graphics::_pop_scaleform_movie_function_void();
				}
				iVar1++;
			}
			if (gameplay::get_hash_key(&Global_2593974.f_16) != gameplay::get_hash_key("")) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(Global_17290.f_4639);
				func_85(&Global_2593974);
				if (Global_2593974.f_20 == -1) {
					func_84(&Global_2593974.f_16);
				}
				else {
					graphics::begin_text_command_scaleform_string(&Global_2593974.f_16);
					if (iParam5) {
						ui::add_text_component_substring_time(iParam2, 70);
					}
					else {
						ui::add_text_component_integer(iParam2);
					}
					graphics::end_text_command_scaleform_string();
				}
				graphics::_pop_scaleform_movie_function_void();
			}
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(80);
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952) {
				graphics::_push_scaleform_movie_function_parameter_int(1);
			}
			else {
				graphics::_push_scaleform_movie_function_parameter_int(0);
			}
			graphics::_pop_scaleform_movie_function_void();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639) {
			if (Global_17290.f_4883[iVar1] != -1) {
				if (iParam2 > 0) {
					graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/],
															 "OVERRIDE_RESPAWN_TEXT");
					graphics::_push_scaleform_movie_function_parameter_int(iVar1);
					graphics::begin_text_command_scaleform_string(&Global_17290.f_4834[iVar1 /*4*/]);
					if (iParam5) {
						ui::add_text_component_substring_time(iParam2, 70);
					}
					else {
						ui::add_text_component_integer(iParam2);
					}
					graphics::end_text_command_scaleform_string();
					graphics::_pop_scaleform_movie_function_void();
				}
			}
			iVar1++;
		}
		if (Global_2593974.f_20 != -1) {
			if (iParam2 > 0) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				graphics::_push_scaleform_movie_function_parameter_int(iVar1);
				graphics::begin_text_command_scaleform_string(&Global_2593974.f_16);
				if (iParam5) {
					ui::add_text_component_substring_time(iParam2, 70);
				}
				else {
					ui::add_text_component_integer(iParam2);
				}
				graphics::end_text_command_scaleform_string();
				graphics::_pop_scaleform_movie_function_void();
			}
		}
		graphics::_set_screen_draw_position(76, 66);
		graphics::_screen_draw_position_ratio(0f, 0f, 0f, 0f);
		if (bParam6) {
			if (!Global_17290.f_7899) {
				ui::set_hud_component_position(15, 0f, -0.0375f);
				Global_17290.f_7899 = 1;
			}
		}
		else if (Global_17290.f_7899) {
			ui::reset_hud_component_values(15);
			Global_17290.f_7899 = 0;
		}
		graphics::_screen_draw_position_end();
		if (Global_17290.f_4925) {
			graphics::_set_screen_draw_position(82, 66);
			graphics::_screen_draw_position_ratio(0f, 0f, 0f, 0f);
			graphics::draw_scaleform_movie(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924,
										   1f, 1f, 255, 255, 255, 255, 0);
			graphics::_screen_draw_position_end();
		}
		else {
			graphics::draw_scaleform_movie_fullscreen(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

// Position - 0x5AEB
void func_84(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x5AFD
void func_85(char *sParam0) { graphics::_0xE83A3E3557A56640(sParam0); }

// Position - 0x5B0B
bool func_86() {
	vector3 vVar0;

	if (Global_14443.f_1 > 3) {
		return true;
	}
	if (func_87()) {
		vVar0 = {0f, -500f, 0f};
		mobile::get_mobile_phone_position(&vVar0);
		if (Global_14388 == 0) {
			if (vVar0.y > -119f) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (vVar0.y > -101f) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

// Position - 0x5B79
bool func_87() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x5B93
void func_88(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4) {
	var uVar0;

	ui::get_hud_colour(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0) {
	case 28:
		*iParam2 = 194;
		*iParam3 = 80;
		*iParam4 = 80;
		break;

	case 15:
	case 4:
	case 16:
	case 26:
	case 27:
	case 35:
	case 34:
	case 47:
	case 46:
	case 42:
	case 36:
	case 37:
	case 50:
	case 39:
	case 40:
	case 38:
	case 43:
	case 44:
	case 45:
	case 49:
		if (iParam1) {
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
		}
		break;
	}
}

// Position - 0x5C53
void func_89(float fParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	ui::set_text_font(0);
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_leading(2);
	ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
	ui::set_text_wrap(fParam0, Global_17287 + Global_17289 - 0.0046875f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x5CB2
void func_90(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::add_text_component_integer(iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x5CD5
float func_91(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null(sParam0)) {
		if (gameplay::get_hash_key(sParam0) == 0) {
			return 0f;
		}
	}
	else {
		return 0f;
	}
	func_92();
	ui::_begin_text_command_width(sParam0);
	ui::add_text_component_integer(iParam1);
	ui::add_text_component_integer(iParam2);
	return ui::_end_text_command_get_width(1);
}

// Position - 0x5D17
void func_92() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7874) {
		iVar0 = Global_17290.f_7870;
		iVar1 = Global_17290.f_7871;
		iVar2 = Global_17290.f_7872;
		iVar3 = Global_17290.f_7873;
	}
	ui::set_text_font(0);
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
	ui::set_text_wrap(Global_17287 + 0.0046875f, Global_17287 + Global_17289 - 0.0046875f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x5DA1
void func_93(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6,
			 int iParam7) {
	graphics::draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6,
						iParam7, 0);
}

// Position - 0x5DD0
var func_94(int iParam0, int iParam1) {
	char *sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_6703[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_6703[iParam0 /*16*/]) == -1487683087) {
			Var19 = {func_96(player::player_id())};
			if (network::_0x5835D9CD92E83184(&Var19, &uVar3)) {
				return func_95(&uVar3);
			}
		}
		else {
			return func_95(&Global_17290.f_6703[iParam0 /*16*/]);
		}
	}
	switch (iParam0) {
	case 3:
		sVar0[0] = "MP_hostCrown";
		sVar0[1] = "MP_hostCrown";
		break;

	case 21:
		sVar0[0] = "MP_SpecItem_Coke";
		sVar0[1] = "MP_SpecItem_Coke";
		break;

	case 22:
		sVar0[0] = "MP_SpecItem_Heroin";
		sVar0[1] = "MP_SpecItem_Heroin";
		break;

	case 23:
		sVar0[0] = "MP_SpecItem_Weed";
		sVar0[1] = "MP_SpecItem_Weed";
		break;

	case 24:
		sVar0[0] = "MP_SpecItem_Meth";
		sVar0[1] = "MP_SpecItem_Meth";
		break;

	case 25:
		sVar0[0] = "MP_SpecItem_Cash";
		sVar0[1] = "MP_SpecItem_Cash";
		break;

	case 1:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 2:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 4:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 6:
		sVar0[0] = "Shop_Box_CrossB";
		sVar0[1] = "Shop_Box_Cross";
		break;

	case 7:
		sVar0[0] = "Shop_Box_BlankB";
		sVar0[1] = "Shop_Box_Blank";
		break;

	case 5:
		sVar0[0] = "Shop_Box_TickB";
		sVar0[1] = "Shop_Box_Tick";
		break;

	case 8:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 9:
		sVar0[0] = "Shop_Clothing_Icon_B";
		sVar0[1] = "Shop_Clothing_Icon_A";
		break;

	case 10:
		sVar0[0] = "Shop_GunClub_Icon_B";
		sVar0[1] = "Shop_GunClub_Icon_A";
		break;

	case 17:
		sVar0[0] = "Shop_Ammo_Icon_B";
		sVar0[1] = "Shop_Ammo_Icon_A";
		break;

	case 18:
		sVar0[0] = "Shop_Armour_Icon_B";
		sVar0[1] = "Shop_Armour_Icon_A";
		break;

	case 19:
		sVar0[0] = "Shop_Health_Icon_B";
		sVar0[1] = "Shop_Health_Icon_A";
		break;

	case 20:
		sVar0[0] = "Shop_MakeUp_Icon_B";
		sVar0[1] = "Shop_MakeUp_Icon_A";
		break;

	case 11:
		sVar0[0] = "Shop_Tattoos_Icon_B";
		sVar0[1] = "Shop_Tattoos_Icon_A";
		break;

	case 12:
		sVar0[0] = "Shop_Garage_Icon_B";
		sVar0[1] = "Shop_Garage_Icon_A";
		break;

	case 13:
		sVar0[0] = "Shop_Garage_Bike_Icon_B";
		sVar0[1] = "Shop_Garage_Bike_Icon_A";
		break;

	case 14:
		sVar0[0] = "Shop_Barber_Icon_B";
		sVar0[1] = "Shop_Barber_Icon_A";
		break;

	case 15:
		sVar0[0] = "shop_Lock";
		sVar0[1] = "shop_Lock";
		break;

	case 16:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 26:
		sVar0[0] = "arrowleft";
		sVar0[1] = "arrowleft";
		break;

	case 27:
		sVar0[0] = "arrowright";
		sVar0[1] = "arrowright";
		break;

	case 28:
		sVar0[0] = "MP_AlertTriangle";
		sVar0[1] = "MP_AlertTriangle";
		break;

	case 29:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 31:
		sVar0[0] = "Shop_Michael_Icon_B";
		sVar0[1] = "Shop_Michael_Icon_A";
		break;

	case 32:
		sVar0[0] = "Shop_Franklin_Icon_B";
		sVar0[1] = "Shop_Franklin_Icon_A";
		break;

	case 33:
		sVar0[0] = "Shop_Trevor_Icon_B";
		sVar0[1] = "Shop_Trevor_Icon_A";
		break;

	case 48:
		sVar0[0] = "SaleIcon";
		sVar0[1] = "SaleIcon";
		break;

	case 49:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 0:
		sVar0[0] = "";
		sVar0[1] = "";
		break;
	}
	if (iParam1) {
		return sVar0[0];
	}
	return sVar0[1];
}

// Position - 0x6207
var func_95(var uParam0) { return uParam0; }

// Position - 0x6211
struct<13> func_96(int iParam0) {
	struct<13> Var0;

	network::network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

// Position - 0x6228
char *
func_97(int iParam0) {
	var uVar0;
	struct<13> Var16;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_5886[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_5886[iParam0 /*16*/]) == -1487683087) {
			Var16 = {func_96(player::player_id())};
			network::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_95(&uVar0);
		}
		else {
			return func_95(&Global_17290.f_5886[iParam0 /*16*/]);
		}
	}
	if (iParam0 == 48) {
		return "MPShopSale";
	}
	return "CommonMenu";
}

// Position - 0x629D
bool func_98() {
	int iVar0;
	int iVar1;
	float fVar2;

	graphics::_get_active_screen_resolution(&iVar0, &iVar1);
	fVar2 = system::to_float(iVar0) / system::to_float(iVar1);
	if (fVar2 > 3.5f) {
		return true;
	}
	return false;
}

// Position - 0x62CF
bool func_99(int iParam0, int iParam1, int iParam2, float fParam3, float *fParam4, int iParam5) {
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_97(iParam0), 64);
	StringCopy(&cVar16, func_94(iParam0, iParam1), 64);
	if (gameplay::get_hash_key(&cVar16) != 0) {
		fVar34 = 1f;
		if (iParam5) {
			graphics::_get_active_screen_resolution(&iVar32, &iVar33);
			fVar35 = graphics::_get_aspect_ratio(0);
			if (func_98()) {
				iVar32 = system::round(system::to_float(iVar33) * fVar35);
			}
			fVar36 = system::to_float(iVar32) / system::to_float(iVar33);
			fVar34 = fVar36 / fVar35;
			if (func_98()) {
				fVar34 = 1f;
			}
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("director_mode")) > 0) {
				graphics::get_screen_resolution(&iVar32, &iVar33);
			}
			iVar32 = system::round(system::to_float(iVar32) / fVar34);
			iVar33 = system::round(system::to_float(iVar33) / fVar34);
		}
		else {
			graphics::get_screen_resolution(&iVar32, &iVar33);
		}
		vVar37 = {graphics::get_texture_resolution(&cVar0, &cVar16)};
		vVar37.x *= func_100(iParam0) / fVar34;
		vVar37.y *= func_100(iParam0) / fVar34;
		if (!iParam2) {
			vVar37.x -= 2f;
			vVar37.y -= 2f;
		}
		if (iParam0 == 30) {
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && gameplay::get_hash_key(&Global_17290.f_6703[29 /*16*/]) == -1487683087) {
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = vVar37.x / IntToFloat(iVar32) * IntToFloat(iVar32 / iVar33);
		*fParam4 = vVar37.y / IntToFloat(iVar33) / (vVar37.x / IntToFloat(iVar32)) * *fParam3;
		if (!iParam5) {
			if (!graphics::get_is_widescreen() && iParam0 != 30) {
				*fParam3 *= 1.33f;
			}
		}
		if (iParam0 == 29) {
			if (*fParam3 > Global_17289) {
				*fParam4 *= Global_17289 / *fParam3;
				*fParam3 = Global_17289;
			}
		}
		return true;
	}
	return false;
}

// Position - 0x6480
float func_100(int iParam0) {
	switch (iParam0) {
	case 33:
	case 4:
	case 11:
	case 31:
	case 20:
	case 15:
	case 10:
	case 12:
	case 13:
	case 32:
	case 9:
	case 5:
	case 6:
	case 7:
	case 14:
	case 18:
	case 19:
	case 17:
	case 28:
	case 26:
	case 27:
	case 49: return 0.5f;
	}
	return 1f;
}

// Position - 0x651F
int func_101(int iParam0, bool bParam1) {
	if (Global_2433125.f_1385.f_688 != 0) {
		return 1;
	}
	if (!cam::is_screen_faded_in() || func_103(8, -1) && func_102() != 64 ||
		ui::get_pause_menu_state() != 0 && !bParam1 || streaming::is_player_switch_in_progress() && !iParam0 ||
		network::_0x2EAC52B4019E2782() || Global_69962 || Global_17290.f_7898 || ui::is_warning_message_active() ||
		Global_91543.f_1361) {
		return 0;
	}
	return 1;
}

// Position - 0x65BC
int func_102() { return Global_1315168; }

// Position - 0x65C8
var func_103(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x6603
void func_104(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	Global_17290.f_5606 = iParam0;
	Global_17290.f_5741 = iParam2;
	if (Global_17290.f_5606 < Global_17290.f_5605) {
		Global_17290.f_5605 = Global_17290.f_5606;
	}
	else if (Global_17290.f_5599 && Global_17290.f_5606 > Global_17290.f_5607 ||
			 !Global_17290.f_5599 && Global_17290.f_5606 >= Global_17290.f_5605 + Global_17290.f_5095) {
		iVar0 = Global_17290.f_5605;
		while (iVar0 <= Global_17290.f_5606) {
			if (iVar0 >= 0 && iVar0 < 127) {
				if (Global_17290.f_4959[iVar0] != 0) {
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17290.f_5095 && Global_17290.f_5605 < 128) {
			Global_17290.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17290.f_5605;
			while (iVar0 <= Global_17290.f_5606) {
				if (iVar0 >= 0 && iVar0 < 127) {
					if (Global_17290.f_4959[iVar0] != 0) {
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	if (iParam1) {
		StringCopy(&Global_17290.f_4562, "", 16);
		StringCopy(&Global_2593974.f_21, "", 16);
	}
}

// Position - 0x6755
void func_105(var *uParam0, var *uParam1, var *uParam2, var *uParam3, int iParam4) {
	*uParam0 = system::floor(controls::get_control_normal(2, 218) * 127f);
	*uParam1 = system::floor(controls::get_control_normal(2, 219) * 127f);
	*uParam2 = system::floor(controls::get_control_normal(2, 220) * 127f);
	*uParam3 = system::floor(controls::get_control_normal(2, 221) * 127f);
	if (iParam4) {
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f) {
			*uParam0 = system::floor(controls::get_disabled_control_normal(2, 218) * 127f);
			*uParam1 = system::floor(controls::get_disabled_control_normal(2, 219) * 127f);
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f) {
			*uParam2 = system::floor(controls::get_disabled_control_normal(2, 220) * 127f);
			*uParam3 = system::floor(controls::get_disabled_control_normal(2, 221) * 127f);
		}
	}
}

// Position - 0x682A
void func_106() {
	func_117(0);
	func_116(1, 0, 0, 0, 0);
	func_115(1, 1, 1, 1, 1);
	if (Local_83.f_1 == 3) {
		func_114("SEA_MENU");
	}
	else {
		func_114("STREET_MENU");
	}
	func_110(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_110(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_109(201, "ITEM_SELECT", -1);
	func_109(202, "ITEM_EXIT", -1);
	func_108(11, "ITEM_SCROLL", -1);
	func_107(0);
	func_104(0, 1, 1);
	iLocal_97 = 0;
}

// Position - 0x68AE
void func_107(int iParam0) { Global_17290.f_5605 = iParam0; }

// Position - 0x68BE
void func_108(int iParam0, char *sParam1, int iParam2) {
	char *sVar0;

	sVar0 = controls::_0x80C2FD58D720C801(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12) {
		StringCopy(&Global_2593974, sVar0, 64);
		StringCopy(&Global_2593974.f_16, sParam1, 16);
		Global_2593974.f_20 = iParam2;
		return;
		return;
	}
	gameplay::clear_bit(&Global_17290.f_4922, Global_17290.f_4639);
	StringCopy(&Global_17290.f_4641[Global_17290.f_4639 /*16*/], sVar0, 64);
	StringCopy(&Global_17290.f_4834[Global_17290.f_4639 /*4*/], sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = 353;
	Global_17290.f_4909[Global_17290.f_4639] = iParam0;
	Global_17290.f_4639++;
}

// Position - 0x696E
void func_109(int iParam0, char *sParam1, int iParam2) {
	char *sVar0;

	sVar0 = controls::get_control_instructional_button(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12) {
		StringCopy(&Global_2593974, sVar0, 64);
		StringCopy(&Global_2593974.f_16, sParam1, 16);
		Global_2593974.f_20 = iParam2;
		return;
		return;
	}
	gameplay::clear_bit(&Global_17290.f_4922, Global_17290.f_4639);
	StringCopy(&Global_17290.f_4641[Global_17290.f_4639 /*16*/], sVar0, 64);
	StringCopy(&Global_17290.f_4834[Global_17290.f_4639 /*4*/], sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

// Position - 0x6A1D
void func_110(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	float fVar1;
	float fVar2;
	float *fVar3;
	float fVar4;

	if (Global_17290.f_5088 > iParam0) {
		return;
	}
	if (Global_17290.f_5088 >= 128) {
		return;
	}
	if (Global_17290.f_5090 >= 256) {
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608) {
		return;
	}
	if (Global_17290.f_5088 != iParam0) {
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 1) {
		while (Global_17290.f_5089 < 4 && iVar0 != 1) {
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 1) {
			return;
		}
	}
	StringCopy(&Global_17290.f_73[Global_17290.f_5090 /*6*/], sParam1, 24);
	if (!gameplay::is_string_null_or_empty(sParam1) && !ui::does_text_label_exist(sParam1)) {
	}
	Global_17290.f_1610[Global_17290.f_5090] = iParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!iParam3) {
		func_113(Global_17290.f_5088, 1);
	}
	else {
		func_113(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0) {
		fVar1 = func_112(&Global_17290.f_73[Global_17290.f_5090 /*6*/]);
		if (Global_17290.f_4945[Global_17290.f_5089]) {
			func_99(26, 1, 0, &fVar2, &fVar3, 0);
			fVar1 += fVar2 * 2f;
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089]) {
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
	}
	if (iParam5) {
		if (iParam2 == 0) {
			fVar4 = func_111(&Global_17290.f_73[Global_17290.f_5090 /*6*/]);
			if (fVar4 > Global_17290.f_5612[iParam0]) {
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	gameplay::set_bit(&Global_17290.f_4959[iParam0], Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = Global_17290.f_5090 - 1;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

// Position - 0x6C29
var func_111(char *sParam0) {
	if (!ui::does_text_label_exist(sParam0)) {
	}
	return ui::_get_text_scale_height(0.35f, 0);
}

// Position - 0x6C45
float func_112(char *sParam0) {
	if (!gameplay::is_string_null(sParam0)) {
		if (gameplay::get_hash_key(sParam0) == 0) {
			return 0f;
		}
	}
	else {
		return 0f;
	}
	func_81(0, 1, 0, 0, 0, 0, 0);
	ui::_begin_text_command_width(sParam0);
	return ui::_end_text_command_get_width(1);
}

// Position - 0x6C82
void func_113(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = system::floor(system::to_float(iParam0) / 32f);
	if (iParam1) {
		gameplay::set_bit(&Global_17290.f_5881[iVar0], iParam0 - iVar0 * 32);
	}
	else {
		gameplay::clear_bit(&Global_17290.f_5881[iVar0], iParam0 - iVar0 * 32);
	}
}

// Position - 0x6CCE
void func_114(char *sParam0) {
	int iVar0;

	StringCopy(&Global_17290.f_1, sParam0, 16);
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x6D19
void func_115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

// Position - 0x6D58
void func_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	Global_17290.f_4926[0] = iParam0;
	Global_17290.f_4926[1] = iParam1;
	Global_17290.f_4926[2] = iParam2;
	Global_17290.f_4926[3] = iParam3;
	Global_17290.f_4926[4] = iParam4;
	Global_17290.f_5096 = 0;
	if (iParam0 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam1 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam2 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam3 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam4 != 0) {
		Global_17290.f_5096++;
	}
}

// Position - 0x6E02
void func_117(int iParam0) {
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 0;
	while (iVar0 < 256) {
		StringCopy(&Global_17290.f_73[iVar0 /*6*/], "", 24);
		iVar1 = 0;
		while (iVar1 < 4) {
			Global_17290.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32) {
		StringCopy(&Global_2453058[iVar0 /*16*/], "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256) {
		Global_17290.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128) {
		Global_17290.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128) {
		Global_17290.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128) {
		Global_17290.f_4959[iVar0] = 0;
		Global_17290.f_5097[iVar0] = 0;
		Global_17290.f_5226[iVar0] = 0;
		Global_17290.f_5746[iVar0] = 0f;
		Global_17290.f_5355[iVar0] = 0;
		Global_17290.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		Global_17290.f_4926[iVar0] = 0;
		Global_17290.f_4938[iVar0] = 0f;
		Global_17290.f_4932[iVar0] = -1f;
		Global_17290.f_4945[iVar0] = 0;
		Global_17290.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12) {
		StringCopy(&Global_17290.f_4834[iVar0 /*4*/], "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 353;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51) {
		StringCopy(&Global_17290.f_5886[iVar0 /*16*/], "", 64);
		StringCopy(&Global_17290.f_6703[iVar0 /*16*/], "", 64);
		iVar0++;
	}
	StringCopy(&Global_2593974.f_16, "", 16);
	Global_2593974.f_20 = -1;
	Global_17290 = 0;
	Global_17290.f_5088 = 0;
	Global_17290.f_5089 = 0;
	Global_17290.f_5090 = 0;
	Global_17290.f_5092 = 0;
	Global_17290.f_5093 = 0;
	Global_17290.f_5094 = 0;
	Global_17290.f_5091 = 0;
	Global_17290.f_5741 = 0;
	Global_17290.f_5606 = 0;
	Global_17290.f_5605 = 0;
	Global_17290.f_5607 = 0;
	StringCopy(&Global_17290.f_4562, "", 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = 0;
	Global_17290.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_4638 = 0;
	StringCopy(&Global_2593974.f_21, "", 16);
	Global_2593974.f_61 = 0;
	Global_2593974.f_62 = 0;
	Global_2593974.f_63 = 0;
	Global_2593974.f_64 = 0;
	Global_2593974.f_65 = 0;
	Global_2593974.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_2593974.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2593974.f_67 = 0;
	StringCopy(&Global_17290.f_1, "", 16);
	Global_17290.f_4944 = 0f;
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_5611 = 0;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = 0;
	Global_17290.f_5609 = 0;
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	Global_17290.f_5095 = 10;
	Global_17290.f_5096 = 0;
	Global_17290.f_5743 = 0f;
	Global_17290.f_5744 = 0f;
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	Global_17290.f_5600 = 0f;
	Global_17290.f_5601 = 0;
	Global_17290.f_5603 = 0;
	Global_17290.f_5602 = 0;
	Global_17290.f_5604 = 0;
	Global_17290.f_7895 = 0;
	iVar0 = 0;
	while (iVar0 < 2) {
		Global_17290.f_5875[iVar0] = -1;
		Global_17290.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17290.f_4951 = 0f;
	Global_17290.f_4922 = 0;
	Global_17290.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5881) {
		Global_17290.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_7874 = 0;
	Global_17290.f_7869 = 0;
	Global_17290.f_7879 = 0;
	Global_17290.f_7884 = 0;
	Global_17290.f_7889 = 0;
	Global_17290.f_7891 = 0;
	Global_17290.f_7897 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = graphics::_get_aspect_ratio(0);
	if (iParam0) {
		Global_17289 = 0.225f * 16f / 9f / fVar2;
	}
	else if (fVar2 < 1.77777f) {
		Global_17289 = 0.225f * 16f / 9f / fVar2;
	}
	else {
		Global_17289 = 0.225f;
	}
}

// Position - 0x72C0
bool func_118(char *sParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_59(&iVar0, 1, iParam1)) {
		return false;
	}
	iVar1 = 1;
	StringCopy(&Global_17290.f_5505[iVar0 /*4*/], sParam0, 16);
	if (!gameplay::is_string_null_or_empty(&Global_17290.f_5505[iVar0 /*4*/])) {
		ui::request_additional_text(&Global_17290.f_5505[iVar0 /*4*/], 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!ui::has_this_additional_text_loaded(&Global_17290.f_5505[iVar0 /*4*/], 9)) {
			iVar1 = 0;
		}
	}
	graphics::request_streamed_texture_dict("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!graphics::has_streamed_texture_dict_loaded("CommonMenu")) {
		iVar1 = 0;
	}
	if (iParam2) {
		graphics::request_streamed_texture_dict("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!graphics::has_streamed_texture_dict_loaded("MPShopSale")) {
			iVar1 = 0;
		}
	}
	iVar2 = 0;
	StringCopy(&Global_17290.f_5530[iVar0 /*10*/].f_1, "instructional_buttons", 24);
	iVar2 = func_119(&Global_17290.f_5530[iVar0 /*10*/]);
	if (!iVar1 || !iVar2) {
	}
	return iVar1 & iVar2;
}

// Position - 0x73B6
bool func_119(var *uParam0) {
	switch (uParam0->f_9) {
	case 0:
		if (!graphics::has_scaleform_movie_loaded(*uParam0)) {
			*uParam0 = unk_0x67D02A194A2FC2BD(&uParam0->f_1);
			uParam0->f_9 = 1;
			if (uParam0->f_7) {
				if (graphics::has_scaleform_movie_loaded(*uParam0)) {
					uParam0->f_8 = gameplay::get_game_timer();
					uParam0->f_9 = 2;
				}
			}
		}
		else {
			uParam0->f_8 = gameplay::get_game_timer();
			uParam0->f_9 = 2;
		}
		break;

	case 1:
		if (graphics::has_scaleform_movie_loaded(*uParam0)) {
			uParam0->f_8 = gameplay::get_game_timer();
			uParam0->f_9 = 2;
		}
		break;

	case 2:
		if (!graphics::has_scaleform_movie_loaded(*uParam0)) {
			uParam0->f_9 = 0;
		}
		break;
	}
	return uParam0->f_9 == 2;
}

// Position - 0x7458
void func_120() {
	int iVar0;

	if (func_150()) {
		if (func_133()) {
			iVar0 = 6;
			if (Local_83.f_1 == 1) {
				iVar0 = 4;
			}
			func_131(iVar0);
			if (func_55(uLocal_103[iVar0])) {
				if (bLocal_102) {
					if (entity::is_entity_playing_anim(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 3)) {
						ai::stop_anim_task(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], -1056964608);
					}
					func_122(iVar0);
				}
			}
			controls::set_input_exclusive(0, 51);
			if (controls::is_control_just_released(0, 51)) {
				iLocal_194 = 1;
				ui::clear_help(1);
				iLocal_82 = 3;
			}
		}
		else if (!iLocal_93) {
			cam::stop_gameplay_hint(0);
			iLocal_93 = 1;
		}
	}
	else {
		func_121();
		if (!iLocal_93) {
			cam::stop_gameplay_hint(0);
			iLocal_93 = 1;
		}
	}
}

// Position - 0x7509
void func_121() {
	if (iLocal_92 && gameplay::get_game_timer() > iLocal_95) {
		ui::clear_help(1);
		iLocal_92 = 0;
	}
}

// Position - 0x752A
void func_122(int iParam0) {
	int iVar0;

	if (!entity::is_entity_dead(uLocal_103[iParam0], 0) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
		switch (iLocal_195) {
		case 0:
			if (system::vdist2(entity::get_entity_coords(uLocal_103[iParam0], 1),
							   entity::get_entity_coords(player::player_ped_id(), 1)) < 64f) {
				iLocal_196 = 0;
				iLocal_197 = 0;
				iLocal_195 = 1;
			}
			break;

		case 1:
			ai::open_sequence_task(&iVar0);
			ai::task_look_at_entity(0, player::player_ped_id(), -1, 0, 2);
			ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
			ai::close_sequence_task(iVar0);
			ai::task_perform_sequence(uLocal_103[iParam0], iVar0);
			ai::clear_sequence_task(&iVar0);
			iLocal_195 = 2;
			break;

		case 2:
			if (ai::get_script_task_status(uLocal_103[iParam0], 242628503) != 1 ||
				ped::is_ped_facing_ped(uLocal_103[iParam0], player::player_ped_id(), 20f)) {
				ai::task_turn_ped_to_face_entity(uLocal_103[iParam0], player::player_ped_id(), -1);
				if (!iLocal_197) {
					func_129(uLocal_103[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
				}
				else {
					func_129(uLocal_103[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
				}
				iLocal_195 = 3;
			}
			break;

		case 3:
			if (!audio::is_ambient_speech_playing(uLocal_103[iParam0])) {
				func_127(&uLocal_198);
				ai::task_play_anim(uLocal_103[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9,
								   0, 0, 0, 0);
				iLocal_195 = 4;
			}
			break;

		case 4:
			if (system::vdist2(entity::get_entity_coords(uLocal_103[iParam0], 1),
							   entity::get_entity_coords(player::player_ped_id(), 1)) > 225f) {
				iLocal_195 = 0;
			}
			if (func_123(&uLocal_198) >= 5f && !iLocal_196) {
				iLocal_196 = 1;
				iLocal_195 = 1;
			}
			else if (func_123(&uLocal_198) >= 10f && !iLocal_197) {
				iLocal_197 = 1;
				iLocal_195 = 1;
			}
			break;

		case 5: break;
		}
	}
}

// Position - 0x76F1
float func_123(var *uParam0) {
	if (func_126(uParam0)) {
		if (func_125(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_124(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x7730
float func_124(bool bParam0) {
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

// Position - 0x7788
bool func_125(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x7798
bool func_126(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x77A8
void func_127(var *uParam0) { func_128(uParam0, 0f); }

// Position - 0x77B7
void func_128(int *iParam0, float fParam1) {
	uParam0->f_1 = func_124(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x77E5
void func_129(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	audio::_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_130(iParam3), 0);
}

// Position - 0x77FE
int func_130(int iParam0) {
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

// Position - 0x79F3
void func_131(int iParam0) {
	if (player::is_player_playing(player::player_id()) && !func_132()) {
		if (func_55(uLocal_103[iParam0])) {
			if (iLocal_93 && entity::get_entity_speed(player::player_ped_id()) < 20f) {
				cam::set_gameplay_entity_hint(uLocal_103[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_93 = 0;
			}
		}
	}
}

// Position - 0x7A50
int func_132() {
	if (cam::_0xEE778F8C7E1142E2(cam::_0x19CAFA3C87F7C2FF()) == 4) {
		return 1;
	}
	return 0;
}

// Position - 0x7A69
bool func_133() {
	if (player::is_player_playing(player::player_id())) {
		if (func_149()) {
			return false;
		}
		if (func_148(func_44()) < Local_83.f_3) {
			if (Local_83.f_1 == 3) {
				func_145("SEA_NA_CASH", Local_83.f_3);
			}
			else {
				func_145("STREET_NA_CASH", Local_83.f_3);
			}
			iLocal_92 = 1;
			iLocal_95 = gameplay::get_game_timer() + 1000;
			return false;
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			func_144(&iLocal_0);
			iLocal_0 = ped::get_vehicle_ped_is_using(player::player_ped_id());
			if (!func_139()) {
				iLocal_92 = 1;
				iLocal_95 = gameplay::get_game_timer() + 1000;
				return false;
			}
			else if (entity::get_entity_health(iLocal_0) <= 200 || fire::is_entity_on_fire(iLocal_0) || func_138()) {
				func_137("RACE_VehDmg");
				iLocal_92 = 1;
				iLocal_95 = gameplay::get_game_timer() + 1000;
				return false;
			}
			else if (vehicle::get_ped_in_vehicle_seat(iLocal_0, -1, 0) != player::player_ped_id()) {
				func_134();
				return false;
			}
			else {
				if (func_76(0) || script::_get_number_of_instances_of_script_with_name_hash(joaat("appinternet")) > 0) {
					func_121();
					return false;
				}
				switch (Local_83.f_1) {
				case 1: func_145("STREET_PLAY_B", Local_83.f_3); break;

				case 2: func_145("STREET_PLAY_C", Local_83.f_3); break;

				case 3: func_137("SEA_PLAY"); break;
				}
				iLocal_92 = 1;
				iLocal_95 = gameplay::get_game_timer();
				return true;
			}
		}
		else {
			func_144(&iLocal_0);
			func_134();
			return false;
		}
	}
	return false;
}

// Position - 0x7BDB
void func_134() {
	char *sVar0;

	if (Local_83.f_1 == 3) {
		if (func_14(iLocal_111)) {
			sVar0 = "SEA_NA_VEH";
		}
		else {
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_136(sVar0)) {
			func_135(sVar0);
			iLocal_92 = 1;
			iLocal_95 = gameplay::get_game_timer() + 1000;
		}
	}
	else if (Local_83.f_1 == 1) {
		if (!func_136("STREET_NA_BIKE")) {
			func_135("STREET_NA_BIKE");
			iLocal_92 = 1;
			iLocal_95 = gameplay::get_game_timer() + 1000;
		}
	}
	else if (!func_136("STREET_NA_CAR")) {
		func_135("STREET_NA_CAR");
		iLocal_92 = 1;
		iLocal_95 = gameplay::get_game_timer() + 1000;
	}
}

// Position - 0x7C6D
void func_135(char *sParam0) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0x7C83
bool func_136(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x7C96
void func_137(char *sParam0) {
	if (!func_136(sParam0)) {
		func_135(sParam0);
	}
}

// Position - 0x7CAE
int func_138() {
	int iVar0;

	iVar0 = entity::get_entity_model(iLocal_0);
	if (vehicle::is_this_model_a_bike(iVar0)) {
		if (vehicle::is_vehicle_tyre_burst(iLocal_0, 6, 0) || vehicle::is_vehicle_tyre_burst(iLocal_0, 7, 0)) {
			return 1;
		}
	}
	else if (vehicle::is_this_model_a_car(iVar0)) {
		if (vehicle::is_vehicle_tyre_burst(iLocal_0, 0, 0) || vehicle::is_vehicle_tyre_burst(iLocal_0, 1, 0) ||
			vehicle::is_vehicle_tyre_burst(iLocal_0, 4, 0) || vehicle::is_vehicle_tyre_burst(iLocal_0, 5, 0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x7D2A
int func_139() {
	int iVar0;
	char *sVar1;

	switch (Local_83.f_1) {
	case 1:
		iVar0 = func_143();
		if (iVar0 == 1) {
			func_137("STREET_NA_COP");
			return 0;
		}
		else if (iVar0 == 2) {
			func_137("STREET_NA_BIKE");
			return 0;
		}
		break;

	case 2:
		iVar0 = func_141();
		if (iVar0 == 1) {
			func_137("STREET_NA_COP");
			return 0;
		}
		else if (iVar0 == 2) {
			func_137("STREET_NA_CAR");
			return 0;
		}
		break;

	case 3:
		if (!func_140()) {
			if (func_14(iLocal_111)) {
				sVar1 = "SEA_NA_VEH";
			}
			else {
				sVar1 = "SEA_NA_VEH2";
			}
			func_137(sVar1);
			return 0;
		}
		break;
	}
	return 1;
}

// Position - 0x7DDB
int func_140() {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(iLocal_0)) {
			iVar0 = entity::get_entity_model(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2")) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x7E1D
int func_141() {
	int iVar0;
	int iVar1;
	int iVar2[83];

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(iLocal_0)) {
			iVar0 = entity::get_entity_model(iLocal_0);
			if (func_142(iVar0)) {
				return 1;
			}
			if (iVar0 == joaat("police4") || iVar0 == joaat("policeold1") || iVar0 == joaat("policeold2") ||
				iVar0 == joaat("fbi") || iVar0 == joaat("fbi2") || iVar0 == joaat("lguard") ||
				iVar0 == joaat("sheriff") || iVar0 == joaat("sheriff2") || iVar0 == joaat("pranger") ||
				iVar0 == joaat("ambulance") || iVar0 == joaat("firetruk")) {
				return 1;
			}
			if (vehicle::is_this_model_a_bike(iVar0) || vehicle::is_this_model_a_boat(iVar0) ||
				vehicle::is_this_model_a_heli(iVar0) || vehicle::is_this_model_a_plane(iVar0)) {
				return 2;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = joaat("firetruk");
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2) {
				if (iVar0 == iVar2[iVar1]) {
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

// Position - 0x82C1
bool func_142(int iParam0) {
	switch (iParam0) {
	case joaat("police"):
	case joaat("police2"):
	case joaat("police3"):
	case joaat("police4"):
	case joaat("polmav"):
	case joaat("policeb"):
	case joaat("policet"):
	case joaat("policeold2"):
	case joaat("policeold1"):
	case joaat("sheriff"):
	case joaat("sheriff2"): return true;
	}
	return false;
}

// Position - 0x831A
int func_143() {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(iLocal_0)) {
			iVar0 = entity::get_entity_model(iLocal_0);
			if (iVar0 == joaat("policeb")) {
				return 1;
			}
			if (vehicle::is_this_model_a_bike(iVar0) && !vehicle::is_this_model_a_bicycle(iVar0)) {
				return 0;
			}
		}
	}
	return 2;
}

// Position - 0x8366
void func_144(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0x839E
void func_145(char *sParam0, int iParam1) {
	if (!func_147(sParam0, iParam1)) {
		func_146(sParam0, iParam1);
	}
}

// Position - 0x83BA
void func_146(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::add_text_component_integer(iParam1);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0x83D6
bool func_147(char *sParam0, int iParam1) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	ui::add_text_component_integer(iParam1);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x83EF
int func_148(int iParam0) {
	var uVar0;

	switch (iParam0) {
	case 0: stats::stat_get_int(joaat("sp0_total_cash"), &uVar0, -1); return uVar0;

	case 1: stats::stat_get_int(joaat("sp1_total_cash"), &uVar0, -1); return uVar0;

	case 2: stats::stat_get_int(joaat("sp2_total_cash"), &uVar0, -1); return uVar0;

	default:
	}
	return 0;
}

// Position - 0x8447
bool func_149() {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_using(player::player_ped_id());
			if (func_15(iVar0)) {
				if (entity::is_entity_in_air(iVar0)) {
					if (Local_83.f_1 == 3 && entity::is_entity_in_water(iVar0)) {
						return false;
					}
					return true;
				}
				else {
					return false;
				}
			}
		}
	}
	return false;
}

// Position - 0x84A6
bool func_150() {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		iVar0 = 20;
		if (Local_83.f_1 == 3) {
			iVar0 = 40;
		}
		if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_89, 1) <
				IntToFloat(iVar0) &&
			interior::get_interior_from_entity(player::player_ped_id()) == 0) {
			return true;
		}
	}
	return false;
}

// Position - 0x84F6
void func_151() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_156(&uLocal_216)) {
		if (Local_83.f_1 == 2) {
			if (func_153()) {
				if (!entity::does_entity_exist(iLocal_111)) {
					if (streaming::has_model_loaded(iLocal_182) && streaming::has_model_loaded(iLocal_182)) {
						iLocal_111 = vehicle::create_vehicle(iLocal_182, vLocal_113, fLocal_116, 1, 1);
						if (ped::can_create_random_ped(1) && ped::can_create_random_driver()) {
							iLocal_112 = ped::create_random_ped_as_driver(iLocal_111, 1);
							ai::task_vehicle_temp_action(iLocal_112, iLocal_111, 1, 99999999);
							ped::set_blocking_of_non_temporary_events(iLocal_112, 1);
							ped::set_ped_keep_task(iLocal_112, 1);
						}
						vehicle::set_vehicle_on_ground_properly(iLocal_111, 1084227584);
						vehicle::set_vehicle_engine_on(iLocal_111, 1, 1, 0);
						audio::set_vehicle_radio_enabled(iLocal_111, 1);
						audio::set_vehicle_radio_loud(iLocal_111, 1);
						audio::_0x774BD811F656A122(audio::get_radio_station_name(10), 1);
						audio::set_veh_radio_station(iLocal_111, audio::get_radio_station_name(10));
						vehicle::_0xAB04325045427AAE(iLocal_111, 0);
						streaming::set_model_as_no_longer_needed(iLocal_182);
						system::wait(0);
					}
				}
				if (!entity::does_entity_exist(iLocal_117)) {
					if (streaming::has_model_loaded(iLocal_183)) {
						iLocal_117 = vehicle::create_vehicle(iLocal_183, vLocal_118, fLocal_121, 1, 1);
						vehicle::set_vehicle_engine_on(iLocal_117, 0, 1, 0);
						audio::set_vehicle_radio_enabled(iLocal_117, 1);
						audio::set_vehicle_radio_loud(iLocal_117, 1);
						vehicle::set_vehicle_on_ground_properly(iLocal_117, 1084227584);
						audio::_0x774BD811F656A122(audio::get_radio_station_name(10), 1);
						audio::set_veh_radio_station(iLocal_117, audio::get_radio_station_name(10));
						vehicle::_0xAB04325045427AAE(iLocal_117, 0);
						streaming::set_model_as_no_longer_needed(iLocal_183);
						system::wait(0);
					}
				}
				if (streaming::has_anim_dict_loaded(cLocal_184)) {
					if (iLocal_193) {
						iVar0 = 0;
						while (iVar0 <= iLocal_174 - 1) {
							if (entity::does_entity_exist(uLocal_103[iVar0])) {
								if (!entity::is_entity_dead(uLocal_103[iVar0], 0) &&
									!func_152(uLocal_103[iVar0], -2017877118)) {
									ai::task_play_anim(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f,
													   -1, 1, 0, 0, 0, 0);
									ped::set_ped_keep_task(uLocal_103[iVar0], 1);
								}
							}
							else if (streaming::has_model_loaded(iLocal_174[iVar0])) {
								uLocal_103[iVar0] = ped::create_ped(25, iLocal_174[iVar0], vLocal_136[iVar0 /*3*/],
																	fLocal_158[iVar0], 1, 1);
								entity::set_entity_coords_no_offset(uLocal_103[iVar0], vLocal_136[iVar0 /*3*/], 0, 0,
																	1);
								ped::set_blocking_of_non_temporary_events(uLocal_103[iVar0], 1);
								ai::task_play_anim(uLocal_103[iVar0], cLocal_184, sLocal_185[iVar0], 1000f, -1000f, -1,
												   1, 0, 0, 0, 0);
								ped::set_ped_keep_task(uLocal_103[iVar0], 1);
							}
							iVar0++;
						}
						if (func_55(uLocal_103[0]) && func_55(uLocal_103[1]) && func_55(uLocal_103[2]) &&
							func_55(uLocal_103[3]) && func_55(uLocal_103[4]) && func_55(uLocal_103[5]) &&
							func_55(uLocal_103[6]) && func_14(iLocal_111) && func_14(iLocal_117)) {
							bLocal_102 = true;
							iVar0 = 0;
							while (iVar0 <= iLocal_174 - 1) {
								streaming::set_model_as_no_longer_needed(iLocal_174[iVar0]);
								iVar0++;
							}
							iLocal_193 = 0;
						}
					}
				}
			}
		}
		else if (Local_83.f_1 == 1) {
			if (func_153()) {
				if (!entity::does_entity_exist(iLocal_111)) {
					if (streaming::has_model_loaded(iLocal_182)) {
						iLocal_111 = vehicle::create_vehicle(iLocal_182, vLocal_113, fLocal_116, 1, 1);
						if (ped::can_create_random_ped(0) && ped::can_create_random_bike_rider()) {
							iLocal_112 = ped::create_random_ped_as_driver(iLocal_111, 1);
							ai::task_vehicle_temp_action(iLocal_112, iLocal_111, 1, 99999999);
							ped::set_blocking_of_non_temporary_events(iLocal_112, 1);
							ped::set_ped_keep_task(iLocal_112, 1);
						}
						vehicle::set_vehicle_engine_on(iLocal_111, 1, 1, 0);
						audio::set_vehicle_radio_enabled(iLocal_111, 1);
						audio::set_vehicle_radio_loud(iLocal_111, 1);
						audio::_0x774BD811F656A122(audio::get_radio_station_name(10), 1);
						audio::set_veh_radio_station(iLocal_111, audio::get_radio_station_name(10));
						vehicle::_0xAB04325045427AAE(iLocal_111, 0);
						streaming::set_model_as_no_longer_needed(iLocal_182);
					}
				}
				if (streaming::has_anim_dict_loaded(cLocal_184)) {
					if (iLocal_193) {
						iVar1 = 0;
						while (iVar1 <= iLocal_174 - 3) {
							if (entity::does_entity_exist(uLocal_103[iVar1])) {
								if (!entity::is_entity_dead(uLocal_103[iVar1], 0) &&
									!func_152(uLocal_103[iVar1], -2017877118)) {
									entity::set_entity_coords_no_offset(uLocal_103[iVar1], vLocal_136[iVar1 /*3*/], 0,
																		0, 1);
									if (iVar1 != 2 && iVar1 != 3) {
										ai::task_play_anim(uLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f,
														   -1000f, -1, 1, 0, 0, 0, 0);
									}
									else {
										ai::task_play_anim(uLocal_103[iVar1], cLocal_184, sLocal_185[iVar1], 1000f,
														   -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									ped::set_ped_keep_task(uLocal_103[iVar1], 1);
								}
							}
							else if (streaming::has_model_loaded(iLocal_174[iVar1])) {
								uLocal_103[iVar1] = ped::create_ped(25, iLocal_174[iVar1], vLocal_136[iVar1 /*3*/],
																	fLocal_158[iVar1], 1, 1);
								ped::set_blocking_of_non_temporary_events(uLocal_103[iVar1], 1);
							}
							iVar1++;
						}
						if (func_55(uLocal_103[0]) && func_55(uLocal_103[1]) && func_55(uLocal_103[2]) &&
							func_55(uLocal_103[3]) && func_55(uLocal_103[4])) {
							ai::task_look_at_entity(uLocal_103[4], player::player_ped_id(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= iLocal_174 - 1) {
								streaming::set_model_as_no_longer_needed(iLocal_174[iVar1]);
								iVar1++;
							}
							iLocal_193 = 0;
						}
					}
				}
			}
		}
		else if (Local_83.f_1 == 3) {
			if (func_153()) {
				if (!entity::does_entity_exist(iLocal_111)) {
					if (streaming::has_model_loaded(iLocal_182)) {
						iLocal_111 = vehicle::create_vehicle(iLocal_182, vLocal_113, fLocal_116, 1, 1);
						vehicle::set_vehicle_on_ground_properly(iLocal_111, 1084227584);
						vehicle::_0xE842A9398079BD82(iLocal_111, 0f);
						vehicle::_0xE3EBAAE484798530(iLocal_111, 0);
						vehicle::_0xB28B1FE5BFADD7F5(iLocal_111, 0);
						if (vehicle::_get_boat_anchor(iLocal_111)) {
							vehicle::set_boat_anchor(iLocal_111, 1);
						}
						vehicle::set_vehicle_engine_on(iLocal_111, 0, 1, 0);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3) {
					if (entity::does_entity_exist(uLocal_166[iVar2])) {
						if (entity::does_entity_exist(iLocal_170[iVar2])) {
							if (!ped::is_ped_injured(iLocal_170[iVar2]) && func_14(uLocal_166[iVar2])) {
								if (vehicle::is_vehicle_seat_free(uLocal_166[iVar2], -1, 0)) {
									ped::set_ped_into_vehicle(iLocal_170[iVar2], uLocal_166[iVar2], -1);
								}
							}
						}
						else if (func_14(uLocal_166[iVar2]) && streaming::has_model_loaded(joaat("a_m_y_jetski_01"))) {
							iLocal_170[iVar2] = ped::create_ped_inside_vehicle(uLocal_166[iVar2], 25,
																			   joaat("a_m_y_jetski_01"), -1, 1, 1);
							ped::set_ped_dies_in_water(iLocal_170[iVar2], 0);
							ped::set_blocking_of_non_temporary_events(iLocal_170[iVar2], 1);
						}
					}
					else if (streaming::has_model_loaded(iLocal_182)) {
						uLocal_166[iVar2] =
							vehicle::create_vehicle(iLocal_182, vLocal_122[iVar2 /*3*/], fLocal_132[iVar2], 1, 1);
						vehicle::set_vehicle_on_ground_properly(uLocal_166[iVar2], 1084227584);
						vehicle::_0xE842A9398079BD82(uLocal_166[iVar2], 0f);
						vehicle::_0xE3EBAAE484798530(uLocal_166[iVar2], 1);
						vehicle::_0xB28B1FE5BFADD7F5(uLocal_166[iVar2], 1);
						if (vehicle::_get_boat_anchor(uLocal_166[iVar2])) {
							vehicle::set_boat_anchor(uLocal_166[iVar2], 1);
						}
						vehicle::set_vehicle_engine_on(uLocal_166[iVar2], 0, 1, 0);
					}
					iVar2++;
				}
				if (entity::does_entity_exist(iLocal_111) && entity::does_entity_exist(uLocal_166[0]) &&
					entity::does_entity_exist(uLocal_166[1]) && entity::does_entity_exist(uLocal_166[2])) {
					streaming::set_model_as_no_longer_needed(iLocal_182);
				}
				if (entity::does_entity_exist(iLocal_170[0]) && entity::does_entity_exist(iLocal_170[1]) &&
					entity::does_entity_exist(iLocal_170[2])) {
					streaming::set_model_as_no_longer_needed(joaat("a_m_y_jetski_01"));
				}
				ped::set_ped_config_flag(player::player_ped_id(), 170, 1);
			}
		}
	}
}

// Position - 0x8C16
int func_152(int iParam0, int iParam1) {
	if (func_55(iParam0)) {
		if (ai::get_script_task_status(iParam0, iParam1) == 1 || ai::get_script_task_status(iParam0, iParam1) == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x8C49
bool func_153() {
	if (!func_155()) {
		return false;
	}
	if (func_55(player::player_ped_id())) {
		if (!func_154(player::player_ped_id(), vLocal_113, 100f) || cam::is_screen_faded_out()) {
			return true;
		}
	}
	return false;
}

// Position - 0x8C8C
bool func_154(int iParam0, vector3 vParam1, float fParam4) {
	return system::vdist2(entity::get_entity_coords(iParam0, 1), vParam1) <= fParam4 * fParam4;
}

// Position - 0x8CA9
int func_155() {
	if (Local_83.f_1 == 3) {
		return 1;
	}
	else if (Local_83.f_1 == 1 || Local_83.f_1 == 2) {
		if (time::get_clock_hours() >= 20 || time::get_clock_hours() < 5) {
			return 1;
		}
		else {
			return 0;
		}
	}
	return 1;
}

// Position - 0x8CF7
bool func_156(var *uParam0) {
	int iVar0;

	if (!uParam0->f_145) {
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 8) {
		if (gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 30)) {
			if (!gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 29)) {
				return false;
			}
			if (!func_157(&(*uParam0)[iVar0 /*18*/])) {
				return false;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return true;
}

// Position - 0x8D59
int func_157(var *uParam0) { return func_158(*uParam0, &uParam0->f_2, uParam0->f_1); }

// Position - 0x8D70
int func_158(int iParam0, char *sParam1, int iParam2) {
	if (gameplay::is_bit_set(iParam0, 30)) {
		if (gameplay::is_bit_set(iParam0, 29)) {
			switch (func_159(iParam0)) {
			case 0: return streaming::has_model_loaded(iParam2);

			case 1: return streaming::has_anim_dict_loaded(sParam1);

			case 2: return streaming::has_clip_set_loaded(sParam1);

			case 3: return graphics::has_streamed_texture_dict_loaded(sParam1);

			case 4: return vehicle::has_vehicle_recording_been_loaded(iParam2, sParam1);

			case 5: return ai::get_is_waypoint_recording_loaded(sParam1);

			case 6: return audio::request_script_audio_bank(sParam1, gameplay::is_bit_set(iParam0, 27), -1);

			case 7: return script::has_script_with_name_hash_loaded(iParam2);

			case 8: return ui::has_additional_text_loaded(iParam2);

			case 9: return streaming::has_ptfx_asset_loaded();

			default: break;
			}
		}
		else {
			return 0;
		}
	}
	return 0;
}

// Position - 0x8E64
int func_159(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10) {
		if (gameplay::is_bit_set(iParam0, iVar0)) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x8E90
void func_160(var *uParam0) {
	int iVar0;

	if (uParam0->f_145) {
		if (gameplay::get_frame_count() >= uParam0->f_146 + uParam0->f_147 ||
			gameplay::is_bit_set(Global_91491.f_20, 2) || gameplay::is_bit_set(Global_91491.f_20, 13)) {
			iVar0 = 0;
			while (iVar0 < 8) {
				if (gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 30)) {
					if (!gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 29)) {
						func_161(&(*uParam0)[iVar0 /*18*/]);
						uParam0->f_146 = gameplay::get_frame_count();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

// Position - 0x8F1A
void func_161(int *iParam0) { func_162(iParam0, &iParam0->f_2, iParam0->f_1); }

// Position - 0x8F30
void func_162(int *iParam0, char *sParam1, int iParam2) {
	if (gameplay::is_bit_set(*iParam0, 30)) {
		switch (func_159(*iParam0)) {
		case 0: streaming::request_model(iParam2); break;

		case 1: streaming::request_anim_dict(sParam1); break;

		case 2: streaming::request_clip_set(sParam1); break;

		case 3: graphics::request_streamed_texture_dict(sParam1, gameplay::is_bit_set(*iParam0, 28)); break;

		case 4: vehicle::request_vehicle_recording(iParam2, sParam1); break;

		case 5: ai::request_waypoint_recording(sParam1); break;

		case 6: audio::request_script_audio_bank(sParam1, gameplay::is_bit_set(*iParam0, 27), -1); break;

		case 7: script::request_script_with_name_hash(iParam2); break;

		case 8: ui::request_additional_text(sParam1, iParam2); break;

		case 9: streaming::request_ptfx_asset(); break;

		default: break;
		}
		gameplay::set_bit(iParam0, 29);
	}
}

// Position - 0x900A
void func_163() {
	int iVar0;

	if (Local_83.f_1 == 1 || Local_83.f_1 == 2) {
		switch (Local_83) {
		case 0:
			vLocal_113 = {-158.67f, -1555.16f, 34.63f};
			fLocal_116 = 187.71f;
			vLocal_118 = {-155.15f, -1550.83f, 34.53f};
			fLocal_121 = 213.13f;
			vLocal_201 = {-68.87878f, -1818.903f, 24.55311f};
			vLocal_204 = {-56.0098f, -1807.029f, 27.85417f};
			vLocal_136[0 /*3*/] = {-157.19f, -1555.36f, 35.07f};
			vLocal_136[1 /*3*/] = {-157.04f, -1557.57f, 35.11f};
			vLocal_136[2 /*3*/] = {-159.83f, -1557.39f, 34.96f};
			vLocal_136[3 /*3*/] = {-156.64f, -1551.96f, 34.92f};
			vLocal_136[4 /*3*/] = {-156.25f, -1552.58f, 34.93f};
			vLocal_136[5 /*3*/] = {-153.23f, -1553.05f, 34.93f};
			vLocal_136[6 /*3*/] = {-155.3f, -1556.41f, 35.13f};
			fLocal_158[0] = 101.91f;
			fLocal_158[1] = 38.48f;
			fLocal_158[2] = -36.7f;
			fLocal_158[3] = -52.93f;
			fLocal_158[4] = -75.07f;
			fLocal_158[5] = 33.13f;
			fLocal_158[6] = -170.02f;
			break;

		case 1:
			vLocal_113 = {368.72f, 294.06f, 102.96f};
			fLocal_116 = 25.17f;
			vLocal_118 = {373.71f, 290.72f, 102.89f};
			fLocal_121 = 33.24f;
			vLocal_201 = {-523.5497f, 262.2986f, 80.01991f};
			vLocal_204 = {-509.1013f, 272.478f, 86.17713f};
			vLocal_136[0 /*3*/] = {367.24f, 293.81f, 103.41f};
			vLocal_136[1 /*3*/] = {368.73f, 296.89f, 103.41f};
			vLocal_136[2 /*3*/] = {366.94f, 296.34f, 103.43f};
			vLocal_136[3 /*3*/] = {375.21f, 291.85f, 103.25f};
			vLocal_136[4 /*3*/] = {374.81f, 292.47f, 103.26f};
			vLocal_136[5 /*3*/] = {371.51f, 291.85f, 103.31f};
			vLocal_136[6 /*3*/] = {373.86f, 296.3f, 103.31f};
			fLocal_158[0] = -64.83f;
			fLocal_158[1] = -163.04f;
			fLocal_158[2] = -118.77f;
			fLocal_158[3] = 127.18f;
			fLocal_158[4] = 105.04f;
			fLocal_158[5] = -146.75f;
			fLocal_158[6] = 10.11f;
			break;

		case 2:
			vLocal_113 = {-807.98f, -2555.14f, 13.34f};
			fLocal_116 = 3.35f;
			vLocal_118 = {-810.1f, -2560.85f, 13.38f};
			fLocal_121 = 43.57f;
			vLocal_201 = {-1000.759f, -2436.092f, 17.16946f};
			vLocal_204 = {-986.7399f, -2424.87f, 22.16946f};
			vLocal_136[0 /*3*/] = {-809.45f, -2554.82f, 13.76f};
			vLocal_136[1 /*3*/] = {-808.47f, -2552.43f, 13.76f};
			vLocal_136[2 /*3*/] = {-806.32f, -2552.87f, 13.76f};
			vLocal_136[3 /*3*/] = {-808.59f, -2559.5f, 13.76f};
			vLocal_136[4 /*3*/] = {-809.1f, -2558.97f, 13.76f};
			vLocal_136[5 /*3*/] = {-812.82f, -2559.48f, 13.76f};
			vLocal_136[6 /*3*/] = {-810.72f, -2555.37f, 13.76f};
			fLocal_158[0] = -86.65f;
			fLocal_158[1] = -130.05f;
			fLocal_158[2] = 150.04f;
			fLocal_158[3] = 137.51f;
			fLocal_158[4] = 115.37f;
			fLocal_158[5] = -136.43f;
			fLocal_158[6] = 20.43f;
			break;

		case 3:
			vLocal_113 = {778.59f, -1160.2f, 28.35f};
			fLocal_116 = 302.47f;
			vLocal_118 = {778.47f, -1164.01f, 28.25f};
			fLocal_121 = 287.97f;
			vLocal_201 = {-1000.759f, -2436.092f, 17.16946f};
			vLocal_204 = {-986.7399f, -2424.87f, 22.16946f};
			vLocal_136[0 /*3*/] = {778.16f, -1158.78f, 28.88f};
			vLocal_136[1 /*3*/] = {780.82f, -1158.1f, 28.73f};
			vLocal_136[2 /*3*/] = {781.52f, -1158.81f, 28.7f};
			vLocal_136[3 /*3*/] = {779.16f, -1165.74f, 28.72f};
			vLocal_136[4 /*3*/] = {779.86f, -1165.52f, 28.72f};
			vLocal_136[5 /*3*/] = {780.75f, -1161.99f, 28.65f};
			vLocal_136[6 /*3*/] = {783.8f, -1165.61f, 28.74f};
			fLocal_158[0] = -147.53f;
			fLocal_158[1] = 171.51f;
			fLocal_158[2] = 104.94f;
			fLocal_158[3] = 21.91f;
			fLocal_158[4] = -0.22f;
			fLocal_158[5] = 107.91f;
			fLocal_158[6] = -95.23f;
			break;

		case 4:
			vLocal_113 = {-1066.59f, -1151.04f, 1.71f};
			fLocal_116 = 258.32f;
			vLocal_136[0 /*3*/] = {-1065.07f, -1151.02f, 2.16f};
			vLocal_136[1 /*3*/] = {-1065.35f, -1149.36f, 2.16f};
			vLocal_136[2 /*3*/] = {-1067.13f, -1151.68f, 2.16f};
			vLocal_136[3 /*3*/] = {-1066.3f, -1149.38f, 2.16f};
			vLocal_136[4 /*3*/] = {-1066.01f, -1152.26f, 2.16f};
			fLocal_158[0] = 75.06f;
			fLocal_158[1] = 134.25f;
			fLocal_158[2] = -52.71f;
			fLocal_158[3] = -93.39f;
			fLocal_158[4] = -141.52f;
			vLocal_201 = {-1265.744f, -1057.199f, 5.410841f};
			vLocal_204 = {-1258.679f, -1049.919f, 9.443882f};
			break;
		}
		func_168(Local_83, &vLocal_207, &vLocal_210, &fLocal_213);
		iLocal_174[0] = joaat("a_f_y_hipster_02");
		iLocal_174[1] = joaat("a_m_y_hipster_02");
		iLocal_174[2] = joaat("a_m_y_hipster_02");
		iLocal_174[3] = joaat("a_f_y_hipster_02");
		iLocal_174[4] = joaat("a_m_y_hipster_02");
		iLocal_174[5] = joaat("a_m_y_hipster_02");
		iLocal_174[6] = joaat("a_m_y_hipster_02");
		if (Local_83.f_1 == 1) {
			cLocal_184 = "random@street_race";
			sLocal_185[0] = "_car_b_chatting_female";
			sLocal_185[1] = "_car_b_chatting_male";
			sLocal_185[2] = "_car_b_chatting_male";
			sLocal_185[3] = "_car_b_chatting_female";
			sLocal_185[4] = "_car_b_lookout";
		}
		else {
			cLocal_184 = "random@street_race";
			sLocal_185[0] = "_car_a_flirt_girl";
			sLocal_185[1] = "_car_a_gawker_male_a";
			sLocal_185[2] = "_car_a_gawker_male_b";
			sLocal_185[3] = "_car_b_chatting_female";
			sLocal_185[4] = "_car_b_chatting_male";
			sLocal_185[5] = "_car_b_driver";
			sLocal_185[6] = "_car_b_lookout";
			func_167(&uLocal_216, iLocal_183);
		}
		iLocal_182 = func_166(Local_83.f_1);
		iVar0 = 0;
		while (iVar0 <= iLocal_174 - 1) {
			func_167(&uLocal_216, iLocal_174[iVar0]);
			iVar0++;
		}
		func_167(&uLocal_216, iLocal_182);
		func_164(&uLocal_216, cLocal_184);
		pathfind::set_ped_paths_in_area(vLocal_201, vLocal_204, 0, 0);
		pathfind::set_roads_in_angled_area(vLocal_207, vLocal_210, fLocal_213, 0, 0, 1);
		iLocal_94 = 1;
	}
	else if (Local_83.f_1 == 3) {
		switch (Local_83) {
		case 5:
			vLocal_113 = {3066.63f, 650.9f, 0.17f};
			fLocal_116 = 351.81f;
			vLocal_122[0 /*3*/] = {3073.57f, 648.09f, 0.01f};
			fLocal_132[0] = 5.72f;
			vLocal_122[1 /*3*/] = {3071.53f, 648.79f, -0.09f};
			fLocal_132[1] = 351.33f;
			vLocal_122[2 /*3*/] = {3068.73f, 645.53f, -0.07f};
			fLocal_132[2] = 348.18f;
			break;

		case 6:
			vLocal_113 = {3462.11f, 5192.15f, -0.04f};
			fLocal_116 = 222.9f;
			vLocal_122[0 /*3*/] = {3456.64f, 5195.91f, 0.12f};
			fLocal_132[0] = 211.54f;
			vLocal_122[1 /*3*/] = {3453.19f, 5192.84f, -0.17f};
			fLocal_132[1] = 201.55f;
			vLocal_122[2 /*3*/] = {3451.06f, 5189.43f, -0.3f};
			fLocal_132[2] = 221.55f;
			break;

		case 7:
			vLocal_113 = {194.64f, 3621.27f, 29.91f};
			fLocal_116 = 163.95f;
			vLocal_122[0 /*3*/] = {198.62f, 3620.46f, 29.91f};
			fLocal_132[0] = 175.4f;
			vLocal_122[1 /*3*/] = {202.78f, 3619.69f, 29.87f};
			fLocal_132[1] = 163.69f;
			vLocal_122[2 /*3*/] = {210.14f, 3618.88f, 29.87f};
			fLocal_132[2] = 175.31f;
			break;

		case 8:
			vLocal_113 = {627.58f, -2138.06f, -0.07f};
			fLocal_116 = 180.09f;
			vLocal_122[0 /*3*/] = {643.09f, -2146.11f, -0.09f};
			fLocal_132[0] = 143.89f;
			vLocal_122[1 /*3*/] = {638.21f, -2145.3f, -0.1f};
			fLocal_132[1] = 172.41f;
			vLocal_122[2 /*3*/] = {633.56f, -2143.83f, -0.04f};
			fLocal_132[2] = 191.97f;
			break;
		}
		iLocal_182 = joaat("seashark");
		func_167(&uLocal_216, iLocal_182);
		func_167(&uLocal_216, joaat("a_m_y_jetski_01"));
	}
}

// Position - 0x9995
void func_164(var *uParam0, char *sParam1) { func_165(uParam0, 1, -1, sParam1, 0); }

// Position - 0x99A8
void func_165(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8) {
		if (gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 30)) {
			if (gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], iParam1)) {
				if (iParam2 != -1) {
					if ((*uParam0)[iVar0 /*18*/].f_1 == iParam2) {
						return;
					}
				}
				if (iParam1 != 4) {
					if (!gameplay::are_strings_equal(sParam3, "NULL")) {
						if (gameplay::are_strings_equal(&(*uParam0)[iVar0 /*18*/].f_2, sParam3)) {
							return;
						}
					}
				}
				if (iParam1 == 9) {
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145) {
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8) {
		if (!gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 30)) {
			StringCopy(&(*uParam0)[iVar0 /*18*/].f_2, sParam3, 64);
			(*uParam0)[iVar0 /*18*/].f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			gameplay::set_bit(&(*uParam0)[iVar0 /*18*/], iParam1);
			gameplay::set_bit(&(*uParam0)[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

// Position - 0x9A90
int func_166(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 1: iVar0 = joaat("bati"); break;

	case 2: iVar0 = joaat("ninef"); break;

	case 3: iVar0 = joaat("seashark"); break;
	}
	return iVar0;
}

// Position - 0x9AD1
void func_167(var *uParam0, int iParam1) { func_165(uParam0, 0, iParam1, "NULL", 0); }

// Position - 0x9AE5
void func_168(int iParam0, var *uParam1, var *uParam2, float *fParam3) {
	switch (iParam0) {
	case 0:
		*uParam1 = {311.1262f, -1896.261f, 20.68329f};
		*uParam2 = {-295.0653f, -1405.53f, 35.3146f};
		*fParam3 = 300f;
		break;

	case 1:
		*uParam1 = {273.185f, 335.2969f, 105.5704f};
		*uParam2 = {412.2877f, 299.2304f, 101.0724f};
		*fParam3 = 20f;
		break;

	case 2:
		*uParam1 = {-823.7157f, -2588f, 13.7691f};
		*uParam2 = {-801.3356f, -2464.007f, 12.42913f};
		*fParam3 = 30f;
		break;

	case 3:
		*uParam1 = {791.8257f, -1423.863f, 24.17954f};
		*uParam2 = {783.167f, -1015.648f, 50.24134f};
		*fParam3 = 200f;
		break;

	case 4:
		*uParam1 = {-1084.03f, -1165.724f, 0.150211f};
		*uParam2 = {-1029.213f, -1134.581f, 2.174534f};
		*fParam3 = 10f;
		break;
	}
}

// Position - 0x9C07
bool func_169() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_54(9)) {
		return false;
	}
	if (func_39(6) || func_39(7)) {
		return false;
	}
	if (Global_55816) {
		return false;
	}
	if (func_192()) {
		return false;
	}
	if (Local_83.f_1 != 3 && func_44() != 1) {
		return false;
	}
	if (gameplay::is_stunt_jump_in_progress()) {
		return false;
	}
	if (func_55(player::player_ped_id()) && ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar0 = player::get_players_last_vehicle();
		if (func_14(iVar0) && ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iVar0) &&
			!func_191(player::player_ped_id(), iVar0, -1) && entity::get_entity_model(iVar0) != joaat("taxi")) {
			return false;
		}
	}
	switch (Local_83) {
	case 0:
		if (Global_101674[0]) {
			return false;
		}
		break;

	case 1:
		if (Global_101674[1]) {
			return false;
		}
		break;

	case 2:
		if (Global_101674[2]) {
			return false;
		}
		break;

	case 3:
		if (Global_101674[3]) {
			return false;
		}
		break;

	case 4:
		if (Global_101674[4]) {
			return false;
		}
		break;

	case 5:
		if (Global_101664[0]) {
			return false;
		}
		break;

	case 6:
		if (Global_101664[1]) {
			return false;
		}
		break;

	case 7:
		if (Global_101664[2]) {
			return false;
		}
		break;

	case 8:
		if (Global_101664[3]) {
			return false;
		}
		break;
	}
	if (!func_155()) {
		iVar1 = 0;
		while (iVar1 <= iLocal_174 - 1) {
			if (func_55(uLocal_103[iVar1])) {
				ai::open_sequence_task(&iVar2);
				ai::task_pause(0, iVar1 * 100);
				ai::task_wander_standard(0, 1193033728, 0);
				ai::close_sequence_task(iVar2);
				ai::task_perform_sequence(uLocal_103[iVar1], iVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= iLocal_170 - 1) {
			if (func_55(iLocal_170[iVar1])) {
				ai::open_sequence_task(&iVar2);
				ai::task_pause(0, iVar1 * 110);
				if (func_14(uLocal_166[iVar1]) && ped::is_ped_in_vehicle(iLocal_170[iVar1], uLocal_166[iVar1], 0)) {
					ai::task_vehicle_drive_wander(0, uLocal_166[iVar1], 30f, 786597);
				}
				else {
					ai::task_wander_standard(0, 1193033728, 0);
				}
				ai::close_sequence_task(iVar2);
				ai::task_perform_sequence(iLocal_170[iVar1], iVar2);
			}
			iVar1++;
		}
		if (func_55(iLocal_112)) {
			if (func_14(iLocal_111) && ped::is_ped_in_vehicle(iLocal_112, iLocal_111, 0)) {
				ai::task_vehicle_drive_wander(iLocal_112, iLocal_111, 30f, 786597);
			}
			else {
				ai::task_wander_standard(iLocal_112, 1193033728, 0);
			}
		}
		return false;
	}
	if (func_171()) {
		iVar4 = 0;
		while (iVar4 <= iLocal_174 - 1) {
			if (func_55(uLocal_103[iVar4])) {
				ai::open_sequence_task(&iVar3);
				ai::task_pause(0, iVar4 * 50);
				ai::task_smart_flee_ped(0, player::player_ped_id(), 500f, -1, 0, 0);
				ai::close_sequence_task(iVar3);
				if (iVar4 % 2 == 0) {
					func_170(uLocal_103[iVar4], 1);
				}
				ai::task_perform_sequence(uLocal_103[iVar4], iVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= iLocal_170 - 1) {
			if (func_14(uLocal_166[iVar4]) && Local_83.f_1 == 3) {
				vehicle::set_boat_anchor(uLocal_166[iVar4], 0);
			}
			if (func_55(iLocal_170[iVar4])) {
				ai::open_sequence_task(&iVar3);
				ai::task_pause(0, iVar4 * 60);
				if (func_14(uLocal_166[iVar4]) && ped::is_ped_in_vehicle(iLocal_170[iVar4], uLocal_166[iVar4], 0)) {
					ai::task_vehicle_drive_wander(0, uLocal_166[iVar4], 50f, 786468);
				}
				else {
					ai::task_smart_flee_ped(0, player::player_ped_id(), 500f, -1, 0, 0);
				}
				ai::close_sequence_task(iVar3);
				ai::task_perform_sequence(iLocal_170[iVar4], iVar3);
				if (iVar4 % 2 == 0) {
					func_170(iLocal_170[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_14(iLocal_111) && Local_83.f_1 == 3) {
			vehicle::set_boat_anchor(iLocal_111, 0);
		}
		if (func_55(iLocal_112)) {
			if (func_14(iLocal_111) && ped::is_ped_in_vehicle(iLocal_112, iLocal_111, 0)) {
				ai::task_vehicle_drive_wander(iLocal_112, iLocal_111, 50f, 786468);
			}
			else {
				ai::task_smart_flee_ped(iLocal_112, player::player_ped_id(), 500f, -1, 0, 0);
			}
		}
		switch (Local_83) {
		case 0:
			Global_101674[0] = 1;
			Global_101680[0] = gameplay::get_game_timer();
			break;

		case 1:
			Global_101674[1] = 1;
			Global_101680[1] = gameplay::get_game_timer();
			break;

		case 2:
			Global_101674[2] = 1;
			Global_101680[2] = gameplay::get_game_timer();
			break;

		case 3:
			Global_101674[3] = 1;
			Global_101680[3] = gameplay::get_game_timer();
			break;

		case 4:
			Global_101674[4] = 1;
			Global_101680[4] = gameplay::get_game_timer();
			break;

		case 5:
			Global_101664[0] = 1;
			Global_101669[0] = gameplay::get_game_timer();
			break;

		case 6:
			Global_101664[1] = 1;
			Global_101669[1] = gameplay::get_game_timer();
			break;

		case 7:
			Global_101664[2] = 1;
			Global_101669[2] = gameplay::get_game_timer();
			break;

		case 8:
			Global_101664[3] = 1;
			Global_101669[3] = gameplay::get_game_timer();
			break;
		}
		return false;
	}
	return true;
}

// Position - 0xA15B
void func_170(int iParam0, int iParam1) {
	char *sVar0;
	int iVar1;
	int iVar2;

	if (func_55(iParam0)) {
		iVar1 = 2;
		if (iParam1) {
			iVar1 = 3;
		}
		iVar2 = gameplay::get_random_int_in_range(0, iVar1);
		if (iVar2 == 0) {
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1) {
			sVar0 = "SCREAM_TERROR";
		}
		else {
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (ped::is_ped_male(iParam0)) {
			func_129(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else {
			func_129(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

// Position - 0xA1CC
bool func_171() {
	int iVar0;

	if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
		return true;
	}
	if (Local_83.f_1 == 3) {
		iVar0 = 0;
		while (iVar0 <= iLocal_170 - 1) {
			if (entity::does_entity_exist(iLocal_170[iVar0])) {
				if (ped::is_ped_injured(iLocal_170[iVar0])) {
					return true;
				}
				else if (func_172(iLocal_170[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) ||
						 ped::is_ped_being_jacked(iLocal_170[iVar0])) {
					return true;
				}
			}
			if (entity::does_entity_exist(uLocal_166[iVar0])) {
				if (entity::is_entity_dead(uLocal_166[iVar0], 0)) {
					return true;
				}
				else if (entity::has_entity_been_damaged_by_entity(uLocal_166[iVar0], player::player_ped_id(), 1) &&
						 entity::get_entity_health(uLocal_166[iVar0]) < 900) {
					return true;
				}
			}
			iVar0++;
		}
		if (entity::does_entity_exist(iLocal_111)) {
			if (entity::is_entity_dead(iLocal_111, 0)) {
				return true;
			}
			else if (entity::has_entity_been_damaged_by_entity(iLocal_111, player::player_ped_id(), 1) &&
					 entity::get_entity_health(iLocal_111) < 900) {
				return true;
			}
		}
		return false;
	}
	if (func_154(player::player_ped_id(), vLocal_89, 50f) && ped::is_ped_shooting(player::player_ped_id())) {
		return true;
	}
	if (entity::does_entity_exist(iLocal_112)) {
		if (ped::is_ped_injured(iLocal_112)) {
			return true;
		}
		else if (func_172(iLocal_112, 1, 1116471296, 1126825984, 0, 0, 0, 0)) {
			return true;
		}
		else if (ped::is_ped_being_jacked(iLocal_112)) {
			ped::set_blocking_of_non_temporary_events(iLocal_112, 0);
			return true;
		}
	}
	if (entity::does_entity_exist(iLocal_111)) {
		if (entity::is_entity_dead(iLocal_111, 0)) {
			return true;
		}
		else if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_111, 1) ||
				 entity::has_entity_been_damaged_by_entity(iLocal_111, player::player_ped_id(), 1)) {
			return true;
		}
	}
	if (entity::does_entity_exist(iLocal_117)) {
		if (entity::is_entity_dead(iLocal_117, 0)) {
			return true;
		}
		else if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_117, 1) ||
				 entity::has_entity_been_damaged_by_entity(iLocal_117, player::player_ped_id(), 1)) {
			return true;
		}
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_174 - 1) {
		if (entity::does_entity_exist(uLocal_103[iVar0])) {
			if (ped::is_ped_injured(uLocal_103[iVar0])) {
				return true;
			}
			else if (func_172(uLocal_103[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0xA41E
bool func_172(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7) {
	vector3 vVar0;

	if (func_15(player::player_ped_id()) && func_15(iParam0)) {
		if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
			return true;
		}
		if (func_186(iParam0, iParam1, iParam5, iParam6, iParam7)) {
			return true;
		}
		if (!weapon::is_ped_armed(player::player_ped_id(), 6)) {
			if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
				vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1) - entity::get_entity_coords(iParam0, 1)};
				if (vVar0.x * vVar0.x + vVar0.y * vVar0.y + vVar0.z * vVar0.z <= 5f) {
					return func_185(player::player_ped_id(), iParam0, fParam2);
				}
			}
		}
		if (iParam4) {
			return false;
		}
		else if (func_173(iParam0, fParam3)) {
			return true;
		}
	}
	return false;
}

// Position - 0xA4D9
bool func_173(int iParam0, float fParam1) {
	float fVar0;

	if (func_15(player::player_ped_id()) && func_15(iParam0)) {
		if (func_184(iParam0) || player::is_player_targetting_entity(player::player_id(), iParam0)) {
			if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
				fVar0 = 40f;
			}
			else {
				fVar0 = 3f;
			}
			if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0)) {
				if (func_174(iParam0, fParam1)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0xA54F
bool func_174(int iParam0, float fParam1) { return func_175(iParam0, player::player_ped_id(), fParam1, 1, 250, 7); }

// Position - 0xA567
bool func_175(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_183(iParam0, iParam1);
	if (!func_15(iParam0) || !func_15(iParam1)) {
		if (iVar4 != -1) {
			func_182(&Local_40[iVar4 /*4*/]);
		}
		return false;
	}
	if (!func_179(iParam0, iParam1, fParam2, iParam3)) {
		return false;
	}
	if (iVar4 == -1) {
		iVar4 = func_178();
		if (iVar4 == -1) {
			return false;
		}
		Local_40[iVar4 /*4*/].f_1 = iParam0;
		Local_40[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = {ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f)};
	iVar0 = func_176(&Local_40[iVar4 /*4*/], vVar1, iParam1, &Local_40[iVar4 /*4*/].f_3, iParam0, iParam5);
	return iVar0 || gameplay::get_game_timer() - Local_40[iVar4 /*4*/].f_3 < iParam4;
}

// Position - 0xA628
int func_176(int *iParam0, vector3 vParam1, int iParam4, var *uParam5, int iParam6, int iParam7) {
	var uVar0;
	vector3 vVar1;
	var uVar4;
	int iVar7;
	int iVar8;

	iVar7 = 0;
	if (!func_15(iParam4)) {
		*iParam0 = 0;
		return 0;
	}
	if (*iParam0 == 0) {
		vVar1 = {func_177(iParam4, iParam7)};
		*iParam0 =
			worldprobe::start_shape_test_los_probe(vParam1, vVar1 + vVar1 - vParam1 * FtoV(0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = worldprobe::get_shape_test_result(*iParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0) {
		*iParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1) {
		return 0;
	}
	*iParam0 = 0;
	if (entity::is_entity_a_ped(iVar7)) {
		func_15(iVar7);
		if (entity::get_ped_index_from_entity_index(iVar7) == iParam4) {
			if (bLocal_81) {
				graphics::draw_debug_line_with_two_colours(vParam1, entity::get_entity_coords(iParam4, 1), 255, 0, 0,
														   255, 0, 0, 255, 255);
			}
			*uParam5 = gameplay::get_game_timer();
			return 1;
		}
		return 0;
	}
	if (entity::is_entity_a_vehicle(iVar7)) {
		func_15(iVar7);
		if (ped::is_ped_in_any_vehicle(iParam4, 0)) {
			if (entity::get_vehicle_index_from_entity_index(iVar7) == ped::get_vehicle_ped_is_in(iParam4, 0)) {
				if (bLocal_81) {
					graphics::draw_debug_line_with_two_colours(vParam1, entity::get_entity_coords(iParam4, 1), 255, 0,
															   0, 255, 0, 0, 255, 255);
				}
				*uParam5 = gameplay::get_game_timer();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

// Position - 0xA754
Vector3 func_177(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == 7) {
		iVar0 = gameplay::get_random_int_in_range(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0) {
		return entity::get_entity_coords(iParam0, 1);
	}
	else if (iParam1 == 1) {
		return ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2) {
		return ped::get_ped_bone_coords(iParam0, 39317 /*func_164*/, 0f, 0f, 0f);
	}
	else if (iParam1 == 3) {
		return ped::get_ped_bone_coords(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4) {
		return ped::get_ped_bone_coords(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5) {
		return ped::get_ped_bone_coords(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6) {
		return ped::get_ped_bone_coords(iParam0, 36864, 0f, 0f, 0f);
	}
	return entity::get_entity_coords(iParam0, 1);
}

// Position - 0xA819
int func_178() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_40) {
		if (Local_40[iVar0 /*4*/] == 0 && Local_40[iVar0 /*4*/].f_1 == 0 && Local_40[iVar0 /*4*/].f_2 == 0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xA863
int func_179(int iParam0, int iParam1, float fParam2, int iParam3) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_181(entity::get_entity_coords(iParam1, 1) - entity::get_entity_coords(iParam0, 1))};
	if (fParam2 < 0.1f || fParam2 > 360f) {
		return 1;
	}
	if (iParam3 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_181(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						  ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_180(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam2 / 2f)) {
		return 0;
	}
	return 1;
}

// Position - 0xA8F4
float func_180(vector3 vParam0, vector3 vParam3) {
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

// Position - 0xA915
Vector3 func_181(vector3 vParam0) {
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

// Position - 0xA954
void func_182(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

// Position - 0xA96F
int func_183(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_40) {
		if (Local_40[iVar0 /*4*/].f_1 == iParam0 && Local_40[iVar0 /*4*/].f_2 == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xA9AE
int func_184(int iParam0) {
	if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) &&
		weapon::is_ped_armed(player::player_ped_id(), 6)) {
		return 1;
	}
	return 0;
}

// Position - 0xA9D6
bool func_185(int iParam0, int iParam1, float fParam2) {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {entity::get_entity_forward_vector(iParam0)};
	vVar3 = {entity::get_entity_coords(iParam1, 1) - entity::get_entity_coords(iParam0, 1)};
	return (vVar0.x * vVar3.x + vVar0.y * vVar3.y) / system::vdist(vVar3, 0f, 0f, 0f) > system::cos(fParam2);
}

// Position - 0xAA1D
bool func_186(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) {
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 8f;
	fVar1 = 15f;
	if (iParam1 == 0) {
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2) {
		fVar0 = 2f;
	}
	if (func_15(player::player_ped_id()) && func_15(iParam0)) {
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan")) {
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2) {
			if (func_190(iParam0, iParam1, fVar0, fVar1)) {
				return true;
			}
			if (func_187(iParam0, fVar1, bParam3, bParam4)) {
				return true;
			}
		}
		else {
			if (weapon::is_ped_current_weapon_silenced(player::player_ped_id())) {
				if (ped::is_ped_shooting(player::player_ped_id())) {
					if (gameplay::is_bullet_in_area(entity::get_entity_coords(iParam0, 1), fVar0, 1)) {
						return true;
					}
				}
			}
			else {
				if (iParam1) {
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_190(iParam0, iParam1, fVar0, fVar1)) {
					return true;
				}
			}
			if (func_187(iParam0, fVar1, bParam3, bParam4)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xAB18
bool func_187(int iParam0, float fParam1, bool bParam2, bool bParam3) {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {entity::get_entity_coords(iParam0, 1)};
	vVar3 = {vVar0};
	vVar0.x -= fParam1;
	vVar0.y -= fParam1;
	vVar0.z -= fParam1;
	vVar3.x += fParam1;
	vVar3.y += fParam1;
	vVar3.z += fParam1;
	if (bParam2) {
		if (gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_molotov"), fParam1, 1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_smokegrenade"), fParam1,
										  1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1)) {
			if (bParam3) {
				if (func_188(iParam0, fParam1)) {
					return true;
				}
				else {
					return false;
				}
			}
			return true;
		}
	}
	else {
		if (bParam3) {
			if (func_188(iParam0, fParam1)) {
				return true;
			}
			else {
				return false;
			}
		}
		if (gameplay::is_projectile_in_area(vVar0, vVar3, 1)) {
			return true;
		}
	}
	return false;
}

// Position - 0xAC24
bool func_188(int iParam0, float fParam1) {
	var uVar0;
	vector3 vVar1;

	if (gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0)) {
		if (func_189(iParam0, vVar1, 90f, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xACB9
bool func_189(int iParam0, vector3 vParam1, float fParam4, int iParam5) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_181(vParam1 - entity::get_entity_coords(iParam0, 1))};
	if (fParam4 < 0.1f || fParam4 > 360f) {
		return true;
	}
	if (iParam5 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_181(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						  ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_180(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam4 / 2f)) {
		return false;
	}
	return true;
}

// Position - 0xAD47
bool func_190(int iParam0, int iParam1, float fParam2, float fParam3) {
	if (iParam1) {
		if (ped::is_ped_shooting(player::player_ped_id())) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0)) {
				return true;
			}
		}
	}
	if (gameplay::is_bullet_in_area(entity::get_entity_coords(iParam0, 1), fParam2, 1)) {
		return true;
	}
	return false;
}

// Position - 0xAD8F
int func_191(int iParam0, int iParam1, int iParam2) {
	if (!entity::is_entity_dead(iParam0, 0) && !entity::is_entity_dead(iParam1, 0)) {
		if (ped::is_ped_sitting_in_vehicle(iParam0, iParam1)) {
			if (vehicle::get_ped_in_vehicle_seat(iParam1, iParam2, 0) == iParam0) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0xADCD
bool func_192() {
	switch (Local_83) {
	case 5: return gameplay::is_bit_set(Global_101700.f_23935.f_2, 0);

	case 6: return gameplay::is_bit_set(Global_101700.f_23935.f_2, 1);

	case 7: return gameplay::is_bit_set(Global_101700.f_23935.f_2, 2);

	case 8: return gameplay::is_bit_set(Global_101700.f_23935.f_2, 3);

	case 0: return gameplay::is_bit_set(Global_101700.f_23938.f_3, 0);

	case 1: return gameplay::is_bit_set(Global_101700.f_23938.f_3, 1);

	case 2: return gameplay::is_bit_set(Global_101700.f_23938.f_3, 2);

	case 3: return gameplay::is_bit_set(Global_101700.f_23938.f_3, 3);

	case 4: return gameplay::is_bit_set(Global_101700.f_23938.f_3, 4);
	}
	return false;
}

// Position - 0xAEC7
void func_193() {
	iLocal_82 = 0;
	iLocal_92 = 0;
	bLocal_99 = false;
	iLocal_100 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	func_195(1);
	ai::set_scenario_type_enabled("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	ai::set_scenario_type_enabled("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_83 == 1) {
		uLocal_215 = func_194(374.0083f, 279.5919f, 102.3306f, 40f);
		gameplay::clear_area_of_vehicles(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2) {
		uLocal_214 = func_194(vLocal_89, 60f);
	}
}

// Position - 0xAF5C
var func_194(vector3 vParam0, float fParam3) {
	vector3 vVar0;

	vVar0 = {fParam3 / 2f, fParam3 / 2f, fParam3 / 2f};
	return ped::add_scenario_blocking_area(vParam0 - vVar0, vParam0 + vVar0, 0, 1, 1, 1);
}

// Position - 0xAF8E
void func_195(int iParam0) {
	if (iParam0) {
		switch (Local_83) {
		case 0:
		case 1:
		case 2:
		case 3:
			func_167(&uLocal_216, joaat("banshee"));
			func_167(&uLocal_216, joaat("feltzer2"));
			func_167(&uLocal_216, joaat("sentinel"));
			break;

		case 4:
			func_167(&uLocal_216, joaat("bati"));
			func_167(&uLocal_216, joaat("ruffian"));
			break;

		case 5:
		case 6:
		case 7:
		case 8: func_167(&uLocal_216, joaat("seashark")); break;
		}
	}
	else {
		func_196(&uLocal_216);
	}
}

// Position - 0xB02C
void func_196(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8) {
		if (gameplay::is_bit_set((*uParam0)[iVar0 /*18*/], 30)) {
			func_197(&(*uParam0)[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

// Position - 0xB065
void func_197(var *uParam0) { func_198(*uParam0, &uParam0->f_2, uParam0->f_1); }

// Position - 0xB07C
void func_198(int iParam0, char *sParam1, int iParam2) {
	if (gameplay::is_bit_set(iParam0, 30)) {
		switch (func_159(iParam0)) {
		case 0: streaming::set_model_as_no_longer_needed(iParam2); break;

		case 1: streaming::remove_anim_dict(sParam1); break;

		case 2: streaming::remove_clip_set(sParam1); break;

		case 3: graphics::set_streamed_texture_dict_as_no_longer_needed(sParam1); break;

		case 4: vehicle::remove_vehicle_recording(iParam2, sParam1); break;

		case 5: ai::remove_waypoint_recording(sParam1); break;

		case 6: audio::release_script_audio_bank(); break;

		case 7: script::set_script_with_name_hash_as_no_longer_needed(iParam2); break;

		case 8: ui::clear_additional_text(iParam2, gameplay::is_bit_set(iParam0, 26)); break;

		case 9: streaming::remove_ptfx_asset(); break;

		default: break;
		}
	}
}

// Position - 0xB13C
int func_199(int iParam0) {
	switch (iParam0) {
	case 0: return gameplay::is_bit_set(Global_101700.f_23938.f_1, 0);

	case 1: return gameplay::is_bit_set(Global_101700.f_23938.f_1, 1);

	case 2: return gameplay::is_bit_set(Global_101700.f_23938.f_1, 2);

	case 3: return gameplay::is_bit_set(Global_101700.f_23938.f_1, 3);

	case 4: return gameplay::is_bit_set(Global_101700.f_23938.f_1, 4);
	}
	return 0;
}

// Position - 0xB1CE
int func_200(int iParam0, int iParam1) {
	var uVar0;

	if (iParam0 == 11 || iParam0 == -1) {
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32) {
		return 0;
	}
	uVar0 = gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iParam0], iParam1);
	return uVar0;
}

// Position - 0xB21B
void func_201() {
	if (func_202(func_203(86, 0), vLocal_89, 1f, 0)) {
		Local_83 = 0;
		Local_83.f_1 = 2;
		Local_83.f_3 = 100;
		Local_83.f_4 = 20;
	}
	else if (func_202(func_203(87, 0), vLocal_89, 1f, 0)) {
		Local_83 = 1;
		Local_83.f_1 = 2;
		Local_83.f_3 = 500;
		Local_83.f_4 = 18;
	}
	else if (func_202(func_203(88, 0), vLocal_89, 1f, 0)) {
		Local_83 = 2;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1000;
		Local_83.f_4 = 2;
	}
	else if (func_202(func_203(89, 0), vLocal_89, 1f, 0)) {
		Local_83 = 3;
		Local_83.f_1 = 2;
		Local_83.f_3 = 1250;
		Local_83.f_4 = 4;
	}
	else if (func_202(func_203(90, 0), vLocal_89, 1f, 0)) {
		Local_83 = 4;
		Local_83.f_1 = 1;
		Local_83.f_3 = 1500;
		Local_83.f_4 = 5;
	}
	else if (func_202(func_203(82, 0), vLocal_89, 1f, 0)) {
		Local_83 = 5;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 16;
	}
	else if (func_202(func_203(83, 0), vLocal_89, 1f, 0)) {
		Local_83 = 6;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 13;
	}
	else if (func_202(func_203(84, 0), vLocal_89, 1f, 0)) {
		Local_83 = 7;
		Local_83.f_1 = 3;
		Local_83.f_3 = 0;
		Local_83.f_4 = 15;
		Local_83.f_5 = 1;
	}
	else if (func_202(func_203(85, 0), vLocal_89, 1f, 0)) {
		Local_83 = 8;
		Local_83.f_1 = 3;
		Local_83.f_4 = 24;
		Local_83.f_3 = 0;
		Local_83.f_5 = 1;
	}
	else {
		func_204(0);
	}
}

// Position - 0xB3B3
bool func_202(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
	if (fParam6 < 0f) {
		fParam6 = 0f;
	}
	if (!iParam7) {
		if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
			if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
				if (gameplay::absf(vParam0.z - vParam3.z) <= fParam6) {
					return true;
				}
			}
		}
	}
	else if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
		if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
			return true;
		}
	}
	return false;
}

// Position - 0xB42E
Vector3 func_203(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0f, 0f, 0f;
	}
	return Global_25501[iVar0 /*23*/][iParam1 /*3*/];
}

// Position - 0xB46C
void func_204(int iParam0) {
	int iVar0;
	int iVar1;

	if (!iLocal_93) {
		cam::stop_gameplay_hint(0);
		iLocal_93 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (func_15(uLocal_103[iVar0])) {
			ai::clear_ped_tasks(uLocal_103[iVar0]);
			ai::task_wander_standard(uLocal_103[iVar0], 1193033728, 0);
			ped::set_blocking_of_non_temporary_events(uLocal_103[iVar0], 0);
			entity::set_ped_as_no_longer_needed(&uLocal_103[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		if (func_15(iLocal_170[iVar0])) {
			if (func_15(uLocal_166[iVar0])) {
				ai::clear_ped_tasks(iLocal_170[iVar0]);
				if (vehicle::is_this_model_a_boat(entity::get_entity_model(uLocal_166[iVar0]))) {
					vehicle::set_boat_anchor(uLocal_166[iVar0], 0);
				}
				ai::task_vehicle_drive_wander(iLocal_170[iVar0], uLocal_166[iVar0], 20f, 786599);
				ped::set_ped_keep_task(iLocal_170[iVar0], 1);
				ped::set_blocking_of_non_temporary_events(iLocal_170[iVar0], 0);
				entity::set_ped_as_no_longer_needed(&iLocal_170[iVar0]);
				entity::set_vehicle_as_no_longer_needed(&uLocal_166[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_15(iLocal_112)) {
		if (func_15(iLocal_111)) {
			ai::clear_ped_tasks(iLocal_112);
			ped::set_ped_combat_attributes(iLocal_112, 1, 1);
			ai::task_vehicle_drive_wander(iLocal_112, iLocal_111, 15f, 786599);
			ped::set_ped_keep_task(iLocal_112, 1);
			ped::set_blocking_of_non_temporary_events(iLocal_112, 0);
			entity::set_ped_as_no_longer_needed(&iLocal_112);
			entity::set_vehicle_as_no_longer_needed(&iLocal_111);
		}
	}
	if (func_15(iLocal_117)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_117);
	}
	switch (Local_83) {
	case 5:
		func_207(82, 0, 0);
		gameplay::set_bit(&Global_101700.f_23935.f_2, 0);
		break;

	case 6:
		func_207(83, 0, 0);
		gameplay::set_bit(&Global_101700.f_23935.f_2, 1);
		break;

	case 7:
		func_207(84, 0, 0);
		gameplay::set_bit(&Global_101700.f_23935.f_2, 2);
		break;

	case 8:
		func_207(85, 0, 0);
		gameplay::set_bit(&Global_101700.f_23935.f_2, 3);
		break;

	case 0:
		func_207(86, 0, 0);
		gameplay::set_bit(&Global_101700.f_23938.f_3, 0);
		break;

	case 1:
		func_207(87, 0, 0);
		gameplay::set_bit(&Global_101700.f_23938.f_3, 1);
		break;

	case 2:
		func_207(88, 0, 0);
		gameplay::set_bit(&Global_101700.f_23938.f_3, 2);
		break;

	case 3:
		func_207(89, 0, 0);
		gameplay::set_bit(&Global_101700.f_23938.f_3, 3);
		break;

	case 4:
		func_207(90, 0, 0);
		gameplay::set_bit(&Global_101700.f_23938.f_3, 4);
		break;
	}
	if (iLocal_92) {
		ui::clear_help(1);
	}
	audio::_0x774BD811F656A122(audio::get_radio_station_name(10), 0);
	if (iLocal_101) {
		audio::set_user_radio_control_enabled(1);
	}
	if (iLocal_194 && !iParam0) {
		iVar1 = player::get_player_index();
		if (player::is_player_playing(iVar1)) {
			if (!player::is_player_control_on(iVar1)) {
				player::set_player_control(iVar1, 1, 0);
			}
		}
	}
	if (!iParam0) {
		func_195(0);
	}
	if (iLocal_94) {
		pathfind::set_ped_paths_back_to_original(vLocal_201, vLocal_204, 1);
		pathfind::set_roads_back_to_original_in_angled_area(vLocal_207, vLocal_210, fLocal_213, 1);
		iLocal_94 = 0;
	}
	ai::set_scenario_type_enabled("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	ai::set_scenario_type_enabled("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_83 == 1) {
		ped::remove_scenario_blocking_area(uLocal_215, 0);
	}
	if (Local_83.f_1 == 1 || Local_83.f_1 == 2) {
		ped::remove_scenario_blocking_area(uLocal_214, 0);
	}
	else {
		ped::set_ped_config_flag(player::player_ped_id(), 170, 0);
	}
	func_205(&uLocal_216, 0);
	script::terminate_this_thread();
}

// Position - 0xB7B3
void func_205(var *uParam0, int iParam1) {
	int iVar0;

	if (!iParam1) {
		func_196(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8) {
		func_206(&(*uParam0)[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

// Position - 0xB7EE
void func_206(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&uParam0->f_2, "NULL", 64);
}

// Position - 0xB807
void func_207(int iParam0, int iParam1, int iParam2) {
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
