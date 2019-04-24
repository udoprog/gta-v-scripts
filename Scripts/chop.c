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
var uLocal_20 = 0;
char *sLocal_21 = NULL;
var uLocal_22 = 0;
var uLocal_23 = 0;
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
var uLocal_40 = 0;
var uLocal_41 = 0;
var uLocal_42 = 0;
int iLocal_43 = 0;
int iLocal_44 = 0;
int iLocal_45 = 0;
int iLocal_46 = 0;
var uLocal_47 = 0;
var uLocal_48 = 0;
var uLocal_49 = 0;
int iLocal_50 = 0;
int iLocal_51 = 0;
int iLocal_52 = 0;
int iLocal_53 = 0;
int iLocal_54 = 0;
int iLocal_55 = 0;
int iLocal_56 = 0;
int iLocal_57 = 0;
int iLocal_58 = 0;
int iLocal_59 = 0;
int iLocal_60 = 0;
int iLocal_61 = 0;
int iLocal_62 = 0;
int iLocal_63 = 0;
int iLocal_64 = 0;
int iLocal_65 = 0;
int iLocal_66 = 0;
int iLocal_67 = 0;
int iLocal_68 = 0;
int iLocal_69 = 0;
int *iLocal_70 = NULL;
int iLocal_71 = 0;
int iLocal_72 = 0;
int iLocal_73 = 0;
int iLocal_74 = 0;
int iLocal_75 = 0;
vector3 vLocal_76 = {0f, 0f, 0f};
int iLocal_79 = 0;
int iLocal_80 = 0;
int iLocal_81 = 0;
char *sLocal_82[3] = {NULL, NULL, NULL};
char *sLocal_86 = NULL;
int iLocal_87 = 0;
int iLocal_88 = 0;
vector3 vLocal_89[4] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_102[4] = {0f, 0f, 0f, 0f};
int iLocal_107 = 0;
int iLocal_108 = 0;
struct<4> Local_109 = {
	0, 0, 0, 0
};
var uLocal_113 = 0;
var uLocal_114 = 0;
var uLocal_115 = 0;
var uLocal_116 = 0;
int iLocal_117 = 0;
int iLocal_118 = 0;
int iLocal_119 = 0;
var *uLocal_120 = NULL;
var uLocal_121 = 0;
var uLocal_122 = 0;
var uLocal_123 = 0;
var uLocal_124 = 0;
var uLocal_125 = 0;
var uLocal_126 = 0;
var uLocal_127 = 0;
var uLocal_128 = 0;
var uLocal_129 = 0;
var uLocal_130 = 0;
var uLocal_131 = 0;
var uLocal_132 = 0;
var uLocal_133 = 0;
var uLocal_134 = 0;
var uLocal_135 = 0;
var uLocal_136 = 0;
var uLocal_137 = 0;
var uLocal_138 = 0;
var uLocal_139 = 0;
var uLocal_140 = 0;
var uLocal_141 = 0;
var uLocal_142 = 0;
var uLocal_143 = 0;
var uLocal_144 = 0;
var uLocal_145 = 0;
var uLocal_146 = 0;
var uLocal_147 = 0;
var uLocal_148 = 0;
var uLocal_149 = 0;
var uLocal_150 = 0;
var uLocal_151 = 0;
var uLocal_152 = 0;
var uLocal_153 = 0;
var uLocal_154 = 0;
var uLocal_155 = 0;
var uLocal_156 = 0;
var uLocal_157 = 0;
var uLocal_158 = 0;
var uLocal_159 = 0;
var uLocal_160 = 0;
var uLocal_161 = 0;
var uLocal_162 = 0;
var uLocal_163 = 0;
var uLocal_164 = 0;
var uLocal_165 = 0;
var uLocal_166 = 0;
var uLocal_167 = 0;
var uLocal_168 = 0;
var uLocal_169 = 0;
var uLocal_170 = 0;
var uLocal_171 = 0;
var *uLocal_172 = NULL;
var uLocal_173 = 0;
var uLocal_174 = 0;
var uLocal_175 = 0;
var uLocal_176 = 0;
var uLocal_177 = 0;
var uLocal_178 = 0;
var uLocal_179 = 0;
var uLocal_180 = 0;
var uLocal_181 = 0;
var uLocal_182 = 0;
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
int iLocal_337 = 0;
int iLocal_338 = 0;
int iLocal_339 = 0;
int iLocal_340 = 0;
int iLocal_341[5] = {0, 0, 0, 0, 0};
float fLocal_347[5] = {0f, 0f, 0f, 0f, 0f};
vector3 vLocal_353[5] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_369[5] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
int iLocal_385 = 0;
vector3 vLocal_386 = {0f, 0f, 0f};
vector3 vLocal_389 = {0f, 0f, 0f};
float fLocal_392 = 0f;
int iLocal_393 = 0;
int iLocal_394 = 0;
int iLocal_395 = 0;
int iLocal_396 = 0;
vector3 vLocal_397 = {0f, 0f, 0f};
var uLocal_400 = 0;
var uLocal_401 = 0;
var uLocal_402 = 0;
var uLocal_403 = 0;
var uLocal_404 = 0;
var uLocal_405 = 0;
int iLocal_406 = 0;
int iLocal_407 = 0;
int iLocal_408 = 0;
int iLocal_409 = 0;
int iLocal_410 = 0;
float fLocal_411 = 0f;
int iLocal_412 = 0;
int iLocal_413 = 0;
int iLocal_414 = 0;
vector3 vLocal_415 = {0f, 0f, 0f};
int *iLocal_418 = NULL;
vector3 vLocal_419 = {0f, 0f, 0f};
int iLocal_422 = 0;
int *iLocal_423 = NULL;
int iLocal_424 = 0;
vector3 vLocal_425 = {0f, 0f, 0f};
vector3 vLocal_428 = {0f, 0f, 0f};
float fLocal_431 = 0f;
vector3 vLocal_432 = {0f, 0f, 0f};
vector3 vLocal_435 = {0f, 0f, 0f};
int iLocal_438 = 0;
int iLocal_439 = 0;
vector3 vLocal_440[8] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
int iLocal_465 = 0;
int iLocal_466 = 0;
int iLocal_467 = 0;
var uLocal_468 = 0;
var uLocal_469 = 0;
var uLocal_470 = 0;
int iLocal_471 = 0;
int iLocal_472 = 0;
int iLocal_473 = 0;
int iLocal_474 = 0;
int iLocal_475 = 0;
char *sLocal_476 = NULL;
char *sLocal_477 = NULL;
int iLocal_478 = 0;
int iLocal_479 = 0;
int iLocal_480 = 0;
int iLocal_481 = 0;
int iLocal_482 = 0;
int iLocal_483 = 0;
int iLocal_484 = 0;
int iLocal_485 = 0;
int iLocal_486 = 0;
int iLocal_487 = 0;
int iLocal_488 = 0;
int iLocal_489 = 0;
int iLocal_490 = 0;
int iLocal_491 = 0;
int iLocal_492 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iLocal_54 = -1;
	sLocal_86 = "null";
	iLocal_87 = -1;
	iLocal_88 = -1;
	iLocal_118 = 1;
	fLocal_392 = 200f;
	iLocal_413 = gameplay::get_game_timer();
	iLocal_414 = 10000;
	iLocal_466 = -1;
	iLocal_475 = 1486715695;
	sLocal_476 = "std_ds_open_door_for_chop";
	sLocal_477 = "creatures@rottweiler@in_vehicle@std_car";
	iLocal_485 = gameplay::get_game_timer();
	iLocal_488 = gameplay::get_game_timer();
	iLocal_490 = audio::get_sound_id();
	if (player::has_force_cleanup_occurred(3)) {
		func_179();
	}
	while (!cam::is_screen_faded_in()) {
		system::wait(0);
	}
	iLocal_492 = cam::is_gameplay_hint_active();
	vLocal_415 = {ScriptParam_0.f_1[0 /*3*/]};
	if (script::_get_number_of_instances_of_script_with_name_hash(script::get_hash_of_this_script_name()) > 1) {
		func_179();
	}
	if (!func_178(63)) {
		func_179();
	}
	if (!func_177(5) && !func_177(6)) {
		func_179();
	}
	if (func_177(6) && func_176(vLocal_415, 1, 0) == 5) {
		func_179();
	}
	if (!func_170(1)) {
		func_179();
	}
	if (Global_25337 == 1) {
		func_179();
	}
	if (Global_88744 == 1) {
		func_179();
	}
	if (func_167(0)) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("sh_intro_f_hills")) == 0 &&
			script::_get_number_of_instances_of_script_with_name_hash(joaat("martin1")) == 0) {
			func_179();
		}
	}
	if (func_166() == 206 || func_166() == 207 || func_166() == 204 || func_166() == 205 || func_166() == 203) {
		iLocal_393 = 1;
	}
	else if (func_166() == 47) {
		iLocal_394 = 1;
	}
	else {
		if (gameplay::get_distance_between_coords(vLocal_415, 154.0731f, 765.5721f, 209.6901f, 1) <= 50f ||
			gameplay::get_distance_between_coords(vLocal_415, -268.139f, 415.2881f, 109.7258f, 1) <= 50f ||
			gameplay::get_distance_between_coords(vLocal_415, 314.4171f, 965.207f, 208.4024f, 1) <= 50f) {
			func_179();
		}
		iLocal_393 = 0;
		iLocal_394 = 0;
		if (Global_69700 == 1) {
			func_179();
		}
	}
	while (true) {
		if (!func_163()) {
			switch (iLocal_50) {
			case 0: func_154(); break;

			case 1: func_1(); break;
			}
		}
		else {
			func_179();
		}
		system::wait(0);
	}
}

// Position - 0x2AC
void func_1() {
	if (ped::is_ped_injured(player::player_ped_id())) {
		return;
	}
	if (ped::is_ped_injured(iLocal_69)) {
		return;
	}
	func_152();
	func_151();
	if (iLocal_51 != 11) {
		func_150();
		func_149();
		func_129();
		func_128();
		func_126();
	}
	func_2();
}

