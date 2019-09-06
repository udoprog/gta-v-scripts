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
int iLocal_29 = 0;
int iLocal_30 = 0;
int iLocal_31 = 0;
int iLocal_32 = 0;
int iLocal_33 = 0;
int iLocal_34 = 0;
var uLocal_35[7] = {0, 0, 0, 0, 0, 0, 0};
var uLocal_43[2] = {0, 0};
int iLocal_46 = 0;
int iLocal_47 = 0;
int iLocal_48 = 0;
int iLocal_49 = 0;
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
var uLocal_69[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_77 = 0;
int iLocal_78 = 0;
int iLocal_79 = 0;
int iLocal_80 = 0;
int iLocal_81 = 0;
int iLocal_82 = 0;
int iLocal_83 = 0;
int iLocal_84 = 0;
int iLocal_85 = 0;
int iLocal_86 = 0;
int iLocal_87 = 0;
int iLocal_88 = 0;
int iLocal_89 = 0;
int iLocal_90 = 0;
int iLocal_91 = 0;
int iLocal_92 = 0;
int iLocal_93 = 0;
int iLocal_94 = 0;
int iLocal_95 = 0;
var uLocal_96[2] = {0, 0};
var uLocal_99[2] = {0, 0};
var uLocal_102[2] = {0, 0};
var uLocal_105[2] = {0, 0};
int iLocal_108 = 0;
int iLocal_109 = 0;
int iLocal_110 = 0;
int iLocal_111 = 0;
int iLocal_112 = 0;
int iLocal_113 = 0;
int iLocal_114 = 0;
int iLocal_115 = 0;
vector3 vLocal_116 = {0f, 0f, 0f};
vector3 vLocal_119 = {0f, 0f, 0f};
vector3 vLocal_122 = {0f, 0f, 0f};
vector3 vLocal_125[2] = {{0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_132 = {0f, 0f, 0f};
float fLocal_135 = 0f;
char *sLocal_136 = NULL;
var *uLocal_137 = NULL;
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
var uLocal_172 = 0;
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
int iLocal_302 = 0;
int iLocal_303 = 0;
int iLocal_304 = 0;
int iLocal_305 = 0;
int iLocal_306[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_314 = 0;
int iLocal_315 = 0;
int iLocal_316 = 0;
int iLocal_317 = 0;
int iLocal_318 = 0;
int iLocal_319 = 0;
int iLocal_320 = 0;
int iLocal_321 = 0;
int iLocal_322[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_330[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_338 = 0;
int iLocal_339[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_347[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_355[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_363[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_371[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_379[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_387 = 0;
int iLocal_388 = 0;
int iLocal_389 = 0;
int iLocal_390 = 0;
int iLocal_391 = 0;
int iLocal_392 = 0;
int iLocal_393 = 0;
int iLocal_394 = 0;
int iLocal_395 = 0;
int iLocal_396 = 0;
int iLocal_397 = 0;
int iLocal_398 = 0;
int iLocal_399 = 0;
int iLocal_400 = 0;
int iLocal_401 = 0;
int iLocal_402 = 0;
int iLocal_403 = 0;
int iLocal_404[2] = {0, 0};
int iLocal_407[2] = {0, 0};
int iLocal_410 = 0;
int iLocal_411 = 0;
int iLocal_412 = 0;
int iLocal_413 = 0;
int iLocal_414 = 0;
int iLocal_415 = 0;
int iLocal_416 = 0;
int iLocal_417 = 0;
int iLocal_418 = 0;
int iLocal_419 = 0;
int iLocal_420 = 0;
int iLocal_421 = 0;
int iLocal_422 = 0;
int iLocal_423 = 0;
int iLocal_424 = 0;
int iLocal_425 = 0;
int iLocal_426 = 0;
int iLocal_427 = 0;
int iLocal_428 = 0;
int iLocal_429 = 0;
int iLocal_430 = 0;
int iLocal_431 = 0;
int iLocal_432 = 0;
int iLocal_433[2] = {0, 0};
int iLocal_436[2] = {0, 0};
int iLocal_439[2] = {0, 0};
int iLocal_442[2] = {0, 0};
int iLocal_445[2] = {0, 0};
int iLocal_448[2] = {0, 0};
int iLocal_451[2] = {0, 0};
int iLocal_454 = 0;
int iLocal_455 = 0;
int iLocal_456 = 0;
int iLocal_457 = 0;
int iLocal_458 = 0;
int iLocal_459[2] = {0, 0};
int iLocal_462[2] = {0, 0};
int iLocal_465 = 0;
int iLocal_466 = 0;
int iLocal_467 = 0;
int iLocal_468 = 0;
int iLocal_469 = 0;
int iLocal_470 = 0;
int iLocal_471 = 0;
int iLocal_472 = 0;
int iLocal_473 = 0;
int iLocal_474 = 0;
int iLocal_475 = 0;
int iLocal_476 = 0;
int iLocal_477 = 0;
int iLocal_478 = 0;
int iLocal_479 = 0;
int iLocal_480 = 0;
int iLocal_481 = 0;
int iLocal_482 = 0;
int iLocal_483 = 0;
int iLocal_484[2] = {0, 0};
int iLocal_487 = 0;
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
	vLocal_116 = {27.7189f, -608.7927f, 30.6293f};
	vLocal_132 = {903.1f, -1548.8f, 29.8f};
	fLocal_135 = 0f;
	if (player::has_force_cleanup_occurred(3)) {
		audio::trigger_music_event("FHPRB_STOP");
		func_194();
		func_193();
	}
	if (func_192(0)) {
		ui::request_additional_text("FINPRB", 0);
	}
	ped::add_relationship_group("WorkerPedMainGroup", &iLocal_302);
	ped::add_relationship_group("GuardMainGroup", &iLocal_303);
	vehicle::set_vehicle_model_is_suppressed(joaat("packer"), 1);
	ped::set_relationship_between_groups(5, iLocal_303, 1862763509);
	ped::set_relationship_between_groups(5, iLocal_302, 1862763509);
	ped::set_relationship_between_groups(1, iLocal_303, iLocal_302);
	ped::set_relationship_between_groups(1, iLocal_302, iLocal_303);
	ped::set_relationship_between_groups(1, iLocal_303, -1533126372);
	ped::set_relationship_between_groups(1, -1533126372, iLocal_303);
	ped::set_relationship_between_groups(1, iLocal_302, -1533126372);
	ped::set_relationship_between_groups(1, -1533126372, iLocal_302);
	while (true) {
		unk1::_0x208784099002BC30("M_FINPRB", 0);
		if (!ped::is_ped_injured(player::player_ped_id())) {
			ped::set_ped_config_flag(player::player_ped_id(), 230, 0);
		}
		func_190();
		if (iLocal_317 == 0) {
			if (player::get_player_wanted_level(player::player_id()) > 0) {
				func_189(27, 1);
				iLocal_317 = 1;
			}
		}
		if (iLocal_396 == 1) {
			func_185();
		}
		func_182();
		func_175();
		func_167();
		func_162();
		func_159();
		switch (iLocal_28) {
		case 0: func_158(); break;

		case 1: func_155(); break;

		case 2: func_131(); break;

		case 3: func_129(); break;

		case 4: func_105(); break;

		case 5: func_20(); break;

		case 6: func_1(); break;
		}
		system::wait(0);
	}
}

// Position - 0x1EC
void func_1() {
	switch (iLocal_62) {
	case 0:
		ui::clear_prints();
		ui::clear_help(1);
		audio::trigger_music_event("FHPRA_FAIL");
		switch (iLocal_30) {
		case 0: break;

		case 4: sLocal_136 = "FPB_FAIL1"; break;

		case 3: sLocal_136 = "FPB_FAIL2"; break;

		case 1: sLocal_136 = "FPB_FAIL3"; break;

		case 2: sLocal_136 = "FPB_FAIL10"; break;

		case 5:
			if (func_14() == 0) {
				sLocal_136 = "FPB_FAIL7";
			}
			if (func_14() == 2) {
				sLocal_136 = "FPB_FAIL8";
			}
			if (func_14() == 1) {
				sLocal_136 = "FPB_FAIL9";
			}
			break;

		case 6: sLocal_136 = "FPB_FAIL11"; break;
		}
		if (iLocal_30 == 0) {
			func_6(0);
		}
		else {
			func_4(sLocal_136);
		}
		iLocal_62 = 1;
		break;

	case 1:
		if (func_3()) {
			if (func_2()) {
			}
			func_193();
		}
		break;
	}
}

// Position - 0x2CD
bool func_2() {
	if (Global_91491 == 7) {
		return true;
	}
	return false;
}

// Position - 0x2E2
bool func_3() {
	if (Global_3) {
		return true;
	}
	if (Global_91491 == 7 || Global_91491 == 8) {
		return true;
	}
	return false;
}

// Position - 0x30F
void func_4(char *sParam0) {
	func_5(sParam0);
	func_6(0);
}

// Position - 0x322
void func_5(char *sParam0) {
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

// Position - 0x361
void func_6(int iParam0) {
	int iVar0;

	if (Global_101700.f_8044 || func_192(0)) {
		iVar0 = func_13();
		if (!func_7(iVar0)) {
			return;
		}
		gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 5);
		Global_91527 = iParam0;
	}
}

// Position - 0x3A6
int func_7(int iParam0) {
	int iVar0;
	int iVar1;

	func_12();
	if (player::is_player_playing(player::player_id())) {
		player::start_firing_amnesty(5000);
	}
	iVar0 = Global_82576[iParam0 /*5*/];
	iVar1 = Global_69971.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	player::_0xC9A763D8FE87436A(player::player_id());
	player::special_ability_deactivate(player::player_id());
	func_8(&Global_101700.f_2095.f_539, iVar1);
	if (Global_85999 == Global_91528) {
		Global_101700.f_8044.f_330[iVar1 /*6*/].f_1++;
	}
	if (!gameplay::is_bit_set(Global_82612[iVar1 /*34*/].f_15, 1)) {
		if (!player::is_player_playing(player::player_id())) {
			gameplay::set_fade_in_after_death_arrest(0);
		}
	}
	Global_101700.f_8044.f_330[iVar1 /*6*/].f_2++;
	Global_85999 = Global_91528;
	if (iParam0 == -1) {
		if (Global_101700.f_8044) {
		}
		return 0;
	}
	if (gameplay::is_bit_set(Global_82576[iParam0 /*5*/].f_1, 4)) {
		return 0;
	}
	if (gameplay::is_bit_set(Global_82576[iParam0 /*5*/].f_1, 5)) {
		return 0;
	}
	return 1;
}

// Position - 0x4BD
void func_8(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float *fVar5;

	if (iParam1 == 94) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = Global_101700.f_17492[iVar0];
		if (iVar1 == 8 || iVar1 == 9 || iVar1 == 10 || iVar1 == 11 || iVar1 == 34 || iVar1 == 72 || iVar1 == 73)
			&&!gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[0], 9) {}
		else {
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_10(Global_101700.f_17492[iVar0], &vVar2, &fVar5)) {
				Global_101700.f_17492[iVar0] = 318;
				func_9(&uParam0->f_1524[iVar0]);
				uParam0->f_1528[iVar0 /*3*/] = {0f, 0f, 0f};
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = {0f, 0f, 0f};
				uParam0->f_1556[iVar0] = 0;
				Global_89214[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_9 = 0f;
				Global_89214[iVar0 /*29*/].f_12 = 0f;
				Global_89214[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_10 = 0f;
				Global_89214[iVar0 /*29*/].f_13 = 0f;
				Global_89214[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_11 = 0f;
				Global_89214[iVar0 /*29*/].f_14 = 0f;
				Global_89214[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_26 = 0f;
				Global_89214[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_27 = 0f;
				Global_89214[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

// Position - 0x686
void func_9(int *iParam0) { *iParam0 = -15; }

// Position - 0x694
int func_10(int iParam0, var *uParam1, float *fParam2) {
	switch (iParam0) {
	case 11:
		*uParam1 = {115.1569f, -1286.684f, 28.2613f};
		*fParam2 = 111f;
		return 1;

	case 8:
		*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
		*fParam2 = 194.1887f;
		return 1;

	case 9: return func_10(8, uParam1, fParam2);

	case 10: return func_10(8, uParam1, fParam2);

	case 13:
		*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
		*fParam2 = 201.6328f;
		return 1;

	case 14:
		*uParam1 = {1432.34f, -1887.383f, 70.5768f};
		*fParam2 = 350.0509f;
		return 1;

	case 15:
		*uParam1 = {1666.204f, 1967.25f, 143.3213f};
		*fParam2 = 0.7896f;
		return 1;

	case 12:
		*uParam1 = {-1440.22f, -127.02f, 50f};
		*fParam2 = 42f;
		return 1;

	case 16:
		*uParam1 = {135.055f, -1759.64f, 27.8957f};
		*fParam2 = -129f;
		return 1;

	case 17:
		*uParam1 = {687.6992f, -1744.03f, 28.3624f};
		*fParam2 = 267.1409f;
		return 1;

	case 18:
		*uParam1 = {56.5117f, -744.6122f, 43.1356f};
		*fParam2 = 340.0526f;
		return 1;

	case 19:
		*uParam1 = {506.485f, -1884.967f, 24.764f};
		*fParam2 = 22.9566f;
		return 1;

	case 20:
		*uParam1 = {1555.958f, 953.6136f, 77.2063f};
		*fParam2 = 152.8118f;
		return 1;

	case 21:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 22:
		*uParam1 = {220.72f, -64.4177f, 68.2922f};
		*fParam2 = 250.4535f - 360f;
		return 1;

	case 74:
		*uParam1 = {2048.07f, 3840.84f, 34.2238f};
		*fParam2 = 119.603f;
		return 1;

	case 23:
		*uParam1 = {-464.22f, -1592.98f, 38.73f};
		*fParam2 = 168f;
		return 1;

	case 24:
		*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
		*fParam2 = 51.7279f;
		return 1;

	case 67:
		*uParam1 = {-9f, 508.1f, 173.6278f};
		*fParam2 = 151.2504f;
		return 1;

	case 25:
		*uParam1 = {72.2278f, -1464.68f, 28.2915f};
		*fParam2 = 156.8827f;
		return 1;

	case 27:
		*uParam1 = {763f, -906f, 24.2312f};
		*fParam2 = 7.2736f;
		return 1;

	case 26:
		*uParam1 = {257.9167f, -1120.786f, 28.3684f};
		*fParam2 = 97.2736f;
		return 1;

	case 28:
		*uParam1 = {422.5858f, -978.6332f, 69.7073f};
		*fParam2 = 4f;
		return 1;

	case 29:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 30:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 31:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 32:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 33:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 34:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 35:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 36:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 37:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 58:
		*uParam1 = {294.8521f, 882.9366f, 197.8527f};
		*fParam2 = 162.693f;
		return 1;

	case 59:
		*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
		*fParam2 = 128.9946f;
		return 1;

	case 60:
		*uParam1 = {1495.595f, -1848.821f, 70.2075f};
		*fParam2 = 32.2721f;
		return 1;

	case 38:
		*uParam1 = {2897.554f, 4032.241f, 50.1419f};
		*fParam2 = 192.8091f;
		return 1;

	case 39:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return 1;

	case 40:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return 1;

	case 41:
		*uParam1 = {1397f, 3725.8f, 33.0673f};
		*fParam2 = -3.7534f;
		return 1;

	case 42:
		*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
		*fParam2 = 90f;
		return 1;

	case 43:
		*uParam1 = {709.0244f, -2916.479f, 5.0589f};
		*fParam2 = 355.326f;
		return 1;

	case 44:
		*uParam1 = {643.5248f, -2917.325f, 5.1337f};
		*fParam2 = 334.1068f;
		return 1;

	case 45:
		*uParam1 = {595.2742f, -2819.183f, 5.0559f};
		*fParam2 = 46.8853f;
		return 1;

	case 46:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 47:
		*uParam1 = {314.4171f, 965.207f, 208.4024f};
		*fParam2 = 165.9421f;
		return 1;

	case 49:
		*uParam1 = {3321.537f, 4975.455f, 25.9097f};
		*fParam2 = 221.228f;
		return 1;

	case 48:
		*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
		*fParam2 = 42f + 180f;
		return 1;

	case 50:
		*uParam1 = {-731.3261f, 106.68f, 54.7169f};
		*fParam2 = 98.9764f;
		return 1;

	case 51:
		*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
		*fParam2 = 220.9554f;
		return 1;

	case 52:
		*uParam1 = {736.9869f, -2050.678f, 28.2718f};
		*fParam2 = 83.9922f;
		return 1;

	case 66:
		*uParam1 = {262.5499f, -2540.15f, 4.8433f};
		*fParam2 = -64.1366f;
		return 1;

	case 53:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 55:
		*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
		*fParam2 = 127.7547f;
		return 1;

	case 56:
		*uParam1 = {118.0988f, -1264.916f, 32.3637f};
		*fParam2 = -63f;
		return 1;

	case 57:
		*uParam1 = {37.5988f, -1351.52f, 28.2954f};
		*fParam2 = 90.0339f;
		return 1;

	case 61:
		*uParam1 = {-558.2693f, 261.1167f, 82.07f};
		*fParam2 = 84.6231f;
		return 1;

	case 62:
		*uParam1 = {-196.9999f, 507.9999f, 132.477f};
		*fParam2 = 99.6049f;
		return 1;

	case 63:
		*uParam1 = {1312.01f, -1645.87f, 51.2f};
		*fParam2 = 120f;
		return 1;

	case 68:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 69:
		*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
		*fParam2 = 211.8223f;
		return 1;

	case 64:
		*uParam1 = {2091.258f, 4714.852f, 40.1936f};
		*fParam2 = 136.0867f;
		return 1;

	case 54:
		*uParam1 = {1762.59f, 3247.212f, 40.735f};
		*fParam2 = 27.0648f;
		return 1;

	case 65:
		*uParam1 = {1764.013f, 3252.902f, 40.735f};
		*fParam2 = 27.0648f;
		return 1;

	case 70:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 71:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 72:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 73:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	default: break;
	}
	return 0;
}

// Position - 0x1003
void func_11(int iParam0, int iParam1) {
	if (iParam1) {
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92) {
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else {
		Global_85809[iParam0 /*2*/] = 0;
	}
}

// Position - 0x1041
void func_12() {
	Global_91526 = 1;
	if (player::is_player_being_arrested(player::player_id(), 1)) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_14()) {
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
			switch (func_14()) {
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

// Position - 0x1128
int func_13() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 2)) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x115D
int func_14() {
	func_15();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x1176
void func_15() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_19(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_18(player::player_ped_id());
			if (func_17(iVar0) && (!func_16(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_17(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x1273
bool func_16(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x1281
bool func_17(int iParam0) { return iParam0 < 3; }

// Position - 0x128D
int func_18(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_19(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x12CA
int func_19(int iParam0) {
	if (func_17(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x12F4
void func_20() {
	func_159();
	if (iLocal_62 == 0) {
		if (iLocal_304 == 1) {
			func_34();
			iLocal_304 = 0;
		}
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		player::set_player_control(player::player_id(), 0, 0);
		if (func_33(iLocal_46, 0)) {
			if (!func_32(iLocal_46)) {
				while (!func_31(iLocal_46, 0)) {
					system::wait(0);
				}
			}
		}
		if (func_33(iLocal_48, 0)) {
			if (!func_32(iLocal_48)) {
				while (!func_31(iLocal_48, 0)) {
					system::wait(0);
				}
			}
		}
		if (func_33(iLocal_47, 0)) {
			if (!func_32(iLocal_47)) {
				while (!func_31(iLocal_47, 0)) {
					system::wait(0);
				}
			}
		}
		if (cam::is_screen_faded_out()) {
			if (!func_30()) {
				streaming::load_scene(entity::get_entity_coords(player::player_ped_id(), 1));
			}
			func_27(iLocal_33, -1, 1);
		}
		if (!cam::is_screen_faded_in()) {
			cam::do_screen_fade_in(800);
		}
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1) {
		if (entity::does_entity_exist(iLocal_33)) {
			if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
				if (func_14() == 0) {
					if (func_33(iLocal_48, 0)) {
						if (ped::is_ped_in_vehicle(iLocal_48, iLocal_33, 0)) {
							ai::clear_ped_tasks(iLocal_48);
							ped::remove_ped_from_group(iLocal_48);
							ped::set_blocking_of_non_temporary_events(iLocal_48, 1);
							ai::task_leave_vehicle(iLocal_48, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_47, 0)) {
						if (ped::is_ped_in_vehicle(iLocal_47, iLocal_33, 0)) {
							ai::clear_ped_tasks(iLocal_47);
							ped::remove_ped_from_group(iLocal_47);
							ped::set_blocking_of_non_temporary_events(iLocal_47, 1);
							ai::task_leave_vehicle(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2) {
					if (func_33(iLocal_46, 0)) {
						if (ped::is_ped_in_vehicle(iLocal_46, iLocal_33, 0)) {
							ai::clear_ped_tasks(iLocal_46);
							ped::remove_ped_from_group(iLocal_46);
							ped::set_blocking_of_non_temporary_events(iLocal_46, 1);
							ai::task_leave_vehicle(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_47, 0)) {
						if (ped::is_ped_in_vehicle(iLocal_47, iLocal_33, 0)) {
							ai::clear_ped_tasks(iLocal_47);
							ped::remove_ped_from_group(iLocal_47);
							ped::set_blocking_of_non_temporary_events(iLocal_47, 1);
							ai::task_leave_vehicle(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1) {
					if (func_33(iLocal_46, 0)) {
						if (ped::is_ped_in_vehicle(iLocal_46, iLocal_33, 0)) {
							ai::clear_ped_tasks(iLocal_46);
							ped::remove_ped_from_group(iLocal_46);
							ped::set_blocking_of_non_temporary_events(iLocal_46, 1);
							ai::task_leave_vehicle(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_48, 0)) {
						if (ped::is_ped_in_vehicle(iLocal_48, iLocal_33, 0)) {
							ai::clear_ped_tasks(iLocal_48);
							ped::remove_ped_from_group(iLocal_48);
							ped::set_blocking_of_non_temporary_events(iLocal_48, 1);
							ai::task_leave_vehicle(iLocal_48, iLocal_33, 0);
						}
					}
				}
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 0)) {
					ai::task_leave_vehicle(player::player_ped_id(), iLocal_33, 0);
				}
			}
		}
		system::settimerb(0);
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2) {
		if (entity::does_entity_exist(iLocal_33)) {
			if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
				if (iLocal_320 == 0) {
					if (func_14() == 0) {
						if (func_33(iLocal_48, 0)) {
							if (!ped::is_ped_in_vehicle(iLocal_48, iLocal_33, 0)) {
								if (func_32(iLocal_48)) {
									if (func_24(iLocal_48)) {
										iLocal_320 = 1;
									}
								}
								else {
									iLocal_320 = 1;
								}
							}
						}
						else {
							iLocal_318 = 1;
						}
						if (func_33(iLocal_47, 0)) {
							if (!ped::is_ped_in_vehicle(iLocal_47, iLocal_33, 0)) {
								if (func_32(iLocal_47)) {
									if (func_24(iLocal_47)) {
										iLocal_320 = 1;
									}
								}
								else {
									iLocal_320 = 1;
								}
							}
						}
						else {
							iLocal_319 = 1;
						}
					}
					if (func_14() == 2) {
						if (func_33(iLocal_46, 0)) {
							if (!ped::is_ped_in_vehicle(iLocal_46, iLocal_33, 0)) {
								if (func_32(iLocal_46)) {
									if (func_24(iLocal_46)) {
										iLocal_320 = 1;
									}
								}
								else {
									iLocal_320 = 1;
								}
							}
						}
						else {
							iLocal_318 = 1;
						}
						if (func_33(iLocal_47, 0)) {
							if (!ped::is_ped_in_vehicle(iLocal_47, iLocal_33, 0)) {
								if (func_32(iLocal_47)) {
									if (func_24(iLocal_47)) {
										iLocal_320 = 1;
									}
								}
								else {
									iLocal_320 = 1;
								}
							}
						}
						else {
							iLocal_319 = 1;
						}
					}
					if (func_14() == 1) {
						if (func_33(iLocal_46, 0)) {
							if (!ped::is_ped_in_vehicle(iLocal_46, iLocal_33, 0)) {
								if (func_32(iLocal_46)) {
									if (func_24(iLocal_46)) {
										iLocal_320 = 1;
									}
								}
								else {
									iLocal_320 = 1;
								}
							}
						}
						else {
							iLocal_318 = 1;
						}
						if (func_33(iLocal_48, 0)) {
							if (!ped::is_ped_in_vehicle(iLocal_48, iLocal_33, 0)) {
								if (func_32(iLocal_48)) {
									if (func_24(iLocal_48)) {
										iLocal_320 = 1;
									}
								}
								else {
									iLocal_320 = 1;
								}
							}
						}
						else {
							iLocal_319 = 1;
						}
					}
					if (iLocal_318 == 1 && iLocal_319 == 1) {
						iLocal_320 = 1;
					}
				}
				else if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 1)) {
					player::set_player_control(player::player_id(), 1, 0);
					system::settimerb(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3) {
		if (entity::does_entity_exist(iLocal_33)) {
			if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
				vehicle::set_vehicle_doors_shut(iLocal_33, 0);
				vehicle::set_vehicle_doors_locked(iLocal_33, 2);
				entity::freeze_entity_position(iLocal_33, 1);
			}
		}
		if (entity::does_entity_exist(iLocal_32)) {
			if (vehicle::is_vehicle_driveable(iLocal_32, 0)) {
				entity::freeze_entity_position(iLocal_32, 1);
			}
		}
		iLocal_62 = 4;
	}
	if (iLocal_62 == 4) {
		func_21();
	}
}

// Position - 0x1781
void func_21() {
	func_22(0, 0);
	func_193();
}

// Position - 0x1793
void func_22(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Global_55824) {
		Global_55824 = iParam1;
	}
	if (iParam0) {
		if (func_192(0) && Global_69948.f_1 == 1 && func_23(Global_69948)) {
		}
		else {
			Global_55822 = 1;
		}
	}
	if (Global_101700.f_8044 || func_192(0)) {
		iVar0 = func_13();
		iVar1 = Global_82576[iVar0 /*5*/];
		uVar2 = Global_69971.f_109[iVar1 /*4*/];
		if (iVar0 == -1) {
			if (Global_101700.f_8044) {
			}
			return;
		}
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 4)) {
			return;
		}
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 5)) {
			return;
		}
		gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 4);
		gameplay::set_bit(&Global_69950, 1);
		Global_69966 = uVar2;
		Global_69967 = gameplay::get_game_timer();
	}
}

// Position - 0x1869
int func_23(int iParam0) {
	switch (iParam0) {
	case 71: return 1;

	case 86: return 1;

	case 91: return 1;

	default: return 0;
	}
	return 0;
}

// Position - 0x18A7
bool func_24(int iParam0) {
	int iVar0;

	return false;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_18(iParam0);
		if (iVar0 > 3) {
			return false;
		}
		if (func_25(iVar0) != iParam0) {
			return false;
		}
		if (!gameplay::is_bit_set(Global_87678, iVar0)) {
			return false;
		}
		gameplay::clear_bit(&Global_87678, iVar0);
		return true;
	}
	return false;
}

// Position - 0x18FF
int func_25(int iParam0) {
	if (iParam0 > 3) {
		return 0;
	}
	if (iParam0 == func_14()) {
		return player::player_ped_id();
	}
	return Global_89302[func_26(iParam0)];
}

// Position - 0x1930
int func_26(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	else if (iParam0 == 2) {
		return 2;
	}
	else if (iParam0 == 1) {
		return 1;
	}
	else if (iParam0 == 145) {
		return 3;
	}
	return 4;
}

// Position - 0x196B
void func_27(int iParam0, int iParam1, int iParam2) {
	if (func_29() && func_30()) {
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
		func_28(0);
	}
}

// Position - 0x1A2F
void func_28(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_91491.f_20, 13);
	}
	else {
		gameplay::clear_bit(&Global_91491.f_20, 13);
	}
}

// Position - 0x1A58
bool func_29() {
	if (Global_91491 == 10 || Global_91491 == 9) {
		return true;
	}
	return false;
}

// Position - 0x1A7C
bool func_30() { return gameplay::is_bit_set(Global_91491.f_20, 13); }

// Position - 0x1A90
bool func_31(int iParam0, int iParam1) {
	int iVar0;

	return false;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_18(iParam0);
		if (iVar0 > 3) {
			return false;
		}
		if (func_25(iVar0) != iParam0) {
			return false;
		}
		if (gameplay::is_bit_set(Global_87678, iVar0)) {
			return false;
		}
		if (iParam1 == 0) {
			if (iParam0 == player::player_ped_id()) {
				return false;
			}
		}
		if (gameplay::is_bit_set(Global_87677, iVar0)) {
			weapon::set_ped_infinite_ammo(iParam0, 0, 0);
			entity::set_entity_load_collision_flag(iParam0, 0);
			gameplay::set_bit(&Global_87678, iVar0);
			return true;
		}
	}
	return false;
}

// Position - 0x1B16
bool func_32(int iParam0) {
	int iVar0;

	return false;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_18(iParam0);
		if (iVar0 > 3) {
			return false;
		}
		if (func_25(iVar0) != iParam0) {
			return false;
		}
		if (gameplay::is_bit_set(Global_87678, iVar0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x1B5F
bool func_33(int iParam0, int iParam1) {
	int iVar0;

	return false;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_18(iParam0);
		if (iVar0 > 3) {
			return false;
		}
		if (func_25(iVar0) != iParam0) {
			return false;
		}
		if (iParam1 == 0) {
			if (iParam0 == player::player_ped_id()) {
				return false;
			}
		}
		if (gameplay::is_bit_set(Global_87677, iVar0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x1BBB
void func_34() {
	iLocal_396 = 0;
	iLocal_456 = 0;
	player::set_player_wanted_level(player::player_id(), 0, 0);
	player::set_player_wanted_level_now(player::player_id(), 0);
	if (!cam::is_screen_faded_out()) {
		cam::do_screen_fade_out(0);
	}
	func_103();
	ui::clear_prints();
	func_102();
	func_101();
	func_36();
	if (!func_30()) {
		func_35();
	}
	cam::set_gameplay_cam_relative_heading(0f);
}

// Position - 0x1C10
void func_35() {
	switch (iLocal_28) {
	case 2:
		entity::set_entity_coords(player::player_ped_id(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 288.3586f);
		break;

	case 3:
		entity::set_entity_coords(player::player_ped_id(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 288.3586f);
		break;

	case 4:
		if (entity::does_entity_exist(iLocal_33)) {
			if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
				if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 0)) {
					ped::set_ped_into_vehicle(player::player_ped_id(), iLocal_33, -1);
				}
			}
		}
		break;

	case 5:
		if (entity::does_entity_exist(iLocal_33)) {
			if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
				if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 0)) {
					ped::set_ped_into_vehicle(player::player_ped_id(), iLocal_33, -1);
				}
			}
		}
		break;
	}
}

// Position - 0x1CED
void func_36() {
	switch (iLocal_28) {
	case 3:
		iLocal_418 = 0;
		iLocal_419 = 0;
		iLocal_420 = 0;
		func_97();
		if (func_96() && func_93(7f, 7f, 7f, 1)) {
			func_91();
			while (!func_90()) {
				system::wait(0);
			}
			iLocal_34 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
		}
		player::set_wanted_level_multiplier(0.01f);
		break;

	case 4:
		iLocal_418 = 0;
		iLocal_419 = 0;
		iLocal_420 = 0;
		func_97();
		if (entity::does_entity_exist(iLocal_33)) {
			if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
				entity::set_entity_coords(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
				entity::set_entity_heading(iLocal_33, 161.1163f);
			}
		}
		gameplay::clear_area(41f, -615f, 30f, 50f, 1, 1, 0, 0);
		break;

	case 5:
		iLocal_418 = 1;
		iLocal_419 = 1;
		iLocal_420 = 1;
		func_97();
		gameplay::clear_area(41f, -615f, 30f, 50f, 1, 1, 0, 0);
		if (entity::does_entity_exist(iLocal_33)) {
			if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
				entity::set_entity_coords(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
				entity::set_entity_heading(iLocal_33, 70.7778f);
			}
		}
		streaming::request_model(joaat("s_m_m_security_01"));
		while (!streaming::has_model_loaded(joaat("s_m_m_security_01"))) {
			system::wait(0);
		}
		if (!entity::does_entity_exist(iLocal_49)) {
			iLocal_49 = ped::create_ped(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
			streaming::set_model_as_no_longer_needed(joaat("s_m_m_security_01"));
			ped::set_ped_config_flag(iLocal_49, 324, 1);
		}
		break;
	}
}

// Position - 0x1E96
int func_37(vector3 vParam0, float fParam3) { return func_38(&Global_93635.f_2311, vParam0, fParam3, 0); }

// Position - 0x1EB0
int func_38(var *uParam0, vector3 vParam1, float fParam4, int iParam5) {
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	var uVar5;
	int iVar8;

	if (func_89(uParam0)) {
		if (func_88(vParam1, 0f, 0f, 0f, 0)) {
			vParam1 = {*uParam0};
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall")) {
			if (object::is_point_in_angled_area(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f,
												75.27323f, 6.5f, 0, 1)) {
				vParam1 = {-850.93f, 158.82f, 65.7f};
				fParam4 = 89.5f;
			}
		}
		if (func_87(uParam0)) {
			gameplay::clear_area(vParam1, 5f, 1, 0, 0, 0);
			func_86(vParam1, 5f, 0);
			iVar0 = vehicle::create_vehicle(uParam0->f_12.f_66, vParam1, fParam4, 1, 1);
			if (entity::does_entity_exist(iVar0)) {
				vVar1 = {entity::get_entity_coords(iVar0, 1)};
				if (system::vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f) {
					entity::set_entity_coords_no_offset(iVar0, vParam1, 0, 0, 1);
				}
				func_78(iVar0, &uParam0->f_12, 0, 1);
				bVar4 = true;
				if (vehicle::is_this_model_a_boat(uParam0->f_12.f_66) ||
					vehicle::_is_this_model_an_emergency_boat(uParam0->f_12.f_66)) {
					if (!water::test_probe_against_water(vParam1.x, vParam1.y, vParam1.z + 30f, vParam1.x, vParam1.y,
														 vParam1.z - 30f, &uVar5)) {
						bVar4 = false;
					}
				}
				if (bVar4) {
					vehicle::set_vehicle_on_ground_properly(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1) {
					if (iParam5) {
						if (vehicle::is_this_model_a_car(entity::get_entity_model(iVar0))) {
							func_77(uParam0->f_11, 1);
						}
						else if (vehicle::is_this_model_a_bike(entity::get_entity_model(iVar0))) {
							func_77(uParam0->f_11, 2);
						}
					}
					vehicle::_0xAB04325045427AAE(iVar0, 0);
					vehicle::_0x428BACCDF5E26EAD(iVar0, 0);
					vehicle::set_vehicle_has_strong_axles(iVar0, 1);
					func_76(iVar0, uParam0->f_11);
				}
				else if (!func_73(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10 &&
						 gameplay::are_strings_equal(script::get_this_script_name(), "startup_positioning")) {
					iVar8 = func_72(iVar0);
					if (iVar8 == -1) {
						uParam0->f_10 = 0;
					}
					else {
						func_65(iVar8);
					}
				}
				if (Global_91491 != 13 && Global_91491 != 10 && Global_91491 != 11 && Global_91491 != 12) {
					if (gameplay::get_hash_key(&Global_91491.f_3) == Global_69519) {
						if (uParam0->f_12.f_66 == Global_101700.f_31389.f_69[21 /*78*/].f_66) {
							func_62(24, 0);
							func_65(24);
						}
					}
				}
				if (uParam0->f_9 == 1) {
					func_39(iVar0, uParam0->f_11);
				}
				streaming::set_model_as_no_longer_needed(uParam0->f_12.f_66);
				vVar1 = {entity::get_entity_coords(iVar0, 1)};
			}
			return iVar0;
		}
	}
	return iVar0;
}

// Position - 0x2160
void func_39(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_44(iParam0)) {
		return;
	}
	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
		iVar0 = vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0);
		if (!entity::does_entity_exist(iVar0)) {
			iVar0 = vehicle::get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (entity::does_entity_exist(iVar0) && !ped::is_ped_injured(iVar0)) {
			if (entity::get_entity_model(iVar0) == joaat("player_zero")) {
				iParam1 = 0;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_one")) {
				iParam1 = 1;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_two")) {
				iParam1 = 2;
			}
		}
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		iVar2 = 0;
		while (iVar2 < 2) {
			if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66) {
				if (!gameplay::is_string_null_or_empty(
						&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
					if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
													&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66) {
			if (!gameplay::is_string_null_or_empty(&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
				if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
												&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_40(iParam0, &Global_101700.f_31389.f_5510);
}

// Position - 0x2362
void func_40(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_43(uParam1);
		uParam1->f_66 = entity::get_entity_model(iParam0);
		StringCopy(&uParam1->f_1, vehicle::get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = vehicle::get_vehicle_number_plate_text_index(iParam0);
		vehicle::get_vehicle_colours(iParam0, &uParam1->f_5, &uParam1->f_6);
		vehicle::get_vehicle_extra_colours(iParam0, &uParam1->f_7, &uParam1->f_8);
		vehicle::get_vehicle_tyre_smoke_color(iParam0, &uParam1->f_62, &uParam1->f_63, &uParam1->f_64);
		uParam1->f_65 = vehicle::get_vehicle_window_tint(iParam0);
		uParam1->f_67 = vehicle::get_vehicle_livery(iParam0);
		uParam1->f_69 = vehicle::get_vehicle_wheel_type(iParam0);
		uParam1->f_70 = vehicle::get_vehicle_door_lock_status(iParam0);
		vehicle::get_vehicle_custom_secondary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		vehicle::_get_vehicle_neon_lights_colour(iParam0, &uParam1->f_74, &uParam1->f_75, &uParam1->f_76);
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 2)) {
			gameplay::set_bit(&uParam1->f_77, 28);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 3)) {
			gameplay::set_bit(&uParam1->f_77, 29);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 30);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 1)) {
			gameplay::set_bit(&uParam1->f_77, 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			uParam1->f_65 = 0;
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			uParam1->f_68 = vehicle::get_convertible_roof_state(iParam0);
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (vehicle::_vehicle_has_landing_gear(iParam0)) {
				switch (vehicle::get_landing_gear_state(iParam0)) {
				case 2:
				case 0:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::set_bit(&uParam1->f_77, 22);
					break;

				case 3:
				case 1:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::clear_bit(&uParam1->f_77, 22);
					break;

				case 4: gameplay::set_bit(&uParam1->f_77, 23); break;
				}
			}
			else {
				gameplay::set_bit(&uParam1->f_77, 23);
			}
		}
		if (!vehicle::get_vehicle_tyres_can_burst(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 9);
		}
		if (vehicle::is_vehicle_stolen(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 10);
		}
		if (vehicle::get_is_vehicle_primary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 13);
			vehicle::get_vehicle_custom_primary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		}
		if (vehicle::get_is_vehicle_secondary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 12);
		}
		func_42(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (graphics::_does_vehicle_have_decal(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 11);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 11);
		}
		if (decorator::decor_exist_on(iParam0, "IgnoredByQuickSave") &&
			decorator::decor_get_bool(iParam0, "IgnoredByQuickSave")) {
			gameplay::set_bit(&uParam1->f_77, 27);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 27);
		}
	}
}

// Position - 0x260C
int func_41(int iParam0) {
	switch (iParam0) {
	case 1: return 0;

	case 2: return 1;

	case 3: return 2;

	case 4: return 3;

	case 5: return 4;

	case 6: return 5;

	case 7: return 6;

	case 8: return 7;

	case 9: return 8;

	case 10: return 24;

	case 11: return 25;

	case 12: return 26;
	}
	return 0;
}

// Position - 0x26BC
int func_42(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			(*uParam1)[iVar0] = 0;
			if (vehicle::is_toggle_mod_on(*iParam0, iVar1)) {
				(*uParam1)[iVar0] = 1;
			}
		}
		else {
			(*uParam1)[iVar0] = vehicle::get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23) {
				(*uParam2)[0] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24) {
				(*uParam2)[1] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x2796
void func_43(var *uParam0) {
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

// Position - 0x2846
int func_44(int iParam0) {
	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0) || func_60(iParam0, 0, 0) ||
		func_60(iParam0, 1, 0) || func_60(iParam0, 2, 0) || func_59(iParam0) != 145 || func_58(iParam0) ||
		func_57(iParam0) || func_56(iParam0) || func_55(iParam0) || !func_45(entity::get_entity_model(iParam0))) {
		if (func_57(iParam0)) {
		}
		if (func_57(iParam0)) {
		}
		if (func_60(iParam0, 0, 0)) {
		}
		if (func_60(iParam0, 1, 0)) {
		}
		if (func_60(iParam0, 2, 0)) {
		}
		if (func_59(iParam0) != 145) {
		}
		return 0;
	}
	return 1;
}

// Position - 0x2923
int func_45(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	if (!func_46(iParam0, 0)) {
		return 0;
	}
	if (vehicle::is_this_model_a_boat(iParam0) || vehicle::is_this_model_a_plane(iParam0) ||
		vehicle::is_this_model_a_heli(iParam0) || vehicle::is_this_model_a_train(iParam0)) {
		return 0;
	}
	switch (iParam0) {
	case joaat("bus"):
	case joaat("stretch"):
	case joaat("barracks"):
	case joaat("armytanker"):
	case joaat("rhino"):
	case joaat("armytrailer"):
	case joaat("barracks2"):
	case joaat("flatbed"):
	case joaat("ripley"):
	case joaat("towtruck"):
	case joaat("towtruck2"):
	case joaat("airbus"):
	case joaat("coach"):
	case joaat("rentalbus"):
	case joaat("tourbus"):
	case joaat("firetruk"):
	case joaat("pbus"):
	case joaat("trash"):
	case joaat("benson"):
	case joaat("boattrailer"):
	case joaat("biff"):
	case joaat("hauler"):
	case joaat("docktrailer"):
	case joaat("phantom"):
	case joaat("pounder"):
	case joaat("tractor2"):
	case joaat("bulldozer"):
	case joaat("handler"):
	case joaat("tiptruck"):
	case joaat("cutter"):
	case joaat("dump"):
	case joaat("mixer"):
	case joaat("mixer2"):
	case joaat("rubble"):
	case joaat("scrap"):
	case joaat("tiptruck2"):
	case joaat("camper"):
	case joaat("taco"):
	case joaat("boxville"):
	case joaat("boxville2"):
	case joaat("boxville3"):
	case joaat("journey"):
	case joaat("mule"):
	case joaat("mule2"):
	case joaat("police"):
	case joaat("police2"):
	case joaat("police3"):
	case joaat("police4"):
	case joaat("policeb"):
	case joaat("policeold1"):
	case joaat("policeold2"):
	case joaat("policet"):
	case joaat("taxi"):
	case joaat("submersible"):
	case joaat("submersible2"):
	case joaat("monster"): return 0;
	}
	return 1;
}

// Position - 0x2AD4
int func_46(int iParam0, int iParam1) {
	int iVar0;
	struct<2> Var1;

	if (iParam0 == 0) {
		return 0;
	}
	if (!streaming::is_model_a_vehicle(iParam0)) {
		return 0;
	}
	if (iParam0 == joaat("dominator2") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("buffalo3") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("gauntlet2") && !network::network_is_game_in_progress() || iParam0 == joaat("blimp2") ||
		iParam0 == joaat("stalion2") && !network::network_is_game_in_progress() || iParam0 == joaat("blista3")) {
		if (!func_54()) {
			return 0;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < dlc1::get_num_dlc_vehicles()) {
			if (dlc1::get_dlc_vehicle_data(iVar0, &Var1)) {
				if (iParam0 == Var1.f_1) {
					if (dlc1::_is_dlc_data_empty(Var1)) {
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp")) {
		if (!func_53() && !func_52() && !func_51() && !func_50() && !func_54()) {
			return 0;
		}
	}
	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion")) {
		if (gameplay::is_durango_version() || gameplay::is_pc_version() || gameplay::is_orbis_version()) {
		}
		else if (!func_51()) {
			return 0;
		}
	}
	if (iParam1) {
		if (!func_49(iParam0)) {
			return 0;
		}
	}
	if (!func_47(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x2C62
int func_47(int iParam0) {
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_48()) {
		return 1;
	}
	unk3::_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4) {
		return 1;
	}
	switch (iParam0) {
	case joaat("dune4"): StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64); break;

	case joaat("voltic2"): StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64); break;

	case joaat("ruiner2"): StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64); break;

	case joaat("phantom2"): StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64); break;

	case joaat("technical2"): StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64); break;

	case joaat("boxville5"): StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64); break;

	case joaat("wastelander"): StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64); break;

	case joaat("blazer5"): StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64); break;

	default: return 1;
	}
	if (!mobile::_network_shop_is_item_unlocked(&cVar2)) {
		return 0;
	}
	return 1;
}

// Position - 0x2D2E
int func_48() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0x2D42
int func_49(int iParam0) {
	int iVar0;
	int iVar1;

	if (Global_2482093) {
		return 1;
	}
	iVar0 = 1;
	iVar1 = network::_get_posix_time();
	if (iParam0 == joaat("btype3")) {
		if (!Global_262145.f_5506 && !Global_262145.f_11530 && iVar1 < Global_262145.f_11531) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3")) {
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2")) {
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2")) {
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5")) {
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2")) {
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3")) {
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo")) {
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70")) {
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811")) {
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400")) {
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso")) {
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger")) {
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender")) {
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b")) {
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis")) {
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck")) {
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2")) {
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos")) {
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle")) {
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck")) {
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2")) {
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus")) {
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava")) {
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx")) {
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2")) {
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2")) {
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2")) {
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3")) {
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler")) {
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade")) {
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea")) {
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey")) {
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus")) {
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb")) {
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2")) {
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex")) {
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro")) {
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera")) {
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor")) {
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2")) {
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4")) {
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6")) {
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2")) {
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane")) {
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3")) {
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio")) {
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger")) {
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus")) {
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez")) {
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike")) {
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2")) {
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2")) {
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4")) {
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5")) {
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2")) {
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2")) {
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5")) {
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander")) {
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5")) {
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2")) {
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3")) {
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous")) {
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2")) {
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy")) {
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2")) {
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr")) {
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2")) {
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb")) {
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2")) {
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero")) {
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2")) {
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator")) {
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter")) {
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2")) {
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta")) {
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1")) {
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2")) {
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston")) {
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2")) {
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796) {
			iVar0 = 0;
		}
	}
	return iVar0;
}

// Position - 0x3A85
int func_50() { return 0; }

// Position - 0x3A8E
int func_51() { return 1; }

// Position - 0x3A97
int func_52() { return 1; }

// Position - 0x3AA0
int func_53() {
	if (dlc2::is_dlc_present(-1226939934)) {
		return 1;
	}
	return 0;
}

// Position - 0x3AB9
bool func_54() {
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
				return true;
			}
		}
	}
	if (Global_139179 == 2) {
		return true;
	}
	else if (Global_139179 == 3) {
		return false;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x3B74
int func_55(int iParam0) {
	int iVar0;
	char *sVar1;

	iVar0 = entity::get_entity_model(iParam0);
	sVar1 = vehicle::get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && gameplay::are_strings_equal(sVar1, "LAMAR G ")) {
		return 1;
	}
	if (!func_46(iVar0, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x3BBA
int func_56(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(Global_89185[iVar0])) {
			if (Global_89185[iVar0] == iParam0) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x3BF5
bool func_57(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar0 = 0;
		while (iVar0 < 9) {
			if (entity::does_entity_exist(Global_89155[iVar0]) &&
				vehicle::is_vehicle_driveable(Global_89155[iVar0], 0)) {
				if (Global_89155[iVar0] == iParam0 &&
					entity::get_entity_model(Global_89155[iVar0]) == entity::get_entity_model(iParam0)) {
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0x3C71
int func_58(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(Global_68531.f_484[24])) {
		if (iParam0 == Global_68531.f_484[24]) {
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iVar0 != 24 && iVar0 != 21 && iVar0 != 22 && iVar0 != 23 && iVar0 != 27 && iVar0 != 30 && iVar0 != 33 &&
				iVar0 != 28 && iVar0 != 31 && iVar0 != 34 && iVar0 != 26 && iVar0 != 29 && iVar0 != 32) {
				if (iParam0 == Global_68531.f_484[iVar0]) {
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x3D59
int func_59(int iParam0) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 145;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

// Position - 0x3DBC
bool func_60(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_61(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x3E2D
bool func_61(int iParam0, int iParam1, char *sParam2, int *iParam3) {
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

// Position - 0x3F05
void func_62(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_64(iParam0, 0)) {
			func_63(iParam0, 1, 0);
			func_63(iParam0, 2, 0);
			func_63(iParam0, 3, 0);
			func_63(iParam0, 4, 0);
			func_63(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_63(iParam0, 0, 0);
	}
}

// Position - 0x3F62
void func_63(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x3F9D
int func_64(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x3FC0
void func_65(int iParam0) {
	bool bVar0;

	if (iParam0 == -1) {
		return;
	}
	if (func_69(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			bVar0 = true;
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (vehicle::is_vehicle_driveable(Global_68531.f_139[iParam0], 0)) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), Global_68531.f_139[iParam0], 0)) {
						bVar0 = false;
					}
				}
			}
			if (bVar0) {
				entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
				vehicle::delete_vehicle(&Global_68531.f_139[iParam0]);
			}
		}
		Global_68531[iParam0] = 1;
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			if (iParam0 == 24 && func_64(iParam0, 0) && Global_69440.f_66 == 0 &&
				Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] != 0 &&
				Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] > 3 &&
				(!func_67(0, Global_68531.f_555[0 /*21*/].f_12) || !func_67(1, Global_68531.f_555[0 /*21*/].f_12))) {
				func_66(&Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/], &Global_69440);
				Global_69518 = Global_101700.f_31389.f_5591;
			}
			func_62(iParam0, 0);
		}
	}
}

// Position - 0x4134
void func_66(var *uParam0, var *uParam1) {
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = {uParam0->f_1};
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = {uParam0->f_9};
	uParam1->f_59 = {uParam0->f_59};
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

// Position - 0x4200
int func_67(int iParam0, int iParam1) {
	int iVar0;

	switch (iParam1) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iParam0 < 0 || iParam0 >= func_68(&Global_101700.f_31389.f_5038[iVar0 /*157*/])) {
		return 0;
	}
	return func_46(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

// Position - 0x4272
int func_68(var *uParam0) { return *uParam0; }

// Position - 0x427D
bool func_69(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&uParam0->f_5, "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = {0f, 0f, 0f};
	uParam0->f_18 = {0f, 0f, 0f};
	switch (iParam1) {
	case 0:
		*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
		uParam0->f_3 = 157.5705f;
		uParam0->f_4 = func_70(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 1:
		*uParam0 = {1970.943f, 3801.684f, 31.1396f};
		uParam0->f_3 = 301.3964f;
		uParam0->f_4 = func_70(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 2:
		*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
		uParam0->f_3 = 180.0808f;
		uParam0->f_4 = func_70(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 3:
		*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
		uParam0->f_3 = 141.6114f;
		uParam0->f_4 = func_70(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 4:
		*uParam0 = {10.9281f, 545.669f, 174.7951f};
		uParam0->f_3 = 61.392f;
		uParam0->f_4 = func_70(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 5:
		*uParam0 = {6.1093f, 544.9742f, 174.2835f};
		uParam0->f_3 = 92.1548f;
		uParam0->f_4 = func_70(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 6:
		*uParam0 = {1981.416f, 3808.131f, 31.1384f};
		uParam0->f_3 = 117.2557f;
		uParam0->f_4 = func_70(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 7:
		*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
		uParam0->f_3 = 35.7505f;
		uParam0->f_4 = func_70(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 8:
		*uParam0 = {148.2868f, -1270.569f, 28.2252f};
		uParam0->f_3 = 208.4685f;
		uParam0->f_4 = func_70(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 9:
		*uParam0 = {1459.509f, -1380.45f, 78.3259f};
		uParam0->f_3 = 99.6211f;
		uParam0->f_4 = joaat("scorcher");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 10:
		*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
		uParam0->f_3 = 98.3867f;
		uParam0->f_4 = joaat("seashark");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 11:
		*uParam0 = {353.0926f, 3577.593f, 32.351f};
		uParam0->f_3 = 16.6205f;
		uParam0->f_4 = joaat("duster");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 12:
		uParam0->f_14 = 0;
		*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
		uParam0->f_3 = 329.1082f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 13:
		uParam0->f_14 = 1;
		*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
		uParam0->f_3 = 329.5137f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 14:
		uParam0->f_14 = 2;
		*uParam0 = {1735.586f, 3294.531f, 40.1651f};
		uParam0->f_3 = 194.9525f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 15:
		uParam0->f_14 = 3;
		*uParam0 = {-846.27f, -1363.19f, 0.22f};
		uParam0->f_3 = 108.78f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 16:
		uParam0->f_14 = 4;
		*uParam0 = {-849.47f, -1354.99f, 0.24f};
		uParam0->f_3 = 109.84f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 17:
		uParam0->f_14 = 5;
		*uParam0 = {-852.47f, -1346.2f, 0.21f};
		uParam0->f_3 = 108.76f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 18:
		uParam0->f_14 = 6;
		*uParam0 = {-745.857f, -1433.904f, 4.0005f};
		uParam0->f_12 = 0;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-756.2952f, -1441.609f, 2.9184f};
		uParam0->f_18 = {-738.0606f, -1423.068f, 8.2835f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 19:
		uParam0->f_14 = 7;
		*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
		uParam0->f_12 = 1;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-772.8158f, -1459.957f, 3.2894f};
		uParam0->f_18 = {-754.3353f, -1440.836f, 8.3334f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 20:
		uParam0->f_14 = 8;
		*uParam0 = {1769.3f, 3244f, 41.1f};
		uParam0->f_12 = 2;
		uParam0->f_13 = 360;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 21:
		uParam0->f_14 = 9;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 22:
		uParam0->f_14 = 10;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 1;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 23:
		uParam0->f_14 = 11;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 2;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 26:
	case 27:
	case 28:
		iVar1 = iParam1 - 26;
		uParam0->f_14 = 12 + iVar1;
		*uParam0 = {196.2794f, -1020.479f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 29:
	case 30:
	case 31:
		iVar1 = iParam1 - 29;
		uParam0->f_14 = 15 + iVar1;
		*uParam0 = {199.8872f, -1020.048f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 32:
	case 33:
	case 34:
		iVar1 = iParam1 - 32;
		uParam0->f_14 = 18 + iVar1;
		*uParam0 = {203.6006f, -1019.776f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 24:
		uParam0->f_14 = 21;
		*uParam0 = {0f, 0f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = 0;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 25:
		uParam0->f_14 = 22;
		*uParam0 = {723.2515f, -632.0496f, 27.1484f};
		uParam0->f_3 = 12.9316f;
		uParam0->f_4 = joaat("tailgater");
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 35:
		*uParam0 = {-51.23f, 3111.9f, 24.95f};
		uParam0->f_3 = 46.78f;
		uParam0->f_4 = joaat("proptrailer");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 36:
		*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
		uParam0->f_3 = 308.0596f;
		uParam0->f_4 = joaat("bjxl");
		uParam0->f_10 = 126;
		uParam0->f_11 = 126;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 37:
		*uParam0 = {-2892.93f, 3192.37f, 11.66f};
		uParam0->f_3 = -132.35f;
		uParam0->f_4 = joaat("velum");
		uParam0->f_10 = 157;
		uParam0->f_11 = 157;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 38:
		*uParam0 = {1744.308f, 3270.673f, 40.2076f};
		uParam0->f_3 = 125f;
		uParam0->f_4 = joaat("cargobob3");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 39:
		*uParam0 = {1751.44f, 3322.643f, 42.1855f};
		uParam0->f_3 = 268.134f;
		uParam0->f_4 = joaat("submersible");
		gameplay::set_bit(&uParam0->f_9, 23);
		iVar0 = 1;
		break;

	case 41:
		*uParam0 = {1377.104f, -2076.2f, 52f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("towtruck");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 40:
		*uParam0 = {1380.42f, -2072.77f, 51.7607f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("trash");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 42:
		*uParam0 = {1359.389f, 3618.441f, 33.8907f};
		uParam0->f_3 = 108.2337f;
		uParam0->f_4 = joaat("barracks");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 43:
		*uParam0 = {693.1154f, -1018.155f, 21.6387f};
		uParam0->f_3 = 177.6454f;
		uParam0->f_4 = joaat("firetruk");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 44:
		*uParam0 = {-73.6963f, 495.124f, 143.5226f};
		uParam0->f_3 = 155.5994f;
		uParam0->f_4 = joaat("vacca");
		iVar0 = 1;
		break;

	case 45:
		*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
		uParam0->f_3 = 294.993f;
		uParam0->f_4 = joaat("surano");
		iVar0 = 1;
		break;

	case 46:
		*uParam0 = {533.9048f, -169.2469f, 53.7005f};
		uParam0->f_3 = 1.2998f;
		uParam0->f_4 = joaat("tornado2");
		iVar0 = 1;
		break;

	case 47:
		*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
		uParam0->f_3 = 267.7392f;
		uParam0->f_4 = joaat("superd");
		iVar0 = 1;
		break;

	case 48:
		*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
		uParam0->f_3 = 350.7697f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 49:
		*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
		uParam0->f_3 = 48.9311f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 50:
		*uParam0 = {-1062.076f, -226.7637f, 37.157f};
		uParam0->f_3 = 234.2767f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 51:
		*uParam0 = {68.16914f, -1558.958f, 29.46904f};
		uParam0->f_3 = 49.90575f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 52:
		*uParam0 = {589.4399f, 2736.708f, 42.03316f};
		uParam0->f_3 = -175.7105f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 53:
		*uParam0 = {-488.774f, -344.5721f, 34.36356f};
		uParam0->f_3 = 82.4042f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 54:
		*uParam0 = {288.8808f, -585.4728f, 43.15428f};
		uParam0->f_3 = -20.80707f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 55:
		*uParam0 = {304.8294f, -1383.674f, 31.67744f};
		uParam0->f_3 = -41.11603f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 56:
		*uParam0 = {1126.194f, -1481.486f, 34.7016f};
		uParam0->f_3 = -91.43369f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 57:
		*uParam0 = {-1598.36f, 5252.84f, 0f};
		uParam0->f_3 = 28.14f;
		uParam0->f_4 = joaat("submersible");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 58:
		*uParam0 = {-1602.62f, 5260.37f, 0.86f};
		uParam0->f_3 = 25.32f;
		uParam0->f_4 = joaat("dinghy");
		uParam0->f_13 = 404;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 59:
		*uParam0 = {2116.571f, 4763.279f, 40.1596f};
		uParam0->f_3 = 198.723f;
		uParam0->f_4 = joaat("bfinjection");
		iVar0 = 1;
		break;

	case 60:
		*uParam0 = {1133.21f, 120.2f, 80.9f};
		uParam0->f_3 = 134.4f;
		if (func_54()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 61:
		*uParam0 = {-806.31f, -2679.65f, 13.9f};
		uParam0->f_3 = 150.54f;
		if (func_54()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 62:
		*uParam0 = {1985.85f, 3828.96f, 31.98f};
		uParam0->f_3 = -16.58f;
		uParam0->f_4 = joaat("blazer3");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 63:
		*uParam0 = {3870.75f, 4464.67f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = joaat("submersible2");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		gameplay::set_bit(&uParam0->f_9, 30);
		iVar0 = 1;
		break;

	case 64:
		*uParam0 = {1257.729f, -2564.474f, 41.717f};
		uParam0->f_3 = 284.5561f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 65:
		*uParam0 = {643.2823f, 3014.152f, 42.2733f};
		uParam0->f_3 = 128.0554f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 66:
		*uParam0 = {38.9368f, 850.8677f, 196.3f};
		uParam0->f_3 = 311.6813f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 67:
		*uParam0 = {1333.875f, 4262.226f, 30.78f};
		uParam0->f_3 = 262.5293f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;
	}
	if (gameplay::is_bit_set(uParam0->f_9, 10)) {
		uParam0->f_4 = Global_101700.f_31389.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14) {
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") ||
				uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2")) {
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_88(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/]};
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f) {
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (gameplay::is_bit_set(uParam0->f_9, 19)) {
		if (!func_88(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (gameplay::is_bit_set(uParam0->f_9, 20)) {
		if (!func_88(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

// Position - 0x5974
int func_70(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_17(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_71(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x59B6
void func_71(int iParam0, var *uParam1, int iParam2) {
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0) {
	case 0:
		iVar0 = joaat("tailgater");
		if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131]) {
			iVar0 = joaat("premier");
		}
		switch (iVar0) {
		case joaat("tailgater"):
			*uParam1 = iVar0;
			uParam1->f_2 = 3f;
			uParam1->f_4 = 0;
			uParam1->f_9 = 1;
			uParam1->f_11[0] = 1;
			StringCopy(&uParam1->f_27, "5MDS003", 16);
			break;

		case joaat("premier"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14.9f;
			uParam1->f_5 = 43;
			uParam1->f_6 = 43;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_9 = 0;
			StringCopy(&uParam1->f_27, "880HS955", 16);
			break;
		}
		break;

	case 2:
		iVar0 = joaat("bodhi2");
		switch (iVar0) {
		case joaat("bodhi2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14f;
			uParam1->f_5 = 32;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "BETTY 32", 16);
			if (Global_101700.f_8044.f_99.f_58[119]) {
				uParam1->f_11[1] = 1;
			}
			break;
		}
		break;

	case 1:
		if (iParam2 == 1) {
			iVar0 = joaat("buffalo2");
		}
		else if (iParam2 == 2) {
			iVar0 = joaat("bagger");
		}
		else if (Global_101700.f_8044.f_99.f_58[118]) {
			iVar0 = joaat("bagger");
		}
		else {
			iVar0 = joaat("buffalo2");
		}
		switch (iVar0) {
		case joaat("bagger"):
			*uParam1 = iVar0;
			uParam1->f_2 = 6f;
			uParam1->f_5 = 53;
			uParam1->f_6 = 0;
			uParam1->f_7 = 59;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "FC88", 16);
			break;

		case joaat("buffalo2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 0f;
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_10 = 1;
			StringCopy(&uParam1->f_27, "FC1988", 16);
			uParam1->f_11[0] = 1;
			uParam1->f_11[1] = 1;
			uParam1->f_11[2] = 1;
			uParam1->f_11[3] = 1;
			uParam1->f_11[4] = 1;
			uParam1->f_11[5] = 1;
			uParam1->f_11[6] = 1;
			uParam1->f_11[7] = 1;
			uParam1->f_11[8] = 1;
			break;
		}
		break;

	default: break;
	}
}

// Position - 0x5C12
int func_72(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0]) &&
			!entity::is_entity_dead(Global_68531.f_484[iVar0], 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[iVar0], 0)) {
			vehicle::get_vehicle_colours(iParam0, &iVar1, &iVar2);
			vehicle::get_vehicle_colours(Global_68531.f_484[iVar0], &iVar3, &iVar4);
			if (entity::get_entity_model(iParam0) == entity::get_entity_model(Global_68531.f_484[iVar0]) &&
				vehicle::get_vehicle_livery(iParam0) == vehicle::get_vehicle_livery(Global_68531.f_484[iVar0]) &&
				iVar1 == iVar2 && iVar3 == iVar4) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x5CD5
int func_73(int iParam0, vector3 vParam1, bool bParam4) {
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;

	iVar0 = entity::get_entity_model(iParam0);
	switch (iVar0) {
	case joaat("cargobob"):
		if (func_75(iParam0, Global_68531.f_139[38], 0)) {
			func_65(38);
			return 1;
		}
		break;

	case joaat("firetruk"):
		if (func_75(iParam0, Global_68531.f_139[43], 1)) {
			func_65(43);
			return 1;
		}
		break;

	case joaat("cuban800"):
		iVar5 = ped::get_ped_nearby_vehicles(player::player_ped_id(), &uVar1);
		iVar6 = 0;
		while (iVar6 <= iVar5 - 1) {
			if (func_75(iParam0, uVar1[iVar6], 1) &&
				func_74(entity::get_entity_coords(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0)) {
				if (!bParam4 || func_88(vParam1, 0f, 0f, 0f, 0) ||
					gameplay::get_distance_between_coords(entity::get_entity_coords(iParam0, 1),
														  entity::get_entity_coords(uVar1[iVar6], 1), 1) < 10f) {
					vehicle::delete_vehicle(&iParam0);
					return 1;
				}
				else {
					return 0;
				}
			}
			iVar6++;
		}
		break;

	case joaat("luxor2"):
		if (entity::does_entity_exist(Global_68531.f_484[14]) && vehicle::is_vehicle_driveable(iParam0, 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[14], 0)) {
			if (entity::get_entity_model(Global_68531.f_484[14]) == joaat("luxor2") &&
				vehicle::get_vehicle_livery(iParam0) == vehicle::get_vehicle_livery(Global_68531.f_484[14])) {
				func_65(14);
				return 1;
			}
		}
		break;

	case joaat("swift2"):
		if (entity::does_entity_exist(Global_68531.f_484[20]) && vehicle::is_vehicle_driveable(iParam0, 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[20], 0)) {
			if (entity::get_entity_model(Global_68531.f_484[20]) == joaat("swift2") &&
				vehicle::get_vehicle_livery(iParam0) == vehicle::get_vehicle_livery(Global_68531.f_484[20])) {
				func_65(20);
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x5EDD
int func_74(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
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

// Position - 0x5F58
bool func_75(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (entity::does_entity_exist(iParam1) && !entity::is_entity_dead(iParam1, 0) &&
		vehicle::is_vehicle_driveable(iParam1, 0)) {
		if (iParam2) {
			vehicle::get_vehicle_colours(iParam0, &iVar0, &iVar1);
			vehicle::get_vehicle_colours(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3) {
				return true;
			}
		}
		else {
			return true;
		}
	}
	return false;
}

// Position - 0x5FB9
void func_76(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9) {
		if (!entity::does_entity_exist(Global_89155[iVar0])) {
			Global_89155[iVar0] = iParam0;
			Global_89165[iVar0] = iParam1;
			Global_89175[iVar0] = entity::get_entity_model(iParam0);
			if (vehicle::is_this_model_a_car(Global_89175[iVar0])) {
				Global_89203[iParam1 /*3*/][0] = -1;
			}
			else {
				Global_89203[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8) {
		}
		iVar0++;
	}
}

// Position - 0x603B
void func_77(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (iParam0 == 145 || Global_89165[iVar0] == iParam0) {
				if (iParam1 == 0 || entity::get_entity_model(Global_89155[iVar0]) == func_70(iParam0, iParam1)) {
					if (!ped::is_ped_in_vehicle(player::player_ped_id(), Global_89155[iVar0], 0)) {
						entity::set_entity_as_mission_entity(Global_89155[iVar0], 0, 1);
						vehicle::delete_vehicle(&Global_89155[iVar0]);
						Global_89165[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x60D9
void func_78(int iParam0, var *uParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (gameplay::get_hash_key(&uParam1->f_1) != 0) {
			vehicle::set_vehicle_number_plate_text(iParam0, &uParam1->f_1);
		}
		if (*uParam1 >= 0 && *uParam1 < vehicle::get_number_of_vehicle_number_plates()) {
			vehicle::set_vehicle_number_plate_text_index(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign")) {
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco")) {
			iVar0 = 1;
			if (gameplay::is_bit_set(uParam1->f_77, func_41(iVar0 + 1))) {
			}
			else {
				gameplay::set_bit(&uParam1->f_77, func_41(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2")) {
			iVar1 = 1;
			if (gameplay::is_bit_set(uParam1->f_77, func_41(iVar1 + 1))) {
			}
			else {
				gameplay::set_bit(&uParam1->f_77, func_41(iVar1 + 1));
			}
		}
		if (gameplay::is_bit_set(uParam1->f_77, 13)) {
			vehicle::set_vehicle_custom_primary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else {
			vehicle::clear_vehicle_custom_primary_colour(iParam0);
		}
		if (gameplay::is_bit_set(uParam1->f_77, 12)) {
			vehicle::set_vehicle_custom_secondary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else {
			vehicle::clear_vehicle_custom_secondary_colour(iParam0);
		}
		vehicle::set_vehicle_colours(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0) {
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0) {
			uParam1->f_8 = 0;
		}
		vehicle::set_vehicle_extra_colours(iParam0, uParam1->f_7, uParam1->f_8);
		if (gameplay::is_bit_set(uParam1->f_77, 15) || func_85(iParam0) ||
			uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0)
			&&func_84() {
				uParam1->f_62 = 0;
				uParam1->f_63 = 0;
				uParam1->f_64 = 0;
			}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0) {
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		vehicle::set_vehicle_tyre_smoke_color(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			vehicle::set_vehicle_window_tint(iParam0, 0);
		}
		else {
			vehicle::set_vehicle_window_tint(iParam0, 0);
			vehicle::set_vehicle_window_tint(iParam0, uParam1->f_65);
		}
		vehicle::set_vehicle_tyres_can_burst(iParam0, !gameplay::is_bit_set(uParam1->f_77, 9));
		if (iParam2) {
			vehicle::set_vehicle_doors_locked(iParam0, uParam1->f_70);
		}
		vehicle::_set_vehicle_neon_lights_colour(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 2, gameplay::is_bit_set(uParam1->f_77, 28));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 3, gameplay::is_bit_set(uParam1->f_77, 29));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 0, gameplay::is_bit_set(uParam1->f_77, 30));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 1, gameplay::is_bit_set(uParam1->f_77, 31));
		vehicle::set_vehicle_is_stolen(iParam0, gameplay::is_bit_set(uParam1->f_77, 10));
		if (vehicle::get_vehicle_livery_count(iParam0) > 1 && uParam1->f_67 >= 0) {
			vehicle::set_vehicle_livery(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255) {
			if (!vehicle::is_this_model_a_bicycle(entity::get_entity_model(iParam0))) {
				if (vehicle::is_this_model_a_bike(entity::get_entity_model(iParam0))) {
					if (uParam1->f_69 == 6) {
						func_83(iParam0, uParam1->f_69);
					}
				}
				else {
					func_83(iParam0, uParam1->f_69);
				}
			}
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5) {
				vehicle::raise_convertible_roof(iParam0, 1);
			}
			else {
				vehicle::lower_convertible_roof(iParam0, 1);
			}
		}
		if (iParam3) {
			func_79(&iParam0, &uParam1->f_9, &uParam1->f_59);
		}
		if (!vehicle::is_this_model_a_heli(uParam1->f_66) && !vehicle::is_this_model_a_boat(uParam1->f_66)) {
			iVar2 = 0;
			while (iVar2 <= 11) {
				if (gameplay::is_bit_set(uParam1->f_77, func_41(iVar2 + 1))) {
					if (!vehicle::is_vehicle_extra_turned_on(iParam0, iVar2 + 1)) {
						vehicle::set_vehicle_extra(iParam0, iVar2 + 1, 0);
					}
				}
				else if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar2 + 1)) {
					vehicle::set_vehicle_extra(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if (entity::get_entity_model(iParam0) == joaat("sheava") ||
			entity::get_entity_model(iParam0) == joaat("omnis") || entity::get_entity_model(iParam0) == joaat("le7b")) {
			if (vehicle::get_vehicle_mod(iParam0, 0) == -1) {
				vehicle::set_vehicle_extra(iParam0, 1, 0);
			}
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (!gameplay::is_bit_set(uParam1->f_77, 23)) {
				if (gameplay::is_bit_set(uParam1->f_77, 22)) {
					vehicle::control_landing_gear(iParam0, 2);
				}
				else {
					vehicle::control_landing_gear(iParam0, 3);
				}
			}
			else {
				vehicle::control_landing_gear(iParam0, 4);
			}
		}
		if (gameplay::is_bit_set(uParam1->f_77, 27)) {
			decorator::decor_set_bool(iParam0, "IgnoredByQuickSave", 1);
		}
		else {
			decorator::decor_set_bool(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

// Position - 0x6585
int func_79(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	vehicle::set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			vehicle::toggle_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (vehicle::get_vehicle_mod(*iParam0, iVar1) != (*uParam1)[iVar0] - 1) {
			vehicle::remove_vehicle_mod(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0) {
				if (iVar0 == 23) {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24) {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, (*uParam2)[1] > 0);
				}
				else {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_82(entity::get_entity_model(*iParam0), 1) &&
		vehicle::get_vehicle_mod(*iParam0, 24) != func_81(*iParam0, (*uParam1)[38] - 1)) {
		vehicle::set_vehicle_mod(*iParam0, 24, func_81(*iParam0, (*uParam1)[38] - 1), 0);
	}
	if (func_80(*iParam0)) {
		vehicle::set_vehicle_strong(*iParam0, 1);
		vehicle::set_vehicle_has_strong_axles(*iParam0, 1);
	}
	return 1;
}

// Position - 0x66FD
bool func_80(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0) &&
		vehicle::get_num_mod_kits(iParam0) > 0) {
		vehicle::set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49) {
			iVar1 = iVar0;
			if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			}
			else if (vehicle::get_vehicle_mod(iParam0, iVar1) != -1) {
				StringCopy(&cVar3,
						   vehicle::get_mod_text_label(iParam0, iVar1, vehicle::get_vehicle_mod(iParam0, iVar1)), 16);
				iVar2 = gameplay::get_hash_key(&cVar3);
				if (iVar2 != 0) {
					if (iVar2 == gameplay::get_hash_key("MNU_CAGE") || iVar2 == gameplay::get_hash_key("SABRE_CAG")) {
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0x67D9
int func_81(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		switch (entity::get_entity_model(iParam0)) {
		case joaat("tornado5"):
			switch (iParam1) {
			case 0: return 0;

			case 1: return 1;

			case 2: return 2;

			case 3: return 3;

			case 4: return 4;

			case 5: return 4;
			}
			break;

		case joaat("faction3"): return 3;
		}
		iVar0 = vehicle::get_num_vehicle_mods(iParam0, 38);
		iVar1 = vehicle::get_num_vehicle_mods(iParam0, 24);
		fVar2 = system::to_float(iParam1 + 1) / system::to_float(iVar0);
		iVar3 = system::floor(system::to_float(iVar1) * fVar2) - 1;
		if (iVar3 < 0) {
			iVar3 = 0;
		}
		if (iVar3 >= iVar0) {
			iVar3 = iVar0 - 1;
		}
		return iVar3;
	}
	return 0;
}

// Position - 0x68BE
int func_82(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("faction2"):
	case joaat("buccaneer2"):
	case joaat("chino2"):
	case joaat("moonbeam2"):
	case joaat("primo2"):
	case joaat("voodoo"): return 1;

	case joaat("sabregt2"):
		if (!Global_262145.f_12339) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("tornado5"):
		if (!Global_262145.f_12340) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("virgo2"):
		if (!Global_262145.f_12338) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("minivan2"):
		if (!Global_262145.f_12341) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("slamvan3"):
		if (!Global_262145.f_12343) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("faction3"):
		if (!Global_262145.f_12342) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("sultanrs"):
	case joaat("banshee2"):
		if ((iParam1 & 1) != 0) {
			return 0;
		}
		return 1;

	case joaat("comet3"):
		if (Global_262145.f_16780) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("diablous2"):
		if (Global_262145.f_16782) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("fcr2"):
		if (Global_262145.f_16786) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("elegy"):
		if (Global_262145.f_16783) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("nero2"):
		if (Global_262145.f_16790) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("italigtb2"):
		if (Global_262145.f_16788) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("specter2"):
		if (Global_262145.f_16793) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x6AE3
void func_83(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (vehicle::get_num_mod_kits(iParam0) > 0) {
		vehicle::set_vehicle_mod_kit(iParam0, 0);
		iVar0 = vehicle::get_vehicle_mod(iParam0, 24);
		iVar1 = vehicle::get_vehicle_mod_variation(iParam0, 24);
		vehicle::set_vehicle_wheel_type(iParam0, iParam1);
		if (entity::get_entity_model(iParam0) == joaat("tornado6")) {
			return;
		}
		if (iVar0 == -1) {
			vehicle::remove_vehicle_mod(iParam0, 24);
		}
		else {
			vehicle::set_vehicle_mod(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

// Position - 0x6B48
var func_84() { return dlc2::is_dlc_present(-1691188696); }

// Position - 0x6B59
int func_85(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (decorator::decor_is_registered_as_type("MPBitset", 3)) {
				if (decorator::decor_exist_on(iParam0, "MPBitset")) {
					iVar0 = decorator::decor_get_int(iParam0, "MPBitset");
				}
				return gameplay::is_bit_set(iVar0, 4);
			}
		}
	}
	return 0;
}

// Position - 0x6BA4
void func_86(vector3 vParam0, float fParam3, int iParam4) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (func_69(&Global_68531.f_555[0 /*21*/], iVar0)) {
			if (gameplay::get_distance_between_coords(vParam0, Global_68531.f_555[0 /*21*/], iParam4) <= fParam3) {
				func_65(iVar0);
			}
		}
		iVar0++;
	}
}

// Position - 0x6BF4
bool func_87(var *uParam0) {
	if (func_89(uParam0)) {
		if (streaming::has_model_loaded(uParam0->f_12.f_66)) {
			return true;
		}
		else {
			return false;
		}
		return true;
	}
	else {
		return false;
	}
	return true;
}

// Position - 0x6C29
bool func_88(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x6C70
bool func_89(var *uParam0) {
	if (uParam0->f_12.f_66 == 0) {
		return false;
	}
	if (!func_46(uParam0->f_12.f_66, 0)) {
		return false;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_74(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0)) {
		return false;
	}
	return true;
}

// Position - 0x6CCF
int func_90() { return func_87(&Global_93635.f_2311); }

// Position - 0x6CE2
void func_91() { func_92(&Global_93635.f_2311); }

// Position - 0x6CF5
void func_92(var *uParam0) {
	if (func_89(uParam0)) {
		streaming::request_model(uParam0->f_12.f_66);
	}
}

// Position - 0x6D13
int func_93(vector3 vParam0, int iParam3) { return func_94(Global_93635.f_2311.f_12.f_66, vParam0, iParam3); }

// Position - 0x6D30
int func_94(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;
	vector3 vVar3;

	if (iParam0 == 0) {
		return 0;
	}
	if (iParam4 == 1) {
		vParam1 = {func_95()};
	}
	gameplay::get_model_dimensions(iParam0, &vVar0, &vVar3);
	if (vVar3.x - vVar0.x > vParam1.x) {
		return 0;
	}
	else if (vVar3.y - vVar0.y > vParam1.y) {
		return 0;
	}
	else if (vVar3.z - vVar0.z > vParam1.z) {
		return 0;
	}
	return 1;
}

// Position - 0x6D9A
Vector3 func_95() { return 2.55f, 5.665f, 2.55f; }

// Position - 0x6DB1
int func_96() { return func_89(&Global_93635.f_2311); }

// Position - 0x6DC4
void func_97() {
	streaming::request_model(joaat("armytrailer2"));
	streaming::request_model(joaat("packer"));
	streaming::request_model(joaat("s_m_y_construct_01"));
	streaming::request_model(joaat("s_m_m_security_01"));
	streaming::request_model(joaat("bison2"));
	while (!streaming::has_model_loaded(joaat("armytrailer2")) || !streaming::has_model_loaded(joaat("packer")) ||
		   !streaming::has_model_loaded(joaat("s_m_y_construct_01")) ||
		   !streaming::has_model_loaded(joaat("s_m_m_security_01")) || !streaming::has_model_loaded(joaat("bison2"))) {
		system::wait(0);
	}
	if (!entity::does_entity_exist(iLocal_32)) {
		if (entity::does_entity_exist(Global_88321[1])) {
			entity::set_entity_as_mission_entity(Global_88321[1], 1, 1);
			iLocal_32 = Global_88321[1];
			vehicle::add_vehicle_upsidedown_check(iLocal_32);
		}
		else {
			iLocal_32 = vehicle::create_vehicle(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			vehicle::add_vehicle_upsidedown_check(iLocal_32);
		}
	}
	if (!entity::does_entity_exist(iLocal_33)) {
		if (entity::does_entity_exist(Global_88321[2])) {
			entity::set_entity_as_mission_entity(Global_88321[2], 1, 1);
			iLocal_33 = Global_88321[2];
			vehicle::set_vehicle_has_strong_axles(iLocal_33, 1);
			vehicle::set_vehicle_doors_locked(iLocal_33, 7);
			func_100(iLocal_33, -1);
			func_99(iLocal_33, -1);
		}
		else {
			iLocal_33 = vehicle::create_vehicle(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			vehicle::set_vehicle_has_strong_axles(iLocal_33, 1);
			vehicle::set_vehicle_doors_locked(iLocal_33, 7);
			func_100(iLocal_33, -1);
			func_99(iLocal_33, -1);
		}
	}
	vehicle::attach_vehicle_to_trailer(iLocal_33, iLocal_32, 0.5f);
	streaming::set_model_as_no_longer_needed(joaat("armytrailer2"));
	streaming::set_model_as_no_longer_needed(joaat("packer"));
	streaming::set_model_as_no_longer_needed(joaat("bison2"));
	if (!entity::does_entity_exist(uLocal_35[0])) {
		if (entity::does_entity_exist(Global_88321.f_9[0])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[0], 1, 1);
			uLocal_35[0] = Global_88321.f_9[0];
			ped::set_ped_relationship_group_hash(uLocal_35[0], iLocal_302);
			func_98(uLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_35[0], 1);
		}
		else {
			uLocal_35[0] =
				ped::create_ped(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
			ped::set_ped_relationship_group_hash(uLocal_35[0], iLocal_302);
			if (ai::does_scenario_exist_in_area(912.3f, -1542.6f, 30.4f, 3f, 0)) {
				ai::task_use_nearest_scenario_to_coord_warp(uLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			ped::set_blocking_of_non_temporary_events(uLocal_35[0], 1);
			func_98(uLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!entity::does_entity_exist(uLocal_35[1])) {
		if (entity::does_entity_exist(Global_88321.f_9[1])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[1], 1, 1);
			uLocal_35[1] = Global_88321.f_9[1];
			ped::set_ped_relationship_group_hash(uLocal_35[1], iLocal_302);
			func_98(uLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_35[1], 1);
		}
		else {
			uLocal_35[1] =
				ped::create_ped(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
			ped::set_ped_relationship_group_hash(uLocal_35[1], iLocal_302);
			if (ai::does_scenario_exist_in_area(917.5028f, -1517.401f, 29.9673f, 3f, 0)) {
				ai::task_use_nearest_scenario_to_coord_warp(uLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_98(uLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_35[1], 1);
		}
	}
	if (!entity::does_entity_exist(uLocal_35[2])) {
		if (entity::does_entity_exist(Global_88321.f_9[2])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[2], 1, 1);
			uLocal_35[2] = Global_88321.f_9[2];
			ped::set_ped_relationship_group_hash(uLocal_35[2], iLocal_302);
			func_98(uLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_35[2], 1);
		}
		else {
			uLocal_35[2] =
				ped::create_ped(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
			ped::set_ped_relationship_group_hash(uLocal_35[2], iLocal_302);
			if (ai::does_scenario_exist_in_area(869.6423f, -1541.423f, 29.2516f, 3f, 0)) {
				ai::task_use_nearest_scenario_to_coord_warp(uLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_98(uLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_35[2], 1);
		}
	}
	if (!entity::does_entity_exist(uLocal_35[3])) {
		if (entity::does_entity_exist(Global_88321.f_9[3])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[3], 1, 1);
			uLocal_35[3] = Global_88321.f_9[3];
			ped::set_ped_relationship_group_hash(uLocal_35[3], iLocal_302);
			func_98(uLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_35[3], 1);
		}
		else {
			uLocal_35[3] =
				ped::create_ped(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
			ped::set_ped_relationship_group_hash(uLocal_35[3], iLocal_302);
			if (ai::does_scenario_exist_in_area(884.3046f, -1573.188f, 29.8247f, 3f, 0)) {
				ai::task_use_nearest_scenario_to_coord_warp(uLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_98(uLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_35[3], 1);
		}
	}
	if (!entity::does_entity_exist(uLocal_35[4])) {
		if (entity::does_entity_exist(Global_88321.f_9[4])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[4], 1, 1);
			uLocal_35[4] = Global_88321.f_9[4];
			ped::set_ped_relationship_group_hash(uLocal_35[4], iLocal_302);
			func_98(uLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_35[4], 1);
		}
		else {
			uLocal_35[4] =
				ped::create_ped(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
			ped::set_ped_relationship_group_hash(uLocal_35[4], iLocal_302);
			if (ai::does_scenario_exist_in_area(903.8805f, -1575.02f, 29.8327f, 3f, 0)) {
				ai::task_use_nearest_scenario_to_coord_warp(uLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_98(uLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_35[4], 1);
		}
	}
	if (!entity::does_entity_exist(uLocal_35[5])) {
		if (entity::does_entity_exist(Global_88321.f_9[5])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[5], 1, 1);
			uLocal_35[5] = Global_88321.f_9[5];
			ped::set_ped_relationship_group_hash(uLocal_35[5], iLocal_302);
			func_98(uLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_35[5], 1);
		}
		else {
			uLocal_35[5] =
				ped::create_ped(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
			ped::set_ped_relationship_group_hash(uLocal_35[5], iLocal_302);
			if (ai::does_scenario_exist_in_area(906.2186f, -1575.108f, 29.8125f, 3f, 0)) {
				ai::task_use_nearest_scenario_to_coord_warp(uLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_98(uLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_35[5], 1);
		}
	}
	if (!entity::does_entity_exist(uLocal_35[6])) {
		if (entity::does_entity_exist(Global_88321.f_9[8])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[8], 1, 1);
			uLocal_35[6] = Global_88321.f_9[8];
			ped::set_ped_relationship_group_hash(uLocal_35[6], iLocal_302);
			func_98(uLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			ped::set_blocking_of_non_temporary_events(uLocal_35[6], 1);
		}
		else {
			uLocal_35[6] =
				ped::create_ped(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
			ped::set_ped_relationship_group_hash(uLocal_35[6], iLocal_302);
			if (ai::does_scenario_exist_in_area(889.285f, -1561.485f, 29.6539f, 3f, 0)) {
				ai::task_use_nearest_scenario_to_coord_warp(uLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_98(uLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			ped::set_blocking_of_non_temporary_events(uLocal_35[6], 1);
		}
	}
	if (!entity::does_entity_exist(uLocal_43[0])) {
		if (entity::does_entity_exist(Global_88321.f_9[6])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[6], 1, 1);
			uLocal_43[0] = Global_88321.f_9[6];
			ped::set_ped_relationship_group_hash(uLocal_43[0], iLocal_303);
			func_98(uLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_43[0], 1);
			weapon::give_weapon_to_ped(uLocal_43[0], joaat("weapon_pistol"), 100, 0, 0);
			audio::set_ambient_voice_name(uLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else {
			uLocal_43[0] =
				ped::create_ped(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
			ped::set_ped_relationship_group_hash(uLocal_43[0], iLocal_303);
			func_98(uLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_43[0], 1);
			weapon::give_weapon_to_ped(uLocal_43[0], joaat("weapon_pistol"), 100, 0, 0);
			audio::set_ambient_voice_name(uLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!entity::does_entity_exist(uLocal_43[1])) {
		if (entity::does_entity_exist(Global_88321.f_9[7])) {
			entity::set_entity_as_mission_entity(Global_88321.f_9[7], 1, 1);
			uLocal_43[1] = Global_88321.f_9[7];
			ped::set_ped_relationship_group_hash(uLocal_43[1], iLocal_303);
			func_98(uLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_43[1], 1);
			weapon::give_weapon_to_ped(uLocal_43[1], joaat("weapon_pistol"), 100, 0, 0);
			audio::set_ambient_voice_name(uLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else {
			uLocal_43[1] =
				ped::create_ped(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
			ped::set_ped_relationship_group_hash(uLocal_43[1], iLocal_303);
			func_98(uLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			ped::set_blocking_of_non_temporary_events(uLocal_43[1], 1);
			weapon::give_weapon_to_ped(uLocal_43[1], joaat("weapon_pistol"), 100, 0, 0);
			audio::set_ambient_voice_name(uLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	streaming::set_model_as_no_longer_needed(joaat("s_m_y_construct_01"));
	streaming::set_model_as_no_longer_needed(joaat("s_m_m_security_01"));
}

// Position - 0x78B0
void func_98(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5) {
	if (!ped::is_ped_injured(iParam0)) {
		ped::set_ped_seeing_range(iParam0, fParam1);
		ped::set_ped_visual_field_peripheral_range(iParam0, fParam2);
		ped::set_ped_visual_field_center_angle(iParam0, fParam3 / 2f);
		ped::set_ped_visual_field_min_angle(iParam0, fParam4);
		ped::set_ped_visual_field_max_angle(iParam0, fParam5);
	}
}

// Position - 0x78EC
void func_99(int iParam0, int iParam1) {
	Global_55833 = iParam0;
	Global_55834 = iParam1;
}

// Position - 0x78FE
void func_100(int iParam0, int iParam1) {
	int iVar0;

	Global_55835 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		if (iParam1 == -1 || Global_67918[iVar0 /*9*/] == iParam1) {
			if (Global_67918[iVar0 /*9*/].f_6 != iParam0) {
				Global_67918[iVar0 /*9*/].f_6 = iParam0;
				Global_67918[iVar0 /*9*/].f_7 = 1;
				Global_67918[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

// Position - 0x7969
void func_101() {
	iLocal_63 = 0;
	while (iLocal_63 <= 6) {
		if (entity::does_entity_exist(uLocal_35[iLocal_63]) &&
			entity::does_entity_belong_to_this_script(uLocal_35[iLocal_63], 1)) {
			ped::delete_ped(&uLocal_35[iLocal_63]);
		}
		iLocal_63++;
	}
	if (entity::does_entity_exist(uLocal_43[0]) && entity::does_entity_belong_to_this_script(uLocal_43[0], 1)) {
		ped::delete_ped(&uLocal_43[0]);
	}
	if (entity::does_entity_exist(uLocal_43[1]) && entity::does_entity_belong_to_this_script(uLocal_43[1], 1)) {
		ped::delete_ped(&uLocal_43[1]);
	}
	if (entity::does_entity_exist(iLocal_46) && entity::does_entity_belong_to_this_script(iLocal_46, 1)) {
		ped::delete_ped(&iLocal_46);
	}
	if (entity::does_entity_exist(iLocal_47) && entity::does_entity_belong_to_this_script(iLocal_47, 1)) {
		ped::delete_ped(&iLocal_47);
	}
	if (entity::does_entity_exist(iLocal_48) && entity::does_entity_belong_to_this_script(iLocal_48, 1)) {
		ped::delete_ped(&iLocal_48);
	}
	if (entity::does_entity_exist(iLocal_49) && entity::does_entity_belong_to_this_script(iLocal_49, 1)) {
		ped::delete_ped(&iLocal_49);
	}
	if (!func_30()) {
		entity::set_entity_coords(player::player_ped_id(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 270.1911f);
	}
	if (entity::does_entity_exist(iLocal_32) && entity::does_entity_belong_to_this_script(iLocal_32, 1)) {
		vehicle::delete_vehicle(&iLocal_32);
	}
	if (entity::does_entity_exist(Global_88321[3])) {
		entity::set_entity_as_mission_entity(Global_88321[3], 1, 0);
		vehicle::delete_vehicle(&Global_88321[3]);
	}
	if (entity::does_entity_exist(iLocal_33) && entity::does_entity_belong_to_this_script(iLocal_33, 1)) {
		vehicle::delete_vehicle(&iLocal_33);
	}
	streaming::remove_anim_dict("cellphone@str");
	streaming::remove_anim_dict("misscarsteal4@director_grip");
	audio::cancel_music_event("FHPRB_START");
	audio::cancel_music_event("FHPRB_TRUCK");
	audio::cancel_music_event("FHPRB_COPS");
	audio::cancel_music_event("FHPRB_LOST");
	audio::cancel_music_event("FHPRB_STOP");
	gameplay::clear_area(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}

// Position - 0x7B41
void func_102() {
	if (ui::does_blip_exist(iLocal_58)) {
		ui::remove_blip(&iLocal_58);
	}
	if (ui::does_blip_exist(iLocal_59)) {
		ui::remove_blip(&iLocal_59);
	}
	if (ui::does_blip_exist(iLocal_60)) {
		ui::remove_blip(&iLocal_60);
	}
	if (ui::does_blip_exist(iLocal_61)) {
		ui::remove_blip(&iLocal_61);
	}
}

// Position - 0x7B85
void func_103() {
	Global_14611 = 0;
	func_104();
}

// Position - 0x7B95
void func_104() {
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

// Position - 0x7BEC
void func_105() {
	func_123();
	if (iLocal_62 == 0) {
		if (iLocal_304 == 1) {
			func_34();
			iLocal_304 = 0;
		}
		iLocal_305 = 0;
		iLocal_314 = 0;
		iLocal_469 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
		player::set_max_wanted_level(5);
		streaming::remove_anim_dict("cellphone@str");
		streaming::remove_anim_dict("misscarsteal4@director_grip");
		if (!cam::is_screen_faded_in()) {
			streaming::load_scene(entity::get_entity_coords(player::player_ped_id(), 1));
			cam::do_screen_fade_in(800);
		}
		player::set_wanted_level_multiplier(1f);
		unk1::_0x293220DA1B46CEBC(10f, 5f, 4);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1) {
		func_122(&uLocal_137, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0) {
			func_122(&uLocal_137, 0, player::player_ped_id(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1) {
			func_122(&uLocal_137, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2) {
			func_122(&uLocal_137, 2, player::player_ped_id(), "TREVOR", 0, 1);
		}
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2) {
		if (player::get_player_wanted_level(player::player_id()) == 0) {
			if (func_14() == 0) {
				if (func_112(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0)) {
					unk1::_0x293220DA1B46CEBC(5f, 5f, 4);
					system::settimera(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 1) {
				if (func_112(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0)) {
					unk1::_0x293220DA1B46CEBC(5f, 5f, 4);
					system::settimera(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 2) {
				if (func_112(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0)) {
					unk1::_0x293220DA1B46CEBC(5f, 5f, 4);
					system::settimera(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3) {
		if (!ui::does_blip_exist(iLocal_59)) {
			if (!func_111()) {
				if (system::timera() > 10500) {
					iLocal_59 = func_109(vLocal_116, 1);
				}
			}
		}
		if (func_111()) {
			iLocal_62 = 4;
		}
	}
	if (iLocal_62 == 4) {
		if (player::get_player_wanted_level(player::player_id()) == 0) {
			if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 0)) {
					if (vehicle::is_vehicle_attached_to_trailer(iLocal_33)) {
						if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_116, 4f, 4f, 2f, 1, 1, 2)) {
							if (func_107(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 4f, 3, 0.5f, 0, 1,
										 0)) {
								audio::trigger_music_event("FHPRB_STOP");
								if (ui::does_blip_exist(iLocal_59)) {
									ui::remove_blip(&iLocal_59);
								}
								unk1::_0x293220DA1B46CEBC(5f, 5f, 4);
								func_106(0, -1);
								iLocal_62 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x7E2A
void func_106(int iParam0, int iParam1) {
	int iVar0;

	if (Global_55830) {
	}
	Global_55830 = 0;
	if (iParam0) {
		Global_55831 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1) {
		iVar0 = 0;
		while (iVar0 < Global_67917) {
			if (MissionObjectives[Global_67918[iVar0 /*9*/] /*13*/] == 4) {
				Global_67918[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < Global_67917) {
			if (Global_67918[iVar0 /*9*/] > 0) {
				if (Global_67918[iVar0 /*9*/] == iParam1) {
					Global_67918[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

// Position - 0x7EC4
bool func_107(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6) {
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
	func_108(iParam0);
	if (gameplay::get_game_timer() - Global_29 > 500) {
		vehicle::_set_vehicle_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = gameplay::get_game_timer();
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (gameplay::absf(entity::get_entity_speed(iParam0)) <= fParam3) {
			return true;
		}
	}
	return false;
}

// Position - 0x8054
void func_108(int iParam0) {
	if (vehicle::_get_has_vehicle_got_rocket_boost(iParam0)) {
		if (vehicle::_is_vehicle_rocket_boost_active(iParam0)) {
			vehicle::_set_rocket_boost_active(iParam0, 0);
		}
	}
}

// Position - 0x8075
int func_109(vector3 vParam0, int iParam3) {
	int iVar0;

	iVar0 = ui::add_blip_for_coord(vParam0);
	ui::set_blip_scale(iVar0, func_110(network::network_is_game_in_progress(), 1f, 1f));
	ui::set_blip_route(iVar0, iParam3);
	return iVar0;
}

// Position - 0x80A1
var func_110(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x80B8
bool func_111() {
	if (Global_15745 == 0) {
		return true;
	}
	return false;
}

// Position - 0x80CF
bool func_112(var *uParam0, int iParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7, int iParam8) {
	func_121(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	if (iParam5 == 1) {
		Global_15757 = 1;
	}
	else {
		Global_15757 = 0;
	}
	Global_2621441 = 0;
	return func_113(sParam3, iParam4, iParam8);
}

// Position - 0x812E
int func_113(char *sParam0, int iParam1, int iParam2) {
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
					func_104();
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
		if (func_120(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_119();
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
				func_118();
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
				if (func_117()) {
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
			if (func_116()) {
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
			func_115();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_114();
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
		func_104();
	}
	return 0;
}

// Position - 0x83FA
void func_114() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x842B
void func_115() {
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

// Position - 0x84C0
bool func_116() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x84E7
bool func_117() {
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

// Position - 0x8580
void func_118() {
	if (func_16(14)) {
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
		Global_14443 = func_14();
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

// Position - 0x8622
void func_119() {
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

// Position - 0x8679
bool func_120(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x86B4
void func_121(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
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

// Position - 0x870A
void func_122(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x87A5
void func_123() {
	if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
		if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 0)) {
			if (vehicle::is_vehicle_attached_to_trailer(iLocal_33)) {
				if (func_128("HELP_1")) {
					ui::clear_help(1);
				}
				if (ui::does_blip_exist(iLocal_58)) {
					ui::remove_blip(&iLocal_58);
				}
				if (ui::does_blip_exist(iLocal_61)) {
					if (iLocal_395 == 1) {
						if (gameplay::get_game_timer() < iLocal_109 + 7500) {
							ui::clear_prints();
						}
					}
					ui::remove_blip(&iLocal_61);
				}
				if (iLocal_28 == 4) {
					if (player::get_player_wanted_level(player::player_id()) == 0) {
						if (iLocal_469 == 0) {
							audio::cancel_music_event("FHPRB_COPS");
							audio::trigger_music_event("FHPRB_LOST");
							iLocal_469 = 1;
						}
						if (iLocal_314 == 1) {
							if (gameplay::get_game_timer() < iLocal_110 + 7500) {
								ui::clear_prints();
							}
							iLocal_314 = 0;
						}
						if (iLocal_62 > 3) {
							if (!ui::does_blip_exist(iLocal_59)) {
								iLocal_59 = func_109(vLocal_116, 1);
							}
							if (iLocal_305 == 0) {
								if (!ui::is_message_being_displayed()) {
									func_127("GOD_2", 7500, 1);
									iLocal_305 = 1;
								}
							}
						}
					}
					else {
						if (ui::does_blip_exist(iLocal_59)) {
							ui::remove_blip(&iLocal_59);
						}
						if (iLocal_314 == 0) {
							ui::clear_prints();
							func_127("GOD_4", 7500, -1);
							audio::trigger_music_event("FHPRB_COPS");
							iLocal_110 = gameplay::get_game_timer();
							iLocal_314 = 1;
							iLocal_469 = 0;
						}
					}
				}
			}
			else {
				if (ui::does_blip_exist(iLocal_58)) {
					ui::remove_blip(&iLocal_58);
				}
				if (ui::does_blip_exist(iLocal_59)) {
					ui::remove_blip(&iLocal_59);
				}
				if (vehicle::is_vehicle_driveable(iLocal_32, 0)) {
					if (!ui::does_blip_exist(iLocal_61)) {
						iLocal_61 = func_125(iLocal_32, 0, 0);
						ui::set_blip_as_friendly(iLocal_61, 1);
						if (ui::is_message_being_displayed()) {
							ui::clear_prints();
						}
						if (iLocal_395 == 0) {
							func_127("GOD_6", 7500, -1);
							iLocal_109 = gameplay::get_game_timer();
							iLocal_395 = 1;
						}
						if (!func_128("HELP_1")) {
							func_124("HELP_1");
						}
					}
				}
			}
		}
		else {
			if (ui::does_blip_exist(iLocal_61)) {
				ui::remove_blip(&iLocal_61);
			}
			if (ui::does_blip_exist(iLocal_59)) {
				ui::remove_blip(&iLocal_59);
			}
			if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
				if (!ui::does_blip_exist(iLocal_58)) {
					iLocal_58 = func_125(iLocal_33, 0, 0);
					ui::set_blip_as_friendly(iLocal_58, 1);
				}
			}
			if (iLocal_315 == 0) {
				ui::clear_prints();
				func_127("GOD_5", 7500, -1);
				iLocal_315 = 1;
			}
		}
	}
}

// Position - 0x89BA
void func_124(char *sParam0) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0x89D0
int func_125(int iParam0, int iParam1, int iParam2) { return func_126(iParam0, !iParam1, iParam2); }

// Position - 0x89E3
int func_126(int iParam0, int iParam1, bool bParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_110(network::network_is_game_in_progress(), 1f, 1f));
		if (!bParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_110(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_110(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x8A87
void func_127(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 1);
}

// Position - 0x8AA0
bool func_128(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x8AB3
void func_129() {
	if (iLocal_62 > 1) {
		func_123();
	}
	if (iLocal_62 == 0) {
		if (iLocal_304 == 1) {
			func_34();
			iLocal_304 = 0;
		}
		iLocal_397 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_402 = 0;
		iLocal_403 = 0;
		iLocal_404[0] = 0;
		iLocal_404[1] = 0;
		iLocal_407[0] = 0;
		iLocal_407[1] = 0;
		iLocal_410 = 0;
		iLocal_411 = 0;
		iLocal_412 = 0;
		iLocal_413 = 0;
		iLocal_414 = 0;
		iLocal_415 = 0;
		iLocal_416 = 0;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_426 = 0;
		iLocal_427 = 0;
		iLocal_428 = 0;
		iLocal_429 = 0;
		iLocal_430 = 0;
		iLocal_431 = 0;
		iLocal_432 = 0;
		iLocal_433[0] = 0;
		iLocal_433[1] = 0;
		iLocal_436[0] = 0;
		iLocal_436[1] = 0;
		iLocal_439[0] = 0;
		iLocal_439[1] = 0;
		iLocal_442[0] = 0;
		iLocal_442[1] = 0;
		iLocal_445[0] = 0;
		iLocal_445[1] = 0;
		iLocal_448[0] = 0;
		iLocal_448[1] = 0;
		iLocal_451[0] = 0;
		iLocal_451[1] = 0;
		iLocal_455 = 0;
		iLocal_458 = 0;
		iLocal_459[0] = 0;
		iLocal_462[0] = 0;
		iLocal_459[1] = 0;
		iLocal_462[1] = 0;
		iLocal_466 = 0;
		iLocal_467 = 0;
		iLocal_468 = 0;
		iLocal_482 = 0;
		iLocal_315 = 0;
		iLocal_316 = 0;
		iLocal_321 = 0;
		iLocal_387 = 0;
		iLocal_388 = 0;
		iLocal_389 = 0;
		iLocal_390 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_393 = 0;
		iLocal_394 = 0;
		iLocal_395 = 0;
		iLocal_417 = 0;
		iLocal_465 = 0;
		iLocal_483 = 0;
		iLocal_487 = 0;
		iLocal_454 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
		iLocal_63 = 0;
		while (iLocal_63 <= 6) {
			iLocal_306[iLocal_63] = 0;
			iLocal_355[iLocal_63] = 0;
			iLocal_371[iLocal_63] = 0;
			iLocal_379[iLocal_63] = 0;
			iLocal_363[iLocal_63] = 0;
			iLocal_63++;
		}
		streaming::request_anim_dict("cellphone@str");
		streaming::request_anim_dict("misscarsteal4@director_grip");
		if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
			if (!ui::does_blip_exist(iLocal_58)) {
				iLocal_58 = func_125(iLocal_33, 0, 0);
				ui::set_blip_as_friendly(iLocal_58, 1);
			}
		}
		player::set_max_wanted_level(0);
		if (cam::is_screen_faded_out()) {
			if (!func_30()) {
				streaming::load_scene(entity::get_entity_coords(player::player_ped_id(), 1));
			}
			if (entity::does_entity_exist(iLocal_34)) {
				func_27(iLocal_34, -1, 1);
				entity::set_vehicle_as_no_longer_needed(&iLocal_34);
			}
			else {
				func_27(0, -1, 1);
			}
		}
		if (!cam::is_screen_faded_in()) {
			cam::do_screen_fade_in(800);
		}
		audio::trigger_music_event("FHPRB_START");
		gameplay::clear_area(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1) {
		if (iLocal_465 == 0) {
			if (!ui::is_message_being_displayed()) {
				unk1::_0x293220DA1B46CEBC(5f, 8f, 4);
				func_127("GOD_1", 7500, 1);
				iLocal_465 = 1;
			}
		}
		if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 0)) {
				audio::trigger_music_event("FHPRB_TRUCK");
				if (ui::does_blip_exist(iLocal_58)) {
					ui::remove_blip(&iLocal_58);
				}
				func_130(656, 0);
				player::set_wanted_level_multiplier(1f);
				iLocal_62 = 2;
			}
		}
	}
	if (iLocal_62 == 2) {
		if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 0)) {
				if (vehicle::is_vehicle_attached_to_trailer(iLocal_33)) {
					if (func_128("HELP_1")) {
						ui::clear_help(1);
					}
					if (ui::does_blip_exist(iLocal_58)) {
						ui::remove_blip(&iLocal_58);
					}
					if (ui::does_blip_exist(iLocal_61)) {
						ui::remove_blip(&iLocal_61);
					}
					if (gameplay::get_distance_between_coords(vLocal_119, vLocal_132, 1) < 100f) {
						if (player::get_player_wanted_level(player::player_id()) == 0) {
							if (iLocal_316 == 1) {
								if (gameplay::get_game_timer() < iLocal_110 + 7500) {
									ui::clear_prints();
									iLocal_316 = 0;
								}
							}
							if (iLocal_417 == 0) {
								unk1::_0x293220DA1B46CEBC(5f, 8f, 4);
								func_127("GOD_7", 7500, -1);
								iLocal_417 = 1;
							}
						}
						else if (iLocal_316 == 0) {
							unk1::_0x293220DA1B46CEBC(5f, 8f, 4);
							audio::play_police_report("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_110 = gameplay::get_game_timer();
							func_127("GOD_4", 7500, -1);
							iLocal_316 = 1;
						}
					}
					else if (player::get_player_wanted_level(player::player_id()) == 0) {
						iLocal_62 = 0;
						iLocal_28 = 4;
					}
				}
				else {
					if (ui::does_blip_exist(iLocal_58)) {
						ui::remove_blip(&iLocal_58);
					}
					if (vehicle::is_vehicle_driveable(iLocal_32, 0)) {
						if (!ui::does_blip_exist(iLocal_61)) {
							iLocal_61 = func_125(iLocal_32, 0, 0);
							ui::set_blip_as_friendly(iLocal_61, 1);
							if (ui::is_message_being_displayed()) {
								ui::clear_prints();
							}
							if (iLocal_395 == 0) {
								func_127("GOD_6", 7500, -1);
								iLocal_395 = 1;
							}
							if (!func_128("HELP_1")) {
								func_124("HELP_1");
							}
						}
					}
				}
			}
			else {
				if (ui::does_blip_exist(iLocal_61)) {
					ui::remove_blip(&iLocal_61);
				}
				if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
					if (!ui::does_blip_exist(iLocal_58)) {
						iLocal_58 = func_125(iLocal_33, 0, 0);
						ui::set_blip_as_friendly(iLocal_58, 1);
					}
				}
				if (iLocal_315 == 0) {
					ui::clear_prints();
					func_127("GOD_5", 7500, -1);
					iLocal_315 = 1;
				}
			}
		}
	}
}

// Position - 0x8F4F
void func_130(int iParam0, int iParam1) {
	int iVar0;

	Global_55832 = iParam0;
	if (!Global_55830) {
		Global_55830 = 1;
	}
	if (iParam1) {
		iVar0 = 0;
		while (iVar0 < Global_67917) {
			if (Global_67918[iVar0 /*9*/] == iParam0) {
				Global_67918[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

// Position - 0x8F99
void func_131() {
	if (iLocal_62 == 0) {
		if (iLocal_304 == 1) {
			func_34();
			iLocal_304 = 0;
		}
		func_154();
		func_97();
		if (!cam::is_screen_faded_in()) {
			streaming::load_scene(entity::get_entity_coords(player::player_ped_id(), 1));
			cam::do_screen_fade_in(800);
		}
		if (entity::does_entity_exist(Global_88321[3])) {
			if (vehicle::is_vehicle_driveable(Global_88321[3], 0)) {
				if (vehicle::is_this_model_a_heli(entity::get_entity_model(Global_88321[3]))) {
					entity::set_entity_as_mission_entity(Global_88321[3], 1, 1);
					func_133(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (vehicle::is_this_model_a_car(entity::get_entity_model(Global_88321[3])) ||
					vehicle::is_this_model_a_bike(entity::get_entity_model(Global_88321[3])) ||
					vehicle::is_this_model_a_bicycle(entity::get_entity_model(Global_88321[3])) ||
					vehicle::is_this_model_a_quadbike(entity::get_entity_model(Global_88321[3]))) {
					entity::set_entity_as_mission_entity(Global_88321[3], 1, 1);
					func_133(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_132(79);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1) {
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
}

// Position - 0x90C6
void func_132(int iParam0) {
	if (Global_88746 != -1) {
		if (iParam0 == Global_88746) {
			Global_88750 = 1;
			return;
		}
	}
}

// Position - 0x90EA
void func_133(vector3 vParam0, float *fParam3, int iParam4, int iParam5) {
	vector3 vVar0;
	float *fVar3;

	if (entity::does_entity_exist(Global_93635.f_4)) {
		if (vehicle::is_vehicle_driveable(Global_93635.f_4, 0)) {
			if (func_153(24) != Global_93635.f_4) {
				if (iParam4 == 1) {
					if (func_150(entity::get_entity_coords(Global_93635.f_4, 1), iParam5, &vVar0, &fVar3)) {
						vParam0 = {vVar0};
						fParam3 = fVar3;
					}
				}
				func_134(Global_93635.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

// Position - 0x9165
void func_134(int iParam0, vector3 vParam1, float *fParam4, int iParam5, int iParam6) {
	struct<60> Var0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (iParam5 != 24 && iParam5 != 25) {
			return;
		}
		if (iParam5 == 24) {
			if (entity::does_entity_exist(Global_68531.f_484[25]) &&
				vehicle::is_vehicle_driveable(Global_68531.f_484[25], 0)) {
				if (Global_68531.f_484[25] == iParam0) {
					return;
				}
			}
		}
		if (!iParam6) {
			if (vehicle::is_big_vehicle(iParam0) || entity::get_entity_model(iParam0) == joaat("bus") ||
				entity::get_entity_model(iParam0) == joaat("tourbus")) {
				return;
			}
		}
		func_149(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_40(iParam0, &Var0);
		if (func_88(vParam1, 0f, 0f, 0f, 0)) {
			vParam1 = {entity::get_entity_coords(iParam0, 1)};
			fParam4 = entity::get_entity_heading(iParam0);
		}
		if (iParam5 == 24) {
			if (gameplay::get_hash_key(script::get_this_script_name()) != joaat("vehicle_gen_controller")) {
				Global_69519 = gameplay::get_hash_key(script::get_this_script_name());
			}
		}
		func_147(iParam5, &Var0, vParam1, fParam4, func_59(iParam0));
		func_135(iParam5, iParam0, 0);
	}
}

// Position - 0x928E
void func_135(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam0 == -1) {
		return;
	}
	if (!func_69(&Global_68531.f_555[0 /*21*/], iParam0)) {
		return;
	}
	if (!gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 12) &&
		!gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
		if (Global_68531.f_555[0 /*21*/].f_4 != entity::get_entity_model(iParam1)) {
			return;
		}
	}
	if (Global_69438 != -1 && Global_69438 != iParam0) {
		return;
	}
	if (entity::does_entity_exist(iParam1)) {
		if (vehicle::is_vehicle_driveable(iParam1, 0)) {
			if (!entity::is_entity_a_mission_entity(iParam1)) {
				entity::set_entity_as_mission_entity(iParam1, 1, 1);
			}
			if (iParam0 == 24) {
				Global_101700.f_31389.f_4801 = func_136();
			}
			if (iParam1 != Global_68531.f_139[iParam0]) {
				if (iParam0 == 24) {
					iVar0 = func_153(iParam0);
					if (entity::does_entity_exist(iVar0) && vehicle::is_vehicle_driveable(iVar0, 0) &&
						iParam1 != iVar0) {
						func_39(iVar0, 145);
					}
				}
				Global_69437 = iParam1;
				Global_69438 = iParam0;
				Global_69439 = iParam2;
			}
		}
	}
}

// Position - 0x93AB
var func_136() {
	int *iVar0;

	func_146(&iVar0, time::get_clock_seconds());
	func_145(&iVar0, time::get_clock_minutes());
	func_144(&iVar0, time::get_clock_hours());
	func_139(&iVar0, time::get_clock_day_of_month());
	func_138(&iVar0, time::get_clock_month());
	func_137(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x93F1
void func_137(int *iParam0, int iParam1) {
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

// Position - 0x9477
void func_138(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x94AA
void func_139(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_143(*uParam0);
	iVar1 = func_141(*uParam0);
	if (iParam1 < 1 || iParam1 > func_140(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x94FB
int func_140(int iParam0, int iParam1) {
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

// Position - 0x959D
var func_141(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_142(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x95C2
int func_142(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x95D9
int func_143(var uParam0) { return uParam0 & 15; }

// Position - 0x95E6
void func_144(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x9620
void func_145(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x965B
void func_146(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x9697
void func_147(int iParam0, var *uParam1, vector3 vParam2, var uParam5, int iParam6) {
	if (func_69(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
			func_148(iParam0);
			func_66(uParam1, &Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]);
			if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 11)) {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = uParam5;
			}
			else {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_62(iParam0, 1);
		}
	}
}

// Position - 0x9796
void func_148(int iParam0) {
	if (iParam0 == -1) {
		return;
	}
	if (func_69(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
			entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
			Global_68531.f_139[iParam0] = 0;
		}
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			func_62(iParam0, 0);
		}
	}
}

// Position - 0x9810
void func_149(int iParam0) {
	if (iParam0 != 24 && iParam0 != 25) {
	}
	func_148(iParam0);
	func_62(iParam0, 0);
}

// Position - 0x9837
bool func_150(vector3 vParam0, int iParam3, var *uParam4, float *fParam5) {
	int iVar0;

	iVar0 = func_151(vParam0, iParam3, 1);
	switch (iVar0) {
	case 0:
		*uParam4 = {-827.351f, 157.785f, 68.2143f};
		*fParam5 = 85.1509f;
		return true;

	case 1:
	case 2:
		*uParam4 = {1992.523f, 3813.916f, 31.1008f};
		*fParam5 = 122.1498f;
		return true;

	case 3:
		*uParam4 = {-1184.258f, -1496.556f, 3.3895f};
		*fParam5 = 303.2098f;
		return true;

	case 4:
		*uParam4 = {118.1067f, -1325.906f, 28.3706f};
		*fParam5 = 123.5016f;
		return true;

	case 5:
		*uParam4 = {-18.118f, -1455.126f, 29.5004f};
		*fParam5 = 273.2822f;
		return true;

	case 6:
		*uParam4 = {1.5947f, 543.4017f, 173.4644f};
		*fParam5 = 310.7556f;
		return true;

	default: break;
	}
	return false;
}

// Position - 0x994D
int func_151(vector3 vParam0, int iParam3, int iParam4) {
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
				if (func_152(iVar0) || iParam4 == 0) {
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

// Position - 0x99DC
var func_152(int iParam0) { return gameplay::is_bit_set(Global_101700.f_6188[iParam0], 0); }

// Position - 0x99F4
int func_153(int iParam0) {
	if (iParam0 == -1) {
		return 0;
	}
	return Global_68531.f_139[iParam0];
}

// Position - 0x9A10
void func_154() { Global_86002 = 1; }

// Position - 0x9A1D
void func_155() {
	player::set_all_random_peds_flee(player::player_id(), 1);
	player::set_wanted_level_multiplier(0.01f);
	iLocal_53 = ped::add_scenario_blocking_area(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	iLocal_54 = ped::add_scenario_blocking_area(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	iLocal_55 = ped::add_scenario_blocking_area(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	iLocal_56 = ped::add_scenario_blocking_area(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	iLocal_51 = ped::add_scenario_blocking_area(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	iLocal_52 = ped::add_scenario_blocking_area(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_29()) {
		if (Global_86001 == 1) {
			func_157(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_483 = 1;
			iLocal_304 = 1;
			iLocal_62 = 0;
			iLocal_28 = 5;
		}
		else if (func_156() == 0) {
			if (func_96() && func_93(7f, 7f, 7f, 1)) {
				func_157(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else {
				func_157(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_304 = 1;
			iLocal_483 = 1;
			iLocal_62 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_192(0)) {
		iLocal_304 = 1;
		iLocal_483 = 1;
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
	else {
		iLocal_62 = 0;
		iLocal_28 = 2;
	}
}

// Position - 0x9BE4
int func_156() {
	if (Global_91491 != 10 && Global_91491 != 9) {
		return 0;
	}
	return Global_91491.f_2;
}

// Position - 0x9C0E
void func_157(vector3 vParam0, float fParam3, int iParam4, int iParam5) {
	if (func_29()) {
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
		func_28(1);
	}
}

// Position - 0x9CA3
void func_158() {
	if (!func_29()) {
		iLocal_28 = 1;
	}
	else {
		iLocal_28 = 1;
	}
}

// Position - 0x9CBC
void func_159() {
	if (!entity::does_entity_exist(iLocal_49)) {
		if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), 45f, -616.2f,
												  30.8f, 1) < 150f) {
			streaming::request_model(joaat("s_m_m_security_01"));
			if (streaming::has_model_loaded(joaat("s_m_m_security_01"))) {
				iLocal_49 =
					ped::create_ped(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				ped::set_ped_config_flag(iLocal_49, 324, 1);
			}
			streaming::set_model_as_no_longer_needed(joaat("s_m_m_security_01"));
		}
	}
	if (entity::does_entity_exist(iLocal_49)) {
		if (!ped::is_ped_injured(iLocal_49)) {
			if (ai::does_scenario_exist_in_area(65.2f, -617.2f, 30.8f, 5f, 0)) {
				if (iLocal_456 == 0) {
					if (entity::is_entity_on_screen(iLocal_49)) {
						ai::clear_ped_tasks(iLocal_49);
					}
					else {
						ai::clear_ped_tasks_immediately(iLocal_49);
					}
					ai::task_use_nearest_scenario_to_coord(iLocal_49, 65.2f, -617.2f, 31f, 2f, 0);
					ped::set_ped_keep_task(iLocal_49, 1);
					iLocal_113 = gameplay::get_game_timer();
					iLocal_456 = 1;
				}
				else if (gameplay::get_game_timer() > iLocal_113 + 5000) {
					if (!ped::is_ped_using_any_scenario(iLocal_49)) {
						iLocal_456 = 0;
					}
				}
			}
			if (func_161(player::player_ped_id(), iLocal_49, 1) < 20f) {
				if (iLocal_421 == 0) {
					ai::task_look_at_entity(iLocal_49, player::player_ped_id(), -1, 1072, 3);
					iLocal_421 = 1;
				}
			}
			else if (iLocal_421 == 1) {
				ai::task_look_at_entity(iLocal_49, player::player_ped_id(), 1, 0, 2);
				iLocal_421 = 0;
			}
		}
	}
	if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), 45f, -616.2f,
											  30.8f, 1) < 50f) {
		if (iLocal_457 == 0) {
			iLocal_114 = 498972213;
			iLocal_115 = -512924631;
			object::add_door_to_system(iLocal_114, -1184516519, 61f, -633f, 32f, 1, 1, 0);
			object::add_door_to_system(iLocal_115, -1184516519, 66f, -618f, 32f, 1, 1, 0);
			iLocal_457 = 1;
		}
		if (iLocal_457 == 1) {
			if (player::get_player_wanted_level(player::player_id()) == 0) {
				if (vLocal_119.x > 35f) {
					if (fLocal_135 < 1f) {
						fLocal_135 += 0.02f;
					}
					else {
						fLocal_135 = 1f;
					}
					if (fLocal_135 <= 1f) {
						object::_set_door_ajar_angle(iLocal_114, fLocal_135, 0, 1);
						object::_set_door_ajar_angle(iLocal_115, fLocal_135, 0, 1);
						object::_set_door_acceleration_limit(iLocal_114, 4, 0, 1);
						object::_set_door_acceleration_limit(iLocal_115, 4, 0, 1);
						iLocal_422 = 0;
					}
				}
				if (vLocal_119.x < 35f) {
					if (fLocal_135 > 0f) {
						fLocal_135 -= 0.02f;
					}
					else {
						fLocal_135 = 0f;
					}
					if (fLocal_135 >= 0f) {
						object::_set_door_ajar_angle(iLocal_114, fLocal_135, 0, 1);
						object::_set_door_ajar_angle(iLocal_115, fLocal_135, 0, 1);
						object::_set_door_acceleration_limit(iLocal_114, 4, 0, 1);
						object::_set_door_acceleration_limit(iLocal_115, 4, 0, 1);
						iLocal_422 = 0;
					}
				}
			}
			else if (iLocal_422 == 0) {
				if (vLocal_119.x < 35f) {
					if (fLocal_135 > 0f) {
						fLocal_135 -= 0.02f;
					}
					else {
						fLocal_135 = 0f;
					}
					if (fLocal_135 >= 0f) {
						object::_set_door_ajar_angle(iLocal_114, fLocal_135, 0, 1);
						object::_set_door_ajar_angle(iLocal_115, fLocal_135, 0, 1);
						object::_set_door_acceleration_limit(iLocal_114, 4, 0, 1);
						object::_set_door_acceleration_limit(iLocal_115, 4, 0, 1);
						iLocal_422 = 1;
					}
				}
			}
		}
		if (entity::is_entity_in_angled_area(player::player_ped_id(), 62.90151f, -638.6329f, 29.9188f, 70.78919f,
											 -617.1338f, 36.91788f, 10.75f, 0, 1, 0)) {
			if (entity::does_entity_exist(iLocal_49)) {
				if (!ped::is_ped_injured(iLocal_49)) {
					if (player::get_player_wanted_level(player::player_id()) == 0) {
						if (iLocal_419 == 0) {
							if (iLocal_418 == 0) {
								func_122(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
								if (func_160(&uLocal_137, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0)) {
									iLocal_418 = 1;
								}
							}
						}
						else if (iLocal_420 == 0) {
							func_122(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
							if (func_160(&uLocal_137, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0)) {
								iLocal_420 = 1;
							}
						}
					}
					else if (iLocal_419 == 0) {
						func_122(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
						if (func_160(&uLocal_137, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0)) {
							iLocal_419 = 1;
						}
					}
				}
			}
		}
	}
}

// Position - 0xA090
bool func_160(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_121(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_113(sParam2, iParam3, 0);
}

// Position - 0xA0DE
float func_161(int iParam0, int iParam1, int iParam2) {
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

// Position - 0xA13C
void func_162() {
	int iVar0;

	if (!ui::is_message_being_displayed()) {
		if (!func_166() || !ui::is_subtitle_preference_switched_on()) {
			if (iLocal_28 == 3) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) && iLocal_31 == 0) {
					if (func_14() == 0) {
						if (iLocal_29 == 1) {
							if (iLocal_392 == 0) {
								if (func_164() && func_163()) {
									if (func_160(&uLocal_137, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0)) {
										iLocal_112 = gameplay::get_game_timer();
										iLocal_392 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1) {
							if (iLocal_392 == 1 && gameplay::get_game_timer() > iLocal_112 + 7000) {
								if (func_164() && func_163()) {
									if (func_160(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0)) {
										iLocal_112 = gameplay::get_game_timer();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2) {
						if (iLocal_430 == 0) {
							if (func_164()) {
								if (func_160(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0)) {
									iLocal_95 = gameplay::get_game_timer();
									iLocal_430 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1) {
					if (iLocal_455 == 0) {
						if (func_164() && func_163()) {
							if (func_160(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0)) {
								iLocal_108 = gameplay::get_game_timer();
								iLocal_455 = 1;
							}
						}
					}
					else if (gameplay::get_game_timer() > iLocal_108 + 8000) {
						if (func_164() && func_163()) {
							if (func_160(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0)) {
								iLocal_108 = gameplay::get_game_timer();
							}
						}
					}
				}
				if (iLocal_29 == 4) {
					if (iLocal_391 == 0) {
						func_103();
						if (func_164()) {
							weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0) {
								if (func_160(&uLocal_137, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0)) {
									iLocal_77 = gameplay::get_game_timer();
									iLocal_387 = 1;
									iLocal_391 = 1;
								}
							}
							else {
								iLocal_77 = gameplay::get_game_timer();
								iLocal_387 = 1;
								iLocal_391 = 1;
							}
						}
					}
					if (iLocal_391 == 1) {
						if (iLocal_387 == 0) {
							iLocal_77 = gameplay::get_game_timer();
							iLocal_387 = 1;
						}
						if (iLocal_387 == 1) {
							if (gameplay::get_game_timer() > iLocal_77 + 9000) {
								if (func_164()) {
									if (func_160(&uLocal_137, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0)) {
										iLocal_387 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3) {
					if (iLocal_427 == 1) {
						if (iLocal_389 == 0) {
							if (iLocal_390 == 1) {
								if (func_164()) {
									if (func_160(&uLocal_137, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0)) {
										iLocal_389 = 1;
									}
								}
							}
						}
					}
					if (iLocal_388 == 0) {
						if (entity::does_entity_exist(iLocal_33)) {
							if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
								if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 0)) {
									if (func_164()) {
										if (func_160(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0)) {
											iLocal_78 = gameplay::get_game_timer();
											iLocal_389 = 1;
										}
									}
								}
							}
						}
					}
					if (gameplay::get_game_timer() > iLocal_78 + 10000) {
						if (entity::does_entity_exist(iLocal_33)) {
							if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
								if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 0)) {
									if (func_164()) {
										if (func_160(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0)) {
											iLocal_78 = gameplay::get_game_timer();
										}
									}
								}
							}
						}
					}
					if (iLocal_428 == 1) {
						if (iLocal_429 == 0) {
							if (func_164()) {
								if (func_160(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0)) {
									iLocal_429 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0xA47A
int func_163() {
	if (func_14() == 0) {
		func_122(&uLocal_137, 0, player::player_ped_id(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1) {
		func_122(&uLocal_137, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2) {
		func_122(&uLocal_137, 2, player::player_ped_id(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

// Position - 0xA4DA
bool func_164() {
	int iVar0;

	iLocal_66 = 0;
	while (iLocal_66 <= 6) {
		if (entity::does_entity_exist(uLocal_35[iLocal_66])) {
			if (!ped::is_ped_injured(uLocal_35[iLocal_66])) {
				iVar0 = func_165(player::player_ped_id(), iLocal_302, 0, 0, -1);
				if (entity::does_entity_exist(iVar0)) {
					if (!ped::is_ped_injured(iVar0)) {
					}
				}
				if (iVar0 == uLocal_35[iLocal_66] && func_161(player::player_ped_id(), iVar0, 1) < 15f) {
					func_122(&uLocal_137, 5, uLocal_35[iLocal_66], "CONSTRUCTION3", 0, 1);
					return true;
				}
			}
		}
		iLocal_66++;
	}
	return false;
}

// Position - 0xA56C
int func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0[16];
	int iVar17;

	iVar17 = 0;
	if (!ped::is_ped_injured(iParam0)) {
		ped::get_ped_nearby_peds(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= iVar0 - 1) {
			if (entity::does_entity_exist(iVar0[iVar17])) {
				if (!ped::is_ped_injured(iVar0[iVar17])) {
					if (ped::get_ped_relationship_group_hash(iVar0[iVar17]) == iParam1) {
						if (iParam2 <= 0) {
							if (iParam3 == 1) {
								if (entity::is_entity_on_screen(iVar0[iVar17])) {
									return iVar0[iVar17];
								}
							}
							else {
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2 <= iVar0 - 1) {
							if (entity::does_entity_exist(iVar0[iVar17 + iParam2])) {
								if (!ped::is_ped_injured(iVar0[iVar17 + iParam2])) {
									if (ped::get_ped_relationship_group_hash(iVar0[iVar17 + iParam2]) == iParam1) {
										if (iParam3 == 1) {
											if (entity::is_entity_on_screen(iVar0[iVar17 + iParam2])) {
												return iVar0[iVar17 + iParam2];
											}
										}
										else {
											return iVar0[iVar17 + iParam2];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

// Position - 0xA673
bool func_166() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0xA695
void func_167() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (weapon::is_ped_current_weapon_silenced(player::player_ped_id()) &&
			ped::is_ped_shooting(player::player_ped_id())) {
			player::set_wanted_level_multiplier(0f);
		}
		else {
			player::set_wanted_level_multiplier(1f);
		}
	}
	func_174();
	if (iLocal_404[0]) {
		if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 20f &&
			ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id())) {
			if (iLocal_433[0] == 0) {
				ai::task_look_at_entity(uLocal_43[0], player::player_ped_id(), -1, 1072, 3);
				iLocal_433[0] = 1;
			}
			if (iLocal_433[0] == 1) {
				if (ai::get_script_task_status(uLocal_43[0], 150319005) != 0 ||
					ai::get_script_task_status(uLocal_43[0], 150319005) != 1) {
					iLocal_433[0] = 0;
				}
			}
		}
		else if (iLocal_433[0] == 1) {
			ai::task_look_at_entity(uLocal_43[0], player::player_ped_id(), 1, 0, 2);
			iLocal_433[0] = 0;
		}
	}
	if (iLocal_404[1]) {
		if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 20f &&
			ped::_0x6CD5A433374D4CFB(uLocal_43[1], player::player_ped_id())) {
			if (iLocal_433[1] == 0) {
				ai::task_look_at_entity(uLocal_43[1], player::player_ped_id(), -1, 1072, 3);
				iLocal_433[1] = 1;
			}
			if (iLocal_433[1] == 1) {
				if (ai::get_script_task_status(uLocal_43[1], 150319005) != 0 ||
					ai::get_script_task_status(uLocal_43[1], 150319005) != 1) {
					iLocal_433[1] = 0;
				}
			}
		}
		else if (iLocal_433[1] == 1) {
			ai::task_look_at_entity(uLocal_43[1], player::player_ped_id(), 1, 0, 2);
			iLocal_433[1] = 0;
		}
	}
	if (iLocal_404[0] && iLocal_404[1]) {
		if (func_161(player::player_ped_id(), uLocal_43[0], 1) < func_161(player::player_ped_id(), uLocal_43[1], 1)) {
			iLocal_399 = 1;
			iLocal_400 = 0;
		}
		else {
			iLocal_399 = 0;
			iLocal_400 = 1;
		}
	}
	else {
		if (iLocal_404[0] && !iLocal_404[1]) {
			iLocal_399 = 1;
			iLocal_400 = 0;
		}
		if (iLocal_404[1] && !iLocal_404[0]) {
			iLocal_399 = 0;
			iLocal_400 = 1;
		}
	}
	switch (iLocal_31) {
	case 0:
		if (ai::does_scenario_group_exist("SCRAP_SECURITY")) {
			if (!ai::is_scenario_group_enabled("SCRAP_SECURITY")) {
				ai::set_scenario_group_enabled("SCRAP_SECURITY", 1);
			}
			if (ai::is_scenario_group_enabled("SCRAP_SECURITY")) {
				if (entity::does_entity_exist(uLocal_43[0])) {
					if (!ped::is_ped_injured(uLocal_43[0])) {
						if (!ped::is_ped_being_stealth_killed(uLocal_43[0])) {
							if (ai::does_scenario_exist_in_area(863.1551f, -1564.572f, 29.3231f, 5f, 1)) {
								uLocal_105[0] = gameplay::get_game_timer();
								if (!ai::is_ped_active_in_scenario(uLocal_43[0])) {
									if (iLocal_462[0] == 0) {
										ai::task_use_nearest_scenario_chain_to_coord(uLocal_43[0], 863.1551f,
																					 -1564.572f, 29.3231f, 5f, 0);
										iLocal_459[0] = 0;
										iLocal_462[0] = 1;
									}
								}
							}
							else if (gameplay::get_game_timer() > uLocal_105[0] + 2000) {
								if (gameplay::get_distance_between_coords(entity::get_entity_coords(uLocal_43[0], 1),
																		  863.1551f, -1564.572f, 29.3231f, 1) > 3f) {
									if (iLocal_459[0] == 0) {
										ai::task_follow_nav_mesh_to_coord(uLocal_43[0], 863.1551f, -1564.572f, 29.3231f,
																		  1f, -1, 1048576000, 0, 1193033728);
										iLocal_462[0] = 0;
										iLocal_459[0] = 1;
									}
								}
							}
						}
					}
				}
				if (entity::does_entity_exist(uLocal_43[1])) {
					if (!ped::is_ped_injured(uLocal_43[1])) {
						if (!ped::is_ped_being_stealth_killed(uLocal_43[1])) {
							if (ai::does_scenario_exist_in_area(940.2881f, -1573.877f, 29.3866f, 5f, 1)) {
								uLocal_105[1] = gameplay::get_game_timer();
								if (!ai::is_ped_active_in_scenario(uLocal_43[1])) {
									if (iLocal_462[1] == 0) {
										ai::task_use_nearest_scenario_chain_to_coord(uLocal_43[1], 940.2881f,
																					 -1573.877f, 29.3866f, 5f, 0);
										iLocal_459[1] = 0;
										iLocal_462[1] = 1;
									}
								}
							}
							else if (gameplay::get_game_timer() > uLocal_105[1] + 2000) {
								if (gameplay::get_distance_between_coords(entity::get_entity_coords(uLocal_43[1], 1),
																		  940.2881f, -1573.877f, 29.3866f, 1) > 3f) {
									if (iLocal_459[1] == 0) {
										ai::task_follow_nav_mesh_to_coord(uLocal_43[1], 940.2881f, -1573.877f, 29.3866f,
																		  1f, -1, 1048576000, 0, 1193033728);
										iLocal_462[1] = 0;
										iLocal_459[1] = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		break;

	case 1:
		if (entity::does_entity_exist(uLocal_43[0])) {
			if (!ped::is_ped_injured(uLocal_43[0])) {
				if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 20f) {
					if (func_173(player::player_ped_id()) == joaat("weapon_unarmed") ||
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) || func_172(0)) {
						if (ped::is_ped_facing_ped(player::player_ped_id(), uLocal_43[0], 100f) ||
							ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id())) {
							if (entity::is_entity_in_angled_area(player::player_ped_id(), 860.4606f, -1563.58f,
																 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0,
																 1, 0) ||
								entity::is_entity_in_angled_area(player::player_ped_id(), 855.4593f, -1548.228f,
																 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0,
																 1, 0)) {
								if (iLocal_451[0] == 0) {
									if (!ped::is_ped_facing_ped(uLocal_43[0], player::player_ped_id(), 45f)) {
										if (!entity::is_entity_on_screen(uLocal_43[0])) {
											ai::clear_ped_tasks_immediately(uLocal_43[0]);
										}
										else {
											ai::clear_ped_tasks(uLocal_43[0]);
										}
										ai::task_turn_ped_to_face_entity(uLocal_43[0], player::player_ped_id(), 5000);
										uLocal_102[0] = gameplay::get_game_timer();
										func_171(uLocal_43[0]);
										iLocal_451[0] = 1;
									}
								}
								if (iLocal_451[0] == 1) {
									if (gameplay::get_game_timer() > uLocal_102[0] + 5000) {
										iLocal_451[0] = 0;
									}
								}
								if (iLocal_407[0] == 0 && iLocal_407[1] == 0) {
									if (iLocal_403 == 0) {
										func_169(uLocal_43[0], "PROVOKE_TRESPASS",
												 "S_M_M_GENERICSECURITY_01_"
												 "LATINO_MINI_01",
												 6);
										iLocal_82 = gameplay::get_game_timer();
										iLocal_403 = 1;
									}
									else if (gameplay::get_game_timer() > iLocal_82 + 15000) {
										func_169(uLocal_43[0], "PROVOKE_TRESPASS",
												 "S_M_M_GENERICSECURITY_01_"
												 "LATINO_MINI_01",
												 9);
										iLocal_82 = gameplay::get_game_timer();
									}
								}
								else {
									if (iLocal_407[0] == 1) {
										if (iLocal_410 == 0) {
											func_169(uLocal_43[0], "PROVOKE_GEBERIC",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_01",
													 9);
											iLocal_88 = gameplay::get_game_timer();
											iLocal_410 = 1;
										}
										else if (gameplay::get_game_timer() > iLocal_88 + 15000) {
											func_169(uLocal_43[0], "PROVOKE_GENERIC",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_01",
													 9);
											iLocal_88 = gameplay::get_game_timer();
										}
									}
									if (iLocal_407[1] == 1) {
										if (iLocal_411 == 0) {
											func_169(uLocal_43[0], "PROVOKE_GENERIC",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_01",
													 9);
											iLocal_89 = gameplay::get_game_timer();
											iLocal_411 = 1;
										}
										else if (gameplay::get_game_timer() > iLocal_89 + 15000) {
											func_169(uLocal_43[0], "PROVOKE_GENERIC",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_01",
													 9);
											iLocal_89 = gameplay::get_game_timer();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (entity::does_entity_exist(uLocal_43[1])) {
			if (!ped::is_ped_injured(uLocal_43[1])) {
				if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 15f) {
					if (func_173(player::player_ped_id()) == joaat("weapon_unarmed") ||
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) || func_172(0)) {
						if (ped::is_ped_facing_ped(player::player_ped_id(), uLocal_43[1], 100f)) {
							if (entity::is_entity_in_angled_area(player::player_ped_id(), 939.8862f, -1575.635f,
																 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0,
																 1, 0)) {
								if (iLocal_451[1] == 0) {
									if (!ped::is_ped_facing_ped(uLocal_43[1], player::player_ped_id(), 45f)) {
										if (!entity::is_entity_on_screen(uLocal_43[1])) {
											ai::clear_ped_tasks_immediately(uLocal_43[1]);
										}
										else {
											ai::clear_ped_tasks(uLocal_43[1]);
										}
										ai::task_turn_ped_to_face_entity(uLocal_43[1], player::player_ped_id(), 5000);
										uLocal_102[1] = gameplay::get_game_timer();
										func_171(uLocal_43[1]);
										iLocal_451[1] = 1;
									}
								}
								if (iLocal_451[1] == 1) {
									if (gameplay::get_game_timer() > uLocal_102[1] + 5000) {
										iLocal_451[1] = 0;
									}
								}
								if (iLocal_407[0] == 0 && iLocal_407[1] == 0) {
									if (iLocal_403 == 0) {
										func_169(uLocal_43[1], "PROVOKE_TRESPASS",
												 "S_M_M_GENERICSECURITY_01_"
												 "LATINO_MINI_02",
												 6);
										iLocal_82 = gameplay::get_game_timer();
										iLocal_403 = 1;
									}
									else if (gameplay::get_game_timer() > iLocal_82 + 15000) {
										func_169(uLocal_43[1], "PROVOKE_TRESPASS",
												 "S_M_M_GENERICSECURITY_01_"
												 "LATINO_MINI_02",
												 9);
										iLocal_82 = gameplay::get_game_timer();
									}
								}
								else {
									if (iLocal_407[1] == 1) {
										if (iLocal_410 == 0) {
											func_169(uLocal_43[1], "PROVOKE_GENERIC",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_02",
													 6);
											iLocal_88 = gameplay::get_game_timer();
											iLocal_410 = 1;
										}
										else if (gameplay::get_game_timer() > iLocal_88 + 15000) {
											func_169(uLocal_43[1], "PROVOKE_GENERIC",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_02",
													 9);
											iLocal_88 = gameplay::get_game_timer();
										}
									}
									if (iLocal_407[0] == 1) {
										if (iLocal_411 == 0) {
											func_169(uLocal_43[1], "PROVOKE_GENERIC",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_02",
													 6);
											iLocal_89 = gameplay::get_game_timer();
											iLocal_411 = 1;
										}
										else if (gameplay::get_game_timer() > iLocal_89 + 15000) {
											func_169(uLocal_43[1], "PROVOKE_GENERIC",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_02",
													 9);
											iLocal_89 = gameplay::get_game_timer();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		break;

	case 2:
		if (iLocal_483 == 0) {
			iLocal_483 = 1;
		}
		if (func_168() || iLocal_398 == 1) {
			if (entity::does_entity_exist(uLocal_43[0])) {
				if (!ped::is_ped_injured(uLocal_43[0])) {
					if (ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id())) {
						uLocal_99[0] = gameplay::get_game_timer();
						iLocal_445[0] = 1;
						if (iLocal_442[0] == 0) {
							if (entity::is_entity_on_screen(uLocal_43[0])) {
								ai::clear_ped_tasks(uLocal_43[0]);
							}
							else {
								ai::clear_ped_tasks_immediately(uLocal_43[0]);
							}
							ped::set_ped_combat_attributes(uLocal_43[0], 50, 1);
							ai::task_combat_ped(uLocal_43[0], player::player_ped_id(), 0, 16);
							func_171(uLocal_43[0]);
							iLocal_442[0] = 1;
						}
					}
					else if (iLocal_448[0] == 0) {
						if (iLocal_445[0] == 0) {
							if (entity::is_entity_on_screen(uLocal_43[0])) {
								ai::clear_ped_tasks(uLocal_43[0]);
							}
							else {
								ai::clear_ped_tasks_immediately(uLocal_43[0]);
							}
							ai::task_follow_nav_mesh_to_coord(uLocal_43[0],
															  entity::get_entity_coords(player::player_ped_id(), 1), 3f,
															  -1, 1048576000, 0, 1193033728);
							func_171(uLocal_43[0]);
							iLocal_448[0] = 1;
						}
						if (iLocal_445[0] == 1) {
							if (gameplay::get_game_timer() > uLocal_99[0] + 500) {
								if (entity::is_entity_on_screen(uLocal_43[0])) {
									ai::clear_ped_tasks(uLocal_43[0]);
								}
								else {
									ai::clear_ped_tasks_immediately(uLocal_43[0]);
								}
								ai::task_follow_nav_mesh_to_coord(uLocal_43[0],
																  entity::get_entity_coords(player::player_ped_id(), 1),
																  3f, -1, 1048576000, 0, 1193033728);
								func_171(uLocal_43[0]);
								iLocal_448[0] = 1;
							}
						}
					}
				}
			}
			if (entity::does_entity_exist(uLocal_43[1])) {
				if (!ped::is_ped_injured(uLocal_43[1])) {
					if (ped::_0x6CD5A433374D4CFB(uLocal_43[1], player::player_ped_id())) {
						uLocal_99[1] = gameplay::get_game_timer();
						iLocal_445[1] = 1;
						if (iLocal_442[1] == 0) {
							if (entity::is_entity_on_screen(uLocal_43[1])) {
								ai::clear_ped_tasks(uLocal_43[1]);
							}
							else {
								ai::clear_ped_tasks_immediately(uLocal_43[1]);
							}
							ped::set_ped_combat_attributes(uLocal_43[1], 50, 1);
							ai::task_combat_ped(uLocal_43[1], player::player_ped_id(), 0, 16);
							func_171(uLocal_43[1]);
							iLocal_442[1] = 1;
						}
					}
					else if (iLocal_448[1] == 0) {
						if (iLocal_445[1] == 0) {
							if (entity::is_entity_on_screen(uLocal_43[1])) {
								ai::clear_ped_tasks(uLocal_43[1]);
							}
							else {
								ai::clear_ped_tasks_immediately(uLocal_43[1]);
							}
							ai::task_follow_nav_mesh_to_coord(uLocal_43[1],
															  entity::get_entity_coords(player::player_ped_id(), 1), 3f,
															  -1, 1048576000, 0, 1193033728);
							func_171(uLocal_43[1]);
							iLocal_448[1] = 1;
						}
						if (iLocal_445[1] == 1) {
							if (gameplay::get_game_timer() > uLocal_99[1] + 500) {
								if (entity::is_entity_on_screen(uLocal_43[1])) {
									ai::clear_ped_tasks(uLocal_43[1]);
								}
								else {
									ai::clear_ped_tasks_immediately(uLocal_43[1]);
								}
								ai::task_follow_nav_mesh_to_coord(uLocal_43[1],
																  entity::get_entity_coords(player::player_ped_id(), 1),
																  3f, -1, 1048576000, 0, 1193033728);
								func_171(uLocal_43[1]);
								iLocal_448[1] = 1;
							}
						}
					}
				}
			}
			if (func_168()) {
				if (iLocal_412 == 0) {
					if (player::get_player_wanted_level(player::player_id()) < 2) {
						player::set_max_wanted_level(5);
						player::set_wanted_level_multiplier(1f);
						player::set_player_wanted_level(player::player_id(), 2, 0);
						player::set_player_wanted_level_now(player::player_id(), 0);
						iLocal_412 = 1;
					}
				}
				if (iLocal_399 == 1) {
					if (iLocal_401 == 0) {
						if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 20f) {
							if (!audio::is_ambient_speech_playing(uLocal_43[0])) {
								func_169(uLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
								iLocal_87 = gameplay::get_game_timer();
								iLocal_401 = 1;
							}
						}
					}
					else if (gameplay::get_game_timer() > iLocal_87 + 7000) {
						if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 20f) {
							if (!audio::is_ambient_speech_playing(uLocal_43[0])) {
								func_169(uLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
								iLocal_87 = gameplay::get_game_timer();
							}
						}
					}
				}
				if (iLocal_400 == 1) {
					if (iLocal_401 == 0) {
						if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 20f) {
							if (!audio::is_ambient_speech_playing(uLocal_43[1])) {
								func_169(uLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
								iLocal_87 = gameplay::get_game_timer();
								iLocal_401 = 1;
							}
						}
					}
					else if (gameplay::get_game_timer() > iLocal_87 + 7000) {
						if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 20f) {
							if (!audio::is_ambient_speech_playing(uLocal_43[1])) {
								func_169(uLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
								iLocal_87 = gameplay::get_game_timer();
							}
						}
					}
				}
			}
			else {
				if (iLocal_458 == 0) {
					iLocal_50 = func_165(player::player_ped_id(), -1533126372, 0, 0, 28);
					if (iLocal_50 != 0) {
						if (entity::does_entity_exist(iLocal_50)) {
							if (!ped::is_ped_injured(iLocal_50)) {
								if (func_161(player::player_ped_id(), iLocal_50, 1) < 35f) {
									iLocal_458 = 1;
								}
							}
						}
					}
				}
				if (player::get_player_wanted_level(player::player_id()) > 0 && iLocal_458 == 0) {
					if (iLocal_399 == 1) {
						if (iLocal_402 == 0) {
							if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 20f) {
								if (!audio::is_ambient_speech_playing(uLocal_43[0])) {
									func_169(uLocal_43[0], "GENERIC_INSULT_HIGH",
											 "S_M_M_GENERICSECURITY_01_LATINO_"
											 "MINI_01",
											 9);
									iLocal_86 = gameplay::get_game_timer();
									iLocal_402 = 1;
								}
							}
						}
						else if (gameplay::get_game_timer() > iLocal_86 + 7000) {
							if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 20f) {
								if (!audio::is_ambient_speech_playing(uLocal_43[0])) {
									func_169(uLocal_43[0], "GENERIC_CURSE_HIGH",
											 "S_M_M_GENERICSECURITY_01_LATINO_"
											 "MINI_01",
											 9);
									iLocal_86 = gameplay::get_game_timer();
								}
							}
						}
					}
					if (iLocal_400 == 1) {
						if (iLocal_402 == 0) {
							if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 20f) {
								if (!audio::is_ambient_speech_playing(uLocal_43[1])) {
									func_169(uLocal_43[1], "GENERIC_INSULT_HIGH",
											 "S_M_M_GENERICSECURITY_01_LATINO_"
											 "MINI_02",
											 9);
									iLocal_86 = gameplay::get_game_timer();
									iLocal_402 = 1;
								}
							}
						}
						else if (gameplay::get_game_timer() > iLocal_86 + 7000) {
							if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 20f) {
								if (!audio::is_ambient_speech_playing(uLocal_43[1])) {
									func_169(uLocal_43[1], "GENERIC_CURSE_HIGH",
											 "S_M_M_GENERICSECURITY_01_LATINO_"
											 "MINI_02",
											 9);
									iLocal_86 = gameplay::get_game_timer();
								}
							}
						}
					}
				}
			}
		}
		if (!func_168()) {
			if (iLocal_414 == 0) {
				if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), 893.2f,
														  -1556.5f, 30f, 1) < 18f) {
					if (entity::does_entity_exist(uLocal_43[0])) {
						if (!ped::is_ped_injured(uLocal_43[0])) {
							if (ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id())) {
								iLocal_81 = gameplay::get_game_timer();
								iLocal_414 = 1;
							}
						}
					}
					if (entity::does_entity_exist(uLocal_43[1])) {
						if (!ped::is_ped_injured(uLocal_43[1])) {
							if (ped::_0x6CD5A433374D4CFB(uLocal_43[1], player::player_ped_id())) {
								iLocal_81 = gameplay::get_game_timer();
								iLocal_414 = 1;
							}
						}
					}
				}
			}
			if (iLocal_398 == 0) {
				if (entity::does_entity_exist(uLocal_43[0])) {
					if (!ped::is_ped_injured(uLocal_43[0])) {
						if (func_161(player::player_ped_id(), uLocal_43[0], 1) > 4f) {
							if (ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id())) {
								if (iLocal_436[0] == 0) {
									if (entity::is_entity_on_screen(uLocal_43[0])) {
										ai::clear_ped_tasks(uLocal_43[0]);
									}
									else {
										ai::clear_ped_tasks_immediately(uLocal_43[0]);
									}
									ai::task_go_to_entity(uLocal_43[0], player::player_ped_id(), -1, 0.5f, 2f,
														  1073741824, 0);
									func_171(uLocal_43[0]);
									iLocal_436[0] = 1;
								}
								uLocal_96[0] = gameplay::get_game_timer();
							}
							else if (gameplay::get_game_timer() > uLocal_96[0] + 500) {
								if (iLocal_439[0] == 0) {
									if (entity::is_entity_on_screen(uLocal_43[0])) {
										ai::clear_ped_tasks(uLocal_43[0]);
									}
									else {
										ai::clear_ped_tasks_immediately(uLocal_43[0]);
									}
									ai::task_follow_nav_mesh_to_coord(
										uLocal_43[0], entity::get_entity_coords(player::player_ped_id(), 1), 2f, -1,
										1048576000, 0, 1193033728);
									func_171(uLocal_43[0]);
									iLocal_439[0] = 1;
								}
							}
						}
						else if (iLocal_484[0] == 0) {
							if (entity::is_entity_on_screen(uLocal_43[0])) {
								ai::clear_ped_tasks(uLocal_43[0]);
							}
							else {
								ai::clear_ped_tasks_immediately(uLocal_43[0]);
							}
							ai::open_sequence_task(&iLocal_57);
							ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
							ai::task_stand_still(0, 2000);
							ai::set_sequence_to_repeat(iLocal_57, 1);
							ai::close_sequence_task(iLocal_57);
							ai::task_perform_sequence(uLocal_43[0], iLocal_57);
							ai::clear_sequence_task(&iLocal_57);
							func_171(uLocal_43[0]);
							iLocal_484[0] = 1;
						}
						if (iLocal_454 == 0) {
							if (iLocal_431 == 0 || iLocal_403 == 1) {
								if (iLocal_397 == 0) {
									if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 10f) {
										if (!audio::is_ambient_speech_playing(uLocal_43[0])) {
											func_169(uLocal_43[0], "PROVOKE_TRESPASS",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_01",
													 1);
											iLocal_83 = gameplay::get_game_timer();
											iLocal_84 = gameplay::get_game_timer();
											iLocal_81 = gameplay::get_game_timer();
											iLocal_414 = 1;
											iLocal_397 = 1;
											iLocal_407[0] = 1;
										}
									}
								}
								else if (gameplay::get_game_timer() > iLocal_83 + 7000) {
									if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 10f) {
										if (!audio::is_ambient_speech_playing(uLocal_43[0])) {
											func_169(uLocal_43[0], "PROVOKE_TRESPASS",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_01",
													 11);
											iLocal_83 = gameplay::get_game_timer();
										}
									}
								}
							}
							else if (iLocal_403 == 0) {
								if (iLocal_432 == 0) {
									if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 10f) {
										if (!audio::is_ambient_speech_playing(uLocal_43[0])) {
											func_169(uLocal_43[0], "PROVOKE_TRESPASS",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_01",
													 8);
											iLocal_397 = 1;
											iLocal_432 = 1;
										}
									}
								}
							}
						}
						else if (gameplay::get_game_timer() > iLocal_84 + 7000) {
							if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 15f) {
								if (!audio::is_ambient_speech_playing(uLocal_43[0])) {
									func_169(uLocal_43[0], "FIGHT",
											 "S_M_M_GENERICSECURITY_01_LATINO_"
											 "MINI_01",
											 11);
									iLocal_84 = gameplay::get_game_timer();
								}
							}
						}
					}
				}
				if (entity::does_entity_exist(uLocal_43[1])) {
					if (!ped::is_ped_injured(uLocal_43[1])) {
						if (func_161(player::player_ped_id(), uLocal_43[1], 1) > 4f) {
							if (ped::_0x6CD5A433374D4CFB(uLocal_43[1], player::player_ped_id())) {
								if (iLocal_436[1] == 0) {
									if (entity::is_entity_on_screen(uLocal_43[1])) {
										ai::clear_ped_tasks(uLocal_43[1]);
									}
									else {
										ai::clear_ped_tasks_immediately(uLocal_43[1]);
									}
									ai::task_go_to_entity(uLocal_43[1], player::player_ped_id(), -1, 0.5f, 2f,
														  1073741824, 0);
									func_171(uLocal_43[1]);
									iLocal_436[1] = 1;
								}
								uLocal_96[1] = gameplay::get_game_timer();
							}
							else if (gameplay::get_game_timer() > uLocal_96[1] + 500) {
								if (iLocal_439[1] == 0) {
									if (entity::is_entity_on_screen(uLocal_43[1])) {
										ai::clear_ped_tasks(uLocal_43[1]);
									}
									else {
										ai::clear_ped_tasks_immediately(uLocal_43[1]);
									}
									ai::task_follow_nav_mesh_to_coord(
										uLocal_43[1], entity::get_entity_coords(player::player_ped_id(), 1), 2f, -1,
										1048576000, 0, 1193033728);
									func_171(uLocal_43[1]);
									iLocal_439[1] = 1;
								}
							}
						}
						else if (iLocal_484[1] == 0) {
							if (entity::is_entity_on_screen(uLocal_43[1])) {
								ai::clear_ped_tasks(uLocal_43[1]);
							}
							else {
								ai::clear_ped_tasks_immediately(uLocal_43[1]);
							}
							ai::open_sequence_task(&iLocal_57);
							ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
							ai::task_stand_still(0, 2000);
							ai::set_sequence_to_repeat(iLocal_57, 1);
							ai::close_sequence_task(iLocal_57);
							ai::task_perform_sequence(uLocal_43[1], iLocal_57);
							ai::clear_sequence_task(&iLocal_57);
							func_171(uLocal_43[1]);
							iLocal_484[1] = 1;
						}
						if (iLocal_454 == 0) {
							if (iLocal_431 == 0 || iLocal_403 == 1) {
								if (iLocal_397 == 0) {
									if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 10f) {
										if (!audio::is_ambient_speech_playing(uLocal_43[1])) {
											func_169(uLocal_43[1], "PROVOKE_TRESPASS",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_02",
													 9);
											iLocal_83 = gameplay::get_game_timer();
											iLocal_85 = gameplay::get_game_timer();
											iLocal_81 = gameplay::get_game_timer();
											iLocal_414 = 1;
											iLocal_397 = 1;
											iLocal_407[1] = 1;
										}
									}
								}
								else if (gameplay::get_game_timer() > iLocal_83 + 7000) {
									if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 10f) {
										if (!audio::is_ambient_speech_playing(uLocal_43[1])) {
											func_169(uLocal_43[1], "PROVOKE_TRESPASS",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_02",
													 11);
											iLocal_83 = gameplay::get_game_timer();
										}
									}
								}
							}
							else if (iLocal_403 == 0) {
								if (iLocal_432 == 0) {
									if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 10f) {
										if (!audio::is_ambient_speech_playing(uLocal_43[1])) {
											func_169(uLocal_43[1], "PROVOKE_TRESPASS",
													 "S_M_M_GENERICSECURITY_01_"
													 "LATINO_MINI_02",
													 8);
											iLocal_397 = 1;
											iLocal_432 = 1;
										}
									}
								}
							}
						}
						else if (gameplay::get_game_timer() > iLocal_85 + 7000) {
							if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 10f) {
								if (!audio::is_ambient_speech_playing(uLocal_43[1])) {
									func_169(uLocal_43[1], "FIGHT",
											 "S_M_M_GENERICSECURITY_01_LATINO_"
											 "MINI_02",
											 11);
									iLocal_85 = gameplay::get_game_timer();
								}
							}
						}
					}
				}
				if (iLocal_414 == 1) {
					if (iLocal_454 == 0) {
						if (gameplay::get_game_timer() > iLocal_81 + 22000) {
							iLocal_454 = 1;
						}
					}
				}
				if (iLocal_414 == 1) {
					if (iLocal_398 == 0) {
						if (gameplay::get_game_timer() > iLocal_81 + 30000) {
							player::set_player_wanted_level(player::player_id(), 2, 0);
							iLocal_398 = 1;
						}
					}
				}
				if (entity::does_entity_exist(iLocal_33)) {
					if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
						if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 1)) {
							if (ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id()) ||
								ped::_0x6CD5A433374D4CFB(uLocal_43[1], player::player_ped_id())) {
								iLocal_398 = 1;
							}
						}
						if (func_161(player::player_ped_id(), iLocal_33, 1) < 5f &&
							ped::is_ped_getting_into_a_vehicle(player::player_ped_id())) {
							if (ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id()) ||
								ped::_0x6CD5A433374D4CFB(uLocal_43[1], player::player_ped_id())) {
								iLocal_398 = 1;
							}
						}
					}
				}
				if (entity::does_entity_exist(uLocal_43[0])) {
					if (!ped::is_ped_injured(uLocal_43[0])) {
						if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
							if (ped::_0xDCCA191DF9980FD7(player::player_ped_id())) {
								if (ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id())) {
									iLocal_398 = 1;
								}
							}
						}
					}
				}
				if (entity::does_entity_exist(uLocal_43[1])) {
					if (!ped::is_ped_injured(uLocal_43[1])) {
						if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
							if (ped::_0xDCCA191DF9980FD7(player::player_ped_id())) {
								if (ped::_0x6CD5A433374D4CFB(uLocal_43[1], player::player_ped_id())) {
									iLocal_398 = 1;
								}
							}
						}
					}
				}
			}
		}
		break;
	}
}

// Position - 0xBD5D
bool func_168() {
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iLocal_80 = 0;
		while (iLocal_80 <= 6) {
			if (entity::does_entity_exist(uLocal_35[iLocal_80])) {
				if (!ped::is_ped_injured(uLocal_35[iLocal_80])) {
					if (func_173(player::player_ped_id()) != joaat("weapon_unarmed") && !func_172(0)) {
						if (ped::_0x6CD5A433374D4CFB(uLocal_35[iLocal_80], player::player_ped_id())) {
							return true;
						}
					}
				}
			}
			iLocal_80++;
		}
		if (entity::does_entity_exist(uLocal_43[0])) {
			if (!ped::is_ped_injured(uLocal_43[0])) {
				if (func_173(player::player_ped_id()) != joaat("weapon_unarmed") && !func_172(0)) {
					if (ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id())) {
						return true;
					}
				}
			}
		}
		if (entity::does_entity_exist(uLocal_43[1])) {
			if (!ped::is_ped_injured(uLocal_43[1])) {
				if (func_173(player::player_ped_id()) != joaat("weapon_unarmed") && !func_172(0)) {
					if (ped::_0x6CD5A433374D4CFB(uLocal_43[1], player::player_ped_id())) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0xBE63
void func_169(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	audio::_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_170(iParam3), 0);
}

// Position - 0xBE7C
int func_170(int iParam0) {
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

// Position - 0xC071
void func_171(int iParam0) {
	if (iParam0 == uLocal_43[0]) {
		iLocal_433[0] = 0;
		iLocal_459[0] = 0;
		iLocal_462[0] = 0;
		iLocal_451[0] = 0;
		iLocal_442[0] = 0;
		iLocal_448[0] = 0;
		iLocal_436[0] = 0;
		iLocal_439[0] = 0;
		iLocal_484[0] = 0;
	}
	if (iParam0 == uLocal_43[1]) {
		iLocal_433[1] = 0;
		iLocal_459[1] = 0;
		iLocal_462[1] = 0;
		iLocal_451[1] = 0;
		iLocal_442[1] = 0;
		iLocal_448[1] = 0;
		iLocal_436[1] = 0;
		iLocal_439[1] = 0;
		iLocal_484[1] = 0;
	}
}

// Position - 0xC10B
int func_172(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 14)) {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return 1;
	}
	if (Global_14443.f_1 > 3) {
		return 1;
	}
	return 0;
}

// Position - 0xC165
int func_173(int iParam0) {
	var uVar0;

	weapon::get_current_ped_weapon(iParam0, &uVar0, 1);
	return uVar0;
}

// Position - 0xC179
void func_174() {
	if (entity::does_entity_exist(player::player_ped_id())) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			vLocal_119 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		}
	}
	if (entity::does_entity_exist(uLocal_43[0])) {
		if (!ped::is_ped_injured(uLocal_43[0])) {
			vLocal_125[0 /*3*/] = {entity::get_entity_coords(uLocal_43[0], 1)};
		}
	}
	if (entity::does_entity_exist(uLocal_43[1])) {
		if (!ped::is_ped_injured(uLocal_43[1])) {
			vLocal_125[1 /*3*/] = {entity::get_entity_coords(uLocal_43[1], 1)};
		}
	}
	if (entity::does_entity_exist(uLocal_43[0])) {
		if (!ped::is_ped_injured(uLocal_43[0])) {
			iLocal_404[0] = 1;
		}
		else {
			iLocal_404[0] = 0;
		}
	}
	else {
		iLocal_404[0] = 0;
	}
	if (entity::does_entity_exist(uLocal_43[1])) {
		if (!ped::is_ped_injured(uLocal_43[1])) {
			iLocal_404[1] = 1;
		}
		else {
			iLocal_404[1] = 0;
		}
	}
	else {
		iLocal_404[1] = 0;
	}
	if (iLocal_31 != 0) {
		if (iLocal_31 == 1) {
			if (iLocal_404[0] == 1) {
				if (iLocal_404[1] == 1) {
					if (func_161(player::player_ped_id(), uLocal_43[0], 1) <
						func_161(player::player_ped_id(), uLocal_43[1], 1)) {
						if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 20f) {
							if (vLocal_119.x < vLocal_125[0 /*3*/] &&
								!ped::is_ped_facing_ped(player::player_ped_id(), uLocal_43[0], 90f) &&
								!entity::is_entity_in_angled_area(player::player_ped_id(), 868.5617f, -1579.476f,
																  33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0,
																  1, 0) &&
								!entity::is_entity_in_angled_area(player::player_ped_id(), 855.4593f, -1548.228f,
																  28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0,
																  1, 0)) {
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								uLocal_105[0] = gameplay::get_game_timer();
								uLocal_105[1] = gameplay::get_game_timer();
							}
						}
						else if (vLocal_119.x < vLocal_125[0 /*3*/]) {
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							uLocal_105[0] = gameplay::get_game_timer();
							uLocal_105[1] = gameplay::get_game_timer();
						}
					}
					else if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 15f) {
						if (vLocal_119.x > vLocal_125[1 /*3*/] &&
							!ped::is_ped_facing_ped(player::player_ped_id(), uLocal_43[1], 90f) &&
							!entity::is_entity_in_angled_area(player::player_ped_id(), 936.7849f, -1569.337f, 31.49661f,
															  936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0)) {
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							uLocal_105[0] = gameplay::get_game_timer();
							uLocal_105[1] = gameplay::get_game_timer();
						}
					}
					else if (vLocal_119.x > vLocal_125[1 /*3*/]) {
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						uLocal_105[0] = gameplay::get_game_timer();
						uLocal_105[1] = gameplay::get_game_timer();
					}
				}
				else if (func_161(player::player_ped_id(), uLocal_43[0], 1) <
						 func_161(player::player_ped_id(), uLocal_43[1], 1)) {
					if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 15f) {
						if (vLocal_119.x < vLocal_125[0 /*3*/] &&
							!ped::is_ped_facing_ped(player::player_ped_id(), uLocal_43[0], 90f) &&
							!entity::is_entity_in_angled_area(player::player_ped_id(), 868.5617f, -1579.476f, 33.30448f,
															  866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) {
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							uLocal_105[0] = gameplay::get_game_timer();
							uLocal_105[1] = gameplay::get_game_timer();
						}
					}
					else if (vLocal_119.x < vLocal_125[0 /*3*/]) {
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						uLocal_105[0] = gameplay::get_game_timer();
						uLocal_105[1] = gameplay::get_game_timer();
					}
				}
			}
			else if (iLocal_404[1] == 1) {
				if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 15f) {
					if (vLocal_119.x > vLocal_125[1 /*3*/] &&
						!ped::is_ped_facing_ped(player::player_ped_id(), uLocal_43[1], 90f) &&
						!entity::is_entity_in_angled_area(player::player_ped_id(), 936.7849f, -1569.337f, 31.49661f,
														  936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0)) {
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						uLocal_105[0] = gameplay::get_game_timer();
						uLocal_105[1] = gameplay::get_game_timer();
					}
				}
				else if (vLocal_119.x > vLocal_125[1 /*3*/]) {
					iLocal_31 = 0;
					iLocal_459[0] = 0;
					iLocal_462[0] = 0;
					iLocal_459[1] = 0;
					iLocal_462[1] = 0;
					uLocal_105[0] = gameplay::get_game_timer();
					uLocal_105[1] = gameplay::get_game_timer();
				}
			}
		}
		if (iLocal_31 == 2) {
			if (iLocal_398 == 0) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), 936.7849f, -1569.337f, 31.49661f,
													 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) ||
					vLocal_119.x > 942f) {
					if (!ped::is_ped_injured(uLocal_43[1])) {
						if (vLocal_119.x > vLocal_125[1 /*3*/]) {
							if (!ped::is_ped_facing_ped(player::player_ped_id(), uLocal_43[1], 90f)) {
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								uLocal_105[0] = gameplay::get_game_timer();
								uLocal_105[1] = gameplay::get_game_timer();
							}
						}
					}
					else if (vLocal_119.x > 942f) {
						if (!ped::is_ped_facing_ped(player::player_ped_id(), uLocal_43[1], 90f)) {
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							uLocal_105[0] = gameplay::get_game_timer();
							uLocal_105[1] = gameplay::get_game_timer();
						}
					}
				}
				if (entity::is_entity_in_angled_area(player::player_ped_id(), 868.5617f, -1579.476f, 33.30448f,
													 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) ||
					vLocal_119.x < 860f) {
					if (!ped::is_ped_injured(uLocal_43[0])) {
						if (vLocal_119.x < vLocal_125[0 /*3*/]) {
							if (!ped::is_ped_facing_ped(player::player_ped_id(), uLocal_43[0], 90f)) {
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								uLocal_105[0] = gameplay::get_game_timer();
								uLocal_105[1] = gameplay::get_game_timer();
							}
						}
					}
					else if (vLocal_119.x < 860f) {
						if (!ped::is_ped_facing_ped(player::player_ped_id(), uLocal_43[0], 90f)) {
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							uLocal_105[0] = gameplay::get_game_timer();
							uLocal_105[1] = gameplay::get_game_timer();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1) {
		if (iLocal_31 != 2) {
			if (iLocal_404[0] == 1) {
				if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 20f) {
					if (func_173(player::player_ped_id()) == joaat("weapon_unarmed") ||
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) || func_172(0)) {
						if (entity::is_entity_in_angled_area(player::player_ped_id(), 860.4606f, -1563.58f, 28.81788f,
															 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0)) {
							if (vLocal_119.x > vLocal_125[0 /*3*/] ||
								ped::is_ped_facing_ped(player::player_ped_id(), uLocal_43[0], 90f)) {
								iLocal_31 = 1;
							}
						}
						if (entity::is_entity_in_angled_area(player::player_ped_id(), 855.4593f, -1548.228f, 28.27722f,
															 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0)) {
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_404[1] == 1) {
				if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 15f) {
					if (func_173(player::player_ped_id()) == joaat("weapon_unarmed") ||
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) || func_172(0)) {
						if (entity::is_entity_in_angled_area(player::player_ped_id(), 939.8862f, -1575.635f, 28.59783f,
															 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0)) {
							if (vLocal_119.x < vLocal_125[1 /*3*/] ||
								ped::is_ped_facing_ped(player::player_ped_id(), uLocal_43[1], 90f)) {
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2) {
		if (fire::is_explosion_in_sphere(-1, 892.9f, -1552.4f, 30f, 40f)) {
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (iLocal_482 == 1) {
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (player::get_player_wanted_level(player::player_id()) != 0) {
			if (entity::does_entity_exist(uLocal_43[0])) {
				if (!ped::is_ped_injured(uLocal_43[0])) {
					if (ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id())) {
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
			if (entity::does_entity_exist(uLocal_43[1])) {
				if (!ped::is_ped_injured(uLocal_43[1])) {
					if (ped::_0x6CD5A433374D4CFB(uLocal_43[1], player::player_ped_id())) {
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
		}
		if (iLocal_431 == 0) {
			if (iLocal_430 == 1) {
				if (gameplay::get_game_timer() > iLocal_95 + 4000) {
					iLocal_94 = 0;
					while (iLocal_94 <= 6) {
						if (func_166()) {
							if (entity::does_entity_exist(uLocal_35[iLocal_94])) {
								if (!ped::is_ped_injured(uLocal_35[iLocal_94])) {
									if (audio::is_ped_in_current_conversation(uLocal_35[iLocal_94])) {
										iLocal_31 = 2;
										iLocal_431 = 1;
									}
								}
							}
						}
						iLocal_94++;
					}
				}
			}
		}
		if (iLocal_29 == 4 || iLocal_29 == 3 || iLocal_430 == 1) {
			iLocal_31 = 2;
			iLocal_427 = 1;
			iLocal_398 = 1;
		}
		if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (iLocal_404[0] == 1) {
				if (func_173(player::player_ped_id()) != joaat("weapon_unarmed") && !func_172(0)) {
					if (ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id())) {
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1) {
				if (func_173(player::player_ped_id()) != joaat("weapon_unarmed") && !func_172(0)) {
					if (ped::_0x6CD5A433374D4CFB(uLocal_43[1], player::player_ped_id())) {
						iLocal_31 = 2;
					}
				}
			}
		}
		if (gameplay::get_distance_between_coords(vLocal_119, vLocal_132, 1) < 36f) {
			if (iLocal_404[0] == 1) {
				if (ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id())) {
					iLocal_31 = 2;
				}
				if (func_161(uLocal_43[0], player::player_ped_id(), 1) < 20f) {
					if (player::can_ped_hear_player(player::player_id(), uLocal_43[0])) {
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1) {
				if (vLocal_119.z < 36f || ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					if (ped::_0x6CD5A433374D4CFB(uLocal_43[1], player::player_ped_id())) {
						iLocal_31 = 2;
					}
					if (func_161(uLocal_43[1], player::player_ped_id(), 1) < 20f) {
						if (player::can_ped_hear_player(player::player_id(), uLocal_43[1])) {
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_404[0] == 1) {
			if (func_161(player::player_ped_id(), uLocal_43[0], 1) < 20f) {
				if (vLocal_119.x > vLocal_125[0 /*3*/] &&
					entity::is_entity_in_angled_area(player::player_ped_id(), 868.5617f, -1579.476f, 33.30448f,
													 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) {
					if (ped::_0x6CD5A433374D4CFB(uLocal_43[0], player::player_ped_id()) ||
						player::can_ped_hear_player(player::player_id(), uLocal_43[0])) {
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_404[1] == 1) {
			if (func_161(player::player_ped_id(), uLocal_43[1], 1) < 20f) {
				if (vLocal_119.x < vLocal_125[1 /*3*/] &&
					entity::is_entity_in_angled_area(player::player_ped_id(), 936.7849f, -1569.337f, 31.49661f,
													 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0)) {
					if (ped::_0x6CD5A433374D4CFB(uLocal_43[1], player::player_ped_id()) ||
						player::can_ped_hear_player(player::player_id(), uLocal_43[1])) {
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

// Position - 0xCD6E
void func_175() {
	iLocal_64 = 0;
	while (iLocal_64 <= 6) {
		if (entity::does_entity_exist(uLocal_35[iLocal_64])) {
			if (!ped::is_ped_injured(uLocal_35[iLocal_64])) {
				if (iLocal_330[iLocal_64] == 0) {
					if (func_161(player::player_ped_id(), uLocal_35[iLocal_64], 1) > 20f) {
						iLocal_330[iLocal_64] = 1;
					}
				}
				if (iLocal_330[iLocal_64] == 1) {
					if (func_161(player::player_ped_id(), uLocal_35[iLocal_64], 1) < 20f) {
						iLocal_330[iLocal_64] = 0;
					}
				}
			}
			else if (iLocal_330[iLocal_64] == 0) {
				iLocal_330[iLocal_64] = 1;
			}
		}
		else if (iLocal_330[iLocal_64] == 0) {
			iLocal_330[iLocal_64] = 1;
		}
		iLocal_64++;
	}
	if (iLocal_330[0] == 1 && iLocal_330[1] == 1 && iLocal_330[2] == 1 && iLocal_330[3] == 1 && iLocal_330[4] == 1 &&
		iLocal_330[5] == 1) {
		iLocal_338 = 1;
	}
	else {
		iLocal_338 = 0;
	}
	iLocal_63 = 0;
	while (iLocal_63 <= 6) {
		if (entity::does_entity_exist(uLocal_35[iLocal_63])) {
			if (!ped::is_ped_injured(uLocal_35[iLocal_63])) {
				func_180(uLocal_35[iLocal_63]);
				if (iLocal_28 == 3 || iLocal_28 == 4) {
					if (iLocal_31 == 2 && iLocal_29 == 0) {
						func_179(1);
						if (iLocal_416 == 1) {
							func_103();
						}
					}
					if (ped::has_ped_received_event(uLocal_35[iLocal_63], 18)) {
						if (iLocal_29 != 4) {
							func_179(4);
							if (iLocal_416 == 1) {
								func_177();
							}
							iLocal_482 = 1;
						}
					}
					if (iLocal_29 != 4) {
						if (fire::is_explosion_in_sphere(-1, 892.9f, -1552.4f, 30f, 40f)) {
							func_179(4);
							if (iLocal_416 == 1) {
								func_177();
							}
						}
					}
					if (func_176(uLocal_35[iLocal_63], uLocal_35[0]) || func_176(uLocal_35[iLocal_63], uLocal_35[1]) ||
						func_176(uLocal_35[iLocal_63], uLocal_35[2]) || func_176(uLocal_35[iLocal_63], uLocal_35[3]) ||
						func_176(uLocal_35[iLocal_63], uLocal_35[4]) || func_176(uLocal_35[iLocal_63], uLocal_35[5]) ||
						func_176(uLocal_35[iLocal_63], uLocal_35[6]) || func_176(uLocal_35[iLocal_63], uLocal_43[0]) ||
						func_176(uLocal_35[iLocal_63], uLocal_43[1])) {
						if (iLocal_29 != 4) {
							func_179(4);
							if (iLocal_416 == 1) {
								func_177();
							}
							iLocal_482 = 1;
						}
					}
					if (func_173(player::player_ped_id()) == joaat("weapon_unarmed") ||
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) || func_172(0)) {
						if (iLocal_398 == 0) {
							if (func_161(player::player_ped_id(), uLocal_35[iLocal_63], 1) > 20f) {
								if (iLocal_322[iLocal_63] == 1) {
									iLocal_322[iLocal_63] = 0;
								}
								if (iLocal_338 == 1 && iLocal_29 != 0 && iLocal_29 != 2 && iLocal_29 != 3 &&
									iLocal_29 != 4 && iLocal_31 != 2) {
									func_179(0);
								}
							}
							if (func_161(player::player_ped_id(), uLocal_35[iLocal_63], 1) < 20f &&
								ped::_0x6CD5A433374D4CFB(uLocal_35[iLocal_63], player::player_ped_id())) {
								if (iLocal_29 != 1 && iLocal_29 != 2 && iLocal_29 != 3 && iLocal_29 != 4) {
									if (iLocal_431 == 0 && iLocal_398 == 0) {
										func_179(1);
										if (iLocal_416 == 1) {
											func_103();
										}
									}
									else {
										func_179(3);
										if (iLocal_416 == 1) {
											func_177();
										}
									}
								}
							}
							if (func_161(player::player_ped_id(), uLocal_35[iLocal_63], 1) < 20f &&
								ped::_0x6CD5A433374D4CFB(uLocal_35[iLocal_63], player::player_ped_id())) {
								if (iLocal_322[iLocal_63] == 0) {
									uLocal_69[iLocal_63] = gameplay::get_game_timer();
									iLocal_322[iLocal_63] = 1;
								}
								if (iLocal_322[iLocal_63] == 1) {
									if (gameplay::get_game_timer() > uLocal_69[iLocal_63] + 24000) {
										if (iLocal_29 != 2 && iLocal_29 != 3 && iLocal_29 != 4) {
											func_179(2);
											if (iLocal_416 == 1) {
												func_177();
											}
										}
									}
								}
							}
						}
						if (iLocal_398 == 1) {
							if (func_161(player::player_ped_id(), uLocal_35[iLocal_63], 1) < 20f &&
								ped::_0x6CD5A433374D4CFB(uLocal_35[iLocal_63], player::player_ped_id())) {
								if (iLocal_29 != 3 && iLocal_29 != 4) {
									func_179(3);
									if (iLocal_416 == 1) {
										func_177();
									}
								}
							}
						}
						if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
							if (iLocal_413 == 0) {
								iLocal_90 = gameplay::get_game_timer();
								iLocal_413 = 1;
							}
							else if (gameplay::get_game_timer() > iLocal_90 + 3000) {
								if (func_161(player::player_ped_id(), uLocal_35[iLocal_63], 1) < 20f &&
									ped::_0x6CD5A433374D4CFB(uLocal_35[iLocal_63], player::player_ped_id())) {
									if (iLocal_29 != 3 && iLocal_29 != 4) {
										func_179(3);
										if (iLocal_416 == 1) {
											func_177();
										}
									}
								}
							}
						}
						else if (iLocal_413 == 1) {
							iLocal_413 = 0;
						}
						if (entity::does_entity_exist(iLocal_33)) {
							if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
								if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 1)) {
									if (ped::_0x6CD5A433374D4CFB(uLocal_35[iLocal_63], player::player_ped_id())) {
										if (iLocal_29 != 3 && iLocal_29 != 4) {
											iLocal_390 = 1;
											func_179(3);
											if (iLocal_416 == 1) {
												func_177();
											}
										}
									}
								}
								if (func_161(player::player_ped_id(), iLocal_33, 1) < 5f &&
									ped::is_ped_getting_into_a_vehicle(player::player_ped_id())) {
									if (ped::_0x6CD5A433374D4CFB(uLocal_35[iLocal_63], player::player_ped_id())) {
										if (iLocal_29 != 3 && iLocal_29 != 4) {
											iLocal_390 = 1;
											func_179(3);
											if (iLocal_416 == 1) {
												func_177();
											}
										}
									}
									if (entity::is_entity_in_angled_area(player::player_ped_id(), 917.3436f, -1554.42f,
																		 29.26611f, 916.8774f, -1556.441f, 33.00661f,
																		 2.25f, 0, 1, 0)) {
										if (entity::does_entity_exist(uLocal_35[0])) {
											if (!ped::is_ped_injured(uLocal_35[0])) {
												if (entity::is_entity_at_coord(uLocal_35[0], 912.3f, -1542.6f, 30f, 3f,
																			   3f, 3f, 0, 1, 0)) {
													if (iLocal_29 != 3 && iLocal_29 != 4) {
														iLocal_390 = 1;
														func_179(3);
														if (iLocal_416 == 1) {
															func_177();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (entity::does_entity_exist(uLocal_35[6])) {
							if (!ped::is_ped_injured(uLocal_35[6])) {
								if (func_161(player::player_ped_id(), uLocal_35[6], 1) < 20f) {
									if (entity::is_entity_in_angled_area(player::player_ped_id(), 928.7163f, -1546.671f,
																		 27.34603f, 921.8971f, -1549.752f, 34.04724f,
																		 6.25f, 0, 1, 0) ||
										entity::is_entity_in_angled_area(player::player_ped_id(), 931.868f, -1545.185f,
																		 27.3653f, 925.8857f, -1547.303f, 34.07205f,
																		 3.5f, 0, 1, 0) ||
										entity::is_entity_in_angled_area(player::player_ped_id(), 929.4908f, -1524.829f,
																		 32.84098f, 929.3696f, -1545.288f, 37.34258f,
																		 5f, 0, 1, 0)) {
										if (ped::_0x6CD5A433374D4CFB(uLocal_35[6], player::player_ped_id())) {
											if (vLocal_119.z > 31f) {
												if (iLocal_29 != 3 && iLocal_29 != 4) {
													iLocal_428 = 1;
													func_179(3);
													if (iLocal_416 == 1) {
														func_177();
													}
												}
											}
											else if (iLocal_29 != 1 && iLocal_29 != 2 && iLocal_29 != 3 &&
													 iLocal_29 != 4) {
												func_179(1);
												if (iLocal_416 == 1) {
													func_103();
												}
											}
										}
									}
								}
							}
						}
					}
					else {
						if (iLocal_321 == 0) {
							iLocal_68 = gameplay::get_game_timer();
							iLocal_321 = 1;
						}
						if (iLocal_321 == 1) {
							if (gameplay::get_game_timer() > iLocal_68 + 4000 || iLocal_29 == 3) {
								if (func_161(player::player_ped_id(), uLocal_35[iLocal_63], 1) < 20f) {
									if (ped::_0x6CD5A433374D4CFB(uLocal_35[iLocal_63], player::player_ped_id())) {
										if (iLocal_29 != 4) {
											func_179(4);
											if (iLocal_416 == 1) {
												func_177();
											}
										}
									}
								}
							}
						}
						if (func_161(player::player_ped_id(), uLocal_35[iLocal_63], 1) < 40f) {
							if (ped::is_ped_shooting(player::player_ped_id())) {
								if (ped::_0x6CD5A433374D4CFB(uLocal_35[iLocal_63], player::player_ped_id()) ||
									player::can_ped_hear_player(player::player_id(), uLocal_35[iLocal_63])) {
									if (iLocal_29 != 4) {
										func_179(4);
										if (iLocal_416 == 1) {
											func_177();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_63++;
	}
}

// Position - 0xD5CF
int func_176(int iParam0, int iParam1) {
	if (func_161(iParam0, iParam1, 1) < 20f && ped::is_ped_facing_ped(iParam0, iParam1, 90f) &&
		!ped::is_ped_injured(iParam0) && ped::is_ped_injured(iParam1)) {
		return 1;
	}
	return 0;
}

// Position - 0xD617
void func_177() {
	Global_14611 = 0;
	func_178();
}

// Position - 0xD627
void func_178() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0xD648
void func_179(int iParam0) {
	iLocal_29 = iParam0;
	iLocal_67 = 0;
}

// Position - 0xD657
void func_180(int iParam0) {
	iLocal_65 = 0;
	while (iLocal_65 <= 6) {
		if (iParam0 == uLocal_35[iLocal_65]) {
			if (func_161(player::player_ped_id(), iParam0, 1) < 20f &&
				ped::_0x6CD5A433374D4CFB(iParam0, player::player_ped_id())) {
				if (iLocal_339[iLocal_65] == 0) {
					ai::task_look_at_entity(iParam0, player::player_ped_id(), -1, 1072, 3);
					iLocal_339[iLocal_65] = 1;
				}
			}
			else if (iLocal_339[iLocal_65] == 1) {
				ai::task_look_at_entity(iParam0, player::player_ped_id(), 1, 1072, 3);
				iLocal_339[iLocal_65] = 0;
			}
		}
		iLocal_65++;
	}
	switch (iLocal_29) {
	case 0:
		if (iLocal_67 == 0) {
			ped::set_blocking_of_non_temporary_events(iParam0, 1);
			if (iParam0 == uLocal_35[0]) {
				if (ai::does_scenario_exist_in_area(912.2f, -1542.5f, 29.8f, 3f, 0)) {
					if (ai::get_script_task_status(uLocal_35[0], 1647992574) != 1 &&
						ai::get_script_task_status(uLocal_35[0], -1680762137) != 1) {
						ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
					}
				}
			}
			if (iParam0 == uLocal_35[1]) {
				if (ai::does_scenario_exist_in_area(917.4f, -1517.4f, 30f, 3f, 0)) {
					if (ai::get_script_task_status(uLocal_35[1], 1647992574) != 1 &&
						ai::get_script_task_status(uLocal_35[1], -1680762137) != 1) {
						ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
					}
				}
			}
			if (iParam0 == uLocal_35[2]) {
				if (ai::does_scenario_exist_in_area(869.8f, -1541.2f, 29.4f, 3f, 0)) {
					if (ai::get_script_task_status(uLocal_35[2], 1647992574) != 1 &&
						ai::get_script_task_status(uLocal_35[2], -1680762137) != 1) {
						ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
					}
				}
			}
			if (iParam0 == uLocal_35[3]) {
				if (ai::does_scenario_exist_in_area(884.2f, -1574.1f, 30f, 3f, 0)) {
					if (ai::get_script_task_status(uLocal_35[3], 1647992574) != 1 &&
						ai::get_script_task_status(uLocal_35[3], -1680762137) != 1) {
						ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
					}
				}
			}
			if (iParam0 == uLocal_35[4]) {
				if (ai::does_scenario_exist_in_area(904f, -1575f, 30f, 3f, 0)) {
					if (ai::get_script_task_status(uLocal_35[4], 1647992574) != 1 &&
						ai::get_script_task_status(uLocal_35[4], -1680762137) != 1) {
						ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[4], 904f, -1575f, 30f, 20f, 0);
					}
				}
			}
			if (iParam0 == uLocal_35[5]) {
				if (ai::does_scenario_exist_in_area(905.9f, -1574.8f, 29.9f, 3f, 0)) {
					if (ai::get_script_task_status(uLocal_35[5], 1647992574) != 1 &&
						ai::get_script_task_status(uLocal_35[5], -1680762137) != 1) {
						ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
					}
				}
			}
			if (iParam0 == uLocal_35[6]) {
				if (ai::does_scenario_exist_in_area(889.5f, -1562f, 29.7f, 3f, 0)) {
					if (ai::get_script_task_status(uLocal_35[6], 1647992574) != 1 &&
						ai::get_script_task_status(uLocal_35[6], -1680762137) != 1) {
						ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
					}
				}
			}
			iLocal_67++;
		}
		if (iLocal_67 == 1) {
			if (entity::does_entity_exist(uLocal_35[4])) {
				if (!ped::is_ped_injured(uLocal_35[4])) {
					if (entity::does_entity_exist(uLocal_35[5])) {
						if (!ped::is_ped_injured(uLocal_35[5])) {
							if (func_161(player::player_ped_id(), uLocal_35[4], 1) < 25f) {
								if (entity::is_entity_in_angled_area(player::player_ped_id(), 926.455f, -1582.384f,
																	 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f,
																	 0, 1, 0) ||
									vLocal_119.y > -1573f) {
									if (iLocal_416 == 0) {
										func_122(&uLocal_137, 3, uLocal_35[4], "CONSTRUCTION2", 0, 1);
										func_122(&uLocal_137, 5, uLocal_35[5], "CONSTRUCTION3", 0, 1);
										ai::task_look_at_entity(uLocal_35[4], uLocal_35[5], -1, 0, 2);
										ai::task_look_at_entity(uLocal_35[5], uLocal_35[4], -1, 0, 2);
										if (!func_166()) {
											if (!ui::is_message_being_displayed() ||
												!ui::is_subtitle_preference_switched_on()) {
												if (func_160(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0)) {
													iLocal_416 = 1;
												}
											}
										}
									}
								}
							}
							if (entity::is_entity_at_coord(player::player_ped_id(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f,
														   0, 1, 1)) {
								if (iLocal_423 == 0) {
									iLocal_92 = gameplay::get_game_timer();
									iLocal_423 = 1;
								}
								if (iLocal_423 == 1) {
									if (gameplay::get_game_timer() > iLocal_92 + 4000) {
										if (iLocal_416 == 0) {
											func_122(&uLocal_137, 3, uLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_122(&uLocal_137, 5, uLocal_35[5], "CONSTRUCTION3", 0, 1);
											ai::task_look_at_entity(uLocal_35[4], uLocal_35[5], -1, 0, 2);
											ai::task_look_at_entity(uLocal_35[5], uLocal_35[4], -1, 0, 2);
											if (!func_166()) {
												if (!ui::is_message_being_displayed() ||
													!ui::is_subtitle_preference_switched_on()) {
													if (func_160(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0)) {
														iLocal_416 = 1;
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_416 == 1 && !func_166()) {
								if (iLocal_415 == 0) {
									if (ai::does_scenario_exist_in_area(865f, -1558.1f, 29.5f, 3f, 0)) {
										ai::task_clear_look_at(uLocal_35[4]);
										ai::task_clear_look_at(uLocal_35[5]);
										ai::task_use_nearest_scenario_to_coord(uLocal_35[4], 865f, -1558.1f, 29.5f, 3f,
																			   0);
										iLocal_415 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (iParam0 == uLocal_35[6]) {
				if (iLocal_424 == 0) {
					if (iLocal_425 == 0) {
						iLocal_93 = gameplay::get_game_timer();
						iLocal_425 = 1;
					}
					if (gameplay::get_game_timer() > iLocal_93 + 30000) {
						if (iLocal_424 == 0) {
							if (ai::does_scenario_exist_in_area(925f, -1561f, 30f, 3f, 0)) {
								ai::task_use_nearest_scenario_to_coord(uLocal_35[6], 925f, -1561f, 30f, 3f, 0);
								iLocal_424 = 1;
								iLocal_425 = 0;
							}
						}
					}
				}
				if (iLocal_424 == 1) {
					if (entity::is_entity_at_coord(uLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0)) {
						if (func_161(player::player_ped_id(), uLocal_35[6], 1) < 15f && vLocal_119.z < 40f) {
							if (iLocal_426 == 0) {
								if (ai::does_scenario_exist_in_area(909.5f, -1515.5f, 30f, 3f, 0)) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[6], 909.5f, -1515.5f, 30f,
																				 50f, 0);
									iLocal_426 = 1;
								}
							}
						}
					}
				}
			}
		}
		break;

	case 1:
		if (iLocal_67 == 0) {
			iLocal_65 = 0;
			while (iLocal_65 <= 6) {
				if (iLocal_31 == 0) {
					if (iParam0 == uLocal_35[iLocal_65]) {
						if (func_161(player::player_ped_id(), iParam0, 1) < 20f) {
							if (iLocal_347[iLocal_65] == 0) {
								if (ped::_0x6CD5A433374D4CFB(iParam0, player::player_ped_id()) ||
									player::can_ped_hear_player(player::player_id(), iParam0)) {
									if (!entity::is_entity_on_screen(iParam0)) {
										ai::clear_ped_tasks_immediately(iParam0);
									}
									if (entity::is_entity_on_screen(iParam0)) {
										ai::clear_ped_tasks(iParam0);
									}
									ai::open_sequence_task(&iLocal_57);
									ai::task_go_to_entity(0, player::player_ped_id(), -1, 2f, 1f, 1073741824, 0);
									ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
									ai::close_sequence_task(iLocal_57);
									ai::task_perform_sequence(iParam0, iLocal_57);
									ai::clear_sequence_task(&iLocal_57);
									ped::set_blocking_of_non_temporary_events(iParam0, 1);
									iLocal_339[iLocal_65] = 0;
									iLocal_347[iLocal_65] = 1;
								}
							}
							if (iLocal_347[iLocal_65] == 1) {
								if (!ped::is_ped_facing_ped(iParam0, player::player_ped_id(), 45f)) {
									ai::task_turn_ped_to_face_entity(iParam0, player::player_ped_id(), 0);
									iLocal_347[iLocal_65] = 0;
								}
							}
						}
						else {
							if (iLocal_347[iLocal_65] == 1) {
								iLocal_347[iLocal_65] = 0;
							}
							if (iParam0 == uLocal_35[0]) {
								if (ai::does_scenario_exist_in_area(912.2f, -1542.5f, 29.8f, 3f, 0)) {
									if (ai::get_script_task_status(uLocal_35[0], 1647992574) != 1 &&
										ai::get_script_task_status(uLocal_35[0], -1680762137) != 1) {
										ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[0], 912.2f, -1542.5f,
																					 29.8f, 20f, 0);
										ped::set_blocking_of_non_temporary_events(uLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == uLocal_35[1]) {
								if (ai::does_scenario_exist_in_area(917.4f, -1517.4f, 30f, 3f, 0)) {
									if (ai::get_script_task_status(uLocal_35[1], 1647992574) != 1 &&
										ai::get_script_task_status(uLocal_35[1], -1680762137) != 1) {
										ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[1], 917.4f, -1517.4f,
																					 30f, 20f, 0);
										ped::set_blocking_of_non_temporary_events(uLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == uLocal_35[2]) {
								if (ai::does_scenario_exist_in_area(869.8f, -1541.2f, 29.4f, 3f, 0)) {
									if (ai::get_script_task_status(uLocal_35[2], 1647992574) != 1 &&
										ai::get_script_task_status(uLocal_35[2], -1680762137) != 1) {
										ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[2], 869.8f, -1541.2f,
																					 29.4f, 20f, 0);
										ped::set_blocking_of_non_temporary_events(uLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == uLocal_35[3]) {
								if (ai::does_scenario_exist_in_area(884.2f, -1574.1f, 30f, 3f, 0)) {
									if (ai::get_script_task_status(uLocal_35[3], 1647992574) != 1 &&
										ai::get_script_task_status(uLocal_35[3], -1680762137) != 1) {
										ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[3], 884.2f, -1574.1f,
																					 30f, 20f, 0);
										ped::set_blocking_of_non_temporary_events(uLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == uLocal_35[4]) {
								if (ai::does_scenario_exist_in_area(904f, -1575f, 30f, 3f, 0)) {
									if (ai::get_script_task_status(uLocal_35[4], 1647992574) != 1 &&
										ai::get_script_task_status(uLocal_35[4], -1680762137) != 1) {
										ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[4], 904f, -1575f, 30f,
																					 20f, 0);
										ped::set_blocking_of_non_temporary_events(uLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == uLocal_35[5]) {
								if (ai::does_scenario_exist_in_area(905.9f, -1574.8f, 29.9f, 3f, 0)) {
									if (ai::get_script_task_status(uLocal_35[5], 1647992574) != 1 &&
										ai::get_script_task_status(uLocal_35[5], -1680762137) != 1) {
										ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[5], 905.9f, -1574.8f,
																					 29.9f, 20f, 0);
										ped::set_blocking_of_non_temporary_events(uLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == uLocal_35[6]) {
								if (ai::does_scenario_exist_in_area(889.5f, -1562f, 29.7f, 3f, 0)) {
									if (ai::get_script_task_status(uLocal_35[6], 1647992574) != 1 &&
										ai::get_script_task_status(uLocal_35[6], -1680762137) != 1) {
										ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[6], 889.5f, -1562f,
																					 29.7f, 20f, 0);
										ped::set_blocking_of_non_temporary_events(uLocal_35[6], 1);
									}
								}
							}
						}
					}
				}
				else if (iParam0 == uLocal_35[iLocal_65]) {
					if (func_161(player::player_ped_id(), iParam0, 1) < 20f) {
						if (iLocal_347[iLocal_65] == 0) {
							if (ped::_0x6CD5A433374D4CFB(iParam0, player::player_ped_id()) ||
								player::can_ped_hear_player(player::player_id(), iParam0)) {
								if (!entity::is_entity_on_screen(iParam0)) {
									ai::clear_ped_tasks_immediately(iParam0);
								}
								if (entity::is_entity_on_screen(iParam0)) {
									ai::clear_ped_tasks(iParam0);
								}
								ai::open_sequence_task(&iLocal_57);
								ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
								ai::task_look_at_entity(0, player::player_ped_id(), -1, 1072, 3);
								ai::close_sequence_task(iLocal_57);
								ai::task_perform_sequence(iParam0, iLocal_57);
								ai::clear_sequence_task(&iLocal_57);
								ped::set_blocking_of_non_temporary_events(iParam0, 1);
								iLocal_339[iLocal_65] = 0;
								iLocal_347[iLocal_65] = 1;
							}
						}
						if (iLocal_347[iLocal_65] == 1) {
							if (!ped::is_ped_facing_ped(iParam0, player::player_ped_id(), 45f)) {
								ai::task_turn_ped_to_face_entity(iParam0, player::player_ped_id(), 0);
								iLocal_347[iLocal_65] = 0;
							}
						}
					}
					else {
						if (iLocal_347[iLocal_65] == 1) {
							iLocal_347[iLocal_65] = 0;
						}
						if (iParam0 == uLocal_35[0]) {
							if (ai::does_scenario_exist_in_area(912.2f, -1542.5f, 29.8f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[0], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[0], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[0], 912.2f, -1542.5f, 29.8f,
																				 20f, 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[0], 1);
								}
							}
						}
						if (iParam0 == uLocal_35[1]) {
							if (ai::does_scenario_exist_in_area(917.4f, -1517.4f, 30f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[1], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[1], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[1], 917.4f, -1517.4f, 30f,
																				 20f, 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[1], 1);
								}
							}
						}
						if (iParam0 == uLocal_35[2]) {
							if (ai::does_scenario_exist_in_area(869.8f, -1541.2f, 29.4f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[2], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[2], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[2], 869.8f, -1541.2f, 29.4f,
																				 20f, 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[2], 1);
								}
							}
						}
						if (iParam0 == uLocal_35[3]) {
							if (ai::does_scenario_exist_in_area(884.2f, -1574.1f, 30f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[3], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[3], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[3], 884.2f, -1574.1f, 30f,
																				 20f, 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[3], 1);
								}
							}
						}
						if (iParam0 == uLocal_35[4]) {
							if (ai::does_scenario_exist_in_area(904f, -1575f, 30f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[4], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[4], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[4], 904f, -1575f, 30f, 20f,
																				 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[4], 1);
								}
							}
						}
						if (iParam0 == uLocal_35[5]) {
							if (ai::does_scenario_exist_in_area(905.9f, -1574.8f, 29.9f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[5], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[5], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[5], 905.9f, -1574.8f, 29.9f,
																				 20f, 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[5], 1);
								}
							}
						}
						if (iParam0 == uLocal_35[6]) {
							if (ai::does_scenario_exist_in_area(889.5f, -1562f, 29.7f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[6], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[6], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[6], 889.5f, -1562f, 29.7f,
																				 20f, 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[6], 1);
								}
							}
						}
					}
				}
				iLocal_65++;
			}
		}
		break;

	case 2:
		if (iLocal_483 == 0) {
			iLocal_483 = 1;
		}
		if (iLocal_67 == 0) {
			ped::set_relationship_between_groups(5, iLocal_302, 1862763509);
			iLocal_67++;
		}
		if (iLocal_67 == 1) {
			iLocal_65 = 0;
			while (iLocal_65 <= 6) {
				if (iParam0 == uLocal_35[iLocal_65]) {
					if (func_161(iParam0, player::player_ped_id(), 1) < 15f) {
						if (func_161(iParam0, player::player_ped_id(), 1) > 3f) {
							if (ai::get_script_task_status(iParam0, 242628503) != 0 ||
								ai::get_script_task_status(iParam0, 242628503) != 1) {
								if (!entity::is_entity_on_screen(iParam0)) {
									ai::clear_ped_tasks_immediately(iParam0);
								}
								if (entity::is_entity_on_screen(iParam0)) {
									ai::clear_ped_tasks(iParam0);
								}
								ai::open_sequence_task(&iLocal_57);
								ai::task_go_to_entity(0, player::player_ped_id(), -1, 1f, 1f, 1073741824, 0);
								ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
								ai::close_sequence_task(iLocal_57);
								ai::task_perform_sequence(iParam0, iLocal_57);
								ai::clear_sequence_task(&iLocal_57);
								iLocal_339[iLocal_65] = 0;
							}
						}
					}
					else {
						if (iParam0 == uLocal_35[0]) {
							if (ai::does_scenario_exist_in_area(912.2f, -1542.5f, 29.8f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[0], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[0], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[0], 912.2f, -1542.5f, 29.8f,
																				 20f, 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[0], 1);
								}
							}
						}
						if (iParam0 == uLocal_35[1]) {
							if (ai::does_scenario_exist_in_area(917.4f, -1517.4f, 30f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[1], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[1], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[1], 917.4f, -1517.4f, 30f,
																				 20f, 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[1], 1);
								}
							}
						}
						if (iParam0 == uLocal_35[2]) {
							if (ai::does_scenario_exist_in_area(869.8f, -1541.2f, 29.4f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[2], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[2], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[2], 869.8f, -1541.2f, 29.4f,
																				 20f, 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[2], 1);
								}
							}
						}
						if (iParam0 == uLocal_35[3]) {
							if (ai::does_scenario_exist_in_area(884.2f, -1574.1f, 30f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[3], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[3], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[3], 884.2f, -1574.1f, 30f,
																				 20f, 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[3], 1);
								}
							}
						}
						if (iParam0 == uLocal_35[4]) {
							if (ai::does_scenario_exist_in_area(904f, -1575f, 30f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[4], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[4], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[4], 904f, -1575f, 30f, 20f,
																				 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[4], 1);
								}
							}
						}
						if (iParam0 == uLocal_35[5]) {
							if (ai::does_scenario_exist_in_area(905.9f, -1574.8f, 29.9f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[5], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[5], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[5], 905.9f, -1574.8f, 29.9f,
																				 20f, 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[5], 1);
								}
							}
						}
						if (iParam0 == uLocal_35[6]) {
							if (ai::does_scenario_exist_in_area(889.5f, -1562f, 29.7f, 3f, 0)) {
								if (ai::get_script_task_status(uLocal_35[6], 1647992574) != 1 &&
									ai::get_script_task_status(uLocal_35[6], -1680762137) != 1) {
									ai::task_use_nearest_scenario_chain_to_coord(uLocal_35[6], 889.5f, -1562f, 29.7f,
																				 20f, 0);
									ped::set_blocking_of_non_temporary_events(uLocal_35[6], 1);
								}
							}
						}
					}
				}
				iLocal_65++;
			}
		}
		break;

	case 3:
		if (iLocal_483 == 0) {
			iLocal_483 = 1;
		}
		if (iLocal_393 == 0) {
			if (iLocal_394 == 0) {
				iLocal_79 = gameplay::get_game_timer();
				iLocal_394 = 1;
			}
			if (iLocal_394 == 1) {
				if (gameplay::get_game_timer() > iLocal_79 + 9000) {
					player::set_max_wanted_level(5);
					player::set_wanted_level_multiplier(1f);
					player::set_player_wanted_level(player::player_id(), 2, 0);
					player::set_player_wanted_level_now(player::player_id(), 0);
					iLocal_393 = 1;
				}
			}
		}
		if (iLocal_67 == 0) {
			ped::set_relationship_between_groups(5, iLocal_302, 1862763509);
			iLocal_67++;
		}
		if (iLocal_67 == 1) {
			if (iLocal_28 == 3) {
				iLocal_65 = 0;
				while (iLocal_65 <= 6) {
					if (iParam0 == uLocal_35[iLocal_65]) {
						if (func_161(iParam0, player::player_ped_id(), 1) < 100f) {
							if (iLocal_355[iLocal_65] == 0) {
								ped::set_blocking_of_non_temporary_events(iParam0, 1);
								iLocal_355[iLocal_65] = 1;
							}
							if (iLocal_363[iLocal_65] == 0) {
								if (!entity::is_entity_on_screen(iParam0)) {
									ai::clear_ped_tasks_immediately(iParam0);
								}
								if (entity::is_entity_on_screen(iParam0)) {
									ai::clear_ped_tasks(iParam0);
								}
								ai::task_combat_hated_targets_around_ped(iParam0, 100f, 0);
								iLocal_339[iLocal_65] = 0;
								iLocal_363[iLocal_65] = 1;
							}
						}
					}
					iLocal_65++;
				}
				if (iLocal_468 == 0) {
					if (entity::does_entity_exist(uLocal_35[0])) {
						if (!ped::is_ped_injured(uLocal_35[0])) {
							if (entity::does_entity_exist(iLocal_33)) {
								if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
									if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_33, 1) &&
										entity::is_entity_at_coord(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1,
																   0)) {
										if (!entity::is_entity_on_screen(uLocal_35[0])) {
											ai::clear_ped_tasks_immediately(uLocal_35[0]);
										}
										if (entity::is_entity_on_screen(uLocal_35[0])) {
											ai::clear_ped_tasks(uLocal_35[0]);
										}
										ai::open_sequence_task(&iLocal_57);
										ai::task_follow_nav_mesh_to_coord(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0,
																		  1193033728);
										ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
										ai::task_play_anim(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f,
														   -8f, -1, 1, 0, 0, 0, 0);
										ai::close_sequence_task(iLocal_57);
										ai::task_perform_sequence(uLocal_35[0], iLocal_57);
										ai::clear_sequence_task(&iLocal_57);
										iLocal_468 = 1;
									}
								}
							}
						}
					}
				}
				if (iLocal_468 == 1 && iLocal_487 == 0) {
					if (entity::does_entity_exist(uLocal_35[0])) {
						if (!ped::is_ped_injured(uLocal_35[0])) {
							if (entity::is_entity_at_coord(uLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0)) {
								func_122(&uLocal_137, 3, uLocal_35[0], "FHPrepBWorker", 0, 1);
								func_169(uLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
								iLocal_487 = 1;
							}
						}
					}
				}
				if (iLocal_467 == 0) {
					if (gameplay::get_game_timer() > iLocal_79 + 3000) {
						if (entity::does_entity_exist(uLocal_35[5])) {
							if (!ped::is_ped_injured(uLocal_35[5])) {
								ai::task_play_anim(uLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f,
												   -1, 49, 0, 0, 0, 0);
								iLocal_111 = gameplay::get_game_timer();
								iLocal_467 = 1;
							}
						}
					}
				}
				else if (iLocal_466 == 0) {
					if (gameplay::get_game_timer() > iLocal_111 + 5000) {
						if (entity::does_entity_exist(uLocal_35[5])) {
							if (!ped::is_ped_injured(uLocal_35[5])) {
								ai::clear_ped_tasks(uLocal_35[5]);
								ai::task_combat_ped(uLocal_35[5], player::player_ped_id(), 0, 16);
								iLocal_466 = 1;
							}
						}
					}
				}
			}
			iLocal_65 = 0;
			while (iLocal_65 <= 6) {
				if (iLocal_306[iLocal_65] == 0) {
					if (iParam0 == uLocal_35[iLocal_65]) {
						if (entity::does_entity_exist(iParam0)) {
							if (!ped::is_ped_injured(iParam0)) {
								ped::set_blocking_of_non_temporary_events(iParam0, 1);
								if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
									if (func_161(iParam0, player::player_ped_id(), 1) > 200f) {
										if (!entity::is_entity_on_screen(iParam0)) {
											ai::clear_ped_tasks_immediately(iParam0);
										}
										if (entity::is_entity_on_screen(iParam0)) {
											ai::clear_ped_tasks(iParam0);
										}
										ai::task_smart_flee_ped(iParam0, player::player_ped_id(), 1000f, -1, 0, 0);
										iLocal_306[iLocal_65] = 1;
									}
								}
								else if (func_161(iParam0, player::player_ped_id(), 1) > 100f) {
									if (!entity::is_entity_on_screen(iParam0)) {
										ai::clear_ped_tasks_immediately(iParam0);
									}
									if (entity::is_entity_on_screen(iParam0)) {
										ai::clear_ped_tasks(iParam0);
									}
									ai::task_smart_flee_ped(iParam0, player::player_ped_id(), 1000f, -1, 0, 0);
									iLocal_306[iLocal_65] = 1;
								}
							}
						}
					}
				}
				iLocal_65++;
			}
		}
		if (iLocal_28 == 4) {
			iLocal_65 = 0;
			while (iLocal_65 <= 6) {
				if (iLocal_306[iLocal_65] == 0) {
					if (iParam0 == uLocal_35[iLocal_65]) {
						if (entity::does_entity_exist(iParam0)) {
							if (!ped::is_ped_injured(iParam0)) {
								if (!entity::is_entity_on_screen(iParam0)) {
									ai::clear_ped_tasks_immediately(iParam0);
								}
								if (entity::is_entity_on_screen(iParam0)) {
									ai::clear_ped_tasks(iParam0);
								}
								ped::set_blocking_of_non_temporary_events(iParam0, 1);
								ai::task_smart_flee_ped(iParam0, player::player_ped_id(), 1000f, -1, 0, 0);
								ped::set_ped_keep_task(iParam0, 1);
								entity::set_ped_as_no_longer_needed(&iParam0);
								iLocal_306[iLocal_65] = 1;
							}
						}
					}
				}
				iLocal_65++;
			}
		}
		break;

	case 4:
		if (iLocal_483 == 0) {
			iLocal_483 = 1;
		}
		if (iLocal_393 == 0) {
			if (iLocal_394 == 0) {
				iLocal_79 = gameplay::get_game_timer();
				iLocal_394 = 1;
			}
			if (iLocal_394 == 1) {
				if (gameplay::get_game_timer() > iLocal_79 + 6000) {
					player::set_max_wanted_level(5);
					player::set_wanted_level_multiplier(1f);
					player::set_player_wanted_level(player::player_id(), 2, 0);
					player::set_player_wanted_level_now(player::player_id(), 0);
					iLocal_393 = 1;
				}
			}
		}
		if (iLocal_67 == 0) {
			ped::set_relationship_between_groups(5, iLocal_302, 1862763509);
			ped::set_blocking_of_non_temporary_events(iParam0, 1);
			iLocal_67++;
		}
		if (iLocal_67 == 1) {
			iLocal_65 = 0;
			while (iLocal_65 <= 6) {
				if (entity::does_entity_exist(uLocal_35[iLocal_65])) {
					if (!ped::is_ped_injured(uLocal_35[iLocal_65])) {
						if (func_161(player::player_ped_id(), uLocal_35[iLocal_65], 1) < 15f) {
							if (func_181(uLocal_35[iLocal_65], 6)) {
								if (ped::_0x6CD5A433374D4CFB(uLocal_35[iLocal_65], player::player_ped_id())) {
									if (iLocal_379[iLocal_65] == 0) {
										if (!entity::is_entity_on_screen(uLocal_35[iLocal_65])) {
											ai::clear_ped_tasks_immediately(uLocal_35[iLocal_65]);
										}
										if (entity::is_entity_on_screen(uLocal_35[iLocal_65])) {
											ai::clear_ped_tasks(uLocal_35[iLocal_65]);
										}
										ai::task_hands_up(uLocal_35[iLocal_65], -1, player::player_ped_id(), -1, 0);
										iLocal_379[iLocal_65] = 1;
										iLocal_371[iLocal_65] = 0;
										iLocal_339[iLocal_65] = 0;
										iLocal_91 = gameplay::get_game_timer();
									}
								}
								else if (gameplay::get_game_timer() > iLocal_91 + 300) {
									iLocal_371[iLocal_65] = 0;
								}
							}
							else if (iLocal_371[iLocal_65] == 0) {
								if (!entity::is_entity_on_screen(uLocal_35[iLocal_65])) {
									ai::clear_ped_tasks_immediately(uLocal_35[iLocal_65]);
								}
								if (entity::is_entity_on_screen(uLocal_35[iLocal_65])) {
									ai::clear_ped_tasks(uLocal_35[iLocal_65]);
								}
								ai::task_smart_flee_ped(uLocal_35[iLocal_65], player::player_ped_id(), 250f, -1, 0, 0);
								iLocal_371[iLocal_65] = 1;
								iLocal_379[iLocal_65] = 0;
							}
						}
						else if (iLocal_371[iLocal_65] == 0) {
							if (!entity::is_entity_on_screen(uLocal_35[iLocal_65])) {
								ai::clear_ped_tasks_immediately(uLocal_35[iLocal_65]);
							}
							if (entity::is_entity_on_screen(uLocal_35[iLocal_65])) {
								ai::clear_ped_tasks(uLocal_35[iLocal_65]);
							}
							ai::task_smart_flee_ped(uLocal_35[iLocal_65], player::player_ped_id(), 250f, -1, 0, 0);
							iLocal_371[iLocal_65] = 1;
							iLocal_379[iLocal_65] = 0;
						}
					}
				}
				iLocal_65++;
			}
		}
		break;
	}
}

// Position - 0xF047
bool func_181(int iParam0, int iParam1) {
	if (entity::does_entity_exist(iParam0) && !ped::is_ped_injured(iParam0)) {
		if (weapon::is_ped_armed(player::player_ped_id(), iParam1)) {
			if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) ||
				player::is_player_targetting_entity(player::player_id(), iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xF093
void func_182() {
	iLocal_46 = func_25(0);
	iLocal_47 = func_25(1);
	iLocal_48 = func_25(2);
	if (func_33(iLocal_46, 0)) {
		if (!ped::is_ped_injured(iLocal_46)) {
			if (!func_32(iLocal_46)) {
				if (!func_184()) {
					if (func_183(iLocal_46)) {
						if (func_31(iLocal_46, 0)) {
							entity::set_entity_as_mission_entity(iLocal_46, 1, 1);
							ped::set_blocking_of_non_temporary_events(iLocal_46, 1);
							ai::clear_ped_tasks(iLocal_46);
							iLocal_473 = 0;
							iLocal_476 = 0;
							iLocal_479 = 0;
						}
					}
				}
			}
			else {
				if (iLocal_473 == 0) {
					if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						iLocal_473 = 1;
					}
					else if (ped::is_ped_in_any_vehicle(iLocal_46, 0)) {
						if (!ped::is_ped_in_vehicle(iLocal_46, ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
													0)) {
							iLocal_473 = 1;
						}
					}
				}
				if (iLocal_473 == 0) {
					if (func_184()) {
						iLocal_473 = 1;
					}
				}
				if (iLocal_470 == 1) {
					if (func_183(iLocal_46) && entity::does_entity_belong_to_this_script(iLocal_46, 1) &&
						iLocal_473 == 0) {
						vLocal_122 = {entity::get_entity_coords(iLocal_46, 1)};
						pathfind::_0x07FB139B592FA687(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y);
						if (player::get_player_wanted_level(player::player_id()) == 0) {
							if (iLocal_476 == 0) {
								if (pathfind::_0xF7B79A50B905A30D(vLocal_122.x, vLocal_122.y, vLocal_116.x,
																  vLocal_116.y)) {
									ai::task_vehicle_mission_coors_target(iLocal_46,
																		  ped::get_vehicle_ped_is_in(iLocal_46, 0),
																		  vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (entity::does_entity_exist(
									 vehicle::get_closest_vehicle(vLocal_122, 200f, joaat("police3"), 32768))) {
							if (iLocal_479 == 0) {
								ai::task_vehicle_mission(
									iLocal_46, ped::get_vehicle_ped_is_in(iLocal_46, 0),
									vehicle::get_closest_vehicle(vLocal_122, 200f, joaat("police3"), 32768), 8, 40f,
									262144, 300f, 1f, 1);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0) {
							if (pathfind::_0xF7B79A50B905A30D(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y)) {
								ai::task_vehicle_mission_coors_target(iLocal_46,
																	  ped::get_vehicle_ped_is_in(iLocal_46, 0),
																	  vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_479 = 0;
								iLocal_476 = 1;
							}
						}
					}
					else {
						iLocal_473 = 1;
					}
				}
				if (iLocal_473 == 1) {
					if (func_24(iLocal_46)) {
						iLocal_473 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_48, 0)) {
		if (!ped::is_ped_injured(iLocal_48)) {
			if (!func_32(iLocal_48)) {
				if (!func_184()) {
					if (func_183(iLocal_48)) {
						if (func_31(iLocal_48, 0)) {
							entity::set_entity_as_mission_entity(iLocal_48, 1, 1);
							ped::set_blocking_of_non_temporary_events(iLocal_48, 1);
							ai::clear_ped_tasks(iLocal_48);
							iLocal_475 = 0;
							iLocal_477 = 0;
							iLocal_480 = 0;
						}
					}
				}
			}
			else {
				if (iLocal_475 == 0) {
					if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						iLocal_475 = 1;
					}
					else if (ped::is_ped_in_any_vehicle(iLocal_48, 0)) {
						if (!ped::is_ped_in_vehicle(iLocal_48, ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
													0)) {
							iLocal_475 = 1;
						}
					}
				}
				if (iLocal_475 == 0) {
					if (func_184()) {
						iLocal_475 = 1;
					}
				}
				if (iLocal_471 == 1) {
					if (func_183(iLocal_48) && entity::does_entity_belong_to_this_script(iLocal_48, 1) &&
						iLocal_475 == 0) {
						vLocal_122 = {entity::get_entity_coords(iLocal_48, 1)};
						pathfind::_0x07FB139B592FA687(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y);
						if (player::get_player_wanted_level(player::player_id()) == 0) {
							if (iLocal_477 == 0) {
								if (pathfind::_0xF7B79A50B905A30D(vLocal_122.x, vLocal_122.y, vLocal_116.x,
																  vLocal_116.y)) {
									ai::task_vehicle_mission_coors_target(iLocal_48,
																		  ped::get_vehicle_ped_is_in(iLocal_48, 0),
																		  vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_480 = 0;
									iLocal_477 = 1;
								}
							}
						}
						else if (entity::does_entity_exist(
									 vehicle::get_closest_vehicle(vLocal_122, 200f, joaat("police3"), 32768))) {
							if (iLocal_480 == 0) {
								ai::task_vehicle_mission(
									iLocal_48, ped::get_vehicle_ped_is_in(iLocal_48, 0),
									vehicle::get_closest_vehicle(vLocal_122, 200f, joaat("police3"), 32768), 8, 40f,
									262144, 300f, 1f, 1);
								iLocal_477 = 0;
								iLocal_480 = 1;
							}
						}
						else if (iLocal_477 == 0) {
							if (pathfind::_0xF7B79A50B905A30D(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y)) {
								ai::task_vehicle_mission_coors_target(iLocal_48,
																	  ped::get_vehicle_ped_is_in(iLocal_48, 0),
																	  vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_480 = 0;
								iLocal_477 = 1;
							}
						}
					}
					else {
						iLocal_475 = 1;
					}
				}
				if (iLocal_475 == 1) {
					if (func_24(iLocal_48)) {
						iLocal_475 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_47, 0)) {
		if (!ped::is_ped_injured(iLocal_47)) {
			if (!func_32(iLocal_47)) {
				if (!func_184()) {
					if (func_183(iLocal_47)) {
						if (func_31(iLocal_47, 0)) {
							entity::set_entity_as_mission_entity(iLocal_47, 1, 1);
							ped::set_blocking_of_non_temporary_events(iLocal_47, 1);
							ai::clear_ped_tasks(iLocal_47);
							iLocal_474 = 0;
							iLocal_478 = 0;
							iLocal_481 = 0;
						}
					}
				}
			}
			else {
				if (iLocal_474 == 0) {
					if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						iLocal_474 = 1;
					}
					else if (ped::is_ped_in_any_vehicle(iLocal_47, 0)) {
						if (!ped::is_ped_in_vehicle(iLocal_47, ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
													0)) {
							iLocal_474 = 1;
						}
					}
				}
				if (iLocal_474 == 0) {
					if (func_184()) {
						iLocal_474 = 1;
					}
				}
				if (iLocal_472 == 1) {
					if (func_183(iLocal_47) && entity::does_entity_belong_to_this_script(iLocal_47, 1) &&
						iLocal_474 == 0) {
						vLocal_122 = {entity::get_entity_coords(iLocal_47, 1)};
						pathfind::_0x07FB139B592FA687(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y);
						if (player::get_player_wanted_level(player::player_id()) == 0) {
							if (iLocal_478 == 0) {
								if (pathfind::_0xF7B79A50B905A30D(vLocal_122.x, vLocal_122.y, vLocal_116.x,
																  vLocal_116.y)) {
									ai::task_vehicle_mission_coors_target(iLocal_47,
																		  ped::get_vehicle_ped_is_in(iLocal_47, 0),
																		  vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_481 = 0;
									iLocal_478 = 1;
								}
							}
						}
						else if (entity::does_entity_exist(
									 vehicle::get_closest_vehicle(vLocal_122, 200f, joaat("police3"), 32768))) {
							if (iLocal_481 == 0) {
								ai::task_vehicle_mission(
									iLocal_47, ped::get_vehicle_ped_is_in(iLocal_47, 0),
									vehicle::get_closest_vehicle(vLocal_122, 200f, joaat("police3"), 32768), 8, 40f,
									262144, 300f, 1f, 1);
								iLocal_478 = 0;
								iLocal_481 = 1;
							}
						}
						else if (iLocal_478 == 0) {
							if (pathfind::_0xF7B79A50B905A30D(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y)) {
								ai::task_vehicle_mission_coors_target(iLocal_47,
																	  ped::get_vehicle_ped_is_in(iLocal_47, 0),
																	  vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_481 = 0;
								iLocal_478 = 1;
							}
						}
					}
					else {
						iLocal_474 = 1;
					}
				}
				if (iLocal_474 == 1) {
					if (func_24(iLocal_47)) {
						iLocal_474 = 0;
					}
				}
			}
		}
	}
}

// Position - 0xF6BC
bool func_183(int iParam0) {
	if (!ped::is_ped_injured(player::player_ped_id()) && ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!ped::is_ped_injured(iParam0)) {
			if (ped::is_ped_in_vehicle(iParam0, ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0) &&
				vehicle::get_ped_in_vehicle_seat(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), -1, 0) ==
					iParam0) {
				if (entity::does_entity_exist(iLocal_33)) {
					if (vehicle::is_vehicle_driveable(iLocal_33, 0)) {
						if (ped::is_ped_in_vehicle(iParam0, iLocal_33, 0) &&
							vehicle::get_ped_in_vehicle_seat(iLocal_33, -1, 0) == iParam0 &&
							!entity::is_entity_at_coord(iLocal_33, vLocal_116, 3f, 3f, 3f, 0, 1, 0)) {
							if (iParam0 == iLocal_46) {
								iLocal_470 = 1;
							}
							if (iParam0 == iLocal_48) {
								iLocal_471 = 1;
							}
							if (iParam0 == iLocal_47) {
								iLocal_472 = 1;
							}
							return true;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_46) {
		iLocal_470 = 0;
	}
	if (iParam0 == iLocal_48) {
		iLocal_471 = 0;
	}
	if (iParam0 == iLocal_47) {
		iLocal_472 = 0;
	}
	return false;
}

// Position - 0xF79E
bool func_184() { return Global_17149; }

// Position - 0xF7A9
void func_185() {
	if (entity::does_entity_exist(iLocal_33)) {
		if (!vehicle::is_vehicle_driveable(iLocal_33, 0)) {
			func_188(3);
			return;
		}
		else {
			if (func_187(&iLocal_33)) {
				func_188(2);
				return;
			}
			if (entity::does_entity_exist(iLocal_32)) {
				if (!vehicle::is_vehicle_driveable(iLocal_32, 0)) {
					func_188(1);
					return;
				}
				if (vehicle::is_vehicle_driveable(iLocal_32, 0)) {
					if (!vehicle::is_vehicle_attached_to_trailer(iLocal_33)) {
						if (vehicle::is_vehicle_stuck_on_roof(iLocal_32) || func_186(iLocal_32) ||
							func_187(&iLocal_32)) {
							func_188(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4) {
		if (entity::does_entity_exist(iLocal_32)) {
			if (vehicle::is_vehicle_driveable(iLocal_32, 0)) {
				if (func_161(iLocal_32, player::player_ped_id(), 1) > 600f) {
					func_188(5);
					return;
				}
			}
		}
	}
	if (entity::does_entity_exist(iLocal_49)) {
		if (ped::is_ped_injured(iLocal_49)) {
			func_188(6);
			return;
		}
	}
}

// Position - 0xF894
int func_186(int iParam0) {
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

// Position - 0xF8D7
bool func_187(int iParam0) {
	if (vehicle::is_vehicle_driveable(*iParam0, 0)) {
		if (vehicle::is_vehicle_stuck_timer_up(*iParam0, 0, 7000) ||
			vehicle::is_vehicle_stuck_timer_up(*iParam0, 3, 30000) ||
			vehicle::is_vehicle_stuck_timer_up(*iParam0, 2, 30000) ||
			vehicle::is_vehicle_stuck_timer_up(*iParam0, 1, 40000)) {
			return true;
		}
	}
	return false;
}

// Position - 0xF931
void func_188(int iParam0) {
	iLocal_30 = iParam0;
	if (iLocal_28 != 6) {
		iLocal_28 = 6;
		iLocal_62 = 0;
	}
}

// Position - 0xF949
void func_189(int iParam0, int iParam1) {
	if (iParam0 == 146 || iParam0 == -1) {
		return;
	}
	if (Global_101700.f_8044.f_99.f_58[iParam0] == iParam1) {
		return;
	}
	Global_101700.f_8044.f_99.f_58[iParam0] = iParam1;
}

// Position - 0xF98E
void func_190() {
	if (iLocal_28 == 5) {
		if (iLocal_483 == 0) {
			func_191(657);
		}
	}
}

// Position - 0xF9AA
void func_191(int iParam0) {
	int iVar0;
	int iVar1;

	Global_55823 = 0;
	if (MissionObjectives[iParam0 /*13*/] != 3) {
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

// Position - 0xFA1B
bool func_192(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xFA46
void func_193() {
	player::set_all_random_peds_flee(player::player_id(), 0);
	vehicle::set_vehicle_model_is_suppressed(joaat("packer"), 0);
	vehicle::set_vehicle_model_is_suppressed(joaat("phantom"), 0);
	audio::cancel_music_event("FHPRB_START");
	audio::cancel_music_event("FHPRB_TRUCK");
	audio::cancel_music_event("FHPRB_COPS");
	audio::cancel_music_event("FHPRB_LOST");
	audio::cancel_music_event("FHPRB_STOP");
	ped::remove_scenario_blocking_area(iLocal_51, 0);
	ped::remove_scenario_blocking_area(iLocal_52, 0);
	ped::remove_scenario_blocking_area(iLocal_53, 0);
	ped::remove_scenario_blocking_area(iLocal_54, 0);
	ped::remove_scenario_blocking_area(iLocal_55, 0);
	ped::remove_scenario_blocking_area(iLocal_56, 0);
	if (ai::does_scenario_group_exist("SCRAP_SECURITY")) {
		if (ai::is_scenario_group_enabled("SCRAP_SECURITY")) {
			ai::set_scenario_group_enabled("SCRAP_SECURITY", 0);
		}
	}
	player::set_max_wanted_level(5);
	if (object::_does_door_exist(iLocal_114)) {
		object::remove_door_from_system(iLocal_114);
	}
	if (object::_does_door_exist(iLocal_115)) {
		object::remove_door_from_system(iLocal_115);
	}
	script::terminate_this_thread();
}

// Position - 0xFB06
void func_194() {
	int iVar0;

	if (script::has_script_loaded("buddyDeathResponse")) {
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_101700.f_8044 || func_192(0)) {
		if (!func_195()) {
			iVar0 = func_13();
			if (iVar0 != -1) {
				if (!func_7(iVar0)) {
					return;
				}
				gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 5);
				return;
			}
		}
		else {
			func_12();
		}
	}
}

// Position - 0xFB77
int func_195() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}
