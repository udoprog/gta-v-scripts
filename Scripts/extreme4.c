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
float fLocal_21 = 0f;
vector3 vLocal_22 = {0f, 0f, 0f};
float fLocal_25 = 0f;
float fLocal_26 = 0f;
var uLocal_27 = 0;
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
int iLocal_35 = 0;
int iLocal_36 = 0;
var uLocal_37 = 10;
var uLocal_38 = 0;
var uLocal_39 = 0;
var uLocal_40 = 0;
var uLocal_41 = 0;
var uLocal_42 = 0;
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
var uLocal_57 = 0;
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
var uLocal_68 = 0;
var uLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 0;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 0;
var uLocal_77 = 0;
var uLocal_78 = 0;
int iLocal_79 = 0;
int iLocal_80 = 0;
int iLocal_81 = 0;
struct<61> Local_82 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
		0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
vector3 vLocal_143 = {0f, 0f, 0f};
float fLocal_146 = 0f;
int iLocal_147 = 0;
int iLocal_148 = 0;
int iLocal_149 = 0;
int iLocal_150 = 0;
int iLocal_151 = 0;
int iLocal_152 = 0;
int iLocal_153 = 0;
int iLocal_154 = 0;
struct<13> Local_155 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
char *sLocal_168 = NULL;
int iLocal_169 = 0;
int *iLocal_170 = NULL;
int iLocal_171 = 0;
int iLocal_172 = 0;
int iLocal_173 = 0;
int iLocal_174 = 0;
int *iLocal_175 = NULL;
int *iLocal_176 = NULL;
int *iLocal_177 = NULL;
int iLocal_178 = 0;
int iLocal_179 = 0;
int iLocal_180 = 0;
int iLocal_181 = 0;
var *uLocal_182 = NULL;
var uLocal_183 = 0;
var uLocal_184 = 0;
var uLocal_185 = 0;
var uLocal_186 = 0;
var uLocal_187 = 0;
var uLocal_188 = 0;
var uLocal_189 = 0;
var uLocal_190 = 0;
var uLocal_191 = 0;
var uLocal_192 = 0;
var uLocal_193 = 0;
var uLocal_194 = 0;
var uLocal_195 = 0;
var uLocal_196 = 0;
var uLocal_197 = 0;
var uLocal_198 = 0;
var uLocal_199 = 0;
var uLocal_200 = 0;
var uLocal_201 = 0;
var uLocal_202 = 0;
var uLocal_203 = 0;
var uLocal_204 = 0;
var uLocal_205 = 0;
var uLocal_206 = 0;
var uLocal_207 = 0;
var uLocal_208 = 0;
var uLocal_209 = 0;
var uLocal_210 = 0;
var uLocal_211 = 0;
var uLocal_212 = 0;
var uLocal_213 = 0;
var uLocal_214 = 0;
var uLocal_215 = 0;
var uLocal_216 = 0;
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
int iLocal_347 = 0;
vector3 vLocal_348 = {0f, 0f, 0f};
float fLocal_351 = 0f;
int iLocal_352 = 0;
int iLocal_353 = 0;
int iLocal_354 = 0;
int iLocal_355 = 0;
int iLocal_356 = 0;
int iLocal_357 = 0;
int iLocal_358 = 0;
int iLocal_359 = 0;
int iLocal_360 = 0;
int iLocal_361 = 0;
int iLocal_362 = 0;
int iLocal_363 = 0;
int iLocal_364 = 0;
int iLocal_365 = 0;
int iLocal_366 = 0;
int iLocal_367 = 0;
int iLocal_368 = 0;
int iLocal_369 = 0;
int iLocal_370 = 0;
int iLocal_371 = 0;
int iLocal_372 = 0;
int iLocal_373 = 0;
int iLocal_374 = 0;
int iLocal_375 = 0;
int iLocal_376 = 0;
int iLocal_377 = 0;
int iLocal_378 = 0;
int iLocal_379 = 0;
int iLocal_380 = 0;
bool bLocal_381 = 0;
int iLocal_382 = 0;
int iLocal_383 = 0;
int iLocal_384 = 0;
struct<61> ScriptParam_0 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
		0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_80 = func_364(52);
	iLocal_81 = joaat("a_c_retriever");
	vLocal_143 = {1726.4f, 83.0424f, 169.67f};
	fLocal_146 = 328.7801f;
	iLocal_367 = audio::get_sound_id();
	Local_82 = {ScriptParam_0};
	func_362(&Local_82);
	gameplay::set_mission_flag(1);
	if (player::has_force_cleanup_occurred(19)) {
		func_361("Force cleanup [TERMINATING]");
		func_340(1);
		func_325(1);
	}
	if (func_324()) {
		Global_69947 = 1;
		func_319(&Local_82);
		Global_69947 = 0;
	}
	if (entity::does_entity_exist(iLocal_179)) {
	}
	func_312();
	if (!func_324()) {
		if (func_311(Local_82.f_28[0]) && func_311(player::player_ped_id()) &&
			!func_310(player::player_ped_id(), Local_82.f_28[0], 4f, 1)) {
			iLocal_383 = 1;
		}
	}
	while (true) {
		system::wait(0);
		unk1::_0x208784099002BC30("SF_UR", 0);
		func_293(Local_82.f_9, 0, 0, 0, 0, 0);
		if (iLocal_148 != 4 && iLocal_148 != 0) {
			func_292();
		}
		if (iLocal_148 < 3 && iLocal_383) {
			if (func_311(player::player_ped_id()) &&
				entity::is_entity_in_angled_area(player::player_ped_id(), 1668.882f, -19.65248f, 172.6748f, 1653.855f,
												 8.008027f, 175.0248f, 7f, 0, 1, 0)) {
				if (func_311(Local_155)) {
					if (func_310(player::player_ped_id(), Local_155, 10f, 1)) {
						func_291();
					}
				}
			}
		}
		switch (iLocal_148) {
		case 0: func_274(); break;

		case 1: func_261(); break;

		case 2: func_239(); break;

		case 3: func_8(); break;

		case 4: func_1(); break;
		}
	}
}

// Position - 0x20C
void func_1() {
	switch (iLocal_147) {
	case 0:
		func_7(&iLocal_170);
		ui::clear_prints();
		ui::clear_help(1);
		if (gameplay::is_string_null_or_empty(sLocal_168)) {
			func_340(1);
		}
		else {
			func_5(sLocal_168, 1);
		}
		iLocal_147 = 1;
		break;

	case 1:
		if (func_4()) {
			func_2(1);
			func_325(0);
		}
		break;
	}
}

// Position - 0x268
void func_2(int iParam0) {
	if (iParam0 == 1) {
		ui::clear_prints();
	}
	func_7(&iLocal_170);
	func_3(&iLocal_175);
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
}

// Position - 0x293
void func_3(int *iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		object::delete_object(iParam0);
	}
}

// Position - 0x2BE
bool func_4() {
	if (Global_3) {
		return true;
	}
	if (Global_91491 == 7 || Global_91491 == 8) {
		return true;
	}
	return false;
}

// Position - 0x2EB
void func_5(char *sParam0, int iParam1) {
	func_6(sParam0);
	func_340(iParam1);
}

// Position - 0x2FF
void func_6(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		if (ui::get_length_of_literal_string(sParam0) <= 16) {
			StringCopy(&Global_69934, sParam0, 16);
			StringCopy(&Global_69938, "", 16);
			if (unk1::_is_recording()) {
				unk1::_stop_recording_and_save_clip();
			}
		}
	}
}

// Position - 0x33E
void func_7(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x35E
void func_8() {
	switch (iLocal_149) {
	case 0:
		iLocal_375 = 0;
		system::settimera(0);
		iLocal_149 = 1;
		break;

	case 1:
		if (entity::does_entity_exist(iLocal_178)) {
			if (!entity::is_entity_dead(iLocal_178, 0)) {
				if (func_310(player::player_ped_id(), iLocal_178, 1f, 1)) {
					weapon::give_weapon_to_ped(player::player_ped_id(), joaat("gadget_parachute"), 1, 0, 0);
					object::delete_object(&iLocal_178);
				}
			}
		}
		if (iLocal_347 == 0) {
			func_223();
			iLocal_370 = gameplay::get_game_timer();
			if (func_222(Local_155)) {
			}
			iLocal_347 = 1;
		}
		if (func_311(player::player_ped_id())) {
			if (iLocal_375 == 0) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), 1624.015f, -5.45107f, 102.0677f,
													 1639.007f, -52.9875f, 181.3352f, 58.75f, 0, 1, 0) &&
					ped::get_ped_parachute_state(player::player_ped_id()) == 2) {
					iLocal_375 = 1;
				}
			}
			if (func_222(Local_155)) {
				if (system::timera() > 5000) {
					if (gameplay::get_game_timer() > iLocal_370 + 25000 ||
						entity::is_entity_in_angled_area(player::player_ped_id(), 1665.729f, -26.27869f, 172.5815f,
														 1672.652f, -24.58394f, 177.2547f, 4f, 0, 1, 0) ||
						entity::is_entity_in_angled_area(player::player_ped_id(), 1650.519f, 5.134407f, 172.6743f,
														 1656.571f, 9.669823f, 176.7743f, 15.25f, 0, 1, 0)) {
						iLocal_149 = 2;
					}
				}
			}
			else if (gameplay::get_game_timer() > iLocal_370 + 25000 ||
					 entity::is_entity_in_angled_area(player::player_ped_id(), 1665.729f, -26.27869f, 172.5815f,
													  1672.652f, -24.58394f, 177.2547f, 4f, 0, 1, 0) ||
					 entity::is_entity_in_angled_area(player::player_ped_id(), 1650.519f, 5.134407f, 172.6743f,
													  1656.571f, 9.669823f, 176.7743f, 15.25f, 0, 1, 0)) {
				iLocal_149 = 2;
			}
		}
		if (gameplay::get_game_timer() < iLocal_370 + 5000) {
			if (unk1::_is_recording()) {
				unk1::_0xAF66DCEE6609B148();
			}
		}
		break;

	case 2:
		if (!ped::is_ped_falling(player::player_ped_id()) &&
			!ped::is_ped_in_parachute_free_fall(player::player_ped_id()) &&
			entity::get_entity_height_above_ground(player::player_ped_id()) < 2f &&
			!ped::is_ped_ragdoll(player::player_ped_id())) {
			if (func_210(&uLocal_182, "EXT4AUD", "EXT4_WIL2", 8, 0, 0, 0)) {
				func_9();
			}
		}
		break;
	}
}

// Position - 0x5A9
void func_9() {
	if (iLocal_375 == 1) {
		unk1::_0x293220DA1B46CEBC(10f, 4f, 0);
		func_209(762);
	}
	func_2(1);
	func_10(84, 1);
	func_325(1);
}

// Position - 0x5DB
void func_10(int iParam0, int iParam1) {
	int iVar0;
	char *sVar1;

	iVar0 = func_207();
	if (iVar0 == -1) {
		return;
	}
	if (!Global_100787[iVar0 /*10*/].f_4) {
		return;
	}
	if (Global_100787[iVar0 /*10*/].f_5) {
		return;
	}
	if (Global_100787[iVar0 /*10*/].f_6) {
		return;
	}
	func_178(iVar0, 0);
	gameplay::set_bit(&Global_69950, 1);
	if (Global_100787[iVar0 /*10*/].f_9 == -1) {
	}
	else {
		func_177(&Global_100787[iVar0 /*10*/].f_9);
	}
	if (iParam1) {
		if (player::is_player_playing(player::player_id())) {
			player::set_player_wanted_level(player::player_id(), 0, 0);
			player::set_player_wanted_level_now(player::player_id(), 0);
			player::start_firing_amnesty(5000);
		}
	}
	func_165(iVar0, 1, 0, 0);
	func_164(0, 0);
	MemCopy(&sVar1, {func_162(iVar0)}, 4);
	func_159(&sVar1, func_160());
	func_38();
	if (gameplay::is_bit_set(Global_101700.f_8975.f_25, 3)) {
		func_37();
	}
	func_19();
	if (iParam0 == 210 || iParam0 == 211) {
		func_13(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111) {
		func_13(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322) {
		func_13(iParam0, 0, 0);
	}
	func_11();
}

// Position - 0x712
int func_11() {
	if (func_12(0)) {
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

// Position - 0x75D
bool func_12(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x788
void func_13(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_17(891 + iParam0, 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1) {
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12) {
			bVar0 = false;
		}
	}
	else {
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = iParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = iParam2;
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
		func_14();
	}
}

// Position - 0x870
void func_14() {
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
		func_16(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_15() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_11();
				}
			}
		}
	}
}

// Position - 0xD31
int func_15() { return Global_25190; }

// Position - 0xD3C
int func_16(int iParam0, int iParam1) {
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

// Position - 0xD8D
int func_17(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_18();
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

// Position - 0x111B
var func_18() { return Global_1312735; }

// Position - 0x1127
void func_19() {
	func_36();
	func_28();
	func_24();
	func_23();
	func_22();
	func_21();
	Global_91528 = 0;
	Global_85999 = -1;
	gameplay::clear_bit(&Global_91491.f_20, 17);
	Global_91526 = 0;
	gameplay::_disable_automatic_respawn(0);
	gameplay::ignore_next_restart(0);
	gameplay::set_fade_in_after_death_arrest(1);
	gameplay::set_fade_out_after_arrest(1);
	gameplay::set_fade_out_after_death(1);
	func_20(0);
}

// Position - 0x1180
void func_20(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_91491.f_20, 13);
	}
	else {
		gameplay::clear_bit(&Global_91491.f_20, 13);
	}
}

// Position - 0x11A9
void func_21() {
	Global_69942 = {0f, 0f, 0f};
	Global_69945 = 0f;
	Global_91491.f_21 = 145;
}

// Position - 0x11C7
void func_22() {
	StringCopy(&Global_69934, "", 16);
	StringCopy(&Global_69938, "", 16);
}

// Position - 0x11E1
void func_23() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6) {
		Global_91491.f_22[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x1206
void func_24() {
	Global_91491 = 13;
	Global_91491.f_1 = -1;
	Global_91491.f_2 = 0;
	Global_91491.f_30 = 0f;
	gameplay::clear_bit(&Global_91491.f_20, 25);
	Global_91525 = 0;
	func_27(0);
	func_26();
	func_25();
	Global_91491.f_18 = -1;
	Global_91491.f_19 = -1;
}

// Position - 0x1255
void func_25() {
	gameplay::clear_bit(&Global_91491.f_20, 22);
	gameplay::clear_bit(&Global_91491.f_20, 8);
}

// Position - 0x1275
void func_26() {
	if (Global_91491.f_16 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_91491.f_16);
		Global_91491.f_16 = 0;
	}
	if (Global_91491.f_17 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_91491.f_17);
		Global_91491.f_17 = 0;
	}
}

// Position - 0x12B3
void func_27(int iParam0) {
	if (iParam0 == 1) {
		Global_36330 = 1;
	}
	else {
		Global_36330 = 0;
	}
}

// Position - 0x12CC
void func_28() { func_29(&Global_96040); }