// Position - 0x2F5
void func_2() {
	int iVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;

	switch (iLocal_51) {
	case 11:
		if (iLocal_52 == 0) {
			streaming::request_anim_dict("creatures@rottweiler@amb@sleep_in_kennel@");
			if (streaming::has_anim_dict_loaded("creatures@rottweiler@amb@sleep_in_kennel@")) {
				if (func_125(iLocal_69)) {
					ai::task_play_anim(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "sleep_in_kennel", 1000f,
									   -8f, -1, 1, 0, 0, 0, 0);
					func_124(iLocal_69, vLocal_397.f_5, vLocal_397.f_8, 0, 1);
				}
				iLocal_406 = gameplay::get_game_timer();
				iLocal_52++;
			}
		}
		else if (iLocal_52 == 1) {
			if (func_123()) {
				streaming::request_anim_dict("creatures@rottweiler@amb@sleep_in_kennel@");
				if (streaming::has_anim_dict_loaded("creatures@rottweiler@amb@sleep_in_kennel@") &&
					func_125(iLocal_69)) {
					ai::task_play_anim(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "exit_kennel", 8f, -8f,
									   -1, 0, 0, 0, 0, 0);
					func_122("WHINE");
					iLocal_52++;
				}
			}
		}
		else if (iLocal_52 == 2) {
			if (ai::get_script_task_status(iLocal_69, -2017877118) == 7) {
				streaming::remove_anim_dict("creatures@rottweiler@amb@sleep_in_kennel@");
				func_122("PLAYFUL");
				func_121(1, 1);
			}
		}
		break;

	case 1:
		if (iLocal_408 == 0 && func_118(player::player_ped_id(), 1)) {
			func_121(18, 1);
		}
		else {
			func_117();
			func_116();
			func_115();
		}
		break;

	case 17:
		func_117();
		func_116();
		if (iLocal_52 == 0) {
			streaming::request_anim_dict(sLocal_82[0]);
			streaming::request_anim_dict(sLocal_82[1]);
			streaming::request_anim_dict(sLocal_82[2]);
			if (streaming::has_anim_dict_loaded(sLocal_82[0]) && streaming::has_anim_dict_loaded(sLocal_82[1]) &&
				streaming::has_anim_dict_loaded(sLocal_82[2])) {
				ai::task_play_anim(iLocal_69, sLocal_82[0], "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_52++;
			}
		}
		else if (iLocal_52 == 1) {
			if (!func_113(iLocal_69, -2017877118) ||
				entity::is_entity_playing_anim(iLocal_69, sLocal_82[0], "enter", 3) &&
					entity::get_entity_anim_current_time(iLocal_69, sLocal_82[0], "enter") > 0.98f ||
				entity::is_entity_playing_anim(iLocal_69, sLocal_82[1], sLocal_86, 3) &&
					entity::get_entity_anim_current_time(iLocal_69, sLocal_82[1], sLocal_86) > 0.98f) {
				if (iLocal_53 == 0) {
					if (iLocal_81 == 1) {
						ai::task_play_anim(iLocal_69, sLocal_82[1], "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
						sLocal_86 = "base";
						iLocal_52++;
					}
					else {
						func_112();
						if (gameplay::get_random_int_in_range(0, 4) == 0) {
							iLocal_52++;
						}
					}
				}
				else {
					if (iLocal_53 != 5) {
						func_108("CHOP_WAIT", 0);
					}
					ai::task_play_anim(iLocal_69, sLocal_82[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_52 = 3;
				}
			}
		}
		else if (iLocal_52 == 2) {
			if (!func_113(iLocal_69, -2017877118) ||
				entity::is_entity_playing_anim(iLocal_69, sLocal_82[1], sLocal_86, 3) &&
					entity::get_entity_anim_current_time(iLocal_69, sLocal_82[1], sLocal_86) > 0.98f) {
				ai::task_play_anim(iLocal_69, sLocal_82[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_52++;
			}
		}
		else if (iLocal_52 == 3) {
			if (!func_113(iLocal_69, -2017877118)) {
				iLocal_422 = 0;
				if (iLocal_53 == 0) {
					func_121(1, 1);
				}
				else {
					func_121(iLocal_53, 1);
				}
			}
		}
		break;

	case 18:
		func_116();
		if (iLocal_52 == 0) {
			streaming::request_anim_dict("creatures@rottweiler@amb@world_dog_barking@enter");
			streaming::request_anim_dict("creatures@rottweiler@amb@world_dog_barking@idle_a");
			streaming::request_anim_dict("creatures@rottweiler@amb@world_dog_barking@exit");
			ai::task_go_to_entity(iLocal_69, player::player_ped_id(), 20000, 3f, 1f, 1073741824, 0);
			iLocal_52++;
		}
		else if (iLocal_52 == 1) {
			if (iLocal_53 == 0) {
				if (!func_113(iLocal_69, 1227113341)) {
					if (streaming::has_anim_dict_loaded("creatures@rottweiler@"
														"amb@world_dog_barking@"
														"enter") &&
						streaming::has_anim_dict_loaded("creatures@rottweiler@"
														"amb@world_dog_barking@"
														"idle_a") &&
						streaming::has_anim_dict_loaded("creatures@rottweiler@"
														"amb@world_dog_barking@"
														"exit")) {
						ai::open_sequence_task(&iLocal_119);
						ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
						ai::task_play_anim(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1,
										   0, 0, 0, 0, 0);
						ai::task_play_anim(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f,
										   -1, 0, 0, 0, 0, 0);
						ai::task_play_anim(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0,
										   0, 0, 0, 0);
						ai::close_sequence_task(iLocal_119);
						ai::task_perform_sequence(iLocal_69, iLocal_119);
						ai::clear_sequence_task(&iLocal_119);
						iLocal_52++;
					}
				}
			}
			else {
				func_121(iLocal_53, 1);
			}
		}
		else if (iLocal_52 == 2) {
			if (func_107()) {
				iLocal_408 = 1;
				if (iLocal_53 == 0) {
					func_121(1, 1);
				}
				else {
					func_121(iLocal_53, 1);
				}
			}
		}
		break;

	case 2:
		func_102();
		if (iLocal_52 == 0) {
			if (func_125(iLocal_69) && !ped::is_ped_in_any_vehicle(iLocal_69, 0) && !ped::is_ped_in_group(iLocal_69)) {
				ai::clear_ped_tasks(iLocal_69);
			}
			func_100();
			func_99(0, 0, 0);
			func_98(1);
			iLocal_60 = -1;
			iLocal_340 = gameplay::get_game_timer();
			iLocal_62 = gameplay::get_game_timer();
			iLocal_63 = gameplay::get_game_timer() - 10000;
			vLocal_76 = {entity::get_entity_coords(iLocal_69, 1)};
			streaming::request_anim_dict("creatures@rottweiler@melee@streamed_taunts@");
			iLocal_52++;
		}
		else if (iLocal_52 == 1) {
			func_83();
			func_54();
			func_53();
			func_45();
			func_44();
			func_41();
			func_117();
		}
		break;

	case 3:
		if (iLocal_52 == 0) {
			func_122("WHINE");
			func_108("CHOP_GOHOME", 0);
			func_40(0);
			streaming::remove_anim_dict("creatures@rottweiler@melee@streamed_taunts@");
			if (func_125(player::player_ped_id()) &&
				weapon::has_ped_got_weapon(player::player_ped_id(), joaat("weapon_ball"), 0)) {
				weapon::remove_weapon_from_ped(player::player_ped_id(), joaat("weapon_ball"));
			}
			if (ped::is_ped_in_group(iLocal_69)) {
				ped::remove_ped_from_group(iLocal_69);
			}
			if (func_118(iLocal_69, 1)) {
				func_121(1, 1);
			}
			else if (func_39(iLocal_69, vLocal_397, 1) < 100f) {
				ai::clear_ped_tasks(iLocal_69);
				if (func_39(iLocal_69, vLocal_397, 1) < 20f) {
					ai::task_follow_nav_mesh_to_coord(iLocal_69, vLocal_397, 1f, 20000, 0.25f, 32, vLocal_397.f_3);
				}
				else {
					ai::task_follow_nav_mesh_to_coord(iLocal_69, vLocal_397, 3f, 60000, 0.25f, 32, vLocal_397.f_3);
				}
				iLocal_52++;
			}
			else {
				func_121(4, 1);
			}
		}
		else if (iLocal_52 == 1) {
			if (ai::get_script_task_status(iLocal_69, 713668775) == 7) {
				if (entity::is_entity_at_coord(iLocal_69, vLocal_397, 2.5f, 2.5f, 4f, 0, 1, 0)) {
					func_121(1, 1);
				}
				else {
					func_121(3, 1);
				}
			}
		}
		break;

	case 4:
		if (!func_113(iLocal_69, 1805844857)) {
			ai::task_smart_flee_ped(iLocal_69, player::player_ped_id(), 100f, -1, 0, 0);
		}
		break;

	case 5:
		if (iLocal_52 == 0) {
			if (func_38()) {
				if (func_35()) {
					if (ped::is_ped_in_group(iLocal_69)) {
						ped::remove_ped_from_group(iLocal_69);
					}
					ai::clear_ped_tasks(iLocal_69);
					iLocal_56 = gameplay::get_game_timer();
					iLocal_58 = 1000;
					iLocal_409 = 0;
					iLocal_67 = -1;
					func_34();
					iLocal_52++;
				}
				else {
					func_32();
				}
			}
		}
		else if (iLocal_52 == 1) {
			if (!func_24() || ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) && !func_22() ||
				iLocal_67 > -1 && gameplay::get_game_timer() - iLocal_67 > 30000 ||
				entity::is_entity_at_coord(player::player_ped_id(), vLocal_386, 1f, 1f, 1f, 0, 1, 0)) {
				iLocal_52++;
			}
			else if (entity::is_entity_at_coord(iLocal_69, vLocal_389, 3f, 3f, 4f, 0, 1, 0)) {
				func_20();
				if (iLocal_67 == -1) {
					iLocal_67 = gameplay::get_game_timer();
				}
			}
			else {
				func_18();
				if (func_113(iLocal_69, 713668775)) {
					iVar0 = ai::get_navmesh_route_distance_remaining(iLocal_69, &uVar2, &uVar1);
					if (iVar0 == 2) {
						iLocal_409++;
					}
					else if (iVar0 == 3) {
						if (iLocal_409 != 0) {
							iLocal_409 = 0;
						}
					}
					if (iLocal_409 > 9) {
						func_32();
					}
				}
				else {
					ai::task_follow_nav_mesh_to_coord(iLocal_69, vLocal_389, 3f, -1, 3f, 36, 1193033728);
				}
			}
		}
		else if (iLocal_52 == 2) {
			ai::clear_ped_tasks(iLocal_69);
			streaming::remove_anim_dict("creatures@rottweiler@indication@");
			func_121(2, 1);
		}
		func_102();
		break;

	case 6:
		if (iLocal_52 == 0) {
			if (ped::is_ped_in_group(iLocal_69)) {
				ped::remove_ped_from_group(iLocal_69);
			}
			ped::set_blocking_of_non_temporary_events(iLocal_69, 0);
			iLocal_52++;
		}
		else if (iLocal_52 == 1) {
			if (func_125(player::player_ped_id())) {
				if (!func_113(iLocal_69, 780511057) && !ped::is_ped_in_combat(iLocal_69, 0) ||
					ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					iLocal_62 = gameplay::get_game_timer();
					func_121(2, 1);
				}
			}
		}
		func_102();
		break;

	case 7:
		if (iLocal_52 == 0) {
			streaming::request_anim_dict("creatures@rottweiler@tricks@");
			if (streaming::has_anim_dict_loaded("creatures@rottweiler@tricks@")) {
				ai::clear_ped_tasks(iLocal_69);
				ai::open_sequence_task(&iLocal_119);
				if (!ped::is_ped_facing_ped(iLocal_69, player::player_ped_id(), 10f)) {
					ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
				}
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "beg_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "beg_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::close_sequence_task(iLocal_119);
				ai::task_perform_sequence(iLocal_69, iLocal_119);
				ai::clear_sequence_task(&iLocal_119);
				func_122("PLAYFUL");
				iLocal_52++;
			}
		}
		else if (iLocal_52 == 1) {
			if (func_107()) {
				func_108("CHOP_RETURN1", 0);
				streaming::remove_anim_dict("creatures@rottweiler@tricks@");
				func_17();
			}
		}
		break;

	case 8:
		if (iLocal_52 == 0) {
			streaming::request_anim_dict("creatures@rottweiler@tricks@");
			if (streaming::has_anim_dict_loaded("creatures@rottweiler@tricks@")) {
				ai::clear_ped_tasks(iLocal_69);
				ai::open_sequence_task(&iLocal_119);
				if (!ped::is_ped_facing_ped(iLocal_69, player::player_ped_id(), 10f)) {
					ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
				}
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::close_sequence_task(iLocal_119);
				ai::task_perform_sequence(iLocal_69, iLocal_119);
				ai::clear_sequence_task(&iLocal_119);
				func_122("PLAYFUL");
				iLocal_52++;
			}
		}
		else if (iLocal_52 == 1) {
			if (func_107()) {
				func_108("CHOP_RETURN1", 0);
				streaming::remove_anim_dict("creatures@rottweiler@tricks@");
				func_17();
			}
		}
		break;

	case 9:
		if (iLocal_52 == 0) {
			streaming::request_anim_dict("creatures@rottweiler@tricks@");
			if (streaming::has_anim_dict_loaded("creatures@rottweiler@tricks@")) {
				ai::clear_ped_tasks(iLocal_69);
				ai::open_sequence_task(&iLocal_119);
				if (!ped::is_ped_facing_ped(iLocal_69, player::player_ped_id(), 10f)) {
					ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
				}
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "paw_right_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "paw_right_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::close_sequence_task(iLocal_119);
				ai::task_perform_sequence(iLocal_69, iLocal_119);
				ai::clear_sequence_task(&iLocal_119);
				func_122("PLAYFUL");
				iLocal_52++;
			}
		}
		else if (iLocal_52 == 1) {
			if (func_107()) {
				func_108("CHOP_RETURN1", 0);
				streaming::remove_anim_dict("creatures@rottweiler@tricks@");
				func_17();
			}
		}
		break;

	case 10:
		controls::disable_control_action(0, 32, 1);
		controls::disable_control_action(0, 34, 1);
		controls::disable_control_action(0, 35, 1);
		controls::disable_control_action(0, 33, 1);
		controls::disable_control_action(0, 31, 1);
		controls::disable_control_action(0, 30, 1);
		controls::disable_control_action(0, 22, 1);
		controls::disable_control_action(0, 36, 1);
		controls::disable_control_action(0, 44, 1);
		controls::disable_control_action(0, 141, 1);
		controls::disable_control_action(0, 140, 1);
		controls::disable_control_action(0, 263, 1);
		controls::disable_control_action(0, 264, 1);
		controls::disable_control_action(0, 143, 1);
		controls::disable_control_action(0, 24, 1);
		controls::disable_control_action(0, 257, 1);
		controls::disable_control_action(0, 262, 1);
		controls::disable_control_action(0, 261, 1);
		controls::disable_control_action(0, 37, 1);
		controls::disable_control_action(0, 21, 1);
		if (iLocal_52 == 0) {
			streaming::request_anim_dict("creatures@rottweiler@tricks@");
			ai::clear_ped_tasks(player::player_ped_id());
			ai::task_turn_ped_to_face_entity(player::player_ped_id(), iLocal_69, 0);
			iLocal_52++;
		}
		else if (iLocal_52 == 1) {
			if (ai::get_script_task_status(player::player_ped_id(), -875674219) == 7) {
				ai::clear_ped_tasks(iLocal_69);
				vVar3 = {entity::get_offset_from_entity_in_world_coords(player::player_ped_id(), 0f, 1f, 1f)};
				gameplay::get_ground_z_for_3d_coord(vVar3, &vVar3.f_2, 0);
				if (func_39(iLocal_69, vVar3, 0) > 0.3f) {
					ai::task_follow_nav_mesh_to_coord(iLocal_69, vVar3, 1f, 5000, 1048576000, 0, 1193033728);
				}
				iLocal_52++;
			}
		}
		else if (iLocal_52 == 2) {
			if (ai::get_script_task_status(iLocal_69, 713668775) == 7 || func_39(iLocal_69, vVar3, 0) < 0.3f) {
				if (!ped::is_ped_facing_ped(iLocal_69, player::player_ped_id(), 15f)) {
					ai::task_turn_ped_to_face_entity(iLocal_69, player::player_ped_id(), 0);
					iLocal_482 = 0;
				}
				else {
					iLocal_482 = 1;
				}
				if (!ped::is_ped_facing_ped(player::player_ped_id(), iLocal_69, 15f)) {
					ai::task_turn_ped_to_face_entity(player::player_ped_id(), iLocal_69, 0);
					iLocal_483 = 0;
				}
				else {
					iLocal_483 = 1;
				}
				iLocal_52++;
			}
		}
		else if (iLocal_52 == 3) {
			streaming::request_anim_dict("creatures@rottweiler@tricks@");
			if (iLocal_482 == 1 || ai::get_script_task_status(iLocal_69, -875674219) == 7)
				&&(iLocal_483 == 1 || ai::get_script_task_status(player::player_ped_id(), -875674219) == 7) &&
					streaming::has_anim_dict_loaded("creatures@rottweiler@tricks@") {
					ai::task_play_anim(iLocal_69, "creatures@rottweiler@tricks@", "petting_chop", 8f, -8f, -1, 8, 0, 0,
									   0, 0);
					ai::task_play_anim(player::player_ped_id(), "creatures@rottweiler@tricks@", "petting_franklin", 8f,
									   -8f, -1, 8, 0, 0, 0, 0);
					func_122("PLAYFUL");
					iLocal_52++;
				}
		}
		else if (iLocal_52 == 4) {
			if (ai::get_script_task_status(iLocal_69, -2017877118) == 7) {
				func_108("CHOP_RETURN1", 0);
				streaming::remove_anim_dict("creatures@rottweiler@tricks@");
				func_17();
			}
		}
		break;

	case 12:
		if (iLocal_52 == 0) {
			if (ped::is_ped_in_group(iLocal_69)) {
				ped::remove_ped_from_group(iLocal_69);
			}
			streaming::request_anim_dict("creatures@rottweiler@tricks@");
			if (streaming::has_anim_dict_loaded("creatures@rottweiler@tricks@")) {
				ai::clear_ped_tasks(iLocal_69);
				ai::open_sequence_task(&iLocal_119);
				ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4097, 0, 0, 0, 0);
				ai::close_sequence_task(iLocal_119);
				ai::task_perform_sequence(iLocal_69, iLocal_119);
				ai::clear_sequence_task(&iLocal_119);
				iLocal_52++;
			}
		}
		else if (iLocal_52 == 1) {
			if (!func_16()) {
				streaming::request_anim_dict("creatures@rottweiler@tricks@");
				if (streaming::has_anim_dict_loaded("creatures@rottweiler@tricks@")) {
					ai::clear_ped_tasks(iLocal_69);
					ai::task_play_anim(iLocal_69, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0,
									   0, 0);
					func_108("CHOP_WALK", 0);
					iLocal_52++;
				}
			}
		}
		else if (iLocal_52 == 2) {
			if (ai::get_script_task_status(iLocal_69, -2017877118) == 7) {
				streaming::remove_anim_dict("creatures@rottweiler@tricks@");
				iLocal_62 = gameplay::get_game_timer();
				func_121(2, 1);
			}
		}
		break;

	case 13:
		if (iLocal_52 == 0) {
			if (ped::is_ped_in_group(iLocal_69)) {
				ped::remove_ped_from_group(iLocal_69);
			}
			streaming::request_anim_dict("creatures@rottweiler@move");
			streaming::request_ptfx_asset();
			if (streaming::has_anim_dict_loaded("creatures@rottweiler@move") && streaming::has_ptfx_asset_loaded()) {
				ai::clear_ped_tasks(iLocal_69);
				ai::open_sequence_task(&iLocal_119);
				ai::task_play_anim(0, "creatures@rottweiler@move", "dump_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@move", "dump_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::task_play_anim(0, "creatures@rottweiler@move", "dump_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
				ai::close_sequence_task(iLocal_119);
				ai::task_perform_sequence(iLocal_69, iLocal_119);
				ai::clear_sequence_task(&iLocal_119);
				func_122("AGITATED");
				iLocal_64 = gameplay::get_game_timer();
				iLocal_52++;
			}
		}
		else if (iLocal_52 == 1) {
			if (func_107()) {
				if (graphics::does_particle_fx_looped_exist(iLocal_79)) {
					graphics::stop_particle_fx_looped(iLocal_79, 0);
				}
				if (func_118(iLocal_69, 0)) {
					func_121(1, 1);
				}
				else {
					func_121(2, 1);
				}
			}
			else if (!graphics::does_particle_fx_looped_exist(iLocal_79)) {
				if (iLocal_64 > -1 && gameplay::get_game_timer() - iLocal_64 > 4000) {
					iLocal_79 = graphics::start_particle_fx_looped_on_entity("ent_anim_dog_poo", iLocal_69, 0f, -0.15f,
																			 -0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
			}
			else if (gameplay::get_game_timer() - iLocal_64 > 10000) {
				graphics::stop_particle_fx_looped(iLocal_79, 0);
				iLocal_64 = -1;
			}
		}
		break;

	case 14:
		if (iLocal_52 == 0) {
			streaming::request_ptfx_asset();
			if (streaming::has_ptfx_asset_loaded()) {
				if (ped::is_ped_in_group(iLocal_69)) {
					ped::remove_ped_from_group(iLocal_69);
				}
				func_122("AGITATED");
				iLocal_52++;
			}
		}
		else if (iLocal_52 == 1) {
			streaming::request_anim_dict("creatures@rottweiler@move");
			if (!func_113(iLocal_69, 713668775)) {
				ai::task_follow_nav_mesh_to_coord(iLocal_69, entity::get_entity_coords(iLocal_423, 1), 2f, 20000, 0.25f,
												  36, 1193033728);
			}
			if (func_39(iLocal_69, entity::get_entity_coords(iLocal_423, 1), 1) < 2f) {
				if (!gameplay::is_bit_set(Global_101700.f_9008.f_94, 10) && !ui::is_help_message_being_displayed() &&
					!streaming::is_player_switch_in_progress()) {
					gameplay::set_bit(&Global_101700.f_9008.f_94, 10);
					if (iLocal_395 == 0) {
						func_15("CHOP_H_BEHAVE", -1);
					}
					else {
						func_15("CHOP_H_BEHAVA", -1);
					}
				}
				ai::clear_ped_tasks(iLocal_69);
				if (streaming::has_anim_dict_loaded("creatures@rottweiler@move") &&
					entity::get_entity_speed(iLocal_69) < 1f) {
					vLocal_425 = {entity::get_entity_coords(iLocal_69, 1)};
					iLocal_424 = gameplay::get_random_int_in_range(0, 2);
					fLocal_431 = func_14(vLocal_425, entity::get_entity_coords(iLocal_423, 1));
					if (iLocal_424 == 0) {
						vLocal_428 = {object::_get_object_offset_from_coords(vLocal_425, fLocal_431, -0.5f, 1f, 0f)};
					}
					else {
						vLocal_428 = {object::_get_object_offset_from_coords(vLocal_425, fLocal_431, 0.5f, 1f, 0f)};
					}
					ai::open_sequence_task(&iLocal_119);
					ai::task_turn_ped_to_face_coord(0, vLocal_428, 0);
					if (iLocal_424 == 0) {
						ai::task_play_anim(0, "creatures@rottweiler@move", "pee_right_enter", 8f, -8f, -1, 0, 0, 0, 0,
										   0);
						ai::task_play_anim(0, "creatures@rottweiler@move", "pee_right_idle", 8f, -8f, -1, 0, 0, 0, 0,
										   0);
						ai::task_play_anim(0, "creatures@rottweiler@move", "pee_right_exit", 8f, -8f, -1, 0, 0, 0, 0,
										   0);
					}
					else {
						ai::task_play_anim(0, "creatures@rottweiler@move", "pee_left_enter", 8f, -8f, -1, 0, 0, 0, 0,
										   0);
						ai::task_play_anim(0, "creatures@rottweiler@move", "pee_left_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
						ai::task_play_anim(0, "creatures@rottweiler@move", "pee_left_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					}
					ai::close_sequence_task(iLocal_119);
					ai::task_perform_sequence(iLocal_69, iLocal_119);
					ai::clear_sequence_task(&iLocal_119);
					iLocal_64 = gameplay::get_game_timer();
					iLocal_52++;
				}
			}
		}
		else if (iLocal_52 == 2) {
			if (func_107()) {
				if (graphics::does_particle_fx_looped_exist(iLocal_79)) {
					graphics::stop_particle_fx_looped(iLocal_79, 0);
				}
				func_122("BARK");
				func_121(2, 1);
			}
			else if (!graphics::does_particle_fx_looped_exist(iLocal_79)) {
				if (iLocal_64 > -1 && gameplay::get_game_timer() - iLocal_64 > 7000) {
					if (iLocal_424 == 0) {
						iLocal_79 = graphics::start_particle_fx_looped_on_entity(
							"ent_anim_dog_peeing", iLocal_69, 0.1f, -0.32f, -0.04f, 0f, 0f, 30f, 1065353216, 0, 0, 0);
					}
					else {
						iLocal_79 = graphics::start_particle_fx_looped_on_entity(
							"ent_anim_dog_peeing", iLocal_69, -0.1f, -0.32f, -0.04f, 0f, 0f, 150f, 1065353216, 0, 0, 0);
					}
				}
			}
			else if (gameplay::get_game_timer() - iLocal_64 > 16000) {
				graphics::stop_particle_fx_looped(iLocal_79, 0);
				iLocal_64 = -1;
			}
		}
		break;

	case 15:
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			func_40(0);
			iLocal_62 = gameplay::get_game_timer();
			func_121(2, 1);
		}
		else {
			if (iLocal_52 == 0) {
				func_40(1);
				if (gameplay::_0x82FDE6A57EE4EE44(player::player_ped_id(), iLocal_473, 50f, &uLocal_468, &iLocal_467,
												  0)) {
					func_6(294, 0, 0);
					weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
					iLocal_471 = 0;
					iLocal_472 = 0;
					iLocal_410 = 0;
					if (ped::is_ped_in_group(iLocal_69)) {
						ped::remove_ped_from_group(iLocal_69);
					}
					iLocal_474 = gameplay::get_game_timer();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1) {
				if (entity::does_entity_exist(iLocal_467)) {
					if (!entity::is_entity_in_water(iLocal_467)) {
						if (gameplay::get_game_timer() - iLocal_474 > 500) {
							if (func_5()) {
								streaming::request_anim_dict("creatures@rottweiler@move");
								if (streaming::has_anim_dict_loaded("creatures@rottweiler@move")) {
									ai::open_sequence_task(&iLocal_119);
									if (iLocal_473 == joaat("weapon_ball")) {
										ai::task_play_anim(0, "creatures@rottweiler@move", "fetch_pickup", 8f, -8f, -1,
														   49152, 0, 0, 0, 0);
									}
									ai::task_go_to_entity(0, player::player_ped_id(), 20000, 4f, 3f, 1073741824, 0);
									ai::close_sequence_task(iLocal_119);
									ai::task_perform_sequence(iLocal_69, iLocal_119);
									ai::clear_sequence_task(&iLocal_119);
									if (iLocal_473 == joaat("weapon_ball")) {
										iLocal_471 = 1;
									}
									iLocal_52++;
								}
							}
							else if (!func_113(iLocal_69, 1227113341)) {
								ai::task_go_to_entity(iLocal_69, iLocal_467, 30000, 0.5f, 3f, 1073741824, 0);
								iLocal_410++;
								iLocal_409 = 0;
								if (iLocal_410 > 3) {
									ai::task_go_to_entity(iLocal_69, player::player_ped_id(), 20000, 5f, 3f, 1073741824,
														  0);
									func_40(1);
									iLocal_52++;
								}
							}
							else {
								iVar0 = ai::get_navmesh_route_distance_remaining(iLocal_69, &uVar2, &uVar1);
								if (iVar0 == 2) {
									fLocal_411 = entity::get_entity_height_above_ground(iLocal_467);
									if (fLocal_411 < 1f) {
										iLocal_409++;
									}
								}
								else if (iVar0 == 3) {
									if (iLocal_472 == 0) {
										func_122("BARK");
										if (iLocal_473 == joaat("weapon_ball")) {
											func_108("CHOP_FETCH", 0);
										}
										iLocal_472 = 1;
									}
								}
								if (iLocal_409 > 9) {
									ai::task_go_to_entity(iLocal_69, player::player_ped_id(), 20000, 5f, 3f, 1073741824,
														  0);
									func_40(1);
									iLocal_52++;
								}
							}
						}
					}
					else {
						ai::task_go_to_entity(iLocal_69, player::player_ped_id(), 20000, 5f, 3f, 1073741824, 0);
						iLocal_52++;
					}
				}
				else {
					ai::task_go_to_entity(iLocal_69, player::player_ped_id(), 20000, 5f, 3f, 1073741824, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 2) {
				if (iLocal_471 == 1) {
					if (entity::does_entity_exist(iLocal_467) &&
						entity::is_entity_playing_anim(iLocal_69, "creatures@rottweiler@move", "fetch_pickup", 3) &&
						entity::get_entity_anim_current_time(iLocal_69, "creatures@rottweiler@move", "fetch_pickup") >
							0.25f) {
						entity::attach_entity_to_entity(iLocal_467, iLocal_69, 28, 0.2042f, 0f, -0.0608f, 0f, 0f, 0f, 0,
														0, 0, 0, 2, 1);
						audio::set_audio_flag("DisableBarks", 1);
						iLocal_52++;
					}
				}
				else {
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 3) {
				if (func_4(player::player_ped_id(), iLocal_69, 1) < 5f) {
					if (iLocal_473 == joaat("weapon_ball")) {
						if (iLocal_471 == 1) {
							streaming::request_anim_dict("creatures@rottweiler@move");
							if (streaming::has_anim_dict_loaded("creatures@rottweiler@move")) {
								ai::open_sequence_task(&iLocal_119);
								ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
								ai::task_play_anim(0, "creatures@rottweiler@move", "fetch_drop", 8f, -8f, -1, 16384, 0,
												   0, 0, 0);
								ai::close_sequence_task(iLocal_119);
								ai::task_perform_sequence(iLocal_69, iLocal_119);
								ai::clear_sequence_task(&iLocal_119);
								func_108("CHOP_RETURN1", 0);
								audio::set_audio_flag("DisableBarks", 0);
								iLocal_52++;
							}
						}
						else {
							func_122("BREATH_AGITATED");
							func_108("CHOP_RETURN2", 0);
							func_121(2, 1);
						}
					}
					else {
						func_122("BARK_WHINE");
						func_40(1);
						func_121(2, 1);
					}
				}
			}
			else if (iLocal_52 == 4) {
				if (!func_113(iLocal_69, 242628503) && !entity::does_entity_exist(iLocal_467)) {
					if (func_3(0)) {
						func_99(0, 1, 0);
					}
					else if (cam::get_follow_ped_cam_view_mode() == 4) {
						func_99(0, 1, 1);
					}
					else {
						func_99(1, 1, 1);
					}
					iLocal_62 = gameplay::get_game_timer();
					func_121(2, 1);
				}
				else if (entity::does_entity_exist(iLocal_467)) {
					if (entity::is_entity_attached(iLocal_467)) {
						if (entity::is_entity_playing_anim(iLocal_69, "creatures@rottweiler@move", "fetch_drop", 3) &&
							entity::get_entity_anim_current_time(iLocal_69, "creatures@rottweiler@move", "fetch_drop") >
								0.4f) {
							entity::detach_entity(iLocal_467, 1, 1);
						}
					}
					else {
						if (func_4(player::player_ped_id(), iLocal_467, 1) < 1.5f ||
							func_4(player::player_ped_id(), iLocal_467, 1) > 20f ||
							ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							func_40(1);
						}
						if (!func_113(iLocal_69, 242628503)) {
							func_100();
						}
					}
				}
			}
			func_102();
		}
		break;

	case 16:
		if (iLocal_52 == 0) {
			streaming::request_anim_dict("creatures@rottweiler@in_vehicle@std_car");
			if (streaming::has_anim_dict_loaded("creatures@rottweiler@in_vehicle@std_car")) {
				if (ped::is_ped_in_group(iLocal_69)) {
					ped::remove_ped_from_group(iLocal_69);
				}
				entity::attach_entity_to_entity(iLocal_69, entity::get_entity_attached_to(player::player_ped_id()), 0,
												0f, 0f, -6.1f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
				ai::task_play_anim(iLocal_69, "creatures@rottweiler@in_vehicle@std_car", "sit", 1000f, -1000f, -1, 9, 0,
								   0, 0, 0);
				iLocal_52++;
			}
		}
		else if (iLocal_52 == 1) {
			if (!entity::is_entity_attached(player::player_ped_id())) {
				fVar6 = 99999f;
				iVar8 = 0;
				while (iVar8 < 4) {
					fVar7 = gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
																  vLocal_89[iVar8 /*3*/], 1);
					if (fVar7 < fVar6) {
						fVar6 = fVar7;
						iVar9 = iVar8;
					}
					iVar8++;
				}
				if (entity::is_entity_attached(iLocal_69)) {
					entity::detach_entity(iLocal_69, 1, 1);
				}
				func_124(iLocal_69, vLocal_89[iVar9 /*3*/], fLocal_102[iVar9], 0, 1);
				ped::_0x2208438012482A1A(iLocal_69, 0, 0);
				iLocal_62 = gameplay::get_game_timer();
				func_121(2, 1);
			}
		}
		break;
	}
}

// Position - 0x1C8F
bool func_3(int iParam0) {
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

// Position - 0x1CE9
float func_4(int iParam0, int iParam1, int iParam2) {
	vector3 vVar0;
	vector3 vVar3;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar3 = {entity::get_entity_coords(iParam1, 1)};
	}
	else {
		vVar3 = {entity::get_entity_coords(iParam1, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vVar3, iParam2);
}

// Position - 0x1D47
bool func_5() {
	vector3 vVar0;
	float fVar3;

	if (func_4(iLocal_69, iLocal_467, 1) < 0.5f + 0.25f) {
		vVar0 = {entity::get_entity_coords(iLocal_467, 1)};
		if (gameplay::get_ground_z_for_3d_coord(vVar0.x, vVar0.y, vVar0.z + 1f, &fVar3, 0)) {
			if (gameplay::absf(vVar0.z - fVar3) < 0.1f) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x1DA3
void func_6(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_12(891 + iParam0, 1, -1, 1);
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
		func_7();
	}
}

// Position - 0x1E8B
void func_7() {
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
		func_11(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_10() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_8();
				}
			}
		}
	}
}

// Position - 0x234C
int func_8() {
	if (func_9(0)) {
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

// Position - 0x2397
bool func_9(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x23C2
int func_10() { return Global_25190; }

// Position - 0x23CD
int func_11(int iParam0, int iParam1) {
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

// Position - 0x241E
int func_12(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_13();
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

// Position - 0x27B2
var func_13() { return Global_1312735; }

// Position - 0x27BE
var func_14(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5) {
	return gameplay::get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

// Position - 0x27D8
void func_15(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x27EF
bool func_16() { return Global_91543.f_303 > 0; }

// Position - 0x2800
void func_17() {
	iLocal_62 = gameplay::get_game_timer();
	if (iLocal_75 == 0) {
		func_121(1, 1);
	}
	else {
		func_121(2, 1);
	}
}

// Position - 0x2823
void func_18() {
	float fVar0;

	if (gameplay::get_game_timer() - iLocal_56 > iLocal_58) {
		fVar0 = func_39(iLocal_69, vLocal_389, 1);
		if (fVar0 < 10f) {
			func_122("BARK_SEQ");
		}
		else {
			func_122("BARK");
		}
		iLocal_56 = gameplay::get_game_timer();
		if (fVar0 < 20f) {
			iLocal_58 = gameplay::get_random_int_in_range(4000, 5000);
		}
		else if (fVar0 < 50f) {
			iLocal_58 = gameplay::get_random_int_in_range(5000, 6000);
		}
		else {
			iLocal_58 = gameplay::get_random_int_in_range(8000, 12000);
		}
		if (!ui::is_help_message_being_displayed() && !gameplay::is_bit_set(Global_101700.f_9008.f_94, 1) &&
			!func_19() && !streaming::is_player_switch_in_progress()) {
			gameplay::set_bit(&Global_101700.f_9008.f_94, 1);
			func_15("CHOP_H_HUNT", -1);
		}
	}
}

// Position - 0x28F0
int func_19() {
	int iVar0;

	if (player::is_player_targetting_entity(player::player_id(), iLocal_69) ||
		iLocal_51 == 10 && controls::is_control_pressed(2, 25)) {
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1);
		if (iVar0 == joaat("weapon_unarmed")) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2937
void func_20() {
	if (!func_113(iLocal_69, 242628503)) {
		streaming::request_anim_dict("creatures@rottweiler@indication@");
		if (streaming::has_anim_dict_loaded("creatures@rottweiler@indication@")) {
			ai::clear_ped_tasks(iLocal_69);
			ai::open_sequence_task(&iLocal_119);
			ai::task_turn_ped_to_face_coord(0, vLocal_386, 0);
			ai::task_play_anim(0, "creatures@rottweiler@indication@", func_21(), 8f, -4f, -1, 1, 0, 0, 0, 0);
			ai::close_sequence_task(iLocal_119);
			ai::task_perform_sequence(iLocal_69, iLocal_119);
			ai::clear_sequence_task(&iLocal_119);
		}
	}
}

// Position - 0x29A9
char *func_21() {
	char *sVar0;
	vector3 vVar1;

	if (func_125(iLocal_69)) {
		vVar1 = {entity::get_entity_coords(iLocal_69, 1)};
		if (vVar1.z + 1f < vLocal_386.z) {
			sVar0 = "indicate_high";
		}
		else if (vVar1.z - 1f > vLocal_386.z) {
			sVar0 = "indicate_low";
		}
		else {
			sVar0 = "indicate_ahead";
		}
	}
	return sVar0;
}

// Position - 0x29FD
bool func_22() {
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
		vehicle::is_vehicle_driveable(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0)) {
		if (ped::is_ped_on_any_bike(player::player_ped_id()) || func_23()) {
			return true;
		}
	}
	return false;
}

// Position - 0x2A3E
int func_23() {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		iVar0 = entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 1));
		if (iVar0 == joaat("caddy") || iVar0 == joaat("caddy2") || iVar0 == joaat("dune") || iVar0 == joaat("airtug") ||
			iVar0 == joaat("blazer") || iVar0 == joaat("blazer2") || iVar0 == joaat("bulldozer") ||
			iVar0 == joaat("cutter") || iVar0 == joaat("dump") || iVar0 == joaat("forklift") ||
			iVar0 == joaat("handler") || iVar0 == joaat("mower") || iVar0 == joaat("rhino") ||
			iVar0 == joaat("tractor") || iVar0 == joaat("tractor2") || iVar0 == joaat("tractor3") ||
			iVar0 == gameplay::get_hash_key("bifta") || iVar0 == joaat("blazer3") || iVar0 == joaat("dune2")) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2B70
int func_24() {
	switch (iLocal_338) {
	case 2:
		if (!func_27(2)) {
			func_108("CHOP_RETURN1", 1);
			return 0;
		}
		break;

	case 1:
		if (!func_27(1)) {
			func_108("CHOP_RETURN1", 1);
			return 0;
		}
		break;

	case 0:
		if (!func_27(0)) {
			func_108("CHOP_RETURN1", 1);
			return 0;
		}
		break;

	case 3:
		if (func_26(iLocal_385)) {
			func_108("CHOP_RETURN1", 1);
			return 0;
		}
		break;

	case 4:
		if (func_25(iLocal_385)) {
			func_108("CHOP_RETURN1", 1);
			return 0;
		}
		break;
	}
	return 1;
}

// Position - 0x2C1E
bool func_25(int iParam0) {
	if (iParam0 < 0 || iParam0 >= 50) {
		return false;
	}
	if (iParam0 <= 31) {
		return gameplay::is_bit_set(Global_101700.f_9008.f_125, iParam0);
	}
	return gameplay::is_bit_set(Global_101700.f_9008.f_125.f_1, iParam0 - 32);
}

// Position - 0x2C69
bool func_26(int iParam0) {
	if (iParam0 < 0 || iParam0 >= 50) {
		return false;
	}
	if (iParam0 <= 31) {
		return gameplay::is_bit_set(Global_101700.f_9008.f_122, iParam0);
	}
	return gameplay::is_bit_set(Global_101700.f_9008.f_122.f_1, iParam0 - 32);
}

// Position - 0x2CB4
int func_27(int iParam0) {
	if (func_31()) {
		func_30(iParam0, iLocal_385);
	}
	if (func_29()) {
		if (func_28()) {
			func_34();
			return 0;
		}
		func_34();
	}
	return 1;
}

// Position - 0x2CE7
bool func_28() { return Global_25433; }

// Position - 0x2CF2
bool func_29() {
	if (Global_25430 == 2) {
		return true;
	}
	return false;
}

// Position - 0x2D06
void func_30(int iParam0, int iParam1) {
	if (Global_25430 == 0) {
		Global_25430 = 1;
		Global_25431 = iParam0;
		Global_25432 = iParam1;
	}
}

// Position - 0x2D23
bool func_31() {
	if (Global_25430 == 0) {
		return true;
	}
	return false;
}

// Position - 0x2D37
void func_32() {
	vector3 vVar0;

	vVar0 = {entity::get_entity_coords(iLocal_69, 1)};
	func_33(vVar0);
	func_122("WHINE");
	func_108("CHOP_NONEAR", 0);
	func_17();
}

// Position - 0x2D66
void func_33(vector3 vParam0) {
	if (system::vdist(vParam0, vParam0) > 1f) {
	}
}

// Position - 0x2D7F
void func_34() { Global_25430 = 3; }

// Position - 0x2D8B
bool func_35() {
	iLocal_385 = -1;
	vLocal_386 = {0f, 0f, 0f};
	vLocal_389 = {0f, 0f, 0f};
	func_36(0);
	if (iLocal_385 == -1) {
		func_36(1);
	}
	if (iLocal_385 > -1) {
		return true;
	}
	return false;
}

// Position - 0x2DC4
void func_36(int iParam0) {
	float fVar0;
	int iVar1;

	fVar0 = 9999f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 5) {
		if (iLocal_341[iVar1] > -1 && fLocal_347[iVar1] < fVar0 && func_37(iParam0, iVar1)) {
			fVar0 = fLocal_347[iVar1];
			iLocal_385 = iLocal_341[iVar1];
			iLocal_338 = iVar1;
			vLocal_386 = {vLocal_353[iVar1 /*3*/]};
			vLocal_389 = {vLocal_369[iVar1 /*3*/]};
		}
		iVar1++;
	}
}

// Position - 0x2E44
int func_37(int iParam0, int iParam1) {
	if (iParam0 == 1) {
		return 1;
	}
	if (iParam1 == 1 && entity::get_entity_health(player::player_ped_id()) >= 200) {
		return 0;
	}
	if (iParam1 == 0 && ped::get_ped_armour(player::player_ped_id()) >= 100) {
		return 0;
	}
	return 1;
}

// Position - 0x2E8D
bool func_38() {
	if (iLocal_339 == 5) {
		iLocal_339 = 0;
	}
	switch (iLocal_339) {
	case 0:
		if (iLocal_341[0] > -1) {
			if (func_31()) {
				func_30(0, iLocal_341[0]);
			}
			if (func_29()) {
				if (func_28()) {
					iLocal_341[0] = -1;
				}
				func_34();
				iLocal_339 = 1;
			}
		}
		else {
			iLocal_339 = 1;
		}
		break;

	case 1:
		if (iLocal_341[1] > -1) {
			if (func_31()) {
				func_30(1, iLocal_341[1]);
			}
			if (func_29()) {
				if (func_28()) {
					iLocal_341[1] = -1;
				}
				func_34();
				iLocal_339 = 2;
			}
		}
		else {
			iLocal_339 = 2;
		}
		break;

	case 2:
		if (iLocal_341[2] > -1) {
			if (func_31()) {
				func_30(2, iLocal_341[2]);
			}
			if (func_29()) {
				if (func_28()) {
					iLocal_341[2] = -1;
				}
				func_34();
				iLocal_339 = 3;
			}
		}
		else {
			iLocal_339 = 3;
		}
		break;

	case 3:
		if (iLocal_341[3] > -1) {
			if (func_26(iLocal_341[3])) {
				iLocal_341[3] = -1;
			}
		}
		if (iLocal_341[4] > -1) {
			if (func_25(iLocal_341[4])) {
				iLocal_341[4] = -1;
			}
		}
		iLocal_339 = 5;
		return true;
	}
	return false;
}

// Position - 0x2FD1
float func_39(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0x300B
void func_40(int iParam0) {
	vector3 vVar0;

	if (entity::does_entity_exist(iLocal_467)) {
		vVar0 = {entity::get_entity_coords(iLocal_467, 1)};
		if (entity::is_entity_attached_to_any_ped(iLocal_467)) {
			entity::detach_entity(iLocal_467, 1, 1);
		}
		entity::set_entity_as_no_longer_needed(&iLocal_467);
		if (iParam0 == 1 && iLocal_473 == joaat("weapon_ball")) {
			gameplay::clear_area_of_projectiles(vVar0, 0.1f, 0);
		}
	}
}

// Position - 0x3066
void func_41() {
	vector3 vVar0;

	if (func_43() != 1 && gameplay::get_game_timer() - iLocal_62 > 10000 &&
		!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) && iLocal_107 == 0 &&
		iLocal_473 != joaat("weapon_ball") &&
		ped::_0x336B3D200AB007CB(player::player_ped_id(), entity::get_entity_coords(player::player_ped_id(), 1),
								 100f) == 0 &&
		ped::_0x336B3D200AB007CB(iLocal_69, entity::get_entity_coords(iLocal_69, 1), 100f) == 0) {
		streaming::request_ptfx_asset();
		if (streaming::has_ptfx_asset_loaded()) {
			vVar0 = {entity::get_entity_coords(iLocal_69, 1)};
			if (gameplay::get_distance_between_coords(vVar0, vLocal_76, 0) < 1f) {
				if (gameplay::get_distance_between_coords(vVar0, vLocal_435, 0) > 20f) {
					func_42(&iLocal_423, 0);
					iLocal_423 = object::get_closest_object_of_type(vVar0, 10f, -1063472968, 1, 0, 1);
					if (entity::does_entity_exist(iLocal_423)) {
						vLocal_435 = {entity::get_entity_coords(iLocal_423, 1)};
						func_121(14, 1);
					}
				}
				else if (gameplay::get_distance_between_coords(vVar0, vLocal_432, 0) > 20f) {
					vLocal_432 = {vVar0};
					func_121(13, 1);
				}
			}
			vLocal_76 = {entity::get_entity_coords(iLocal_69, 1)};
			iLocal_62 = gameplay::get_game_timer();
		}
	}
}

// Position - 0x319B
void func_42(int *iParam0, int iParam1) {
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

// Position - 0x31D6
int func_43() {
	if (Global_101700.f_19077.f_254.f_5) {
		if (Global_101700.f_19077.f_254 > 66f) {
			return 1;
		}
		else if (Global_101700.f_19077.f_254 > 33f) {
			return 0;
		}
		else {
			return 2;
		}
	}
	return 2;
}

// Position - 0x3223
void func_44() {
	if (!gameplay::is_bit_set(Global_101700.f_9008.f_94, 7) && !ui::is_help_message_being_displayed() && !func_19() &&
		!streaming::is_player_switch_in_progress()) {
		gameplay::set_bit(&Global_101700.f_9008.f_94, 7);
		func_15("CHOP_H_BALL", -1);
	}
	if (func_125(player::player_ped_id()) && !ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) &&
		func_125(iLocal_69) && !ped::is_ped_in_any_vehicle(iLocal_69, 1)) {
		weapon::get_current_ped_weapon(player::player_ped_id(), &iLocal_473, 1);
		if (iLocal_473 == joaat("weapon_ball") || iLocal_473 == joaat("weapon_grenade") ||
			iLocal_473 == joaat("weapon_smokegrenade") || iLocal_473 == joaat("weapon_stickybomb") ||
			iLocal_473 == joaat("weapon_molotov") || iLocal_473 == joaat("weapon_flare")) {
			if (ped::is_ped_shooting(player::player_ped_id())) {
				func_121(15, 1);
			}
			else if (gameplay::get_game_timer() - iLocal_63 > 10000 && entity::get_entity_speed(iLocal_69) < 1f &&
					 func_4(player::player_ped_id(), iLocal_69, 1) < 5f) {
				streaming::request_anim_dict("creatures@rottweiler@amb@world_dog_barking@enter");
				streaming::request_anim_dict("creatures@rottweiler@amb@world_dog_barking@idle_a");
				streaming::request_anim_dict("creatures@rottweiler@amb@world_dog_barking@exit");
				if (streaming::has_anim_dict_loaded("creatures@rottweiler@amb@world_dog_barking@enter") &&
					streaming::has_anim_dict_loaded("creatures@rottweiler@amb@world_dog_barking@idle_a") &&
					streaming::has_anim_dict_loaded("creatures@rottweiler@amb@world_dog_barking@exit")) {
					ai::clear_ped_tasks(iLocal_69);
					ai::open_sequence_task(&iLocal_119);
					ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
					ai::task_play_anim(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0,
									   0, 0, 0, 0);
					ai::task_play_anim(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0,
									   0, 0, 0, 0);
					ai::task_play_anim(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0,
									   0, 0, 0);
					ai::close_sequence_task(iLocal_119);
					ai::task_perform_sequence(iLocal_69, iLocal_119);
					ai::clear_sequence_task(&iLocal_119);
					iLocal_63 = gameplay::get_game_timer();
				}
			}
		}
	}
}

// Position - 0x3406
void func_45() {
	if (func_16() && !func_46(4)) {
		if (func_125(iLocal_69) && iLocal_107 == 0 && ped::is_ped_in_group(iLocal_69)) {
			ped::remove_ped_from_group(iLocal_69);
		}
		func_121(12, 1);
	}
}

// Position - 0x344A
int func_46(int iParam0) {
	int iVar0;

	if (func_16()) {
		iVar0 = 0;
		while (iVar0 < 46) {
			if (func_52(iVar0) == iParam0) {
				if (func_47(iVar0)) {
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

// Position - 0x3485
bool func_47(int iParam0) { return func_48(iParam0, 5, 1); }

// Position - 0x3495
int func_48(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_10() == 0) {
			return gameplay::is_bit_set(func_49(func_51(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

// Position - 0x34F5
int func_49(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_50(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x3527
int func_50(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_13();
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

// Position - 0x355B
int func_51(int iParam0) {
	switch (iParam0) {
	case 0: return 822;

	case 1: return 823;

	case 2: return 824;

	case 3: return 825;

	case 4: return 826;

	case 5: return 827;

	case 6: return 828;

	case 7: return 829;

	case 8: return 830;

	case 9: return 831;

	case 10: return 832;

	case 11: return 833;

	case 12: return 834;

	case 13: return 835;

	case 14: return 836;

	case 15: return 838;

	case 16: return 839;

	case 17: return 840;

	case 18: return 841;

	case 19: return 842;

	case 20: return 843;

	case 21: return 844;

	case 22: return 845;

	case 23: return 846;

	case 24: return 847;

	case 25: return 848;

	case 26: return 849;

	case 27: return 850;

	case 28: return 851;

	case 29: return 852;

	case 30: return 853;

	case 31: return 854;

	case 32: return 855;

	case 33: return 856;

	case 34: return 857;

	case 35: return 858;

	case 36: return 859;

	case 37: return 860;

	case 38: return 861;

	case 39: return 862;

	case 40: return 866;

	case 41: return 867;

	case 42: return 868;

	case 43: return 869;

	case 44: return 5847;

	case 45: return 3780;

	default: break;
	}
	return 6022;
}

// Position - 0x3822
int func_52(int iParam0) {
	switch (iParam0) {
	case -1: return 6;

	case 0: return 0;

	case 1: return 0;

	case 2: return 0;

	case 3: return 0;

	case 4: return 0;

	case 5: return 0;

	case 6: return 0;

	case 7: return 1;

	case 8: return 1;

	case 9: return 1;

	case 10: return 1;

	case 11: return 1;

	case 12: return 1;

	case 13: return 1;

	case 14: return 1;

	case 15: return 1;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 2;

	case 23: return 2;

	case 24: return 2;

	case 25: return 2;

	case 26: return 2;

	case 27: return 2;

	case 28: return 3;

	case 29: return 3;

	case 30: return 3;

	case 31: return 3;

	case 32: return 3;

	case 33: return 3;

	case 34: return 3;

	case 35: return 3;

	case 36: return 3;

	case 37: return 3;

	case 38: return 3;

	case 39: return 4;

	case 40: return 4;

	case 41: return 4;

	case 42: return 4;

	case 43: return 4;

	case 44: return 4;

	case 45: return 5;
	}
	return 6;
}

// Position - 0x3A95
void func_53() {
	if (player::get_player_wanted_level(player::player_id()) > 0) {
		if (iLocal_60 == -1) {
			iLocal_60 = gameplay::get_game_timer();
			iLocal_61 = gameplay::get_random_int_in_range(4000, 6000);
		}
		if (gameplay::get_game_timer() - iLocal_60 > iLocal_61) {
			func_122("SNARL");
			iLocal_60 = -1;
		}
	}
}

// Position - 0x3AD8
void func_54() {
	if (func_125(player::player_ped_id())) {
		if (iLocal_107 > 1 && iLocal_107 < 8) {
			ped::set_ped_reset_flag(player::player_ped_id(), 309, 1);
		}
		if (iLocal_117 == 1 && iLocal_107 == 1) {
			ped::set_ped_reset_flag(player::player_ped_id(), 313, 1);
		}
	}
	switch (iLocal_107) {
	case 0:
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			iLocal_478 = gameplay::get_game_timer();
			iLocal_65 = -1;
			iLocal_66 = -1;
			iLocal_57 = gameplay::get_game_timer();
			func_82();
			ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
			iLocal_491 = 1;
			iLocal_107 = 1;
		}
		else {
			if (iLocal_475 != 0) {
				iLocal_475 = 0;
			}
			iLocal_337 = 0;
			iLocal_59 = -1;
			if (func_81()) {
				func_121(3, 1);
			}
		}
		break;

	case 1:
		if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			iLocal_107 = 15;
		}
		else if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			if (func_80()) {
				if (vehicle::get_ped_in_vehicle_seat(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), -1, 0) !=
					player::player_ped_id()) {
					func_121(3, 1);
				}
				else {
					if (!func_125(iLocal_80)) {
						iLocal_80 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
						func_79();
						func_78();
					}
					streaming::request_anim_dict(sLocal_477);
					if (streaming::has_anim_dict_loaded(sLocal_477) && func_125(iLocal_80)) {
						if (ped::is_ped_in_group(iLocal_69)) {
							ped::remove_ped_from_group(iLocal_69);
						}
						if (func_77()) {
							if (iLocal_65 == -1) {
								iLocal_65 = gameplay::get_game_timer();
							}
							if (func_76()) {
								func_75(1);
								iLocal_107 = 6;
							}
							else {
								func_74();
							}
						}
						else if (vehicle::_0x639431E895B9AA57(player::player_ped_id(), iLocal_80, 0, 0, 0)) {
							if (vehicle::is_vehicle_door_damaged(iLocal_80, iLocal_118) ||
								vehicle::get_vehicle_door_angle_ratio(iLocal_80, 1) > 0.9f) {
								iLocal_107 = 4;
							}
							else {
								iLocal_107 = 2;
							}
						}
						else {
							func_75(1);
							iLocal_107 = 6;
						}
					}
				}
			}
			else if (func_22()) {
				iLocal_107 = 14;
			}
			else {
				if (!ui::is_help_message_being_displayed() && !gameplay::is_bit_set(Global_101700.f_9008.f_94, 3) &&
					!func_19() && !streaming::is_player_switch_in_progress()) {
					gameplay::set_bit(&Global_101700.f_9008.f_94, 3);
					func_15("CHOP_H_NOVEH", -1);
				}
				func_121(3, 1);
			}
		}
		else {
			if (func_80()) {
				streaming::request_anim_dict("misschop_vehicleenter_exit");
				func_74();
			}
			if (iLocal_337 == 0 &&
				vehicle::is_vehicle_driveable(ped::set_exclusive_phone_relationships(player::player_ped_id()), 0)) {
				ped::set_ped_config_flag(iLocal_69, 185, 0);
				if (vehicle::is_this_model_a_car(
						entity::get_entity_model(ped::set_exclusive_phone_relationships(player::player_ped_id()))) &&
					!func_23()) {
					if (entity::get_entity_model(ped::set_exclusive_phone_relationships(player::player_ped_id())) ==
						joaat("taxi")) {
					}
					else if (vehicle::get_vehicle_max_number_of_passengers(
								 ped::set_exclusive_phone_relationships(player::player_ped_id())) >= 1 &&
							 vehicle::is_vehicle_seat_free(
								 ped::set_exclusive_phone_relationships(player::player_ped_id()), 0, 0)) {
						if (!func_73()) {
							func_108("CHOP_RIDE", 0);
						}
					}
				}
				else if (vehicle::is_this_model_a_bike(entity::get_entity_model(
							 ped::set_exclusive_phone_relationships(player::player_ped_id()))) ||
						 func_23()) {
					func_108("CHOP_FOLLOW", 0);
				}
				iLocal_337 = 1;
			}
		}
		break;

	case 2:
		func_72();
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			iLocal_107 = 15;
		}
		else {
			streaming::request_anim_dict("misschop_vehicleenter_exit");
			if (streaming::has_anim_dict_loaded("misschop_vehicleenter_exit")) {
				func_71();
				iLocal_107 = 3;
			}
		}
		break;

	case 3:
		func_72();
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			iLocal_107 = 15;
		}
		else if (func_125(iLocal_80) && func_70()) {
			if (!vehicle::is_vehicle_door_damaged(iLocal_80, iLocal_118)) {
				vehicle::set_vehicle_door_open(iLocal_80, iLocal_118, 0, 0);
			}
			iLocal_489 = gameplay::get_game_timer();
			iLocal_65 = gameplay::get_game_timer();
			iLocal_107 = 4;
		}
		break;

	case 4:
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			iLocal_107 = 15;
		}
		else {
			streaming::request_anim_dict(sLocal_477);
			if (func_125(iLocal_80)) {
				if (!vehicle::is_vehicle_door_damaged(iLocal_80, iLocal_118) &&
					vehicle::get_vehicle_door_angle_ratio(iLocal_80, iLocal_118) < 0.95f) {
					vehicle::set_vehicle_door_open(iLocal_80, iLocal_118, 0, 0);
					iLocal_489 = gameplay::get_game_timer();
				}
				if (func_76() && gameplay::get_game_timer() >= iLocal_489 + 300) {
					if (!func_113(player::player_ped_id(), -2017877118) &&
						streaming::has_anim_dict_loaded(sLocal_477)) {
						func_72();
						func_69(1, 1);
						ai::clear_ped_tasks_immediately(iLocal_69);
						iLocal_108 = ped::create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
						ped::attach_synchronized_scene_to_entity(
							iLocal_108, iLocal_80, entity::get_entity_bone_index_by_name(iLocal_80, "seat_pside_f"));
						ai::task_synchronized_scene(iLocal_69, iLocal_108, sLocal_477, "get_in", 1000f, -8f, 4, 0,
													1148846080, 0);
						ped::_0x2208438012482A1A(iLocal_69, 0, 0);
						iLocal_107 = 5;
					}
				}
				else {
					func_74();
				}
			}
		}
		break;

	case 5:
		func_72();
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			func_68(2f, 0f, 0f, 1);
		}
		else {
			if (cam::does_cam_exist(iLocal_486)) {
				cam::set_use_hi_dof();
			}
			streaming::request_anim_dict(sLocal_477);
			if (streaming::has_anim_dict_loaded(sLocal_477) && ped::is_synchronized_scene_running(iLocal_108) &&
				ped::get_synchronized_scene_phase(iLocal_108) > 0.99f && func_125(iLocal_80)) {
				func_69(0, 1);
				func_75(0);
				iLocal_107 = 6;
			}
		}
		break;

	case 6:
		func_72();
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			func_68(2f, 0f, 0f, 1);
		}
		else {
			streaming::request_anim_dict("misschop_vehicleenter_exit");
			if (streaming::has_anim_dict_loaded("misschop_vehicleenter_exit") && func_125(iLocal_80)) {
				if (!vehicle::is_vehicle_door_damaged(iLocal_80, iLocal_118) &&
					vehicle::get_vehicle_door_angle_ratio(iLocal_80, 1) > 0.1f && !func_77()) {
					func_71();
				}
				iLocal_107 = 7;
			}
		}
		break;

	case 7:
		func_72();
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			func_68(2f, 0f, 0f, 1);
		}
		else if (func_125(iLocal_80) && func_70()) {
			if (!vehicle::is_vehicle_door_damaged(iLocal_80, iLocal_118)) {
				vehicle::set_vehicle_door_shut(iLocal_80, iLocal_118, 0);
			}
			iLocal_107 = 8;
		}
		break;

	case 8:
		func_72();
		func_67(&iLocal_70);
		func_40(1);
		if (iLocal_54 == -1) {
			iLocal_54 = gameplay::get_game_timer();
			iLocal_55 = 7000;
		}
		if (func_125(iLocal_80)) {
			if (func_66()) {
				func_68(2f, 0f, 0f, 1);
			}
			else if (fire::is_entity_on_fire(iLocal_80)) {
				func_68(2f, 0f, 0f, 1);
			}
			else if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
				if (entity::get_entity_speed(iLocal_80) < 5f) {
					if (!vehicle::is_vehicle_door_damaged(iLocal_80, iLocal_118)) {
						vehicle::set_vehicle_door_open(iLocal_80, iLocal_118, 0, 0);
					}
					iLocal_107 = 12;
				}
			}
			else if (controls::is_disabled_control_just_pressed(2, 75)) {
				if (entity::is_entity_upsidedown(iLocal_80)) {
					func_68(2f, 0f, 0f, 1);
				}
				else if (func_77()) {
					iLocal_107 = 9;
				}
				else if (vehicle::_0x639431E895B9AA57(player::player_ped_id(), iLocal_80, 0, 0, 0)) {
					vehicle::_set_vehicle_halt(iLocal_80, 10f, 1, 0);
					if (vehicle::is_vehicle_door_damaged(iLocal_80, iLocal_118)) {
						iLocal_107 = 12;
					}
					else {
						iLocal_107 = 10;
					}
				}
				else if (vehicle::_0x639431E895B9AA57(player::player_ped_id(), iLocal_80, -1, 0, 0)) {
					vehicle::_set_vehicle_halt(iLocal_80, 10f, 1, 0);
					func_68(-2f, 0f, 0f, 0);
				}
				else {
					vehicle::_set_vehicle_halt(iLocal_80, 10f, 1, 0);
					func_68(0f, -4f, 0f, 0);
				}
			}
			else {
				func_65();
				func_63();
				func_62();
				if (!ui::is_help_message_being_displayed() && !gameplay::is_bit_set(Global_101700.f_9008.f_94, 2) &&
					!func_19() && !streaming::is_player_switch_in_progress()) {
					gameplay::set_bit(&Global_101700.f_9008.f_94, 2);
					func_15("CHOP_H_CAR", -1);
				}
			}
		}
		else {
			func_68(2f, 0f, 0f, 1);
		}
		break;

	case 9:
		func_72();
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) && !func_113(player::player_ped_id(), -828834893)) {
			ai::task_leave_any_vehicle(player::player_ped_id(), 0, 0);
		}
		if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			func_68(2f, 0f, 0f, 1);
		}
		break;

	case 10:
		func_72();
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			func_68(2f, 0f, 0f, 1);
		}
		else {
			streaming::request_anim_dict("misschop_vehicleenter_exit");
			if (streaming::has_anim_dict_loaded("misschop_vehicleenter_exit")) {
				func_71();
				iLocal_107 = 11;
			}
		}
		break;

	case 11:
		func_72();
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			func_68(2f, 0f, 0f, 1);
		}
		else if (func_125(iLocal_80) && func_70()) {
			if (!vehicle::is_vehicle_door_damaged(iLocal_80, iLocal_118)) {
				vehicle::set_vehicle_door_open(iLocal_80, iLocal_118, 0, 0);
			}
			iLocal_107 = 12;
		}
		break;

	case 12:
		func_72();
		streaming::request_anim_dict(sLocal_477);
		if (!func_113(player::player_ped_id(), -2017877118) && streaming::has_anim_dict_loaded(sLocal_477) &&
			func_125(iLocal_80)) {
			ai::clear_ped_tasks_immediately(iLocal_69);
			iLocal_108 = ped::create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
			ped::attach_synchronized_scene_to_entity(iLocal_108, iLocal_80,
													 entity::get_entity_bone_index_by_name(iLocal_80, "seat_pside_f"));
			ai::task_synchronized_scene(iLocal_69, iLocal_108, sLocal_477, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
			ped::_0x2208438012482A1A(iLocal_69, 0, 0);
			iLocal_107 = 13;
		}
		break;

	case 13:
		func_72();
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) && gameplay::get_game_timer() - iLocal_479 > 1500 &&
			!func_113(player::player_ped_id(), -828834893)) {
			ai::task_leave_any_vehicle(player::player_ped_id(), 0, 0);
		}
		if (!ped::is_synchronized_scene_running(iLocal_108) ||
			ped::is_synchronized_scene_running(iLocal_108) && ped::get_synchronized_scene_phase(iLocal_108) > 0.99f) {
			ai::task_go_straight_to_coord_relative_to_entity(iLocal_69, iLocal_69, 0f, 5f, 0f, 1f, 20000);
			iLocal_107 = 15;
		}
		break;

	case 14:
		if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iLocal_107 = 15;
		}
		else {
			func_65();
			if (!ui::is_help_message_being_displayed() && !gameplay::is_bit_set(Global_101700.f_9008.f_94, 5) &&
				!func_19() && !streaming::is_player_switch_in_progress()) {
				gameplay::set_bit(&Global_101700.f_9008.f_94, 5);
				func_15("CHOP_H_BIKE", -1);
			}
		}
		break;

	case 15:
		func_72();
		if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			func_57();
			func_99(0, 0, 0);
			streaming::remove_anim_dict("misschop_vehicleenter_exit");
			streaming::remove_anim_dict(sLocal_477);
			iLocal_62 = gameplay::get_game_timer();
			func_56();
			func_55(&iLocal_80);
			iLocal_80 = 0;
			iLocal_54 = -1;
			ai::clear_ped_tasks(iLocal_69);
			entity::set_entity_invincible(iLocal_69, 0);
			ped::set_ped_config_flag(iLocal_69, 185, 1);
			ped::set_ped_config_flag(player::player_ped_id(), 32, 1);
			func_121(2, 1);
		}
		else if (!func_113(player::player_ped_id(), -828834893)) {
			ai::task_leave_any_vehicle(player::player_ped_id(), 0, 0);
		}
		break;
	}
}

// Position - 0x44EF
void func_55(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0x4527
void func_56() {
	if (iLocal_491 == 1 && func_125(vehicle::get_last_driven_vehicle()) &&
		vehicle::get_vehicle_max_number_of_passengers(vehicle::get_last_driven_vehicle()) > 1 &&
		!vehicle::is_vehicle_door_damaged(vehicle::get_last_driven_vehicle(), iLocal_118)) {
		vehicle::set_vehicle_door_latched(vehicle::get_last_driven_vehicle(), iLocal_118, 0, 1, 0);
	}
}

// Position - 0x4570
void func_57() {
	if (!ui::does_blip_exist(iLocal_70) && func_125(iLocal_69) && !ped::is_ped_in_any_vehicle(iLocal_69, 1)) {
		if (func_178(126)) {
			func_61(139, 0, 0);
		}
		else {
			func_61(138, 0, 0);
		}
		iLocal_70 = func_58(iLocal_69, 0, 145);
		ui::set_blip_sprite(iLocal_70, 273);
	}
}

// Position - 0x45CA
int func_58(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = func_59(iParam0, !iParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x461C
int func_59(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_60(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_60(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_60(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x46C0
var func_60(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x46D7
void func_61(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x47E0
void func_62() {
	if (func_125(iLocal_69) && func_125(iLocal_80)) {
		if (iLocal_478 > -1) {
			if (gameplay::get_game_timer() - iLocal_478 > 500 && entity::get_entity_speed(iLocal_80) > 5f &&
				entity::has_entity_collided_with_anything(iLocal_80)) {
				ai::task_play_anim(iLocal_69, sLocal_477, "shunt_from_back", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ped::_0x2208438012482A1A(iLocal_69, 0, 0);
				func_122("GROWL");
				iLocal_478 = -1;
				iLocal_57 = gameplay::get_game_timer();
			}
		}
		else if (!entity::is_entity_playing_anim(iLocal_69, sLocal_477, "shunt_from_back", 3) ||
				 entity::is_entity_playing_anim(iLocal_69, sLocal_477, "shunt_from_back", 3) &&
					 entity::get_entity_anim_current_time(iLocal_69, sLocal_477, "shunt_from_back") > 0.98f) {
			ai::task_play_anim(iLocal_69, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			ped::_0x2208438012482A1A(iLocal_69, 0, 0);
			iLocal_478 = gameplay::get_game_timer();
			iLocal_57 = gameplay::get_game_timer();
		}
	}
}

// Position - 0x48D4
void func_63() {
	if (iLocal_478 > -1 && gameplay::get_game_timer() - iLocal_54 > iLocal_55) {
		if (audio::get_player_radio_station_genre() == 7 || audio::get_player_radio_station_genre() == 8 ||
			audio::get_player_radio_station_genre() == 9 || audio::get_player_radio_station_genre() == 13) {
			func_64();
			iLocal_54 = gameplay::get_game_timer();
			iLocal_55 = gameplay::get_random_int_in_range(6000, 8000);
		}
	}
}

// Position - 0x4939
void func_64() {
	if (gameplay::get_game_timer() - iLocal_57 > 500) {
		iLocal_57 = gameplay::get_game_timer();
		if (func_125(iLocal_69) && ped::is_ped_in_any_vehicle(iLocal_69, 0)) {
			ai::open_sequence_task(&iLocal_119);
			ai::task_play_anim(0, sLocal_477, "bark", 4f, -4f, -1, 0, 0, 0, 0, 0);
			ai::task_play_anim(0, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			ai::close_sequence_task(iLocal_119);
			ai::task_perform_sequence(iLocal_69, iLocal_119);
			ai::clear_sequence_task(&iLocal_119);
			ped::_0x2208438012482A1A(iLocal_69, 0, 0);
		}
	}
}

// Position - 0x49BF
void func_65() {
	if (player::get_player_wanted_level(player::player_id()) == 0 && iLocal_395 == 1) {
		if (iLocal_59 == -1) {
			iLocal_59 = gameplay::get_game_timer();
		}
		if (gameplay::get_game_timer() - iLocal_59 > 10000 && iLocal_478 > -1 && func_38()) {
			if (func_35()) {
				if (func_125(iLocal_69)) {
					if (ped::is_ped_in_any_vehicle(iLocal_69, 0)) {
						func_64();
					}
					else {
						func_122("BARK");
					}
				}
			}
			iLocal_59 = gameplay::get_game_timer();
		}
	}
}

// Position - 0x4A3A
bool func_66() {
	float fVar0;
	vector3 vVar1;

	if (func_125(iLocal_80)) {
		if (entity::is_entity_in_water(iLocal_80)) {
			vVar1 = {entity::get_entity_coords(iLocal_80, 1)};
			if (iLocal_68 == -1) {
				iLocal_68 = gameplay::get_game_timer();
			}
			if (water::get_water_height(vVar1, &fVar0)) {
				if (fVar0 - vVar1.z > 1f) {
					return true;
				}
				else if (gameplay::get_game_timer() - iLocal_68 > 3000) {
					func_122("AGITATED");
					iLocal_68 = gameplay::get_game_timer();
				}
			}
		}
		else {
			iLocal_68 = -1;
		}
	}
	return false;
}

// Position - 0x4AAD
void func_67(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x4ACD
void func_68(vector3 vParam0, int iParam3) {
	if (func_125(player::player_ped_id()) && func_125(iLocal_69)) {
		if (func_125(iLocal_80)) {
			if (iParam3 == 1 && !vehicle::is_vehicle_door_damaged(iLocal_80, iLocal_118) &&
				vehicle::get_vehicle_door_angle_ratio(iLocal_80, 1) < 0.9f) {
				vehicle::set_vehicle_door_open(iLocal_80, iLocal_118, 0, 0);
			}
			if (ped::is_synchronized_scene_running(iLocal_108)) {
				ped::detach_synchronized_scene(iLocal_108);
			}
			ai::clear_ped_tasks_immediately(iLocal_69);
			func_124(iLocal_69, entity::get_offset_from_entity_in_world_coords(iLocal_80, vParam0),
					 entity::get_entity_heading(iLocal_69), 1, 0);
			ped::_0x2208438012482A1A(iLocal_69, 0, 0);
			func_69(0, 0);
			iLocal_107 = 15;
		}
		else {
			if (ped::is_synchronized_scene_running(iLocal_108)) {
				ped::detach_synchronized_scene(iLocal_108);
			}
			ai::clear_ped_tasks_immediately(iLocal_69);
			func_124(iLocal_69,
					 entity::get_offset_from_entity_in_world_coords(player::player_ped_id(), vParam0.x + 1f, vParam0.y,
																	vParam0.z),
					 entity::get_entity_heading(iLocal_69), 1, 0);
			ped::_0x2208438012482A1A(iLocal_69, 0, 0);
			func_69(0, 0);
			iLocal_107 = 15;
		}
	}
}

// Position - 0x4BB2
void func_69(int iParam0, int iParam1) {
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;

	if (iParam0 == 1) {
		if (!cam::does_cam_exist(iLocal_486) && func_125(iLocal_80)) {
			iVar6 = gameplay::get_random_int_in_range(0, 4);
			if (iVar6 == 0) {
				vVar0 = {1.11573f, -1.40338f, 0.555789f};
				vVar3 = {0.5f, 0f, 0.3f};
			}
			else if (iVar6 == 1) {
				vVar0 = {-1.15872f, 1.75252f, 0.761228f};
				vVar3 = {0f, 0f, 0.3f};
			}
			else if (iVar6 == 2) {
				vVar0 = {-1.89975f, 0.339287f, 0.661881f};
				vVar3 = {0f, 0f, 0.3f};
			}
			else {
				vVar0 = {1.38134f, -0.1248f, 0.580783f};
				vVar3 = {0f, 0f, 0.3f};
			}
			iLocal_486 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 1);
			vVar7 = {entity::get_world_position_of_entity_bone(
				iLocal_80, entity::get_entity_bone_index_by_name(iLocal_80, "seat_pside_f"))};
			vVar10 = {entity::get_offset_from_entity_given_world_coords(iLocal_80, vVar7)};
			vVar13 = {vVar0 + vVar10};
			cam::attach_cam_to_entity(iLocal_486, iLocal_80, vVar13, 1);
			cam::point_cam_at_entity(iLocal_486, iLocal_80, vVar10 + vVar3, 1);
			cam::set_cam_fov(iLocal_486, 50f);
			cam::shake_cam(iLocal_486, "HAND_SHAKE", 0.3f);
			cam::set_cam_dof_planes(iLocal_486, 0f, 0f, 100000f, 100000f);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
		}
	}
	else if (cam::does_cam_exist(iLocal_486)) {
		if (iParam1 == 1) {
			cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
			cam::set_gameplay_cam_relative_heading(0f);
		}
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		cam::destroy_all_cams(0);
	}
}

// Position - 0x4D3F
int func_70() {
	if (func_125(iLocal_80)) {
		if (gameplay::get_game_timer() - iLocal_479 > 500 || vehicle::is_vehicle_door_damaged(iLocal_80, iLocal_118) ||
			func_77()) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x4D7C
void func_71() {
	ai::task_play_anim(player::player_ped_id(), "misschop_vehicleenter_exit", sLocal_476, 8f, -8f, -1, 40, 0, 0, 0, 0);
	iLocal_479 = gameplay::get_game_timer();
}

// Position - 0x4DAB
void func_72() {
	controls::disable_control_action(0, 75, 1);
	controls::disable_control_action(0, 23, 1);
}

// Position - 0x4DC3
int func_73() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0x4DE5
void func_74() {
	if (!func_113(iLocal_69, 713668775) && func_4(player::player_ped_id(), iLocal_69, 1) > 1f) {
		ai::task_follow_nav_mesh_to_coord(iLocal_69,
										  entity::get_offset_from_entity_in_world_coords(
											  ped::get_vehicle_ped_is_in(player::player_ped_id(), 1), 2f, 0f, 0f),
										  2f, 20000, 1048576000, 0, 1193033728);
	}
}

// Position - 0x4E33
void func_75(int iParam0) {
	if (iParam0 == 1) {
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		cam::set_gameplay_cam_relative_heading(0f);
	}
	func_67(&iLocal_70);
	entity::set_entity_invincible(iLocal_69, 1);
	ped::set_ped_into_vehicle(iLocal_69, iLocal_80, 0);
	ai::task_play_anim(iLocal_69, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
	ped::_0x2208438012482A1A(iLocal_69, 0, 0);
}

// Position - 0x4E8B
bool func_76() {
	float fVar0;

	if (func_125(iLocal_80) && func_125(iLocal_69)) {
		if (iLocal_66 == -1) {
			fVar0 = func_4(iLocal_80, iLocal_69, 1);
			iLocal_66 = system::floor(fVar0 * 1000f);
			if (iLocal_66 < 5000) {
				iLocal_66 = 5000;
			}
		}
		if (func_39(iLocal_69, entity::get_offset_from_entity_in_world_coords(iLocal_80, 2f, 0f, 0f), 0) < 1f ||
			controls::is_control_pressed(0, 71) || controls::is_control_pressed(0, 72) ||
			iLocal_65 > -1 && gameplay::get_game_timer() - iLocal_65 > iLocal_66) {
			return true;
		}
	}
	return false;
}

// Position - 0x4F20
bool func_77() {
	int iVar0;

	if (func_125(iLocal_80)) {
		iVar0 = entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 1));
		if (iVar0 == joaat("airbus") || iVar0 == joaat("barracks") || iVar0 == joaat("barracks2") ||
			iVar0 == joaat("biff") || iVar0 == joaat("bus") || iVar0 == joaat("coach") || iVar0 == joaat("hauler") ||
			iVar0 == joaat("mixer") || iVar0 == joaat("mixer2") || iVar0 == joaat("packer") || iVar0 == joaat("pbus") ||
			iVar0 == joaat("phantom") || iVar0 == joaat("pounder") || iVar0 == joaat("riot") ||
			iVar0 == joaat("rubble") || iVar0 == joaat("scrap") || iVar0 == joaat("stockade") ||
			iVar0 == joaat("stockade3") || iVar0 == joaat("tiptruck") || iVar0 == joaat("tiptruck2") ||
			iVar0 == joaat("towtruck") || iVar0 == joaat("towtruck2") || iVar0 == gameplay::get_hash_key("monster") ||
			iVar0 == gameplay::get_hash_key("marshall")) {
			return true;
		}
	}
	return false;
}

// Position - 0x5098
void func_78() {
	int iVar0;

	if (func_125(iLocal_80)) {
		iVar0 = entity::get_entity_model(iLocal_80);
		if (iVar0 == joaat("coach")) {
			iLocal_118 = 0;
		}
		else {
			iLocal_118 = 1;
		}
	}
}

// Position - 0x50C4
void func_79() {
	if (func_125(iLocal_80)) {
		iLocal_475 = vehicle::get_vehicle_layout_hash(iLocal_80);
		switch (iLocal_475) {
		case -1965057835:
		case 919485892:
		case -1838563680:
		case 1768419516:
		case 1576485197:
		case 929009548:
		case -497732145:
		case -1659990386:
		case -662028469:
		case 1939145032:
			sLocal_477 = "creatures@rottweiler@in_vehicle@van";
			sLocal_476 = "van_ds_open_door_for_chop";
			break;

		case -2066252141:
		case 1105669833:
		case 542797648:
		case 68566729:
		case -1887744178:
		case -782720499:
		case -1150063973:
		case 1630950849:
		case -463340997:
		case 2033852426:
			sLocal_477 = "creatures@rottweiler@in_vehicle@low_car";
			sLocal_476 = "low_ds_open_door_for_chop";
			break;

		case 434478421:
		case 1816176348:
		case 1710903184:
		case 1663892749:
			sLocal_477 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_476 = "std_ds_open_door_for_chop";
			break;

		default:
			sLocal_477 = "creatures@rottweiler@in_vehicle@std_car";
			sLocal_476 = "std_ds_open_door_for_chop";
			break;
		}
		if (entity::get_entity_model(iLocal_80) == joaat("brawler")) {
			sLocal_477 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_476 = "std_ds_open_door_for_chop";
		}
	}
}

// Position - 0x51D2
bool func_80() {
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
		vehicle::is_vehicle_driveable(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0) &&
		!ped::is_ped_on_any_bike(player::player_ped_id()) && !ped::is_ped_in_any_plane(player::player_ped_id()) &&
		!ped::is_ped_in_any_heli(player::player_ped_id()) && !ped::is_ped_in_any_boat(player::player_ped_id()) &&
		vehicle::get_vehicle_max_number_of_passengers(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)) >= 1 &&
		vehicle::is_vehicle_seat_free(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0, 0) && !func_23()) {
		return true;
	}
	return false;
}

// Position - 0x5268
bool func_81() {
	if (interior::is_valid_interior(interior::get_interior_from_entity(player::player_ped_id()))) {
		if (interior::get_interior_from_entity(player::player_ped_id()) ==
			interior::get_interior_at_coords(-14.5f, -1437.2f, 31.1f)) {
			return true;
		}
		if (interior::get_interior_from_entity(player::player_ped_id()) ==
			interior::get_interior_at_coords(7.6f, 537.3f, 176f)) {
			return true;
		}
		if (interior::get_interior_from_entity(player::player_ped_id()) ==
			interior::get_interior_at_coords(130.2632f, -1295.035f, 28.2695f)) {
			return true;
		}
	}
	return false;
}

// Position - 0x52E6
void func_82() {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	vVar3 = {entity::get_offset_from_entity_in_world_coords(ped::get_vehicle_ped_is_in(player::player_ped_id(), 1), 2f,
															0f, 0f)};
	vVar9 = {vVar3 - vVar0};
	vVar6 = {entity::get_offset_from_entity_in_world_coords(ped::get_vehicle_ped_is_in(player::player_ped_id(), 1), -2f,
															0f, 0f)};
	vVar12 = {vVar6 - vVar0};
	if (system::vmag(vVar9) < system::vmag(vVar12)) {
		iLocal_117 = 1;
	}
	else {
		iLocal_117 = 0;
	}
}

// Position - 0x535E
void func_83() {
	vector3 vVar0;
	float fVar3;
	int iVar4;

	if (iLocal_339 != 5 || gameplay::get_game_timer() - iLocal_340 < 1000 || iLocal_395 == 0) {
		return;
	}
	func_97();
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 102) {
		if (func_96(iVar4)) {
			vVar0 = {func_95(iVar4, 1)};
			if (!func_94(vVar0)) {
				fVar3 = gameplay::get_distance_between_coords(entity::get_entity_coords(iLocal_69, 1), vVar0, 1);
				if (fVar3 < fLocal_347[2] && fVar3 < fLocal_392) {
					iLocal_341[2] = iVar4;
					fLocal_347[2] = fVar3;
					vLocal_353[2 /*3*/] = {func_95(iVar4, 0)};
					vLocal_369[2 /*3*/] = {vVar0};
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 76) {
		if (func_93(iVar4)) {
			vVar0 = {func_92(iVar4, 1)};
			if (!func_94(vVar0)) {
				fVar3 = gameplay::get_distance_between_coords(entity::get_entity_coords(iLocal_69, 1), vVar0, 1);
				if (fVar3 < fLocal_347[1] && fVar3 < fLocal_392) {
					iLocal_341[1] = iVar4;
					fLocal_347[1] = fVar3;
					vLocal_353[1 /*3*/] = {func_92(iVar4, 0)};
					vLocal_369[1 /*3*/] = {vVar0};
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 45) {
		if (func_91(iVar4)) {
			vVar0 = {func_90(iVar4, 1)};
			if (!func_94(vVar0)) {
				fVar3 = gameplay::get_distance_between_coords(entity::get_entity_coords(iLocal_69, 1), vVar0, 1);
				if (fVar3 < fLocal_347[0] && fVar3 < fLocal_392) {
					iLocal_341[0] = iVar4;
					fLocal_347[0] = fVar3;
					vLocal_353[0 /*3*/] = {func_90(iVar4, 0)};
					vLocal_369[0 /*3*/] = {vVar0};
				}
			}
		}
		iVar4++;
	}
	if (func_89()) {
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 50) {
			if (!func_26(iVar4) && func_88(iVar4)) {
				vVar0 = {func_87(iVar4, 1)};
				if (!func_94(vVar0)) {
					fVar3 = gameplay::get_distance_between_coords(entity::get_entity_coords(iLocal_69, 1), vVar0, 1);
					if (fVar3 < fLocal_347[3] && fVar3 < fLocal_392) {
						iLocal_341[3] = iVar4;
						fLocal_347[3] = fVar3;
						vLocal_353[3 /*3*/] = {func_87(iVar4, 0)};
						vLocal_369[3 /*3*/] = {vVar0};
					}
				}
			}
			iVar4++;
		}
	}
	if (func_86()) {
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 50) {
			if (!func_25(iVar4) && func_85(iVar4)) {
				vVar0 = {func_84(iVar4, 1)};
				if (!func_94(vVar0)) {
					fVar3 = gameplay::get_distance_between_coords(entity::get_entity_coords(iLocal_69, 1), vVar0, 1);
					if (fVar3 < fLocal_347[4] && fVar3 < fLocal_392) {
						iLocal_341[4] = iVar4;
						fLocal_347[4] = fVar3;
						vLocal_353[4 /*3*/] = {func_84(iVar4, 0)};
						vLocal_369[4 /*3*/] = {vVar0};
					}
				}
			}
			iVar4++;
		}
	}
	iLocal_340 = gameplay::get_game_timer();
}

// Position - 0x5671
Vector3 func_84(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return -1219f, -3495.9f, 12.9448f;

	case 1:
		if (iParam1 == 1) {
			return 606.8925f, -3250.188f, 5.06951f;
		}
		else {
			return 634.5865f, -3232.79f, -16.5774f;
		}
		break;

	case 2: return 1590.6f, -2810.174f, 3.4494f;

	case 3:
		if (iParam1 == 1) {
			return 327.99f, -2757.61f, 4.99f;
		}
		else {
			return 338.4039f, -2762.106f, 42.6543f;
		}
		break;

	case 4:
		if (iParam1 == 1) {
			return 1134.422f, -2607.024f, 14.77071f;
		}
		else {
			return 1133.688f, -2605.073f, 14.9729f;
		}
		break;

	case 5:
		if (iParam1 == 1) {
			return 368.9316f, -2118.533f, 15.40341f;
		}
		else {
			return 369.945f, -2116.756f, 16.1688f;
		}
		break;

	case 6:
		if (iParam1 == 1) {
			return 1741.82f, -1623.85f, 111.41f;
		}
		else {
			return 1742.024f, -1618.777f, 111.8313f;
		}
		break;

	case 7: return 287.7294f, -1444.4f, 45.5095f;

	case 8: return 17.5926f, -1213.207f, 28.3678f;

	case 9:
		if (iParam1 == 1) {
			return -910.0172f, -1147.44f, 1.06785f;
		}
		else {
			return -900.3597f, -1165.551f, 31.8047f;
		}
		break;

	case 10:
		if (iParam1 == 1) {
			return 1237.728f, -1099.15f, 37.52579f;
		}
		else {
			return 1231.973f, -1102.308f, 34.4289f;
		}
		break;

	case 11:
		if (iParam1 == 1) {
			return 87.69075f, 810.3736f, 210.1258f;
		}
		else {
			return 81.2213f, 814.0283f, 213.2917f;
		}
		break;

	case 12:
		if (iParam1 == 1) {
			return -1900.951f, 1389.582f, 218.1509f;
		}
		else {
			return -1907.515f, 1388.69f, 217.9728f;
		}
		break;

	case 13:
		if (iParam1 == 1) {
			return 467.369f, -730.7552f, 26.36373f;
		}
		else {
			return 469.8529f, -730.8f, 26.3985f;
		}
		break;

	case 14: return 202.1081f, -569.7198f, 128.18f;

	case 15:
		if (iParam1 == 1) {
			return 163.0531f, -566.3394f, 21.029f;
		}
		else {
			return 159.39f, -563.82f, 21f;
		}
		break;

	case 16:
		if (iParam1 == 1) {
			return -1183.152f, -518.5386f, 38.53018f;
		}
		else {
			return -1182.538f, -525.5859f, 39.9114f;
		}
		break;

	case 17: return -228.0476f, -236.4184f, 49.1361f;

	case 18: return -407.7026f, -151.7918f, 63.5505f;

	case 19:
		if (iParam1 == 1) {
			return -1169.397f, -56.76701f, 44.45705f;
		}
		else {
			return -1175.488f, -65.4649f, 44.6563f;
		}
		break;

	case 20:
		if (iParam1 == 1) {
			return 1679.056f, 39.44059f, 160.7736f;
		}
		else {
			return 1684.664f, 40.7142f, 153.4074f;
		}
		break;

	case 21:
		if (iParam1 == 1) {
			return 1964.25f, 553.68f, 160.72f;
		}
		else {
			return 1965.58f, 555.99f, 160.79f;
		}
		break;

	case 22:
		if (iParam1 == 1) {
			return 24.21706f, 637.1212f, 206.3897f;
		}
		else {
			return 22.4492f, 638.8155f, 189.6085f;
		}
		break;

	case 23: return 2901.204f, 796.1192f, 3.3556f;

	case 24:
		if (iParam1 == 1) {
			return -1531.895f, 870.3203f, 180.6775f;
		}
		else {
			return -1529.722f, 871.4257f, 180.6421f;
		}
		break;

	case 25: return -404.3191f, 1100.889f, 331.535f;

	case 26: return -2809.354f, 1449.643f, 99.928f;

	case 27:
		if (iParam1 == 1) {
			return 3144.045f, 2184.413f, -5.2961f;
		}
		else {
			return 3144.045f, 2184.413f, -5.2961f;
		}
		break;

	case 28: return 815.7574f, 1850.879f, 120.1796f;

	case 29: return -1944.24f, 1941.07f, 162.8f;

	case 30:
		if (iParam1 == 1) {
			return -1452.23f, 2127.41f, 42.84f;
		}
		else {
			return -1436.87f, 2130.22f, 26.78f;
		}
		break;

	case 31: return 1367.413f, 2180.632f, 96.6914f;

	case 32:
		if (iParam1 == 1) {
			return 170.1652f, 2217.637f, 89.30811f;
		}
		else {
			return 172.1426f, 2220.131f, 89.7842f;
		}
		break;

	case 33: return 889.3209f, 2870.052f, 55.2834f;

	case 34:
		if (iParam1 == 1) {
			return 1980.2f, 2914.79f, 45.48f;
		}
		else {
			return 1963.55f, 2922.81f, 57.76f;
		}
		break;

	case 35: return -390.384f, 2963.26f, 18.2713f;

	case 36: return 71.6642f, 3279.368f, 30.3918f;

	case 37: return 1924.186f, 3471.256f, 50.3238f;

	case 38: return -583.1569f, 3580.375f, 266.2471f;

	case 39:
		if (iParam1 == 1) {
			return 2514.302f, 3789.519f, 52.077f;
		}
		else {
			return 2516.98f, 3789.35f, 53.79f;
		}
		break;

	case 40:
		if (iParam1 == 1) {
			return 1517.613f, 3803.926f, 30.95605f;
		}
		else {
			return 1486.047f, 3857.217f, 22.2905f;
		}
		break;

	case 41:
		if (iParam1 == 1) {
			return -530.2739f, 4474.358f, 59.45993f;
		}
		else {
			return -528.8246f, 4440.644f, 31.7384f;
		}
		break;

	case 42:
		if (iParam1 == 1) {
			return 3815.055f, 4447.343f, 2.06631f;
		}
		else {
			return 3820.813f, 4441.683f, 1.8007f;
		}
		break;

	case 43:
		if (iParam1 == 1) {
			return -1946.95f, 4584.36f, 56.06f;
		}
		else {
			return -1943.055f, 4585.194f, 46.6362f;
		}
		break;

	case 44: return 2437.545f, 4779.959f, 33.5101f;

	case 45: return -1441.495f, 5414.888f, 23.3f;

	case 46: return 2196.251f, 5599.034f, 52.7129f;

	case 47:
		if (iParam1 == 1) {
			return -503.95f, 5673.55f, 51.24f;
		}
		else {
			return -503.2193f, 5665.61f, 48.8487f;
		}
		break;

	case 48:
		if (iParam1 == 1) {
			return -378.4192f, 6080.782f, 30.44296f;
		}
		else {
			return -381.291f, 6086.949f, 38.6147f;
		}
		break;

	case 49: return 440.9546f, 6459.642f, 27.7432f;
	}
	return 0f, 0f, 0f;
}

// Position - 0x5EBD
int func_85(int iParam0) {
	switch (iParam0) {
	case 2:
	case 14:
	case 18:
	case 25: return 0;

	case 16:
		if (gameplay::is_bit_set(Global_25347, 7)) {
			return 0;
		}
		break;
	}
	return 1;
}

// Position - 0x5F04
bool func_86() { return Global_101700.f_9008.f_125.f_2; }

// Position - 0x5F17
Vector3 func_87(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		if (iParam1 == 1) {
			return 1034.274f, -3026.275f, 4.90197f;
		}
		else {
			return 1026.705f, -3026.052f, 13.3323f;
		}
		break;

	case 1:
		if (iParam1 == 1) {
			return -1040.979f, -2743.509f, 12.94983f;
		}
		else {
			return -1048.604f, -2734.218f, 12.8895f;
		}
		break;

	case 2:
		if (iParam1 == 1) {
			return -93.9012f, -2711.314f, 5.01752f;
		}
		else {
			return -81.1199f, -2726.511f, 7.74f;
		}
		break;

	case 3: return -917.6909f, -2527.384f, 22.3218f;

	case 4:
		if (iParam1 == 1) {
			return 746.45f, -2310.32f, 26.03f;
		}
		else {
			return 748.922f, -2298.114f, 19.624f;
		}
		break;

	case 5:
		if (iParam1 == 1) {
			return 1509.742f, -2126.038f, 75.21973f;
		}
		else {
			return 1509.099f, -2120.551f, 75.61f;
		}
		break;

	case 6: return 76.0032f, -1970.475f, 20.1302f;

	case 7:
		if (iParam1 == 1) {
			return -1.82327f, -1732.614f, 28.29367f;
		}
		else {
			return 0.067f, -1734.027f, 30.606f;
		}
		break;

	case 8:
		if (iParam1 == 1) {
			return -1377.766f, -1409.837f, 4.63205f;
		}
		else {
			return -1380.491f, -1404.374f, 1.7273f;
		}
		break;

	case 9: return 2864.808f, -1372.84f, 1.3151f;

	case 10: return -1035.812f, -1273.077f, 0.8919f;

	case 11: return -1821.136f, -1201.36f, 18.1698f;

	case 12: return 643.0116f, -1035.65f, 35.8891f;

	case 13: return -119.0616f, -977.2228f, 303.23f;

	case 14:
		if (iParam1 == 1) {
			return -1243.104f, -507.8057f, 30.10775f;
		}
		else {
			return -1238.766f, -506.7138f, 37.6019f;
		}
		break;

	case 15:
		if (iParam1 == 1) {
			return 83.79993f, -431.9302f, 36.55315f;
		}
		else {
			return 86.4f, -433.9f, 36f;
		}
		break;

	case 16: return 1095.953f, -210.4642f, 54.9477f;

	case 17: return -1724.522f, -196f, 57.2387f;

	case 18: return 265.374f, -199.546f, 60.795f;

	case 19:
		if (iParam1 == 1) {
			return -3020.475f, 36.55431f, 9.11777f;
		}
		else {
			return -3021.4f, 38f, 10.2945f;
		}
		break;

	case 20:
		if (iParam1 == 1) {
			return -347.5277f, 53.37161f, 52.97814f;
		}
		else {
			return -347.3f, 54.865f, 53.921f;
		}
		break;

	case 21: return 1052.248f, 167.611f, 87.7406f;

	case 22: return -2303.798f, 217.4301f, 166.6017f;

	case 23: return -138.9423f, 868.3885f, 231.6956f;

	case 24:
		if (iParam1 == 1) {
			return 688.1073f, 1204.671f, 323.3438f;
		}
		else {
			return 682.4505f, 1204.928f, 344.3322f;
		}
		break;

	case 25: return -1548.763f, 1380.173f, 125.3728f;

	case 26:
		if (iParam1 == 1) {
			return -432.14f, 1598.46f, 355.73f;
		}
		else {
			return -432.0034f, 1597.129f, 356.613f;
		}
		break;

	case 27: return 3081.93f, 1648.29f, 2.42f;

	case 28: return -594.38f, 2092f, 130.57f;

	case 29:
		if (iParam1 == 1) {
			return 3069.213f, 2160.988f, 1.1327f;
		}
		else {
			return 3063.583f, 2212.63f, 2.5863f;
		}
		break;

	case 30: return 180.21f, 2263.83f, 91.87f;

	case 31:
		if (iParam1 == 1) {
			return 926.96f, 2445.36f, 49.09f;
		}
		else {
			return 929.6946f, 2444.115f, 48.43f;
		}
		break;

	case 32:
		if (iParam1 == 1) {
			return -2380.212f, 2655.176f, 0.832f;
		}
		else {
			return -2379.948f, 2656.953f, 1.4906f;
		}
		break;

	case 33: return -861.38f, 2753.3f, 12.867f;

	case 34: return -289.0195f, 2848.853f, 53.331f;

	case 35:
		if (iParam1 == 1) {
			return 288.8409f, 2871.912f, 42.6422f;
		}
		else {
			return 265.7415f, 2866.416f, 73.19f;
		}
		break;

	case 36:
		if (iParam1 == 1) {
			return 1297.378f, 2988.71f, 40.11787f;
		}
		else {
			return 1294.2f, 3001.9f, 57.7f;
		}
		break;

	case 37: return 1568.65f, 3572.8f, 32.294f;

	case 38: return -1608.62f, 4274.25f, 102.95f;

	case 39:
		if (iParam1 == 1) {
			return -3.51812f, 4332.451f, 31.21602f;
		}
		else {
			return -1.9585f, 4334.787f, 32.3702f;
		}
		break;

	case 40: return 1336.737f, 4307.2f, 37.1325f;

	case 41:
		if (iParam1 == 1) {
			return -1007.103f, 4836.936f, 268.5488f;
		}
		else {
			return -1001.48f, 4851.322f, 273.6112f;
		}
		break;

	case 42: return 1877.09f, 5078.98f, 50.49f;

	case 43:
		if (iParam1 == 1) {
			return 3366.099f, 5182.461f, 0.68317f;
		}
		else {
			return 3436.453f, 5176.911f, 6.386f;
		}
		break;

	case 44:
		if (iParam1 == 1) {
			return -576.12f, 5472.24f, 59.28f;
		}
		else {
			return -578.8057f, 5470.164f, 59.0295f;
		}
		break;

	case 45: return 444.6518f, 5571.781f, 780.1888f;

	case 46: return -402.9948f, 6319.279f, 31.2256f;

	case 47: return 1439.599f, 6335.208f, 22.9485f;

	case 48:
		if (iParam1 == 1) {
			return 1466.109f, 6552.266f, 12.95773f;
		}
		else {
			return 1469.632f, 6552.174f, 13.6854f;
		}
		break;

	case 49:
		if (iParam1 == 1) {
			return 66.19278f, 6668.888f, 30.80633f;
		}
		else {
			return 66.7136f, 6663.198f, 30.7821f;
		}
		break;
	}
	return 0f, 0f, 0f;
}

// Position - 0x66F7
int func_88(int iParam0) {
	switch (iParam0) {
	case 3:
	case 9:
	case 10:
	case 13:
	case 27:
	case 38: return 0;

	case 14:
		if (gameplay::is_bit_set(Global_25347, 7)) {
			return 0;
		}
		break;
	}
	return 1;
}

// Position - 0x674A
bool func_89() { return Global_101700.f_9008.f_122.f_2; }

// Position - 0x675D
Vector3 func_90(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return 473.1829f, -2643.184f, 4.7209f;

	case 1:
		if (iParam1 == 1) {
			return 291.41f, -2090.78f, 16.29f;
		}
		else {
			return 289.2062f, -2091.221f, 16.0234f;
		}
		break;

	case 2:
		if (iParam1 == 1) {
			return 1173.839f, -1499.781f, 33.84875f;
		}
		else {
			return 1173.566f, -1495.763f, 34.1121f;
		}
		break;

	case 3:
		if (iParam1 == 1) {
			return -461.7139f, -1699.202f, 17.85122f;
		}
		else {
			return -462f, -1701f, 18.8f;
		}
		break;

	case 4: return -1384.628f, -521.0416f, 30.084f;

	case 5: return -521.5692f, -601.7532f, 29.4482f;

	case 6: return -664.5f, 165.4552f, 58.3821f;

	case 7: return 329.3609f, -190.5986f, 53.2262f;

	case 8:
		if (iParam1 == 1) {
			return -477.44f, -1052.99f, 39.81f;
		}
		else {
			return -478.7744f, -1051.079f, 40.93f;
		}
		break;

	case 9: return -1268.071f, -1917.408f, 4.8583f;

	case 10: return -1221.908f, -2771.762f, 13.0545f;

	case 11: return -3088.668f, 652.9629f, 0.989f;

	case 12:
		if (iParam1 == 1) {
			return -629.3048f, 2036.067f, 157.3307f;
		}
		else {
			return -627.2166f, 2035.032f, 157.5585f;
		}
		break;

	case 13:
		if (iParam1 == 1) {
			return -2071.903f, 3411.504f, 30.36414f;
		}
		else {
			return -2048.483f, 3406.162f, 31.1504f;
		}
		break;

	case 14: return -424.0321f, 4012.767f, 80.4744f;

	case 15: return 1983.1f, 5174.5f, 47.6f;

	case 16:
		if (iParam1 == 1) {
			return 2341.1f, 2576f, 45.7f;
		}
		else {
			return 2340.17f, 2573.89f, 45.77f;
		}
		break;

	case 17:
		if (iParam1 == 1) {
			return 1663.9f, -25.91945f, 172.7747f;
		}
		else {
			return 1663.96f, -24.1101f, 172.7747f;
		}
		break;

	case 18:
		if (iParam1 == 1) {
			return 2614.451f, 1695.127f, 26.59907f;
		}
		else {
			return 2617.729f, 1693.417f, 30.8743f;
		}
		break;

	case 19:
		if (iParam1 == 1) {
			return -187.31f, 1545.16f, 314.07f;
		}
		else {
			return -187.0338f, 1555.677f, 321.2431f;
		}
		break;

	case 20:
		if (iParam1 == 1) {
			return 859.5025f, 2426.04f, 53.18517f;
		}
		else {
			return 868.7573f, 2423.536f, 60.8942f;
		}
		break;

	case 21:
		if (iParam1 == 1) {
			return -1822.075f, 805.7814f, 137.7265f;
		}
		else {
			return -1822.967f, 803.8147f, 138.2005f;
		}
		break;

	case 22:
		if (iParam1 == 1) {
			return -1852.922f, 2054.42f, 139.9841f;
		}
		else {
			return -1851.628f, 2053.836f, 139.9841f;
		}
		break;

	case 23:
		if (iParam1 == 1) {
			return -1075.515f, 4898.497f, 213.2767f;
		}
		else {
			return -1070.651f, 4898.934f, 213.2752f;
		}
		break;

	case 24:
		if (iParam1 == 1) {
			return 1301.56f, 4306.6f, 36.39f;
		}
		else {
			return 1300.1f, 4308.1f, 37.3f;
		}
		break;

	case 25:
		if (iParam1 == 1) {
			return -436.44f, 5983.5f, 30.49f;
		}
		else {
			return -437.94f, 5985.04f, 31.29f;
		}
		break;

	case 26:
		if (iParam1 == 1) {
			return 1840.569f, 3693.77f, 33.2668f;
		}
		else {
			return 1838.577f, 3692.028f, 33.6172f;
		}
		break;

	case 27: return 533.1f, -23.8f, 70.6f;

	case 28:
		if (iParam1 == 1) {
			return 445.83f, -986.48f, 29.69f;
		}
		else {
			return 446.4f, -988.5f, 29.77f;
		}
		break;

	case 29: return -1119.498f, -847.3371f, 18.6886f;

	case 30: return 391.2f, -1603.9f, 28.38f;

	case 31: return -890.8f, -2386.2f, 13.4f;

	case 32:
		if (iParam1 == 1) {
			return 282.75f, 953.05f, 209.95f;
		}
		else {
			return 284.7f, 954.2f, 210.1514f;
		}
		break;

	case 33: return -2003.115f, 544.7549f, 114.5077f;

	case 34:
		if (iParam1 == 1) {
			return -397.5786f, 1127.353f, 321.7291f;
		}
		else {
			return -386.8739f, 1142.42f, 321.5892f;
		}
		break;

	case 35: return -1521.811f, 1560.201f, 106.9392f;

	case 36: return 1391.945f, 3616.655f, 37.9259f;

	case 37:
		if (iParam1 == 1) {
			return 45.37f, -1911.45f, 20.79f;
		}
		else {
			return 40.5177f, -1910.727f, 20.9706f;
		}
		break;

	case 38:
		if (iParam1 == 1) {
			return 68.14f, 3749.36f, 38.73f;
		}
		else {
			return 70.3786f, 3755.605f, 38.7487f;
		}
		break;

	case 39: return 119.45f, -755.29f, 258.15f;

	case 40:
		if (iParam1 == 1) {
			return 156.35f, -1192.1f, 28.37f;
		}
		else {
			return 160.4134f, -1191.7f, 28.87f;
		}
		break;

	case 41: return 23.9296f, -633.9206f, 6.5084f;

	case 42:
		if (iParam1 == 1) {
			return 31.67f, 6542.78f, 30.44f;
		}
		else {
			return 30.9162f, 6546.791f, 30.4058f;
		}
		break;

	case 43:
		if (iParam1) {
			return 1333.057f, 4381.278f, 43.3703f;
		}
		else {
			return 1331.355f, 4392.887f, 44.012f;
		}
		break;

	case 44:
		if (iParam1 == 1) {
			return -1147.31f, 4939.27f, 221.27f;
		}
		else {
			return -1149.392f, 4938.771f, 221.3682f;
		}
		break;
	}
	return 0f, 0f, 0f;
}

// Position - 0x6EEB
bool func_91(int iParam0) {
	switch (iParam0) {
	case 33:
	case 39:
	case 41: return false;
	}
	return true;
}

// Position - 0x6F14
Vector3 func_92(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return 131.2f, 6920.1f, 20.8f;

	case 1:
		if (iParam1 == 1) {
			return -1048.569f, 4917.414f, 208.4216f;
		}
		else {
			return -1046.277f, 4918.739f, 211.5379f;
		}
		break;

	case 2: return -2358.46f, 3251.397f, 100.5504f;

	case 3:
		if (iParam1 == 1) {
			return -247.6219f, 6331.341f, 31.42602f;
		}
		else {
			return -249.9504f, 6331.219f, 32.7262f;
		}
		break;

	case 4:
		if (iParam1 == 1) {
			return -140.9f, -2491.45f, 43.45f;
		}
		else {
			return -141.0976f, -2498.239f, 40.0124f;
		}
		break;

	case 5:
		if (iParam1 == 1) {
			return -2924.697f, 46.50282f, 10.60369f;
		}
		else {
			return -2925.7f, 47.4f, 11.6f;
		}
		break;

	case 6: return -793.1981f, -726.4421f, 26.28f;

	case 7:
		if (iParam1 == 1) {
			return 124.0092f, -673.0096f, 41.02729f;
		}
		else {
			return 123.5196f, -674.2917f, 41.4945f;
		}
		break;

	case 8:
		if (iParam1 == 1) {
			return 1195.737f, -1481.694f, 33.8595f;
		}
		else {
			return 1194.709f, -1482.472f, 33.9594f;
		}
		break;

	case 9:
		if (iParam1 == 1) {
			return -35.88743f, 1945.738f, 189.1868f;
		}
		else {
			return -35.5254f, 1947.289f, 189.186f;
		}
		break;

	case 10:
		if (iParam1) {
			return 753.4579f, 4174.996f, 39.8011f;
		}
		else {
			return 751.72f, 4175.14f, 40.95f;
		}
		break;

	case 11:
		if (iParam1 == 1) {
			return 1791.256f, 4592.383f, 36.68283f;
		}
		else {
			return 1789.8f, 4592.4f, 36.78f;
		}
		break;

	case 12: return 341.311f, 2618.918f, 43.5124f;

	case 13: return 442.3755f, -223.602f, 55.0215f;

	case 14:
		if (iParam1 == 1) {
			return 1291.02f, -1760.94f, 51.05f;
		}
		else {
			return 1286.5f, -1754.4f, 52f;
		}
		break;

	case 15:
		if (iParam1 == 1) {
			return 1659.438f, 5.4271f, 165.1176f;
		}
		else {
			return 1658.621f, 6.7752f, 166.1676f;
		}
		break;

	case 16:
		if (iParam1 == 1) {
			return 1645.91f, 4866.72f, 40.98f;
		}
		else {
			return 1647.399f, 4865.839f, 41f;
		}
		break;

	case 17: return -1144.589f, -2004.452f, 12.3803f;

	case 18:
		if (iParam1 == 1) {
			return -1047.3f, -520.6f, 35f;
		}
		else {
			return -1048.32f, -521.2f, 35.14f;
		}
		break;

	case 19:
		if (iParam1 == 1) {
			return -1576.046f, -587.8257f, 33.97909f;
		}
		else {
			return -1576.817f, -586.3887f, 34.8528f;
		}
		break;

	case 20:
		if (iParam1 == 1) {
			return 953.44f, -123.42f, 73.35f;
		}
		else {
			return 954.5f, -121.34f, 74.18f;
		}
		break;

	case 21:
		if (iParam1 == 1) {
			return 1134.201f, -665.9413f, 56.08261f;
		}
		else {
			return 1135.401f, -663.7875f, 56.088f;
		}
		break;

	case 22:
		if (iParam1 == 1) {
			return -2196.198f, 248.9123f, 173.612f;
		}
		else {
			return -2195.029f, 250.4256f, 173.6017f;
		}
		break;

	case 23: return 29.2f, 3635.4f, 39.8f;

	case 24:
		if (iParam1 == 1) {
			return 1724.429f, 3299.023f, 40.2235f;
		}
		else {
			return 1721.96f, 3300.464f, 40.3835f;
		}
		break;

	case 25:
		if (iParam1 == 1) {
			return 2617.321f, 3659.452f, 100.3867f;
		}
		else {
			return 2612.712f, 3662.564f, 101.1074f;
		}
		break;

	case 26: return -459.9625f, 1101.076f, 328.0211f;

	case 27:
		if (iParam1 == 1) {
			return 2432.607f, 4994.333f, 45.25828f;
		}
		else {
			return 2430.906f, 4995.561f, 45.2685f;
		}
		break;

	case 28:
		if (iParam1 == 1) {
			return 3722.456f, 4521.837f, 20.39456f;
		}
		else {
			return 3724.5f, 4524.5f, 21.6f;
		}
		break;

	case 29:
		if (iParam1 == 1) {
			return -446.9024f, 5997.598f, 30.3407f;
		}
		else {
			return -446.045f, 6000.882f, 31.9163f;
		}
		break;

	case 30: return 3291.4f, 5192.5f, 18.4f;

	case 31:
		if (iParam1 == 1) {
			return 390.81f, -1436.07f, 28.45f;
		}
		else {
			return 388.7f, -1434.3f, 29.8f;
		}
		break;

	case 32: return -445.26f, -442.49f, 32.26f;

	case 33:
		if (iParam1) {
			return -1501.46f, 858.17f, 180.59f;
		}
		else {
			return -1500.08f, 857.59f, 180.59f;
		}
		break;

	case 34: return 2822.2f, -741.4f, 1.8f;

	case 35:
		if (iParam1 == 1) {
			return -3166.978f, 1102.622f, 19.80827f;
		}
		else {
			return -3165.613f, 1102.24f, 19.8928f;
		}
		break;

	case 36:
		if (iParam1 == 1) {
			return 1842.882f, 3670.457f, 32.68f;
		}
		else {
			return 1841.114f, 3675.253f, 34.086f;
		}
		break;

	case 37:
		if (iParam1 == 1) {
			return 1828.794f, 2605.504f, 44.61582f;
		}
		else {
			return 1830.535f, 2603.828f, 45.7491f;
		}
		break;

	case 38:
		if (iParam1 == 1) {
			return -32.61f, -1089.67f, 25.42f;
		}
		else {
			return -40.0528f, -1084.016f, 26.6224f;
		}
		break;

	case 39:
		if (iParam1 == 1) {
			return 1439.012f, 6336.812f, 22.96477f;
		}
		else {
			return 1445.544f, 6334.057f, 23.975f;
		}
		break;

	case 40:
		if (iParam1 == 1) {
			return -782.5126f, -1352.245f, 8.0001f;
		}
		else {
			return -784.4851f, -1351.364f, 8.1001f;
		}
		break;

	case 41:
		if (iParam1 == 1) {
			return 962.8806f, -1826.419f, 30.07195f;
		}
		else {
			return 963.1673f, -1831.149f, 36.2055f;
		}
		break;

	case 42:
		if (iParam1 == 1) {
			return -1246.155f, -1531.647f, 3.2962f;
		}
		else {
			return -1246.494f, -1533.677f, 4.5262f;
		}
		break;

	case 43:
		if (iParam1 == 1) {
			return -765.5466f, 698.8101f, 143.3693f;
		}
		else {
			return -761.1058f, 701.9452f, 145.05f;
		}
		break;

	case 44:
		if (iParam1 == 1) {
			return -512.1094f, 28.86313f, 43.6153f;
		}
		else {
			return -513.4391f, 30.9069f, 43.9018f;
		}
		break;

	case 45:
		if (iParam1 == 1) {
			return 781.3839f, 1292.073f, 359.2997f;
		}
		else {
			return 780.3879f, 1295.705f, 361.6941f;
		}
		break;

	case 46: return 208.69f, 337.76f, 104.64f;

	case 47:
		if (iParam1 == 1) {
			return -1889.99f, 2078.38f, 140f;
		}
		else {
			return -1890.24f, 2073.26f, 140.11f;
		}
		break;

	case 48: return 153.6156f, -3073.998f, 4.8962f;

	case 49:
		if (iParam1) {
			return -306.2449f, -1180.538f, 22.711f;
		}
		else {
			return -304.0894f, -1180.886f, 23.9493f;
		}
		break;

	case 50: return -2006.987f, -556.4998f, 11.8813f;

	case 51:
		if (iParam1 == 1) {
			return -590.2079f, -289.8196f, 40.68631f;
		}
		else {
			return -588.1934f, -290.4782f, 43.7101f;
		}
		break;

	case 52: return -1795.826f, -855.7111f, 8.2048f;

	case 53: return -1557.108f, -1155.246f, 2.9158f;

	case 54:
		if (iParam1 == 1) {
			return -1470.71f, -1389.33f, 1.58f;
		}
		else {
			return -1467.483f, -1387.507f, 3.1432f;
		}
		break;

	case 55: return -684.8126f, -180.648f, 48.02f;

	case 56:
		if (iParam1 == 1) {
			return -1311.413f, 640.1154f, 136.9244f;
		}
		else {
			return -1307.062f, 641.4211f, 138.0582f;
		}
		break;

	case 57: return 2493.686f, 4963.541f, 43.7358f;

	case 58:
		if (iParam1 == 1) {
			return 1392.76f, 3602.94f, 33.98f;
		}
		else {
			return 1392.609f, 3605.799f, 34.9939f;
		}
		break;

	case 59:
		if (iParam1 == 1) {
			return -527.33f, 5295.7f, 73.17f;
		}
		else {
			return -535.4436f, 5297.496f, 76.3891f;
		}
		break;

	case 60:
		if (iParam1 == 1) {
			return -564.26f, 5353.13f, 69.23f;
		}
		else {
			return -551.5837f, 5349.404f, 75.253f;
		}
		break;

	case 61:
		if (iParam1 == 1) {
			return 3.18f, -1827.1f, 24.22f;
		}
		else {
			return 0.1911f, -1825.905f, 24.3295f;
		}
		break;

	case 62:
		if (iParam1 == 1) {
			return 62.25f, 3681.06f, 38.84f;
		}
		else {
			return 63.8867f, 3683.49f, 39.1543f;
		}
		break;

	case 63: return 155.384f, -741.179f, 258.6519f;

	case 64:
		if (iParam1 == 1) {
			return 126.61f, -1206.29f, 28.3f;
		}
		else {
			return 124.265f, -1205.882f, 28.2951f;
		}
		break;

	case 65: return 27.449f, -625.31f, 15.462f;

	case 66:
		if (iParam1 == 1) {
			return -129.04f, -662.04f, 39.51f;
		}
		else {
			return -129.0374f, -659.2689f, 41.0016f;
		}
		break;

	case 67:
		if (iParam1) {
			return 1138.62f, -1598.56f, 33.69f;
		}
		else {
			return 1138.63f, -1596.61f, 35.07f;
		}
		break;

	case 68:
		if (iParam1) {
			return 1149.68f, -1525.56f, 33.84f;
		}
		else {
			return 1147.55f, -1527.83f, 36.01f;
		}
		break;

	case 69:
		if (iParam1) {
			return 297.48f, -1448.79f, 28.97f;
		}
		else {
			return 296.44f, -1450.75f, 30.4f;
		}
		break;

	case 70:
		if (iParam1) {
			return 324.21f, -1392.68f, 31.51f;
		}
		else {
			return 322.27f, -1393.75f, 32.79f;
		}
		break;

	case 71:
		if (iParam1) {
			return 293.2f, -597.92f, 42.28f;
		}
		else {
			return 294.3f, -598.1f, 43.73f;
		}
		break;

	case 72:
		if (iParam1) {
			return 358f, -592.66f, 27.79f;
		}
		else {
			return 357.07f, -590.63f, 29.08f;
		}
		break;

	case 73:
		if (iParam1) {
			return -495.45f, -326.18f, 33.5f;
		}
		else {
			return -496.4f, -324.7f, 34.75f;
		}
		break;

	case 74:
		if (iParam1) {
			return -450.91f, -351.93f, 33.5f;
		}
		else {
			return -449.82f, -353.49f, 34.75f;
		}
		break;

	case 75: return -2258.833f, 323.9413f, 184.9015f;
	}
	return 0f, 0f, 0f;
}

// Position - 0x7CEC
bool func_93(int iParam0) {
	switch (iParam0) {
	case 2:
	case 17:
	case 55:
	case 63:
	case 65: return false;
	}
	return true;
}

// Position - 0x7D21
int func_94(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return 1;
	}
	return 0;
}

// Position - 0x7D4B
Vector3 func_95(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		if (iParam1 == 1) {
			return -1760.36f, 428.6f, 126.31f;
		}
		else {
			return -1756.974f, 427.531f, 126.7f;
		}
		break;

	case 1: return -1595.742f, 2799.371f, 16.0205f;

	case 2:
		if (iParam1 == 1) {
			return -197.1486f, 1482.685f, 288.253f;
		}
		else {
			return -200.0114f, 1481.697f, 289.4303f;
		}
		break;

	case 3: return 256.77f, 2841.047f, 42.6599f;

	case 4: return -1360.223f, 4435.751f, 27.7754f;

	case 5: return 64.63f, 7051.253f, 15.8272f;

	case 6: return -456.2838f, 1593.799f, 358.0119f;

	case 7:
		if (iParam1 == 1) {
			return -3114.617f, 749.8445f, 11.59352f;
		}
		else {
			return -3111.614f, 749.2816f, 12.6285f;
		}
		break;

	case 8: return 713.6797f, 4095.969f, 33.765f;

	case 9: return 255.2671f, 2586.281f, 43.9619f;

	case 10: return -1292.64f, -3345.82f, 23.27f;

	case 11: return 3111.531f, 2214.848f, -8.6457f;

	case 12:
		if (iParam1 == 1) {
			return 555.82f, -839.05f, 39.84f;
		}
		else {
			return 555f, -837.81f, 55.08f;
		}
		break;

	case 13: return -2360f, 3245f, 91.9f;

	case 14: return 1691.152f, 2640.859f, 54.0693f;

	case 15: return 1982.37f, 6203.64f, 41.15f;

	case 16: return -2979f, 1588f, 23.3f;

	case 17: return 963.5308f, -1824.04f, 30.0708f;

	case 18: return -295.4187f, 6188.786f, 30.48932f;

	case 19: return -1778f, 124f, 67.9f;

	case 20:
		if (iParam1 == 1) {
			return 157.5759f, 3133.994f, 42.45733f;
		}
		else {
			return 161.2925f, 3131.854f, 42.5892f;
		}
		break;

	case 21: return -888f, 5406f, 30.5f;

	case 22: return -1840f, 793f, 138.7f;

	case 23:
		if (iParam1 == 1) {
			return -495.8039f, -1750.207f, 17.42509f;
		}
		else {
			return -495.9968f, -1747.231f, 18.5194f;
		}
		break;

	case 24:
		if (iParam1 == 1) {
			return -1764.695f, -265.5809f, 47.6187f;
		}
		else {
			return -1763.359f, -263.2062f, 47.1481f;
		}
		break;

	case 25:
		if (iParam1 == 1) {
			return 548.0715f, -1642.451f, 27.2033f;
		}
		else {
			return 548.5943f, -1642.603f, 27.4425f;
		}
		break;

	case 26: return 736.0563f, 2595.556f, 72.9165f;

	case 27:
		if (iParam1 == 1) {
			return 701.0009f, -1179.702f, 23.28737f;
		}
		else {
			return 699.2748f, -1181.671f, 33.2608f;
		}
		break;

	case 28:
		if (iParam1 == 1) {
			return -1146.74f, 4938.93f, 221.27f;
		}
		else {
			return -1149.437f, 4940.362f, 221.3282f;
		}
		break;

	case 29:
		if (iParam1 == 1) {
			return 2543.91f, -432.76f, 93.12f;
		}
		else {
			return 2513.535f, -442.8484f, 113.0888f;
		}
		break;

	case 30: return -553.1764f, -2239.877f, 121.3704f;

	case 31:
		if (iParam1 == 1) {
			return 987.16f, -108.02f, 73.3f;
		}
		else {
			return 987.15f, -105.88f, 74.13f;
		}
		break;

	case 32: return -1048f, -836f, 10.5f;

	case 33: return 312.6026f, 6606.896f, 27.8835f;

	case 34: return -37.21f, 2871.26f, 58.61f;

	case 35:
		if (iParam1 == 1) {
			return 61.91f, 3690.51f, 38.83f;
		}
		else {
			return 59f, 3692f, 38.92f;
		}
		break;

	case 36:
		if (iParam1 == 1) {
			return 2933.33f, 4617.07f, 47.72f;
		}
		else {
			return 2934.499f, 4617.067f, 47.736f;
		}
		break;

	case 37: return 57.8219f, -1932.121f, 20.4939f;

	case 38: return 378.26f, -334.3f, 45.63f;

	case 39:
		if (iParam1 == 1) {
			return 2673.662f, 2793.702f, 31.8124f;
		}
		else {
			return 2676.045f, 2793.249f, 39.5934f;
		}
		break;

	case 40: return -1582.278f, 770.3486f, 188.1942f;

	case 41:
		if (iParam1 == 1) {
			return -1641.139f, -1032.815f, 4.63165f;
		}
		else {
			return -1640.546f, -1034.129f, 4.6074f;
		}
		break;

	case 42:
		if (iParam1 == 1) {
			return -151.09f, -214.36f, 44.73f;
		}
		else {
			return -159.7137f, -209.1721f, 48.938f;
		}
		break;

	case 43: return -1276.986f, -2451.886f, 72.0481f;

	case 44:
		if (iParam1 == 1) {
			return -403.5827f, 1056.212f, 322.8414f;
		}
		else {
			return -402f, 1053f, 323f;
		}
		break;

	case 45: return 2728.987f, 1576.382f, 65.5818f;

	case 46:
		if (iParam1 == 1) {
			return -221.27f, 6133.62f, 30.48f;
		}
		else {
			return -215.9002f, 6125.27f, 56.278f;
		}
		break;

	case 47: return 2092.225f, 2492.302f, 89.4046f;

	case 48: return -1124.666f, -967.1614f, 5.6319f;

	case 49:
		if (iParam1 == 1) {
			return -405.5299f, 323.4063f, 107.7227f;
		}
		else {
			return -405f, 325f, 108.7f;
		}
		break;

	case 50: return -1087.31f, -2429.3f, 13f;

	case 51: return -1042.645f, 879.7763f, 160.2144f;

	case 52:
		if (iParam1 == 1) {
			return -1081.229f, 678.9454f, 141.8056f;
		}
		else {
			return -1078.35f, 682.2944f, 144.904f;
		}
		break;

	case 53: return -402.0679f, 1355.062f, 329.8384f;

	case 54: return 153.3876f, 713.6584f, 207.2551f;

	case 55: return 186.9f, 243.0269f, 140.55f;

	case 56:
		if (iParam1 == 1) {
			return 302.01f, -3254.45f, 4.8f;
		}
		else {
			return 304f, -3259f, 5f;
		}
		break;

	case 57:
		if (iParam1 == 1) {
			return -398.57f, -1883.96f, 20.54f;
		}
		else {
			return -397f, -1885f, 21.5f;
		}
		break;

	case 58: return 780.7208f, -211.0616f, 65.1143f;

	case 59: return -1755.011f, 184.3929f, 63.3711f;

	case 60:
		if (iParam1 == 1) {
			return 788.84f, 2164.06f, 52.1f;
		}
		else {
			return 786.0139f, 2164.951f, 52.0981f;
		}
		break;

	case 61: return 1707.228f, 4920.156f, 41.0637f;

	case 62: return -684.9417f, 5793.045f, 16.331f;

	case 63: return -2188f, 4251f, 48f;

	case 64:
		if (iParam1 == 1) {
			return -1099.08f, 2711.35f, 18.11f;
		}
		else {
			return -1103f, 2715f, 19f;
		}
		break;

	case 65: return 581f, -2805f, 5.5f;

	case 66:
		if (iParam1 == 1) {
			return -663.95f, -1998.85f, 6.1f;
		}
		else {
			return -665.4316f, -2002.04f, 7.5968f;
		}
		break;

	case 67: return 1442.905f, -1479.759f, 62.2245f;

	case 68:
		if (iParam1 == 1) {
			return -361.92f, -141.76f, 37.58f;
		}
		else {
			return -356.5324f, -145.0359f, 41.7413f;
		}
		break;

	case 69: return 624.0116f, 558.6531f, 129.2455f;

	case 70: return 2833f, 2807f, 56.3785f;

	case 71:
		if (iParam1 == 1) {
			return 92.14449f, 6360.182f, 30.37612f;
		}
		else {
			return 94.0769f, 6356.961f, 30.3761f;
		}
		break;

	case 72: return -2231.514f, 3477.792f, 29.3291f;

	case 73: return 377f, 3582f, 32.5f;

	case 74:
		if (iParam1 == 1) {
			return -2947.47f, 445.6f, 14.29f;
		}
		else {
			return -2948f, 441f, 15f;
		}
		break;

	case 75:
		if (iParam1 == 1) {
			return 1292.88f, -3341.78f, 4.9f;
		}
		else {
			return 1296f, -3348f, 5.2f;
		}
		break;

	case 76:
		if (iParam1 == 1) {
			return -1165.46f, -2054.09f, 13.2f;
		}
		else {
			return -1165.883f, -2051.026f, 13.2268f;
		}
		break;

	case 77:
		if (iParam1 == 1) {
			return 1235.57f, -452.01f, 65.7f;
		}
		else {
			return 1235f, -450f, 66.5f;
		}
		break;

	case 78: return -467.0458f, -934.8019f, 46.9844f;

	case 79: return 226.7f, -1761f, 28.5f;

	case 80:
		if (iParam1 == 1) {
			return 1218.07f, 1898.69f, 76.87f;
		}
		else {
			return 1221f, 1898f, 77.4f;
		}
		break;

	case 81:
		if (iParam1 == 1) {
			return 1545.99f, 3802.7f, 32.42f;
		}
		else {
			return 1535.829f, 3798.217f, 33.4563f;
		}
		break;

	case 82: return 756.8601f, 6462.329f, 30.4229f;

	case 83: return -2319f, 4124f, 26f;

	case 84: return -3185f, 1053f, 20.2f;

	case 85: return 818.9215f, -3188.167f, 4.9007f;

	case 86:
		if (iParam1 == 1) {
			return -451.05f, -2264.24f, 6.61f;
		}
		else {
			return -457.3656f, -2262.646f, 7.5212f;
		}
		break;

	case 87:
		if (iParam1 == 1) {
			return 1409.86f, -757.22f, 65.8f;
		}
		else {
			return 1410.091f, -752.1061f, 66.2362f;
		}
		break;

	case 88: return 8.4875f, -441.2103f, 44.5639f;

	case 89:
		if (iParam1 == 1) {
			return -935.04f, 387.39f, 76.62f;
		}
		else {
			return -937.0176f, 391.544f, 80.2377f;
		}
		break;

	case 90:
		if (iParam1 == 1) {
			return 2748.49f, 3463.02f, 54.77f;
		}
		else {
			return 2746.554f, 3463.525f, 54.7144f;
		}
		break;

	case 91: return 1898.896f, 4921.975f, 47.8088f;

	case 92:
		if (iParam1 == 1) {
			return -315.51f, 6310.89f, 31.37f;
		}
		else {
			return -315.9772f, 6307.385f, 31.4906f;
		}
		break;

	case 93: return -1171f, 4927f, 224f;

	case 94: return -281.1712f, 2528.012f, 73.6376f;

	case 95:
		if (iParam1 == 1) {
			return 68.45f, 3756.27f, 38.74f;
		}
		else {
			return 68.453f, 3758.967f, 38.7395f;
		}
		break;

	case 96: return 25.2888f, -634.2637f, 6.5084f;

	case 97:
		if (iParam1 == 1) {
			return -1146.67f, 4939.11f, 221.27f;
		}
		else {
			return -1145.283f, 4940.286f, 221.3038f;
		}
		break;

	case 98: return 441.64f, 5570.38f, 780.45f;

	case 99:
		if (iParam1) {
			return 1353.152f, 4377.223f, 43.3416f;
		}
		else {
			return 1357.209f, 4388.445f, 43.872f;
		}
		break;

	case 100: return -102.0671f, -968.1538f, 295.5635f;

	case 101: return 2492.69f, 4963.014f, 43.6478f;
	}
	return 0f, 0f, 0f;
}

// Position - 0x8C88
bool func_96(int iParam0) {
	switch (iParam0) {
	case 1:
	case 10:
	case 11:
	case 13:
	case 14:
	case 30:
	case 34:
	case 43:
	case 45:
	case 50:
	case 55:
	case 88:
	case 96:
	case 98:
	case 100: return false;
	}
	return true;
}

// Position - 0x8CF9
void func_97() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		iLocal_341[iVar0] = -1;
		fLocal_347[iVar0] = 999999f;
		vLocal_353[iVar0 /*3*/] = {0f, 0f, 0f};
		vLocal_369[iVar0 /*3*/] = {0f, 0f, 0f};
		iVar0++;
	}
}

// Position - 0x8D42
void func_98(int iParam0) {
	ped::set_ped_model_is_suppressed(joaat("a_c_retriever"), iParam0);
	ped::set_ped_model_is_suppressed(joaat("a_c_rottweiler"), iParam0);
	ped::set_ped_model_is_suppressed(joaat("a_c_boar"), iParam0);
	ped::set_ped_model_is_suppressed(joaat("a_c_coyote"), iParam0);
	ped::set_ped_model_is_suppressed(joaat("a_c_deer"), iParam0);
	ped::set_ped_model_is_suppressed(joaat("a_c_mtlion"), iParam0);
	ped::set_ped_model_is_suppressed(joaat("a_c_pig"), iParam0);
}

// Position - 0x8D97
void func_99(int iParam0, int iParam1, int iParam2) {
	if (!weapon::has_ped_got_weapon(player::player_ped_id(), joaat("weapon_ball"), 0) ||
		weapon::get_ammo_in_ped_weapon(player::player_ped_id(), joaat("weapon_ball")) == 0) {
		weapon::give_weapon_to_ped(player::player_ped_id(), joaat("weapon_ball"), 1, iParam0, iParam2);
		ui::_0x72C1056D678BB7D8(joaat("weapon_ball"));
		if (iParam1 == 1) {
			audio::play_sound_frontend(iLocal_490, "PICKUP_WEAPON_BALL", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
		}
	}
}

// Position - 0x8DF7
void func_100() {
	if (!ped::is_ped_in_group(iLocal_69)) {
		ped::set_ped_as_group_member(iLocal_69, ped::get_ped_group_index(player::player_ped_id()));
	}
	if (ped::is_ped_in_group(iLocal_69)) {
		ped::set_ped_never_leaves_group(iLocal_69, 1);
		ped::set_group_formation_spacing(func_101(), 1f, 0.9f, 3f);
		ped::set_ped_can_teleport_to_group_leader(iLocal_69, ped::get_ped_group_index(player::player_ped_id()), 1);
	}
}

// Position - 0x8E45
var func_101() { return player::get_player_group(player::get_player_index()); }

// Position - 0x8E55
void func_102() {
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
		!entity::is_entity_in_water(player::player_ped_id())) {
		if (func_106(player::player_ped_id(), iLocal_69) > 10f || func_105("CHOP_H_WHIS")) {
			if (gameplay::get_game_timer() - iLocal_412 > 4000 && controls::is_control_just_pressed(2, 47)) {
				iLocal_412 = gameplay::get_game_timer();
				func_103(player::player_ped_id(), "CALL_CHOP", 3);
				if (func_105("CHOP_H_WHIS")) {
					ui::clear_help(1);
				}
				if (iLocal_51 == 15 && iLocal_52 > 1) {
				}
				else {
					func_40(0);
					if (iLocal_51 == 2) {
						func_121(2, 0);
					}
					else {
						func_121(2, 1);
					}
				}
			}
			if (!gameplay::is_bit_set(Global_101700.f_9008.f_94, 8) && !ui::is_help_message_being_displayed() &&
				!func_19() && !streaming::is_player_switch_in_progress()) {
				gameplay::set_bit(&Global_101700.f_9008.f_94, 8);
				func_15("CHOP_H_WHIS", -1);
			}
		}
	}
}

// Position - 0x8F4F
void func_103(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_104(iParam2), 1);
}

// Position - 0x8F66
int func_104(int iParam0) {
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

// Position - 0x915B
bool func_105(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x916E
float func_106(int iParam0, int iParam1) { return func_4(iParam0, iParam1, 1); }

// Position - 0x917F
bool func_107() {
	if (ai::get_script_task_status(iLocal_69, 242628503) == 7 || ped::is_ped_ragdoll(iLocal_69) ||
		entity::has_entity_been_damaged_by_any_ped(iLocal_69)) {
		weapon::clear_ped_last_weapon_damage(iLocal_69);
		return true;
	}
	return false;
}

// Position - 0x91BA
void func_108(char *sParam0, int iParam1) {
	func_111(&uLocal_172, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
	func_109(&uLocal_172, "CHOP_AU", sParam0, 3, iParam1, 0);
}

// Position - 0x91E3
void func_109(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	func_110(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7) {
		if (iParam3 < 12) {
			iParam3 = 7;
		}
	}
	gameplay::set_bit(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

// Position - 0x921E
void func_110(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
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

// Position - 0x9274
void func_111(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x930F
void func_112() {
	int iVar0;

	iVar0 = gameplay::get_random_int_in_range(0, 6);
	if (iVar0 == 0) {
		ai::task_play_anim(iLocal_69, sLocal_82[1], "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_86 = "idle_a";
	}
	else if (iVar0 == 1) {
		ai::task_play_anim(iLocal_69, sLocal_82[1], "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_86 = "idle_c";
	}
	else {
		ai::task_play_anim(iLocal_69, sLocal_82[1], "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_86 = "idle_b";
	}
}

// Position - 0x93A0
bool func_113(int iParam0, int iParam1) {
	if (func_114(iParam0)) {
		if (ai::get_script_task_status(iParam0, iParam1) == 1 || ai::get_script_task_status(iParam0, iParam1) == 0) {
			return true;
		}
	}
	return false;
}

// Position - 0x93D3
bool func_114(int iParam0) {
	if (func_125(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x93F3
void func_115() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iLocal_465 == 0) {
		iVar0 = gameplay::get_random_int_in_range(0, 8);
		if (!entity::is_entity_at_coord(iLocal_69, vLocal_440[iVar0 /*3*/], 2f, 2f, 4f, 0, 1, 0) &&
			!entity::is_entity_at_coord(player::player_ped_id(), vLocal_440[iVar0 /*3*/], 2f, 2f, 4f, 0, 1, 0)) {
			ai::task_follow_nav_mesh_to_coord(iLocal_69, vLocal_440[iVar0 /*3*/], 1f, 20000, 0.25f, 8192, 1193033728);
			iLocal_465 = 1;
		}
	}
	else if (!func_113(iLocal_69, 713668775)) {
		if (func_43() == 2) {
			iVar1 = 15;
		}
		else if (func_43() == 0) {
			iVar1 = 10;
		}
		else {
			iVar1 = -1;
		}
		iVar2 = gameplay::get_random_int_in_range(0, 100);
		if (iVar2 < iVar1 && iLocal_422 == 0) {
			iLocal_422 = 1;
			func_121(13, 1);
		}
		else if (iVar2 < 50) {
			iLocal_81 = 1;
			sLocal_82[0] = "creatures@rottweiler@amb@world_dog_barking@enter";
			sLocal_82[1] = "creatures@rottweiler@amb@world_dog_barking@base";
			sLocal_82[2] = "creatures@rottweiler@amb@world_dog_barking@exit";
			func_121(17, 1);
		}
		else {
			iLocal_81 = 0;
			sLocal_82[0] = "creatures@rottweiler@amb@world_dog_sitting@enter";
			sLocal_82[1] = "creatures@rottweiler@amb@world_dog_sitting@idle_a";
			sLocal_82[2] = "creatures@rottweiler@amb@world_dog_sitting@exit";
			func_121(17, 1);
		}
	}
}

// Position - 0x9514
void func_116() {
	if (gameplay::get_game_timer() - iLocal_484 > 2000 && func_125(iLocal_69) &&
		gameplay::is_bullet_in_area(entity::get_entity_coords(iLocal_69, 1), 5f, 1)) {
		func_122("WHINE");
		iLocal_484 = gameplay::get_game_timer();
	}
}

// Position - 0x9556
void func_117() {
	if (func_43() == 2 && gameplay::get_game_timer() - iLocal_413 > iLocal_414) {
		iLocal_413 = gameplay::get_game_timer();
		iLocal_414 = gameplay::get_random_int_in_range(10000, 15000);
		func_122("WHINE");
	}
}

// Position - 0x9593
bool func_118(int iParam0, int iParam1) {
	vector3 vVar0;
	vector3 vVar3;

	if (func_125(iLocal_69) && func_125(player::player_ped_id()) && func_120(iParam0, vLocal_397, 30f)) {
		if (iParam1 == 1) {
			if (func_119(&uLocal_120, entity::get_entity_coords(iParam0, 1))) {
				vVar0 = {entity::get_entity_coords(iLocal_69, 1)};
				vVar3 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				if (gameplay::absf(vVar0.z - vVar3.z) < 2.5f) {
					return true;
				}
			}
		}
		else {
			return true;
		}
	}
	return false;
}

// Position - 0x9616
bool func_119(var *uParam0, struct<2> Param1, Vector3 vParam3) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_46 < 3) {
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = uParam0->f_46 - 1;
	while (iVar1 < uParam0->f_46) {
		if ((*uParam0)[iVar1 /*3*/].f_1 < Param1.f_1 && (*uParam0)[iVar2 /*3*/].f_1 >= Param1.f_1 ||
			(*uParam0)[iVar2 /*3*/].f_1 < Param1.f_1 && (*uParam0)[iVar1 /*3*/].f_1 >= Param1.f_1) {
			if ((*uParam0)[iVar1 /*3*/] + (Param1.f_1 - (*uParam0)[iVar1 /*3*/].f_1) /
											  ((*uParam0)[iVar2 /*3*/].f_1 - (*uParam0)[iVar1 /*3*/].f_1) *
											  ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]) <
				Param1) {
				iVar0 = !iVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return iVar0;
}

// Position - 0x96D2
bool func_120(int iParam0, vector3 vParam1, float fParam4) {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {entity::get_entity_coords(iParam0, 1)};
	vVar3 = {vParam1 - vVar0};
	return vVar3.x * vVar3.x + vVar3.y * vVar3.y <= fParam4 * fParam4;
}

// Position - 0x9707
void func_121(int iParam0, int iParam1) {
	iLocal_107 = 0;
	if (func_125(iLocal_69)) {
		ped::set_blocking_of_non_temporary_events(iLocal_69, 1);
		weapon::clear_ped_last_weapon_damage(iLocal_69);
		if (!ped::is_ped_in_any_vehicle(iLocal_69, 0)) {
			if (iParam1 == 1) {
				ai::clear_ped_tasks(iLocal_69);
			}
			entity::set_entity_invincible(iLocal_69, 0);
		}
	}
	iLocal_51 = iParam0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	iLocal_385 = -1;
	vLocal_386 = {0f, 0f, 0f};
	vLocal_389 = {0f, 0f, 0f};
	iLocal_339 = 5;
	func_34();
	iLocal_465 = 0;
	iLocal_439 = 0;
	iLocal_484 = gameplay::get_game_timer();
	audio::set_audio_flag("DisableBarks", 0);
}

// Position - 0x9784
void func_122(char *sParam0) { audio::_0xEE066C7006C49C0A(iLocal_69, 3, sParam0); }

// Position - 0x9795
bool func_123() {
	if (func_118(player::player_ped_id(), 1)) {
		if (gameplay::get_game_timer() - iLocal_406 > iLocal_407) {
			return true;
		}
		if (func_39(player::player_ped_id(), vLocal_397.f_5, 1) < 8f) {
			func_108("CHOP_KENNEL", 0);
			return true;
		}
	}
	return false;
}

// Position - 0x97E2
int func_124(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6) {
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (func_125(iParam0)) {
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

// Position - 0x983D
bool func_125(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x985E
void func_126() {
	if (gameplay::get_game_timer() - iLocal_488 > 60000) {
		iLocal_488 = gameplay::get_game_timer();
		if (iLocal_51 == 2 || iLocal_51 == 5 || iLocal_51 == 15) {
			if (func_43() == 1) {
				func_127(115, 1);
			}
			else {
				func_127(116, 1);
			}
		}
	}
}

// Position - 0x98B1
void func_127(int iParam0, int iParam1) {
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

// Position - 0x990E
void func_128() {
	if (gameplay::get_game_timer() - iLocal_485 > 500) {
		iLocal_485 = gameplay::get_game_timer();
		if (iLocal_51 != 15 && gameplay::_0x82FDE6A57EE4EE44(player::player_ped_id(), joaat("weapon_ball"), 1.5f,
															 &uLocal_468, &iLocal_467, 0)) {
			func_40(1);
		}
	}
}

// Position - 0x9956
void func_129() {
	int iVar0;

	if (func_144() && func_143() && !func_142() && iLocal_53 == 0 && iLocal_51 != 6 && func_19() &&
		!streaming::is_player_switch_in_progress() && !ped::is_ped_in_combat(iLocal_69, 0) && !func_81() &&
		!func_16() && !func_3(0) && !func_141()) {
		controls::disable_control_action(0, 19, 1);
		controls::disable_control_action(0, 44, 1);
		controls::disable_control_action(0, 262, 1);
		controls::disable_control_action(0, 261, 1);
		controls::disable_control_action(0, 37, 1);
		if (iLocal_396 == 0) {
			func_138(system::floor(Global_101700.f_19077.f_254), 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1,
					 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
		}
		else {
			func_138(100, 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
		}
		if (func_137()) {
			if (Global_25336 == 0) {
				Global_25336 = 1;
			}
			if (cam::is_gameplay_hint_active()) {
				cam::_0xCCD078C2665D2973(1);
			}
			else {
				cam::set_gameplay_entity_hint(iLocal_69, 0f, 0f, 0f, 1, -1, 1000, 1000, 193150208);
				iLocal_492 = 0;
			}
			controls::set_input_exclusive(func_136(), func_135(0));
			controls::set_input_exclusive(func_136(), func_135(1));
			controls::set_input_exclusive(func_136(), func_135(2));
			controls::set_input_exclusive(func_136(), func_135(3));
			controls::set_input_exclusive(func_136(), func_135(4));
			controls::set_input_exclusive(func_136(), func_135(5));
			if (controls::_is_input_disabled(0)) {
				controls::disable_control_action(func_136(), func_135(0), 1);
				controls::disable_control_action(func_136(), func_135(1), 1);
				controls::disable_control_action(func_136(), func_135(2), 1);
				controls::disable_control_action(func_136(), func_135(3), 1);
				controls::disable_control_action(func_136(), func_135(4), 1);
				controls::disable_control_action(func_136(), func_135(5), 1);
			}
			controls::enable_control_action(0, 25, 1);
			if (controls::is_disabled_control_just_released(func_136(), func_135(0)) && func_134()) {
				switch (iLocal_51) {
				case 1:
				case 3:
				case 4:
					iLocal_75 = 1;
					func_133(0);
					func_122("PLAYFUL");
					func_108("CHOP_WALK", 0);
					func_121(2, 1);
					break;

				case 2:
				case 5:
				case 15:
					iLocal_75 = 0;
					func_133(0);
					func_121(3, 1);
					break;

				case 17:
				case 18:
					iLocal_75 = 1;
					func_133(0);
					func_108("CHOP_WALK", 0);
					iLocal_53 = 2;
					break;
				}
				if (iLocal_75 == 1 && stats::stat_get_int(joaat("sp_chop_walk_done"), &iLocal_487, -1)) {
					iLocal_487++;
					stats::stat_set_int(joaat("sp_chop_walk_done"), iLocal_487, 1);
				}
			}
			if (iLocal_395 == 1) {
				if (controls::is_disabled_control_just_pressed(func_136(), func_135(1)) && func_134()) {
					if (iLocal_51 == 17 || iLocal_51 == 18) {
						iLocal_53 = 5;
					}
					else {
						func_121(5, 1);
					}
				}
				if (func_43() == 2 && iLocal_396 == 0) {
					if (func_132() >= 1) {
						if (controls::is_disabled_control_just_pressed(func_136(), func_135(2))) {
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 2) {
						if (controls::is_disabled_control_just_pressed(func_136(), func_135(3))) {
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 3) {
						if (controls::is_disabled_control_just_pressed(func_136(), func_135(4))) {
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 4) {
						if (controls::is_disabled_control_just_pressed(func_136(), func_135(5))) {
							func_108("CHOP_CANT", 0);
						}
					}
				}
				else {
					if (func_132() >= 1) {
						if (controls::is_disabled_control_just_pressed(func_136(), func_135(2)) && func_134()) {
							func_108("CHOP_SIT", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18) {
								iLocal_53 = 8;
							}
							else {
								func_121(8, 1);
							}
						}
					}
					if (func_132() >= 2) {
						if (controls::is_disabled_control_just_pressed(func_136(), func_135(3)) && func_134()) {
							func_108("CHOP_PAW", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18) {
								iLocal_53 = 9;
							}
							else {
								func_121(9, 1);
							}
						}
					}
					if (func_132() >= 3) {
						if (controls::is_disabled_control_just_pressed(func_136(), func_135(4)) && func_134()) {
							func_108("CHOP_BEG", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18) {
								iLocal_53 = 7;
							}
							else {
								func_121(7, 1);
							}
						}
					}
					if (func_132() >= 4) {
						if (controls::is_disabled_control_just_pressed(func_136(), func_135(5)) && func_134()) {
							func_108("CHOP_PET", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18) {
								iLocal_53 = 10;
							}
							else {
								func_121(10, 1);
							}
						}
					}
				}
			}
		}
		else {
			ui::clear_help(1);
			if (!gameplay::is_bit_set(Global_101700.f_9008.f_94, 0)) {
				gameplay::set_bit(&Global_101700.f_9008.f_94, 0);
			}
			if (iLocal_395 == 0) {
				iLocal_395 = func_131();
			}
			if (iLocal_395 == 1) {
				iVar0 = func_132();
				if (iVar0 > 4) {
					iVar0 = 4;
				}
				if (iLocal_51 == 1 || iLocal_51 == 17 || iLocal_51 == 18 || iLocal_51 == 3 || iLocal_51 == 4) {
					if (func_43() == 2 && iLocal_396 == 0 && iVar0 > 0) {
						StringCopy(&Local_109, "CHOP_H_WAIT_H", 32);
					}
					else {
						StringCopy(&Local_109, "CHOP_H_WAIT_", 32);
					}
					StringIntConCat(&Local_109, iVar0, 32);
					if (controls::_is_input_disabled(0)) {
						StringConCat(&Local_109, "_KM", 32);
					}
				}
				else if (iLocal_51 == 2 || iLocal_51 == 15) {
					if (func_43() == 2 && iLocal_396 == 0 && iVar0 > 0) {
						StringCopy(&Local_109, "CHOP_H_WALK_H", 32);
					}
					else {
						StringCopy(&Local_109, "CHOP_H_WALK_", 32);
					}
					StringIntConCat(&Local_109, iVar0, 32);
					if (controls::_is_input_disabled(0)) {
						StringConCat(&Local_109, "_KM", 32);
					}
				}
				func_130(&Local_109);
			}
			else if (iLocal_51 == 2 || iLocal_51 == 15) {
				if (controls::_is_input_disabled(0)) {
					func_130("CHOP_H_HOME_KM");
				}
				else {
					func_130("CHOP_H_HOME");
				}
			}
			else if (controls::_is_input_disabled(0)) {
				func_130("CHOP_H_NOAPP_KM");
			}
			else {
				func_130("CHOP_H_NOAPP");
			}
		}
	}
	else {
		func_133(1);
	}
}

// Position - 0x9F83
void func_130(char *sParam0) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0x9F99
bool func_131() {
	if (Global_101700.f_19077.f_263) {
		return true;
	}
	return false;
}

// Position - 0x9FB3
int func_132() { return Global_101700.f_19077.f_254.f_3; }

// Position - 0x9FC6
void func_133(int iParam0) {
	if (func_137()) {
		ui::clear_help(1);
	}
	if (iParam0 == 1 && cam::is_gameplay_hint_active()) {
		cam::stop_gameplay_hint(0);
	}
}

// Position - 0x9FEF
int func_134() {
	if (iLocal_51 == 8 || iLocal_51 == 7 || iLocal_51 == 9 || iLocal_51 == 10) {
		return 0;
	}
	return 1;
}

// Position - 0xA024
int func_135(int iParam0) {
	if (controls::_is_input_disabled(0)) {
		switch (iParam0) {
		case 0: return 24;

		case 1: return 22;

		case 2: return 44;

		case 3: return 45;

		case 4: return 51;

		case 5: return 23;

		default:
		}
	}
	else {
		switch (iParam0) {
		case 0: return 227;

		case 1: return 229;

		case 2: return 224;

		case 3: return 225;

		case 4: return 223;

		case 5: return 222;
		}

	default:
	}
	return 0;
}

// Position - 0xA0CA
int func_136() {
	if (controls::_is_input_disabled(0)) {
		return 0;
	}
	return 2;
}

// Position - 0xA0E2
bool func_137() {
	if (ui::is_help_message_being_displayed()) {
		if (func_105("CHOP_H_WAIT_0") || func_105("CHOP_H_WAIT_1") || func_105("CHOP_H_WAIT_2") ||
			func_105("CHOP_H_WAIT_3") || func_105("CHOP_H_WAIT_4") || func_105("CHOP_H_WAIT_H1") ||
			func_105("CHOP_H_WAIT_H2") || func_105("CHOP_H_WAIT_H3") || func_105("CHOP_H_WAIT_H4") ||
			func_105("CHOP_H_HOME") || func_105("CHOP_H_WALK_0") || func_105("CHOP_H_WALK_1") ||
			func_105("CHOP_H_WALK_2") || func_105("CHOP_H_WALK_3") || func_105("CHOP_H_WALK_4") ||
			func_105("CHOP_H_WALK_H1") || func_105("CHOP_H_WALK_H2") || func_105("CHOP_H_WALK_H3") ||
			func_105("CHOP_H_WALK_H4") || func_105("CHOP_H_NOAPP")) {
			return true;
		}
	}
	if (gameplay::is_pc_version()) {
		if (ui::is_help_message_being_displayed()) {
			if (func_105("CHOP_H_WAIT_0_KM") || func_105("CHOP_H_WAIT_1_KM") || func_105("CHOP_H_WAIT_2_KM") ||
				func_105("CHOP_H_WAIT_3_KM") || func_105("CHOP_H_WAIT_4_KM") || func_105("CHOP_H_WAIT_H1_KM") ||
				func_105("CHOP_H_WAIT_H2_KM") || func_105("CHOP_H_WAIT_H3_KM") || func_105("CHOP_H_WAIT_H4_KM") ||
				func_105("CHOP_H_HOME_KM") || func_105("CHOP_H_WALK_0_KM") || func_105("CHOP_H_WALK_1_KM") ||
				func_105("CHOP_H_WALK_2_KM") || func_105("CHOP_H_WALK_3_KM") || func_105("CHOP_H_WALK_4_KM") ||
				func_105("CHOP_H_WALK_H1_KM") || func_105("CHOP_H_WALK_H2_KM") || func_105("CHOP_H_WALK_H3_KM") ||
				func_105("CHOP_H_WALK_H4_KM") || func_105("CHOP_H_NOAPP_KM")) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xA332
void func_138(int iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, float fParam6,
			  float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13,
			  int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20,
			  int iParam21, int iParam22, int iParam23) {
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9) {
		if (iVar0 == -1) {
			if (func_140(0, iVar1) == 0) {
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1) {
		Global_1354542.f_1 = 1;
		func_139(0, iVar0);
		Global_1354542.f_1009[iVar0] = iParam0;
		Global_1354542.f_1009.f_11[iVar0] = iParam1;
		StringCopy(&Global_1354542.f_1009.f_22[iVar0 /*16*/], sParam2, 64);
		Global_1354542.f_1009.f_194[iVar0] = iParam3;
		Global_1354542.f_1009.f_183[iVar0] = iParam4;
		Global_1354542.f_1009.f_216[iVar0] = iParam5;
		Global_1354542.f_1009.f_227[iVar0 /*3*/] = fParam6;
		Global_1354542.f_1009.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1354542.f_1009.f_258[iVar0] = iParam8;
		Global_1354542.f_1009.f_269[iVar0] = iParam9;
		Global_1354542.f_1009.f_312[iVar0] = iParam10;
		Global_1354542.f_1009.f_323[iVar0] = iParam11;
		Global_1354542.f_1009.f_334[iVar0] = iParam12;
		Global_1354542.f_1009.f_345[iVar0] = iParam13;
		Global_1354542.f_1004 = 1;
		Global_1354542.f_1009.f_356[iVar0] = iParam14;
		Global_1354542.f_1009.f_367[iVar0] = iParam15;
		Global_1354542.f_1009.f_378[iVar0] = iParam16;
		Global_1354542.f_1009.f_389[iVar0] = iParam17;
		Global_1354542.f_1009.f_400[iVar0] = iParam18;
		Global_1354542.f_1009.f_411[iVar0] = iParam19;
		Global_1354542.f_1009.f_422[iVar0] = iParam20;
		Global_1354542.f_1009.f_433[iVar0] = iParam21;
		Global_1354542.f_1009.f_444[iVar0] = iParam22;
		Global_1354542.f_1009.f_455[iVar0] = iParam23;
	}
}

// Position - 0xA4FB
void func_139(int iParam0, int iParam1) { gameplay::set_bit(&Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0xA514
int func_140(int iParam0, int iParam1) { return gameplay::is_bit_set(Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0xA52D
bool func_141() { return Global_68131; }

// Position - 0xA539
bool func_142() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0xA54E
int func_143() {
	if (iLocal_51 == 12) {
		return 0;
	}
	if (iLocal_51 == 13 || iLocal_51 == 14 && func_113(iLocal_69, 242628503)) {
		if (iLocal_439 == 0 && controls::is_control_pressed(2, 228)) {
			func_108("CHOP_BUSY", 0);
			iLocal_439 = 1;
		}
		return 0;
	}
	return 1;
}

// Position - 0xA5AA
int func_144() {
	if (func_106(player::player_ped_id(), iLocal_69) < 10f) {
		if (iLocal_51 == 15 && iLocal_52 < 4) {
		}
		else if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			func_148(0);
			func_147(0);
			return 0;
		}
		else {
			func_145();
			func_148(1);
			func_147(1);
			return 1;
		}
	}
	func_148(0);
	func_147(0);
	if (func_105("CHOP_H_INTRO") || gameplay::is_pc_version() && func_105("CHOP_H_INTRO_KM")) {
		ui::clear_help(1);
	}
	return 0;
}

// Position - 0xA63A
void func_145() {
	if (!gameplay::is_bit_set(Global_101700.f_9008.f_94, 0) &&
		!(func_105("CHOP_H_INTRO") || gameplay::is_pc_version() && func_105("CHOP_H_INTRO_KM")) &&
		!func_105("PW_HELP_1") && !func_105("PW_HELP_2") && !func_146() && !streaming::is_player_switch_in_progress() &&
		!func_3(0) && !func_142() && !func_141()) {
		if (iLocal_51 == 1 || iLocal_51 == 17 || iLocal_51 == 18) {
			if (func_118(player::player_ped_id(), 1)) {
				ui::clear_help(1);
				if (controls::_is_input_disabled(0)) {
					func_130("CHOP_H_INTRO_KM");
				}
				else {
					func_130("CHOP_H_INTRO");
				}
			}
		}
	}
	if (gameplay::is_pc_version() && func_105("CHOP_H_INTRO_KM") || func_105("CHOP_H_INTRO")) {
		if (func_146() || streaming::is_player_switch_in_progress() || func_3(0) || func_142() || func_141()) {
			ui::clear_help(1);
		}
	}
}

// Position - 0xA768
bool func_146() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return true;
	}
	return false;
}

// Position - 0xA782
void func_147(int iParam0) {
	if (iParam0 == 1) {
		if (func_125(iLocal_69)) {
			ai::task_look_at_entity(player::player_ped_id(), iLocal_69, -1, 48, 2);
			iLocal_73 = 1;
		}
	}
	else if (iLocal_73 == 1 && func_125(player::player_ped_id())) {
		ai::task_clear_look_at(player::player_ped_id());
		iLocal_73 = 0;
	}
}

// Position - 0xA7CC
void func_148(int iParam0) {
	int iVar0;

	weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1);
	if (iLocal_74 == 1 && iVar0 != joaat("weapon_unarmed")) {
		iParam0 = 0;
	}
	if (iParam0 == 1) {
		if (iLocal_74 == 0 && iVar0 == joaat("weapon_unarmed")) {
			ped::set_ped_can_be_targetted(iLocal_69, 1);
			entity::set_entity_is_target_priority(iLocal_69, 1, 0);
			ped::_0x061CB768363D6424(iLocal_69, 1);
			ped::set_time_exclusive_display_texture(iLocal_69, 1);
			iLocal_74 = 1;
		}
	}
	else if (iLocal_74 == 1) {
		ped::set_ped_can_be_targetted(iLocal_69, 0);
		entity::set_entity_is_target_priority(iLocal_69, 0, 0);
		ped::_0x061CB768363D6424(iLocal_69, 0);
		iLocal_74 = 0;
	}
}

// Position - 0xA853
void func_149() {
	int iVar0;
	var uVar1[5];
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (iLocal_51 != 6 && iLocal_107 == 0 && !ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		if (iLocal_51 == 2 || iLocal_51 == 5 || iLocal_51 == 15 || iLocal_51 == 14 && !func_113(iLocal_69, 242628503)) {
			if (ped::_0x336B3D200AB007CB(player::player_ped_id(), entity::get_entity_coords(player::player_ped_id(), 1),
										 100f) > 0 ||
				ped::_0x336B3D200AB007CB(iLocal_69, entity::get_entity_coords(iLocal_69, 1), 100f) > 0) {
				streaming::request_anim_dict("creatures@rottweiler@melee@streamed_taunts@");
				iVar0 = 0;
				while (iVar0 < ped::get_ped_nearby_peds(player::player_ped_id(), &uVar1, -1)) {
					if (!func_125(iVar7) && func_125(uVar1[iVar0]) &&
						(ped::is_ped_in_combat(uVar1[iVar0], player::player_ped_id()) ||
						 ped::is_ped_in_combat(uVar1[iVar0], iLocal_69)) &&
						!ped::is_ped_in_any_vehicle(uVar1[iVar0], 0) && uVar1[iVar0] != iLocal_69) {
						iVar7 = uVar1[iVar0];
					}
					iVar0++;
				}
				if (func_125(iVar7)) {
					ai::task_combat_ped(iLocal_69, iVar7, 0, 16);
					func_108("CHOP_ATTACK2", 0);
					if (!ui::is_help_message_being_displayed() && !gameplay::is_bit_set(Global_101700.f_9008.f_94, 6) &&
						!func_19() && !streaming::is_player_switch_in_progress()) {
						gameplay::set_bit(&Global_101700.f_9008.f_94, 6);
						func_15("CHOP_H_ATTACK", -1);
					}
					func_40(0);
					func_121(6, 0);
				}
			}
			else {
				weapon::get_current_ped_weapon(player::player_ped_id(), &iVar8, 1);
				if (iVar8 != joaat("weapon_ball") && !(iLocal_51 == 15 && iLocal_52 == 1)) {
					if (player::get_player_target_entity(player::player_id(), &iVar9) ||
						player::get_entity_player_is_free_aiming_at(player::player_id(), &iVar9)) {
						if (entity::is_entity_a_ped(iVar9)) {
							iVar10 = entity::get_ped_index_from_entity_index(iVar9);
							if (!ped::is_ped_injured(iVar10) && iVar10 != iLocal_69 &&
								!ped::is_ped_in_any_vehicle(iVar10, 0) &&
								func_4(player::player_ped_id(), iVar10, 1) < 50f) {
								ai::task_combat_ped(iLocal_69, iVar10, 0, 16);
								iLocal_480++;
								if (iLocal_480 >= 3) {
									player::set_wanted_level_difficulty(player::player_id(), 0f);
									player::set_player_wanted_level_no_drop(player::player_id(), 2, 0);
								}
								func_108("CHOP_ATTACK1", 0);
								if (!ui::is_help_message_being_displayed() &&
									!gameplay::is_bit_set(Global_101700.f_9008.f_94, 11) && !func_19() &&
									!streaming::is_player_switch_in_progress()) {
									gameplay::set_bit(&Global_101700.f_9008.f_94, 11);
									func_15("CHOP_H_AIM", -1);
								}
								func_40(0);
								func_121(6, 0);
							}
						}
					}
				}
			}
		}
	}
	if (gameplay::get_game_timer() - iLocal_481 > 60000) {
		iLocal_481 = gameplay::get_game_timer();
		if (iLocal_480 > 0) {
			iLocal_480--;
		}
	}
}

// Position - 0xAB26
void func_150() {
	if (iLocal_51 != 16 && Global_25195 == 1 && entity::is_entity_attached_to_any_object(player::player_ped_id())) {
		func_121(16, 1);
	}
}

// Position - 0xAB54
void func_151() {
	if (iLocal_438 == 0) {
		if (func_118(player::player_ped_id(), 1)) {
			func_108("CHOP_DUMP", 0);
			iLocal_438 = 1;
		}
	}
}

// Position - 0xAB7C
void func_152() {
	if (iLocal_466 != func_153() && func_125(iLocal_69)) {
		if (func_131()) {
			iLocal_466 = func_153();
			ped::set_ped_component_variation(iLocal_69, 3, 0, iLocal_466, 0);
		}
		else if (iLocal_466 != 4) {
			iLocal_466 = 4;
			ped::set_ped_component_variation(iLocal_69, 3, 0, iLocal_466, 0);
		}
	}
}

// Position - 0xABCE
int func_153() { return Global_101700.f_19077.f_254.f_4; }

// Position - 0xABE1
void func_154() {
	int iVar0;

	Global_25336 = 0;
	streaming::request_model(func_162());
	if (!streaming::has_model_loaded(func_162())) {
		return;
	}
	if (func_177(6)) {
		vLocal_397.f_4 = 6;
		vLocal_397 = {18.1531f, 535.2469f, 169.6324f};
		vLocal_397.f_3 = 204.8112f;
		vLocal_397.f_5 = {19.52771f, 537.436f, 170.143f};
		vLocal_397.f_8 = 151.3064f;
		vLocal_419 = {19.45963f, 535.7817f, 169.6277f};
		vLocal_440[0 /*3*/] = {17.36033f, 528.8973f, 169.6277f};
		vLocal_440[1 /*3*/] = {19.46877f, 529.1785f, 169.6277f};
		vLocal_440[2 /*3*/] = {20.82979f, 531.5168f, 169.6277f};
		vLocal_440[3 /*3*/] = {22.83555f, 532.3281f, 169.6277f};
		vLocal_440[4 /*3*/] = {20.79285f, 535.001f, 169.6277f};
		vLocal_440[5 /*3*/] = {18.05178f, 535.6321f, 169.6277f};
		vLocal_440[6 /*3*/] = {18.92047f, 534.0938f, 169.6277f};
		vLocal_440[7 /*3*/] = {17.51333f, 533.4775f, 169.6277f};
		func_161(&uLocal_120);
		func_160(&uLocal_120, 12.41124f, 535.5469f, 169.6277f);
		func_160(&uLocal_120, 19.04497f, 538.5729f, 169.6277f);
		func_160(&uLocal_120, 25.00015f, 534.4414f, 169.6277f);
		func_160(&uLocal_120, 28.0998f, 527.7639f, 169.4277f);
		func_160(&uLocal_120, 17.75896f, 523.3129f, 169.2277f);
		func_159(&uLocal_120);
	}
	else {
		vLocal_397.f_4 = 5;
		vLocal_397 = {-10.25168f, -1422.907f, 29.67775f};
		vLocal_397.f_3 = 157.9037f;
		vLocal_397.f_5 = {-9.73f, -1421.55f, 30.1f};
		vLocal_397.f_8 = 148.26f;
		vLocal_419 = {-10.6379f, -1424.561f, 29.67365f};
		vLocal_440[0 /*3*/] = {-10.03643f, -1423.529f, 29.67602f};
		vLocal_440[1 /*3*/] = {-10.78779f, -1425.306f, 29.70937f};
		vLocal_440[2 /*3*/] = {-12.7048f, -1424.748f, 29.72222f};
		vLocal_440[3 /*3*/] = {-12.47465f, -1422.485f, 29.74699f};
		vLocal_440[4 /*3*/] = {-14.26666f, -1424.855f, 29.71964f};
		vLocal_440[5 /*3*/] = {-14.55816f, -1423.048f, 29.78372f};
		vLocal_440[6 /*3*/] = {-16.13293f, -1424.489f, 29.76139f};
		vLocal_440[7 /*3*/] = {-16.25662f, -1423.325f, 29.81294f};
		func_161(&uLocal_120);
		func_160(&uLocal_120, -7.26821f, -1427.065f, 29.67468f);
		func_160(&uLocal_120, -7.39631f, -1418.851f, 29.5858f);
		func_160(&uLocal_120, -14.27201f, -1421.59f, 29.76819f);
		func_160(&uLocal_120, -22.85347f, -1423.173f, 29.74042f);
		func_160(&uLocal_120, -22.77974f, -1427.168f, 29.65953f);
		func_159(&uLocal_120);
	}
	iLocal_395 = func_131();
	func_156();
	if (func_43() == 2) {
		gameplay::clear_area_of_objects(vLocal_419, 2f, 2);
		streaming::request_model(joaat("prop_big_shit_02"));
		while (!streaming::has_model_loaded(joaat("prop_big_shit_02"))) {
			system::wait(0);
		}
		iLocal_418 = object::create_object(joaat("prop_big_shit_02"), vLocal_419, 1, 1, 0);
		streaming::set_model_as_no_longer_needed(joaat("prop_big_shit_02"));
		iLocal_438 = 0;
	}
	else {
		iLocal_438 = 1;
	}
	iLocal_422 = 0;
	if (gameplay::get_random_int_in_range(0, 2) == 0) {
		iLocal_407 = -1;
	}
	else {
		iLocal_407 = gameplay::get_random_int_in_range(20000, 30000);
	}
	if (iLocal_393 == 1) {
		iLocal_51 = 7;
		iLocal_75 = 1;
	}
	else if (iLocal_394 == 1) {
		iLocal_51 = 2;
	}
	else if (iLocal_407 > -1) {
		iLocal_51 = 11;
		iLocal_75 = 0;
	}
	else {
		iLocal_51 = 1;
		iLocal_75 = 0;
	}
	iLocal_87 = pathfind::add_navmesh_blocking_object(11.23f, 515.4f, 168f, 9f, 21f, 4f, func_155(113f), 0, 7);
	iLocal_88 = pathfind::add_navmesh_blocking_object(24f, 528f, 168f, 5f, 5f, 4f, func_155(113f), 0, 7);
	vLocal_89[0 /*3*/] = {444.1685f, 5569.016f, 780.1895f};
	vLocal_89[1 /*3*/] = {443.8968f, 5574.931f, 780.1895f};
	vLocal_89[2 /*3*/] = {-739.1624f, 5596.784f, 40.6594f};
	vLocal_89[3 /*3*/] = {-738.8002f, 5593.269f, 40.6594f};
	fLocal_102[0] = 270f;
	fLocal_102[1] = 270f;
	fLocal_102[2] = 95f;
	fLocal_102[3] = 95f;
	func_97();
	iLocal_73 = 0;
	iLocal_408 = 0;
	iLocal_412 = gameplay::get_game_timer();
	iVar0 = func_132();
	if (iVar0 > 4) {
		iVar0 = 4;
	}
	StringCopy(&Local_109, "CHOP_H_WAIT_", 32);
	StringIntConCat(&Local_109, iVar0, 32);
	if (controls::_is_input_disabled(0)) {
		StringConCat(&Local_109, "_KM", 32);
	}
	Global_25338 = 0;
	iLocal_50 = 1;
}

// Position - 0xB0E7
float func_155(float fParam0) { return fParam0 * 0.01745329f; }

// Position - 0xB0F7
void func_156() {
	if (iLocal_393 == 1) {
		if (func_158()) {
			entity::set_entity_as_mission_entity(iLocal_69, 1, 1);
			ai::clear_ped_tasks(iLocal_69);
			func_152();
			while (func_146()) {
				system::wait(0);
			}
		}
	}
	else if (iLocal_394 == 1) {
		if (func_125(player::player_ped_id())) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iLocal_80 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				func_79();
				func_78();
				func_157(&iLocal_69, entity::get_entity_coords(player::player_ped_id(), 1), 0, 1);
				if (func_125(iLocal_69)) {
					ped::set_blocking_of_non_temporary_events(iLocal_69, 1);
					ped::set_ped_allow_vehicles_override(iLocal_69, 1);
					ped::set_ped_can_play_ambient_anims(iLocal_69, 0);
					ped::set_ped_can_play_ambient_base_anims(iLocal_69, 0);
					func_100();
					entity::set_entity_invincible(iLocal_69, 1);
					ped::set_ped_into_vehicle(iLocal_69, iLocal_80, 0);
					iLocal_107 = 8;
					func_152();
					ped::_0x2208438012482A1A(iLocal_69, 0, 0);
				}
				while (func_146()) {
					if (func_125(iLocal_69) && !func_113(iLocal_69, -2017877118)) {
						streaming::request_anim_dict(sLocal_477);
						if (streaming::has_anim_dict_loaded(sLocal_477)) {
							ai::task_play_anim(iLocal_69, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
						}
					}
					system::wait(0);
				}
			}
		}
	}
	if (!entity::does_entity_exist(iLocal_69)) {
		func_157(&iLocal_69, vLocal_397, vLocal_397.f_3, 1);
	}
	if (func_125(iLocal_69)) {
		ped::add_relationship_group("rel_group_chop", &iLocal_71);
		iLocal_72 = 1;
		ped::set_relationship_between_groups(1, 1862763509, iLocal_71);
		ped::set_relationship_between_groups(1, iLocal_71, 1862763509);
		ped::set_relationship_between_groups(3, 1157867945, iLocal_71);
		ped::set_relationship_between_groups(3, iLocal_71, 1157867945);
		ped::set_ped_relationship_group_hash(iLocal_69, iLocal_71);
		ped::set_blocking_of_non_temporary_events(iLocal_69, 1);
		ped::set_ped_allow_vehicles_override(iLocal_69, 1);
		ped::set_ped_config_flag(iLocal_69, 185, 1);
		ped::set_ped_config_flag(iLocal_69, 26, 1);
		ped::set_ped_config_flag(iLocal_69, 32, 0);
		ped::set_ped_config_flag(iLocal_69, 29, 0);
		ped::set_ped_config_flag(iLocal_69, 116, 0);
		ped::set_ped_config_flag(iLocal_69, 118, 1);
		ped::set_ped_config_flag(iLocal_69, 132, 1);
		ped::set_ped_config_flag(iLocal_69, 268, 0);
		ped::set_ped_config_flag(iLocal_69, 107, 1);
		ped::set_ped_config_flag(iLocal_69, 281, 1);
		ped::set_ped_config_flag(iLocal_69, 137, 1);
		ped::set_ped_config_flag(iLocal_69, 146, 1);
		ped::set_ped_config_flag(iLocal_69, 157, 0);
		ped::set_ped_config_flag(iLocal_69, 45, 1);
		ped::set_ped_config_flag(iLocal_69, 167, 1);
		ped::set_ped_can_play_ambient_anims(iLocal_69, 0);
		ped::set_ped_can_play_ambient_base_anims(iLocal_69, 0);
		weapon::give_weapon_to_ped(iLocal_69, joaat("weapon_animal"), 1, 1, 1);
		ped::set_ped_combat_attributes(iLocal_69, 5, 1);
		ped::set_ped_combat_attributes(iLocal_69, 0, 0);
		ped::set_ped_combat_attributes(iLocal_69, 46, 1);
		ped::set_ped_hearing_range(iLocal_69, 100f);
		ped::set_ped_seeing_range(iLocal_69, 100f);
		ped::set_ped_flee_attributes(iLocal_69, 512, 1);
		ped::set_ped_suffers_critical_hits(iLocal_69, 0);
		ped::set_ped_max_health(iLocal_69, 800);
		entity::set_entity_health(iLocal_69, 800);
		entity::set_entity_lod_dist(iLocal_69, 200);
		if (!ped::is_ped_in_any_vehicle(iLocal_69, 0)) {
			func_57();
		}
		func_111(&uLocal_172, 3, iLocal_69, "CHOP", 0, 1);
		ped::set_ped_can_be_targetted(iLocal_69, 0);
		entity::set_entity_is_target_priority(iLocal_69, 0, 0);
		ped::_0x061CB768363D6424(iLocal_69, 0);
		iLocal_74 = 0;
		Global_25335 = 0;
		iLocal_480 = 0;
		iLocal_481 = gameplay::get_game_timer();
	}
}

// Position - 0xB3D2
int func_157(int iParam0, vector3 vParam1, float fParam4, int iParam5) {
	int iVar0;

	iVar0 = func_162();
	streaming::request_model(iVar0);
	if (streaming::has_model_loaded(iVar0)) {
		if (entity::does_entity_exist(*iParam0)) {
			ped::delete_ped(iParam0);
		}
		*iParam0 = ped::create_ped(26, iVar0, vParam1, fParam4, 0, 0);
		ped::set_ped_component_variation(*iParam0, 0, 0, 0, 0);
		ped::set_ped_component_variation(*iParam0, 1, 0, 0, 0);
		ped::set_ped_component_variation(*iParam0, 2, 0, 0, 0);
		if (Global_101700.f_19077.f_263) {
			ped::set_ped_component_variation(*iParam0, 3, 0, Global_101700.f_19077.f_254.f_4, 0);
		}
		else {
			ped::set_ped_component_variation(*iParam0, 3, 0, 4, 0);
		}
		ped::set_ped_component_variation(*iParam0, 4, 0, 0, 0);
		ped::set_ped_component_variation(*iParam0, 5, 0, 0, 0);
		ped::set_ped_component_variation(*iParam0, 6, 0, 0, 0);
		ped::set_ped_component_variation(*iParam0, 7, 0, 0, 0);
		ped::set_ped_component_variation(*iParam0, 8, 0, 0, 0);
		ped::set_ped_component_variation(*iParam0, 9, 0, 0, 0);
		ped::set_ped_component_variation(*iParam0, 10, 0, 0, 0);
		ped::set_ped_component_variation(*iParam0, 11, 0, 0, 0);
		ped::clear_all_ped_props(*iParam0);
		if (iParam5) {
			streaming::set_model_as_no_longer_needed(iVar0);
		}
		return 1;
	}
	return 0;
}

// Position - 0xB4D6
bool func_158() {
	var uVar0[10];
	int iVar11;
	int iVar12;

	if (func_125(Global_91277) && ped::is_ped_model(Global_91277, func_162())) {
		iLocal_69 = Global_91277;
		return true;
	}
	iVar11 = ped::get_ped_nearby_peds(player::player_ped_id(), &uVar0, -1);
	iVar12 = 0;
	while (iVar12 < iVar11) {
		if (uVar0[iVar12] != 0 && func_125(uVar0[iVar12]) && entity::get_entity_model(uVar0[iVar12]) == func_162()) {
			iLocal_69 = uVar0[iVar12];
			return true;
		}
		iVar12++;
	}
	return false;
}

// Position - 0xB565
void func_159(var *uParam0) {
	int iVar0;
	float fVar1;

	if (uParam0->f_51 == 0) {
	}
	if (uParam0->f_46 < 3) {
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46) {
		uParam0->f_47 = {uParam0->f_47 + (*uParam0)[iVar0 /*3*/]};
		iVar0++;
	}
	uParam0->f_47 = {uParam0->f_47 / FtoV(system::to_float(iVar0))};
	iVar0 = 0;
	while (iVar0 < uParam0->f_46) {
		fVar1 = system::vdist2(uParam0->f_47, (*uParam0)[iVar0 /*3*/]);
		if (fVar1 > uParam0->f_50) {
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = system::sqrt(uParam0->f_50);
	uParam0->f_51 = 0;
}

// Position - 0xB605
void func_160(var *uParam0, vector3 vParam1) {
	if (uParam0->f_51 == 0) {
	}
	if (uParam0->f_46 >= 15) {
	}
	(*uParam0)[uParam0->f_46 /*3*/] = {vParam1};
	uParam0->f_46++;
}

// Position - 0xB636
void func_161(var *uParam0) {
	if (uParam0->f_51) {
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = {0f, 0f, 0f};
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

// Position - 0xB65D
int func_162() { return joaat("a_c_chop"); }

// Position - 0xB66A
int func_163() {
	float fVar0;
	vector3 vVar1;
	float fVar4;

	if (iLocal_50 > 0) {
		if (entity::does_entity_exist(iLocal_69)) {
			if (func_167(0) && Global_25195 == 0) {
				return 1;
			}
			if (!func_170(1)) {
				return 1;
			}
			if (Global_101690 == 1) {
				return 1;
			}
			if (Global_69700 == 1 && Global_25195 == 0 && Global_2317 == 0 && Global_25441 == 0 && Global_25442 == 0 &&
				Global_25443 == 0 && Global_53003 == 0 && !func_146() && !func_16() && Global_93002 == 0 &&
				func_125(player::player_ped_id()) && !func_165()) {
				return 1;
			}
			if (Global_88744 == 1) {
				return 1;
			}
			if (entity::is_entity_dead(iLocal_69, 0)) {
				if (player::is_player_playing(player::player_id()) &&
					entity::has_entity_been_damaged_by_entity(iLocal_69, player::player_ped_id(), 1)) {
					Global_25335 = 1;
					if (!gameplay::is_bit_set(Global_101700.f_9008.f_94, 9) &&
						!streaming::is_player_switch_in_progress()) {
						gameplay::set_bit(&Global_101700.f_9008.f_94, 9);
						func_15("CHOP_H_DEAD", -1);
					}
				}
				else if (!gameplay::is_bit_set(Global_101700.f_9008.f_94, 12) &&
						 !streaming::is_player_switch_in_progress()) {
					gameplay::set_bit(&Global_101700.f_9008.f_94, 12);
					func_15("CHOP_H_DEAD2", -1);
				}
				return 1;
			}
			else {
				if (streaming::is_player_switch_in_progress()) {
					func_164();
				}
				else {
					if (iLocal_51 == 2 || iLocal_51 == 5 || iLocal_51 == 15) {
						fVar0 = 200f;
					}
					else {
						fVar0 = 100f;
					}
					if (func_4(player::player_ped_id(), iLocal_69, 1) > fVar0) {
						if (!gameplay::is_bit_set(Global_101700.f_9008.f_94, 4) &&
							player::is_player_playing(player::player_id()) &&
							!streaming::is_player_switch_in_progress()) {
							if (iLocal_51 == 1 || iLocal_51 == 17 || iLocal_51 == 11 || iLocal_51 == 4 ||
								iLocal_51 == 3 || iLocal_51 == 13) {
							}
							else {
								gameplay::set_bit(&Global_101700.f_9008.f_94, 4);
								func_15("CHOP_H_RANGE", -1);
							}
						}
						return 1;
					}
				}
				if (!ped::is_ped_in_any_vehicle(iLocal_69, 0) && entity::get_entity_health(iLocal_69) > 0) {
					if (entity::is_entity_in_water(iLocal_69)) {
						vVar1 = {entity::get_entity_coords(iLocal_69, 1)};
						if (water::get_water_height(vVar1, &fVar4)) {
							if (fVar4 - vVar1.z > 0.1f) {
								entity::set_entity_health(iLocal_69, 0);
							}
						}
					}
					if (fire::is_entity_on_fire(iLocal_69)) {
						entity::set_entity_health(iLocal_69, 0);
					}
				}
			}
		}
		else {
			return 1;
		}
	}
	return 0;
}

// Position - 0xB90F
void func_164() {
	if (ui::is_help_message_being_displayed()) {
		if (func_105("CHOP_H_INTRO") || func_105("CHOP_H_WAIT_0") || func_105("CHOP_H_WAIT_1") ||
			func_105("CHOP_H_WAIT_2") || func_105("CHOP_H_WAIT_3") || func_105("CHOP_H_WAIT_4") ||
			func_105("CHOP_H_WAIT_H1") || func_105("CHOP_H_WAIT_H2") || func_105("CHOP_H_WAIT_H3") ||
			func_105("CHOP_H_WAIT_H4") || func_105("CHOP_H_HOME") || func_105("CHOP_H_WALK_0") ||
			func_105("CHOP_H_WALK_1") || func_105("CHOP_H_WALK_2") || func_105("CHOP_H_WALK_3") ||
			func_105("CHOP_H_WALK_4") || func_105("CHOP_H_WALK_H1") || func_105("CHOP_H_WALK_H2") ||
			func_105("CHOP_H_WALK_H3") || func_105("CHOP_H_WALK_H4") || func_105("CHOP_H_HUNT") ||
			func_105("CHOP_H_NOVEH") || func_105("CHOP_H_CAR") || func_105("CHOP_H_BIKE") ||
			func_105("CHOP_H_ATTACK") || func_105("CHOP_H_BALL") || func_105("CHOP_H_WHIS") ||
			func_105("CHOP_H_NOAPP") || func_105("CHOP_H_BEHAVE") || func_105("CHOP_H_BEHAVA") ||
			func_105("CHOP_H_AIM")) {
			ui::clear_help(1);
		}
	}
	if (gameplay::is_pc_version()) {
		if (ui::is_help_message_being_displayed()) {
			if (func_105("CHOP_H_INTRO_KM") || func_105("CHOP_H_WAIT_0_KM") || func_105("CHOP_H_WAIT_1_KM") ||
				func_105("CHOP_H_WAIT_2_KM") || func_105("CHOP_H_WAIT_3_KM") || func_105("CHOP_H_WAIT_4_KM") ||
				func_105("CHOP_H_WAIT_H1_KM") || func_105("CHOP_H_WAIT_H2_KM") || func_105("CHOP_H_WAIT_H3_KM") ||
				func_105("CHOP_H_WAIT_H4_KM") || func_105("CHOP_H_HOME_KM") || func_105("CHOP_H_WALK_0_KM") ||
				func_105("CHOP_H_WALK_1_KM") || func_105("CHOP_H_WALK_2_KM") || func_105("CHOP_H_WALK_3_KM") ||
				func_105("CHOP_H_WALK_4_KM") || func_105("CHOP_H_WALK_H1_KM") || func_105("CHOP_H_WALK_H2_KM") ||
				func_105("CHOP_H_WALK_H3_KM") || func_105("CHOP_H_WALK_H4_KM") || func_105("CHOP_H_NOAPP_KM")) {
				ui::clear_help(1);
			}
		}
	}
}

// Position - 0xBC08
bool func_165() { return Global_89133; }

// Position - 0xBC14
int func_166() {
	if (streaming::is_player_switch_in_progress()) {
		return Global_89666;
	}
	if (func_146()) {
		return Global_89666;
	}
	return 318;
}

// Position - 0xBC3B
bool func_167(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_168(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0xBC5D
bool func_168(int iParam0) { return func_169(iParam0, Global_35781); }

// Position - 0xBC6E
int func_169(int iParam0, int iParam1) {
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

// Position - 0xBE4F
bool func_170(int iParam0) {
	func_171();
	return iParam0 == Global_101700.f_2095.f_539.f_3549;
}

// Position - 0xBE6B
void func_171() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_175(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_174(player::player_ped_id());
			if (func_173(iVar0) && (!func_172(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_173(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0xBF68
bool func_172(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xBF76
bool func_173(int iParam0) { return iParam0 < 3; }

// Position - 0xBF82
int func_174(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_175(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0xBFBF
int func_175(int iParam0) {
	if (func_173(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xBFE9
int func_176(vector3 vParam0, int iParam3, int iParam4) {
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= 10 - 1) {
		if (Global_86862[iVar0 /*10*/].f_7 != 263) {
			if (Global_86862[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145) {
				if (func_177(iVar0) || iParam4 == 0) {
					fVar1 = gameplay::get_distance_between_coords(vParam0, Global_86862[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2) {
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

// Position - 0xC07A
bool func_177(int iParam0) { return gameplay::is_bit_set(Global_101700.f_6188[iParam0], 0); }

// Position - 0xC092
bool func_178(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0xC0BF
void func_179() {
	int iVar0;
	int iVar1;

	if (script::_get_number_of_instances_of_script_with_name_hash(script::get_hash_of_this_script_name()) > 1) {
	}
	else {
		Global_25336 = 0;
		func_147(0);
		if (cam::is_gameplay_hint_active() && !iLocal_492) {
			cam::stop_gameplay_hint(0);
		}
		func_67(&iLocal_70);
		if (func_178(63)) {
			if (player::is_player_playing(player::player_id())) {
				if (func_178(126)) {
					if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
															  19.3f, 528.24f, 169.63f, 1) > 50f) {
						func_61(139, 1, 0);
					}
				}
				else if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
															   -11.15f, -1425.56f, 29.67f, 1) > 50f) {
					func_61(138, 1, 0);
				}
			}
		}
		func_40(1);
		func_42(&iLocal_418, 0);
		func_42(&iLocal_423, 0);
		if (graphics::does_particle_fx_looped_exist(iLocal_79)) {
			graphics::stop_particle_fx_looped(iLocal_79, 0);
		}
		streaming::remove_ptfx_asset();
		if (weapon::has_ped_got_weapon(player::player_ped_id(), joaat("weapon_ball"), 0)) {
			weapon::remove_weapon_from_ped(player::player_ped_id(), joaat("weapon_ball"));
		}
		if (func_125(player::player_ped_id()) && !func_172(0)) {
			ped::set_ped_config_flag(player::player_ped_id(), 32, 1);
		}
		if (entity::does_entity_exist(iLocal_69)) {
			if (func_187()) {
				func_186(&iLocal_69);
			}
			else {
				if (!entity::is_entity_dead(iLocal_69, 0) && func_125(player::player_ped_id())) {
					if (ped::is_ped_in_group(iLocal_69)) {
						ped::remove_ped_from_group(iLocal_69);
					}
					if (ped::is_synchronized_scene_running(iLocal_108) || ped::is_ped_in_any_vehicle(iLocal_69, 0)) {
						if (func_125(iLocal_80)) {
							iVar0 = 0;
							while (!iVar0) {
								system::wait(0);
								if (!func_185() || func_183(iLocal_80, 1093140480, 1, 1056964608, 0, 1, 0)) {
									iVar0 = 1;
								}
							}
							if (func_185()) {
								if (!vehicle::is_vehicle_door_damaged(iLocal_80, iLocal_118)) {
									vehicle::set_vehicle_door_open(iLocal_80, iLocal_118, 0, 0);
								}
								streaming::request_anim_dict(sLocal_477);
								while (!streaming::has_anim_dict_loaded(sLocal_477)) {
									system::wait(0);
								}
							}
							if (func_185()) {
								iLocal_108 = ped::create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
								ped::attach_synchronized_scene_to_entity(
									iLocal_108, iLocal_80,
									entity::get_entity_bone_index_by_name(iLocal_80, "seat_pside_f"));
								ai::clear_ped_tasks_immediately(iLocal_69);
								ai::task_synchronized_scene(iLocal_69, iLocal_108, sLocal_477, "get_out", 1000f, -8f,
															10, 0, 1148846080, 0);
								ped::_0x2208438012482A1A(iLocal_69, 0, 0);
								iVar1 = 0;
								while (!iVar1) {
									system::wait(0);
									if (!func_185() || ped::is_synchronized_scene_running(iLocal_108) &&
														   ped::get_synchronized_scene_phase(iLocal_108) > 0.99f) {
										iVar1 = 1;
									}
								}
								system::wait(0);
								if (func_185() && !vehicle::is_vehicle_door_damaged(iLocal_80, iLocal_118)) {
									vehicle::set_vehicle_door_shut(iLocal_80, iLocal_118, 0);
								}
							}
						}
						else if (func_182() == 1) {
							if (iLocal_51 == 2 || iLocal_51 == 15) {
								ai::clear_ped_tasks_immediately(iLocal_69);
								func_124(iLocal_69,
										 entity::get_offset_from_entity_in_world_coords(player::player_ped_id(), 1.75f,
																						0f, 0f),
										 entity::get_entity_heading(iLocal_69), 1, 1);
								ped::_0x2208438012482A1A(iLocal_69, 0, 0);
							}
						}
					}
					if (func_125(iLocal_69)) {
						ped::set_ped_keep_task(iLocal_69, 1);
						ai::task_smart_flee_ped(iLocal_69, player::player_ped_id(), 100f, -1, 0, 0);
					}
				}
				func_181(&iLocal_69, 1, 0, 1);
			}
		}
		func_56();
		func_55(&iLocal_80);
		func_98(0);
		streaming::remove_anim_dict("creatures@rottweiler@move");
		streaming::remove_anim_dict("creatures@rottweiler@amb@world_dog_barking@enter");
		streaming::remove_anim_dict("creatures@rottweiler@amb@world_dog_barking@base");
		streaming::remove_anim_dict("creatures@rottweiler@amb@world_dog_barking@idle_a");
		streaming::remove_anim_dict("creatures@rottweiler@amb@world_dog_barking@exit");
		streaming::remove_anim_dict("creatures@rottweiler@in_vehicle@4x4");
		streaming::remove_anim_dict("creatures@rottweiler@in_vehicle@low_car");
		streaming::remove_anim_dict("creatures@rottweiler@in_vehicle@std_car");
		streaming::remove_anim_dict("creatures@rottweiler@in_vehicle@van");
		streaming::remove_anim_dict("creatures@rottweiler@amb@world_dog_sitting@enter");
		streaming::remove_anim_dict("creatures@rottweiler@amb@world_dog_sitting@idle_a");
		streaming::remove_anim_dict("creatures@rottweiler@amb@world_dog_sitting@exit");
		streaming::remove_anim_dict("creatures@rottweiler@tricks@");
		streaming::remove_anim_dict("creatures@rottweiler@amb@sleep_in_kennel@");
		streaming::remove_anim_dict("creatures@rottweiler@indication@");
		streaming::remove_anim_dict("misschop_vehicleenter_exit");
		streaming::remove_anim_dict("creatures@rottweiler@melee@streamed_taunts@");
		func_180(&uLocal_172, 1);
		func_180(&uLocal_172, 3);
		func_164();
		cam::destroy_all_cams(0);
		if (iLocal_87 > -1) {
			pathfind::remove_navmesh_blocking_object(iLocal_87);
		}
		if (iLocal_88 > -1) {
			pathfind::remove_navmesh_blocking_object(iLocal_88);
		}
		if (iLocal_72 == 1) {
			ped::remove_relationship_group(iLocal_71);
		}
		audio::stop_sound(iLocal_490);
	}
	script::terminate_this_thread();
}

// Position - 0xC4A9
void func_180(var *uParam0, int iParam1) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
		(*uParam0)[iParam1 /*10*/].f_7 = 0;
	}
}

// Position - 0xC4C6
void func_181(int iParam0, int iParam1, int iParam2, int iParam3) {
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

// Position - 0xC515
int func_182() {
	func_171();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0xC52E
int func_183(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6) {
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
	func_184(iParam0);
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

// Position - 0xC6BD
void func_184(int iParam0) {
	if (vehicle::_get_has_vehicle_got_rocket_boost(iParam0)) {
		if (vehicle::_is_vehicle_rocket_boost_active(iParam0)) {
			vehicle::_set_rocket_boost_active(iParam0, 0);
		}
	}
}

// Position - 0xC6DE
bool func_185() {
	if (func_125(player::player_ped_id()) && func_125(iLocal_80) && func_125(iLocal_69)) {
		return true;
	}
	return false;
}

// Position - 0xC70C
void func_186(int iParam0) {
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

// Position - 0xC74C
bool func_187() {
	if (streaming::is_player_switch_in_progress() && func_125(iLocal_69)) {
		if (ped::is_synchronized_scene_running(iLocal_108) || ped::is_ped_in_any_vehicle(iLocal_69, 0)) {
			return true;
		}
	}
	if (Global_25337 == 1) {
		return true;
	}
	if (Global_25338 == 1) {
		Global_25338 = 0;
		return true;
	}
	if (func_125(iLocal_69)) {
		if (iLocal_51 == 11 && entity::is_entity_occluded(iLocal_69)) {
			return true;
		}
		if (func_188(entity::get_entity_coords(iLocal_69, 0), 1f, 1120403456)) {
			return false;
		}
	}
	if (!func_167(0)) {
		return false;
	}
	if (func_172(6) || func_172(2)) {
		return false;
	}
	return true;
}

// Position - 0xC7F7
bool func_188(vector3 vParam0, float fParam3, float fParam4) {
	if (cam::is_sphere_visible(vParam0, fParam3)) {
		if (!entity::is_entity_at_coord(player::player_ped_id(), vParam0, fParam4, fParam4, fParam4, 0, 0, 0)) {
			return false;
		}
		else if (cam::is_screen_faded_out()) {
			return false;
		}
		else {
			return true;
		}
	}
	return false;
}