// Position - 0x12DC
void func_29(var *uParam0) {
	int iVar0;
	int iVar1;

	*uParam0 = 145;
	func_35(&uParam0->f_1);
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3) {
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_34(&uParam0->f_25[0 /*295*/][iVar1 /*98*/]);
		func_34(&uParam0->f_25[1 /*295*/][iVar1 /*98*/]);
		iVar0 = 0;
		while (iVar0 < 12) {
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9) {
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4) {
			uParam0->f_1665[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10) {
			uParam0->f_1665[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15) {
			uParam0->f_1665[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1762[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3) {
			uParam0->f_2259[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			uParam0->f_1766[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_33(&uParam0->f_2305);
	func_31(&uParam0->f_2311);
	func_30(&uParam0->f_2401);
}

// Position - 0x1824
void func_30(var *uParam0) {
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

// Position - 0x183F
void func_31(var *uParam0) {
	func_32(&uParam0->f_12);
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = {0f, 0f, 0f};
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

// Position - 0x186E
void func_32(var *uParam0) {
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&uParam0->f_1, "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49) {
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

// Position - 0x191E
void func_33(var *uParam0) {
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

// Position - 0x193C
void func_34(var *uParam0) {
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11) {
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&uParam0->f_27, "", 16);
	iVar0 = 0;
	while (iVar0 <= 48) {
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

// Position - 0x1A1C
void func_35(int *iParam0) { *iParam0 = -15; }

// Position - 0x1A2A
void func_36() {
	StringCopy(&Global_93627, "", 32);
	func_29(&Global_93635);
}

// Position - 0x1A43
void func_37() {
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 0) {
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 0) {
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 0) {
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	gameplay::set_bit(&Global_2313, 25);
	gameplay::set_bit(&Global_2314, 11);
}

// Position - 0x1AC0
void func_38() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 8) {
		iVar1 = Global_89193[iVar0];
		if (entity::does_entity_exist(iVar1) && !ped::is_ped_injured(iVar1)) {
			iVar3 = func_156(iVar1);
			iVar2 = -99;
			switch (iVar3) {
			case 0: iVar2 = 112; break;

			case 1: iVar2 = 158; break;

			case 2: iVar2 = 154; break;
			}
			if (iVar2 != -99) {
				if (func_155(iVar1, 14, iVar2)) {
					func_39(iVar1, 14, iVar2);
				}
				if (Global_101700.f_2095.f_539[iVar3 /*65*/].f_39[2] == iVar2) {
					Global_101700.f_2095.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x1B81
int func_39(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar19;
	int iVar20;
	var uVar21;
	var uVar31;
	int iVar48;

	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_90(iVar0, iParam1, iParam2)};
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return 0;
	}
	if (!func_155(iParam0, iParam1, iParam2)) {
		return 0;
	}
	if (iParam1 == 12) {
		uVar2 = {func_86(iVar0, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 14) {
			if (uVar2[iVar1] != -99) {
				func_39(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13) {
		uVar21 = {func_83(iVar0, iParam2)};
		iVar19 = 0;
		while (iVar19 <= 8) {
			if (!func_39(iParam0, 14, uVar21[iVar19])) {
				iVar20 = 0;
			}
			iVar19++;
		}
		return iVar20;
	}
	else if (iParam1 == 14) {
		ped::clear_ped_prop(iParam0, Global_69523[1 /*14*/].f_12);
	}
	else {
		uVar31 = {func_86(iVar0, 0)};
		Global_69523[1 /*14*/] = {func_90(iVar0, iParam1, uVar31[iParam1])};
		if (ped::get_number_of_ped_drawable_variations(iParam0, func_82(iParam1)) > 0 &&
			ped::get_number_of_ped_texture_variations(iParam0, func_82(iParam1), Global_69523[1 /*14*/].f_3) > 0) {
			ped::set_ped_component_variation(iParam0, func_82(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, 0);
		}
	}
	if (func_81(iParam0, iVar0, &iVar48, 0)) {
		func_42(iParam0, 2, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_40(iParam0, iVar0, &iVar48)) {
		func_42(iParam0, 1, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

// Position - 0x1D3E
bool func_40(int iParam0, int iParam1, int *iParam2) {
	int iVar0;

	iVar0 = func_41(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 != -99) {
		if (!func_155(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_64,
					  Global_101700.f_2095.f_539[iVar0 /*65*/].f_63)) {
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

// Position - 0x1DCA
int func_41(int iParam0) {
	switch (iParam0) {
	case joaat("player_zero"): return 0;

	case joaat("player_one"): return 1;

	case joaat("player_two"): return 2;

	default: break;
	}
	return 145;
}

// Position - 0x1E05
int func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int *iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var *uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;

	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	Global_69522++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = entity::get_entity_model(iParam0);
	if (iParam5 == 0) {
		Global_69523[1 /*14*/] = {func_90(iVar10, iParam1, iParam2)};
		if (!func_80(iParam3)) {
			Global_69522--;
			return 0;
		}
		func_73(iParam1);
	}
	if (iParam1 == 12) {
		if (iParam7 == 1) {
			if (iVar10 == joaat("player_one")) {
				iVar5 = func_71(iParam0, 8);
				if (iVar5 != 9) {
					iVar5 = -99;
				}
			}
			iVar6 = func_71(iParam0, 9);
			if (iVar10 == joaat("player_zero")) {
				if (iVar6 >= 9 && iVar6 <= 14) {
				}
				else {
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one")) {
				if (iVar6 >= 5 && iVar6 <= 10) {
				}
				else {
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two")) {
				if (iVar6 >= 9 && iVar6 <= 14 || iVar6 >= 15 && iVar6 <= 16) {
				}
				else {
					iVar6 = -99;
				}
			}
			iVar7 = func_70(iParam0, 1);
			if (!func_69(iVar10, 14, iVar7, -1)) {
				iVar7 = -99;
			}
			iVar8 = func_70(iParam0, 0);
			if (!func_68(iVar10, 14, iVar8, -1) && !func_67(iVar10, 14, iVar8, -1)) {
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one")) {
				iVar9 = func_70(iParam0, 2);
			}
		}
		ped::clear_all_ped_props(iParam0);
		uVar11 = 15;
		if (iParam5 == 1) {
			uVar11 = {Global_69566};
		}
		else {
			uVar11 = {func_86(iVar10, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14) {
			if (uVar11[iVar0] != -99) {
				Global_69523[1 /*14*/] = {func_90(iVar10, iVar0, uVar11[iVar0])};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
					if (iVar0 == 13) {
						uVar28 = 9;
						if (iParam5 == 1) {
							uVar28 = {Global_69583};
						}
						else {
							uVar28 = {func_83(iVar10, uVar11[iVar0])};
						}
						iVar1 = 0;
						while (iVar1 <= 8) {
							Global_69523[1 /*14*/] = {func_90(iVar10, 14, uVar28[iVar1])};
							func_58(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3,
									Global_69523[1 /*14*/].f_4);
							func_73(14);
							if (Global_69522 == 1) {
								iVar2 = 0;
								while (iVar2 < 15) {
									iVar3 = func_50(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99) {
										func_42(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12) {
						if (iVar10 == joaat("player_one") && iVar0 == 2 && uVar11[iVar0] == 20) {
							func_49(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1) {
							ped::set_ped_component_variation(iParam0, func_82(iVar0), Global_69523[1 /*14*/].f_3,
															 Global_69523[1 /*14*/].f_4,
															 ped::get_ped_palette_variation(iParam0, func_82(iVar0)));
						}
						else {
							ped::set_ped_component_variation(iParam0, func_82(iVar0), Global_69523[1 /*14*/].f_3,
															 Global_69523[1 /*14*/].f_4, iParam4);
						}
						func_73(iVar0);
						if (Global_69522 == 1) {
							iVar2 = 0;
							while (iVar2 < 15) {
								iVar3 = func_50(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99) {
									func_42(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14) {
				Global_69523[1 /*14*/] = {func_90(iVar10, iVar0, func_48(iParam0, iVar0, -1))};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 3)) {
					if (iVar0 == 2) {
						if (iVar10 == joaat("player_one")) {
							if (func_81(iParam0, iVar10, &iVar4, 1)) {
								func_42(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else {
						uVar38 = {func_86(iVar10, 0)};
						func_42(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1) {
			Var55 = {func_90(iVar10, 8, iVar5)};
			if (iVar5 != -99) {
				if (func_46(iVar10, iParam2, 8, iVar5, &uVar11, &Var55)) {
					func_42(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_90(iVar10, 9, iVar6)};
			if (iVar6 != -99) {
				if (func_46(iVar10, iParam2, 9, iVar6, &uVar11, &Var55)) {
					func_42(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_90(iVar10, 14, iVar7)};
			if (iVar7 != -99) {
				if (func_46(iVar10, iParam2, 14, iVar7, &uVar11, &Var55)) {
					func_42(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_90(iVar10, 14, iVar8)};
			if (iVar8 != -99) {
				if (func_46(iVar10, iParam2, 14, iVar8, &uVar11, &Var55)) {
					func_42(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_90(iVar10, 14, iVar9)};
			if (iVar9 != -99) {
				if (func_46(iVar10, iParam2, 14, iVar9, &uVar11, &Var55)) {
					func_42(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13) {
		uVar69 = {func_83(iVar10, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8) {
			Global_69523[1 /*14*/] = {func_90(iVar10, 14, uVar69[iVar1])};
			func_58(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
			func_73(14);
			if (Global_69522 == 1) {
				iVar2 = 0;
				while (iVar2 < 15) {
					iVar3 = func_50(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99) {
						func_42(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14) {
		func_58(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
		func_73(iParam1);
		if (Global_69522 == 1) {
			iVar2 = 0;
			while (iVar2 < 15) {
				iVar3 = func_50(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99) {
					func_42(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else {
		if (iParam4 == -1) {
			ped::set_ped_component_variation(iParam0, func_82(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4,
											 ped::get_ped_palette_variation(iParam0, func_82(iParam1)));
		}
		else {
			ped::set_ped_component_variation(iParam0, func_82(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, iParam4);
		}
		if (Global_69522 == 1) {
			iVar2 = 0;
			while (iVar2 < 15) {
				iVar3 = func_50(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99) {
					func_42(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0) {
			func_43(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69522 == 1) {
		if (func_81(iParam0, iVar10, &iVar4, 0)) {
			func_42(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_40(iParam0, iVar10, &iVar4)) {
			func_42(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_69522--;
	return 1;
}

// Position - 0x2611
void func_43(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (iParam0 == joaat("player_zero")) {
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one")) {
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two")) {
		iVar0 = 4;
	}
	if (func_45(iParam0, 12, iVar0)) {
		if (func_44(iParam0, iParam1, iParam2)) {
			iVar1 = func_41(iParam0);
			if (iParam1 == 3) {
				Global_101700.f_2095.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4) {
				Global_101700.f_2095.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

// Position - 0x269B
bool func_44(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == joaat("player_zero")) {
		if (iParam1 == 4) {
			if (iParam2 >= 47 && iParam2 <= 54) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 77 && iParam2 <= 84) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (iParam1 == 4) {
			if (iParam2 >= 14 && iParam2 <= 21) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 41 && iParam2 <= 56) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 4) {
			if (iParam2 >= 18 && iParam2 <= 29) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 54 && iParam2 <= 69) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2779
bool func_45(int iParam0, int iParam1, int iParam2) {
	Global_69523[1 /*14*/] = {func_90(iParam0, iParam1, iParam2)};
	return gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2);
}

// Position - 0x27A3
bool func_46(int iParam0, int iParam1, int iParam2, int iParam3, var *uParam4, var *uParam5) {
	var uVar0;
	int iVar10;

	if ((*uParam4)[iParam2] == iParam3) {
		return true;
	}
	if ((*uParam4)[iParam2] == -99 && iParam2 != 14 && iParam2 != 13) {
		return true;
	}
	if (iParam2 == 13 || iParam2 == 14 && (*uParam4)[13] == 31) {
		if (iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 ||
			iParam3 == 6 || iParam3 == 7 || iParam3 == 8) {
			return true;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1) {
		return true;
	}
	if (iParam2 == 14) {
		uVar0 = {func_83(iParam0, (*uParam4)[13])};
		iVar10 = 0;
		while (iVar10 <= 8) {
			if (uVar0[iVar10] == iParam3) {
				return true;
			}
			iVar10++;
		}
	}
	if (func_47(iParam0, iParam2, iParam3)) {
		return true;
	}
	if (iParam0 == joaat("player_zero")) {
		if (func_69(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 18 ||
				iParam1 == 50) {
				return false;
			}
			return true;
		}
		else if (func_68(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 0) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
			}
			return true;
		}
		else if (func_67(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (func_69(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7) {
				return false;
			}
			return true;
		}
		else if (func_68(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				if (iParam2 == 8) {
					if (iParam3 == 9) {
						if (iParam1 == 8 || iParam1 == 21) {
							return true;
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
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 26) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 5 && iParam3 <= 10) {
						return false;
					}
				}
			}
			else if (iParam2 == 14) {
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 26 && iParam3 <= 39) {
						return false;
					}
				}
			}
			return true;
		}
		else if (func_67(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				return false;
			}
			return true;
		}
		else if (iParam2 == 14) {
			if (iParam3 >= 159 && iParam3 <= 174) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 2) {
			if (iParam2 == 14 && iParam3 == 0) {
				return true;
			}
		}
		if (func_69(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 6 || iParam1 == 8 || iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			return true;
		}
		else if (func_68(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 15) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
			}
			return true;
		}
		else if (func_67(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 12) {
				return false;
			}
			return true;
		}
	}
	return false;
}

// Position - 0x2DA7
bool func_47(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 15) {
				return true;
			}
			break;

		case 9:
			if (iParam2 == 6) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 1 || iParam2 == 10) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 4) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x2E40
int func_48(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 == 12) {
			iVar0 = 0;
			while (iVar0 <= 53) {
				if (func_155(iParam0, iParam1, iVar0)) {
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13) {
			iVar1 = 0;
			while (iVar1 <= 19) {
				if (func_155(iParam0, iParam1, iVar1)) {
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14) {
			if (iParam2 == -1) {
			}
			else {
				return func_70(iParam0, iParam2);
			}
		}
		else {
			return func_71(iParam0, iParam1);
		}
	}
	return -99;
}

// Position - 0x2EE1
int func_49(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;

	*iParam3 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 7 || iParam2 == 23) {
				*iParam3 = 1;
			}
			break;

		case 9:
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14) {
				*iParam3 = 1;
			}
			break;

		case 10:
			if (iParam2 >= 44 && iParam2 <= 47) {
				*iParam3 = 1;
			}
			break;

		case 14:
			if (iParam2 >= 31 && iParam2 <= 32 || iParam2 >= 33 && iParam2 <= 34 || iParam2 >= 35 && iParam2 <= 36 ||
				iParam2 == 37 || iParam2 >= 40 && iParam2 <= 41 || iParam2 == 46) {
				*iParam3 = 1;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 2:
			if (iParam2 == 20) {
				*iParam3 = 20;
			}
			break;

		case 8:
			if (iParam2 == 4) {
				*iParam3 = 19;
			}
			break;

		case 9:
			if (iParam2 >= 5 && iParam2 <= 10) {
				*iParam3 = 19;
			}
			break;

		case 10:
			if (iParam2 >= 47 && iParam2 <= 50) {
				*iParam3 = 19;
			}
			break;

		case 14:
			if (iParam2 >= 26 && iParam2 <= 27 || iParam2 >= 28 && iParam2 <= 29 || iParam2 >= 30 && iParam2 <= 31 ||
				iParam2 == 32 || iParam2 >= 35 && iParam2 <= 36) {
				*iParam3 = 19;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 7) {
				*iParam3 = 2;
			}
			break;

		case 9:
			if (iParam2 >= 9 && iParam2 <= 14 || iParam2 >= 15 && iParam2 <= 16) {
				*iParam3 = 2;
			}
			break;

		case 10:
			if (iParam2 >= 29 && iParam2 <= 32) {
				*iParam3 = 2;
			}
			break;

		case 14:
			if (iParam2 >= 47 && iParam2 <= 48 || iParam2 >= 49 && iParam2 <= 50 || iParam2 >= 51 && iParam2 <= 52 ||
				iParam2 == 53 || iParam2 >= 56 && iParam2 <= 57 || iParam2 == 62) {
				*iParam3 = 2;
			}
			break;
		}
		break;
	}
	if (*iParam3 != -99) {
		iVar0 = func_41(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

// Position - 0x31E8
var func_50(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int *iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = -99;
	if (iParam4 == 0) {
		switch (iParam2) {
		case 2:
			iVar1 = func_71(iParam0, 1);
			iVar0 = func_57(iParam1, iParam3, iVar1);
			break;

		case 1:
			iVar2 = func_71(iParam0, 2);
			iVar0 = func_57(iParam1, iVar2, iParam3);
			break;
		}
	}
	else if (iParam4 == 2) {
		func_49(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1) {
		func_56(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6) {
		if (iParam2 == 4) {
			if (func_55(iParam1, iParam3, &iVar0)) {
			}
		}
	}
	else {
		switch (iParam1) {
		case joaat("player_zero"):
			switch (iParam4) {
			case 3:
				switch (iParam2) {
				case 10:
					switch (iParam3) {
					case 36: iVar0 = 17; break;

					case 37: iVar0 = 17; break;

					case 38: iVar0 = 18; break;

					case 39: iVar0 = 18; break;

					case 40: iVar0 = 19; break;

					case 41: iVar0 = 19; break;

					case 42: iVar0 = 20; break;

					case 43: iVar0 = 20; break;
					}
					break;

				case 11:
					if (iParam3 >= 2 && iParam3 <= 7) {
						if (!func_54(iParam0, 3, 44, 59)) {
							iVar0 = 44;
						}
					}
					else if (iParam3 >= 8 && iParam3 <= 17 || iParam3 >= 18 && iParam3 <= 27 ||
							 iParam3 >= 28 && iParam3 <= 43) {
						if (!func_54(iParam0, 3, 135, 150)) {
							iVar0 = func_53(iParam1, 3, 135, 150);
						}
					}
					break;
				}
				break;

			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 63: iVar0 = 4; break;

					case 61: iVar0 = 3; break;

					case 16: iVar0 = 1; break;

					case 114: iVar0 = 15; break;

					case 115: iVar0 = 17; break;

					case 116: iVar0 = 16; break;

					case 117: iVar0 = 18; break;

					case 118: iVar0 = 20; break;

					case 119: iVar0 = 19; break;

					case 125: iVar0 = 21; break;

					case 120: iVar0 = 22; break;

					case 124: iVar0 = 23; break;

					case 126: iVar0 = 24; break;

					case 121: iVar0 = 25; break;

					case 127: iVar0 = 26; break;

					case 128: iVar0 = 27; break;

					case 85: iVar0 = 6; break;

					case 77: iVar0 = 7; break;

					case 78: iVar0 = 8; break;

					case 79: iVar0 = 9; break;

					case 80: iVar0 = 10; break;

					case 81: iVar0 = 11; break;

					case 82: iVar0 = 12; break;

					case 83: iVar0 = 13; break;

					case 84: iVar0 = 14; break;

					case 21: iVar0 = 31; break;

					case 22: iVar0 = 30; break;

					case 23: iVar0 = 29; break;

					case 24: iVar0 = 28; break;

					case 25: iVar0 = 33; break;

					case 26: iVar0 = 35; break;

					case 27: iVar0 = 34; break;

					case 28: iVar0 = 32; break;

					default:
						if (iParam3 >= 17 && iParam3 <= 20) {
						}
						else {
							iVar0 = 0;
						}
						break;
					}
					break;

				case 11:
					if (iParam3 != 0) {
						iVar0 = 0;
					}
					break;
				}
				break;

			case 11:
				if (iParam2 == 3) {
					if (iParam3 >= 44 && iParam3 <= 59 || iParam3 >= 135 && iParam3 <= 150) {
					}
					else {
						iVar0 = 0;
					}
				}
				else if (iParam2 == 10) {
					if (iParam3 >= 36 && iParam3 <= 43) {
						iVar0 = 0;
					}
				}
				break;
			}
			break;

		case joaat("player_one"):
			switch (iParam4) {
			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 17: iVar0 = 2; break;

					case 90: iVar0 = 1; break;

					case 268: iVar0 = 3; break;

					case 269: iVar0 = 5; break;

					case 270: iVar0 = 4; break;

					case 271: iVar0 = 6; break;

					case 272: iVar0 = 8; break;

					case 273: iVar0 = 7; break;

					case 279: iVar0 = 9; break;

					case 274: iVar0 = 10; break;

					case 278: iVar0 = 11; break;

					case 280: iVar0 = 12; break;

					case 275: iVar0 = 13; break;

					case 281: iVar0 = 14; break;

					case 282: iVar0 = 15; break;

					case 107: iVar0 = 16; break;

					case 108: iVar0 = 17; break;

					case 109: iVar0 = 18; break;

					case 110: iVar0 = 19; break;

					case 111: iVar0 = 20; break;

					case 112: iVar0 = 21; break;

					case 113: iVar0 = 22; break;

					case 114: iVar0 = 23; break;

					case 115: iVar0 = 24; break;

					case 116: iVar0 = 25; break;

					case 117: iVar0 = 52; break;

					case 118: iVar0 = 27; break;

					case 119: iVar0 = 28; break;

					case 120: iVar0 = 29; break;

					case 121: iVar0 = 30; break;

					case 122: iVar0 = 31; break;

					case 296: iVar0 = 32; break;

					case 297: iVar0 = 33; break;

					case 298: iVar0 = 34; break;

					case 299: iVar0 = 35; break;

					case 300: iVar0 = 36; break;

					case 301: iVar0 = 37; break;

					case 302: iVar0 = 38; break;

					case 309: iVar0 = 39; break;

					case 310: iVar0 = 40; break;

					case 311: iVar0 = 41; break;

					case 312: iVar0 = 42; break;

					case 313: iVar0 = 43; break;

					case 314: iVar0 = 44; break;

					case 315: iVar0 = 45; break;

					case 316: iVar0 = 46; break;

					case 317: iVar0 = 51; break;

					default: iVar0 = 0; break;
					}
					break;

				case 11:
					if (iParam3 != 0) {
						iVar0 = 0;
					}
					break;
				}
				break;

			case 3:
				switch (iParam2) {
				case 11:
					if (iParam3 >= 47 && iParam3 <= 62) {
						if (!func_54(iParam0, 3, 209, 222)) {
							iVar0 = func_53(iParam1, 3, 209, 222);
						}
					}
					else if (iParam3 >= 1 && iParam3 <= 4 || iParam3 >= 5 && iParam3 <= 8) {
						if (!func_54(iParam0, 3, 243, 258)) {
							if (iParam3 == 1 || iParam3 == 5) {
								iVar0 = func_53(iParam1, 3, 243, 246);
							}
							else if (iParam3 == 2 || iParam3 == 6) {
								iVar0 = func_53(iParam1, 3, 247, 250);
							}
							else if (iParam3 == 3 || iParam3 == 7) {
								iVar0 = func_53(iParam1, 3, 251, 254);
							}
							else if (iParam3 == 4 || iParam3 == 8) {
								iVar0 = func_53(iParam1, 3, 255, 258);
							}
						}
					}
					else if (iParam3 == 41 || iParam3 == 42) {
						if (!func_54(iParam0, 3, 176, 191) && !func_54(iParam0, 3, 227, 242)) {
							iVar0 = func_53(iParam1, 3, 176, 191);
						}
					}
					break;
				}
				break;

			case 8:
				if (iParam2 == 11 || iParam2 == 3) {
					if (iParam2 == 11) {
						iVar5 = iParam3;
						iVar4 = func_71(iParam0, 3);
					}
					else if (iParam2 == 3) {
						iVar4 = iParam3;
						iVar5 = func_71(iParam0, 11);
						iVar5 = func_52(iParam1, iVar4, iVar5, 0);
					}
					iVar3 = func_71(iParam0, 8);
					if (iVar5 >= 5 && iVar5 <= 8 || iVar5 >= 25 && iVar5 <= 40 || iVar5 >= 42 && iVar5 <= 43) {
						if (!func_51(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6)) {
							if (iVar6 != -99) {
								iVar0 = iVar6;
							}
						}
					}
					else if (iVar3 >= 27 && iVar3 <= 42 || iVar3 >= 43 && iVar3 <= 58 || iVar3 >= 59 && iVar3 <= 74) {
						iVar0 = 26;
					}
				}
				break;

			case 11:
				if (iParam2 == 3) {
					if (iParam3 >= 209 && iParam3 <= 222) {
					}
					else if (iParam3 >= 176 && iParam3 <= 191 || iParam3 >= 227 && iParam3 <= 242 ||
							 iParam3 >= 243 && iParam3 <= 258) {
						iVar7 = func_71(iParam0, 8);
						iVar8 = func_71(iParam0, 11);
						if (iVar7 >= 27 && iVar7 <= 42 || iVar7 >= 43 && iVar7 <= 58 || iVar7 >= 59 && iVar7 <= 74) {
							iVar0 = func_52(iParam1, iParam3, iVar8, 0);
						}
						else {
							iVar0 = func_52(iParam1, iParam3, iVar8, 1);
						}
					}
					else if (iParam3 >= 41 && iParam3 <= 56) {
						iVar0 = 45;
					}
					else if (iParam3 >= 223 && iParam3 <= 226) {
						iVar0 = 44;
					}
					else {
						iVar0 = 0;
					}
				}
				else if (iParam2 == 8) {
					if (iParam3 >= 27 && iParam3 <= 42 || iParam3 >= 43 && iParam3 <= 58 ||
						iParam3 >= 59 && iParam3 <= 74) {
						iVar9 = func_71(iParam0, 11);
						iVar0 = func_52(iParam1, -99, iVar9, 0);
					}
				}
				break;
			}
			break;

		case joaat("player_two"):
			switch (iParam4) {
			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 50: iVar0 = 3; break;

					case 81: iVar0 = 5; break;

					case 82: iVar0 = 6; break;

					case 83: iVar0 = 7; break;

					case 84: iVar0 = 10; break;

					case 85: iVar0 = 9; break;

					case 86: iVar0 = 8; break;

					case 92: iVar0 = 22; break;

					case 87: iVar0 = 23; break;

					case 91: iVar0 = 24; break;

					case 93: iVar0 = 25; break;

					case 88: iVar0 = 26; break;

					case 94: iVar0 = 27; break;

					case 120: iVar0 = 11; break;

					case 121: iVar0 = 13; break;

					case 122: iVar0 = 14; break;

					case 124: iVar0 = 12; break;

					case 126: iVar0 = 18; break;

					case 128: iVar0 = 17; break;

					case 130: iVar0 = 19; break;

					case 131: iVar0 = 16; break;

					case 134: iVar0 = 15; break;

					case 135: iVar0 = 20; break;

					default: iVar0 = 0; break;
					}
					break;
				}
				break;
			}
			break;
		}
	}
	return iVar0;
}

// Position - 0x3D9B
int func_51(int iParam0, int iParam1, int iParam2, int iParam3, int *iParam4) {
	int iVar0;

	switch (iParam0) {
	case joaat("player_zero"): break;

	case joaat("player_one"):
		*iParam4 = 0;
		if (iParam1 >= 27 && iParam1 <= 42) {
			if (iParam2 != -99) {
				if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
				}
				else {
					if (iParam2 >= 42 && iParam2 <= 43) {
						if (iParam3 >= 176 && iParam3 <= 191) {
							iVar0 = iParam1 - 27;
							*iParam4 = 59 + iVar0;
						}
						else if (iParam3 >= 227 && iParam3 <= 242) {
							iVar0 = iParam1 - 27;
							*iParam4 = 43 + iVar0;
						}
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 227 && iParam3 <= 242 || iParam3 >= 176 && iParam3 <= 191 ||
					iParam3 >= 243 && iParam3 <= 258) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 43 && iParam1 <= 58) {
			if (iParam2 != -99) {
				if (iParam2 >= 42 && iParam2 <= 43) {
				}
				else {
					if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 43;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 227 && iParam3 <= 242) {
				}
				else {
					if (iParam3 >= 176 && iParam3 <= 191) {
						if (iParam2 >= 42 && iParam2 <= 43) {
							iVar0 = iParam1 - 43;
							*iParam4 = 59 + iVar0;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 59 && iParam1 <= 74) {
			if (iParam2 != -99) {
				if (iParam2 >= 42 && iParam2 <= 43) {
				}
				else {
					if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 59;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 176 && iParam3 <= 191) {
				}
				else {
					if (iParam3 >= 227 && iParam3 <= 242) {
						if (iParam2 >= 42 && iParam2 <= 43) {
							iVar0 = iParam1 - 59;
							*iParam4 = 43 + iVar0;
						}
					}
					else if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 59;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 12) {
			if (iParam3 != 241) {
				return 0;
			}
		}
		break;
	}
	return 1;
}

// Position - 0x4080
int func_52(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (iParam1 >= 243 && iParam1 <= 246) {
		if (iParam3 == 1) {
			return 1;
		}
		else {
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250) {
		if (iParam3 == 1) {
			return 2;
		}
		else {
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254) {
		if (iParam3 == 1) {
			return 3;
		}
		else {
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258) {
		if (iParam3 == 1) {
			return 4;
		}
		else {
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258) {
		if (iParam3 == 1) {
			return 4;
		}
		else {
			return 8;
		}
	}
	else if (iParam1 >= 176 && iParam1 <= 191 || iParam1 >= 227 && iParam1 <= 242) {
		if (iParam2 >= 9 && iParam2 <= 24) {
			if (iParam3 == 1) {
				return iParam2;
			}
			else {
				iVar0 = iParam2 - 9;
				iParam2 = 25 + iVar0;
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40) {
			if (iParam3 == 1) {
				iVar0 = iParam2 - 25;
				iParam2 = 9 + iVar0;
				return iParam2;
			}
			else {
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42) {
			if (iParam3 == 1) {
				return 41;
			}
			else {
				return 42;
			}
		}
		else {
			if (iParam3 == 1) {
				iParam2 = func_53(iParam0, 11, 9, 24);
			}
			else {
				iParam2 = func_53(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99) {
				if (iParam3 == 1) {
					return 41;
				}
				else {
					return 42;
				}
			}
			else {
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4) {
		if (iParam3 == 1) {
			return iParam2;
		}
		else {
			iVar0 = iParam2 - 1;
			iParam2 = 5 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8) {
		if (iParam3 == 1) {
			iVar0 = iParam2 - 5;
			iParam2 = 1 + iVar0;
			return iParam2;
		}
		else {
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24) {
		if (iParam3 == 1) {
			return iParam2;
		}
		else {
			iVar0 = iParam2 - 9;
			iParam2 = 25 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40) {
		if (iParam3 == 1) {
			iVar0 = iParam2 - 25;
			iParam2 = 9 + iVar0;
			return iParam2;
		}
		else {
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42) {
		if (iParam3 == 1) {
			return 41;
		}
		else {
			return 42;
		}
	}
	return -99;
}

// Position - 0x4347
int func_53(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;

	iVar0 = iParam2;
	while (iVar0 <= iParam3 - 1) {
		iVar1 = iVar0;
		if (func_45(iParam0, iParam1, iVar1)) {
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

// Position - 0x437E
int func_54(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = func_71(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3) {
		return 1;
	}
	return 0;
}

// Position - 0x43A7
bool func_55(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 16 || iParam1 == 17 || iParam1 == 21 || iParam1 == 22 || iParam1 == 32 ||
			iParam1 >= 34 && iParam1 <= 39 || iParam1 >= 41 && iParam1 <= 45 || iParam1 == 46 ||
			iParam1 >= 47 && iParam1 <= 54 || iParam1 >= 55 && iParam1 <= 70 || iParam1 >= 72 && iParam1 <= 79 ||
			iParam1 == 80 || iParam1 >= 81 && iParam1 <= 83 || iParam1 >= 84 && iParam1 <= 87 || iParam1 == 88 ||
			iParam1 >= 89 && iParam1 <= 91 || iParam1 == 95 || iParam1 >= 96 && iParam1 <= 111 || iParam1 == 112) {
			*iParam2 = 6;
			return true;
		}
		break;

	case joaat("player_one"):
		if (iParam1 == 12 || iParam1 >= 14 && iParam1 <= 21 || iParam1 == 32 || iParam1 == 52 ||
			iParam1 >= 69 && iParam1 <= 70 || iParam1 == 71 || iParam1 >= 72 && iParam1 <= 77) {
			*iParam2 = 17;
			return true;
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 4 || iParam1 == 5 || iParam1 == 6 || iParam1 == 7 || iParam1 == 14 ||
			iParam1 >= 18 && iParam1 <= 29 || iParam1 == 31 || iParam1 == 32 || iParam1 == 33 || iParam1 == 34 ||
			iParam1 >= 35 && iParam1 <= 42 || iParam1 >= 43 && iParam1 <= 53 || iParam1 >= 54 && iParam1 <= 61 ||
			iParam1 >= 71 && iParam1 <= 80 || iParam1 >= 81 && iParam1 <= 90 || iParam1 >= 94 && iParam1 <= 103) {
			*iParam2 = 8;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x4671
int func_56(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;

	*iParam3 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 10:
			if (iParam2 >= 44 && iParam2 <= 47) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 31 && iParam2 <= 32 || iParam2 >= 33 && iParam2 <= 34 || iParam2 >= 35 && iParam2 <= 36 ||
				iParam2 == 37 || iParam2 >= 38 && iParam2 <= 39 || iParam2 >= 40 && iParam2 <= 41 ||
				iParam2 >= 42 && iParam2 <= 44) {
				*iParam3 = 0;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 10:
			if (iParam2 >= 47 && iParam2 <= 50) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 26 && iParam2 <= 27 || iParam2 >= 28 && iParam2 <= 29 || iParam2 >= 30 && iParam2 <= 31 ||
				iParam2 == 32 || iParam2 >= 35 && iParam2 <= 36) {
				*iParam3 = 0;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 9:
			if (iParam2 >= 15 && iParam2 <= 16) {
				*iParam3 = 0;
			}
			break;

		case 10:
			if (iParam2 >= 29 && iParam2 <= 32) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 47 && iParam2 <= 48 || iParam2 >= 49 && iParam2 <= 50 || iParam2 >= 51 && iParam2 <= 52 ||
				iParam2 == 53 || iParam2 >= 54 && iParam2 <= 55 || iParam2 >= 56 && iParam2 <= 57 ||
				iParam2 >= 58 && iParam2 <= 60) {
				*iParam3 = 0;
			}
			break;
		}
		break;
	}
	if (*iParam3 != -99) {
		iVar0 = func_41(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

// Position - 0x48FB
int func_57(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 1) {
			if (iParam2 == 0) {
				return 1;
			}
			else if (iParam2 == 4) {
				return 5;
			}
			else {
				return 3;
			}
		}
		else if (iParam2 == 0) {
			return 0;
		}
		else if (iParam2 == 4) {
			return 4;
		}
		else {
			return 2;
		}
		break;

	case joaat("player_one"):
		if (iParam1 >= 0 && iParam1 <= 15) {
			if (iParam2 == 0) {
				return 0;
			}
			else {
				return 3;
			}
		}
		else if (iParam1 >= 16 && iParam1 <= 17) {
			if (iParam2 == 0) {
				return 2;
			}
			else {
				return 5;
			}
		}
		else if (iParam1 == 18) {
			if (iParam2 == 0) {
				return 6;
			}
			else {
				return 7;
			}
		}
		else if (iParam1 == 19) {
			if (iParam2 == 0) {
				return 1;
			}
			else {
				return 4;
			}
		}
		else if (iParam2 == 0) {
			return 1;
		}
		else {
			return 4;
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 2) {
			if (iParam2 == 0) {
				return 2;
			}
			else {
				return 3;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 == 0) {
				return 4;
			}
			else {
				return 6;
			}
		}
		else if (iParam1 == 8) {
			return 5;
		}
		else if (iParam2 == 0) {
			return 0;
		}
		else {
			return 1;
		}
		break;
	}
	return -99;
}

// Position - 0x4A52
void func_58(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (iParam2 == -1) {
		ped::clear_ped_prop(iParam0, iParam1);
		if (iParam1 == 0) {
			ped::set_ped_config_flag(iParam0, 34, 0);
			ped::set_ped_config_flag(iParam0, 36, 0);
		}
	}
	else {
		ped::set_ped_prop_index(iParam0, iParam1, iParam2, iParam3, network::network_is_game_in_progress());
		if (iParam1 == 0) {
			iVar0 = func_63(iParam0, iParam2, iParam3, iParam1);
			if (func_59(entity::get_entity_model(iParam0), 14, iVar0,
						dlc1::get_hash_name_for_prop(iParam0, 0, iParam2, iParam3))) {
				ped::set_ped_config_flag(iParam0, 34, 1);
				ped::set_ped_config_flag(iParam0, 36, 1);
			}
			else {
				ped::set_ped_config_flag(iParam0, 34, 0);
				ped::set_ped_config_flag(iParam0, 36, 0);
			}
		}
	}
}

// Position - 0x4AEA
bool func_59(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_60(iParam0, iParam2, 14, 3);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_60(iParam0, iParam2, 14, 4);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x4BB8
int func_60(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = iParam1 - func_62(iParam0);
		if (iVar19 < 0) {
			return -1;
		}
		iVar20 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iVar18 == iVar19) {
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var21);
		iVar39 = 0;
		iVar40 = iParam1 - func_61(iParam0, func_82(iParam2));
		if (iVar40 < 0) {
			return -1;
		}
		if (iParam0 == Global_69645.f_26[iParam2] && iParam1 == Global_69645[iParam2] &&
			Global_69645.f_13[iParam2] != 0) {
			return Global_69645.f_13[iParam2];
		}
		iVar41 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_82(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41) {
			dlc1::get_shop_ped_query_component(iVar38, &Var21);
			if (!dlc1::_is_dlc_data_empty(Var21)) {
				if (iVar39 == iVar40) {
					Global_69645.f_13[iParam2] = Var21.f_1;
					Global_69645[iParam2] = iParam1;
					Global_69645.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

// Position - 0x4D14
int func_61(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 5;

		case 2: return 6;

		case 3: return 181;

		case 4: return 113;

		case 5: return 14;

		case 6: return 99;

		case 7: return 1;

		case 8: return 24;

		case 9: return 20;

		case 10: return 48;

		case 11: return 45;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 5;

		case 2: return 21;

		case 3: return 318;

		case 4: return 117;

		case 5: return 7;

		case 6: return 134;

		case 7: return 1;

		case 8: return 77;

		case 9: return 12;

		case 10: return 53;

		case 11: return 63;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 6;

		case 2: return 9;

		case 3: return 242;

		case 4: return 104;

		case 5: return 7;

		case 6: return 84;

		case 7: return 1;

		case 8: return 18;

		case 9: return 17;

		case 10: return 33;

		case 11: return 1;
		}
		break;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 91;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 92;

		case 8: return 241;

		case 9: return 46;

		case 10: return 7;

		case 11: return 237;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 92;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 55;

		case 8: return 136;

		case 9: return 36;

		case 10: return 6;

		case 11: return 256;
		}
		break;
	}
	return -99;
}

// Position - 0x50BB
int func_62(int iParam0) {
	switch (iParam0) {
	case joaat("player_zero"): return 113;

	case joaat("player_one"): return 175;

	case joaat("player_two"): return 155;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"): return 327;

	case joaat("mp_f_freemode_01"): return 327;
	}
	return -99;
}

// Position - 0x511C
int func_63(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1) {
		return func_66(iParam3);
	}
	iVar0 = entity::get_entity_model(iParam0);
	iVar1 = dlc1::get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0) {
		if (iVar0 == joaat("mp_m_freemode_01")) {
			return func_65(entity::get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			return func_65(entity::get_entity_model(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = ped::get_number_of_ped_prop_drawable_variations(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= iVar2 - 1) {
		iVar6 = ped::get_number_of_ped_prop_texture_variations(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1) {
			iVar3 += iVar6;
		}
		else {
			iVar5 = 0;
			while (iVar5 <= iVar6 - 1) {
				if (iVar4 == iParam1 && iVar5 == iParam2) {
					iVar3 += func_64(iParam0, iParam3);
					return iVar3;
				}
				else {
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_66(iParam3);
}

// Position - 0x5218
int func_64(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = entity::get_entity_model(iParam0);
	switch (iVar0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 58;

		case 2: return 112;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 82;

		case 2: return 158;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 88;

		case 2: return 154;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;
	}
	return -99;
}

// Position - 0x5356
int func_65(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iParam1 == Var0.f_1) {
					return func_62(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_82(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39) {
			dlc1::get_shop_ped_query_component(iVar37, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iParam1 == Var20.f_1) {
					return func_61(iParam0, func_82(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

// Position - 0x5436
int func_66(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;
	}
	return 0;
}

// Position - 0x54BC
bool func_67(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 16) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 40 || iParam2 >= 41 && iParam2 <= 56 || iParam2 >= 64 && iParam2 <= 79) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 17 && iParam2 <= 18 || iParam2 >= 71 && iParam2 <= 86) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_60(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_60(iParam0, iParam2, 14, 3), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_60(iParam0, iParam2, 1, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_60(iParam0, iParam2, 1, 3), -1842686353, 0);
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_60(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_60(iParam0, iParam2, 14, 4), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_60(iParam0, iParam2, 1, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_60(iParam0, iParam2, 1, 4), -1842686353, 0);
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x5739
bool func_68(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0 == joaat("player_zero")) {
		if (iParam1 == 6) {
			if (iParam2 == 10) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 9 || iParam2 == 7 || iParam2 == 23) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 9 && iParam2 <= 14) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 12 || iParam2 == 59 || iParam2 == 60 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 ||
				iParam2 == 34 || iParam2 == 35 || iParam2 == 36 || iParam2 == 37 || iParam2 == 38 || iParam2 == 39 ||
				iParam2 == 40 || iParam2 == 41 || iParam2 >= 42 && iParam2 <= 44 || iParam2 == 54 || iParam2 == 55) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (iParam1 == 2) {
			if (iParam2 == 20) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 3 || iParam2 == 5 || iParam2 == 9) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 5 && iParam2 <= 10) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 82 || iParam2 == 10 || iParam2 == 26 || iParam2 == 27 || iParam2 == 28 || iParam2 == 29 ||
				iParam2 == 30 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 || iParam2 == 34 || iParam2 == 35 ||
				iParam2 == 36 || iParam2 >= 37 && iParam2 <= 39) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 8) {
			if (iParam2 == 14 || iParam2 == 7) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14 || iParam2 == 15 || iParam2 == 16) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 88 || iParam2 == 12 || iParam2 == 47 || iParam2 == 48 || iParam2 == 49 || iParam2 == 50 ||
				iParam2 == 51 || iParam2 == 52 || iParam2 == 53 || iParam2 == 54 || iParam2 == 55 || iParam2 == 56 ||
				iParam2 == 57 || iParam2 >= 58 && iParam2 <= 60) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_60(iParam0, iParam2, 1, 3);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_60(iParam0, iParam2, 1, 4);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

// Position - 0x5B3A
bool func_69(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 14) {
			if (iParam2 == 58 || iParam2 == 61 || iParam2 >= 62 && iParam2 <= 69 || iParam2 >= 70 && iParam2 <= 79 ||
				iParam2 >= 80 && iParam2 <= 89 || iParam2 == 90 || iParam2 >= 91 && iParam2 <= 102 ||
				iParam2 >= 103 && iParam2 <= 110 || iParam2 == 111) {
				return true;
			}
		}
		break;

	case joaat("player_one"):
		if (iParam1 == 14) {
			if (iParam2 >= 83 && iParam2 <= 92 || iParam2 == 93 || iParam2 == 94 || iParam2 >= 95 && iParam2 <= 101 ||
				iParam2 >= 102 && iParam2 <= 111 || iParam2 >= 112 && iParam2 <= 121 ||
				iParam2 >= 122 && iParam2 <= 131 || iParam2 >= 132 && iParam2 <= 139 ||
				iParam2 >= 140 && iParam2 <= 149 || iParam2 >= 150 && iParam2 <= 156 || iParam2 == 157) {
				return true;
			}
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 14) {
			if (iParam2 == 89 || iParam2 >= 90 && iParam2 <= 99 || iParam2 >= 100 && iParam2 <= 109 || iParam2 == 111 ||
				iParam2 == 112 || iParam2 >= 113 && iParam2 <= 122 || iParam2 >= 123 && iParam2 <= 132 ||
				iParam2 >= 133 && iParam2 <= 142 || iParam2 >= 143 && iParam2 <= 152 || iParam2 == 153) {
				return true;
			}
		}
		break;

	case joaat("mp_m_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_60(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_60(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;
	}
	return false;
}

// Position - 0x5E2D
int func_70(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = ped::get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1) {
		return func_66(iParam1);
	}
	iVar1 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	return func_63(iParam0, iVar0, iVar1, iParam1);
}

// Position - 0x5E73
int func_71(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = func_82(iParam1);
	iVar1 = ped::get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = ped::get_ped_texture_variation(iParam0, iVar0);
	return func_72(iParam0, iVar1, iVar2, iParam1);
}

// Position - 0x5ED3
int func_72(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_82(iParam3);
	iVar1 = ped::get_number_of_ped_drawable_variations(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= iVar1 - 1) {
		iVar5 = ped::get_number_of_ped_texture_variations(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1) {
			iVar2 += iVar5;
		}
		else {
			iVar4 = 0;
			while (iVar4 <= iVar5 - 1) {
				if (iVar3 == iParam1 && iVar4 == iParam2) {
					return iVar2;
				}
				else {
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

// Position - 0x5F57
void func_73(int iParam0) {
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		func_79(iParam0, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 2, Global_69523[1 /*14*/].f_1, 1, 0);
	}
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1) && gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam0 == 12) {
			func_74(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13) {
		}
		else if (iParam0 == 14) {
			func_74(Global_2621444, 2, 1, 1, -1);
		}
		else {
			func_74(Global_2621444, 2, 1, 1, -1);
		}
	}
}

// Position - 0x600F
void func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_78(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_77(iVar2, iVar0, 0);
		gameplay::set_bit(&iVar3, iVar1);
		func_75(iVar2, iVar3, iVar0, 1, 0);
	}
}

// Position - 0x6059
void func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x6089
int func_76(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_18();
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

// Position - 0x60BD
int func_77(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_76(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x60EF
bool func_78(int iParam0, int iParam1, int *iParam2, int *iParam3, bool bParam4, bool bParam5) {
	int iVar0;

	*iParam2 = 6022;
	if (bParam4 && Global_2592887 || !bParam4 && bParam5) {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;

			case -1071423629:
			case -1382822784:
			case 385813134:
				*iParam2 = 930;
				*iParam3 = 0;
				return true;

			case -833094692:
			case -1731353868:
			case 675392787:
				*iParam2 = 930;
				*iParam3 = 1;
				return true;

			case -1836153782:
			case -1960638561:
			case -238272479:
				*iParam2 = 930;
				*iParam3 = 2;
				return true;

			case -1598414687:
			case 147161830:
			case 67757212:
				*iParam2 = 930;
				*iParam3 = 3;
				return true;

			case 123661793:
			case -92608943:
			case -536372072:
				*iParam2 = 930;
				*iParam3 = 4;
				return true;

			case 330958487:
			case -162931217:
			case -247578875:
				*iParam2 = 930;
				*iParam3 = 5;
				return true;

			case -142717408:
			case 1665087452:
			case -854821214:
				*iParam2 = 930;
				*iParam3 = 7;
				return true;

			case 1290696959:
			case 1012984348:
			case -1458295118:
				*iParam2 = 930;
				*iParam3 = 8;
				return true;

			case 2059568454:
			case 933072050:
			case -1454802604:
				*iParam2 = 930;
				*iParam3 = 11;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	else {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	iVar0 = -1;
	if (bParam4) {
		if (Global_2592887) {
			iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else {
			iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5) {
		iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else {
		iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1) {
		return false;
	}
	switch (iParam1) {
	case 1:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1753; break;

		case 1: *iParam2 = 1754; break;

		case 2: *iParam2 = 1755; break;

		case 3: *iParam2 = 1756; break;

		case 4: *iParam2 = 1757; break;

		case 5: *iParam2 = 1758; break;

		case 6: *iParam2 = 1765; break;

		case 7: *iParam2 = 1766; break;

		case 8: *iParam2 = 1767; break;

		case 9: *iParam2 = 1768; break;

		case 10: *iParam2 = 1769; break;

		case 11: *iParam2 = 1770; break;

		case 12: *iParam2 = 1771; break;

		case 13: *iParam2 = 1779; break;

		case 14: *iParam2 = 1780; break;

		case 15: *iParam2 = 1881; break;

		case 16: *iParam2 = 1882; break;

		case 17: *iParam2 = 1913; break;

		case 18: *iParam2 = 1927; break;

		case 19: *iParam2 = 1928; break;

		case 20: *iParam2 = 1929; break;

		case 21: *iParam2 = 1930; break;

		case 22: *iParam2 = 1931; break;

		case 23: *iParam2 = 2035; break;

		case 24: *iParam2 = 2036; break;

		case 25: *iParam2 = 2062; break;

		case 26: *iParam2 = 2063; break;

		case 27: *iParam2 = 2064; break;

		case 28: *iParam2 = 2065; break;

		case 29: *iParam2 = 2066; break;

		case 30: *iParam2 = 2067; break;

		case 31: *iParam2 = 2068; break;

		case 32: *iParam2 = 2069; break;

		case 33: *iParam2 = 2070; break;

		case 34: *iParam2 = 2071; break;

		case 35: *iParam2 = 2318; break;

		case 36: *iParam2 = 2319; break;

		case 37: *iParam2 = 2371; break;

		case 38: *iParam2 = 2372; break;

		case 39: *iParam2 = 2373; break;

		case 40: *iParam2 = 2374; break;

		case 41: *iParam2 = 2433; break;

		case 42: *iParam2 = 2434; break;

		case 43: *iParam2 = 2435; break;

		case 44: *iParam2 = 2436; break;

		case 45: *iParam2 = 2437; break;

		case 46: *iParam2 = 2438; break;

		case 47: *iParam2 = 2439; break;

		case 48: *iParam2 = 2440; break;

		case 49: *iParam2 = 2441; break;

		case 50: *iParam2 = 2442; break;

		case 51: *iParam2 = 2571; break;

		case 52: *iParam2 = 2572; break;

		case 53: *iParam2 = 2573; break;

		case 54: *iParam2 = 2574; break;

		case 55: *iParam2 = 2575; break;

		case 56: *iParam2 = 2576; break;

		case 57: *iParam2 = 2577; break;

		case 58: *iParam2 = 2578; break;

		case 59: *iParam2 = 2579; break;

		case 60: *iParam2 = 2580; break;

		case 61: *iParam2 = 2581; break;

		case 62: *iParam2 = 3178; break;

		case 63: *iParam2 = 3179; break;

		case 64: *iParam2 = 3180; break;

		case 65: *iParam2 = 3181; break;

		case 66: *iParam2 = 3182; break;

		case 67: *iParam2 = 3183; break;

		case 68: *iParam2 = 3651; break;

		case 69: *iParam2 = 3652; break;

		case 70: *iParam2 = 3653; break;

		case 71: *iParam2 = 3654; break;

		case 72: *iParam2 = 3655; break;

		case 73: *iParam2 = 3656; break;

		case 74: *iParam2 = 3657; break;

		case 75: *iParam2 = 3658; break;

		case 76: *iParam2 = 3659; break;

		case 77: *iParam2 = 3660; break;

		case 78: *iParam2 = 3764; break;

		case 79: *iParam2 = 3765; break;

		case 80: *iParam2 = 3766; break;

		case 81: *iParam2 = 3767; break;

		case 82: *iParam2 = 3768; break;

		case 83: *iParam2 = 3769; break;

		case 84: *iParam2 = 3770; break;

		case 85: *iParam2 = 3771; break;

		case 86: *iParam2 = 3874; break;

		case 87: *iParam2 = 3875; break;

		case 88: *iParam2 = 3876; break;

		case 89: *iParam2 = 5309; break;

		case 90: *iParam2 = 5310; break;

		case 91: *iParam2 = 5311; break;

		case 92: *iParam2 = 5312; break;

		case 93: *iParam2 = 5313; break;

		case 94: *iParam2 = 5314; break;

		case 95: *iParam2 = 5315; break;

		case 96: *iParam2 = 5316; break;

		case 97: *iParam2 = 5317; break;

		case 98: *iParam2 = 5318; break;

		case 99: *iParam2 = 5319; break;

		case 100: *iParam2 = 5320; break;

		default: break;
		}
		break;

	case 2:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1759; break;

		case 1: *iParam2 = 1760; break;

		case 2: *iParam2 = 1761; break;

		case 3: *iParam2 = 1762; break;

		case 4: *iParam2 = 1763; break;

		case 5: *iParam2 = 1764; break;

		case 6: *iParam2 = 1772; break;

		case 7: *iParam2 = 1773; break;

		case 8: *iParam2 = 1774; break;

		case 9: *iParam2 = 1775; break;

		case 10: *iParam2 = 1776; break;

		case 11: *iParam2 = 1777; break;

		case 12: *iParam2 = 1778; break;

		case 13: *iParam2 = 1781; break;

		case 14: *iParam2 = 1782; break;

		case 15: *iParam2 = 1883; break;

		case 16: *iParam2 = 1884; break;

		case 17: *iParam2 = 1914; break;

		case 18: *iParam2 = 1932; break;

		case 19: *iParam2 = 1933; break;

		case 20: *iParam2 = 1934; break;

		case 21: *iParam2 = 1935; break;

		case 22: *iParam2 = 1936; break;

		case 23: *iParam2 = 2037; break;

		case 24: *iParam2 = 2038; break;

		case 25: *iParam2 = 2072; break;

		case 26: *iParam2 = 2073; break;

		case 27: *iParam2 = 2074; break;

		case 28: *iParam2 = 2075; break;

		case 29: *iParam2 = 2076; break;

		case 30: *iParam2 = 2077; break;

		case 31: *iParam2 = 2078; break;

		case 32: *iParam2 = 2079; break;

		case 33: *iParam2 = 2080; break;

		case 34: *iParam2 = 2081; break;

		case 35: *iParam2 = 2320; break;

		case 36: *iParam2 = 2321; break;

		case 37: *iParam2 = 2375; break;

		case 38: *iParam2 = 2376; break;

		case 39: *iParam2 = 2377; break;

		case 40: *iParam2 = 2378; break;

		case 41: *iParam2 = 2443; break;

		case 42: *iParam2 = 2444; break;

		case 43: *iParam2 = 2445; break;

		case 44: *iParam2 = 2446; break;

		case 45: *iParam2 = 2447; break;

		case 46: *iParam2 = 2448; break;

		case 47: *iParam2 = 2449; break;

		case 48: *iParam2 = 2450; break;

		case 49: *iParam2 = 2451; break;

		case 50: *iParam2 = 2452; break;

		case 51: *iParam2 = 2582; break;

		case 52: *iParam2 = 2583; break;

		case 53: *iParam2 = 2584; break;

		case 54: *iParam2 = 2585; break;

		case 55: *iParam2 = 2586; break;

		case 56: *iParam2 = 2587; break;

		case 57: *iParam2 = 2588; break;

		case 58: *iParam2 = 2589; break;

		case 59: *iParam2 = 2590; break;

		case 60: *iParam2 = 2591; break;

		case 61: *iParam2 = 2592; break;

		case 62: *iParam2 = 3184; break;

		case 63: *iParam2 = 3185; break;

		case 64: *iParam2 = 3186; break;

		case 65: *iParam2 = 3187; break;

		case 66: *iParam2 = 3188; break;

		case 67: *iParam2 = 3189; break;

		case 68: *iParam2 = 3661; break;

		case 69: *iParam2 = 3662; break;

		case 70: *iParam2 = 3663; break;

		case 71: *iParam2 = 3664; break;

		case 72: *iParam2 = 3665; break;

		case 73: *iParam2 = 3666; break;

		case 74: *iParam2 = 3667; break;

		case 75: *iParam2 = 3668; break;

		case 76: *iParam2 = 3669; break;

		case 77: *iParam2 = 3670; break;

		case 78: *iParam2 = 3772; break;

		case 79: *iParam2 = 3773; break;

		case 80: *iParam2 = 3774; break;

		case 81: *iParam2 = 3775; break;

		case 82: *iParam2 = 3776; break;

		case 83: *iParam2 = 3777; break;

		case 84: *iParam2 = 3778; break;

		case 85: *iParam2 = 3779; break;

		case 86: *iParam2 = 3877; break;

		case 87: *iParam2 = 3878; break;

		case 88: *iParam2 = 3879; break;

		case 89: *iParam2 = 5321; break;

		case 90: *iParam2 = 5322; break;

		case 91: *iParam2 = 5323; break;

		case 92: *iParam2 = 5324; break;

		case 93: *iParam2 = 5325; break;

		case 94: *iParam2 = 5326; break;

		case 95: *iParam2 = 5327; break;

		case 96: *iParam2 = 5328; break;

		case 97: *iParam2 = 5329; break;

		case 98: *iParam2 = 5330; break;

		case 99: *iParam2 = 5331; break;

		case 100: *iParam2 = 5332; break;

		default: break;
		}
		break;
	}
	*iParam3 = iVar0 % 32;
	return *iParam2 != 6022;
}

// Position - 0x72DE
bool func_79(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	if (iParam0 == 0) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

// Position - 0x81FE
int func_80(int iParam0) {
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return 0;
	}
	if (iParam0 == 1) {
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
			return 0;
		}
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2)) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x824F
bool func_81(int iParam0, int iParam1, int *iParam2, int iParam3) {
	int iVar0;

	iVar0 = func_41(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 != -99) {
		if (!func_155(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_61,
					  Global_101700.f_2095.f_539[iVar0 /*65*/].f_60) ||
			iParam3 == 1) {
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

// Position - 0x82E5
int func_82(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0x8395
struct<10> func_83(int iParam0, int iParam1) {
	int iVar0;
	struct<10> Var1;

	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 31: func_85(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_85(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_85(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_85(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_85(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_85(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8); break;

		case 5: func_85(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8); break;

		case 6: func_85(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_85(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_85(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_85(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8); break;

		default: func_84(&Var1, iParam0, iParam1, 10); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 31: func_85(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_85(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_85(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8); break;

		case 2: func_85(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8); break;

		case 3: func_85(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_85(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_85(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_85(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_85(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_85(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_84(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 31: func_85(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_85(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_85(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_85(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_85(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8); break;

		case 4: func_85(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8); break;

		case 5: func_85(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_85(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_85(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_85(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_84(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 31: func_85(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_85(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_85(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_85(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_85(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_85(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_85(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_85(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_85(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_85(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_85(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_85(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_85(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_85(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_85(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 14: func_85(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_85(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_85(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_85(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_85(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_85(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_85(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_85(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_85(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_85(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 24: func_85(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_84(&Var1, iParam0, iParam1, 25); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 31: func_85(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_85(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_85(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_85(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_85(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_85(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_85(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_85(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_85(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_85(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_85(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_85(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_85(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_85(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_85(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8); break;

		case 14: func_85(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_85(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_85(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_85(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_85(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_85(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_85(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_85(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_85(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_85(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_84(&Var1, iParam0, iParam1, 25); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x8CC4
void func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;

	if (iParam2 != 0 && iParam2 != -99) {
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero")) {
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one")) {
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two")) {
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01")) {
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01")) {
			iVar0 = 4;
		}
		dlc1::get_shop_ped_outfit(iParam2, &Var1);
		if (!dlc1::_is_dlc_data_empty(Var1)) {
			iVar19 = 0;
			while (iVar19 < Var1.f_3) {
				if (dlc1::_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1) {
					if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
						(*iParam0)[vVar16.z] = func_65(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1) {
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

// Position - 0x8DEE
void func_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9) {
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

// Position - 0x8E36
struct<17> func_86(int iParam0, int iParam1) {
	int iVar0;
	struct<17> Var1;

	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0:
			if (Global_101700.f_8044.f_99.f_58[120]) {
				func_89(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			else {
				func_89(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			break;

		case 1: func_89(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0); break;

		case 2: func_89(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8); break;

		case 3: func_89(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31); break;

		case 4: func_89(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2); break;

		case 5:
			func_89(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[0], Global_101700.f_2095.f_539.f_200[0], 6, 3, 0,
					0, 0, -99, 0, 0, 3);
			break;

		case 6: func_89(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_89(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 8: func_89(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 9: func_89(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 10: func_89(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4); break;

		case 11: func_89(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5); break;

		case 12: func_89(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31); break;

		case 13: func_89(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 14: func_89(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6); break;

		case 15: func_89(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31); break;

		case 16: func_89(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31); break;

		case 17: func_89(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 18: func_89(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7); break;

		case 19: func_89(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 20: func_89(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 21: func_89(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_89(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 23: func_89(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31); break;

		case 24: func_89(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31); break;

		case 25: func_89(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 26: func_89(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 27: func_89(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 28: func_89(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 29: func_89(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 30: func_89(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 31: func_89(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31); break;

		case 32: func_89(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 33: func_89(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 34: func_89(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31); break;

		case 35: func_89(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 36: func_89(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 37: func_89(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 38: func_89(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 39: func_89(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 40: func_89(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 41: func_89(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_89(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_89(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_89(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 45: func_89(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 46: func_89(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_89(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 48: func_89(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31); break;

		case 49: func_89(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 50: func_89(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9); break;

		case 51: func_89(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 52: func_89(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		default: func_87(&Var1, iParam0, iParam1, 53); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: func_89(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 1: func_89(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 2:
			func_89(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[1], Global_101700.f_2095.f_539.f_200[1], 17, 2,
					26, 0, 0, -99, 0, 45, 31);
			break;

		case 3: func_89(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1); break;

		case 4: func_89(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2); break;

		case 5: func_89(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 6: func_89(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_89(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3); break;

		case 8: func_89(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5); break;

		case 9: func_89(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 10: func_89(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 11: func_89(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 12: func_89(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 13: func_89(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 14: func_89(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 15: func_89(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 16: func_89(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 17: func_89(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 18: func_89(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31); break;

		case 19: func_89(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 20: func_89(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 21: func_89(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4); break;

		case 22: func_89(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31); break;

		case 23: func_89(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31); break;

		case 24: func_89(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31); break;

		case 25: func_89(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31); break;

		case 26: func_89(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31); break;

		case 27: func_89(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31); break;

		case 28: func_89(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31); break;

		case 29: func_89(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31); break;

		case 30: func_89(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31); break;

		case 31: func_89(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31); break;

		case 32: func_89(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31); break;

		case 33: func_89(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31); break;

		case 34: func_89(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31); break;

		case 35: func_89(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31); break;

		case 36: func_89(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31); break;

		case 37: func_89(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31); break;

		case 38: func_89(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 39: func_89(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 40: func_89(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 41: func_89(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 42: func_89(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31); break;

		case 43: func_89(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6); break;

		case 44: func_89(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 45: func_89(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8); break;

		case 46: func_89(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31); break;

		default: func_87(&Var1, iParam0, iParam1, 47); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: func_89(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 1: func_89(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8); break;

		case 2: func_89(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1); break;

		case 3: func_89(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2); break;

		case 4:
			func_89(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[2], Global_101700.f_2095.f_539.f_200[2], 8, 0, 0,
					0, 0, -99, 0, 0, 31);
			break;

		case 5: func_89(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6); break;

		case 6: func_89(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3); break;

		case 7: func_89(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4); break;

		case 8: func_89(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31); break;

		case 9: func_89(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 10: func_89(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 11: func_89(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5); break;

		case 12: func_89(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 13: func_89(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31); break;

		case 14: func_89(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31); break;

		case 15: func_89(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 16: func_89(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 17: func_89(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 18: func_89(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 19: func_89(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 20: func_89(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 21: func_89(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_89(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 23: func_89(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 24: func_89(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 25: func_89(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 26: func_89(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 27: func_89(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 28: func_89(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 29: func_89(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 30: func_89(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 31: func_89(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 32: func_89(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 33: func_89(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 34: func_89(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 35: func_89(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 36: func_89(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 37: func_89(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 38: func_89(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 39: func_89(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 40: func_89(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 41: func_89(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_89(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_89(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_89(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31); break;

		case 45: func_89(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 46: func_89(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_89(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31); break;

		default: func_87(&Var1, iParam0, iParam1, 48); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: func_89(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31); break;

		case 1: func_89(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0); break;

		case 2: func_89(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1); break;

		case 3: func_89(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2); break;

		case 4: func_89(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3); break;

		case 5: func_89(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4); break;

		case 6: func_89(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5); break;

		case 7: func_89(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6); break;

		case 8: func_89(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7); break;

		case 9: func_89(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8); break;

		case 10: func_89(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9); break;

		case 11: func_89(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10); break;

		case 12: func_89(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11); break;

		case 13: func_89(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12); break;

		case 14: func_89(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13); break;

		case 15: func_89(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14); break;

		case 16: func_89(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15); break;

		case 17: func_89(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16); break;

		case 18: func_89(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17); break;

		case 19: func_89(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18); break;

		case 20: func_89(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19); break;

		case 21: func_89(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20); break;

		case 22: func_89(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21); break;

		case 23: func_89(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22); break;

		case 24: func_89(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23); break;

		case 25: func_89(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24); break;

		default: func_87(&Var1, iParam0, iParam1, 26); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: func_89(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31); break;

		case 1: func_89(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31); break;

		case 2: func_89(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0); break;

		case 3: func_89(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1); break;

		case 4: func_89(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2); break;

		case 5: func_89(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3); break;

		case 6: func_89(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4); break;

		case 7: func_89(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5); break;

		case 8: func_89(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6); break;

		case 9: func_89(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7); break;

		case 10: func_89(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8); break;

		case 11: func_89(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9); break;

		case 12: func_89(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10); break;

		case 13: func_89(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31); break;

		case 14: func_89(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11); break;

		case 15: func_89(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12); break;

		case 16: func_89(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13); break;

		case 17: func_89(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14); break;

		case 18: func_89(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15); break;

		case 19: func_89(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16); break;

		case 20: func_89(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17); break;

		case 21: func_89(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31); break;

		case 22: func_89(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18); break;

		case 23: func_89(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19); break;

		case 24: func_89(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20); break;

		case 25: func_89(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21); break;

		case 26: func_89(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22); break;

		case 27: func_89(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23); break;

		default: func_87(&Var1, iParam0, iParam1, 28); break;
		}
		break;
	}
	return Var1;
}

//Position - 0xAC7E
void func_87(var* uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;

	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero")) {
		iVar0 = 0;
		(*uParam0)[13] = 10 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_one")) {
		iVar0 = 1;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_two")) {
		iVar0 = 2;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("mp_m_freemode_01")) {
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01")) {
		iVar0 = 4;
	}
	dlc1::_0xF3FBE2D50A6A8C28(iVar0, 0);
	dlc1::get_shop_ped_query_outfit(iParam2 - iParam3, &Var1);
	if (!dlc1::_is_dlc_data_empty(Var1)) {
		iVar36 = 0;
		while (iVar36 < Var1.f_4) {
			if (dlc1::_get_prop_from_outfit(Var1.f_1, iVar36, &vVar16)) {
				if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
					if (vVar16.z == 10) {
						dlc1::init_shop_ped_component(&Var19);
						dlc1::get_shop_ped_component(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1) {
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16) {
						(*uParam0)[func_88(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else {
						(*uParam0)[func_88(vVar16.z)] = func_65(iParam1, vVar16.x, func_88(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1) {
					(*uParam0)[func_88(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0) {
			(*uParam0)[13] = -99;
		}
		else {
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

// Position - 0xAE68
int func_88(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0xAF18
void func_89(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

// Position - 0xAF89
struct<14> func_90(int iParam0, int iParam1, int iParam2) {
	func_154();
	if (iParam0 == joaat("player_zero")) {
		func_136(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one")) {
		func_117(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two")) {
		func_91(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

//Position - 0xAFDB
void func_91(int iParam0, int iParam1)
{
	switch (iParam0) {
	case 0: func_116(iParam1); break;

	case 2: func_115(iParam1); break;

	case 3: func_112(iParam1); break;

	case 4: func_111(iParam1); break;

	case 6: func_110(iParam1); break;

	case 5: func_109(iParam1); break;

	case 8: func_108(iParam1); break;

	case 9: func_107(iParam1); break;

	case 10: func_106(iParam1); break;

	case 1: func_105(iParam1); break;

	case 7: func_104(iParam1); break;

	case 11: func_103(iParam1); break;

	case 12: func_102(iParam1); break;

	case 13: func_101(iParam1); break;

	case 14: func_92(iParam1); break;
	}
}

// Position - 0xB0CB
void func_92(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 154:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	case 88:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P2_E1", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 45;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P2_E2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P2_E2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P2_E2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P2_E2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 52;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P2_E2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 54;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P2_E2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 54;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P2_E2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P2_E2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P2_E2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P2_E2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P2_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P2_E3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P2_E3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P2_E3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P2_E3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P2_E3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P2_E3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P2_E3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P2_E3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P2_E3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 113:
		StringCopy(&Var2, "PROPS_P2_E7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 114:
		StringCopy(&Var2, "PROPS_P2_E7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 115:
		StringCopy(&Var2, "PROPS_P2_E7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 116:
		StringCopy(&Var2, "PROPS_P2_E7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 59;
		iVar8 = 10;
		break;

	case 117:
		StringCopy(&Var2, "PROPS_P2_E7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 118:
		StringCopy(&Var2, "PROPS_P2_E7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 119:
		StringCopy(&Var2, "PROPS_P2_E7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 120:
		StringCopy(&Var2, "PROPS_P2_E7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 59;
		iVar8 = 10;
		break;

	case 121:
		StringCopy(&Var2, "PROPS_P2_E7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 79;
		iVar8 = 10;
		break;

	case 122:
		StringCopy(&Var2, "PROPS_P2_E7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 79;
		iVar8 = 10;
		break;

	case 123:
		StringCopy(&Var2, "PROPS_P2_E8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 124:
		StringCopy(&Var2, "PROPS_P2_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 125:
		StringCopy(&Var2, "PROPS_P2_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 126:
		StringCopy(&Var2, "PROPS_P2_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 127:
		StringCopy(&Var2, "PROPS_P2_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 128:
		StringCopy(&Var2, "PROPS_P2_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 129:
		StringCopy(&Var2, "PROPS_P2_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 130:
		StringCopy(&Var2, "PROPS_P2_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 131:
		StringCopy(&Var2, "PROPS_P2_E8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 132:
		StringCopy(&Var2, "PROPS_P2_E8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 215;
		iVar8 = 10;
		break;

	case 133:
		StringCopy(&Var2, "PROPS_P2_E9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 134:
		StringCopy(&Var2, "PROPS_P2_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 135:
		StringCopy(&Var2, "PROPS_P2_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 169;
		iVar8 = 10;
		break;

	case 136:
		StringCopy(&Var2, "PROPS_P2_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 169;
		iVar8 = 10;
		break;

	case 137:
		StringCopy(&Var2, "PROPS_P2_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 138:
		StringCopy(&Var2, "PROPS_P2_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 139:
		StringCopy(&Var2, "PROPS_P2_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 140:
		StringCopy(&Var2, "PROPS_P2_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 141:
		StringCopy(&Var2, "PROPS_P2_E9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 142:
		StringCopy(&Var2, "PROPS_P2_E9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 143:
		StringCopy(&Var2, "PROPS_P2_E10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 49;
		iVar8 = 10;
		break;

	case 144:
		StringCopy(&Var2, "PROPS_P2_E10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 145:
		StringCopy(&Var2, "PROPS_P2_E10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 52;
		iVar8 = 10;
		break;

	case 146:
		StringCopy(&Var2, "PROPS_P2_E10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 147:
		StringCopy(&Var2, "PROPS_P2_E10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 148:
		StringCopy(&Var2, "PROPS_P2_E10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 149:
		StringCopy(&Var2, "PROPS_P2_E10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 150:
		StringCopy(&Var2, "PROPS_P2_E10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 63;
		iVar8 = 10;
		break;

	case 151:
		StringCopy(&Var2, "PROPS_P2_E10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 152:
		StringCopy(&Var2, "PROPS_P2_E10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 153:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "PROPS_P2_H2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "PROPS_P2_H7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "PROPS_P2_H7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 12;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 13;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 14;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 15;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 59:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 60:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 64:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 65:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 66:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 67:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 68:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 69:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P1_H26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P1_H26_1", 16);
		iVar6 = 26;
		iVar7 = 1;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P1_H26_2", 16);
		iVar6 = 26;
		iVar7 = 2;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P1_H26_3", 16);
		iVar6 = 26;
		iVar7 = 3;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P1_H26_4", 16);
		iVar6 = 26;
		iVar7 = 4;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P1_H26_5", 16);
		iVar6 = 26;
		iVar7 = 5;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P1_H26_6", 16);
		iVar6 = 26;
		iVar7 = 6;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P1_H26_7", 16);
		iVar6 = 26;
		iVar7 = 7;
		iVar1 = 24;
		iVar8 = 0;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P1_H26_8", 16);
		iVar6 = 26;
		iVar7 = 8;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 80:
		StringCopy(&Var2, "PROPS_P1_H26_9", 16);
		iVar6 = 26;
		iVar7 = 9;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 81:
		StringCopy(&Var2, "PROPS_P1_H26_10", 16);
		iVar6 = 26;
		iVar7 = 10;
		iVar1 = 18;
		iVar8 = 0;
		break;

	case 82:
		StringCopy(&Var2, "PROPS_P1_H26_11", 16);
		iVar6 = 26;
		iVar7 = 11;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P1_H26_12", 16);
		iVar6 = 26;
		iVar7 = 12;
		iVar1 = 24;
		iVar8 = 0;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P1_H26_13", 16);
		iVar6 = 26;
		iVar7 = 13;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P1_H26_14", 16);
		iVar6 = 26;
		iVar7 = 14;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P1_H26_15", 16);
		iVar6 = 26;
		iVar7 = 15;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 87:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar8 = 0;
		break;

	default: func_100(iVar10, iParam0, 155); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xC2FD
void func_93(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10) {
	int iVar0;
	int iVar1;

	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = iParam2 % 32;
	uParam0->f_2 = iParam2 / 32;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&uParam0->f_8, sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_99(iParam8);
	if (uParam0->f_2 >= 10 && uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		if (!iParam10) {
		}
		uParam0->f_2 = 0;
	}
	if (gameplay::get_hash_key(sParam3) != gameplay::get_hash_key("NO_LABEL")) {
	}
	if (iParam7) {
		gameplay::set_bit(&uParam0->f_6, 3);
	}
	if (iParam10) {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
			gameplay::set_bit(&uParam0->f_6, 5);
		}
		gameplay::set_bit(&uParam0->f_6, 1);
		gameplay::set_bit(&uParam0->f_6, 2);
		gameplay::set_bit(&uParam0->f_6, 6);
		if (func_98(14)) {
			return;
		}
		if (iParam1 == 1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0)) {
				gameplay::set_bit(&uParam0->f_6, 7);
			}
		}
		if (iParam1 == 12) {
			if (!func_97(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_97(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else if (iParam1 == 13) {
		}
		else if (iParam1 == 14) {
			if (!func_97(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_97(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else {
			if (!func_97(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_97(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		gameplay::set_bit(&uParam0->f_6, 0);
		gameplay::set_bit(&uParam0->f_6, 5);
		if (func_79(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 1);
		}
		if (func_79(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 2);
		}
		if (!func_79(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 4);
		}
	}
	else {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 ||
			iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12) {
			if (func_98(14)) {
				return;
			}
			iVar0 = func_77(func_96(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 1);
			}
			iVar0 = func_77(func_95(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 2);
			}
			if (func_94(iParam1, uParam0->f_2, &iVar1)) {
				iVar0 = func_77(iVar1, Global_69521, 0);
				if (!gameplay::is_bit_set(iVar0, uParam0->f_1)) {
					gameplay::set_bit(&uParam0->f_6, 4);
				}
			}
		}
		else {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
	if (iParam1 == 14) {
		if (iParam4 == -1) {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
}

// Position - 0xC68D
bool func_94(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = 973;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: *iParam2 = 974; break;

		case 3: *iParam2 = 1424; break;

		case 4: *iParam2 = 990; break;

		case 6: *iParam2 = 998; break;

		case 8: *iParam2 = 1425; break;

		case 9: *iParam2 = 1433; break;

		case 10: *iParam2 = 1435; break;

		case 1: *iParam2 = 1006; break;

		case 7: *iParam2 = 1436; break;

		case 11: *iParam2 = 982; break;

		case 14: *iParam2 = 1014; break;

		case 12: *iParam2 = 1025; break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: *iParam2 = 975; break;

		case 4: *iParam2 = 991; break;

		case 6: *iParam2 = 999; break;

		case 8: *iParam2 = 1426; break;

		case 9: *iParam2 = 1434; break;

		case 7: *iParam2 = 1437; break;

		case 11: *iParam2 = 983; break;

		case 14: *iParam2 = 1015; break;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: *iParam2 = 976; break;

		case 4: *iParam2 = 992; break;

		case 6: *iParam2 = 1000; break;

		case 8: *iParam2 = 1427; break;

		case 7: *iParam2 = 1438; break;

		case 11: *iParam2 = 984; break;

		case 14: *iParam2 = 1016; break;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: *iParam2 = 993; break;

		case 6: *iParam2 = 1001; break;

		case 8: *iParam2 = 1428; break;

		case 11: *iParam2 = 985; break;

		case 14: *iParam2 = 1017; break;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: *iParam2 = 994; break;

		case 6: *iParam2 = 1002; break;

		case 8: *iParam2 = 1429; break;

		case 11: *iParam2 = 986; break;

		case 14: *iParam2 = 1018; break;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: *iParam2 = 995; break;

		case 6: *iParam2 = 1003; break;

		case 8: *iParam2 = 1430; break;

		case 11: *iParam2 = 987; break;

		case 14: *iParam2 = 1019; break;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: *iParam2 = 996; break;

		case 6: *iParam2 = 1004; break;

		case 8: *iParam2 = 1431; break;

		case 11: *iParam2 = 988; break;

		case 14: *iParam2 = 1020; break;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: *iParam2 = 997; break;

		case 6: *iParam2 = 1005; break;

		case 8: *iParam2 = 1432; break;

		case 11: *iParam2 = 989; break;

		case 14: *iParam2 = 1021; break;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: *iParam2 = 1022; break;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: *iParam2 = 1023; break;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: *iParam2 = 1024; break;
		}
		break;
	}
	return *iParam2 != 973;
}

// Position - 0xCA92
int func_95(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 922;

		case 3: return 1409;

		case 4: return 938;

		case 6: return 946;

		case 8: return 1410;

		case 9: return 1418;

		case 10: return 1420;

		case 1: return 954;

		case 7: return 1421;

		case 11: return 930;

		case 14: return 962;

		case 12: return 973;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 923;

		case 4: return 939;

		case 6: return 947;

		case 8: return 1411;

		case 9: return 1419;

		case 7: return 1422;

		case 11: return 931;

		case 14: return 963;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 924;

		case 4: return 940;

		case 6: return 948;

		case 8: return 1412;

		case 7: return 1423;

		case 11: return 932;

		case 14: return 964;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 941;

		case 6: return 949;

		case 8: return 1413;

		case 11: return 933;

		case 14: return 965;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 942;

		case 6: return 950;

		case 8: return 1414;

		case 11: return 934;

		case 14: return 966;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 943;

		case 6: return 951;

		case 8: return 1415;

		case 11: return 935;

		case 14: return 967;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 944;

		case 6: return 952;

		case 8: return 1416;

		case 11: return 936;

		case 14: return 968;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 945;

		case 6: return 953;

		case 8: return 1417;

		case 11: return 937;

		case 14: return 969;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 970;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 971;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 972;
		}
		break;
	}
	return 930;
}

// Position - 0xCE8D
int func_96(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 870;

		case 3: return 1394;

		case 4: return 886;

		case 6: return 894;

		case 8: return 1395;

		case 9: return 1403;

		case 10: return 1405;

		case 1: return 902;

		case 7: return 1406;

		case 11: return 878;

		case 14: return 910;

		case 12: return 921;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 871;

		case 4: return 887;

		case 6: return 895;

		case 8: return 1396;

		case 9: return 1404;

		case 7: return 1407;

		case 11: return 879;

		case 14: return 911;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 872;

		case 4: return 888;

		case 6: return 896;

		case 8: return 1397;

		case 7: return 1408;

		case 11: return 880;

		case 14: return 912;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 889;

		case 6: return 897;

		case 8: return 1398;

		case 11: return 881;

		case 14: return 913;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 890;

		case 6: return 898;

		case 8: return 1399;

		case 11: return 882;

		case 14: return 914;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 891;

		case 6: return 899;

		case 8: return 1400;

		case 11: return 883;

		case 14: return 915;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 892;

		case 6: return 900;

		case 8: return 1401;

		case 11: return 884;

		case 14: return 916;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 893;

		case 6: return 901;

		case 8: return 1402;

		case 11: return 885;

		case 14: return 917;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 918;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 919;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 920;
		}
		break;
	}
	return 878;
}

// Position - 0xD288
int func_97(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_78(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_77(iVar2, iVar0, 0);
		return gameplay::is_bit_set(iVar3, iVar1);
	}
	return 0;
}

// Position - 0xD2CA
bool func_98(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xD2D8
int func_99(int iParam0) {
	switch (iParam0) {
	case -1: return 0;

	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;

	case 9: return 0;

	case 10: return 1;

	case 11: return 0;

	case 12: return 0;

	case 13: return 0;
	}
	return 0;
}

// Position - 0xD3AC
void func_100(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;

	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;
	if (iVar0 < 0) {
		return;
	}
	iVar1 = Global_69523[0 /*14*/].f_5;
	if (iParam0 == 12) {
		iVar18 = 0;
		iVar19 = dlc1::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_outfit(iVar17, &Var2);
			if (!dlc1::_is_dlc_data_empty(Var2)) {
				if (iVar18 == iParam1 - iParam2) {
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_93(&Global_69523[0 /*14*/], iParam0, iParam1, &Var2.f_7, 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13) {
		func_93(&Global_69523[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14) {
		dlc1::init_shop_ped_prop(&Var20);
		iVar39 = 0;
		iVar40 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40) {
			dlc1::get_shop_ped_query_prop(iVar38, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iVar39 == iParam1 - iParam2) {
					if (Var20.f_6 == 0) {
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1) {
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2) {
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3) {
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4) {
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5) {
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6) {
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7) {
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8) {
						iVar37 = 8;
					}
					else {
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_93(&Global_69523[0 /*14*/], iParam0, iParam1, &Var20.f_9, Var20.f_3, Var20.f_4, Var20.f_5,
							dlc1::_0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var41);
		iVar59 = 0;
		iVar60 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_82(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60) {
			dlc1::get_shop_ped_query_component(iVar58, &Var41);
			if (!dlc1::_is_dlc_data_empty(Var41)) {
				if (iVar59 == iParam1 - iParam2) {
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_93(&Global_69523[0 /*14*/], iParam0, iParam1, &Var41.f_9, Var41.f_3, Var41.f_4, Var41.f_5,
							dlc1::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

// Position - 0xD626
void func_101(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_100(iVar10, iParam0, 9); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xD772
void func_102(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P2_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "OUTFIT_P2_5", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "OUTFIT_P2_6", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P2_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P2_8", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P2_9", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "OUTFIT_P2_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P2_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P2_13", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "OUTFIT_P2_14", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P2_15", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P2_16", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P2_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P2_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P2_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P2_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P2_21", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P2_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P2_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P2_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P2_25", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P2_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P2_27", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P2_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 119;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P2_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 99;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P2_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 129;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P2_44", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P2_45", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P2_46", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 139;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P2_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 149;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P2_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 145;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P2_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 140;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P2_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 135;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P2_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P2_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P2_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P2_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P2_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P2_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P2_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P2_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P2_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P2_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P2_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P2_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P2_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 47:
		StringCopy(&Var2, "OUTFIT_P2_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 48); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xDC7E
void func_103(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 1); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xDCF1
void func_104(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 1); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xDD63
void func_105(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P2_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P2_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "BERD_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 6); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xDE49
void func_106(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 7;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 8;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 9;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 5;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 6;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		break;

	default: func_100(iVar10, iParam0, 33); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xE18A
void func_107(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 11:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 12:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 13:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 14:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 15:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 270;
		break;

	case 16:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 270;
		break;

	default: func_100(iVar10, iParam0, 17); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xE391
void func_108(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "SPEC_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "SPEC_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_100(iVar10, iParam0, 18); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xE5B0
void func_109(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_100(iVar10, iParam0, 7); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xE6B8
void func_110(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 22;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 45;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 65;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P2_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 58;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P2_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 72;
		break;

	case 6:
		StringCopy(&Var2, "FEET_P2_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 68;
		break;

	case 7:
		StringCopy(&Var2, "FEET_P2_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 60;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "FEET_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "FEET_P2_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "FEET_P2_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "FEET_P2_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P2_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 19:
		StringCopy(&Var2, "FEET_P2_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P2_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P2_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P2_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P2_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 24:
		StringCopy(&Var2, "FEET_P2_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P2_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P2_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P2_9_11", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 700;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P2_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 38:
		StringCopy(&Var2, "FEET_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P2_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P2_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P2_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P2_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P2_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P2_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P2_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P2_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P2_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P2_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P2_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P2_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P2_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P2_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P2_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P2_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P2_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P2_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 73:
		StringCopy(&Var2, "FEET_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P2_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P2_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P2_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P2_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P2_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P2_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P2_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 110;
		break;

	default: func_100(iVar10, iParam0, 84); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF049
void func_111(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 129;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 115;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "LEGS_P2_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "LEGS_P2_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 20:
		StringCopy(&Var2, "LEGS_P2_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 21:
		StringCopy(&Var2, "LEGS_P2_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 22:
		StringCopy(&Var2, "LEGS_P2_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 850;
		break;

	case 23:
		StringCopy(&Var2, "LEGS_P2_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 750;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P2_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 690;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P2_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 820;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P2_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 650;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P2_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 690;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P2_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 690;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P2_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 820;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "LEGS_P2_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "LEGS_P2_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "LEGS_P2_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "LEGS_P2_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 58;
		break;

	case 36:
		StringCopy(&Var2, "LEGS_P2_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 68;
		break;

	case 37:
		StringCopy(&Var2, "LEGS_P2_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 65;
		break;

	case 38:
		StringCopy(&Var2, "LEGS_P2_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 60;
		break;

	case 39:
		StringCopy(&Var2, "LEGS_P2_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 40:
		StringCopy(&Var2, "LEGS_P2_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 63;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P2_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 60;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P2_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 58;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 99;
		break;

	case 46:
		StringCopy(&Var2, "LEGS_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 105;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 110;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 110;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P2_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 99;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P2_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 110;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P2_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 110;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P2_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P2_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 105;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 15;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 15;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 15;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 15;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 15;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 15;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 15;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 15;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 600;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 600;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 600;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 600;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 600;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 600;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 600;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 600;
		break;

	case 70:
		StringCopy(&Var2, "LEGS_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 600;
		break;

	case 71:
		StringCopy(&Var2, "LEGS_P2_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 80;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P2_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P2_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P2_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P2_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 80;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P2_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P2_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 80;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P2_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 80;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P2_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 80;
		break;

	case 80:
		StringCopy(&Var2, "LEGS_P2_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 80;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P2_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P2_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 12;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P2_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 12;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P2_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P2_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 18;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P2_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 20;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P2_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 30;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P2_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 30;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P2_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 30;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P2_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P2_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		break;

	case 92:
		StringCopy(&Var2, "LEGS_P2_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		break;

	case 93:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 95:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 1;
		break;

	case 96:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 2;
		break;

	case 97:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 3;
		break;

	case 98:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 4;
		break;

	case 99:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 5;
		break;

	case 100:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 6;
		break;

	case 101:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 7;
		break;

	case 102:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 8;
		break;

	case 103:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 9;
		break;

	default: func_100(iVar10, iParam0, 104); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xFBA0
void func_112(int iParam0) {
	if (iParam0 < 136) {
		func_114(iParam0);
	}
	else {
		func_113(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_100(3, iParam0, 242);
	}
}

// Position - 0xFBD4
void func_113(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 136:
		StringCopy(&Var2, "TORSO_P2_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 32;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P2_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 39;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P2_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 40;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P2_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 42;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P2_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 45;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P2_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 48;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P2_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 52;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P2_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P2_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P2_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P2_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 560;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P2_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 390;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P2_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 390;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P2_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 390;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P2_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 560;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P2_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 390;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P2_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 390;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P2_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 390;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P2_22_10", 16);
		iVar6 = 22;
		iVar7 = 10;
		iVar1 = 390;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P2_22_11", 16);
		iVar6 = 22;
		iVar7 = 11;
		iVar1 = 3950;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P2_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P2_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P2_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P2_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P2_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P2_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P2_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 19;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P2_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 20;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P2_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 19;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P2_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P2_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 20;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P2_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 28;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P2_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 28;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P2_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 25;
		break;

	case 170:
		StringCopy(&Var2, "TORSO_P2_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 22;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P2_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 19;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P2_24_10", 16);
		iVar6 = 24;
		iVar7 = 10;
		iVar1 = 22;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P2_24_11", 16);
		iVar6 = 24;
		iVar7 = 11;
		iVar1 = 19;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P2_24_12", 16);
		iVar6 = 24;
		iVar7 = 12;
		iVar1 = 20;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P2_24_13", 16);
		iVar6 = 24;
		iVar7 = 13;
		iVar1 = 25;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P2_24_14", 16);
		iVar6 = 24;
		iVar7 = 14;
		iVar1 = 20;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P2_24_15", 16);
		iVar6 = 24;
		iVar7 = 15;
		iVar1 = 28;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P2_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar1 = 35;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P2_25_1", 16);
		iVar6 = 25;
		iVar7 = 1;
		iVar1 = 40;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P2_25_2", 16);
		iVar6 = 25;
		iVar7 = 2;
		iVar1 = 45;
		break;

	case 181:
		StringCopy(&Var2, "TORSO_P2_25_3", 16);
		iVar6 = 25;
		iVar7 = 3;
		iVar1 = 45;
		break;

	case 182:
		StringCopy(&Var2, "TORSO_P2_25_4", 16);
		iVar6 = 25;
		iVar7 = 4;
		iVar1 = 49;
		break;

	case 183:
		StringCopy(&Var2, "TORSO_P2_25_5", 16);
		iVar6 = 25;
		iVar7 = 5;
		iVar1 = 820;
		break;

	case 184:
		StringCopy(&Var2, "TORSO_P2_25_6", 16);
		iVar6 = 25;
		iVar7 = 6;
		iVar1 = 790;
		break;

	case 185:
		StringCopy(&Var2, "TORSO_P2_25_7", 16);
		iVar6 = 25;
		iVar7 = 7;
		iVar1 = 820;
		break;

	case 186:
		StringCopy(&Var2, "TORSO_P2_25_8", 16);
		iVar6 = 25;
		iVar7 = 8;
		iVar1 = 929;
		break;

	case 187:
		StringCopy(&Var2, "TORSO_P2_25_9", 16);
		iVar6 = 25;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 188:
		StringCopy(&Var2, "TORSO_P2_25_10", 16);
		iVar6 = 25;
		iVar7 = 10;
		iVar1 = 850;
		break;

	case 189:
		StringCopy(&Var2, "TORSO_P2_25_11", 16);
		iVar6 = 25;
		iVar7 = 11;
		iVar1 = 790;
		break;

	case 190:
		StringCopy(&Var2, "TORSO_P2_26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 191:
		StringCopy(&Var2, "TORSO_P2_26_1", 16);
		iVar6 = 26;
		iVar7 = 1;
		break;

	case 192:
		StringCopy(&Var2, "TORSO_P2_26_2", 16);
		iVar6 = 26;
		iVar7 = 2;
		break;

	case 193:
		StringCopy(&Var2, "TORSO_P2_26_3", 16);
		iVar6 = 26;
		iVar7 = 3;
		break;

	case 194:
		StringCopy(&Var2, "TORSO_P2_26_4", 16);
		iVar6 = 26;
		iVar7 = 4;
		break;

	case 195:
		StringCopy(&Var2, "TORSO_P2_26_5", 16);
		iVar6 = 26;
		iVar7 = 5;
		break;

	case 196:
		StringCopy(&Var2, "TORSO_P2_26_6", 16);
		iVar6 = 26;
		iVar7 = 6;
		break;

	case 197:
		StringCopy(&Var2, "TORSO_P2_26_7", 16);
		iVar6 = 26;
		iVar7 = 7;
		break;

	case 198:
		StringCopy(&Var2, "TORSO_P2_26_8", 16);
		iVar6 = 26;
		iVar7 = 8;
		break;

	case 199:
		StringCopy(&Var2, "TORSO_P2_26_9", 16);
		iVar6 = 26;
		iVar7 = 9;
		break;

	case 200:
		StringCopy(&Var2, "TORSO_P2_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar1 = 2200;
		break;

	case 201:
		StringCopy(&Var2, "TORSO_P2_27_1", 16);
		iVar6 = 27;
		iVar7 = 1;
		iVar1 = 2500;
		break;

	case 202:
		StringCopy(&Var2, "TORSO_P2_27_2", 16);
		iVar6 = 27;
		iVar7 = 2;
		iVar1 = 2500;
		break;

	case 203:
		StringCopy(&Var2, "TORSO_P2_27_3", 16);
		iVar6 = 27;
		iVar7 = 3;
		iVar1 = 2200;
		break;

	case 204:
		StringCopy(&Var2, "TORSO_P2_27_4", 16);
		iVar6 = 27;
		iVar7 = 4;
		iVar1 = 2500;
		break;

	case 205:
		StringCopy(&Var2, "TORSO_P2_27_5", 16);
		iVar6 = 27;
		iVar7 = 5;
		iVar1 = 2500;
		break;

	case 206:
		StringCopy(&Var2, "TORSO_P2_27_6", 16);
		iVar6 = 27;
		iVar7 = 6;
		iVar1 = 2200;
		break;

	case 207:
		StringCopy(&Var2, "TORSO_P2_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 1100;
		break;

	case 208:
		StringCopy(&Var2, "TORSO_P2_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 1200;
		break;

	case 209:
		StringCopy(&Var2, "TORSO_P2_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 1220;
		break;

	case 210:
		StringCopy(&Var2, "TORSO_P2_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 1250;
		break;

	case 211:
		StringCopy(&Var2, "TORSO_P2_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 1300;
		break;

	case 212:
		StringCopy(&Var2, "TORSO_P2_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 1360;
		break;

	case 213:
		StringCopy(&Var2, "TORSO_P2_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 214:
		StringCopy(&Var2, "TORSO_P2_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 215:
		StringCopy(&Var2, "TORSO_P2_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 216:
		StringCopy(&Var2, "TORSO_P2_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 42;
		break;

	case 217:
		StringCopy(&Var2, "TORSO_P2_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 218:
		StringCopy(&Var2, "TORSO_P2_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 45;
		break;

	case 219:
		StringCopy(&Var2, "TORSO_P2_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 45;
		break;

	case 220:
		StringCopy(&Var2, "TORSO_P2_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 44;
		break;

	case 221:
		StringCopy(&Var2, "TORSO_P2_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 46;
		break;

	case 222:
		StringCopy(&Var2, "TORSO_P2_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 52;
		break;

	case 223:
		StringCopy(&Var2, "TORSO_P2_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar1 = 3200;
		break;

	case 224:
		StringCopy(&Var2, "TORSO_P2_29_1", 16);
		iVar6 = 29;
		iVar7 = 1;
		iVar1 = 3200;
		break;

	case 225:
		StringCopy(&Var2, "TORSO_P2_29_2", 16);
		iVar6 = 29;
		iVar7 = 2;
		iVar1 = 2550;
		break;

	case 226:
		StringCopy(&Var2, "TORSO_P2_29_3", 16);
		iVar6 = 29;
		iVar7 = 3;
		iVar1 = 2750;
		break;

	case 227:
		StringCopy(&Var2, "TORSO_P2_29_4", 16);
		iVar6 = 29;
		iVar7 = 4;
		iVar1 = 2590;
		break;

	case 228:
		StringCopy(&Var2, "TORSO_P2_29_5", 16);
		iVar6 = 29;
		iVar7 = 5;
		iVar1 = 2750;
		break;

	case 229:
		StringCopy(&Var2, "TORSO_P2_29_6", 16);
		iVar6 = 29;
		iVar7 = 6;
		iVar1 = 2550;
		break;

	case 230:
		StringCopy(&Var2, "TORSO_P2_29_7", 16);
		iVar6 = 29;
		iVar7 = 7;
		iVar1 = 2590;
		break;

	case 231:
		StringCopy(&Var2, "TORSO_P2_29_8", 16);
		iVar6 = 29;
		iVar7 = 8;
		iVar1 = 2720;
		break;

	case 232:
		StringCopy(&Var2, "TORSO_P2_29_9", 16);
		iVar6 = 29;
		iVar7 = 9;
		iVar1 = 2750;
		break;

	case 233:
		StringCopy(&Var2, "TORSO_P2_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 3250;
		break;

	case 234:
		StringCopy(&Var2, "TORSO_P2_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 2950;
		break;

	case 235:
		StringCopy(&Var2, "TORSO_P2_30_2", 16);
		iVar6 = 30;
		iVar7 = 2;
		iVar1 = 3100;
		break;

	case 236:
		StringCopy(&Var2, "TORSO_P2_30_3", 16);
		iVar6 = 30;
		iVar7 = 3;
		iVar1 = 3150;
		break;

	case 237:
		StringCopy(&Var2, "TORSO_P2_30_4", 16);
		iVar6 = 30;
		iVar7 = 4;
		iVar1 = 3240;
		break;

	case 238:
		StringCopy(&Var2, "TORSO_P2_30_5", 16);
		iVar6 = 30;
		iVar7 = 5;
		iVar1 = 3350;
		break;

	case 239:
		StringCopy(&Var2, "TORSO_P2_30_6", 16);
		iVar6 = 30;
		iVar7 = 6;
		iVar1 = 3400;
		break;

	case 240:
		StringCopy(&Var2, "TORSO_P2_30_7", 16);
		iVar6 = 30;
		iVar7 = 7;
		iVar1 = 3280;
		break;

	case 241:
		StringCopy(&Var2, "TORSO_P2_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		break;

	default: return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x107D9
void func_114(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 25;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 15;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P2_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P2_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 25;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P2_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P2_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 22;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P2_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 20;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P2_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 20;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P2_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 24;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P2_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 26;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P2_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 28;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P2_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 29;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P2_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 22;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P2_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 20;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "TORSO_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 35;
		break;

	case 19:
		StringCopy(&Var2, "TORSO_P2_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 22;
		break;

	case 20:
		StringCopy(&Var2, "TORSO_P2_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 25;
		break;

	case 21:
		StringCopy(&Var2, "TORSO_P2_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 38;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P2_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 23:
		StringCopy(&Var2, "TORSO_P2_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 40;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P2_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 40;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P2_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 40;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P2_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P2_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 500;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P2_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 560;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P2_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 600;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 650;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 500;
		break;

	case 33:
		StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 560;
		break;

	case 34:
		StringCopy(&Var2, "TORSO_P2_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 500;
		break;

	case 35:
		StringCopy(&Var2, "TORSO_P2_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 650;
		break;

	case 36:
		StringCopy(&Var2, "TORSO_P2_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 540;
		break;

	case 37:
		StringCopy(&Var2, "TORSO_P2_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 690;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P2_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 560;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P2_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 590;
		break;

	case 40:
		StringCopy(&Var2, "TORSO_P2_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 690;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P2_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 540;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P2_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 500;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 53:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P2_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P2_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P2_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 25;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P2_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 27;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P2_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 22;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P2_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 350;
		break;

	case 60:
		StringCopy(&Var2, "TORSO_P2_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 27;
		break;

	case 61:
		StringCopy(&Var2, "TORSO_P2_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 370;
		break;

	case 62:
		StringCopy(&Var2, "TORSO_P2_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 25;
		break;

	case 63:
		StringCopy(&Var2, "TORSO_P2_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 22;
		break;

	case 64:
		StringCopy(&Var2, "TORSO_P2_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 25;
		break;

	case 65:
		StringCopy(&Var2, "TORSO_P2_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		break;

	case 66:
		StringCopy(&Var2, "TORSO_P2_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 22;
		break;

	case 67:
		StringCopy(&Var2, "TORSO_P2_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 27;
		break;

	case 68:
		StringCopy(&Var2, "TORSO_P2_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 25;
		break;

	case 69:
		StringCopy(&Var2, "TORSO_P2_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 27;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 1;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P2_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P2_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 39;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P2_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 42;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P2_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 49;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P2_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 35;
		break;

	case 76:
		StringCopy(&Var2, "TORSO_P2_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P2_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P2_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P2_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P2_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 88;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P2_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 60;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P2_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P2_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 70;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P2_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P2_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P2_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 90;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P2_14_8", 16);
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 95;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P2_14_9", 16);
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 89:
		StringCopy(&Var2, "TORSO_P2_14_10", 16);
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 95;
		break;

	case 90:
		StringCopy(&Var2, "TORSO_P2_14_11", 16);
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 110;
		break;

	case 91:
		StringCopy(&Var2, "TORSO_P2_14_12", 16);
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 98;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P2_14_13", 16);
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 88;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P2_14_14", 16);
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 98;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P2_14_15", 16);
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 110;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P2_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P2_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P2_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 520;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 490;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 450;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 420;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 420;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 85;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 85;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 107:
		StringCopy(&Var2, "TORSO_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 68;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 68;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 78;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 85;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P2_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P2_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P2_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 78;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P2_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 75;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P2_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 75;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P2_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 75;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P2_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 78;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P2_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 78;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 40;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 32;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 32;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 32;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 38;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 29;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P2_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 32;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P2_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 29;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P2_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P2_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 32;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P2_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 35;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P2_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 32;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P2_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 40;
		break;

	default: return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x116D9
void func_115(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P2_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P2_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "HAIR_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "HAIR_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "HAIR_P2_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "HAIR_P2_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 9); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x11805
void func_116(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	default: func_100(iVar10, iParam0, 7); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x118FB
void func_117(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_135(iParam1); break;

	case 2: func_134(iParam1); break;

	case 3: func_130(iParam1); break;

	case 4: func_129(iParam1); break;

	case 6: func_128(iParam1); break;

	case 5: func_127(iParam1); break;

	case 8: func_126(iParam1); break;

	case 9: func_125(iParam1); break;

	case 10: func_124(iParam1); break;

	case 1: func_123(iParam1); break;

	case 7: func_122(iParam1); break;

	case 11: func_121(iParam1); break;

	case 12: func_120(iParam1); break;

	case 13: func_119(iParam1); break;

	case 14: func_118(iParam1); break;
	}
}

// Position - 0x119EB
void func_118(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 158:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	case 159:
		StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 4590;
		iVar8 = 2;
		break;

	case 160:
		StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 4100;
		iVar8 = 2;
		break;

	case 161:
		StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 3850;
		iVar8 = 2;
		break;

	case 162:
		StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 1850;
		iVar8 = 2;
		break;

	case 163:
		StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 5250;
		iVar8 = 2;
		break;

	case 164:
		StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 2700;
		iVar8 = 2;
		break;

	case 165:
		StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 3100;
		iVar8 = 2;
		break;

	case 166:
		StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 5050;
		iVar8 = 2;
		break;

	case 167:
		StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 2500;
		iVar8 = 2;
		break;

	case 168:
		StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 1950;
		iVar8 = 2;
		break;

	case 169:
		StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 3900;
		iVar8 = 2;
		break;

	case 170:
		StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 3550;
		iVar8 = 2;
		break;

	case 171:
		StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 4500;
		iVar8 = 2;
		break;

	case 172:
		StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 2700;
		iVar8 = 2;
		break;

	case 173:
		StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 3100;
		iVar8 = 2;
		break;

	case 174:
		StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 2950;
		iVar8 = 2;
		break;

	case 82:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P1_E1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P1_E1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P1_E1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P1_E1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 87:
		StringCopy(&Var2, "PROPS_P1_E1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 88:
		StringCopy(&Var2, "PROPS_P1_E1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P1_E1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P1_E1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P1_E1_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P1_E1_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P1_E2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P1_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P1_E4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 120;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P1_E4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 128;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P1_E4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 130;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P1_E4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P1_E4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P1_E4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 135;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P1_E4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P1_E5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P1_E5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 112;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P1_E5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P1_E5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 118;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P1_E5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P1_E5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 125;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P1_E5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 128;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P1_E5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "PROPS_P1_E5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "PROPS_P1_E5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "PROPS_P1_E6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 113:
		StringCopy(&Var2, "PROPS_P1_E6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 114:
		StringCopy(&Var2, "PROPS_P1_E6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 115:
		StringCopy(&Var2, "PROPS_P1_E6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 116:
		StringCopy(&Var2, "PROPS_P1_E6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 117:
		StringCopy(&Var2, "PROPS_P1_E6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 62;
		iVar8 = 10;
		break;

	case 118:
		StringCopy(&Var2, "PROPS_P1_E6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 119:
		StringCopy(&Var2, "PROPS_P1_E6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 120:
		StringCopy(&Var2, "PROPS_P1_E6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 121:
		StringCopy(&Var2, "PROPS_P1_E6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 72;
		iVar8 = 10;
		break;

	case 122:
		StringCopy(&Var2, "PROPS_P1_E7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 123:
		StringCopy(&Var2, "PROPS_P1_E7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 149;
		iVar8 = 10;
		break;

	case 124:
		StringCopy(&Var2, "PROPS_P1_E7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 139;
		iVar8 = 10;
		break;

	case 125:
		StringCopy(&Var2, "PROPS_P1_E7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 149;
		iVar8 = 10;
		break;

	case 126:
		StringCopy(&Var2, "PROPS_P1_E7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 135;
		iVar8 = 10;
		break;

	case 127:
		StringCopy(&Var2, "PROPS_P1_E7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 128:
		StringCopy(&Var2, "PROPS_P1_E7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 129:
		StringCopy(&Var2, "PROPS_P1_E7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 130:
		StringCopy(&Var2, "PROPS_P1_E7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 159;
		iVar8 = 10;
		break;

	case 131:
		StringCopy(&Var2, "PROPS_P1_E7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 132:
		StringCopy(&Var2, "PROPS_P1_E8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 198;
		iVar8 = 10;
		break;

	case 133:
		StringCopy(&Var2, "PROPS_P1_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 134:
		StringCopy(&Var2, "PROPS_P1_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 135:
		StringCopy(&Var2, "PROPS_P1_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 220;
		iVar8 = 10;
		break;

	case 136:
		StringCopy(&Var2, "PROPS_P1_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 190;
		iVar8 = 10;
		break;

	case 137:
		StringCopy(&Var2, "PROPS_P1_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 200;
		iVar8 = 10;
		break;

	case 138:
		StringCopy(&Var2, "PROPS_P1_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 208;
		iVar8 = 10;
		break;

	case 139:
		StringCopy(&Var2, "PROPS_P1_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 140:
		StringCopy(&Var2, "PROPS_P1_E9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 141:
		StringCopy(&Var2, "PROPS_P1_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 142:
		StringCopy(&Var2, "PROPS_P1_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 190;
		iVar8 = 10;
		break;

	case 143:
		StringCopy(&Var2, "PROPS_P1_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 144:
		StringCopy(&Var2, "PROPS_P1_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 145:
		StringCopy(&Var2, "PROPS_P1_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 168;
		iVar8 = 10;
		break;

	case 146:
		StringCopy(&Var2, "PROPS_P1_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 147:
		StringCopy(&Var2, "PROPS_P1_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 148:
		StringCopy(&Var2, "PROPS_P1_E9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 149:
		StringCopy(&Var2, "PROPS_P1_E9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 150:
		StringCopy(&Var2, "PROPS_P1_E10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 151:
		StringCopy(&Var2, "PROPS_P1_E10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 152:
		StringCopy(&Var2, "PROPS_P1_E10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 153:
		StringCopy(&Var2, "PROPS_P1_E10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 154:
		StringCopy(&Var2, "PROPS_P1_E10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 168;
		iVar8 = 10;
		break;

	case 155:
		StringCopy(&Var2, "PROPS_P1_E10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 156:
		StringCopy(&Var2, "PROPS_P1_E10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 160;
		iVar8 = 10;
		break;

	case 157:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 10:
		StringCopy(&Var2, "PROPS_P1_H0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 13:
		StringCopy(&Var2, "PROPS_P1_H3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "PROPS_P1_H19_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "PROPS_P1_H19_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "PROPS_P1_H19_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "PROPS_P1_H19_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "PROPS_P1_H19_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "PROPS_P1_H19_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "PROPS_P1_H19_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "PROPS_P1_H19_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "PROPS_P1_H19_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "PROPS_P1_H19_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "PROPS_P1_H19_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "PROPS_P1_H19_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "PROPS_P1_H19_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "PROPS_P1_H19_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "PROPS_P1_H19_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "PROPS_P1_H19_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 59:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 64:
		StringCopy(&Var2, "PROPS_P1_H19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 65:
		StringCopy(&Var2, "PROPS_P1_H19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 66:
		StringCopy(&Var2, "PROPS_P1_H19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 32;
		iVar8 = 0;
		break;

	case 67:
		StringCopy(&Var2, "PROPS_P1_H19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 35;
		iVar8 = 0;
		break;

	case 68:
		StringCopy(&Var2, "PROPS_P1_H19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 38;
		iVar8 = 0;
		break;

	case 69:
		StringCopy(&Var2, "PROPS_P1_H19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 42;
		iVar8 = 0;
		break;

	case 70:
		StringCopy(&Var2, "PROPS_P1_H19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 42;
		iVar8 = 0;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P1_H19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 40;
		iVar8 = 0;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P1_H19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 45;
		iVar8 = 0;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P1_H19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 48;
		iVar8 = 0;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P1_H19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P1_H19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P1_H19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P1_H19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P1_H19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P1_H19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 35;
		iVar8 = 0;
		break;

	case 80:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 81:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	default: func_100(iVar10, iParam0, 175); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12EB7
void func_119(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 9); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12FFD
void func_120(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P1_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "OUTFIT_P1_2", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "OUTFIT_P1_4", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P1_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P1_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P1_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "OUTFIT_P1_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P1_13", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P1_15", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "OUTFIT_P1_16", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P1_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P1_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P1_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P1_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P1_21", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P1_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P1_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P1_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P1_25", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P1_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P1_27", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P1_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4000;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P1_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P1_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P1_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4650;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P1_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P1_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P1_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4750;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P1_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4750;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P1_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5200;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P1_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5200;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P1_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P1_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P1_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P1_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P1_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P1_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P1_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P1_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P1_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P1_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P1_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P1_51", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P1_52", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P1_53", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P1_54", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 47); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13506
void func_121(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		StringCopy(&Var2, "JBIB_P1_1_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "JBIB_P1_1_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 7:
		StringCopy(&Var2, "JBIB_P1_1_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 8:
		StringCopy(&Var2, "JBIB_P1_1_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 9:
		StringCopy(&Var2, "JBIB_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "JBIB_P1_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 11:
		StringCopy(&Var2, "JBIB_P1_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 12:
		StringCopy(&Var2, "JBIB_P1_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 13:
		StringCopy(&Var2, "JBIB_P1_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 14:
		StringCopy(&Var2, "JBIB_P1_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		break;

	case 15:
		StringCopy(&Var2, "JBIB_P1_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		break;

	case 16:
		StringCopy(&Var2, "JBIB_P1_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		break;

	case 17:
		StringCopy(&Var2, "JBIB_P1_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		break;

	case 18:
		StringCopy(&Var2, "JBIB_P1_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		break;

	case 19:
		StringCopy(&Var2, "JBIB_P1_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		break;

	case 20:
		StringCopy(&Var2, "JBIB_P1_3_11", 16);
		iVar6 = 3;
		iVar7 = 11;
		break;

	case 21:
		StringCopy(&Var2, "JBIB_P1_3_12", 16);
		iVar6 = 3;
		iVar7 = 12;
		break;

	case 22:
		StringCopy(&Var2, "JBIB_P1_3_13", 16);
		iVar6 = 3;
		iVar7 = 13;
		break;

	case 23:
		StringCopy(&Var2, "JBIB_P1_3_14", 16);
		iVar6 = 3;
		iVar7 = 14;
		break;

	case 24:
		StringCopy(&Var2, "JBIB_P1_3_15", 16);
		iVar6 = 3;
		iVar7 = 15;
		break;

	case 25:
		StringCopy(&Var2, "JBIB_P1_3_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 26:
		StringCopy(&Var2, "JBIB_P1_3_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 27:
		StringCopy(&Var2, "JBIB_P1_3_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 28:
		StringCopy(&Var2, "JBIB_P1_3_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 29:
		StringCopy(&Var2, "JBIB_P1_3_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 30:
		StringCopy(&Var2, "JBIB_P1_3_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		break;

	case 31:
		StringCopy(&Var2, "JBIB_P1_3_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		break;

	case 32:
		StringCopy(&Var2, "JBIB_P1_3_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		break;

	case 33:
		StringCopy(&Var2, "JBIB_P1_3_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		break;

	case 34:
		StringCopy(&Var2, "JBIB_P1_3_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		break;

	case 35:
		StringCopy(&Var2, "JBIB_P1_3_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		break;

	case 36:
		StringCopy(&Var2, "JBIB_P1_3_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		break;

	case 37:
		StringCopy(&Var2, "JBIB_P1_3_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		break;

	case 38:
		StringCopy(&Var2, "JBIB_P1_3_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		break;

	case 39:
		StringCopy(&Var2, "JBIB_P1_3_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		break;

	case 40:
		StringCopy(&Var2, "JBIB_P1_3_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		break;

	case 41:
		StringCopy(&Var2, "JBIB_P1_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "JBIB_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "JBIB_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 44:
		StringCopy(&Var2, "JBIB_P1_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "JBIB_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "JBIB_P1_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 47:
		StringCopy(&Var2, "JBIB_P1_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "JBIB_P1_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 49:
		StringCopy(&Var2, "JBIB_P1_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 35;
		break;

	case 50:
		StringCopy(&Var2, "JBIB_P1_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 32;
		break;

	case 51:
		StringCopy(&Var2, "JBIB_P1_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 35;
		break;

	case 52:
		StringCopy(&Var2, "JBIB_P1_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 48;
		break;

	case 53:
		StringCopy(&Var2, "JBIB_P1_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 52;
		break;

	case 54:
		StringCopy(&Var2, "JBIB_P1_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 55:
		StringCopy(&Var2, "JBIB_P1_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 42;
		break;

	case 56:
		StringCopy(&Var2, "JBIB_P1_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 38;
		break;

	case 57:
		StringCopy(&Var2, "JBIB_P1_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 58:
		StringCopy(&Var2, "JBIB_P1_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 48;
		break;

	case 59:
		StringCopy(&Var2, "JBIB_P1_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 42;
		break;

	case 60:
		StringCopy(&Var2, "JBIB_P1_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 45;
		break;

	case 61:
		StringCopy(&Var2, "JBIB_P1_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 62:
		StringCopy(&Var2, "JBIB_P1_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 49;
		break;

	default: func_100(iVar10, iParam0, 63); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13B6E
void func_122(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 1); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13BE0
void func_123(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P1_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 5); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13CAF
void func_124(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 5;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 5;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 6;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 6;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 7;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 8;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 9;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 10;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 11;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 12;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 13;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 14;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 15;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 41:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 42:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 5;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 6;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 7;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 53); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x141A9
void func_125(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 6:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 7:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 8:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 12); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14339
void func_126(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC_P1_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "SPEC_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 195;
		break;

	case 12:
		StringCopy(&Var2, "SPEC_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 195;
		break;

	case 13:
		StringCopy(&Var2, "SPEC_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 195;
		break;

	case 14:
		StringCopy(&Var2, "SPEC_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 250;
		break;

	case 15:
		StringCopy(&Var2, "SPEC_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 250;
		break;

	case 16:
		StringCopy(&Var2, "SPEC_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 250;
		break;

	case 17:
		StringCopy(&Var2, "SPEC_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 195;
		break;

	case 18:
		StringCopy(&Var2, "SPEC_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 250;
		break;

	case 19:
		StringCopy(&Var2, "SPEC_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 250;
		break;

	case 20:
		StringCopy(&Var2, "SPEC_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 250;
		break;

	case 21:
		StringCopy(&Var2, "SPEC_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 250;
		break;

	case 22:
		StringCopy(&Var2, "SPEC_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 195;
		break;

	case 23:
		StringCopy(&Var2, "SPEC_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 250;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 27:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		break;

	case 29:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		break;

	case 30:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		break;

	case 31:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 32:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		break;

	case 33:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		break;

	case 34:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		break;

	case 35:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		break;

	case 36:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		break;

	case 37:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		break;

	case 38:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		break;

	case 39:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		break;

	case 40:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		break;

	case 41:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		break;

	case 42:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		break;

	case 43:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		break;

	case 45:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		break;

	case 46:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		break;

	case 47:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		break;

	case 48:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		break;

	case 49:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		break;

	case 50:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		break;

	case 51:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		break;

	case 52:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		break;

	case 53:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		break;

	case 54:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		break;

	case 55:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		break;

	case 56:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		break;

	case 57:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		break;

	case 58:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		break;

	case 59:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 60:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		break;

	case 61:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 62:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		break;

	case 63:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		break;

	case 64:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		break;

	case 65:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		break;

	case 66:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		break;

	case 67:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		break;

	case 68:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		break;

	case 69:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		break;

	case 70:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		break;

	case 71:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		break;

	case 72:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		break;

	case 73:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		break;

	case 74:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		break;

	case 75:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 76:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 77); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14B27
void func_127(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_100(iVar10, iParam0, 7); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14C2F
void func_128(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P1_00_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P1_00_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P1_00_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P1_00_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 89;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P1_00_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 45;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P1_00_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 35;
		break;

	case 6:
		StringCopy(&Var2, "FEET_P1_00_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 89;
		break;

	case 7:
		StringCopy(&Var2, "FEET_P1_00_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 8:
		StringCopy(&Var2, "FEET_P1_00_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 9:
		StringCopy(&Var2, "FEET_P1_00_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 10:
		StringCopy(&Var2, "FEET_P1_00_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 145;
		break;

	case 11:
		StringCopy(&Var2, "FEET_P1_00_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 145;
		break;

	case 12:
		StringCopy(&Var2, "FEET_P1_01_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P1_06_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "FEET_P1_06_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 180;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P1_06_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P1_06_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 200;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P1_06_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 220;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P1_06_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 235;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P1_08_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 870;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P1_08_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 870;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P1_08_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 870;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P1_08_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 1275;
		break;

	case 29:
		StringCopy(&Var2, "FEET_P1_08_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 1275;
		break;

	case 30:
		StringCopy(&Var2, "FEET_P1_08_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 1275;
		break;

	case 31:
		StringCopy(&Var2, "FEET_P1_08_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 1275;
		break;

	case 32:
		StringCopy(&Var2, "FEET_P1_08_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 1275;
		break;

	case 33:
		StringCopy(&Var2, "FEET_P1_08_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 1275;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "FEET_P1_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 50;
		break;

	case 38:
		StringCopy(&Var2, "FEET_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 50;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 50;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 50;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P1_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P1_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 50;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P1_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 50;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P1_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P1_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 25;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P1_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 20;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P1_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 24;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P1_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P1_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 27;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P1_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 29;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P1_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P1_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 25;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P1_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P1_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 28;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P1_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 30;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 155;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P1_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 155;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P1_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 165;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P1_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 170;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P1_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P1_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 165;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P1_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 170;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P1_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 160;
		break;

	case 73:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 720;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P1_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P1_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P1_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P1_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P1_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P1_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P1_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P1_16_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P1_16_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 84:
		StringCopy(&Var2, "FEET_P1_16_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 85:
		StringCopy(&Var2, "FEET_P1_16_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar1 = 700;
		break;

	case 86:
		StringCopy(&Var2, "FEET_P1_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 87:
		StringCopy(&Var2, "FEET_P1_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 88:
		StringCopy(&Var2, "FEET_P1_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 89:
		StringCopy(&Var2, "FEET_P1_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 90:
		StringCopy(&Var2, "FEET_P1_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 91:
		StringCopy(&Var2, "FEET_P1_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 92:
		StringCopy(&Var2, "FEET_P1_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 93:
		StringCopy(&Var2, "FEET_P1_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 94:
		StringCopy(&Var2, "FEET_P1_17_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 95:
		StringCopy(&Var2, "FEET_P1_17_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 96:
		StringCopy(&Var2, "FEET_P1_17_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 97:
		StringCopy(&Var2, "FEET_P1_17_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 98:
		StringCopy(&Var2, "FEET_P1_17_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 99:
		StringCopy(&Var2, "FEET_P1_17_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 100:
		StringCopy(&Var2, "FEET_P1_17_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 101:
		StringCopy(&Var2, "FEET_P1_17_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 102:
		StringCopy(&Var2, "FEET_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 103:
		StringCopy(&Var2, "FEET_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 104:
		StringCopy(&Var2, "FEET_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 105:
		StringCopy(&Var2, "FEET_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 106:
		StringCopy(&Var2, "FEET_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 107:
		StringCopy(&Var2, "FEET_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 108:
		StringCopy(&Var2, "FEET_P1_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 109:
		StringCopy(&Var2, "FEET_P1_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 110:
		StringCopy(&Var2, "FEET_P1_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 111:
		StringCopy(&Var2, "FEET_P1_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 112:
		StringCopy(&Var2, "FEET_P1_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 113:
		StringCopy(&Var2, "FEET_P1_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 114:
		StringCopy(&Var2, "FEET_P1_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 115:
		StringCopy(&Var2, "FEET_P1_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 116:
		StringCopy(&Var2, "FEET_P1_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 117:
		StringCopy(&Var2, "FEET_P1_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 118:
		StringCopy(&Var2, "FEET_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 119:
		StringCopy(&Var2, "FEET_P1_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 120:
		StringCopy(&Var2, "FEET_P1_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 121:
		StringCopy(&Var2, "FEET_P1_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 122:
		StringCopy(&Var2, "FEET_P1_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 123:
		StringCopy(&Var2, "FEET_P1_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 124:
		StringCopy(&Var2, "FEET_P1_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 125:
		StringCopy(&Var2, "FEET_P1_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 126:
		StringCopy(&Var2, "FEET_P1_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 127:
		StringCopy(&Var2, "FEET_P1_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 128:
		StringCopy(&Var2, "FEET_P1_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 129:
		StringCopy(&Var2, "FEET_P1_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 130:
		StringCopy(&Var2, "FEET_P1_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 131:
		StringCopy(&Var2, "FEET_P1_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 132:
		StringCopy(&Var2, "FEET_P1_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 133:
		StringCopy(&Var2, "FEET_P1_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 110;
		break;

	default: func_100(iVar10, iParam0, 134); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15B51
void func_129(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 32;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 38;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 44;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "LEGS_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "LEGS_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 15:
		StringCopy(&Var2, "LEGS_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 690;
		break;

	case 16:
		StringCopy(&Var2, "LEGS_P1_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 720;
		break;

	case 17:
		StringCopy(&Var2, "LEGS_P1_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 18:
		StringCopy(&Var2, "LEGS_P1_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 850;
		break;

	case 19:
		StringCopy(&Var2, "LEGS_P1_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 740;
		break;

	case 20:
		StringCopy(&Var2, "LEGS_P1_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 750;
		break;

	case 21:
		StringCopy(&Var2, "LEGS_P1_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 790;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P1_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 145;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P1_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 140;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P1_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 148;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P1_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P1_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 154;
		break;

	case 30:
		StringCopy(&Var2, "LEGS_P1_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 158;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "LEGS_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 820;
		break;

	case 34:
		StringCopy(&Var2, "LEGS_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 820;
		break;

	case 35:
		StringCopy(&Var2, "LEGS_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 850;
		break;

	case 36:
		StringCopy(&Var2, "LEGS_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 37:
		StringCopy(&Var2, "LEGS_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 920;
		break;

	case 38:
		StringCopy(&Var2, "LEGS_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 950;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 40:
		StringCopy(&Var2, "LEGS_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P1_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 45;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P1_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P1_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 45;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P1_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 48;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P1_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 52;
		break;

	case 46:
		StringCopy(&Var2, "LEGS_P1_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 55;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P1_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 58;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P1_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 60;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P1_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 58;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P1_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 62;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P1_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P1_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P1_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P1_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P1_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 180;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 180;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P1_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 118;
		break;

	case 80:
		StringCopy(&Var2, "LEGS_P1_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 120;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P1_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 128;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P1_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 128;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P1_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 130;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P1_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 145;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P1_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 138;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P1_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 132;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P1_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 148;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P1_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 118;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P1_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 118;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P1_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 118;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P1_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 129;
		break;

	case 92:
		StringCopy(&Var2, "LEGS_P1_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 135;
		break;

	case 93:
		StringCopy(&Var2, "LEGS_P1_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 135;
		break;

	case 94:
		StringCopy(&Var2, "LEGS_P1_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 118;
		break;

	case 95:
		StringCopy(&Var2, "LEGS_P1_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 118;
		break;

	case 96:
		StringCopy(&Var2, "LEGS_P1_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 118;
		break;

	case 97:
		StringCopy(&Var2, "LEGS_P1_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 55;
		break;

	case 98:
		StringCopy(&Var2, "LEGS_P1_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 55;
		break;

	case 99:
		StringCopy(&Var2, "LEGS_P1_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 59;
		break;

	case 100:
		StringCopy(&Var2, "LEGS_P1_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 59;
		break;

	case 101:
		StringCopy(&Var2, "LEGS_P1_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 102:
		StringCopy(&Var2, "LEGS_P1_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 65;
		break;

	case 103:
		StringCopy(&Var2, "LEGS_P1_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 69;
		break;

	case 104:
		StringCopy(&Var2, "LEGS_P1_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 69;
		break;

	case 105:
		StringCopy(&Var2, "LEGS_P1_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 106:
		StringCopy(&Var2, "LEGS_P1_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 107:
		StringCopy(&Var2, "LEGS_P1_22_10", 16);
		iVar6 = 22;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 108:
		StringCopy(&Var2, "LEGS_P1_22_11", 16);
		iVar6 = 22;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 109:
		StringCopy(&Var2, "LEGS_P1_22_12", 16);
		iVar6 = 22;
		iVar7 = 12;
		iVar1 = 65;
		break;

	case 110:
		StringCopy(&Var2, "LEGS_P1_22_13", 16);
		iVar6 = 22;
		iVar7 = 13;
		iVar1 = 65;
		break;

	case 111:
		StringCopy(&Var2, "LEGS_P1_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 38;
		break;

	case 112:
		StringCopy(&Var2, "LEGS_P1_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 38;
		break;

	case 113:
		StringCopy(&Var2, "LEGS_P1_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 28;
		break;

	case 114:
		StringCopy(&Var2, "LEGS_P1_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 34;
		break;

	case 115:
		StringCopy(&Var2, "LEGS_P1_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 36;
		break;

	case 116:
		StringCopy(&Var2, "LEGS_P1_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar1 = 32;
		break;

	default: func_100(iVar10, iParam0, 117); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x167FD
void func_130(int iParam0) {
	if (iParam0 < 107) {
		func_133(iParam0);
	}
	else if (iParam0 < 227) {
		func_132(iParam0);
	}
	else {
		func_131(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_100(3, iParam0, 318);
	}
}

// Position - 0x16842
void func_131(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 227:
		StringCopy(&Var2, "TORSO_P1_18_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 228:
		StringCopy(&Var2, "TORSO_P1_18_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar9 = 3;
		break;

	case 229:
		StringCopy(&Var2, "TORSO_P1_18_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar9 = 3;
		break;

	case 230:
		StringCopy(&Var2, "TORSO_P1_18_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 231:
		StringCopy(&Var2, "TORSO_P1_18_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 232:
		StringCopy(&Var2, "TORSO_P1_18_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 233:
		StringCopy(&Var2, "TORSO_P1_18_6", 16);
		iVar6 = 23;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 234:
		StringCopy(&Var2, "TORSO_P1_18_7", 16);
		iVar6 = 23;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 235:
		StringCopy(&Var2, "TORSO_P1_18_8", 16);
		iVar6 = 23;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 236:
		StringCopy(&Var2, "TORSO_P1_18_9", 16);
		iVar6 = 23;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 237:
		StringCopy(&Var2, "TORSO_P1_18_10", 16);
		iVar6 = 23;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 238:
		StringCopy(&Var2, "TORSO_P1_18_11", 16);
		iVar6 = 23;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 239:
		StringCopy(&Var2, "TORSO_P1_18_12", 16);
		iVar6 = 23;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 240:
		StringCopy(&Var2, "TORSO_P1_18_13", 16);
		iVar6 = 23;
		iVar7 = 13;
		iVar9 = 3;
		break;

	case 241:
		StringCopy(&Var2, "TORSO_P1_18_14", 16);
		iVar6 = 23;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 242:
		StringCopy(&Var2, "TORSO_P1_18_15", 16);
		iVar6 = 23;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 243:
		StringCopy(&Var2, "TORSO_P1_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 244:
		StringCopy(&Var2, "TORSO_P1_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 245:
		StringCopy(&Var2, "TORSO_P1_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 246:
		StringCopy(&Var2, "TORSO_P1_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 247:
		StringCopy(&Var2, "TORSO_P1_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 248:
		StringCopy(&Var2, "TORSO_P1_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 249:
		StringCopy(&Var2, "TORSO_P1_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 250:
		StringCopy(&Var2, "TORSO_P1_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 251:
		StringCopy(&Var2, "TORSO_P1_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 252:
		StringCopy(&Var2, "TORSO_P1_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 253:
		StringCopy(&Var2, "TORSO_P1_24_10", 16);
		iVar6 = 24;
		iVar7 = 10;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 254:
		StringCopy(&Var2, "TORSO_P1_24_11", 16);
		iVar6 = 24;
		iVar7 = 11;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 255:
		StringCopy(&Var2, "TORSO_P1_24_12", 16);
		iVar6 = 24;
		iVar7 = 12;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 256:
		StringCopy(&Var2, "TORSO_P1_24_13", 16);
		iVar6 = 24;
		iVar7 = 13;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 257:
		StringCopy(&Var2, "TORSO_P1_24_14", 16);
		iVar6 = 24;
		iVar7 = 14;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 258:
		StringCopy(&Var2, "TORSO_P1_24_15", 16);
		iVar6 = 24;
		iVar7 = 15;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 259:
		StringCopy(&Var2, "TORSO_P1_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 3;
		break;

	case 260:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar9 = 1;
		break;

	case 261:
		StringCopy(&Var2, "TORSO_P1_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 262:
		StringCopy(&Var2, "TORSO_P1_27_1", 16);
		iVar6 = 27;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 263:
		StringCopy(&Var2, "TORSO_P1_27_2", 16);
		iVar6 = 27;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 264:
		StringCopy(&Var2, "TORSO_P1_27_3", 16);
		iVar6 = 27;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 265:
		StringCopy(&Var2, "TORSO_P1_27_4", 16);
		iVar6 = 27;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 266:
		StringCopy(&Var2, "TORSO_P1_27_5", 16);
		iVar6 = 27;
		iVar7 = 5;
		iVar1 = 160;
		break;

	case 267:
		StringCopy(&Var2, "TORSO_P1_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 268:
		StringCopy(&Var2, "TORSO_P1_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 269:
		StringCopy(&Var2, "TORSO_P1_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 70;
		break;

	case 270:
		StringCopy(&Var2, "TORSO_P1_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 271:
		StringCopy(&Var2, "TORSO_P1_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 90;
		break;

	case 272:
		StringCopy(&Var2, "TORSO_P1_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 273:
		StringCopy(&Var2, "TORSO_P1_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 274:
		StringCopy(&Var2, "TORSO_P1_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 275:
		StringCopy(&Var2, "TORSO_P1_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 105;
		break;

	case 276:
		StringCopy(&Var2, "TORSO_P1_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 95;
		break;

	case 277:
		StringCopy(&Var2, "TORSO_P1_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 110;
		break;

	case 278:
		StringCopy(&Var2, "TORSO_P1_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 98;
		break;

	case 279:
		StringCopy(&Var2, "TORSO_P1_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 88;
		break;

	case 280:
		StringCopy(&Var2, "TORSO_P1_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 98;
		break;

	case 281:
		StringCopy(&Var2, "TORSO_P1_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 110;
		break;

	case 282:
		StringCopy(&Var2, "TORSO_P1_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 98;
		break;

	case 283:
		StringCopy(&Var2, "TORSO_P1_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 284:
		StringCopy(&Var2, "TORSO_P1_29_1", 16);
		iVar6 = 29;
		iVar7 = 1;
		iVar1 = 270;
		break;

	case 285:
		StringCopy(&Var2, "TORSO_P1_29_2", 16);
		iVar6 = 29;
		iVar7 = 2;
		iVar1 = 280;
		break;

	case 286:
		StringCopy(&Var2, "TORSO_P1_29_3", 16);
		iVar6 = 29;
		iVar7 = 3;
		iVar1 = 275;
		break;

	case 287:
		StringCopy(&Var2, "TORSO_P1_29_4", 16);
		iVar6 = 29;
		iVar7 = 4;
		iVar1 = 290;
		break;

	case 288:
		StringCopy(&Var2, "TORSO_P1_29_5", 16);
		iVar6 = 29;
		iVar7 = 5;
		iVar1 = 35;
		break;

	case 289:
		StringCopy(&Var2, "TORSO_P1_29_6", 16);
		iVar6 = 29;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 290:
		StringCopy(&Var2, "TORSO_P1_29_7", 16);
		iVar6 = 29;
		iVar7 = 7;
		iVar1 = 35;
		break;

	case 291:
		StringCopy(&Var2, "TORSO_P1_29_8", 16);
		iVar6 = 29;
		iVar7 = 8;
		iVar1 = 295;
		break;

	case 292:
		StringCopy(&Var2, "TORSO_P1_29_9", 16);
		iVar6 = 29;
		iVar7 = 9;
		iVar1 = 35;
		break;

	case 293:
		StringCopy(&Var2, "TORSO_P1_29_10", 16);
		iVar6 = 29;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 294:
		StringCopy(&Var2, "TORSO_P1_29_11", 16);
		iVar6 = 29;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 295:
		StringCopy(&Var2, "TORSO_P1_29_12", 16);
		iVar6 = 29;
		iVar7 = 12;
		break;

	case 296:
		StringCopy(&Var2, "TORSO_P1_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 1750;
		break;

	case 297:
		StringCopy(&Var2, "TORSO_P1_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 1920;
		break;

	case 298:
		StringCopy(&Var2, "TORSO_P1_30_2", 16);
		iVar6 = 30;
		iVar7 = 2;
		iVar1 = 1890;
		break;

	case 299:
		StringCopy(&Var2, "TORSO_P1_30_3", 16);
		iVar6 = 30;
		iVar7 = 3;
		iVar1 = 1850;
		break;

	case 300:
		StringCopy(&Var2, "TORSO_P1_30_4", 16);
		iVar6 = 30;
		iVar7 = 4;
		iVar1 = 1750;
		break;

	case 301:
		StringCopy(&Var2, "TORSO_P1_30_5", 16);
		iVar6 = 30;
		iVar7 = 5;
		iVar1 = 1990;
		break;

	case 302:
		StringCopy(&Var2, "TORSO_P1_30_6", 16);
		iVar6 = 30;
		iVar7 = 6;
		iVar1 = 1820;
		break;

	case 303:
		StringCopy(&Var2, "TORSO_P1_30_7", 16);
		iVar6 = 30;
		iVar7 = 7;
		iVar1 = 1990;
		break;

	case 304:
		StringCopy(&Var2, "TORSO_P1_30_8", 16);
		iVar6 = 30;
		iVar7 = 8;
		iVar1 = 1920;
		break;

	case 305:
		StringCopy(&Var2, "TORSO_P1_30_9", 16);
		iVar6 = 30;
		iVar7 = 9;
		iVar1 = 1850;
		break;

	case 306:
		StringCopy(&Var2, "TORSO_P1_30_10", 16);
		iVar6 = 30;
		iVar7 = 10;
		iVar1 = 1990;
		break;

	case 307:
		StringCopy(&Var2, "TORSO_P1_30_11", 16);
		iVar6 = 30;
		iVar7 = 11;
		iVar1 = 1790;
		break;

	case 308:
		StringCopy(&Var2, "TORSO_P1_30_12", 16);
		iVar6 = 30;
		iVar7 = 12;
		iVar1 = 1790;
		break;

	case 309:
		StringCopy(&Var2, "TORSO_P1_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		iVar1 = 69;
		break;

	case 310:
		StringCopy(&Var2, "TORSO_P1_31_1", 16);
		iVar6 = 31;
		iVar7 = 1;
		iVar1 = 75;
		break;

	case 311:
		StringCopy(&Var2, "TORSO_P1_31_2", 16);
		iVar6 = 31;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 312:
		StringCopy(&Var2, "TORSO_P1_31_3", 16);
		iVar6 = 31;
		iVar7 = 3;
		iVar1 = 79;
		break;

	case 313:
		StringCopy(&Var2, "TORSO_P1_31_4", 16);
		iVar6 = 31;
		iVar7 = 4;
		iVar1 = 79;
		break;

	case 314:
		StringCopy(&Var2, "TORSO_P1_31_5", 16);
		iVar6 = 31;
		iVar7 = 5;
		iVar1 = 89;
		break;

	case 315:
		StringCopy(&Var2, "TORSO_P1_31_6", 16);
		iVar6 = 31;
		iVar7 = 6;
		iVar1 = 85;
		break;

	case 316:
		StringCopy(&Var2, "TORSO_P1_31_7", 16);
		iVar6 = 31;
		iVar7 = 7;
		iVar1 = 85;
		break;

	case 317:
		StringCopy(&Var2, "TORSO_P1_31_8", 16);
		iVar6 = 31;
		iVar7 = 8;
		break;

	default: return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x172E6
void func_132(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 107:
		StringCopy(&Var2, "TORSO_P1_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 195;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P1_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 420;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P1_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 390;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P1_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 450;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P1_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 400;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P1_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 390;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P1_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 570;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P1_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 390;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P1_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 470;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P1_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 390;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P1_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 520;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P1_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 490;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P1_12_12", 16);
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 490;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P1_12_13", 16);
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 590;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P1_12_14", 16);
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 560;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P1_12_15", 16);
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 520;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P1_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P1_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P1_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P1_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 85;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P1_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 45;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P1_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 90;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P1_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 47;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P1_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 45;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P1_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 48;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P1_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 45;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P1_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 85;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P1_13_12", 16);
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 45;
		break;

	case 136:
		StringCopy(&Var2, "TORSO_P1_13_13", 16);
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 47;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P1_13_14", 16);
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P1_13_15", 16);
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 48;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P1_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 290;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P1_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 290;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P1_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 290;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P1_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 290;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P1_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 290;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P1_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 65;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P1_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 65;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 220;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 220;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 250;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 260;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 40;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 45;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 40;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 55;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P1_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 40;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P1_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 50;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P1_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P1_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P1_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 50;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P1_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P1_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P1_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P1_17_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P1_17_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		iVar1 = 50;
		break;

	case 170:
		StringCopy(&Var2, "TORSO_P1_17_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P1_17_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		iVar1 = 50;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P1_17_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P1_17_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P1_17_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		iVar1 = 50;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P1_17_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		iVar1 = 50;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar9 = 3;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar9 = 3;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 181:
		StringCopy(&Var2, "TORSO_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 182:
		StringCopy(&Var2, "TORSO_P1_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 183:
		StringCopy(&Var2, "TORSO_P1_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 184:
		StringCopy(&Var2, "TORSO_P1_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 185:
		StringCopy(&Var2, "TORSO_P1_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 186:
		StringCopy(&Var2, "TORSO_P1_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 187:
		StringCopy(&Var2, "TORSO_P1_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 188:
		StringCopy(&Var2, "TORSO_P1_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 189:
		StringCopy(&Var2, "TORSO_P1_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar9 = 3;
		break;

	case 190:
		StringCopy(&Var2, "TORSO_P1_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 191:
		StringCopy(&Var2, "TORSO_P1_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 192:
		StringCopy(&Var2, "TORSO_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 193:
		StringCopy(&Var2, "TORSO_P1_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 194:
		StringCopy(&Var2, "TORSO_P1_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 195:
		StringCopy(&Var2, "TORSO_P1_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 196:
		StringCopy(&Var2, "TORSO_P1_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 197:
		StringCopy(&Var2, "TORSO_P1_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 198:
		StringCopy(&Var2, "TORSO_P1_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 199:
		StringCopy(&Var2, "TORSO_P1_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 200:
		StringCopy(&Var2, "TORSO_P1_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 201:
		StringCopy(&Var2, "TORSO_P1_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 202:
		StringCopy(&Var2, "TORSO_P1_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 203:
		StringCopy(&Var2, "TORSO_P1_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 204:
		StringCopy(&Var2, "TORSO_P1_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 205:
		StringCopy(&Var2, "TORSO_P1_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 206:
		StringCopy(&Var2, "TORSO_P1_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 207:
		StringCopy(&Var2, "TORSO_P1_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 208:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 209:
		StringCopy(&Var2, "TORSO_P1_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 220;
		break;

	case 210:
		StringCopy(&Var2, "TORSO_P1_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 200;
		break;

	case 211:
		StringCopy(&Var2, "TORSO_P1_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 240;
		break;

	case 212:
		StringCopy(&Var2, "TORSO_P1_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 213:
		StringCopy(&Var2, "TORSO_P1_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 260;
		break;

	case 214:
		StringCopy(&Var2, "TORSO_P1_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 275;
		break;

	case 215:
		StringCopy(&Var2, "TORSO_P1_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 275;
		break;

	case 216:
		StringCopy(&Var2, "TORSO_P1_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 280;
		break;

	case 217:
		StringCopy(&Var2, "TORSO_P1_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 280;
		break;

	case 218:
		StringCopy(&Var2, "TORSO_P1_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 280;
		break;

	case 219:
		StringCopy(&Var2, "TORSO_P1_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 280;
		break;

	case 220:
		StringCopy(&Var2, "TORSO_P1_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 280;
		break;

	case 221:
		StringCopy(&Var2, "TORSO_P1_21_12", 16);
		iVar6 = 21;
		iVar7 = 12;
		iVar1 = 280;
		break;

	case 222:
		StringCopy(&Var2, "TORSO_P1_21_13", 16);
		iVar6 = 21;
		iVar7 = 13;
		iVar1 = 280;
		break;

	case 223:
		StringCopy(&Var2, "TORSO_P1_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 3100;
		iVar9 = 3;
		break;

	case 224:
		StringCopy(&Var2, "TORSO_P1_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 2800;
		iVar9 = 3;
		break;

	case 225:
		StringCopy(&Var2, "TORSO_P1_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 2500;
		iVar9 = 3;
		break;

	case 226:
		StringCopy(&Var2, "TORSO_P1_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 3000;
		iVar9 = 3;
		break;

	default: return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x180D7
void func_133(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 180;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P1_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 20;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P1_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 18;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P1_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 19;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P1_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 22;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P1_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 20;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P1_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 19;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P1_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 19;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P1_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 18;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P1_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 20;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P1_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 22;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P1_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 19;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P1_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 22;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 3;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 1;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 20;
		iVar9 = 2;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P1_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 22;
		iVar9 = 2;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P1_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 20;
		iVar9 = 2;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P1_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P1_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 23;
		iVar9 = 2;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P1_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P1_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 28;
		iVar9 = 2;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P1_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 26;
		iVar9 = 2;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P1_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 24;
		iVar9 = 2;
		break;

	case 33:
		StringCopy(&Var2, "TORSO_P1_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 27;
		iVar9 = 2;
		break;

	case 34:
		StringCopy(&Var2, "TORSO_P1_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 29;
		iVar9 = 2;
		break;

	case 35:
		StringCopy(&Var2, "TORSO_P1_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 28;
		iVar9 = 2;
		break;

	case 36:
		StringCopy(&Var2, "TORSO_P1_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 37:
		StringCopy(&Var2, "TORSO_P1_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 22;
		iVar9 = 2;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P1_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 27;
		iVar9 = 2;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P1_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 29;
		iVar9 = 2;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 43:
		StringCopy(&Var2, "TORSO_P1_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 44:
		StringCopy(&Var2, "TORSO_P1_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 45:
		StringCopy(&Var2, "TORSO_P1_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1090;
		iVar9 = 3;
		break;

	case 46:
		StringCopy(&Var2, "TORSO_P1_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 1090;
		iVar9 = 3;
		break;

	case 47:
		StringCopy(&Var2, "TORSO_P1_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 1120;
		iVar9 = 3;
		break;

	case 48:
		StringCopy(&Var2, "TORSO_P1_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 1120;
		iVar9 = 3;
		break;

	case 49:
		StringCopy(&Var2, "TORSO_P1_6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 1290;
		iVar9 = 3;
		break;

	case 50:
		StringCopy(&Var2, "TORSO_P1_6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 1290;
		iVar9 = 3;
		break;

	case 51:
		StringCopy(&Var2, "TORSO_P1_6_10", 16);
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 52:
		StringCopy(&Var2, "TORSO_P1_6_11", 16);
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 53:
		StringCopy(&Var2, "TORSO_P1_6_12", 16);
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P1_6_13", 16);
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P1_6_14", 16);
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P1_6_15", 16);
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P1_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 98;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P1_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 98;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P1_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 60:
		StringCopy(&Var2, "TORSO_P1_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 61:
		StringCopy(&Var2, "TORSO_P1_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 118;
		break;

	case 62:
		StringCopy(&Var2, "TORSO_P1_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 63:
		StringCopy(&Var2, "TORSO_P1_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 64:
		StringCopy(&Var2, "TORSO_P1_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 129;
		break;

	case 65:
		StringCopy(&Var2, "TORSO_P1_7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 125;
		break;

	case 66:
		StringCopy(&Var2, "TORSO_P1_7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 125;
		break;

	case 67:
		StringCopy(&Var2, "TORSO_P1_7_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 129;
		break;

	case 68:
		StringCopy(&Var2, "TORSO_P1_7_11", 16);
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 129;
		break;

	case 69:
		StringCopy(&Var2, "TORSO_P1_7_12", 16);
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 135;
		break;

	case 70:
		StringCopy(&Var2, "TORSO_P1_7_13", 16);
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 139;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P1_7_14", 16);
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 145;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P1_7_15", 16);
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 145;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P1_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P1_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 76:
		StringCopy(&Var2, "TORSO_P1_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P1_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 30;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P1_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 38;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P1_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 32;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P1_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 30;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P1_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 33;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P1_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 35;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P1_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P1_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 38;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P1_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 33;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P1_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 35;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P1_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 38;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P1_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 32;
		break;

	case 89:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 91:
		StringCopy(&Var2, "TORSO_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 59;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 25;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 29;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 27;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 25;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 28;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 29;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 27;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 29;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P1_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 32;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P1_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 30;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P1_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 28;
		break;

	default: return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18D16
void func_134(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P1_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 5:
		StringCopy(&Var2, "HAIR_P1_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 6:
		StringCopy(&Var2, "HAIR_P1_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 7:
		StringCopy(&Var2, "HAIR_P1_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 8:
		StringCopy(&Var2, "HAIR_P1_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 9:
		StringCopy(&Var2, "HAIR_P1_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 10:
		StringCopy(&Var2, "HAIR_P1_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 11:
		StringCopy(&Var2, "HAIR_P1_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 12:
		StringCopy(&Var2, "HAIR_P1_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 13:
		StringCopy(&Var2, "HAIR_P1_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "HAIR_P1_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 15:
		StringCopy(&Var2, "HAIR_P1_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 16:
		StringCopy(&Var2, "HAIR_P1_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 17:
		StringCopy(&Var2, "HAIR_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 18:
		StringCopy(&Var2, "HAIR_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 19:
		StringCopy(&Var2, "HAIR_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_100(iVar10, iParam0, 21); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18F8D
void func_135(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	default: func_100(iVar10, iParam0, 10); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x190C8
void func_136(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_153(iParam1); break;

	case 2: func_152(iParam1); break;

	case 3: func_149(iParam1); break;

	case 4: func_148(iParam1); break;

	case 6: func_147(iParam1); break;

	case 5: func_146(iParam1); break;

	case 8: func_145(iParam1); break;

	case 9: func_144(iParam1); break;

	case 10: func_143(iParam1); break;

	case 1: func_142(iParam1); break;

	case 7: func_141(iParam1); break;

	case 11: func_140(iParam1); break;

	case 12: func_139(iParam1); break;

	case 13: func_138(iParam1); break;

	case 14: func_137(iParam1); break;
	}
}

// Position - 0x191B8
void func_137(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "PROPS_P0_H1", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "PROPS_P0_H2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 11;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "PROPS_P0_H12", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "PROPS_P0_E0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 45;
		iVar8 = 10;
		break;

	case 59:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 61:
		StringCopy(&Var2, "PROPS_P0_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 62:
		StringCopy(&Var2, "PROPS_P0_E4", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 63:
		StringCopy(&Var2, "PROPS_P0_E4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 56;
		iVar8 = 10;
		break;

	case 64:
		StringCopy(&Var2, "PROPS_P0_E4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 65:
		StringCopy(&Var2, "PROPS_P0_E4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 66:
		StringCopy(&Var2, "PROPS_P0_E4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 62;
		iVar8 = 10;
		break;

	case 67:
		StringCopy(&Var2, "PROPS_P0_E4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 68:
		StringCopy(&Var2, "PROPS_P0_E4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 69:
		StringCopy(&Var2, "PROPS_P0_E4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 70:
		StringCopy(&Var2, "PROPS_P0_E5", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P0_E5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P0_E5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 72;
		iVar8 = 10;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P0_E5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 70;
		iVar8 = 10;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P0_E5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 74;
		iVar8 = 10;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P0_E5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 78;
		iVar8 = 10;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P0_E5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 82;
		iVar8 = 10;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P0_E5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 85;
		iVar8 = 10;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P0_E5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 85;
		iVar8 = 10;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P0_E5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar8 = 10;
		break;

	case 80:
		StringCopy(&Var2, "PROPS_P0_E6", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 81:
		StringCopy(&Var2, "PROPS_P0_E6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 82:
		StringCopy(&Var2, "PROPS_P0_E6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P0_E6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P0_E6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P0_E6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P0_E6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 87:
		StringCopy(&Var2, "PROPS_P0_E6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 88:
		StringCopy(&Var2, "PROPS_P0_E6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P0_E6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P0_E7", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P0_E8", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P0_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P0_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P0_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P0_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P0_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P0_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 235;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P0_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 245;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P0_E8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 250;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P0_E8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 275;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P0_E8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 280;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P0_E8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 295;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P0_E9", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 179;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P0_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 159;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P0_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P0_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P0_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P0_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P0_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "PROPS_P0_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 225;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	default: func_100(iVar10, iParam0, 113); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x19F15
void func_138(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_100(iVar10, iParam0, 10); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1A083
void func_139(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "OUTFIT_P0_1", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "OUTFIT_P0_4", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P0_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P0_8", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P0_9", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P0_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P0_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P0_14", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P0_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P0_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P0_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P0_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P0_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P0_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P0_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P0_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P0_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P0_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P0_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P0_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P0_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P0_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P0_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P0_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P0_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P0_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P0_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 840;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P0_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P0_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P0_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P0_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P0_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P0_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P0_44", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P0_45", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4000;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P0_46", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P0_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4600;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P0_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P0_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4400;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P0_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4400;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P0_51", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P0_52", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P0_53", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 47:
		StringCopy(&Var2, "OUTFIT_P0_54", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 48:
		StringCopy(&Var2, "OUTFIT_P0_55", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 49:
		StringCopy(&Var2, "OUTFIT_P0_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 53); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1A5F3
void func_140(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "JBIB_P0_02_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "JBIB_P0_02_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 4:
		StringCopy(&Var2, "JBIB_P0_02_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 5:
		StringCopy(&Var2, "JBIB_P0_02_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 6:
		StringCopy(&Var2, "JBIB_P0_02_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		break;

	case 7:
		StringCopy(&Var2, "JBIB_P0_02_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		break;

	case 8:
		StringCopy(&Var2, "JBIB_P0_03_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 9:
		StringCopy(&Var2, "JBIB_P0_03_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 10:
		StringCopy(&Var2, "JBIB_P0_03_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 420;
		break;

	case 11:
		StringCopy(&Var2, "JBIB_P0_03_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 420;
		break;

	case 12:
		StringCopy(&Var2, "JBIB_P0_03_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 490;
		break;

	case 13:
		StringCopy(&Var2, "JBIB_P0_03_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 490;
		break;

	case 14:
		StringCopy(&Var2, "JBIB_P0_03_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 540;
		break;

	case 15:
		StringCopy(&Var2, "JBIB_P0_03_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 540;
		break;

	case 16:
		StringCopy(&Var2, "JBIB_P0_03_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 550;
		break;

	case 17:
		StringCopy(&Var2, "JBIB_P0_03_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 540;
		break;

	case 18:
		StringCopy(&Var2, "JBIB_P0_04_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 19:
		StringCopy(&Var2, "JBIB_P0_04_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 850;
		break;

	case 20:
		StringCopy(&Var2, "JBIB_P0_04_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 890;
		break;

	case 21:
		StringCopy(&Var2, "JBIB_P0_04_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 22:
		StringCopy(&Var2, "JBIB_P0_04_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 920;
		break;

	case 23:
		StringCopy(&Var2, "JBIB_P0_04_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 920;
		break;

	case 24:
		StringCopy(&Var2, "JBIB_P0_04_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 950;
		break;

	case 25:
		StringCopy(&Var2, "JBIB_P0_04_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 980;
		break;

	case 26:
		StringCopy(&Var2, "JBIB_P0_04_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 1050;
		break;

	case 27:
		StringCopy(&Var2, "JBIB_P0_04_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 1100;
		break;

	case 28:
		StringCopy(&Var2, "JBIB_P0_05_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 1890;
		break;

	case 29:
		StringCopy(&Var2, "JBIB_P0_05_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 1820;
		break;

	case 30:
		StringCopy(&Var2, "JBIB_P0_05_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 1820;
		break;

	case 31:
		StringCopy(&Var2, "JBIB_P0_05_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 1850;
		break;

	case 32:
		StringCopy(&Var2, "JBIB_P0_05_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 1850;
		break;

	case 33:
		StringCopy(&Var2, "JBIB_P0_05_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 1900;
		break;

	case 34:
		StringCopy(&Var2, "JBIB_P0_05_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 1920;
		break;

	case 35:
		StringCopy(&Var2, "JBIB_P0_05_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 1980;
		break;

	case 36:
		StringCopy(&Var2, "JBIB_P0_05_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 2100;
		break;

	case 37:
		StringCopy(&Var2, "JBIB_P0_05_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 2120;
		break;

	case 38:
		StringCopy(&Var2, "JBIB_P0_05_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 2000;
		break;

	case 39:
		StringCopy(&Var2, "JBIB_P0_05_11", 16);
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 2200;
		break;

	case 40:
		StringCopy(&Var2, "JBIB_P0_05_12", 16);
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 2280;
		break;

	case 41:
		StringCopy(&Var2, "JBIB_P0_05_13", 16);
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 2300;
		break;

	case 42:
		StringCopy(&Var2, "JBIB_P0_05_14", 16);
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 2350;
		break;

	case 43:
		StringCopy(&Var2, "JBIB_P0_05_15", 16);
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 2280;
		break;

	case 44:
		StringCopy(&Var2, "JBIB_P0_06_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 45); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1AB1A
void func_141(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 1); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1AB8C
void func_142(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P0_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P0_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P0_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P0_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 5); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1AC5B
void func_143(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 5;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 6;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 7;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 5;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 4;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 5;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 6;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 1;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 2;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 3;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 4;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 5;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 6;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 7;
		break;

	case 36:
		StringCopy(&Var2, "DECL_P0_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		break;

	case 37:
		StringCopy(&Var2, "DECL_P0_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		break;

	case 38:
		StringCopy(&Var2, "DECL_P0_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		break;

	case 39:
		StringCopy(&Var2, "DECL_P0_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		break;

	case 40:
		StringCopy(&Var2, "DECL_P0_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		break;

	case 41:
		StringCopy(&Var2, "DECL_P0_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		break;

	case 42:
		StringCopy(&Var2, "DECL_P0_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		break;

	case 43:
		StringCopy(&Var2, "DECL_P0_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		break;

	default: func_100(iVar10, iParam0, 48); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1B10A
void func_144(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 11:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 12:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 13:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 14:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_100(iVar10, iParam0, 20); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1B364
void func_145(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "SPEC_P0_10", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "SPEC_P0_16", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_100(iVar10, iParam0, 24); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1B623
void func_146(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_100(iVar10, iParam0, 14); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1B7DD
void func_147(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P0_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 665;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 620;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 540;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 580;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 650;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P0_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P0_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P0_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 64;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P0_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 56;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P0_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 69;
		break;

	case 24:
		StringCopy(&Var2, "FEET_P0_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 59;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P0_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 62;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P0_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 74;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P0_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P0_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 72;
		break;

	case 29:
		StringCopy(&Var2, "FEET_P0_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 70;
		break;

	case 30:
		StringCopy(&Var2, "FEET_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 48;
		break;

	case 31:
		StringCopy(&Var2, "FEET_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 32:
		StringCopy(&Var2, "FEET_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 55;
		break;

	case 33:
		StringCopy(&Var2, "FEET_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 75;
		break;

	case 34:
		StringCopy(&Var2, "FEET_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 35:
		StringCopy(&Var2, "FEET_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 68;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P0_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P0_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P0_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P0_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P0_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P0_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P0_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P0_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P0_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P0_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P0_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P0_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P0_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P0_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P0_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P0_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P0_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P0_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P0_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P0_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P0_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P0_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P0_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P0_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P0_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P0_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P0_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P0_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P0_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P0_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P0_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P0_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 73:
		StringCopy(&Var2, "FEET_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P0_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P0_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P0_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P0_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P0_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P0_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P0_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P0_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P0_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P0_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 84:
		StringCopy(&Var2, "FEET_P0_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 85:
		StringCopy(&Var2, "FEET_P0_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 86:
		StringCopy(&Var2, "FEET_P0_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 110;
		break;

	case 87:
		StringCopy(&Var2, "FEET_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 720;
		break;

	case 88:
		StringCopy(&Var2, "FEET_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 89:
		StringCopy(&Var2, "FEET_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 90:
		StringCopy(&Var2, "FEET_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 91:
		StringCopy(&Var2, "FEET_P0_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 92:
		StringCopy(&Var2, "FEET_P0_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 93:
		StringCopy(&Var2, "FEET_P0_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 94:
		StringCopy(&Var2, "FEET_P0_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 95:
		StringCopy(&Var2, "FEET_P0_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 96:
		StringCopy(&Var2, "FEET_P0_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 97:
		StringCopy(&Var2, "FEET_P0_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 98:
		StringCopy(&Var2, "FEET_P0_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 700;
		break;

	default: func_100(iVar10, iParam0, 99); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1C323
void func_148(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "LEGS_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "LEGS_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "LEGS_P0_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "LEGS_P0_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "LEGS_P0_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "LEGS_P0_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	case 10:
		StringCopy(&Var2, "LEGS_P0_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		break;

	case 11:
		StringCopy(&Var2, "LEGS_P0_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		break;

	case 12:
		StringCopy(&Var2, "LEGS_P0_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		break;

	case 13:
		StringCopy(&Var2, "LEGS_P0_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "LEGS_P0_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		break;

	case 15:
		StringCopy(&Var2, "LEGS_P0_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "LEGS_P0_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P0_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P0_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 128;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P0_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 118;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P0_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P0_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P0_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 128;
		break;

	case 30:
		StringCopy(&Var2, "LEGS_P0_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 125;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P0_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 68;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P0_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 68;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P0_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 68;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P0_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 68;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P0_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 68;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P0_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P0_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 550;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P0_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P0_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 875;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P0_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P0_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 720;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P0_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 750;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P0_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 850;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 38;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 38;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 42;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 46;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P0_16_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar1 = 46;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P0_16_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar1 = 46;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P0_16_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar1 = 68;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P0_16_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar1 = 58;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P0_16_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P0_16_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		iVar1 = 68;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P0_16_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		iVar1 = 68;
		break;

	case 70:
		StringCopy(&Var2, "LEGS_P0_16_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		iVar1 = 42;
		break;

	case 71:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P0_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P0_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 250;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P0_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 250;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P0_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 290;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P0_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 270;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P0_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 270;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P0_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 15;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P0_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 12;
		break;

	case 80:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 118;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 95;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 98;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P0_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 140;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P0_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P0_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P0_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 130;
		break;

	case 92:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 93:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "LEGS_P0_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		break;

	case 96:
		StringCopy(&Var2, "LEGS_P0_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 97:
		StringCopy(&Var2, "LEGS_P0_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 98:
		StringCopy(&Var2, "LEGS_P0_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 99:
		StringCopy(&Var2, "LEGS_P0_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 52;
		break;

	case 100:
		StringCopy(&Var2, "LEGS_P0_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 52;
		break;

	case 101:
		StringCopy(&Var2, "LEGS_P0_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 55;
		break;

	case 102:
		StringCopy(&Var2, "LEGS_P0_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 55;
		break;

	case 103:
		StringCopy(&Var2, "LEGS_P0_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 104:
		StringCopy(&Var2, "LEGS_P0_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 58;
		break;

	case 105:
		StringCopy(&Var2, "LEGS_P0_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 58;
		break;

	case 106:
		StringCopy(&Var2, "LEGS_P0_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 60;
		break;

	case 107:
		StringCopy(&Var2, "LEGS_P0_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 108:
		StringCopy(&Var2, "LEGS_P0_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 62;
		break;

	case 109:
		StringCopy(&Var2, "LEGS_P0_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 62;
		break;

	case 110:
		StringCopy(&Var2, "LEGS_P0_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 65;
		break;

	case 111:
		StringCopy(&Var2, "LEGS_P0_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 65;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 29;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 113); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1CF54
void func_149(int iParam0) {
	if (iParam0 < 60) {
		func_151(iParam0);
	}
	else {
		func_150(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_100(3, iParam0, 181);
	}
}

// Position - 0x1CF88
void func_150(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 64:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 66:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 67:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "TORSO_P0_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P0_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 120;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P0_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P0_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 120;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P0_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 120;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P0_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 76:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 20;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 24;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 25;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P0_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P0_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P0_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P0_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 48;
		break;

	case 89:
		StringCopy(&Var2, "TORSO_P0_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 90:
		StringCopy(&Var2, "TORSO_P0_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 45;
		break;

	case 91:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P0_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P0_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 190;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P0_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 190;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P0_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 190;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P0_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 210;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 55;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P0_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P0_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 99;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P0_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 49;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P0_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P0_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P0_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P0_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 107:
		StringCopy(&Var2, "TORSO_P0_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 90;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P0_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 95;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P0_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 39;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P0_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 95;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P0_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 35;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P0_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 95;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 70;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P0_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 90;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P0_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P0_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P0_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P0_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 105;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P0_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 95;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P0_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 110;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P0_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 98;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P0_21_12", 16);
		iVar6 = 21;
		iVar7 = 12;
		iVar1 = 88;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P0_21_13", 16);
		iVar6 = 21;
		iVar7 = 13;
		iVar1 = 98;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P0_21_14", 16);
		iVar6 = 21;
		iVar7 = 14;
		iVar1 = 110;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P0_21_15", 16);
		iVar6 = 21;
		iVar7 = 15;
		iVar1 = 98;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P0_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P0_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 4950;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P0_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 4195;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P0_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 3195;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P0_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 2950;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P0_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 3950;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P0_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 3200;
		break;

	case 136:
		StringCopy(&Var2, "TORSO_P0_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 3200;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P0_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 3200;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P0_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 3200;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P0_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 3200;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P0_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar1 = 3200;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P0_23_6", 16);
		iVar6 = 23;
		iVar7 = 6;
		iVar1 = 3200;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P0_23_7", 16);
		iVar6 = 23;
		iVar7 = 7;
		iVar1 = 3200;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P0_23_8", 16);
		iVar6 = 23;
		iVar7 = 8;
		iVar1 = 3200;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P0_23_9", 16);
		iVar6 = 23;
		iVar7 = 9;
		iVar1 = 3200;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P0_23_10", 16);
		iVar6 = 23;
		iVar7 = 10;
		iVar1 = 3200;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P0_23_11", 16);
		iVar6 = 23;
		iVar7 = 11;
		iVar1 = 3200;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P0_23_12", 16);
		iVar6 = 23;
		iVar7 = 12;
		iVar1 = 3200;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P0_23_13", 16);
		iVar6 = 23;
		iVar7 = 13;
		iVar1 = 3200;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P0_23_14", 16);
		iVar6 = 23;
		iVar7 = 14;
		iVar1 = 3200;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P0_23_15", 16);
		iVar6 = 23;
		iVar7 = 15;
		iVar1 = 3200;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P0_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 1350;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P0_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 1400;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P0_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 1200;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P0_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 1250;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P0_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 1350;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P0_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 1300;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P0_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 1380;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P0_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 1340;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P0_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 1380;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P0_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 1250;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P0_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar1 = 840;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P0_25_1", 16);
		iVar6 = 25;
		iVar7 = 1;
		iVar1 = 840;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P0_25_2", 16);
		iVar6 = 25;
		iVar7 = 2;
		iVar1 = 840;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P0_25_3", 16);
		iVar6 = 25;
		iVar7 = 3;
		iVar1 = 840;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P0_25_4", 16);
		iVar6 = 25;
		iVar7 = 4;
		iVar1 = 840;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P0_25_5", 16);
		iVar6 = 25;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P0_25_6", 16);
		iVar6 = 25;
		iVar7 = 6;
		iVar1 = 840;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P0_25_7", 16);
		iVar6 = 25;
		iVar7 = 7;
		iVar1 = 840;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P0_26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 170:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P0_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P0_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 130;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P0_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P0_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P0_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P0_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 320;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P0_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		iVar1 = 59;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P0_31_1", 16);
		iVar6 = 31;
		iVar7 = 1;
		iVar1 = 55;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P0_31_2", 16);
		iVar6 = 31;
		iVar7 = 2;
		iVar1 = 59;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P0_31_3", 16);
		iVar6 = 31;
		iVar7 = 3;
		iVar1 = 49;
		break;

	default: return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1DD1B
void func_151(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 3500;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P0_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P0_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P0_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P0_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P0_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P0_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P0_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P0_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P0_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P0_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 20;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 18;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 22;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 25;
		break;

	case 21:
		StringCopy(&Var2, "TORSO_P0_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 19;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P0_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 20;
		break;

	case 23:
		StringCopy(&Var2, "TORSO_P0_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P0_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 18;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P0_2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 39;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P0_2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 32;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P0_2_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P0_2_11", 16);
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P0_2_12", 16);
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 210;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P0_2_13", 16);
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 250;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P0_2_14", 16);
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 290;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P0_2_15", 16);
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 310;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P0_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P0_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 40:
		StringCopy(&Var2, "TORSO_P0_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P0_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P0_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 43:
		StringCopy(&Var2, "TORSO_P0_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 160;
		break;

	case 44:
		StringCopy(&Var2, "TORSO_P0_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "TORSO_P0_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 52;
		break;

	case 46:
		StringCopy(&Var2, "TORSO_P0_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 52;
		break;

	case 47:
		StringCopy(&Var2, "TORSO_P0_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 55;
		break;

	case 48:
		StringCopy(&Var2, "TORSO_P0_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 55;
		break;

	case 49:
		StringCopy(&Var2, "TORSO_P0_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 58;
		break;

	case 50:
		StringCopy(&Var2, "TORSO_P0_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 51:
		StringCopy(&Var2, "TORSO_P0_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 62;
		break;

	case 52:
		StringCopy(&Var2, "TORSO_P0_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 65;
		break;

	case 53:
		StringCopy(&Var2, "TORSO_P0_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 65;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P0_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 68;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P0_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 68;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P0_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 55;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P0_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 62;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P0_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 58;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P0_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 58;
		break;

	default: return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1E39D
void func_152(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P0_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P0_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P0_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P0_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	default: func_100(iVar10, iParam0, 6); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1E482
void func_153(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	default: func_100(iVar10, iParam0, 7); return;
	}
	func_93(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1E578
void func_154() {
	Global_69523[0 /*14*/].f_1 = -1;
	Global_69523[0 /*14*/].f_2 = -1;
	Global_69523[0 /*14*/].f_5 = -1;
	Global_69523[0 /*14*/].f_3 = -1;
	Global_69523[0 /*14*/].f_4 = -1;
	Global_69523[0 /*14*/].f_7 = 0;
	Global_69523[0 /*14*/].f_6 = 0;
	Global_69523[0 /*14*/].f_13 = -1;
	Global_69523[0 /*14*/].f_12 = 0;
	Global_69523[0 /*14*/] = 0;
	StringCopy(&Global_69523[0 /*14*/].f_8, "NO_LABEL", 16);
}

// Position - 0x1E5F0
bool func_155(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var *uVar5;
	var uVar22;
	int iVar32;
	var uVar33;

	if (ped::is_ped_injured(iParam0)) {
		return false;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_90(iVar0, iParam1, iParam2)};
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return false;
	}
	if (iParam1 == 12) {
		uVar5 = {func_86(iVar0, iParam2)};
		iVar2 = 0;
		while (iVar2 <= 14) {
			if (uVar5[iVar2] != -99 && iVar2 != 12 && iVar2 != 14) {
				if (!func_155(iParam0, iVar2, uVar5[iVar2])) {
					if (iVar2 == 13) {
						uVar22 = {func_83(iVar0, uVar5[iVar2])};
						iVar3 = 0;
						while (iVar3 <= 8) {
							if (!func_155(iParam0, 14, uVar22[iVar3])) {
								iVar4 = 0;
								while (iVar4 <= 19) {
									Global_69523[2 /*14*/] = {func_90(iVar0, 14, iVar4)};
									if (Global_69523[2 /*14*/].f_12 == iVar3) {
										if (func_155(iParam0, 14, iVar4)) {
											if (!func_46(iVar0, iParam2, 14, iVar4, &uVar5, &Global_69523[2 /*14*/])) {
												return false;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else {
						iVar1 = func_71(iParam0, iVar2);
						Global_69523[2 /*14*/] = {func_90(iVar0, iVar2, iVar1)};
						if (!func_46(iVar0, iParam2, iVar2, iVar1, &uVar5, &Global_69523[2 /*14*/])) {
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13) {
		uVar33 = {func_83(iVar0, iParam2)};
		iVar32 = 0;
		while (iVar32 <= 8) {
			if (!func_155(iParam0, 14, uVar33[iVar32])) {
				return false;
			}
			iVar32++;
		}
		return true;
	}
	else if (iParam1 == 14) {
		if (ped::get_ped_prop_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_3 &&
			(ped::get_ped_prop_texture_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_4 ||
			 Global_69523[1 /*14*/].f_3 == -1)) {
			return true;
		}
	}
	else if (Global_69523[1 /*14*/].f_3 == ped::get_ped_drawable_variation(iParam0, func_82(iParam1)) &&
			 Global_69523[1 /*14*/].f_4 == ped::get_ped_texture_variation(iParam0, func_82(iParam1))) {
		return true;
	}
	return false;
}

// Position - 0x1E848
int func_156(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_157(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x1E885
int func_157(int iParam0) {
	if (func_158(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x1E8AF
bool func_158(int iParam0) { return iParam0 < 3; }

// Position - 0x1E8BB
void func_159(char *sParam0, int iParam1) {
	stats::stat_set_gxt_label(joaat("sp_last_mission_name"), sParam0, 1);
	if (gameplay::is_bit_set(iParam1, 0)) {
		stats::stat_set_gxt_label(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (gameplay::is_bit_set(iParam1, 1)) {
		stats::stat_set_gxt_label(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (gameplay::is_bit_set(iParam1, 2)) {
		stats::stat_set_gxt_label(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

// Position - 0x1E915
int func_160() {
	func_161();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x1E95B
void func_161() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_157(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_156(player::player_ped_id());
			if (func_158(iVar0) && (!func_98(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_158(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x1EA58
struct<2> func_162(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_163(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x1EA8F
struct<2>
func_163(int iParam0) {
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

//Position - 0x1EEDB
void func_164(int iParam0, int iParam1)
{
	Global_69970 = iParam1;
	if (Global_55816) {
		return;
	}
	if (Global_55843) {
		Global_55843 = 0;
		return;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) > 0) {
		if (Global_55816) {
		}
		Global_55842 = iParam0;
		Global_55816 = 1;
		Global_55827 = 1;
	}
}

// Position - 0x1EF25
void func_165(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		ped::set_ped_config_flag(player::player_ped_id(), 32, 1);
		ped::set_ped_config_flag(player::player_ped_id(), 250, 1);
	}
	player::set_player_control(player::player_id(), 1, 0);
	player::set_wanted_level_multiplier(1f);
	player::set_max_wanted_level(5);
	player::set_all_random_peds_flee(player::player_id(), 0);
	player::set_player_weapon_damage_modifier(player::player_id(), 1f);
	player::set_player_weapon_defense_modifier(player::player_id(), 1f);
	ui::display_hud(1);
	ui::display_radar(1);
	cam::set_widescreen_borders(0, 0);
	gameplay::set_time_scale(1f);
	func_176();
	func_175(1, 1);
	func_174();
	func_172();
	func_171(30000);
	if (iParam1 == 1) {
		func_166(iParam0, iParam2, iParam3);
	}
	ui::set_mission_name(0, 0);
}

// Position - 0x1EFC2
void func_166(int iParam0, int iParam1, int iParam2) {
	struct<4> Var0;
	char *sVar32;

	if (iParam0 != -1) {
		func_168(iParam0, &Var0);
		MemCopy(&sVar32, {func_163(iParam0)}, 4);
		stats::playstats_mission_checkpoint(&sVar32, 0, Global_91528, 0);
		func_167(&sVar32, Var0.f_3, Global_91528, iParam1, iParam2);
	}
}

// Position - 0x1F001
void func_167(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (gameplay::is_string_null_or_empty(&Global_88894)) {
		return;
	}
	if (gameplay::compare_strings(sParam0, &Global_88894, 0, -1) != 0) {
		return;
	}
	stats::playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_86001);
	StringCopy(&Global_88894, "", 64);
}

// Position - 0x1F045
void func_168(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_169(uParam1, "Abigail1", func_162(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
		break;

	case 1:
		func_169(uParam1, "Abigail2", func_162(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
		break;

	case 2:
		func_169(uParam1, "Barry1", func_162(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_170(iParam0), 1, 0);
		break;

	case 3:
		func_169(uParam1, "Barry2", func_162(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_170(iParam0), 1, 1);
		break;

	case 4:
		func_169(uParam1, "Barry3", func_162(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 5:
		func_169(uParam1, "Barry3A", func_162(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 6:
		func_169(uParam1, "Barry3C", func_162(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 7:
		func_169(uParam1, "Barry4", func_162(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_170(iParam0), 0, 0);
		break;

	case 8:
		func_169(uParam1, "Dreyfuss1", func_162(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 9:
		func_169(uParam1, "Epsilon1", func_162(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 10:
		func_169(uParam1, "Epsilon2", func_162(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
		break;

	case 11:
		func_169(uParam1, "Epsilon3", func_162(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 12:
		func_169(uParam1, "Epsilon4", func_162(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 13:
		func_169(uParam1, "Epsilon5", func_162(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
		break;

	case 14:
		func_169(uParam1, "Epsilon6", func_162(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 15:
		func_169(uParam1, "Epsilon7", func_162(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 16:
		func_169(uParam1, "Epsilon8", func_162(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
		break;

	case 17:
		func_169(uParam1, "Extreme1", func_162(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 18:
		func_169(uParam1, "Extreme2", func_162(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 19:
		func_169(uParam1, "Extreme3", func_162(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 20:
		func_169(uParam1, "Extreme4", func_162(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 21:
		func_169(uParam1, "Fanatic1", func_162(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_170(iParam0), 1, 0);
		break;

	case 22:
		func_169(uParam1, "Fanatic2", func_162(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_170(iParam0), 1, 0);
		break;

	case 23:
		func_169(uParam1, "Fanatic3", func_162(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_170(iParam0), 0, 1);
		break;

	case 24:
		func_169(uParam1, "Hao1", func_162(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_170(iParam0), 0, 1);
		break;

	case 25:
		func_169(uParam1, "Hunting1", func_162(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 26:
		func_169(uParam1, "Hunting2", func_162(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 27:
		func_169(uParam1, "Josh1", func_162(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
		break;

	case 28:
		func_169(uParam1, "Josh2", func_162(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
		break;

	case 29:
		func_169(uParam1, "Josh3", func_162(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
		break;

	case 30:
		func_169(uParam1, "Josh4", func_162(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_170(iParam0), 1, 0);
		break;

	case 31:
		func_169(uParam1, "Maude1", func_162(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 32:
		func_169(uParam1, "Minute1", func_162(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 33:
		func_169(uParam1, "Minute2", func_162(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 34:
		func_169(uParam1, "Minute3", func_162(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 35:
		func_169(uParam1, "MrsPhilips1", func_162(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 36:
		func_169(uParam1, "MrsPhilips2", func_162(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_170(iParam0), 0, 0);
		break;

	case 37:
		func_169(uParam1, "Nigel1", func_162(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_170(iParam0), 1, 0);
		break;

	case 38:
		func_169(uParam1, "Nigel1A", func_162(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
		break;

	case 39:
		func_169(uParam1, "Nigel1B", func_162(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
		break;

	case 40:
		func_169(uParam1, "Nigel1C", func_162(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
		break;

	case 41:
		func_169(uParam1, "Nigel1D", func_162(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
		break;

	case 42:
		func_169(uParam1, "Nigel2", func_162(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
		break;

	case 43:
		func_169(uParam1, "Nigel3", func_162(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
		break;

	case 44:
		func_169(uParam1, "Omega1", func_162(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 45:
		func_169(uParam1, "Omega2", func_162(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 46:
		func_169(uParam1, "Paparazzo1", func_162(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 47:
		func_169(uParam1, "Paparazzo2", func_162(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 48:
		func_169(uParam1, "Paparazzo3", func_162(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 49:
		func_169(uParam1, "Paparazzo3A", func_162(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 50:
		func_169(uParam1, "Paparazzo3B", func_162(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 51:
		func_169(uParam1, "Paparazzo4", func_162(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 52:
		func_169(uParam1, "Rampage1", func_162(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 54:
		func_169(uParam1, "Rampage3", func_162(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_170(iParam0), 1, 0);
		break;

	case 55:
		func_169(uParam1, "Rampage4", func_162(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_170(iParam0), 1, 0);
		break;

	case 56:
		func_169(uParam1, "Rampage5", func_162(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
		break;

	case 53:
		func_169(uParam1, "Rampage2", func_162(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
		break;

	case 57:
		func_169(uParam1, "TheLastOne", func_162(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 58:
		func_169(uParam1, "Tonya1", func_162(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 59:
		func_169(uParam1, "Tonya2", func_162(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	case 60:
		func_169(uParam1, "Tonya3", func_162(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_170(iParam0), 0, 1);
		break;

	case 61:
		func_169(uParam1, "Tonya4", func_162(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_170(iParam0), 0, 1);
		break;

	case 62:
		func_169(uParam1, "Tonya5", func_162(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x201FB
void func_169(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x2028C
int func_170(int iParam0) {
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

// Position - 0x205D2
void func_171(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0x205E4
void func_172() {
	if (Global_89136) {
		func_161();
		graphics::_0xBF59707B3E5ED531(func_173(Global_101700.f_2095.f_539.f_3549));
	}
	else {
		graphics::_0xBF59707B3E5ED531("");
	}
}

// Position - 0x20616
char *func_173(var uParam0) {
	uParam0 = uParam0;
	return "";
}

// Position - 0x20625
void func_174() {
	vector3 vVar0[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		network::network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		network::_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

// Position - 0x20668
void func_175(int iParam0, int iParam1) {
	Global_89131 = iParam0;
	Global_89132 = iParam1;
}

// Position - 0x2067C
void func_176() {
	if (Global_69956 != 6) {
	}
	if (Global_69961) {
		ui::reset_hud_component_values(15);
		Global_69961 = 0;
		Global_17290.f_7899 = 0;
	}
	Global_69956 = 6;
	Global_69958 = -1;
	Global_69957 = -1;
}

// Position - 0x206B4
void func_177(int *iParam0) {
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

// Position - 0x206F1
void func_178(int iParam0, int iParam1) {
	struct<26> Var0;
	int iVar32;
	bool bVar33;
	int iVar34;
	struct<6> Var35;
	int iVar67;
	int iVar68;
	struct<6> Var69;
	int iVar101;
	int iVar102;

	func_168(iParam0, &Var0);
	if (!gameplay::are_strings_equal(&Var0.f_16, "")) {
		while (!func_206(&Var0.f_16)) {
			system::wait(0);
		}
	}
	if (Var0.f_22 != 0) {
		func_205(Var0.f_22, 0);
	}
	func_196(iParam0, Global_69971);
	if (!iParam1) {
		iVar32 = func_195(iParam0);
		if (iVar32 != 0) {
			if (!audio::get_number_of_passenger_voice_variations(iVar32)) {
				audio::unlock_mission_news_story(iVar32);
			}
		}
	}
	if (Var0.f_24 != -1) {
		bVar33 = true;
		if (Var0.f_5 != 4) {
			iVar34 = 0;
			while (iVar34 < 63) {
				iVar67 = iVar34;
				if (iVar67 != iParam0) {
					func_168(iVar67, &Var35);
					if (Var35.f_5 == Var0.f_5) {
						if (!gameplay::is_bit_set(Global_101700.f_17533[iVar67 /*6*/], 3)) {
							bVar33 = false;
						}
						if (!gameplay::is_bit_set(Global_101700.f_17533[iVar67 /*6*/], 0)) {
							func_183(iVar67);
						}
					}
				}
				iVar34++;
			}
		}
		if (bVar33) {
			func_183(Var0.f_24);
		}
	}
	else if (Var0.f_25 != 4) {
		iVar68 = 0;
		while (iVar68 < 63) {
			iVar101 = iVar68;
			if (iVar101 != iParam0) {
				func_168(iVar101, &Var69);
				if (Var69.f_5 == Var0.f_25) {
					func_183(iVar101);
				}
			}
			iVar68++;
		}
	}
	if (!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3)) {
		gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 3);
		Global_100787[iParam0 /*10*/].f_5 = 1;
		func_180(iParam0);
		iVar102 = func_179(iParam0);
		if (iVar102 != 322) {
			func_13(iVar102, 0, 0);
		}
	}
}

// Position - 0x20877
int func_179(int iParam0) {
	switch (iParam0) {
	case 0: return 109;

	case 1: return 322;

	case 2: return 69;

	case 3: return 70;

	case 4: return 322;

	case 5: return 71;

	case 6: return 71;

	case 7: return 72;

	case 8: return 68;

	case 9: return 73;

	case 10: return 74;

	case 11: return 75;

	case 12: return 76;

	case 13: return 77;

	case 14: return 78;

	case 15: return 79;

	case 16: return 80;

	case 17: return 81;

	case 18: return 82;

	case 19: return 83;

	case 20: return 84;

	case 21: return 85;

	case 22: return 86;

	case 23: return 87;

	case 24: return 106;

	case 25: return 178;

	case 26: return 179;

	case 27: return 88;

	case 28: return 89;

	case 29: return 90;

	case 30: return 91;

	case 31: return 107;

	case 32: return 92;

	case 33: return 93;

	case 34: return 94;

	case 35: return 110;

	case 36: return 111;

	case 37: return 95;

	case 38: return 96;

	case 39: return 97;

	case 40: return 98;

	case 41: return 99;

	case 42: return 100;

	case 43: return 101;

	case 44: return 66;

	case 45: return 67;

	case 46: return 102;

	case 47: return 103;

	case 48: return 322;

	case 49: return 104;

	case 50: return 104;

	case 51: return 105;

	case 52: return 194;

	case 53: return 195;

	case 54: return 196;

	case 55: return 197;

	case 56: return 198;

	case 57: return 108;

	case 58: return 208;

	case 59: return 209;

	case 60: return 210;

	case 61: return 211;

	case 62: return 212;
	}
	return 322;
}

// Position - 0x20BFE
void func_180(int iParam0) {
	func_182(iParam0, 1);
	Global_101700.f_17533[iParam0 /*6*/].f_3 = func_181();
	Global_101700.f_17533.f_380++;
}

// Position - 0x20C34
int func_181() { return Global_101700.f_8975.f_21 + Global_101700.f_17533.f_380; }

// Position - 0x20C50
void func_182(var uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 55;
	if (iParam1) {
		iVar1 = uParam0;
		if (iVar1 == 46) {
			iVar0 = 35;
		}
		else if (iVar1 == 49) {
			iVar0 = 36;
		}
		else if (iVar1 == 50) {
			iVar0 = 37;
		}
		else if (iVar1 == 8) {
			iVar0 = 38;
		}
		else if (iVar1 == 16) {
			iVar0 = 39;
		}
		else if (iVar1 == 38) {
			iVar0 = 40;
		}
		else if (iVar1 == 39) {
			iVar0 = 41;
		}
		else if (iVar1 == 40) {
			iVar0 = 42;
		}
		else if (iVar1 == 41) {
			iVar0 = 43;
		}
		else if (iVar1 == 42) {
			iVar0 = 44;
		}
		else if (iVar1 == 43) {
			iVar0 = 45;
		}
		else if (iVar1 == 20) {
			iVar0 = 46;
		}
	}
	else {
		iVar2 = uParam0;
		if (iVar2 == 53) {
			iVar0 = 0;
		}
		else if (iVar2 == 1) {
			iVar0 = 1;
		}
		else if (iVar2 == 2) {
			iVar0 = 2;
		}
		else if (iVar2 == 17) {
			iVar0 = 3;
		}
		else if (iVar2 == 19) {
			iVar0 = 4;
		}
		else if (iVar2 == 43) {
			iVar0 = 5;
		}
		else if (iVar2 == 44) {
			iVar0 = 6;
		}
		else if (iVar2 == 63) {
			iVar0 = 8;
		}
		else if (iVar2 == 12) {
			iVar0 = 9;
		}
		else if (iVar2 == 13) {
			iVar0 = 10;
		}
		else if (iVar2 == 64) {
			iVar0 = 11;
		}
		else if (iVar2 == 20) {
			iVar0 = 12;
		}
		else if (iVar2 == 30) {
			iVar0 = 13;
		}
		else if (iVar2 == 31) {
			iVar0 = 14;
		}
		else if (iVar2 == 41) {
			iVar0 = 15;
		}
		else if (iVar2 == 38) {
			iVar0 = 16;
		}
		else if (iVar2 == 9) {
			iVar0 = 18;
		}
		else if (iVar2 == 59) {
			iVar0 = 19;
		}
		else if (iVar2 == 45) {
			iVar0 = 20;
		}
		else if (iVar2 == 10) {
			iVar0 = 21;
		}
		else if (iVar2 == 14) {
			iVar0 = 22;
		}
		else if (iVar2 == 16) {
			iVar0 = 24;
		}
		else if (iVar2 == 39) {
			iVar0 = 25;
		}
		else if (iVar2 == 46) {
			iVar0 = 26;
		}
		else if (iVar2 == 60) {
			iVar0 = 27;
		}
		else if (iVar2 == 22) {
			iVar0 = 28;
		}
		else if (iVar2 == 48) {
			iVar0 = 30;
		}
		else if (iVar2 == 61) {
			iVar0 = 31;
		}
		else if (iVar2 == 49) {
			iVar0 = 32;
		}
		else if (iVar2 == 27) {
			iVar0 = 34;
		}
		else if (iVar2 == 3) {
			iVar0 = 47;
		}
		else if (iVar2 == 4) {
			iVar0 = 48;
		}
		else if (iVar2 == 5) {
			iVar0 = 49;
		}
		else if (iVar2 == 6) {
			iVar0 = 50;
		}
		else if (iVar2 == 7) {
			iVar0 = 51;
		}
		else if (iVar2 == 58) {
			iVar0 = 53;
		}
		else if (iVar2 == 90) {
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75) {
			iVar0 = 17;
		}
		else if (iVar2 == 93) {
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70) {
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85) {
			iVar0 = 33;
		}
	}
	if (iVar0 != 55) {
		Global_101700.f_19523.f_472 = iVar0;
	}
}

// Position - 0x20F74
void func_183(int iParam0) {
	if (iParam0 == 63 || iParam0 == -1) {
		return;
	}
	func_184(iParam0);
	gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 0);
}

// Position - 0x20FA7
void func_184(int iParam0) {
	switch (iParam0) {
	case 30: func_188(22, 1, 0, 1, 0); break;

	case 15: func_185(37, 0); break;

	default: break;
	}
}

// Position - 0x20FDC
void func_185(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_187(iParam0, 0)) {
			func_186(iParam0, 1, 0);
			func_186(iParam0, 2, 0);
			func_186(iParam0, 3, 0);
			func_186(iParam0, 4, 0);
			func_186(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_186(iParam0, 0, 0);
	}
}

// Position - 0x21039
void func_186(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
}

// Position - 0x21074
int func_187(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x21097
void func_188(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (iParam0 != 198) {
		if (Global_69702) {
			Global_2433125.f_74.f_227[iParam0] = iParam1;
		}
		else {
			Global_101700.f_6220.f_227[iParam0] = iParam1;
		}
		Global_32749[iParam0] = iParam2;
		Global_32948[iParam0] = 1;
		func_191(iParam0, iParam3, iParam4, 0);
		func_189(iParam0, iParam1);
	}
}

// Position - 0x210F2
void func_189(int iParam0, int iParam1) {
	switch (iParam0) {
	case 12:
		if (iParam1 == 0) {
			audio::set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
		}
		else {
			audio::set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
		}
		break;

	case 71:
		if (iParam1 != 1) {
			audio::set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 0, 0);
		}
		else {
			audio::set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 1, 0);
		}
		break;

	case 65:
		if (iParam1 == 1) {
			func_190(0, 0);
		}
		else {
			func_190(0, 1);
		}
		break;

	case 6:
		if (iParam1 == 1) {
			audio::set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
		}
		else {
			audio::set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
		}
		break;

	case 174:
		if (iParam1 == 2) {
			audio::_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
		}
		break;

	case 37:
		if (iParam1 == 1) {
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
		}
		break;
	}
}

// Position - 0x211DB
void func_190(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&Global_100340, iParam0);
	}
	else {
		gameplay::clear_bit(&Global_100340, iParam0);
	}
	Global_100339 = 1;
}

// Position - 0x21204
bool func_191(int iParam0, bool bParam1, int iParam2, int iParam3) {
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;

	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_194(&Var3, iParam0);
	if (func_192()) {
		iVar1 = Global_101700.f_6220.f_227[iParam0];
	}
	else {
		iVar1 = Global_2433125.f_74.f_227[iParam0];
	}
	iVar2 = Global_33147[iParam0];
	if (ped::is_ped_injured(player::player_ped_id()) && !iParam3) {
	}
	else {
		bVar99 = true;
		if (gameplay::get_hash_key(script::get_this_script_name()) != gameplay::get_hash_key("standard_global_reg")) {
			if (iParam2 == 0) {
				if (Global_32749[iParam0] &&
					gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0), Var3,
														  1) < 200f) {
					bVar99 = false;
				}
				if (!player::is_player_playing(player::player_id()) ||
					ai::is_ped_being_arrested(player::player_ped_id())) {
					if (!cam::is_screen_faded_out()) {
						bVar99 = false;
					}
				}
			}
		}
		if (streaming::is_new_load_scene_active() &&
			(!streaming::is_player_switch_in_progress() || streaming::get_player_switch_state() != 5)) {
			bVar99 = false;
		}
		if (bVar99) {
			switch (Var3.f_3) {
			case 0:
				if (iVar1 == 2) {
				}
				else {
					if (Var3.f_4[iVar1] != 0) {
						entity::remove_model_hide(Var3, 10f, Var3.f_4[iVar1], 0);
					}
					if (Var3.f_4[iVar2] != 0) {
						entity::create_model_hide(Var3, 10f, Var3.f_4[iVar2], 1);
					}
					Global_34343[iParam0] = 1;
				}
				bVar0 = true;
				break;

			case 1:
				if (iVar1 == 0) {
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_34)) {
							streaming::request_ipl(&Var3.f_34);
						}
					}
				}
				else if (iVar1 == 1) {
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (streaming::is_ipl_active(&Var3.f_34)) {
							streaming::remove_ipl(&Var3.f_34);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
				}
				else if (iVar1 == 2) {
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (streaming::is_ipl_active(&Var3.f_34)) {
							streaming::remove_ipl(&Var3.f_34);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES")) {
						if (!streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
				}
				Global_34144[iParam0] = 1;
				Global_34343[iParam0] = 1;
				bVar0 = true;
				break;

			case 2:
				iVar100 = interior::get_interior_at_coords_with_type(Var3, &Var3.f_42);
				if (iVar100 != 0) {
					if (gameplay::get_hash_key(&Var3.f_50) != gameplay::get_hash_key("")) {
						if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_50)) {
							interior::_disable_interior_prop(iVar100, &Var3.f_50);
						}
					}
					if (iVar1 == 0) {
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) !=
								gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
					}
					else if (iVar1 == 1) {
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) !=
								gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
					}
					else if (iVar1 == 2) {
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
					}
					if (bParam1) {
						interior::refresh_interior(iVar100);
					}
				}
				Global_34343[iParam0] = 1;
				Global_34144[iParam0] = 1;
				bVar0 = true;
				break;

			case 3:
				if (gameplay::get_distance_between_coords(Var3, entity::get_entity_coords(player::player_ped_id(), 0),
														  1) < 250f) {
					uVar98 = object::_get_des_object(Var3, 25f, &Var3.f_8[0 /*8*/]);
					if (object::_does_des_object_exist(uVar98)) {
						if (iVar1 == 0) {
							object::_set_des_object_state(uVar98, 3);
							Global_34343[iParam0] = 1;
							bVar0 = true;
						}
						else if (iVar1 == 1) {
							if (object::_get_des_object_state(uVar98) != 6 &&
								object::_get_des_object_state(uVar98) != 7 &&
								object::_get_des_object_state(uVar98) != 8) {
								object::_set_des_object_state(uVar98, 10);
								Global_34343[iParam0] = 1;
								bVar0 = true;
							}
						}
						else if (iVar1 == 2) {
							bVar0 = true;
						}
					}
				}
				break;

			case 4:
				if (iVar1 == 0) {
					entity::remove_model_swap(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
					gameplay::clear_bit(&Global_32495[iParam0 / 32], iParam0 % 32);
				}
				else if (iVar1 == 1) {
					entity::create_model_swap(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
					gameplay::set_bit(&Global_32495[iParam0 / 32], iParam0 % 32);
				}
				bVar0 = true;
				break;
			}
			if (bVar0) {
				Global_32948[iParam0] = 0;
				Global_33147[iParam0] = iVar1;
				if (!func_192()) {
					if (!Global_33744[iParam0]) {
						Global_33744[iParam0] = 1;
						Global_33943++;
					}
				}
			}
		}
	}
	return bVar0;
}

// Position - 0x21B29
bool func_192() {
	if ((func_15() == -1 || func_15() == 999) && func_193() != 0) {
		return true;
	}
	return false;
}

// Position - 0x21B59
int func_193() { return Global_25191; }

// Position - 0x21B64
int func_194(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		uParam0->f_4[iVar0] = 0;
		StringCopy(&uParam0->f_8[iVar0 /*8*/], "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&uParam0->f_34, "", 32);
	StringCopy(&uParam0->f_42, "", 32);
	StringCopy(&uParam0->f_50, "", 32);
	uParam0->f_58 = {0f, 0f, 0f};
	uParam0->f_61 = {0f, 0f, 0f};
	uParam0->f_68 = {0f, 0f, 0f};
	uParam0->f_71 = {0f, 0f, 0f};
	uParam0->f_74 = 0f;
	uParam0->f_79 = {0f, 0f, 0f};
	uParam0->f_82 = {0f, 0f, 0f};
	uParam0->f_85 = {0f, 0f, 0f};
	uParam0->f_88 = {0f, 0f, 0f};
	switch (iParam1) {
	case 3:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "TRV1_Trail_start", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "TRV1_Trail_end", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-24.685f, 3032.92f, 40.331f};
		break;

	case 4:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS3_05_water_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS3_05_water_grp2", 32);
		*uParam0 = {-24.685f, 3032.92f, 40.331f};
		break;

	case 0:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "gasstation_ipl_group1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "gasstation_ipl_group2", 32);
		*uParam0 = {-93.4f, 6410.9f, 36.8f};
		break;

	case 1:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DES_Smash2_startimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_Smash2_endimap", 32);
		*uParam0 = {890.3647f, -2367.289f, 28.10582f};
		break;

	case 2:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1020.5f, 663.41f, 154.75f};
		uParam0->f_58 = {-1018.913f, 603.2904f, 105.6611f};
		uParam0->f_61 = {-1038.913f, 639.2904f, 135.6611f};
		uParam0->f_64[0] = 1;
		uParam0->f_64[1] = 0;
		break;

	case 5:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "bnkheist_apt_norm", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest", 32);
		break;

	case 196:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		break;

	case 6:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "crashed_cargoplane", 32);
		break;

	case 7:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_jb700_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 8:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_entityXF_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 9:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_cheetah_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 10:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_ztype_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 11:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
		break;

	case 12:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "cargoship", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "sunkcargoship", 32);
		uParam0->f_68 = {-162.8918f, -2365.769f, 0f};
		uParam0->f_71 = {190.75f, 31.25f, 21f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		break;

	case 13:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ship_occ_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ship_occ_grp2", 32);
		break;

	case 14:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "smboat", 32);
		break;

	case 15:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "gasparticle_grp2", 32);
		*uParam0 = {-95.2f, 6411.3f, 31.5f};
		break;

	case 16:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 17:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 18:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 19:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 20:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "jetstealtunnel", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {801.7f, -1810.8f, 23.3f};
		break;

	case 21:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {787.3967f, -1808.858f, 29.8532f};
		uParam0->f_58 = {814f, -1750f, 20f};
		uParam0->f_61 = {790f, -1899f, 35f};
		uParam0->f_64[0] = 1;
		uParam0->f_64[1] = 0;
		uParam0->f_64[2] = 0;
		break;

	case 22:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
		break;

	case 23:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
		break;

	case 24:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
		break;

	case 25:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "triathlon2_VBprops", 32);
		break;

	case 26:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_REQUEST", 32);
		*uParam0 = {163.4f, -745.7f, 251f};
		break;

	case 27:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FBI_colPLUG", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 28:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FBI_repair", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 29:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = joaat("dt1_05_build1_h");
		uParam0->f_4[1] = joaat("dt1_05_build1_damage");
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 30:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = -112041596;
		uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 31:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = -186270611;
		uParam0->f_4[1] = joaat("dt1_05_damage_slod");
		*uParam0 = {178.534f, -668.835f, 37.2113f};
		break;

	case 32:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FIB_heist_lights", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 33:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FIB_heist_dmg", 32);
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 34:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_rubble", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 35:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FIBlobbyfake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FIBlobby", 32);
		*uParam0 = {105.4557f, -745.4835f, 44.7548f};
		break;

	case 36:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
		*uParam0 = {169f, -670.3f, 41.9f};
		break;

	case 37:
		uParam0->f_3 = 1;
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		uParam0->f_79 = {16.9757f, 3614.307f, 30.0677f};
		uParam0->f_82 = {145.2451f, 3748.912f, 49.6958f};
		uParam0->f_85 = {16.9757f, 3614.307f, 30.0677f};
		uParam0->f_88 = {145.2451f, 3748.912f, 49.6958f};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		break;

	case 38:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkA_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkA_grp2", 32);
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		break;

	case 39:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerA_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		break;

	case 40:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkB_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkB_grp2", 32);
		*uParam0 = {106.7f, 3732.1f, 40.8f};
		break;

	case 41:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerB_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {106.7f, 3732.1f, 40.8f};
		break;

	case 42:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkC_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkC_grp2", 32);
		*uParam0 = {72.7f, 3695.4f, 42f};
		break;

	case 43:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerC_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {72.7f, 3695.4f, 42f};
		break;

	case 44:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkD_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkD_grp2", 32);
		*uParam0 = {43.8f, 3699.7f, 41.3f};
		break;

	case 45:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerD_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {43.8f, 3699.7f, 41.3f};
		break;

	case 46:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkE_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkE_grp2", 32);
		*uParam0 = {28.5f, 3668f, 40.4f};
		break;

	case 47:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerE_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {28.5f, 3668f, 40.4f};
		break;

	case 48:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_34, "des_methtrailer", 32);
		StringCopy(&uParam0->f_8[0 /*8*/], "methtrailer_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "methtrailer_grp2", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "methtrailer_grp3", 32);
		uParam0->f_33 = 1;
		*uParam0 = {29.4838f, 3735.593f, 38.688f};
		uParam0->f_68 = {31.134f, 3738.783f, 39.062f};
		uParam0->f_71 = {13.6f, 20f, 8.9f};
		uParam0->f_74 = 48f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 1;
		break;

	case 49:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_meth_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {29.4838f, 3735.593f, 38.688f};
		break;

	case 50:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhs_startimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhs_endimap", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2450.595f, 4959.929f, 44.2575f};
		uParam0->f_79 = {2383.756f, 4929.988f, 39.52461f};
		uParam0->f_82 = {2505.756f, 5023.988f, 67.52461f};
		break;

	case 55:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhs_start_occl", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhs_end_occl", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {2450.595f, 4959.929f, 44.2575f};
		break;

	case 51:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farm", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "farm", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "farm_burnt", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2444.8f, 4976.4f, 50.5f};
		break;

	case 52:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farm_props", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "farm_burnt_props", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 53:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhouse", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhouse", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 54:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farmint_cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "farmint", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 56:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "tankerexp_grp0", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp3", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 57:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp1", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 58:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp2", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 59:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_tankerexp", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 60:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "dockcrane1", 32);
		*uParam0 = {889.3f, -2910.9f, 40f};
		break;

	case 61:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CanyonRvrShallow", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CanyonRvrDeep", 32);
		*uParam0 = {-1600.619f, 4443.457f, 0.725f};
		break;

	case 62:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Garage_door_locked", 32);
		*uParam0 = {966.1f, -114.8f, 75.2f};
		break;

	case 63:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ch1_02_closed", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ch1_02_open", 32);
		*uParam0 = {-3086.428f, 339.2523f, 6.3717f};
		break;

	case 64:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ferris_finale_Anim", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-1675.178f, -1143.605f, 12.0175f};
		break;

	case 65:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "railing_start", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "railing_end", 32);
		*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
		break;

	case 66:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "canyonriver01", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "canyonriver01_traincrash", 32);
		*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
		break;

	case 67:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_05_WOFFM", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "DT1_05_WOFFM", 32);
		*uParam0 = {131.29f, -631.22f, 261.85f};
		break;

	case 68:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "coronertrash", 32);
		*uParam0 = {233.9f, -1355f, 30.3f};
		break;

	case 69:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Coroner_Int_off", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Coroner_Int_on", 32);
		*uParam0 = {234.4f, -1355.6f, 40.5f};
		break;

	case 70:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "id2_14_pre_no_int", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 71:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_during1", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "id2_14_during2", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 72:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_on_fire", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "id2_14_post_no_int", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 73:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_during_door", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 74:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "burnt_switch_off", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 75:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "RC12B_Default", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "RC12B_Destroyed", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "RC12B_Fixed", 32);
		uParam0->f_33 = 0;
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 76:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 105:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 106:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
		*uParam0 = {1861.28f, 2402.11f, 58.53f};
		break;

	case 107:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FruitBB", 32);
		*uParam0 = {-1327.46f, -274.82f, 54.25f};
		break;

	case 108:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
		*uParam0 = {2697.32f, 3162.18f, 58.1f};
		break;

	case 109:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
		*uParam0 = {2119.12f, 3058.21f, 53.25f};
		break;

	case 110:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
		*uParam0 = {-804.25f, -2276.88f, 23.59f};
		break;

	case 111:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "HW1_02_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "HW1_02_NewBill", 32);
		*uParam0 = {296.5f, 173.3f, 100.4f};
		break;

	case 112:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
		*uParam0 = {296.5f, 173.3f, 100.4f};
		break;

	case 77:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {480.9554f, -1321.21f, 28.2037f};
		uParam0->f_85 = {508.3f, -1299.3f, 39.4f};
		uParam0->f_88 = {459.9f, -1363.2f, 21.4f};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		uParam0->f_91[2] = 0;
		break;

	case 78:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "TrevorsTrailer", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
		*uParam0 = {1973f, 3815f, 34f};
		uParam0->f_33 = 0;
		break;

	case 79:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "scafstartimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "scafendimap", 32);
		*uParam0 = {-1088.6f, -1650.6f, 6.4f};
		break;

	case 80:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "chop_props", 32);
		*uParam0 = {-13.83f, -1455.45f, 31.81f};
		break;

	case 113:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "AP1_04_TriAf01", 32);
		*uParam0 = {-1277.629f, -2030.913f, 1.2823f};
		break;

	case 114:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS2_06_TriAf02", 32);
		*uParam0 = {2384.969f, 4277.583f, 30.379f};
		break;

	case 115:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS4_04_TriAf03", 32);
		*uParam0 = {1577.881f, 3836.107f, 30.7717f};
		break;

	case 87:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-180.5771f, -1016.928f, 28.2893f};
		break;

	case 88:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "jewel2fake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "post_hiest_unload", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "bh1_16_refurb", 32);
		*uParam0 = {-630.4205f, -236.7843f, 37.057f};
		uParam0->f_79 = {-623.6868f - 11f, -231.935f - 11f, 40.30703f - 3.25f};
		uParam0->f_82 = {-623.6868f + 11f, -231.935f + 11f, 40.30703f + 3.25f};
		break;

	case 89:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "bh1_16_doors_shut", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "refit_unload", 32);
		*uParam0 = {-583.1606f, -282.3967f, 35.394f};
		break;

	case 90:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "v_tunnel_hole", 32);
		*uParam0 = {-14.651f, -604.3639f, 25.1823f};
		break;

	case 91:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "cs5_4_trains", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2773.61f, 2835.327f, 35.1903f};
		break;

	case 94:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "airfield", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {1743.682f, 3286.251f, 40.0875f};
		break;

	case 95:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {1222.9f, 1877.9f, 79.9f};
		uParam0->f_58 = {1206.8f, 1803f, 43.9f};
		uParam0->f_61 = {1329f, 2060.4f, 143.9f};
		uParam0->f_64[0] = 0;
		uParam0->f_64[1] = 1;
		uParam0->f_64[2] = 0;
		break;

	case 104:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_01_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SC1_01_NewBill", 32);
		*uParam0 = {-351f, -1324f, 44.02f};
		break;

	case 103:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_17_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_17_NewBill", 32);
		*uParam0 = {391.81f, -962.71f, 41.97f};
		break;

	case 102:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_14_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SC1_14_NewBill", 32);
		*uParam0 = {424.2f, -1944.31f, 33.09f};
		break;

	case 92:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ld_rail_01_track", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2626.374f, 2949.869f, 39.1409f};
		break;

	case 93:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ld_rail_02_track", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2626.374f, 2949.869f, 39.1409f};
		break;

	case 118:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_M_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_M_moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
		break;

	case 116:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_D_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_D_Moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
		break;

	case 117:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_S_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 119:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_L_Items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_L_Moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 120:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 122:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_FameShame", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
		break;

	case 121:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 123:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Michael_premier", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 124:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 170:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "burgershot_yoga", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 171:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_Scuba", 32);
		StringCopy(&uParam0->f_42, "V_Michael_Garage", 32);
		*uParam0 = {-810.5301f, 187.7868f, 71.4786f};
		break;

	case 125:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
		break;

	case 164:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Jewel_Gasmasks", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 165:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 166:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 167:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_KitBag", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 168:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_Body_Armour", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 169:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_Fireman", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 126:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 127:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 128:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 129:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 130:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 131:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 132:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 133:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 134:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 179:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "shutter_open", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "shutter_closed", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-30.8793f, -1088.336f, 25.4221f};
		uParam0->f_68 = {-29.3f, -1086.35f, 25.57f};
		uParam0->f_71 = {5.5f, 3f, 2f};
		uParam0->f_74 = -10f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		break;

	case 174:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "csr_beforeMission", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "csr_afterMissionA", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "csr_afterMissionB", 32);
		StringCopy(&uParam0->f_50, "csr_inMission", 32);
		uParam0->f_33 = 0;
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 175:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-49.21f, -1090.28f, 25.42f};
		uParam0->f_68 = {-49.21f, -1090.28f, 25.42f};
		uParam0->f_71 = {2.5f, 3f, 3f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 176:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-49.28f, -1092.66f, 25.42f};
		uParam0->f_68 = {-49.28f, -1092.66f, 25.42f};
		uParam0->f_71 = {3f, 1f, 3f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 177:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-53.07f, -1096.73f, 25.5f};
		uParam0->f_68 = {-53.07f, -1096.73f, 25.5f};
		uParam0->f_71 = {1f, 3f, 2f};
		uParam0->f_74 = -45f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 178:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "carshowroom_broken", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "carshowroom_boarded", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 173:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "shr_int", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "fakeint", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 180:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_03_Shutter", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "", 32);
		*uParam0 = {23.9346f, -669.7552f, 30.8853f};
		break;

	case 181:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "Hospitaldoorsanim", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
		StringCopy(&uParam0->f_42, "v_hospital", 32);
		uParam0->f_33 = 0;
		*uParam0 = {300.9423f, -586.1784f, 42.2919f};
		break;

	case 135:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_clean_apt", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_A", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 136:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_B", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 137:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_C", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 138:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_sextoys_a", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 139:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_wade_shit", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 140:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_wade_sofa_A", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 141:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "layer_debra_pic", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 142:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_torture", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 143:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_sofa_A", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_sofa_B", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 144:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_whiskey", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 145:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_mrJam_A", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_mrJam_B", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 146:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_mrJam_C", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 147:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "vb_30_emissive", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "vb_30_murder", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
		break;

	case 148:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "vb_30_crimetape", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
		break;

	case 149:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "sheriff_cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {1856.029f, 3682.998f, 33.2675f};
		break;

	case 150:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-440.5073f, 6018.766f, 30.49f};
		break;

	case 151:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ufo", 32);
		uParam0->f_33 = 0;
		*uParam0 = {487.31f, 5588.386f, 793.0532f};
		break;

	case 152:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ufo_eye", 32);
		uParam0->f_33 = 0;
		*uParam0 = {487.31f, 5588.386f, 793.0532f};
		break;

	case 153:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_57_FranklinStuff", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 154:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_GangBandana", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 155:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_Safari", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 172:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
		StringCopy(&uParam0->f_42, "v_strip3", 32);
		*uParam0 = {96.4811f, -1291.294f, 28.2688f};
		break;

	case 182:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {139.5795f, -3092.962f, 8.64631f};
		uParam0->f_79 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_82 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_85 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_88 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		uParam0->f_91[2] = 1;
		break;

	case 183:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {203.7784f, -3131.767f, 7.041344f};
		uParam0->f_79 = {Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f)};
		uParam0->f_82 = {Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f)};
		break;

	case 184:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {144.7706f, -2982.659f, 7.952507f};
		uParam0->f_79 = {Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f)};
		uParam0->f_82 = {Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f)};
		break;

	case 185:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1154.965f, -1520.983f, 9.132731f};
		uParam0->f_79 = {-1154.965f, -1520.983f, 9.132731f};
		uParam0->f_82 = {-1158.965f, -1524.983f, 11.63273f};
		break;

	case 187:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1052.204f, 371.9537f, 67.914f};
		uParam0->f_79 = {-1052.204f, 371.9537f, 67.914f};
		uParam0->f_82 = {-1048.064f, 368.0221f, 70.9128f};
		break;

	case 186:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {1954.984f, 3792.991f, 30.3086f};
		uParam0->f_79 = {1954.984f, 3792.991f, 30.3086f};
		uParam0->f_82 = {1983.45f, 3830.78f, 36.2726f};
		break;

	case 188:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1122.202f, 48.5724f, 51.4652f};
		uParam0->f_79 = {-1122.202f, 48.5724f, 51.4652f};
		uParam0->f_82 = {-1076.233f, 92.1041f, 60.0617f};
		break;

	case 81:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "KorizTempWalls", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-2199.138f, 223.4648f, 181.1118f};
		break;

	case 82:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "mic3_chopper_debris", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-2242.785f, 263.4779f, 173.6154f};
		break;

	case 83:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "chemgrill_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {3832.9f, 3665.5f, -23.4f};
		break;

	case 84:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Plane_crash_trench", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {2814.7f, 4758.5f, 47.9f};
		break;

	case 85:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "golfflags", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-1096.505f, 4.5754f, 49.8103f};
		break;

	case 86:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "yogagame", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-781.6566f, 186.8937f, 71.8352f};
		break;

	case 189:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Carwash_with_spinners", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Carwash_without_spinners", 32);
		uParam0->f_33 = 0;
		*uParam0 = {55.7f, -1391.3f, 30.5f};
		break;

	case 190:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "KT_CarWash", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
		uParam0->f_33 = 0;
		*uParam0 = {700.091f, -933.641f, 20.308f};
		break;

	case 191:
		uParam0->f_3 = 1;
		*uParam0 = {-1096.381f, -836.17f, 36.6755f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 192:
		uParam0->f_3 = 1;
		*uParam0 = {449.6558f, -980.1375f, 42.6918f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 193:
		uParam0->f_3 = 1;
		*uParam0 = {363.0175f, -1598.079f, 35.9502f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 194:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS3_07_MPGates", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {-1601.424f, 2808.213f, 16.2598f};
		break;

	case 97:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {23.7318f, -647.2123f, 37.9549f};
		break;

	case 98:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FINBANK", 32);
		*uParam0 = {12.9689f, -648.4698f, 9.7693f};
		break;

	case 99:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "PAPER1_RCM", 32);
		*uParam0 = {-1459.127f, 486.1281f, 115.2016f};
		break;

	case 100:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SP1_10_fake_interior", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SP1_10_real_interior", 32);
		*uParam0 = {-248.4916f, -2010.509f, 34.5743f};
		break;

	case 101:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "facelobbyfake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "facelobby", 32);
		*uParam0 = {-1081.347f, -263.1502f, 38.7152f};
		break;

	case 195:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "atriumglstatic", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "atriumglmission", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "atriumglcut", 32);
		*uParam0 = {136.1795f, -750.701f, 262.0516f};
		break;

	case 197:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "racetrack01", 32);
		*uParam0 = {2096f, 3168.7f, 42.9f};
		break;
	}
	switch (iParam1) {
	case 156:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "showhome_only", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 157:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "franklin_unpacking", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 158:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "franklin_settled", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 163:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_tshirt", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 159:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bong_and_wine", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 161:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_flyer", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 162:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_tux", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 160:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "locked", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "unlocked", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 96:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "chophillskennel", 32);
		*uParam0 = {19.0568f, 536.4818f, 169.6277f};
		break;
	}
	return 1;
}

// Position - 0x252FF
int func_195(int iParam0) {
	switch (iParam0) {
	case 46: return 42;

	case 47: return 43;

	case 49: return 44;

	case 50: return 45;

	case 8:
		if (gameplay::is_bit_set(Global_101700.f_17533.f_382, 0)) {
			return 46;
		}
		break;

	case 16: return 47;

	case 38: return 48;

	case 39: return 49;

	case 40: return 50;

	case 41: return 51;

	case 42: return 52;

	case 43:
		if (Global_101700.f_8044.f_99.f_58[101]) {
			return 53;
		}
		else {
			return 54;
		}
		break;

	case 20: return 55;
	}
	return 0;
}

// Position - 0x253F1
void func_196(int iParam0, bool bParam1) {
	switch (iParam0) {
	case 46: func_197(4, bParam1); break;

	case 16: func_197(6, bParam1); break;

	case 37: func_197(17, bParam1); break;

	case 31: func_197(16, bParam1); break;
	}
}

// Position - 0x25442
void func_197(int iParam0, bool bParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31) {
		if (!func_204(iParam0)) {
			gameplay::set_bit(&Global_101700.f_25393, iVar0);
			if (!bParam1) {
				func_202(func_203(iParam0));
				if (!func_201(68)) {
					func_198("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

// Position - 0x254A8
void func_198(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	func_199(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x254C9
void func_199(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7, int iParam8, var uParam9) {
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
		func_200();
	}
}

// Position - 0x2569C
void func_200() {
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

// Position - 0x257BC
int func_201(int iParam0) {
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

// Position - 0x257FF
void func_202(char *sParam0) {
	ui::_set_notification_text_entry("");
	ui::_set_notification_message_3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

// Position - 0x25823
char *func_203(int iParam0) {
	switch (iParam0) {
	case 0: return "CM_STOMIC";

	case 1: return "CM_STOFRA";

	case 2: return "CM_STOTRE";

	case 3: return "CM_STOAMA";

	case 4: return "CM_STOBEV";

	case 5: return "CM_STOBRA";

	case 6: return "CM_STOCHR";

	case 7: return "CM_STODAV";

	case 8: return "CM_STODEV";

	case 9: return "CM_STODRF";

	case 10: return "CM_STOFAB";

	case 11: return "CM_STOFLO";

	case 12: return "CM_STOJIM";

	case 13: return "CM_STOLAM";

	case 14: return "CM_STOLAZ";

	case 15: return "CM_STOLES";

	case 16: return "CM_STOMAU";

	case 17: return "CM_STOTHO";

	case 18: return "CM_STONER";

	case 19: return "CM_STOPAT";

	case 20: return "CM_STOSIM";

	case 21: return "CM_STOSOL";

	case 22: return "CM_STOSTE";

	case 23: return "CM_STOSTR";

	case 24: return "CM_STOTAN";

	case 25: return "CM_STOTAO";

	case 26: return "CM_STOTRA";

	case 27: return "CM_STOWAD";
	}
	return "ERROR!";
}

// Position - 0x259F6
int func_204(int iParam0) {
	if (iParam0 != -1 && iParam0 != 28) {
		return gameplay::is_bit_set(Global_101700.f_25393, iParam0);
	}
	return 0;
}

// Position - 0x25A23
void func_205(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0x25A60
int func_206(char *sParam0) {
	int iVar0;

	iVar0 = 1424;
	if (!script::does_script_exist(sParam0)) {
		return 1;
	}
	if (gameplay::are_strings_equal(sParam0, "controller_Races")) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("controller_races")) > 0) {
			return 1;
		}
		iVar0 = 128;
	}
	script::request_script(sParam0);
	if (script::has_script_loaded(sParam0)) {
		system::start_new_script(sParam0, iVar0);
		script::set_script_as_no_longer_needed(sParam0);
		return 1;
	}
	return 0;
}

// Position - 0x25AC0
int func_207() { return func_208(script::get_this_script_name(), 0); }

// Position - 0x25AD1
int func_208(char *sParam0, int iParam1) {
	int iVar0;
	char *sVar1;
	int iVar33;
	int iVar34;

	iVar33 = gameplay::get_hash_key(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63) {
		iVar0 = iVar34;
		func_168(iVar0, &sVar1);
		if (gameplay::get_hash_key(sVar1) == iVar33) {
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0) {
	}
	return -1;
}

// Position - 0x25B1A
void func_209(int iParam0) {
	int iVar0;
	int iVar1;

	Global_55823 = 0;
	if (Global_56047[iParam0 /*13*/] != 3) {
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67917) {
		if (Global_67918[iVar1 /*9*/] == iParam0) {
			iVar0 = 1;
			Global_67918[iVar1 /*9*/].f_1 = 1;
			Global_67918[iVar1 /*9*/].f_2 = 0f;
			if (Global_67918[iVar1 /*9*/].f_3 == 2) {
			}
		}
		iVar1++;
	}
	if (!iVar0) {
	}
}

// Position - 0x25B8B
bool func_210(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_221(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_211(sParam2, iParam3, 0);
}

// Position - 0x25BD9
int func_211(char *sParam0, int iParam1, int iParam2) {
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
					func_220();
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
		if (func_219(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_218();
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
				func_216();
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
				if (func_215()) {
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
			if (func_214()) {
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
			func_213();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_212();
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
		func_220();
	}
	return 0;
}

// Position - 0x25EA5
void func_212() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x25ED6
void func_213() {
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

// Position - 0x25F6B
bool func_214() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x25F92
bool func_215() {
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

// Position - 0x2602B
void func_216() {
	if (func_98(14)) {
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
		Global_14443 = func_217();
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

// Position - 0x260CD
int func_217() {
	func_161();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x260E6
void func_218() {
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

// Position - 0x2613D
bool func_219(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x26178
void func_220() {
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

// Position - 0x261CF
void func_221(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
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

// Position - 0x26225
bool func_222(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x26246
void func_223() {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	float fVar7;

	iVar0 = 0;
	fVar1 = 1f;
	iLocal_374 = gameplay::get_game_timer();
	if (!cam::does_cam_exist(iLocal_352)) {
	}
	if (!cam::does_cam_exist(iLocal_353)) {
	}
	if (!cam::does_cam_exist(iLocal_354)) {
	}
	if (!cam::does_cam_exist(iLocal_355)) {
	}
	if (!cam::does_cam_exist(iLocal_356)) {
	}
	if (!cam::does_cam_exist(iLocal_357)) {
	}
	if (!cam::does_cam_exist(iLocal_358)) {
	}
	if (!cam::does_cam_exist(iLocal_359)) {
	}
	if (!cam::does_cam_exist(iLocal_360)) {
	}
	if (!cam::does_cam_exist(iLocal_361)) {
	}
	if (!cam::does_cam_exist(iLocal_362)) {
	}
	gameplay::set_time_scale(fVar1);
	ui::display_hud(0);
	ui::display_radar(0);
	player::set_player_control(player::player_id(), 0, 128);
	audio::stop_audio_scene("EXTREME_04_CUSTOM_QUIET_SCENE");
	func_238(800, 0);
	iLocal_376 = 0;
	iLocal_377 = 0;
	iLocal_379 = 0;
	iLocal_380 = 0;
	bLocal_381 = false;
	iLocal_377 = 0;
	iLocal_382 = 0;
	audio::_0xD01005D2BA2EB778("SLOWMO_EXTREME_04");
	unk1::_0x48621C9FCA3EBD28(0);
	while (gameplay::get_game_timer() < iLocal_374 + 11000 && !cam::is_screen_faded_out()) {
		if (!ped::is_synchronized_scene_running(iLocal_371) && !ped::is_synchronized_scene_running(iLocal_372)) {
			if (func_236(400)) {
				bLocal_381 = true;
			}
		}
		if (bLocal_381) {
			if (!cam::is_screen_fading_out()) {
				cam::do_screen_fade_out(500);
			}
		}
		system::wait(0);
		if (!iLocal_379) {
			if (ped::is_synchronized_scene_running(iLocal_371)) {
				if (ped::get_synchronized_scene_phase(iLocal_371) == 1f) {
					if (func_311(Local_155)) {
						iLocal_372 = ped::create_synchronized_scene(1656.378f, -12.057f, 169.038f, 0f, 0f, 115.85f, 2);
						iLocal_364 = cam::create_cam("DEFAULT_ANIMATED_CAMERA", 1);
						ai::task_synchronized_scene(Local_155, iLocal_372, "rcmextreme4", "Base_Jump_Spot_02", 1000f,
													-1000f, 0, 0, 1148846080, 0);
						ped::_set_synchronized_scene_occlusion_portal(iLocal_372, 0);
						cam::set_cam_active(iLocal_364, 1);
						cam::play_synchronized_cam_anim(iLocal_364, iLocal_372, "Base_Jump_Spot_02_CAM", "rcmextreme4");
						cam::render_script_cams(1, 0, 3000, 1, 0, 0);
						ped::_0x2208438012482A1A(Local_155, 0, 0);
						cam::destroy_cam(iLocal_363, 0);
						iLocal_379 = 1;
					}
				}
			}
		}
		else if (!iLocal_380) {
			if (ped::is_synchronized_scene_running(iLocal_372) &&
				ped::get_synchronized_scene_phase(iLocal_372) >= 0.2f) {
				if (!ped::is_synchronized_scene_running(iLocal_373)) {
					audio::prepare_synchronized_audio_event("RCM_Extreme4_Fall_and_impact", 0);
				}
			}
			if (ped::is_synchronized_scene_running(iLocal_372) && ped::get_synchronized_scene_phase(iLocal_372) == 1f) {
				if (func_311(Local_155)) {
					iLocal_373 = ped::create_synchronized_scene(1656.378f, -12.057f, 169.038f, 0f, 0f, 115.85f, 2);
					iLocal_365 = cam::create_cam("DEFAULT_ANIMATED_CAMERA", 1);
					ai::task_synchronized_scene(Local_155, iLocal_373, "rcmextreme4", "Fall_and_impact", 1000f, -1000f,
												0, 0, 1148846080, 0);
					ped::_set_synchronized_scene_occlusion_portal(iLocal_373, 1);
					cam::set_cam_active(iLocal_365, 1);
					cam::play_synchronized_cam_anim(iLocal_365, iLocal_373, "Fall_and_impact_CAM", "rcmextreme4");
					audio::play_synchronized_audio_event(iLocal_373);
					cam::render_script_cams(1, 0, 3000, 1, 0, 0);
					ped::_0x2208438012482A1A(Local_155, 0, 0);
					cam::destroy_cam(iLocal_364, 0);
					iLocal_380 = 1;
				}
			}
		}
		else if (ped::is_synchronized_scene_running(iLocal_373) &&
				 ped::get_synchronized_scene_phase(iLocal_373) >= 0.323f) {
			if (!iLocal_376) {
				graphics::start_particle_fx_non_looped_at_coord("scr_extrm4_water_splash", 1655.27f, -20.8134f,
																133.841f, 0f, 0f, 0f, 1f, 0, 0, 0);
				graphics::set_particle_fx_non_looped_alpha(1f);
				func_234();
				iLocal_376 = 1;
			}
			else if (!iLocal_382) {
				if (ped::is_synchronized_scene_running(iLocal_373) &&
					ped::get_synchronized_scene_phase(iLocal_373) >= 0.44f) {
					iLocal_180 = graphics::start_particle_fx_looped_at_coord(
						"scr_extrm4_water_blood", 1655.27f, -20.8134f, 133.842f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
					graphics::set_particle_fx_looped_alpha(iLocal_180, 1f);
					iLocal_382 = 1;
				}
			}
		}
		if (gameplay::get_game_timer() > iLocal_374 + 600 && fVar1 == 1f) {
			if (!iLocal_377) {
				iLocal_377 = 1;
			}
		}
		fVar2 = 1f / 30f;
		fVar3 = gameplay::get_frame_time() / fVar2;
		if (gameplay::get_game_timer() > iLocal_374 + 630) {
			fVar1 += 0.035f * fVar3;
			if (fVar1 > 1f) {
				fVar1 = 1f;
			}
			gameplay::set_time_scale(fVar1);
		}
		else {
			fVar1 -= 0.07f * fVar3;
			if (fVar1 < 0.1f) {
				fVar1 = 0.1f;
			}
			gameplay::set_time_scale(fVar1);
		}
		if (iVar0 == 0) {
			iVar0 = 1;
		}
		if (gameplay::get_game_timer() > iLocal_374 + 563) {
			if (iVar0 == 1) {
				func_3(&iLocal_175);
				if (func_311(Local_155)) {
				}
				iVar0 = 2;
			}
		}
		if (gameplay::get_game_timer() > iLocal_374 + 871) {
			if (iVar0 == 2) {
				if (func_311(Local_155)) {
				}
				iVar0 = 3;
			}
		}
		if (gameplay::get_game_timer() > iLocal_374 + 2000) {
			if (iVar0 == 3) {
				if (func_311(Local_155)) {
				}
				iVar0 = 4;
			}
		}
		if (gameplay::get_game_timer() > iLocal_374 + 3500) {
			if (iVar0 == 4) {
				iVar0 = 5;
			}
		}
		if (gameplay::get_game_timer() > iLocal_374 + 10000) {
			if (iVar0 != 7) {
				cam::destroy_cam(iLocal_365, 0);
				iLocal_362 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 1);
				cam::set_cam_params(iLocal_362, 1659.893f, -6.552459f, 174.871f, -29.25931f, 1E-06f, 122.4502f, 50f, 0,
									1, 1, 2);
				cam::render_script_cams(1, 0, 3000, 1, 0, 0);
				cam::set_cam_active(iLocal_362, 1);
				iVar0 = 7;
			}
		}
	}
	if (bLocal_381) {
		if (ped::is_synchronized_scene_running(iLocal_373)) {
			audio::stop_synchronized_audio_event(iLocal_373);
		}
		audio::cancel_music_event("EXT4_JUMPED_OS");
		func_234();
		iLocal_362 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 1);
		cam::set_cam_params(iLocal_362, 1659.893f, -6.552459f, 174.871f, -29.25931f, 1E-06f, 122.4502f, 50f, 0, 1, 1,
							2);
		cam::render_script_cams(1, 0, 3000, 1, 0, 0);
		cam::set_cam_active(iLocal_362, 1);
		if (!iLocal_382) {
			iLocal_180 = graphics::start_particle_fx_looped_at_coord("scr_extrm4_water_blood", 1655.27f, -20.8134f,
																	 133.842f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
			graphics::set_particle_fx_looped_alpha(iLocal_180, 1f);
			iLocal_382 = 1;
		}
		cam::do_screen_fade_in(500);
		system::wait(100);
	}
	audio::_0xDDC635D5B3262C56("SLOWMO_EXTREME_04");
	func_3(&iLocal_175);
	if (func_311(Local_155)) {
		if (iVar0 < 3) {
			entity::set_entity_health(Local_155, 101);
			vVar4 = {entity::get_entity_coords(Local_155, 1)};
			if (vVar4.z > 155f) {
				fVar7 = 155f;
			}
			else {
				fVar7 = vVar4.z;
			}
			entity::set_entity_coords(Local_155, 1657.046f, -17.4571f, fVar7, 1, 0, 0, 1);
		}
	}
	unk1::_0x81CBAE94390F9F89();
	func_225(1, 1, 1, 1);
	cam::_0xC819F3CBB62BF692(0, 0, 3, 0);
	ui::display_hud(1);
	ui::display_radar(1);
	player::set_player_control(player::player_id(), 1, 128);
	gameplay::set_time_scale(1f);
	if (func_222(Local_155)) {
		if (ped::is_synchronized_scene_running(iLocal_373)) {
			ped::set_synchronized_scene_phase(iLocal_373, 1f);
		}
		ai::clear_ped_tasks_immediately(Local_155);
		ped::_0x2208438012482A1A(Local_155, 0, 0);
		entity::set_entity_coords(Local_155, 1655.77f, -20.04f, 135.8f, 1, 0, 0, 1);
		entity::set_entity_health(Local_155, 0);
	}
	func_224(&uLocal_182, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
	func_210(&uLocal_182, "EXT4AUD", "EXT4_DUMB", 7, 0, 0, 0);
}

// Position - 0x268F8
void func_224(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x26993
void func_225(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = player::get_player_index();
	player::set_everyone_ignore_player(iVar0, 0);
	player::set_player_control(iVar0, iParam3, 0);
	func_226(0, 1, 0, 0);
	if (iParam2 == 1) {
		ui::display_radar(1);
		ui::display_hud(1);
	}
	ui::clear_help(1);
	if (iParam0 == 1) {
		cam::set_widescreen_borders(0, 0);
	}
	if (iParam1 == 1) {
		if (iLocal_36 != 0 && iLocal_36 != joaat("object") && iLocal_36 != joaat("gadget_parachute")) {
			if (func_222(player::player_ped_id())) {
				if (weapon::has_ped_got_weapon(player::player_ped_id(), iLocal_36, 0)) {
					weapon::set_current_ped_weapon(player::player_ped_id(), iLocal_36, 0);
				}
			}
		}
	}
	if (func_311(player::player_ped_id())) {
		ped::set_ped_stealth_movement(player::player_ped_id(), 0, 0);
	}
}

// Position - 0x26A3A
void func_226(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_233(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_214()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_232(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_233(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_232(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_230(player::player_id()) &&
				!func_228(player::player_id(), 0) && !func_227()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_230(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0x26B53
bool func_227() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x26B70
bool func_228(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_229(-1, 0) == 8;
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

// Position - 0x26BBB
int func_229(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_18();
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

// Position - 0x26BFC
int func_230(int iParam0) {
	if (func_228(iParam0, 0)) {
		return 1;
	}
	if (func_231()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x26C3E
bool func_231() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x26C4F
int func_232(int iParam0, int iParam1, var uParam2, int iParam3) {
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

// Position - 0x26C82
void func_233(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}

// Position - 0x26CA5
void func_234() {
	Global_14611 = 0;
	func_235();
}

// Position - 0x26CB5
void func_235() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x26CD6
bool func_236(int iParam0) {
	if (cam::is_screen_faded_in()) {
		if (gameplay::get_game_timer() - Global_28 > iParam0) {
			Global_27 = gameplay::get_game_timer();
		}
		Global_28 = gameplay::get_game_timer();
		if (gameplay::get_game_timer() - Global_27 > iParam0) {
			if (func_237()) {
				Global_27 = gameplay::get_game_timer();
				return true;
			}
		}
	}
	return false;
}

// Position - 0x26D20
bool func_237() {
	if (ui::is_pause_menu_active()) {
		return false;
	}
	if (controls::is_control_just_pressed(0, 18) || controls::is_control_just_pressed(2, 18)) {
		return true;
	}
	return false;
}

// Position - 0x26D52
void func_238(int iParam0, int iParam1) {
	if (cam::is_screen_faded_out() || cam::is_screen_fading_out()) {
		if (!cam::is_screen_fading_in()) {
			cam::do_screen_fade_in(iParam0);
		}
	}
	if (iParam1) {
		while (!cam::is_screen_faded_in()) {
			system::wait(0);
		}
	}
}

// Position - 0x26D8E
void func_239() {
	if (iLocal_149 < 2) {
		audio::prepare_music_event("EXT4_JUMPED_OS");
	}
	switch (iLocal_149) {
	case 0:
		iLocal_151 = 0;
		if (entity::is_entity_in_angled_area(player::player_ped_id(), 1655.139f, 5.342447f, 172.6748f, 1662.085f,
											 -6.198325f, 175.0248f, 8.25f, 0, 1, 0)) {
			cutscene::_request_cutscene_ex("es_4_rcm_p2_concat", 6, 8);
		}
		else {
			cutscene::_request_cutscene_ex("es_4_rcm_p2_concat", 5, 8);
		}
		audio::stop_sound(iLocal_367);
		if (cutscene::_0xB56BBBCC2955D9CB()) {
			cutscene::set_cutscene_ped_component_variation("Dom", 8, 2, 0, 0);
		}
		if (!func_260()) {
			if (func_254(1, 20f, 1)) {
				if (!iLocal_383 || gameplay::get_game_timer() > iLocal_384 + 3000 ||
					entity::is_entity_at_coord(player::player_ped_id(), 1658.95f, -5.45f, 173.78f, 0.2f, 0.2f, 0.2f, 0,
											   1, 0)) {
					unk1::_0x48621C9FCA3EBD28(1);
					cutscene::start_cutscene(2048);
					if (func_311(Local_155)) {
						cutscene::register_entity_for_cutscene(Local_155, "Dom", 0, joaat("cs_dom"), 0);
					}
					system::wait(0);
					iLocal_383 = 0;
					cam::stop_gameplay_hint(0);
					audio::start_audio_scene("EXTREME_04_CUSTOM_QUIET_SCENE");
					if (func_311(Local_155)) {
						entity::freeze_entity_position(Local_155, 0);
					}
					if (entity::does_entity_exist(iLocal_179) && !entity::is_entity_dead(iLocal_179, 0)) {
						entity::set_entity_visible(iLocal_179, 0, 0);
					}
					if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						iLocal_172 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
						iLocal_181 = entity::get_entity_model(iLocal_172);
						if (vehicle::is_this_model_a_car(iLocal_181) == 1 ||
							vehicle::is_this_model_a_bike(iLocal_181) == 1) {
							vLocal_348 = {1649.793f, 11.7826f, 172.7745f};
							fLocal_351 = 220.9923f;
						}
						else {
							vLocal_348 = {1662.016f, 53.0925f, 171.2482f};
							fLocal_351 = 298.6364f;
						}
						func_245(1654.721f, 4.166876f, 172.5245f, 1662.562f, -8.920052f, 178.2742f, 6.25f, vLocal_348,
								 fLocal_351, 1, 1, 1, 0, 0);
					}
					else {
						vLocal_348 = {1649.793f, 11.7826f, 172.7745f};
						fLocal_351 = 220.9923f;
						func_244(vLocal_348, fLocal_351);
					}
					func_241(1660.186f, -7.492f, 172.774f, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1);
					gameplay::clear_area_of_peds(1660.186f, -7.492f, 172.774f, 200f, 0);
					iLocal_366 = ped::add_scenario_blocking_area(1636.691f, -89.8127f, 150f, 1706.146f, 58.721f, 190f,
																 0, 1, 1, 1);
					iLocal_149 = 1;
				}
			}
		}
		break;

	case 1:
		if (cutscene::is_cutscene_playing()) {
			if (cutscene::can_set_exit_state_for_camera(0)) {
				if (!iLocal_154) {
					if (!ped::is_synchronized_scene_running(iLocal_371)) {
						if (func_311(Local_155)) {
							if (!cam::does_cam_exist(iLocal_363)) {
								iLocal_363 = cam::create_cam("DEFAULT_ANIMATED_CAMERA", 1);
							}
							cam::set_cam_active(iLocal_363, 1);
							cam::render_script_cams(1, 0, 3000, 1, 0, 0);
							iLocal_371 =
								ped::create_synchronized_scene(1656.378f, -12.057f, 169.038f, 0f, 0f, 115.85f, 2);
							ai::task_synchronized_scene(Local_155, iLocal_371, "rcmextreme4", "Base_Jump_Spot", 1000f,
														-1000f, 0, 0, 1148846080, 0);
							ped::_set_synchronized_scene_occlusion_portal(iLocal_371, 1);
							cam::set_cam_active(iLocal_363, 1);
							cam::play_synchronized_cam_anim(iLocal_363, iLocal_371, "Base_Jump_Spot_CAM",
															"rcmextreme4");
							cam::render_script_cams(1, 0, 3000, 1, 0, 0);
							ped::_0x2208438012482A1A(Local_155, 0, 0);
							iLocal_154 = 1;
						}
					}
				}
				iLocal_149 = 2;
			}
			if (func_311(Local_155)) {
				if (cutscene::can_set_exit_state_for_registered_entity("Dom", 0)) {
					iLocal_149 = 2;
				}
			}
		}
		else {
			iLocal_149 = 2;
		}
		break;

	case 2:
		unk1::_0x81CBAE94390F9F89();
		if (entity::does_entity_exist(iLocal_179) && !entity::is_entity_dead(iLocal_179, 0)) {
			entity::set_entity_visible(iLocal_179, 1, 0);
		}
		if (iLocal_151 == 0) {
			audio::trigger_music_event("EXT4_JUMPED_OS");
			func_240(3);
		}
		break;
	}
}

// Position - 0x27151
void func_240(int iParam0) {
	iLocal_148 = iParam0;
	iLocal_149 = 0;
	iLocal_150 = 0;
}

// Position - 0x27163
void func_241(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8,
			  int iParam9, int iParam10, int iParam11, int iParam12) {
	int iVar0;

	iVar0 = player::get_player_index();
	if (player::is_player_playing(iVar0)) {
		func_243(0);
		if (iParam9) {
			player::remove_player_helmet(player::get_player_index(), 1);
		}
		if (iParam8) {
			switch (func_217()) {
			case 0:
				if (func_155(player::player_ped_id(), 8, 15)) {
					func_42(player::player_ped_id(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				if (func_155(player::player_ped_id(), 9, 6)) {
					func_42(player::player_ped_id(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				break;

			case 1:
				if (func_155(player::player_ped_id(), 8, 1) || func_155(player::player_ped_id(), 8, 10)) {
					func_42(player::player_ped_id(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				break;

			case 2:
				if (func_155(player::player_ped_id(), 8, 4)) {
					func_42(player::player_ped_id(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				break;
			}
		}
		if (iParam6 == 1) {
			gameplay::clear_area_of_peds(func_242(player::get_player_index()), 50f, 0);
		}
		if (iParam7 == 1) {
			gameplay::clear_area_of_objects(vParam0, 30f, 0);
		}
		if (iParam10) {
			fire::stop_fire_in_range(vParam0, 30f);
		}
		gameplay::clear_area_of_projectiles(vParam0, 30f, 0);
		player::set_player_wanted_level(iVar0, 0, 0);
		player::set_player_wanted_level_now(iVar0, 0);
		player::set_everyone_ignore_player(iVar0, 1);
		if (iParam12) {
			ui::display_radar(0);
			ui::display_hud(0);
		}
		ui::clear_prints();
		if (iParam11 == 1) {
			ui::clear_help(1);
		}
		if (iParam3 == 1) {
			cam::set_widescreen_borders(1, 0);
		}
		if (iParam4 == 1) {
			iLocal_36 = 0;
			if (func_222(player::player_ped_id())) {
				iLocal_36 = weapon::get_selected_ped_weapon(player::player_ped_id());
				weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1) {
			func_238(500, 0);
		}
	}
}

// Position - 0x27321
Vector3 func_242(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0x27334
void func_243(int iParam0) {
	int iVar0;

	iVar0 = player::get_player_index();
	if (!player::is_player_dead(iVar0)) {
		if (iParam0) {
		}
		player::set_player_control(iVar0, iParam0, 16);
		player::set_player_control(iVar0, iParam0, 32);
	}
	func_226(1, 1, 0, 0);
}

// Position - 0x27370
void func_244(vector3 vParam0, float fParam3) {
	int iVar0;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		iVar0 = player::get_players_last_vehicle();
		if (entity::does_entity_exist(iVar0)) {
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				entity::set_entity_coords(iVar0, vParam0, 1, 0, 0, 1);
				entity::set_entity_heading(iVar0, fParam3);
				vehicle::set_vehicle_on_ground_properly(iVar0, 1084227584);
			}
		}
	}
}

// Position - 0x273BF
void func_245(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, int iParam11,
			  int iParam12, int iParam13, int iParam14, int iParam15) {
	func_246(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, iParam11, iParam12, iParam13, iParam14,
			 iParam15);
}

// Position - 0x273E8
void func_246(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11,
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
				func_253(iVar0);
			}
			if (entity::is_entity_in_angled_area(iVar0, vParam0, vParam3, fParam6, 0, 1, 0)) {
				bVar1 = true;
			}
			else {
				vVar10 = {entity::get_entity_coords(iVar0, 1)};
				if (vVar10.z > vParam0.z && vVar10.z < vParam3.z || vVar10.z > vParam3.z && vVar10.z < vParam0.z) {
					if (func_250(iVar0, vParam0, vParam3, fParam6)) {
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
				if (func_248(iVar0, func_217(), 1)) {
					bVar1 = false;
				}
			}
			if (bVar1) {
				if (!func_247(vParam11)) {
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

// Position - 0x277DA
int func_247(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return 1;
	}
	return 0;
}

// Position - 0x27804
bool func_248(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_249(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x27875
bool func_249(int iParam0, int iParam1, char *sParam2, int *iParam3) {
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

// Position - 0x2794D
bool func_250(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7) {
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
		vVar0 = {func_252(vParam1 - vParam4)};
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
		if (func_251(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) ||
			func_251(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15) ||
			func_251(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15) ||
			func_251(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12) ||
			func_251(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9) ||
			func_251(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15) ||
			func_251(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15) ||
			func_251(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12) ||
			func_251(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9) ||
			func_251(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15) ||
			func_251(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15) ||
			func_251(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12) ||
			func_251(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9) ||
			func_251(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15) ||
			func_251(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15) ||
			func_251(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12)) {
			return true;
		}
	}
	return false;
}

// Position - 0x27C43
int func_251(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8,
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

// Position - 0x27CF7
Vector3 func_252(vector3 vParam0) {
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

// Position - 0x27D36
void func_253(int iParam0) {
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

// Position - 0x27D9B
bool func_254(int iParam0, float fParam1, int iParam2) {
	int iVar0;

	iVar0 = 1;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!ped::is_ped_in_any_heli(player::player_ped_id()) && !ped::is_ped_in_any_boat(player::player_ped_id()) &&
			!ped::is_ped_in_any_plane(player::player_ped_id())) {
			if (!func_258(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), fParam1, 1, 1056964608, 0, 1, 0)) {
				iVar0 = 0;
			}
			else if (iParam2 == 1) {
				iVar0 = 0;
				if (!func_257(player::player_ped_id(), -828834893)) {
					ai::task_leave_any_vehicle(player::player_ped_id(), 0, 0);
				}
			}
			if (entity::is_entity_in_air(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
				iVar0 = 0;
			}
		}
	}
	func_256();
	if (func_260()) {
		iVar0 = 0;
	}
	if (iVar0 == 0) {
		return false;
	}
	if (iParam0 == 1) {
		if (!func_255()) {
			return false;
		}
	}
	return true;
}

// Position - 0x27E5E
bool func_255() {
	bool bVar0;

	bVar0 = cutscene::has_cutscene_loaded();
	if (!Global_69701) {
		if (!bVar0) {
			Global_69701 = 1;
		}
	}
	return bVar0;
}

// Position - 0x27E81
void func_256() {
	controls::disable_control_action(0, 21, 1);
	controls::disable_control_action(0, 37, 1);
	controls::disable_control_action(0, 25, 1);
	controls::disable_control_action(0, 141, 1);
	controls::disable_control_action(0, 140, 1);
	controls::disable_control_action(0, 24, 1);
	controls::disable_control_action(0, 257, 1);
	controls::disable_control_action(0, 22, 1);
	controls::disable_control_action(0, 23, 1);
}

// Position - 0x27ED2
int func_257(int iParam0, int iParam1) {
	if (func_311(iParam0)) {
		if (ai::get_script_task_status(iParam0, iParam1) == 1 || ai::get_script_task_status(iParam0, iParam1) == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x27F05
int func_258(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6) {
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
	func_259(iParam0);
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

// Position - 0x28096
void func_259(int iParam0) {
	if (vehicle::_get_has_vehicle_got_rocket_boost(iParam0)) {
		if (vehicle::_is_vehicle_rocket_boost_active(iParam0)) {
			vehicle::_set_rocket_boost_active(iParam0, 0);
		}
	}
}

// Position - 0x280B7
bool func_260() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0x280D9
void func_261() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ai::get_script_task_status(player::player_ped_id(), 713668775) == 1) {
			if (controls::is_control_pressed(0, 30) || controls::is_control_pressed(0, 31) ||
				controls::is_control_pressed(0, 23) || controls::is_control_pressed(0, 21) ||
				controls::is_control_pressed(0, 22) || func_273() && controls::is_control_pressed(0, 1) ||
				func_273() && controls::is_control_pressed(0, 2) || func_273() && controls::is_control_pressed(0, 32)) {
				ai::clear_ped_tasks(player::player_ped_id());
			}
		}
	}
	switch (iLocal_149) {
	case 0:
		if (func_311(Local_82.f_28[0])) {
			ped::set_ped_combat_attributes(Local_82.f_28[0], 17, 1);
		}
		iLocal_368 = 0;
		iLocal_383 = 1;
		func_272("EXT4_01", 7500, 1);
		iLocal_170 = func_271(Local_155, 1, 1, 5);
		system::settimera(0);
		iLocal_149 = 1;
		break;

	case 1:
		if (entity::does_entity_exist(iLocal_178)) {
			if (!entity::is_entity_dead(iLocal_178, 0)) {
				if (func_310(player::player_ped_id(), iLocal_178, 1f, 1)) {
					weapon::give_weapon_to_ped(player::player_ped_id(), joaat("gadget_parachute"), 1, 0, 0);
					object::delete_object(&iLocal_178);
				}
			}
		}
		if (func_311(player::player_ped_id())) {
			if (func_311(Local_155)) {
				if (func_310(player::player_ped_id(), Local_155, 100f, 1)) {
					cutscene::_request_cutscene_ex("es_4_rcm_p2_concat", 6, 8);
					if (cutscene::_0xB56BBBCC2955D9CB()) {
						cutscene::set_cutscene_ped_component_variation("Dom", 8, 2, 0, 0);
					}
				}
				if (ped::is_ped_ragdoll(Local_155)) {
					entity::set_entity_health(Local_155, 0);
				}
				if (func_310(player::player_ped_id(), Local_155, 32f, 1)) {
					if (func_265(Local_155, 1, 0, 0, 0)) {
						if (iLocal_169 == 0) {
							if (!func_260()) {
								func_264(&uLocal_182, "EXT4AUD", "EXT4_ATTACK", "EXT4_ATTACK_1", 7, 0, 0);
								iLocal_169 = 1;
							}
						}
						else if (iLocal_169 == 1) {
							if (!func_260()) {
								func_264(&uLocal_182, "EXT4AUD", "EXT4_ATTACK", "EXT4_ATTACK_2", 7, 0, 0);
								iLocal_169 = 2;
							}
						}
					}
					else {
						if (!iLocal_378) {
							if (func_310(player::player_ped_id(), Local_155, 30f, 1) && !func_260()) {
								if (func_210(&uLocal_182, "EXT4AUD", "EXT4_COMM", 7, 0, 0, 0)) {
									iLocal_378 = 1;
								}
							}
						}
						func_263();
						if (!ped::is_ped_headtracking_ped(player::player_ped_id(), Local_155)) {
							ai::task_look_at_entity(player::player_ped_id(), Local_155, -1, 0, 2);
						}
					}
				}
				if (entity::is_entity_in_angled_area(player::player_ped_id(), 1663.587f, -11.71415f, 172.6748f,
													 1658.387f, -1.735749f, 175.7748f, 5.5f, 0, 1, 0)) {
					if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						iLocal_149 = 2;
					}
					else {
						iLocal_172 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
						iLocal_181 = entity::get_entity_model(iLocal_172);
						if (vehicle::is_this_model_a_car(iLocal_181) == 1 ||
							vehicle::is_this_model_a_bike(iLocal_181) == 1) {
							iLocal_149 = 2;
						}
					}
				}
				else {
					func_262();
				}
			}
		}
		break;

	case 2:
		unk1::_0x293220DA1B46CEBC(5f, 0f, 3);
		func_7(&iLocal_170);
		if (func_311(player::player_ped_id())) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				vehicle::_set_vehicle_halt(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 5f, 1, 0);
				system::wait(600);
				ai::task_leave_any_vehicle(player::player_ped_id(), 0, 0);
			}
		}
		if (audio::is_scripted_conversation_ongoing()) {
			audio::stop_scripted_conversation(0);
		}
		func_240(2);
		break;
	}
}

// Position - 0x28416
void func_262() {
	if (func_311(Local_155)) {
		if (ai::get_script_task_status(Local_155, 242628503) != 1) {
			ai::task_perform_sequence(Local_155, iLocal_171);
		}
	}
}

// Position - 0x2843E
void func_263() {
	if (!func_260()) {
		if (iLocal_368 < 5) {
			if (gameplay::get_game_timer() > iLocal_369 + 8000 + gameplay::get_random_int_in_range(0, 2000)) {
				if (audio::has_sound_finished(iLocal_367)) {
					if (func_210(&uLocal_182, "EXT4AUD", "EXT4_DOM", 6, 0, 0, 0)) {
						iLocal_369 = gameplay::get_game_timer();
						iLocal_368++;
						return;
					}
				}
			}
		}
	}
	if (!func_260()) {
		if (audio::request_script_audio_bank("EXTREME_04_DOM_A", 0, -1) &&
			audio::request_script_audio_bank("EXTREME_04_DOM_B", 0, -1) &&
			audio::request_script_audio_bank("EXTREME_04_DOM_C", 0, -1)) {
			if (audio::has_sound_finished(iLocal_367)) {
				audio::play_sound_from_entity(iLocal_367, "DOM", Local_155, "EXTREME_04_SOUNDSET", 0, 0);
			}
		}
	}
}

// Position - 0x284EC
int func_264(var *uParam0, char *sParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6) {
	func_221(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_211(sParam2, iParam4, 0);
}

// Position - 0x28540
bool func_265(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 8f;
	fVar1 = 15f;
	if (iParam1 == 0) {
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (iParam2) {
		fVar0 = 2f;
	}
	if (func_222(player::player_ped_id()) && func_222(iParam0)) {
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan")) {
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!iParam2) {
			if (func_270(iParam0, iParam1, fVar0, fVar1)) {
				return true;
			}
			if (func_266(iParam0, fVar1, iParam3, iParam4)) {
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
				if (func_270(iParam0, iParam1, fVar0, fVar1)) {
					return true;
				}
			}
			if (func_266(iParam0, fVar1, iParam3, iParam4)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2863B
bool func_266(int iParam0, float fParam1, bool bParam2, bool bParam3) {
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
				if (func_267(iParam0, fParam1)) {
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
			if (func_267(iParam0, fParam1)) {
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

// Position - 0x28747
bool func_267(int iParam0, float fParam1) {
	var uVar0;
	vector3 vVar1;

	if (gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0)) {
		if (func_268(iParam0, vVar1, 90f, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x287DC
bool func_268(int iParam0, vector3 vParam1, float fParam4, int iParam5) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_252(vParam1 - entity::get_entity_coords(iParam0, 1))};
	if (fParam4 < 0.1f || fParam4 > 360f) {
		return true;
	}
	if (iParam5 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_252(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						  ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_269(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam4 / 2f)) {
		return false;
	}
	return true;
}

// Position - 0x2886A
float func_269(vector3 vParam0, vector3 vParam3) {
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

// Position - 0x2888B
bool func_270(int iParam0, int iParam1, float fParam2, float fParam3) {
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

// Position - 0x288D3
int func_271(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = true;
	if (bVar1) {
		if (func_222(iParam0)) {
			iVar0 = ui::add_blip_for_entity(iParam0);
			ui::set_blip_as_friendly(iVar0, iParam2);
			ui::set_blip_priority(iVar0, iParam3);
			ui::set_blip_scale(iVar0, 0.7f);
			if (!iParam1) {
				ui::set_blip_scale(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

// Position - 0x28925
void func_272(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 1);
}

// Position - 0x2893E
int func_273() {
	if (cam::_0xEE778F8C7E1142E2(cam::_0x19CAFA3C87F7C2FF()) == 4) {
		return 1;
	}
	return 0;
}

// Position - 0x28957
void func_274() {
	if (func_324() == 0) {
		func_285();
	}
	else {
		func_284(1732.133f, 91.9424f, 169.7872f, 128.6917f, 1, 0);
		func_282(0, -1, 1);
		cam::set_gameplay_cam_relative_heading(0f);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		player::set_player_control(player::player_id(), 1, 0);
		ped::clear_ped_wetness(player::player_ped_id());
		ped::force_ped_motion_state(player::player_ped_id(), -668482597, 0, 1, 0);
		ped::set_ped_min_move_blend_ratio(player::player_ped_id(), 1f);
		ai::task_follow_nav_mesh_to_coord(player::player_ped_id(), 1723.452f, 80.729f, 169.6701f, 1f, -1, 1f, 2113,
										  1193033728);
		func_238(800, 0);
		iLocal_152 = 1;
		func_281(1, 1, 1);
	}
	if (iLocal_152 == 1) {
		func_280(&Local_82, 0, 1);
		func_275();
	}
}

// Position - 0x28A10
void func_275() {
	if (func_222(Local_82.f_28[0])) {
		func_279(Local_82.f_28[0], 1737.453f, 101.7498f, 170.0243f, 288.5211f, 0, 1);
	}
	else {
		func_276(&Local_82.f_28[0], 1737.453f, 101.7498f, 170.0243f, 288.5211f);
	}
	ai::task_follow_nav_mesh_to_coord(Local_82.f_28[0], 1826.662f, 146.9161f, 170.4472f, 1f, -1, 1048576000, 0,
									  1193033728);
	ai::set_scenario_type_enabled("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
	gameplay::clear_area_of_vehicles(Local_155.f_1, 20f, 0, 0, 0, 0, 0);
	if (!entity::does_entity_exist(iLocal_173)) {
		iLocal_173 = vehicle::create_vehicle(joaat("sanchez"), 1662.88f, -14.255f, 172.7742f, 205.3516f, 1, 1);
	}
	if (!entity::does_entity_exist(iLocal_174)) {
		iLocal_174 = vehicle::create_vehicle(joaat("bmx"), 1633.766f, -23.6768f, 127.0535f, 55.7565f, 1, 1);
	}
	if (!entity::does_entity_exist(iLocal_176)) {
		iLocal_176 = object::create_object(1165008631, 1666.282f, -11.20408f, 172.7773f, 1, 1, 0);
		entity::set_entity_rotation(iLocal_176, 0.000637f, -0.000136f, 10.66059f, 2, 1);
	}
	if (!entity::does_entity_exist(iLocal_177)) {
		iLocal_177 = object::create_object(1165008631, 1667.076f, -12.07778f, 173.2611f, 1, 1, 0);
		entity::set_entity_rotation(iLocal_177, 90.03932f, -0.257438f, -13.86142f, 2, 1);
	}
	if (func_311(Local_155)) {
		if (ai::get_script_task_status(Local_155, 242628503) != 1) {
			ai::open_sequence_task(&iLocal_171);
			ai::task_play_anim(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			ai::task_play_anim(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			ai::task_play_anim(0, "rcmextreme4", "fidget_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
			ai::task_play_anim(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			ai::task_play_anim(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			ai::task_play_anim(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			ai::task_play_anim(0, "rcmextreme4", "fidget_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
			ai::set_sequence_to_repeat(iLocal_171, 1);
			ai::close_sequence_task(iLocal_171);
			ai::task_perform_sequence(Local_155, iLocal_171);
		}
	}
	if (func_311(Local_155)) {
		ped::set_ped_can_ragdoll_from_player_impact(Local_155, 0);
		func_224(&uLocal_182, 4, Local_155, "DOM", 0, 1);
		ped::set_ped_relationship_group_hash(Local_155, ped::get_ped_relationship_group_hash(player::player_ped_id()));
	}
	if (!entity::does_entity_exist(iLocal_179)) {
		iLocal_179 = object::create_ambient_pickup(joaat("pickup_parachute"), 1665.264f, -11.4427f, 172.7747f, 7, -1,
												   joaat("p_parachute_s"), 1, 1);
	}
	entity::set_entity_rotation(iLocal_179, -111.8225f, -0.454914f, -162.2231f, 2, 1);
	entity::play_entity_anim(iLocal_179, "Chute_Off_Bag", "skydive@parachute@", 4f, 0, 1, 0, 0.99f, 0);
	func_240(1);
}

// Position - 0x28D0D
void func_276(var *uParam0, vector3 vParam1, float fParam4) {
	func_277(uParam0, iLocal_81, vParam1, fParam4, 26);
	ped::set_ped_default_component_variation(*uParam0);
	ped::set_ped_can_ragdoll_from_player_impact(*uParam0, 0);
	ped::set_ped_name_debug(*uParam0, "EXTREME LAUNCHER RC");
}

// Position - 0x28D3F
void func_277(var *uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6) {
	func_278(uParam0);
	*uParam0 = ped::create_ped(iParam6, iParam1, vParam2, fParam5, 0, 0);
}

// Position - 0x28D60
void func_278(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_dead(*iParam0, 0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
		}
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		ped::delete_ped(iParam0);
	}
}

// Position - 0x28DA0
int func_279(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6) {
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (func_222(iParam0)) {
		if (iParam5 == 1) {
			fVar1 = 0f;
			bVar0 = gameplay::get_ground_z_for_3d_coord(vParam1, &fVar1, 0);
			if (bVar0) {
				vParam1.z = fVar1;
			}
		}
		entity::set_entity_coords(iParam0, vParam1, 1, 0, 0, iParam6);
		entity::set_entity_heading(iParam0, fParam4);
		if (iParam5) {
			return bVar0;
		}
		return 1;
	}
	return 0;
}

// Position - 0x28DFB
void func_280(var *uParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6) {
		if (func_222(uParam0->f_28[iVar0])) {
			entity::set_entity_proofs(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		if (func_222(uParam0->f_35[iVar0])) {
			entity::set_entity_proofs(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6) {
		if (func_222(uParam0->f_41[iVar0])) {
			entity::set_entity_proofs(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		entity::set_entity_proofs(player::player_ped_id(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		entity::set_entity_invincible(player::player_ped_id(), iParam1);
		if (iParam2) {
			weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
		}
	}
}

// Position - 0x28EF0
void func_281(int iParam0, int iParam1, int iParam2) {
	func_225(0, 0, iParam2, 1);
	if (iParam0 == 1) {
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		cam::set_gameplay_cam_relative_heading(0f);
	}
	if (iParam1 == 1) {
		func_238(500, 0);
	}
}

// Position - 0x28F24
void func_282(int iParam0, int iParam1, int iParam2) {
	if (func_324() && func_283()) {
		while (Global_91486 != 6) {
			system::wait(0);
		}
		gameplay::set_game_paused(0);
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				ped::clear_ped_wetness(player::player_ped_id());
			}
		}
		if (iParam0 != 0) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (entity::does_entity_exist(iParam0)) {
					if (vehicle::is_vehicle_driveable(iParam0, 0)) {
						if (!ped::is_ped_in_vehicle(player::player_ped_id(), iParam0, 0)) {
							ped::set_ped_into_vehicle(player::player_ped_id(), iParam0, iParam1);
							cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
							cam::set_gameplay_cam_relative_heading(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1) {
			if (player::is_player_playing(player::player_id())) {
				player::set_player_control(player::player_id(), 1, 0);
			}
		}
		graphics::_stop_all_screen_effects();
		func_20(0);
	}
}

// Position - 0x28FE8
var func_283() { return gameplay::is_bit_set(Global_91491.f_20, 13); }

// Position - 0x28FFC
void func_284(vector3 vParam0, float fParam3, int iParam4, int iParam5) {
	if (func_324()) {
		gameplay::set_this_script_can_be_paused(0);
		gameplay::clear_bit(&Global_91491.f_20, 2);
		gameplay::set_game_paused(1);
		if (player::is_player_playing(player::player_id())) {
			player::set_player_control(player::player_id(), 0, 0);
		}
		Global_91487 = {vParam0};
		Global_91490 = fParam3;
		Global_91486 = 1;
		if (iParam4 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 14);
		}
		else {
			gameplay::clear_bit(&Global_91491.f_20, 14);
		}
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 24);
		}
		else {
			gameplay::clear_bit(&Global_91491.f_20, 24);
		}
		func_20(1);
	}
}

// Position - 0x29091
void func_285() {
	switch (iLocal_150) {
	case 0:
		func_290();
		iLocal_151 = 0;
		func_289("es_4_rcm_p1", 0);
		if (func_287(1, 1093140480, 0)) {
			if (!iLocal_383 || gameplay::get_game_timer() > iLocal_384 + 3500) {
				func_286();
				unk1::_0x48621C9FCA3EBD28(1);
				cutscene::start_cutscene(0);
				if (func_222(Local_82.f_28[0])) {
					cutscene::register_entity_for_cutscene(Local_82.f_28[0], "Hudson", 0, joaat("a_c_retriever"), 0);
				}
				system::wait(0);
				cam::stop_gameplay_hint(0);
				func_245(1729.922f, 89.4162f, 174.0123f, 1739.745f, 101.2816f, 167.8282f, 7f, 1739.956f, 97.8651f,
						 169.9797f, 140.876f, 1, 1, 1, 0, 0);
				func_245(1743.115f, 105.833f, 169.6362f, 1732.029f, 93.77112f, 172.6075f, 4f, 1739.956f, 97.8651f,
						 169.9797f, 140.876f, 1, 1, 1, 0, 0);
				func_241(1733.315f, 95.2246f, 169.9192f, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1);
				iLocal_150 = 1;
			}
		}
		break;

	case 1:
		if (cutscene::is_cutscene_playing()) {
		}
		else {
			iLocal_150 = 2;
		}
		if (cutscene::can_set_exit_state_for_registered_entity("Franklin", 0)) {
			iLocal_150 = 2;
		}
		break;

	case 2:
		func_279(player::player_ped_id(), 1732.222f, 92.0087f, 169.7867f, 138.1854f, 0, 1);
		ped::force_ped_motion_state(player::player_ped_id(), -668482597, 0, 1, 0);
		ped::set_ped_min_move_blend_ratio(player::player_ped_id(), 1f);
		ai::task_follow_nav_mesh_to_coord(player::player_ped_id(), 1723.452f, 80.729f, 169.6701f, 1f, -1, 1f, 2113,
										  1193033728);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		cam::set_gameplay_cam_relative_heading(0f);
		unk1::_0x81CBAE94390F9F89();
		iLocal_152 = 1;
		func_225(1, 1, 1, 1);
		break;
	}
}

// Position - 0x2925A
void func_286() {
	int iVar0;

	iVar0 = func_207();
	if (iVar0 == -1) {
		return;
	}
	Global_100787[iVar0 /*10*/] = 1;
}

// Position - 0x2927A
bool func_287(int iParam0, float fParam1, int iParam2) {
	int iVar0;

	iVar0 = 1;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!ped::is_ped_in_any_heli(player::player_ped_id()) && !ped::is_ped_in_any_boat(player::player_ped_id()) &&
			!ped::is_ped_in_any_plane(player::player_ped_id())) {
			if (!func_258(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), fParam1, 1, 1056964608, 0, 1, 0)) {
				iVar0 = 0;
			}
			else if (iParam2 == 1) {
				iVar0 = 0;
				if (!func_257(player::player_ped_id(), -828834893)) {
					ai::task_leave_any_vehicle(player::player_ped_id(), 0, 0);
				}
			}
			if (entity::is_entity_in_air(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
				iVar0 = 0;
			}
		}
	}
	func_256();
	if (func_260()) {
		func_288();
		iVar0 = 0;
	}
	if (iVar0 == 0) {
		return false;
	}
	if (iParam0 == 1) {
		if (!func_255()) {
			return false;
		}
	}
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	return true;
}

// Position - 0x2934E
void func_288() {
	Global_14611 = 0;
	func_220();
}

// Position - 0x2935E
void func_289(char *sParam0, int iParam1) {
	func_243(iParam1);
	cutscene::request_cutscene(sParam0, 8);
}

// Position - 0x29374
void func_290() {
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	fVar0 = 35f;
	fVar1 = 0.4f;
	fVar2 = 0f;
	fVar3 = -0.85f;
	fVar4 = 0f;
	if (!func_324() && func_311(Local_82.f_28[0]) && func_311(player::player_ped_id()) && iLocal_383 == 1) {
		if (!cam::is_gameplay_hint_active()) {
			player::set_player_control(player::player_id(), 0, 0);
			ai::task_look_at_entity(player::player_ped_id(), Local_82.f_28[0], -1, 0, 2);
			ai::task_follow_to_offset_of_entity(player::player_ped_id(), Local_82.f_28[0], 0f, 0f, 0f, 1f, -1, 0.5f, 1);
			cam::get_is_multiplayer_brief(1);
			cam::set_gameplay_entity_hint(Local_82.f_28[0], -0.5f, 0f, -0.2f, 1, 30000, 2000, 2000, 0);
			cam::set_gameplay_hint_fov(fVar0);
			cam::_0xF8BDBF3D573049A1(fVar1);
			cam::_0xD1F8363DFAD03848(fVar2);
			cam::_0x5D7B620DAE436138(fVar3);
			cam::_0xC92717EF615B6704(fVar4);
			iLocal_384 = gameplay::get_game_timer();
		}
		else {
			if (func_310(player::player_ped_id(), Local_82.f_28[0], 4f, 1)) {
				iLocal_384 -= 10000;
			}
			ped::set_ped_max_move_blend_ratio(player::player_ped_id(), 1f);
			cam::_0xCCD078C2665D2973(1);
		}
	}
}

// Position - 0x2947E
void func_291() {
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	fVar0 = 35f;
	fVar1 = 0.45f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0.07f;
	if (iLocal_383) {
		if (!cam::is_gameplay_hint_active()) {
			player::set_player_control(player::player_id(), 0, 0);
			ai::task_look_at_entity(player::player_ped_id(), Local_155, -1, 0, 2);
			ai::task_follow_nav_mesh_to_coord(player::player_ped_id(), 1658.95f, -5.45f, 173.78f, 1f, -1, 0.25f, 0,
											  -161.08f);
			cam::get_is_multiplayer_brief(1);
			cam::set_gameplay_entity_hint(Local_155, 0f, 0f, 0f, 1, 30000, 2000, 2000, 0);
			cam::set_gameplay_hint_fov(fVar0);
			cam::_0xF8BDBF3D573049A1(fVar1);
			cam::_0xD1F8363DFAD03848(fVar2);
			cam::_0x5D7B620DAE436138(fVar3);
			cam::_0xC92717EF615B6704(fVar4);
			iLocal_384 = gameplay::get_game_timer();
		}
		else {
			ped::set_ped_max_move_blend_ratio(player::player_ped_id(), 1f);
			cam::_0xCCD078C2665D2973(1);
		}
	}
}

// Position - 0x29539
void func_292() {
	float fVar0;

	if (iLocal_148 == 1) {
		if (!func_311(Local_155)) {
			sLocal_168 = "EXT4_F1";
			iLocal_148 = 4;
		}
		else {
			fVar0 = gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
														  entity::get_entity_coords(Local_155, 1), 1);
			if (iLocal_153 == 0) {
				if (fVar0 > 160f) {
					iLocal_153 = 1;
				}
			}
			else if (fVar0 > 200f) {
				sLocal_168 = "EXT4_F2";
				iLocal_148 = 4;
			}
			if (fVar0 > 150f) {
				if (ui::does_blip_exist(iLocal_170)) {
					ui::set_blip_flashes(iLocal_170, 1);
				}
			}
			else if (ui::does_blip_exist(iLocal_170)) {
				ui::set_blip_flashes(iLocal_170, 0);
			}
		}
		if (entity::is_entity_in_angled_area(player::player_ped_id(), 1660.332f, -20.45607f, 136.7029f, 1584.419f,
											 -30.29117f, 120.6038f, 32f, 0, 1, 0)) {
			sLocal_168 = "EXT4_F2";
			iLocal_148 = 4;
		}
	}
}

// Position - 0x29607
void func_293(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;

	if (Global_69956 != 6) {
		if (Global_69958 == -1) {
			if (func_304(1, Param0)) {
				if (Global_69959 == 3) {
					fVar0 = 1.5f;
				}
				else {
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0) {
					Global_69958 = gameplay::get_game_timer();
					vLocal_22 = {ui::get_hud_component_position(15)};
					fLocal_21 = 0f;
				}
				else {
					fLocal_21 += gameplay::get_frame_time();
				}
			}
			else {
				fLocal_21 = 0f;
			}
		}
		else {
			if (!func_304(0, Param0)) {
				Global_69958 = gameplay::get_game_timer() - 9000;
			}
			ui::hide_hud_component_this_frame(7);
			ui::hide_hud_component_this_frame(6);
			ui::hide_hud_component_this_frame(8);
			ui::hide_hud_component_this_frame(9);
			iVar1 = gameplay::get_game_timer() - Global_69958;
			if (iVar1 < 9000 && !cam::is_screen_faded_out()) {
				iVar2 = 255;
				if (iVar1 < 1000) {
					iVar2 = system::ceil(system::to_float(iVar1) / 1000f * 255f);
				}
				else {
					iVar3 = 9000 - iVar1;
					if (iVar3 < 1000) {
						iVar2 = system::ceil(system::to_float(iVar3) / 1000f * 255f);
					}
				}
				switch (Global_69956) {
				case 3:
				case 5:
					if (iParam6 == 1) {
						fVar6 = 0f;
						fVar7 = -0.07f;
					}
					else if (iParam7 == 1) {
						fVar6 = 0f;
						fVar7 = -0.077f;
					}
					else if (iParam8 == 1) {
						fVar6 = 0f;
						fVar7 = -0.05f;
					}
					else if (iParam9 == 1) {
						fVar6 = 0f;
						fVar7 = -0.035f;
					}
					else {
						fVar6 = 0f;
						fVar7 = -0.014f;
					}
					break;

				default:
					fVar6 = 0f;
					fVar7 = -0.014f;
					break;
				}
				graphics::_set_screen_draw_position(82, 66);
				ui::set_text_font(1);
				ui::set_text_justification(2);
				iVar12 = func_217();
				if (Global_69959 == 1 && Global_69957 == 62) {
					iVar12 = Global_101700.f_2095.f_539.f_3550;
				}
				switch (iVar12) {
				case 0: ui::get_hud_colour(143, &iVar8, &iVar9, &iVar10, &uVar11); break;

				case 1: ui::get_hud_colour(144, &iVar8, &iVar9, &iVar10, &uVar11); break;

				case 2: ui::get_hud_colour(145, &iVar8, &iVar9, &iVar10, &uVar11); break;

				default:
					iVar8 = 240;
					iVar9 = 200;
					iVar10 = 80;
				}
				ui::set_text_colour(iVar8, iVar9, iVar10, iVar2);
				ui::set_text_drop_shadow();
				Var4 = {func_295(Global_69957, Global_69959, iParam10)};
				if (fVar7 == -0.014f) {
				}
				graphics::_screen_draw_position_ratio(fVar6, fVar7, 0f, 0.01f);
				ui::set_text_scale(0.67f, 0.67f);
				if (!graphics::get_is_widescreen() && !graphics::get_is_hidef()) {
					fLocal_26 = 0.14f;
				}
				else {
					fLocal_26 = 0.17f;
				}
				if (fVar7 == -0.014f) {
					if (func_294(&Var4) > fLocal_26) {
						if (ui::is_hud_component_active(15)) {
							ui::set_hud_component_position(15, vLocal_22.x, vLocal_22.y + fLocal_25);
							Global_69961 = 1;
						}
					}
				}
				ui::begin_text_command_display_text(&Var4);
				ui::end_text_command_display_text(fVar6, fVar7, 0);
				graphics::_screen_draw_position_end();
				if (Global_69960 == 1) {
					func_176();
					fLocal_21 = 0f;
				}
			}
			else {
				func_176();
				fLocal_21 = 0f;
			}
		}
	}
}

// Position - 0x298EC
float func_294(char *sParam0) {
	ui::_begin_text_command_width(sParam0);
	return ui::_end_text_command_get_width(1);
}

// Position - 0x298FF
struct<2> func_295(int iParam0, int iParam1, int iParam2) {
	struct<2> Var0;
	int iVar2;

	StringCopy(&Var0, "", 8);
	switch (iParam1) {
	case 1: Var0 = {func_303(iParam0)}; break;

	case 7: Var0 = {func_162(iParam0)}; break;

	case 3:
		iVar2 = iParam0;
		switch (iVar2) {
		case 0: Var0 = {func_302(iParam2)}; break;

		case 8: Var0 = {func_301(iParam2)}; break;

		case 7: Var0 = {func_300(iParam2)}; break;

		case 10: Var0 = {func_299(iParam2)}; break;

		case 5: Var0 = {func_298(iParam2)}; break;

		case 4: Var0 = {func_297(iParam2)}; break;

		default: StringCopy(&Var0, func_296(iVar2), 8); break;
		}
		break;

	default: break;
	}
	return Var0;
}

// Position - 0x299D5
char *
func_296(int iParam0) {
	switch (iParam0) {
	case 0: return "MG_BJUM";

	case 1: return "MG_DART";

	case 2: return "MG_GOLF";

	case 3: return "MG_HUNT";

	case 4: return "MG_OFFR";

	case 5: return "MG_PILO";

	case 6: return "MG_RMPG";

	case 7: return "MG_SERA";

	case 8: return "MG_SRAC";

	case 9: return "MG_STRP";

	case 10: return "MG_STNT";

	case 11: return "MG_SHTR";

	case 12: return "MG_TAXI";

	case 13: return "MG_TENN";

	case 14: return "MG_TOWI";

	case 15: return "MG_TRFA";

	case 16: return "MG_TRFG";

	case 17: return "MG_TRIA";

	case 18: return "MG_YOGA";

	case 19: return "MG_CRCE";
	}
	return "INVALID!";
}

// Position - 0x29B28
struct<2> func_297(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x29B5B
struct<2>
func_298(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x29B8E
struct<2>
func_299(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x29BC1
struct<2>
func_300(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x29BF4
struct<2>
func_301(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2) || iParam0 == 3) {
	}
	else {
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x29C31
struct<2>
func_302(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x29C64
struct<2>
func_303(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &Global_82612[iParam0 /*34*/].f_8, 8);
	if (iParam0 == 90) {
		switch (Global_101700.f_8044.f_99.f_205[7]) {
		case 1: StringConCat(&Var0, "A", 8); break;

		case 2: StringConCat(&Var0, "B", 8); break;

		default: StringConCat(&Var0, "A", 8); break;
		}
	}
	return Var0;
}

//Position - 0x29CCD
bool func_304(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!func_307(0) || Global_69971 || Global_69960 == 1 || !cam::is_screen_faded_in()) {
		return false;
	}
	switch (Global_69956) {
	case 0:
		if (gameplay::are_strings_equal(&uParam1, "NONE") || gameplay::is_string_null_or_empty(&uParam1)) {
			Global_69956 = 3;
		}
		else {
			Global_69956 = 1;
		}
		break;

	case 1:
		if (cutscene::has_cutscene_loaded()) {
			Global_69956 = 2;
		}
		break;

	case 2:
		if (cutscene::is_cutscene_playing()) {
			Global_69956 = 4;
			return true;
		}
		else if (!cutscene::is_cutscene_active()) {
			Global_69956 = 3;
		}
		break;

	case 3:
		if (cutscene::is_cutscene_playing()) {
		}
		else {
			Global_69956 = 5;
			return true;
		}
		break;

	case 4:
		if (cutscene::is_cutscene_playing()) {
			return true;
		}
		else if (iParam0 == 1) {
			Global_69956 = 5;
		}
		break;

	case 5:
		if (cutscene::is_cutscene_playing() || func_306(0) || func_305(1)) {
		}
		else {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x29DE5
bool func_305(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0x29E0E
bool func_306(int iParam0) {
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

// Position - 0x29E68
int func_307(int iParam0) {
	if (Global_35781 == 15) {
		return 0;
	}
	if (func_308(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x29E8A
bool func_308(int iParam0) { return func_309(iParam0, Global_35781); }

// Position - 0x29E9B
int func_309(int iParam0, int iParam1) {
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

// Position - 0x2A07C
bool func_310(int iParam0, int iParam1, float fParam2, int iParam3) {
	return system::vdist2(entity::get_entity_coords(iParam0, iParam3), entity::get_entity_coords(iParam1, iParam3)) <=
		   fParam2 * fParam2;
}

// Position - 0x2A09E
bool func_311(int iParam0) {
	if (func_222(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x2A0BE
void func_312() {
	func_317(52, 1, 0);
	iLocal_153 = 0;
	Local_155.f_1 = {1658.42f, -8.02f, 174.78f - 1f};
	Local_155.f_4 = 116.87f;
	Local_155.f_5 = func_364(52);
	Local_155.f_9 = {1660.324f, -11.7125f, 173.9638f};
	Local_155.f_12 = 119.6007f;
	ui::request_additional_text("EXT4", 0);
	while (!ui::has_additional_text_loaded(0)) {
		system::wait(0);
	}
	streaming::request_model(joaat("prop_box_guncase_03a"));
	streaming::request_model(1165008631);
	streaming::request_model(joaat("p_parachute_s"));
	streaming::request_model(joaat("bmx"));
	while (!streaming::has_model_loaded(joaat("prop_box_guncase_03a")) || !streaming::has_model_loaded(1165008631) ||
		   !streaming::has_model_loaded(joaat("p_parachute_s")) || !streaming::has_model_loaded(joaat("bmx"))) {
		system::wait(0);
	}
	if (!entity::does_entity_exist(iLocal_175)) {
		iLocal_175 =
			object::create_object_no_offset(joaat("prop_box_guncase_03a"), 1658.299f, -7.930665f, 173.71f, 1, 1, 0);
		entity::set_entity_rotation(iLocal_175, 90f, 0f, -63f, 2, 1);
		entity::freeze_entity_position(iLocal_175, 1);
		entity::set_entity_visible(iLocal_175, 0, 0);
	}
	func_316(1);
	if (!entity::does_entity_exist(Local_155)) {
		func_313(&Local_155, 52, Local_155.f_1, Local_155.f_4, "Ext4-Dom", 1);
		entity::freeze_entity_position(Local_155, 1);
		ped::set_blocking_of_non_temporary_events(Local_155, 1);
		weapon::remove_all_ped_weapons(Local_155, 1);
		ped::set_ped_component_variation(Local_155, 8, 2, 0, 0);
		audio::disable_ped_pain_audio(Local_155, 1);
		ped::set_ped_config_flag(Local_155, 137, 1);
		ped::set_ped_config_flag(Local_155, 118, 0);
		ped::set_ped_config_flag(Local_155, 208, 1);
		ped::set_ped_money(Local_155, 5000);
	}
	if (func_222(player::player_ped_id())) {
		func_224(&uLocal_182, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
	}
	iLocal_375 = 0;
	iLocal_376 = 0;
	iLocal_377 = 0;
	iLocal_378 = 0;
	iLocal_379 = 0;
	iLocal_380 = 0;
	bLocal_381 = false;
	iLocal_383 = 0;
	iLocal_154 = 0;
	func_240(0);
}

// Position - 0x2A29B
int func_313(int iParam0, int iParam1, vector3 vParam2, float fParam5, char *sParam6, int iParam7) {
	if (func_314(iParam0, iParam1, vParam2, fParam5, 1)) {
		if (entity::does_entity_exist(*iParam0)) {
			if (!entity::is_entity_dead(*iParam0, 0)) {
				ped::set_blocking_of_non_temporary_events(*iParam0, 1);
				ped::set_ped_money(*iParam0, 0);
				if (iParam7 == 1) {
					ped::set_ped_can_be_targetted(*iParam0, 0);
				}
			}
			ped::set_ped_name_debug(*iParam0, sParam6);
		}
		return 1;
	}
	return 0;
}

// Position - 0x2A2F7
bool func_314(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6) {
	int iVar0;

	if (!func_158(iParam1)) {
		iVar0 = func_364(iParam1);
		streaming::request_model(iVar0);
		if (streaming::has_model_loaded(iVar0)) {
			if (entity::does_entity_exist(*uParam0)) {
				ped::delete_ped(uParam0);
			}
			*iParam0 = ped::create_ped(26, iVar0, vParam2, fParam5, 0, 0);
			ped::set_ped_default_component_variation(*iParam0);
			if (iVar0 == joaat("ig_lamardavis")) {
				if (ped::get_ped_drawable_variation(*iParam0, 3) == 0) {
					ped::set_ped_component_variation(*iParam0, 5, 2, 0, 0);
				}
			}
			func_315(*iParam0, iParam1);
			if (iParam6) {
				streaming::set_model_as_no_longer_needed(iVar0);
			}
			return true;
		}
	}
	return false;
}

// Position - 0x2A385
int func_315(var uParam0, int iParam1) {
	int iVar0;

	iVar0 = 7;
	if (iParam1 == 19) {
		iVar0 = 3;
	}
	else if (iParam1 == 14) {
		iVar0 = 4;
	}
	else if (iParam1 == 17) {
		iVar0 = 5;
	}
	else {
		iVar0 = 7;
		return 0;
	}
	Global_87658[iVar0 - 3] = uParam0;
	return 1;
}

// Position - 0x2A3CB
void func_316(int iParam0) {
	streaming::request_model(Local_155.f_5);
	streaming::request_anim_dict("rcmextreme4");
	streaming::request_anim_dict("skydive@parachute@");
	streaming::request_model(joaat("sanchez"));
	streaming::request_ptfx_asset();
	if (iParam0 == 1) {
		while (!streaming::has_model_loaded(Local_155.f_5) || !streaming::has_model_loaded(joaat("sanchez")) ||
			   !streaming::has_anim_dict_loaded("rcmextreme4") ||
			   !streaming::has_anim_dict_loaded("skydive@parachute@") || !streaming::has_ptfx_asset_loaded()) {
			system::wait(0);
		}
	}
}

// Position - 0x2A44B
void func_317(int iParam0, int iParam1, int iParam2) {
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		func_216();
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
						func_318();
					}
				}
				else {
					Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_318();
				}
			}
			else {
				Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_318();
			}
		}
	}
}

// Position - 0x2A5F5
void func_318() {
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

// Position - 0x2A674
int func_319(var *uParam0) {
	int iVar0[1];
	int iVar2;

	iVar0[0] = iLocal_81;
	switch (iLocal_79) {
	case 0:
		uParam0->f_16 = 0;
		uParam0->f_15 = 12f;
		StringCopy(&uParam0->f_9, "ES_4_RCM_P1", 24);
		uParam0->f_27 = 0;
		iVar2 = 0;
		while (iVar2 <= iVar0 - 1) {
			streaming::request_model(iVar0[iVar2]);
			iVar2++;
		}
		func_323(&uParam0->f_48, "rcmextreme4", "idle_a", "idle_c");
		iLocal_79 = 1;
		break;

	case 1:
		if (!func_322(&iVar0) || !func_320(&uParam0->f_48)) {
			return 0;
		}
		iLocal_79 = 2;
		break;

	case 2:
		func_276(&uParam0->f_28[0], 1732.27f, 96.36f, 170.29f, -98.56f);
		ped::set_ped_can_leg_ik(uParam0->f_28[0], 1);
		ped::set_ped_leg_ik_mode(uParam0->f_28[0], 2);
		iVar2 = 0;
		while (iVar2 <= iVar0 - 1) {
			streaming::set_model_as_no_longer_needed(iVar0[iVar2]);
			iVar2++;
		}
		return 1;
	}
	return 0;
}

// Position - 0x2A778
int func_320(var *uParam0) {
	if (func_321(uParam0)) {
		streaming::request_anim_dict(*uParam0);
		if (streaming::has_anim_dict_loaded(*uParam0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2A7A2
bool func_321(var *uParam0) {
	if (gameplay::is_string_null_or_empty(*uParam0) || gameplay::is_string_null_or_empty(uParam0->f_1)) {
		return false;
	}
	return true;
}

// Position - 0x2A7C7
int func_322(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= *iParam0 - 1) {
		if (!streaming::has_model_loaded((*iParam0)[iVar0])) {
			return 0;
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x2A7F8
void func_323(var *uParam0, char *sParam1, char *sParam2, char *sParam3) {
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = sParam3;
	streaming::request_anim_dict(*uParam0);
	uParam0->f_5 = {0f, 0f, 0f};
	uParam0->f_8 = {0f, 0f, 0f};
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

// Position - 0x2A834
bool func_324() {
	if (Global_91491 == 10 || Global_91491 == 9) {
		return true;
	}
	return false;
}

// Position - 0x2A858
void func_325(int iParam0) {
	func_286();
	if (func_339()) {
		func_2(iParam0);
		func_338();
	}
	ped::remove_scenario_blocking_area(iLocal_366, 0);
	audio::release_script_audio_bank();
	func_337(&iLocal_176, 0);
	func_337(&iLocal_177, 0);
	func_337(&iLocal_178, 0);
	ai::set_scenario_type_enabled("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 1);
	func_326(&Local_82, 1, 0, 0);
	script::terminate_this_thread();
}

// Position - 0x2A8AC
void func_326(var *uParam0, int iParam1, int iParam2, int iParam3) {
	func_334(uParam0, iParam1);
	func_329(uParam0, iParam2);
	func_327(uParam0, iParam3);
}

// Position - 0x2A8CC
void func_327(var *uParam0, bool bParam1) { func_328(&uParam0->f_41, bParam1); }

// Position - 0x2A8DE
void func_328(var *uParam0, bool bParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (bParam1) {
			func_3(&(*uParam0)[iVar0]);
		}
		else {
			func_337(&(*uParam0)[iVar0], 0);
		}
		iVar0++;
	}
}

// Position - 0x2A91C
void func_329(var *uParam0, bool bParam1) { func_330(&uParam0->f_35, bParam1); }

// Position - 0x2A92E
void func_330(var *uParam0, bool bParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (bParam1) {
			func_332(&(*uParam0)[iVar0]);
		}
		else {
			func_331(&(*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x2A96B
void func_331(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0x2A9A3
void func_332(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		if (func_333(*iParam0)) {
			if (entity::is_entity_a_mission_entity(*iParam0) &&
				entity::does_entity_belong_to_this_script(*iParam0, 1)) {
				if (func_222(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
						entity::set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				vehicle::delete_vehicle(iParam0);
			}
		}
		else {
			if (func_222(player::player_ped_id())) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
					entity::set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			vehicle::delete_vehicle(iParam0);
		}
	}
}

// Position - 0x2AA3F
bool func_333(int iParam0) {
	if (func_222(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2AA69
void func_334(var *uParam0, int iParam1) { func_335(&uParam0->f_28, iParam1); }

// Position - 0x2AA7B
void func_335(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (iParam1 == 1) {
			func_278(&(*uParam0)[iVar0]);
		}
		else {
			func_336(&(*uParam0)[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

// Position - 0x2AABC
void func_336(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!ped::is_ped_injured(*iParam0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
			if (iParam3 == 0) {
				ai::clear_ped_secondary_task(*iParam0);
			}
			ped::set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1) {
				ped::set_blocking_of_non_temporary_events(*iParam0, 0);
			}
		}
		entity::set_ped_as_no_longer_needed(iParam0);
	}
}

// Position - 0x2AB0B
void func_337(int *iParam0, int iParam1) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		if (!iParam1) {
			entity::set_object_as_no_longer_needed(iParam0);
		}
		else {
			object::_mark_object_for_deletion(*iParam0);
		}
	}
}

// Position - 0x2AB46
void func_338() {
	func_326(&Local_82, 1, 0, 0);
	func_336(&Local_82.f_28[0], 1, 0, 1);
	streaming::remove_anim_dict("rcmextreme4");
}

// Position - 0x2AB6D
bool func_339() {
	int iVar0;

	iVar0 = func_207();
	if (iVar0 == -1) {
		return false;
	}
	if (!Global_100787[iVar0 /*10*/].f_4) {
		return false;
	}
	Global_100787[iVar0 /*10*/].f_4 = 0;
	ui::clear_additional_text(0, 1);
	ui::clear_additional_text(3, 1);
	ui::clear_additional_text(2, 1);
	if (!func_12(0)) {
		if (Global_100787[iVar0 /*10*/].f_5 && Global_100787[iVar0 /*10*/].f_6) {
			Global_100787[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_100787[iVar0 /*10*/].f_6 && !Global_100787[iVar0 /*10*/].f_5) {
			Global_100787[iVar0 /*10*/].f_6 = 1;
		}
	}
	return true;
}

// Position - 0x2AC0E
void func_340(int iParam0) {
	int iVar0;

	func_360();
	if (!func_359()) {
		iVar0 = func_207();
		if (iVar0 == -1) {
			return;
		}
		if (!Global_100787[iVar0 /*10*/].f_4) {
			return;
		}
		if (Global_100787[iVar0 /*10*/].f_5) {
			return;
		}
		if (Global_100787[iVar0 /*10*/].f_6) {
			return;
		}
		if (Global_85999 == Global_91528) {
			Global_101700.f_17533[iVar0 /*6*/].f_4++;
		}
		Global_85999 = Global_91528;
		if (iParam0) {
			func_166(iVar0, 1, 0);
			func_341(script::get_this_script_name(), iVar0);
		}
		else {
			if (Global_100787[iVar0 /*10*/].f_9 == -1) {
			}
			else {
				func_177(&Global_100787[iVar0 /*10*/].f_9);
			}
			func_165(iVar0, 1, 1, 0);
		}
		Global_100787[iVar0 /*10*/].f_6 = 1;
	}
}

// Position - 0x2ACDE
void func_341(char *sParam0, int iParam1) {
	if (Global_91491 != 12) {
		if (func_342(sParam0, 6, iParam1)) {
			Global_91491.f_1 = iParam1;
		}
	}
}

// Position - 0x2AD06
bool func_342(char *sParam0, int iParam1, int iParam2) {
	int iVar0;
	struct<32> Var1;
	int iVar33;

	func_24();
	func_358();
	Global_91491 = 0;
	StringCopy(&Global_91491.f_3, sParam0, 32);
	Global_91491.f_11 = iParam1;
	gameplay::_disable_automatic_respawn(1);
	gameplay::set_fade_out_after_arrest(0);
	gameplay::set_fade_out_after_death(0);
	func_356(1);
	func_354(1);
	func_351(0);
	func_350(1);
	gameplay::clear_bit(&Global_91491.f_20, 9);
	gameplay::clear_bit(&Global_91491.f_20, 6);
	gameplay::clear_bit(&Global_91491.f_20, 20);
	gameplay::clear_bit(&Global_91491.f_20, 21);
	gameplay::clear_bit(&Global_91491.f_20, 5);
	if (entity::does_entity_exist(player::player_ped_id())) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (entity::is_entity_upsidedown(iVar0)) {
					gameplay::set_bit(&Global_91491.f_20, 5);
				}
			}
		}
	}
	ui::clear_help(1);
	ui::clear_prints();
	func_349(0);
	func_27(1);
	Global_91491.f_2 = Global_91528;
	if (func_348()) {
		if (func_347()) {
			if (Global_91528 >= func_344()) {
				if (!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 16)) {
					if (Global_101700.f_8044.f_330[iParam2 /*6*/].f_1 >= 2) {
						Global_86000 = 1;
					}
				}
			}
		}
		else if (Global_91491.f_11 == 6) {
			func_168(iParam2, &Var1);
			if (Var1.f_31 == 1) {
				if (Global_101700.f_17533[iParam2 /*6*/].f_4 >= 2) {
					Global_86000 = 1;
				}
			}
		}
		else {
			iVar33 = func_343(script::get_this_script_name());
			if (iVar33 > -1) {
				if (Global_101700.f_23945.f_4[iVar33] >= 2) {
					Global_86000 = 1;
				}
			}
		}
	}
	return true;
}

// Position - 0x2AE98
int func_343(char *sParam0) {
	if (gameplay::are_strings_equal("BailBond1", sParam0)) {
		return 0;
	}
	else if (gameplay::are_strings_equal("BailBond2", sParam0)) {
		return 1;
	}
	else if (gameplay::are_strings_equal("BailBond3", sParam0)) {
		return 2;
	}
	else if (gameplay::are_strings_equal("BailBond4", sParam0)) {
		return 3;
	}
	return -1;
}

// Position - 0x2AEEE
int func_344() {
	int iVar0;
	int iVar1;

	iVar0 = func_345(&Global_91491.f_3, 0);
	iVar1 = 0;
	if (iVar0 == 53) {
		iVar1 = 1;
	}
	return iVar1;
}

// Position - 0x2AF12
int func_345(char *sParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = gameplay::get_hash_key(sParam0);
	iVar1 = func_346(iVar0, 1);
	if (iVar1 == -1 && !iParam1) {
	}
	return iVar1;
}

// Position - 0x2AF3C
int func_346(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 94) {
		if (Global_82612[iVar0 /*34*/].f_6 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	if (!iParam1) {
	}
	return -1;
}

// Position - 0x2AF72
bool func_347() {
	if (Global_91491.f_11 == 0 || Global_91491.f_11 == 1 || Global_91491.f_11 == 2 || Global_91491.f_11 == 3 ||
		Global_91491.f_11 == 4) {
		return true;
	}
	return false;
}

// Position - 0x2AFC2
bool func_348() {
	if (Global_91491.f_11 == 0 || Global_91491.f_11 == 1 || Global_91491.f_11 == 2 || Global_91491.f_11 == 6 ||
		Global_91491.f_11 == 3) {
		return true;
	}
	if (Global_91491.f_11 == 5) {
		if (func_343(&Global_91491.f_3) > -1) {
			return true;
		}
	}
	return false;
}

// Position - 0x2B02E
void func_349(int iParam0) {
	ui::display_hud(iParam0);
	ui::display_radar(iParam0);
}

// Position - 0x2B042
void func_350(int iParam0) {
	if (iParam0 == 1) {
		ui::_0xFDB423997FA30340();
		gameplay::set_bit(&Global_91491.f_20, 3);
	}
	else if (gameplay::is_bit_set(Global_91491.f_20, 3)) {
		ui::_0xE1CD1E48E025E661();
		gameplay::clear_bit(&Global_91491.f_20, 3);
	}
}

// Position - 0x2B07F
void func_351(int iParam0) {
	if (iParam0 == 1) {
		if (gameplay::is_bit_set(Global_91491.f_20, 4)) {
			func_353();
			gameplay::clear_bit(&Global_91491.f_20, 4);
		}
	}
	else {
		func_352();
		gameplay::set_bit(&Global_91491.f_20, 4);
	}
}

// Position - 0x2B0BC
void func_352() { Global_17151.f_5 = 1; }

// Position - 0x2B0CA
void func_353() { Global_17151.f_5 = 0; }

// Position - 0x2B0D8
void func_354(int iParam0) {
	if (iParam0) {
		func_355();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_306(0)) {
			func_356(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x2B13B
void func_355() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

// Position - 0x2B164
void func_356(int iParam0) {
	if (Global_14604) {
		func_357(0, 0);
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
	if (!func_214()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x2B1D4
void func_357(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_306(0)) {
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

// Position - 0x2B248
void func_358() {
	Global_86000 = 0;
	Global_86001 = 0;
}

// Position - 0x2B25A
int func_359() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}

// Position - 0x2B298
void func_360() {
	Global_91526 = 1;
	if (player::is_player_being_arrested(player::player_id(), 1)) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_217()) {
			case 0: StringCopy(&Global_69934, "CMN_MARRE", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FARRE", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TARRE", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
	}
	else if (!player::is_player_playing(player::player_id())) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_217()) {
			case 0: StringCopy(&Global_69934, "CMN_MDIED", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FDIED", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TDIED", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
		gameplay::set_bit(&Global_91491.f_20, 25);
	}
}

// Position - 0x2B385
void func_361(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
	}
}

// Position - 0x2B397
void func_362(var *uParam0) {
	func_363(&uParam0->f_28);
	func_363(&uParam0->f_35);
	func_363(&uParam0->f_41);
}

// Position - 0x2B3B7
void func_363(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (entity::does_entity_exist((*uParam0)[iVar0])) {
			entity::set_entity_as_mission_entity((*uParam0)[iVar0], 0, 1);
		}
		iVar0++;
	}
}

// Position - 0x2B3F1
int func_364(int iParam0) {
	if (!func_158(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}
