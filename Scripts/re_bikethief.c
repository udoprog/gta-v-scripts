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
struct<4> Local_44[10];
bool bLocal_85 = 0;
vector3 vLocal_86 = {0f, 0f, 0f};
int iLocal_89 = 0;
int iLocal_90 = 0;
int iLocal_91 = 0;
int iLocal_92 = 0;
int iLocal_93 = 0;
int iLocal_94 = 0;
int iLocal_95 = 0;
vector3 vLocal_96 = {0f, 0f, 0f};
vector3 vLocal_99 = {0f, 0f, 0f};
vector3 vLocal_102 = {0f, 0f, 0f};
vector3 vLocal_105 = {0f, 0f, 0f};
vector3 vLocal_108 = {0f, 0f, 0f};
float fLocal_111 = 0f;
float fLocal_112 = 0f;
float fLocal_113 = 0f;
float fLocal_114 = 0f;
float fLocal_115 = 0f;
float fLocal_116 = 0f;
float fLocal_117 = 0f;
int iLocal_118 = 0;
int iLocal_119 = 0;
int iLocal_120 = 0;
int iLocal_121 = 0;
int iLocal_122 = 0;
int iLocal_123 = 0;
float fLocal_124 = 0f;
int iLocal_125 = 0;
int iLocal_126 = 0;
int iLocal_127 = 0;
int iLocal_128 = 0;
int iLocal_129 = 0;
int iLocal_130 = 0;
int *iLocal_131 = NULL;
int iLocal_132 = 0;
int *iLocal_133 = NULL;
var *uLocal_134 = NULL;
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
char *sLocal_299 = NULL;
char *sLocal_300 = NULL;
char *sLocal_301 = NULL;
char *sLocal_302 = NULL;
char *sLocal_303 = NULL;
char *sLocal_304 = NULL;
char *sLocal_305 = NULL;
char *sLocal_306 = NULL;
char *sLocal_307 = NULL;
int iLocal_308 = 0;
int iLocal_309 = 0;
int iLocal_310 = 0;
int iLocal_311 = 0;
int iLocal_312 = 0;
vector3 vLocal_313 = {0f, 0f, 0f};
int iLocal_316 = 0;
int iLocal_317 = 0;
char *sLocal_318 = NULL;
char *sLocal_319 = NULL;
char *sLocal_320 = NULL;
char *sLocal_321 = NULL;
char *sLocal_322 = NULL;
char *sLocal_323 = NULL;
char *sLocal_324 = NULL;
int iLocal_325 = 0;
int iLocal_326 = 0;
int iLocal_327 = 0;
int iLocal_328 = 0;
int iLocal_329 = 0;
int *iLocal_330 = NULL;
var uLocal_331 = 0;
var uLocal_332 = -1;
var uLocal_333 = 0;
var uLocal_334 = 0;
var uLocal_335 = 0;
var uLocal_336 = 0;
var uLocal_337 = 0;
var uLocal_338 = 0;
var uLocal_339 = 1000;
var uLocal_340 = 1000;
var uLocal_341 = 0;
int *iLocal_342 = NULL;
int iLocal_343 = 0;
int iLocal_344 = 0;
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
	iLocal_119 = 1;
	sLocal_302 = "REBTH_HANGAR";
	sLocal_303 = "REBTH_RUNSOF";
	sLocal_304 = "REBTH_TAUNT";
	sLocal_318 = "RANDOM@BICYCLE_THIEF@BASE";
	sLocal_319 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_321 = "RANDOM@BICYCLE_THIEF@IDLE_A";
	sLocal_322 = "RANDOM@BICYCLE_THIEF@GET_OFF_BIKE";
	sLocal_323 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	sLocal_324 = "RANDOM@BICYCLE_THIEF@THANKS";
	vLocal_96 = {ScriptParam_0.f_1[0 /*3*/]};
	if (player::has_force_cleanup_occurred(11)) {
		func_213();
	}
	if (system::vdist2(vLocal_96, 421.92f, -1930.95f, 23.18f) < 16f) {
		iLocal_317 = 1;
	}
	else if (system::vdist2(vLocal_96, 769.3f, -151.66f, 73.79f) < 16f) {
		iLocal_317 = 2;
	}
	else if (system::vdist2(vLocal_96, -1923.93f, 254.48f, 85.7f) < 16f) {
		iLocal_317 = 3;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (interior::get_interior_from_entity(player::player_ped_id()) != 0) {
			script::terminate_this_thread();
		}
		else if (func_212(player::player_ped_id(), vLocal_96, 1) < 100f) {
			script::terminate_this_thread();
		}
	}
	if (iLocal_317 != 3) {
		if (func_172(vLocal_96, 26, iLocal_317, 0, 0)) {
			func_169(26);
		}
		else {
			script::terminate_this_thread();
		}
	}
	else if (func_172(vLocal_96, 8, 0, 0, 0)) {
		func_169(8);
	}
	else {
		script::terminate_this_thread();
	}
	iLocal_316 = func_167();
	iLocal_325 = ped::add_scenario_blocking_area(vLocal_96 - Vector(20f, 20f, 20f), vLocal_96 + Vector(20f, 20f, 20f),
												 0, 1, 1, 1);
	while (true) {
		system::wait(0);
		func_166();
		if (player::is_player_playing(player::player_id())) {
			player::set_all_random_peds_flee_this_frame(player::player_id());
			player::_switch_crime_type(player::player_id(), 28);
			player::_switch_crime_type(player::player_id(), 13);
			player::_switch_crime_type(player::player_id(), 35);
		}
		if (brain::is_world_point_within_brain_activation_range() || iLocal_89 > 1) {
			if (func_146()) {
				func_145();
				func_213();
			}
			else {
				switch (iLocal_89) {
				case 0: func_142(); break;

				case 1:
					if (func_141()) {
						func_145();
						func_213();
					}
					else {
						func_129();
					}
					break;

				case 2:
					func_105();
					func_101();
					func_100();
					func_99();
					func_97();
					func_96();
					func_88();
					break;

				case 3:
					func_86();
					func_68();
					func_59();
					break;

				case 4: func_1(); break;
				}
			}
		}
		else {
			func_213();
		}
	}
}

// Position - 0x2D4
void func_1() {
	if (func_58(player::player_ped_id()) && func_58(iLocal_92)) {
		if (func_57(player::player_ped_id(), iLocal_92, 1) > 50f) {
			func_56(8);
			func_20();
		}
		else if (gameplay::get_game_timer() - iLocal_129 > 10000) {
			func_56(8);
			func_20();
		}
		else if (iLocal_329 == 0 && !func_19() && func_2(&uLocal_134, "REBTHAU", sLocal_301, 4, 0, 0, 0)) {
			iLocal_329 = 1;
		}
	}
}

// Position - 0x358
bool func_2(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_18(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_3(sParam2, iParam3, 0);
}

// Position - 0x3A6
int func_3(char *sParam0, int iParam1, int iParam2) {
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
					func_17();
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
		if (func_16(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_15();
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
				func_8();
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
				if (func_7()) {
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
			if (func_6()) {
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
			func_5();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_4();
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
		func_17();
	}
	return 0;
}

// Position - 0x672
void func_4() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x6A3
void func_5() {
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

// Position - 0x738
bool func_6() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x75F
bool func_7() {
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

// Position - 0x7F8
void func_8() {
	if (func_14(14)) {
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
		Global_14443 = func_9();
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

// Position - 0x89A
int func_9() {
	func_10();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x8B3
void func_10() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_13(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_12(player::player_ped_id());
			if (func_11(iVar0) && (!func_14(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_11(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x9B0
bool func_11(int iParam0) { return iParam0 < 3; }

// Position - 0x9BC
int func_12(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_13(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x9F9
int func_13(int iParam0) {
	if (func_11(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xA23
bool func_14(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xA31
void func_15() {
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

// Position - 0xA88
bool func_16(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0xAC3
void func_17() {
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

// Position - 0xB1A
void func_18(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
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

// Position - 0xB70
int func_19() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0xB92
void func_20() {
	int iVar0;

	if (iLocal_317 == 3) {
		func_52(func_12(player::player_ped_id()), 4, 5);
	}
	else {
		func_52(func_12(player::player_ped_id()), 1, 3);
	}
	if (iLocal_317 != 3) {
		func_33(26, iLocal_317);
	}
	else {
		func_33(8, 0);
	}
	if (iLocal_317 == 1) {
		iVar0 = func_9();
		switch (iVar0) {
		case 0:
			while (!func_24(-1551606815, 6, 1, 144, 7200000, 10000, -1, 201, -1, 0)) {
				system::wait(0);
			}
			break;

		case 1:
			while (!func_24(-980148216, 6, 2, 144, 7200000, 10000, -1, 201, -1, 0)) {
				system::wait(0);
			}
			break;

		case 2:
			while (!func_24(-1857996981, 6, 4, 144, 7200000, 10000, -1, 201, -1, 0)) {
				system::wait(0);
			}
			break;
		}
	}
	func_21();
	func_213();
}

// Position - 0xC80
void func_21() { func_22(); }

// Position - 0xC8D
int func_22() {
	if (func_23(0)) {
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

// Position - 0xCD8
bool func_23(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xD03
int func_24(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9) {
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;

	if (func_23(0)) {
		return 0;
	}
	if (iParam4 < 0) {
		return 0;
	}
	if (iParam5 < 0) {
		return 0;
	}
	if (iParam6 == 76) {
		return 0;
	}
	if (iParam7 == 235) {
		return 0;
	}
	if (iParam3 < 3) {
		if (gameplay::is_bit_set(iParam2, iParam3)) {
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7) {
		return 0;
	}
	if (Global_101700.f_6647.f_866 < 10) {
		Var0 = iParam0;
		Var0.f_3 = func_32(iParam1);
		Var0.f_4 = gameplay::get_game_timer() + iParam4;
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		gameplay::clear_bit(&Var0.f_1, 0);
		Global_101700.f_6647.f_765[Global_101700.f_6647.f_866 /*10*/] = {Var0};
		Global_101700.f_6647.f_866++;
		return 1;
	}
	else {
		Var10 = {func_31(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9)};
		iVar20 = 0;
		func_30(&iVar20);
		iVar21 = func_29(Var10, Global_101700.f_6647.f_765[iVar20 /*10*/]);
		if (iVar21 == 2) {
			func_27(Global_101700.f_6647.f_765[iVar20 /*10*/]);
			Global_101700.f_6647.f_765[iVar20 /*10*/] = {Var10};
			func_26(&Var10);
			return 1;
		}
		else if (iVar21 == 1) {
			if (func_25(Var10)) {
				func_27(Global_101700.f_6647.f_765[iVar20 /*10*/]);
				Global_101700.f_6647.f_765[iVar20 /*10*/] = {Var10};
				func_26(&Var10);
				return 1;
			}
			else {
				if (!func_25(Global_101700.f_6647.f_765[iVar20 /*10*/])) {
					Global_101700.f_6647.f_765[iVar20 /*10*/] = {Var10};
					func_26(&Var10);
					return 1;
				}
				func_26(&Var10);
				return 1;
			}
		}
		else {
			func_27(Var10);
			func_26(&Var10);
			return 1;
		}
	}
	return 0;
}

// Position - 0xF25
bool func_25(struct<9> Param0, var uParam9) {
	if (Param0.f_8 == 0) {
		return false;
	}
	return true;
}

// Position - 0xF3D
void func_26(var *uParam0) {
	struct<10> Var0;

	*uParam0 = {Var0};
}

// Position - 0xF4F
void func_27(struct<10> Param0) {
	if (func_25(Param0)) {
		func_28(Param0.f_8, 0);
	}
}

// Position - 0xF6C
void func_28(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0xFA9
int func_29(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9,
			struct<4> Param10, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19) {
	int iVar0;
	int iVar1;

	iVar0 = Param0.f_3;
	iVar1 = Param10.f_3;
	if (iVar0 > iVar1) {
		return 2;
	}
	if (iVar0 < iVar1) {
		return 0;
	}
	return 1;
}

// Position - 0xFDA
void func_30(int *iParam0) {
	int iVar0;

	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_866) {
		if (func_29(Global_101700.f_6647.f_765[iVar0 /*10*/], Global_101700.f_6647.f_765[*iParam0 /*10*/]) == 0) {
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

// Position - 0x1031
struct<10> func_31(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6,
				   int iParam7, var uParam8, var uParam9) {
	struct<10> Var0;

	Var0 = uParam0;
	Var0.f_3 = func_32(iParam1);
	Var0.f_4 = gameplay::get_game_timer() + iParam4;
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	gameplay::clear_bit(&Var0.f_1, 0);
	return Var0;
}

//Position - 0x108A
int func_32(int iParam0)
{
	switch (iParam0) {
	case 0:
	case 4: return 5;

	case 7: return 4;

	case 2: return 3;

	case 1: return 2;

	case 3: return 1;

	case 5:
	case 6: return 0;
	}
	return 7;
}

// Position - 0x10F4
void func_33(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		iParam0 = func_50();
	}
	if (iParam0 == -1) {
		return;
	}
	if (iParam1 <= func_49(iParam0)) {
		func_48(iParam0, iParam1);
		if (!func_47(51)) {
			func_43("RE_REWARD", 1, 0, 4000, 10000, func_46(), 0, 138, 0);
			func_42(51);
		}
		if (func_41(iParam0)) {
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_40(iParam0, iParam1) != 322) {
			func_34(func_40(iParam0, iParam1), vLocal_86.x, vLocal_86.y);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0) {
			if (Global_101689 == 1 || Global_101689 == 5 || Global_101689 == 11 || Global_101689 == 25) {
				func_56(2);
			}
			else if (Global_101689 == 26 || Global_101689 == 8 || Global_101689 == 17) {
				func_56(7);
			}
			else {
				func_56(1);
			}
		}
	}
}

// Position - 0x11F7
void func_34(int iParam0, var uParam1, var uParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_38(891 + iParam0, 1, -1, 1);
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
		func_35();
	}
}

// Position - 0x12DF
void func_35() {
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
		func_37(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_36() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_22();
				}
			}
		}
	}
}

// Position - 0x17A0
int func_36() { return Global_25190; }

// Position - 0x17AB
int func_37(int iParam0, int iParam1) {
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

// Position - 0x17FC
int func_38(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_39();
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

// Position - 0x1B8E
var func_39() { return Global_1312735; }

// Position - 0x1B9A
int func_40(int iParam0, int iParam1) {
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

// Position - 0x1F0E
bool func_41(int iParam0) {
	switch (iParam0) {
	case 29:
	case 30:
	case 2:
	case 18: return false;
	}
	return true;
}

// Position - 0x1F3D
void func_42(int iParam0) {
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

// Position - 0x1F7F
void func_43(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_44(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x1FA0
void func_44(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
		func_45();
	}
}

// Position - 0x2173
void func_45() {
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

// Position - 0x2293
int func_46() {
	func_10();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x22D9
int func_47(int iParam0) {
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

// Position - 0x231C
void func_48(int iParam0, int iParam1) { gameplay::set_bit(&Global_101700.f_23954.f_8[iParam0], iParam1); }

// Position - 0x2337
int func_49(int iParam0) {
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

// Position - 0x23E8
int func_50() {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, script::get_this_script_name(), 64);
	iVar16 = func_51(Var0);
	return iVar16;
}

// Position - 0x2405
int func_51(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5,
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

// Position - 0x25DF
void func_52(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	switch (iParam0) {
	case 0:
	case 1:
	case 2: Global_101700.f_2095.f_539.f_1475[iParam1 /*4*/][iParam0] += iParam2; break;

	case 3:
		iVar1 = 6022;
		switch (iParam1) {
		case 1: iVar1 = 72; break;

		case 3: iVar1 = 74; break;

		case 2: iVar1 = 73; break;

		case 4: iVar1 = 75; break;

		case 5: iVar1 = 76; break;

		case 6: iVar1 = 77; break;

		case 7: iVar1 = 78; break;
		}
		if (iVar1 != 6022) {
			iVar0 = func_55(iVar1, -1, 0);
			iVar0 += iParam2;
			if (iVar0 > 100) {
				iVar0 = 100;
			}
			func_53(iVar1, iVar0, -1, 1, 0);
		}
		break;
	}
}

// Position - 0x26CF
void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_54(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x26FF
int func_54(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_39();
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

// Position - 0x2733
int func_55(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_54(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x2765
void func_56(int iParam0) { Global_101686 = iParam0; }

// Position - 0x2773
float func_57(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x27D1
bool func_58(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x27F2
void func_59() {
	if (func_58(iLocal_92) && func_67(iLocal_93)) {
		if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_93, 0)) {
			func_66(&iLocal_342);
			func_65(&iLocal_132);
			if (iLocal_130 == 0 && !ui::does_blip_exist(iLocal_131)) {
				iLocal_131 = func_64(iLocal_93, 0, 0);
			}
		}
		else {
			func_65(&iLocal_131);
			if (!ui::does_blip_exist(iLocal_132)) {
				iLocal_132 = func_61(iLocal_92, 0, 145);
				if (iLocal_343 == 0) {
					func_60(&iLocal_342);
					iLocal_343 = 1;
				}
			}
		}
	}
}

// Position - 0x2877
void func_60(int *iParam0) { *iParam0 = -99; }

// Position - 0x2885
int func_61(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = func_62(iParam0, !iParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x28D7
int func_62(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_63(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_63(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_63(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x297B
var func_63(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x2992
int func_64(int iParam0, int iParam1, int iParam2) { return func_62(iParam0, !iParam1, iParam2); }

// Position - 0x29A5
void func_65(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x29C5
void func_66(int *iParam0) { *iParam0 = gameplay::get_game_timer() - 5000; }

// Position - 0x29D8
bool func_67(int iParam0) {
	if (func_58(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2A02
void func_68() {
	float fVar0;

	if (func_58(iLocal_92) && func_67(iLocal_93)) {
		func_85(iLocal_132, &iLocal_342);
		if (fLocal_124 > 0f) {
			fVar0 = func_57(player::player_ped_id(), iLocal_92, 1);
			if (fVar0 > fLocal_124 + fLocal_117) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_93, 0)) {
					func_56(7);
					func_20();
				}
				else {
					func_213();
				}
			}
		}
		else {
			fLocal_124 = func_57(player::player_ped_id(), iLocal_92, 1);
			if (audio::is_audio_scene_active("RE_CAR_STEAL_SCENE")) {
				audio::_0x18EB48CFC41F2EA0(iLocal_93, 0);
				audio::stop_audio_scene("RE_CAR_STEAL_SCENE");
			}
		}
		if (iLocal_308 == 0) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_92, 40f, 40f, 40f, 0, 1, 0)) {
				func_84();
				if (iLocal_311 == 0) {
					if (!entity::is_entity_at_entity(player::player_ped_id(), iLocal_92, 25f, 25f, 25f, 0, 1, 0)) {
						if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_93, 0) &&
							ped::is_ped_facing_ped(iLocal_92, player::player_ped_id(), 30f) &&
							func_75(iLocal_92, player::player_ped_id(), 1126825984, 1, 250, 7) &&
							!ped::is_ped_ragdoll(iLocal_92) && !ai::is_ped_getting_up(iLocal_92) &&
							func_2(&uLocal_134, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0)) {
							ai::task_play_anim(iLocal_92, sLocal_323, "RETURNING_FRONT_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
							player::set_player_wanted_level(player::player_id(), 0, 0);
							player::set_player_wanted_level_now(player::player_id(), 0);
							iLocal_311 = 1;
						}
					}
					else {
						iLocal_311 = 1;
					}
				}
			}
		}
		else if (!entity::is_entity_at_entity(iLocal_93, iLocal_92, 35f, 35f, 35f, 0, 1, 0) &&
				 ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_93, 0) && !func_74() &&
				 func_2(&uLocal_134, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0)) {
			func_72(0);
			ped::set_blocking_of_non_temporary_events(iLocal_92, 0);
			ped::set_relationship_between_groups(5, iLocal_122, 1862763509);
			ped::set_ped_can_be_targetted(iLocal_92, 1);
			ai::task_combat_ped(iLocal_92, player::player_ped_id(), 0, 16);
			ped::set_ped_keep_task(iLocal_92, 1);
			system::wait(0);
			func_56(7);
			func_20();
		}
		if (ped::is_ped_in_vehicle(iLocal_92, iLocal_93, 0)) {
			if (!func_19() && func_2(&uLocal_134, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0)) {
			}
			iLocal_129 = gameplay::get_game_timer();
			iLocal_89 = 4;
		}
		else if (entity::is_entity_at_entity(iLocal_93, iLocal_92, 20f, 20f, 20f, 0, 1, 0)) {
			if (func_71()) {
				if (!func_69(iLocal_92, 242628503)) {
					iLocal_130 = 1;
					func_72(0);
					func_66(&iLocal_342);
					func_65(&iLocal_132);
					func_65(&iLocal_131);
					vehicle::set_vehicle_is_considered_by_player(iLocal_93, 0);
					ai::open_sequence_task(&iLocal_95);
					if (iLocal_308 == 0) {
						ai::task_enter_vehicle(0, iLocal_93, 20000, -1, 2f, 8, 0);
					}
					else {
						ai::task_enter_vehicle(0, iLocal_93, 20000, -1, 2f, 262152, 0);
					}
					ai::task_vehicle_drive_wander(0, iLocal_93, fLocal_114, 786485);
					ai::close_sequence_task(iLocal_95);
					ai::task_perform_sequence(iLocal_92, iLocal_95);
					ai::clear_sequence_task(&iLocal_95);
					ped::set_ped_keep_task(iLocal_92, 1);
				}
			}
			else {
				switch (iLocal_308) {
				case 0:
					if (iLocal_311 == 1 && !func_69(iLocal_92, -2017877118) && !ped::is_ped_ragdoll(iLocal_92) &&
						!ai::is_ped_getting_up(iLocal_92) &&
						func_2(&uLocal_134, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0)) {
						if (ped::is_ped_facing_ped(iLocal_92, player::player_ped_id(), 30f) &&
							ai::get_script_task_status(iLocal_92, -875674219) == 7) {
							ai::task_play_anim(iLocal_92, sLocal_323, "RETURNING_FRONT_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_309 = gameplay::get_game_timer();
						iLocal_308++;
					}
					else {
						func_84();
					}
					break;

				case 1:
					if (gameplay::get_game_timer() - iLocal_309 > 10000 && !func_69(iLocal_92, -2017877118) &&
						!ped::is_ped_ragdoll(iLocal_92) && !ai::is_ped_getting_up(iLocal_92) &&
						func_2(&uLocal_134, "REBTHAU", sLocal_305, 4, 0, 0, 0)) {
						if (ped::is_ped_facing_ped(iLocal_92, player::player_ped_id(), 30f)) {
							func_72(0);
							ai::task_play_anim(iLocal_92, sLocal_324, "THANKS_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_309 = gameplay::get_game_timer();
						iLocal_308++;
					}
					else {
						func_72(1);
					}
					break;

				case 2:
					if (gameplay::get_game_timer() - iLocal_309 > 10000 && !func_69(iLocal_92, -2017877118) &&
						!ped::is_ped_ragdoll(iLocal_92) && !ai::is_ped_getting_up(iLocal_92) &&
						func_2(&uLocal_134, "REBTHAU", sLocal_306, 4, 0, 0, 0)) {
						if (ped::is_ped_facing_ped(iLocal_92, player::player_ped_id(), 30f)) {
							func_72(0);
							ai::task_play_anim(iLocal_92, sLocal_322, "BIKE_BACK_NOW_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_308++;
					}
					else {
						func_72(1);
					}
					break;

				default: func_72(1); break;
				}
			}
		}
	}
}

// Position - 0x2EEC
bool func_69(int iParam0, int iParam1) {
	if (func_70(iParam0)) {
		if (ai::get_script_task_status(iParam0, iParam1) == 1 || ai::get_script_task_status(iParam0, iParam1) == 0) {
			return true;
		}
	}
	return false;
}

// Position - 0x2F1F
bool func_70(int iParam0) {
	if (func_58(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x2F3F
bool func_71() {
	if (iLocal_130 == 1) {
		return true;
	}
	if (gameplay::get_game_timer() - iLocal_128 < 4000) {
		return false;
	}
	if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_93, 1)) {
		return false;
	}
	if (func_58(iLocal_91) && ped::is_ped_being_jacked(iLocal_91)) {
		return false;
	}
	if (!vehicle::is_vehicle_seat_free(iLocal_93, -1, 0)) {
		return false;
	}
	return true;
}

// Position - 0x2F9D
void func_72(int iParam0) {
	if (func_58(iLocal_92)) {
		if (iParam0 == 1) {
			if (!ped::is_ped_in_group(iLocal_92) && func_58(player::player_ped_id())) {
				ped::set_ped_as_group_member(iLocal_92, ped::get_ped_group_index(player::player_ped_id()));
				ped::set_ped_never_leaves_group(iLocal_92, 1);
				ped::set_group_formation_spacing(func_73(), 2f, -1f, -1082130432);
				ai::task_look_at_entity(iLocal_92, player::player_ped_id(), -1, 0, 2);
			}
		}
		else if (ped::is_ped_in_group(iLocal_92)) {
			ped::remove_ped_from_group(iLocal_92);
		}
	}
}

// Position - 0x3012
var func_73() { return player::get_player_group(player::get_player_index()); }

// Position - 0x3022
int func_74() {
	if (iLocal_317 == 3) {
		if (entity::is_entity_in_angled_area(player::player_ped_id(), -1875.858f, 262.3736f, 82.96029f, -1927.379f,
											 234.7951f, 90.71558f, 50.25f, 0, 1, 0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x3067
bool func_75(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_83(iParam0, iParam1);
	if (!func_58(iParam0) || !func_58(iParam1)) {
		if (iVar4 != -1) {
			func_82(&Local_44[iVar4 /*4*/]);
		}
		return false;
	}
	if (!func_79(iParam0, iParam1, fParam2, iParam3)) {
		return false;
	}
	if (iVar4 == -1) {
		iVar4 = func_78();
		if (iVar4 == -1) {
			return false;
		}
		Local_44[iVar4 /*4*/].f_1 = iParam0;
		Local_44[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = {ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f)};
	iVar0 = func_76(&Local_44[iVar4 /*4*/], vVar1, iParam1, &Local_44[iVar4 /*4*/].f_3, iParam0, iParam5);
	return iVar0 || gameplay::get_game_timer() - Local_44[iVar4 /*4*/].f_3 < iParam4;
}

// Position - 0x3128
int func_76(int *iParam0, vector3 vParam1, int iParam4, var *uParam5, int iParam6, int iParam7) {
	var uVar0;
	vector3 vVar1;
	var uVar4;
	int iVar7;
	int iVar8;

	iVar7 = 0;
	if (!func_58(iParam4)) {
		*iParam0 = 0;
		return 0;
	}
	if (*iParam0 == 0) {
		vVar1 = {func_77(iParam4, iParam7)};
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
		func_58(iVar7);
		if (entity::get_ped_index_from_entity_index(iVar7) == iParam4) {
			if (bLocal_85) {
				graphics::draw_debug_line_with_two_colours(vParam1, entity::get_entity_coords(iParam4, 1), 255, 0, 0,
														   255, 0, 0, 255, 255);
			}
			*uParam5 = gameplay::get_game_timer();
			return 1;
		}
		return 0;
	}
	if (entity::is_entity_a_vehicle(iVar7)) {
		func_58(iVar7);
		if (ped::is_ped_in_any_vehicle(iParam4, 0)) {
			if (entity::get_vehicle_index_from_entity_index(iVar7) == ped::get_vehicle_ped_is_in(iParam4, 0)) {
				if (bLocal_85) {
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

// Position - 0x3254
Vector3 func_77(int iParam0, int iParam1) {
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
		return ped::get_ped_bone_coords(iParam0, 39317, 0f, 0f, 0f);
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

// Position - 0x3319
int func_78() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_44) {
		if (Local_44[iVar0 /*4*/] == 0 && Local_44[iVar0 /*4*/].f_1 == 0 && Local_44[iVar0 /*4*/].f_2 == 0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x3363
int func_79(int iParam0, int iParam1, float fParam2, int iParam3) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_81(entity::get_entity_coords(iParam1, 1) - entity::get_entity_coords(iParam0, 1))};
	if (fParam2 < 0.1f || fParam2 > 360f) {
		return 1;
	}
	if (iParam3 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_81(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						 ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_80(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam2 / 2f)) {
		return 0;
	}
	return 1;
}

// Position - 0x33F4
float func_80(vector3 vParam0, vector3 vParam3) {
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

// Position - 0x3415
Vector3 func_81(vector3 vParam0) {
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

// Position - 0x3454
void func_82(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

// Position - 0x346F
int func_83(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_44) {
		if (Local_44[iVar0 /*4*/].f_1 == iParam0 && Local_44[iVar0 /*4*/].f_2 == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x34AE
void func_84() {
	if (iLocal_130 == 0 && func_58(iLocal_92)) {
		if (func_69(iLocal_92, 242628503)) {
			ai::clear_ped_tasks(iLocal_92);
		}
		if (!func_69(iLocal_92, -2017877118) && !ped::is_ped_facing_ped(iLocal_92, player::player_ped_id(), 20f) &&
			ai::get_script_task_status(iLocal_92, -875674219) == 7 && !ped::is_ped_ragdoll(iLocal_92) &&
			!ai::is_ped_getting_up(iLocal_92)) {
			ai::task_turn_ped_to_face_entity(iLocal_92, player::player_ped_id(), 0);
			ai::task_look_at_entity(iLocal_92, player::player_ped_id(), -1, 0, 2);
		}
	}
}

// Position - 0x3542
void func_85(int iParam0, int *iParam1) {
	int iVar0;
	int iVar1;

	if (*iParam1 == -99) {
		*iParam1 = gameplay::get_game_timer();
	}
	if (ui::does_blip_exist(iParam0)) {
		iVar0 = gameplay::get_game_timer() - *iParam1;
		if (iVar0 < 5000) {
			iVar1 = system::ceil(system::to_float(iVar0) / 1000f);
			if (iVar1 * 1000 - iVar0 < 500) {
				if (ui::get_blip_alpha(iParam0) != 255) {
					ui::set_blip_alpha(iParam0, 255);
				}
			}
			else if (ui::get_blip_alpha(iParam0) != 0) {
				ui::set_blip_alpha(iParam0, 0);
			}
		}
		else if (*iParam1 != -100) {
			*iParam1 = -100;
			if (ui::get_blip_alpha(iParam0) != 255) {
				ui::set_blip_alpha(iParam0, 255);
			}
		}
	}
}

// Position - 0x35E1
void func_86() {
	if (func_58(iLocal_91)) {
		if (iLocal_120 == 0) {
			ped::set_ped_flee_attributes(iLocal_91, 2, 0);
			ai::clear_ped_tasks(iLocal_91);
			if (func_67(iLocal_93)) {
				if (iLocal_317 == 2) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_93)) {
						vehicle::stop_playback_recorded_vehicle(iLocal_93);
					}
					vehicle::remove_vehicle_recording(1, "RE_BikeThief2");
				}
				if (ped::is_ped_in_vehicle(iLocal_91, iLocal_93, 1)) {
					ped::knock_ped_off_vehicle(iLocal_91);
				}
			}
			ped::set_ped_keep_task(iLocal_91, 1);
			ai::task_smart_flee_ped(iLocal_91, player::player_ped_id(), 200f, -1, 0, 0);
			iLocal_120 = 1;
		}
		else {
			if (iLocal_121 == 0 && func_57(iLocal_91, player::player_ped_id(), 1) < 30f &&
				!ped::is_ped_ragdoll(iLocal_91) && func_69(iLocal_91, 1805844857) && !func_19() &&
				func_2(&uLocal_134, "REBTHAU", sLocal_303, 4, 0, 0, 0)) {
				iLocal_121 = 1;
			}
			if (func_57(iLocal_91, player::player_ped_id(), 1) > 50f) {
				func_87(&iLocal_91, 1, 0, 1);
			}
		}
	}
}

// Position - 0x36D7
void func_87(int iParam0, int iParam1, int iParam2, int iParam3) {
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

// Position - 0x3726
void func_88() {
	if (func_58(iLocal_91) && func_58(iLocal_92) && func_67(iLocal_93)) {
		if (func_95()) {
			func_93(&iLocal_330, 0, 0);
			func_92(&iLocal_91);
			func_91(&iLocal_93);
			if (entity::is_entity_at_entity(iLocal_92, player::player_ped_id(), 25f, 25f, 25f, 0, 1, 0) &&
				func_2(&uLocal_134, "REBTHAU", sLocal_307, 4, 0, 0, 0)) {
			}
			ai::task_start_scenario_in_place(iLocal_92, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
			func_90();
		}
		else {
			func_89(iLocal_131, iLocal_93, fLocal_117, 1061158912, 0);
		}
	}
}

// Position - 0x37C0
void func_89(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) {
	int iVar0;
	float fVar1;
	float fVar2;

	fVar2 = fParam2 * fParam3;
	if (ui::does_blip_exist(iParam0)) {
		if (entity::does_entity_exist(iParam1) && entity::does_entity_exist(player::player_ped_id()) &&
			!ped::is_ped_injured(player::player_ped_id())) {
			if (entity::is_entity_a_vehicle(iParam1)) {
				if (vehicle::is_vehicle_driveable(entity::get_vehicle_index_from_entity_index(iParam1), 0)) {
					fVar1 = gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
																  entity::get_entity_coords(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4) {
						iVar0 = system::round(255f * (fVar1 - fVar2) / (fParam2 - fVar2));
						if (iVar0 <= 0) {
							iVar0 = 0;
						}
						if (iVar0 >= 255) {
							iVar0 = 255;
						}
						ui::set_blip_flashes(iParam0, 1);
						ui::set_blip_alpha(iParam0, 255 - iVar0);
					}
					else {
						ui::set_blip_flashes(iParam0, 0);
						ui::set_blip_alpha(iParam0, 255);
					}
				}
			}
			else if (entity::is_entity_a_ped(iParam1)) {
				if (!ped::is_ped_injured(entity::get_ped_index_from_entity_index(iParam1))) {
					fVar1 = gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
																  entity::get_entity_coords(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4) {
						iVar0 = system::round(255f * (fVar1 - fVar2) / (fParam2 - fVar2));
						if (iVar0 <= 0) {
							iVar0 = 0;
						}
						if (iVar0 >= 255) {
							iVar0 = 255;
						}
						ui::set_blip_flashes(iParam0, 1);
						ui::set_blip_alpha(iParam0, 255 - iVar0);
					}
					else {
						ui::set_blip_flashes(iParam0, 0);
						ui::set_blip_alpha(iParam0, 255);
					}
				}
			}
		}
	}
}

// Position - 0x3919
void func_90() { func_213(); }

// Position - 0x3925
void func_91(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		if (func_67(*iParam0)) {
			if (entity::is_entity_a_mission_entity(*iParam0) &&
				entity::does_entity_belong_to_this_script(*iParam0, 1)) {
				if (func_58(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
						entity::set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				vehicle::delete_vehicle(iParam0);
			}
		}
		else {
			if (func_58(player::player_ped_id())) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
					entity::set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			vehicle::delete_vehicle(iParam0);
		}
	}
}

// Position - 0x39C1
void func_92(int iParam0) {
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

// Position - 0x3A01
void func_93(int *iParam0, int iParam1, int iParam2) {
	char *sVar0;

	if (network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_2494199.f_4449, 26)) {
			return;
		}
	}
	if (cam::is_gameplay_hint_active()) {
		cam::stop_gameplay_hint(iParam2);
		graphics::_stop_screen_effect("FocusIn");
		audio::stop_audio_scene("HINT_CAM_SCENE");
		if (iParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	cam::set_cinematic_button_active(1);
	iParam0->f_1 = 0;
	*iParam0 = 0;
	iParam0->f_2 = -1;
	iParam0->f_8 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	sVar0 = iParam1;
	if (gameplay::is_string_null(sVar0)) {
		if (!network::network_is_game_in_progress()) {
			sVar0 = "CMN_HINT";
		}
		else {
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!gameplay::is_string_null(iParam0->f_3)) {
		if (func_94(iParam0->f_3)) {
			ui::clear_help(1);
		}
	}
	if (!gameplay::is_string_null(sVar0)) {
		if (func_94(sVar0)) {
			ui::clear_help(1);
		}
	}
}

// Position - 0x3ADE
bool func_94(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x3AF1
bool func_95() {
	if (func_57(iLocal_93, player::player_ped_id(), 1) > fLocal_117 + 100f) {
		return true;
	}
	if (func_57(iLocal_93, player::player_ped_id(), 1) > fLocal_117) {
		if (entity::is_entity_playing_anim(iLocal_92, sLocal_321, "IDLE_A", 3) &&
				entity::get_entity_anim_current_time(iLocal_92, sLocal_321, "IDLE_A") > 0.99f ||
			entity::is_entity_playing_anim(iLocal_92, sLocal_321, "IDLE_B", 3) &&
				entity::get_entity_anim_current_time(iLocal_92, sLocal_321, "IDLE_B") > 0.99f ||
			entity::is_entity_playing_anim(iLocal_92, sLocal_321, "IDLE_C", 3) &&
				entity::get_entity_anim_current_time(iLocal_92, sLocal_321, "IDLE_C") > 0.99f) {
			return true;
		}
	}
	return false;
}

// Position - 0x3BAB
void func_96() {
	if (iLocal_127 > -1 && gameplay::get_game_timer() - iLocal_127 > 5000 && !func_19() && func_58(iLocal_91) &&
		func_58(iLocal_92) && func_67(iLocal_93) &&
		!entity::is_entity_at_entity(player::player_ped_id(), iLocal_91, 13f, 13f, 13f, 0, 1, 0) &&
		!entity::is_entity_at_entity(iLocal_92, iLocal_91, 13f, 13f, 13f, 0, 1, 0) &&
		ped::is_ped_in_vehicle(iLocal_91, iLocal_93, 0) &&
		entity::is_entity_at_entity(iLocal_92, player::player_ped_id(), 8f, 8f, 8f, 0, 1, 0) &&
		func_2(&uLocal_134, "REBTHAU", sLocal_302, 4, 0, 0, 0)) {
		iLocal_127 = -1;
	}
}

// Position - 0x3C7E
void func_97() {
	if (func_98()) {
		iLocal_128 = gameplay::get_game_timer();
		func_65(&iLocal_131);
		func_93(&iLocal_330, 0, 0);
		gameplay::_set_unk_map_flag(0);
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			iLocal_94 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 1);
			entity::set_entity_as_mission_entity(iLocal_94, 1, 1);
		}
		if (func_58(iLocal_92)) {
			ai::task_clear_look_at(iLocal_92);
		}
		if (func_58(iLocal_91) && !func_19() && func_2(&uLocal_134, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0)) {
		}
		iLocal_89 = 3;
	}
	else {
		if (iLocal_326 == 0 && ui::does_blip_exist(iLocal_131) && func_58(player::player_ped_id()) &&
			func_58(iLocal_91)) {
			if (func_57(player::player_ped_id(), iLocal_91, 1) < 30f ||
				gameplay::is_bullet_in_area(entity::get_entity_coords(iLocal_91, 1), 10f, 1)) {
				iLocal_326 = 1;
				ui::_0x75A16C3DA34F1245(iLocal_131, iLocal_326);
			}
		}
		if (iLocal_317 == 2 && func_58(iLocal_91) && func_67(iLocal_93) &&
			ped::is_ped_in_vehicle(iLocal_91, iLocal_93, 0)) {
			if (iLocal_312 == 0) {
				vehicle::start_playback_recorded_vehicle_using_ai(iLocal_93, 1, "RE_BikeThief2", 30f, 786468);
				iLocal_312 = 1;
				vLocal_313 = {
					vehicle::_0x92523B76657A517D(vehicle::get_vehicle_recording_id(1, "RE_BikeThief2"),
												 vehicle::get_total_duration_of_vehicle_recording(1, "RE_BikeThief2"))};
			}
			else if (!vehicle::is_playback_going_on_for_vehicle(iLocal_93) || func_212(iLocal_93, vLocal_313, 1) < 5f) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_93)) {
					vehicle::stop_playback_recorded_vehicle(iLocal_93);
				}
				ai::task_vehicle_mission_ped_target(iLocal_91, iLocal_93, player::player_ped_id(), 8, fLocal_114,
													786468, 10f, 1f, 0);
			}
		}
	}
}

// Position - 0x3E18
bool func_98() {
	if (!func_58(iLocal_91)) {
		return true;
	}
	else if (func_58(iLocal_93)) {
		if (iLocal_344 == 0) {
			if (ped::is_ped_in_vehicle(iLocal_91, iLocal_93, 0)) {
				iLocal_344 = 1;
			}
		}
		else if (!ped::is_ped_in_vehicle(iLocal_91, iLocal_93, 0)) {
			return true;
		}
		if (entity::has_entity_been_damaged_by_entity(iLocal_91, player::player_ped_id(), 1)) {
			return true;
		}
	}
	return false;
}

// Position - 0x3E78
void func_99() {
	if (func_58(iLocal_91) && func_67(iLocal_93) && ped::is_ped_in_vehicle(iLocal_91, iLocal_93, 0)) {
		if (iLocal_119) {
			if (!entity::is_entity_at_entity(player::player_ped_id(), iLocal_91, 40f, 40f, 40f, 0, 1, 0)) {
				fLocal_114 = fLocal_116;
				ai::set_drive_task_cruise_speed(iLocal_91, fLocal_114);
				ai::task_look_at_entity(iLocal_91, player::player_ped_id(), 20000, 16, 2);
				iLocal_119 = 0;
			}
		}
		else if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_91, 40f, 40f, 40f, 0, 1, 0)) {
			fLocal_114 = fLocal_115;
			ai::set_drive_task_cruise_speed(iLocal_91, fLocal_114);
			ai::task_look_at_entity(iLocal_91, player::player_ped_id(), 20000, 16, 2);
			iLocal_119 = 1;
		}
	}
}

// Position - 0x3F27
void func_100() {
	if (iLocal_125 < 5 && !func_19() && func_58(iLocal_91) && func_58(iLocal_92) && func_67(iLocal_93) &&
		ped::is_ped_in_vehicle(iLocal_91, iLocal_93, 0) &&
		entity::is_entity_at_entity(player::player_ped_id(), iLocal_91, 13f, 13f, 13f, 0, 1, 0) &&
		!entity::is_entity_at_entity(iLocal_92, iLocal_91, 13f, 13f, 13f, 0, 1, 0) &&
		gameplay::get_game_timer() - iLocal_126 > 15000 && func_2(&uLocal_134, "REBTHAU", sLocal_304, 4, 0, 0, 0)) {
		if (ai::get_script_task_status(iLocal_91, -1273030092) == 1 &&
			!ai::is_driveby_task_underneath_driving_task(iLocal_91)) {
			ai::task_drive_by(iLocal_91, player::player_ped_id(), 0, 0f, 0f, 0f, 15f, 50, 1, -753768974);
		}
		iLocal_126 = gameplay::get_game_timer();
		iLocal_125++;
	}
}

// Position - 0x4019
void func_101() {
	if (iLocal_310 == 0 && func_58(iLocal_92) && func_58(iLocal_91) && func_67(iLocal_93) &&
		ped::is_ped_in_vehicle(iLocal_91, iLocal_93, 0)) {
		if (iLocal_327 == 0) {
			if (func_2(&uLocal_134, "REBTHAU", sLocal_299, 4, func_104(), 0, 0)) {
				ai::clear_ped_tasks_immediately(iLocal_92);
				ai::open_sequence_task(&iLocal_95);
				ai::task_look_at_entity(0, iLocal_91, -1, 2048, 2);
				ai::task_go_straight_to_coord(0, vLocal_105, 2f, 20000, 1193033728, 1056964608);
				ai::task_turn_ped_to_face_entity(0, iLocal_93, 1000);
				ai::task_play_anim(0, sLocal_319, sLocal_320, 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::task_play_anim(0, sLocal_321, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::task_play_anim(0, sLocal_321, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::task_play_anim(0, sLocal_321, "IDLE_C", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::task_play_anim(0, sLocal_321, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::task_play_anim(0, sLocal_321, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::task_play_anim(0, sLocal_321, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::task_play_anim(0, sLocal_321, "IDLE_C", 8f, -8f, -1, 1, 0, 0, 0, 0);
				ai::close_sequence_task(iLocal_95);
				ai::task_perform_sequence(iLocal_92, iLocal_95);
				ai::clear_sequence_task(&iLocal_95);
				iLocal_126 = gameplay::get_game_timer();
				iLocal_127 = gameplay::get_game_timer();
				if (iLocal_317 == 3) {
					sLocal_300 = "REBTH_HELP2X";
				}
				else {
					sLocal_300 = "REBTH_HELP2";
				}
				iLocal_327 = 1;
			}
		}
		else if (func_58(player::player_ped_id())) {
			if (func_57(player::player_ped_id(), iLocal_92, 1) < 30f) {
				if (!func_19()) {
					if (func_2(&uLocal_134, "REBTHAU", sLocal_300, 4, 0, 0, 0)) {
						iLocal_310 = 1;
					}
				}
				else if (iLocal_328 == 0) {
					func_102();
					iLocal_328 = 1;
				}
			}
		}
	}
}

// Position - 0x421C
void func_102() {
	Global_14611 = 0;
	func_103();
}

// Position - 0x422C
void func_103() {
	if (audio::is_scripted_conversation_ongoing()) {
		audio::restart_scripted_conversation();
		Global_16756 = 0;
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0x4250
int func_104() {
	int iVar0;
	vector3 vVar1;

	vVar1 = {100f, 100f, 20f};
	if (!ped::is_ped_injured(iLocal_92)) {
		if (entity::is_entity_at_entity(iLocal_92, player::player_ped_id(), vVar1, 0, 1, 0)) {
			iVar0 = 0;
		}
		else {
			iVar0 = 1;
		}
	}
	return iVar0;
}

// Position - 0x4294
void func_105() {
	if (func_58(iLocal_91) && func_67(iLocal_93) && ped::is_ped_in_vehicle(iLocal_91, iLocal_93, 0)) {
		func_106(&iLocal_330, iLocal_93, 0, 0, 1, 1, 1);
	}
}

// Position - 0x42CC
void func_106(int *iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_107(iParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x42E9
void func_107(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			  bool bParam9) {
	func_108(iParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

// Position - 0x4307
void func_108(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			  bool bParam9) {
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		func_93(iParam0, 0, 0);
	}
	iParam0->f_6 = 2;
	func_109(iParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

// Position - 0x433F
void func_109(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			  bool bParam9) {
	int iVar0;
	int iVar1;

	if (iParam0->f_1 && cam::is_gameplay_hint_active()) {
		if (gameplay::get_game_timer() >= iParam0->f_8 + iParam0->f_9) {
			iParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (gameplay::is_string_null(iVar0)) {
		if (!network::network_is_game_in_progress()) {
			iVar0 = "CMN_HINT";
		}
		else {
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_94(iVar0)) {
		func_128();
	}
	if (func_127(iParam1) && entity::is_entity_visible(iParam1)) {
		iVar1 = 0;
		if (entity::is_entity_a_ped(iParam1)) {
			ped::_0x7D7A2E43E74E2EB8(entity::get_ped_index_from_entity_index(iParam1));
			ped::get_ped_flood_invincibility(entity::get_ped_index_from_entity_index(iParam1), 1);
			if (ped::is_tracked_ped_visible(entity::get_ped_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		else if (entity::is_entity_a_vehicle(iParam1)) {
			vehicle::track_vehicle_visibility(entity::get_vehicle_index_from_entity_index(iParam1));
			if (vehicle::is_vehicle_visible(entity::get_vehicle_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		else if (entity::is_entity_an_object(iParam1)) {
			object::track_object_visibility(entity::get_object_index_from_entity_index(iParam1));
			if (object::is_object_visible(entity::get_object_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		if (!cam::is_gameplay_hint_active()) {
			if (func_122(iParam0, bParam7, bParam9, 0)) {
				func_118(iParam0, iParam1, vParam2, iParam6);
			}
			if (*iParam0) {
				*iParam0 = 0;
			}
			else if (iParam0->f_6 == 2) {
				if (func_114(iVar0)) {
					if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0) &&
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (iVar1 && !ui::is_help_message_being_displayed() && uParam8) {
							if (!func_94(iVar0)) {
								func_113(iVar0, -1);
								iParam0->f_3 = iVar0;
								if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
									func_112(1);
								}
							}
						}
					}
				}
			}
			else if (func_114(iVar0)) {
				if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0)) {
					if (entity::is_entity_on_screen(iParam1) && iVar1 && !ui::is_help_message_being_displayed() &&
						uParam8) {
						if (!func_94(iVar0)) {
							func_113(iVar0, -1);
							iParam0->f_3 = iVar0;
							if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
								func_112(1);
							}
						}
					}
				}
			}
		}
		else {
			if (!gameplay::is_string_null(sParam5)) {
				if (func_94(sParam5)) {
					ui::clear_help(1);
				}
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (ped::is_ped_in_any_boat(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
						func_93(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
						func_93(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
						func_93(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
						func_93(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
						func_93(iParam0, iVar0, 1);
					}
				}
				else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
					func_93(iParam0, iVar0, 1);
				}
			}
			if (!func_122(iParam0, bParam7, bParam9, 0)) {
				if (!*iParam0 && !iParam0->f_1 && !func_111(iParam0)) {
					func_110(iParam0);
				}
			}
		}
	}
	else {
		func_93(iParam0, iVar0, 0);
	}
}

// Position - 0x46AC
void func_110(int *iParam0) {
	if (func_127(player::player_ped_id())) {
		ai::task_clear_look_at(player::player_ped_id());
	}
	if (cam::is_gameplay_hint_active()) {
		cam::set_cinematic_button_active(1);
		cam::stop_gameplay_hint(0);
		audio::stop_audio_scene("HINT_CAM_SCENE");
		graphics::_stop_screen_effect("FocusIn");
		if (iParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	iParam0->f_2 = -1;
	*iParam0 = 1;
}

// Position - 0x4715
bool func_111(var *uParam0) {
	int iVar0;

	if (uParam0->f_2 > 0) {
		iVar0 = uParam0->f_10 / 2;
		if (uParam0->f_2 + iVar0 > gameplay::get_game_timer()) {
			return true;
		}
	}
	return false;
}

// Position - 0x4740
int func_112(int iParam0) {
	switch (Global_35781) {
	case 0:
	case 3:
		if (iParam0) {
			Global_101700.f_9008.f_100++;
		}
		return Global_101700.f_9008.f_100;

	case 4:
		if (iParam0) {
			Global_101700.f_9008.f_101++;
		}
		return Global_101700.f_9008.f_101;

	case 5:
	case 15:
		if (iParam0) {
			Global_101700.f_9008.f_102++;
		}
		return Global_101700.f_9008.f_102;

	default: break;
	}
	return 3;
}

// Position - 0x47EA
void func_113(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x4801
bool func_114(char *sParam0) {
	if (!func_115(1, 1, 0)) {
		if (!gameplay::is_string_null_or_empty(sParam0) && func_94(sParam0) || func_94("CMN_HINT")) {
			ui::clear_help(1);
		}
		return false;
	}
	switch (Global_35781) {
	case 0:
	case 3:
		if (func_112(0) < 3) {
			return true;
		}
		break;

	case 4:
		if (func_112(0) < 1) {
			return true;
		}
		break;

	case 5:
	case 15:
		if (func_112(0) < 1) {
			return true;
		}
		break;

	default: break;
	}
	return false;
}

// Position - 0x489A
int func_115(int iParam0, int iParam1, int iParam2) {
	if (iParam0) {
		if (!player::is_player_control_on(player::player_id())) {
			return 0;
		}
	}
	if (iParam2) {
		return 1;
	}
	if (streaming::is_player_switch_in_progress()) {
		return 0;
	}
	if (func_117(0)) {
		return 0;
	}
	if (func_116()) {
		return 0;
	}
	if (network::_network_is_text_chat_active()) {
		return 0;
	}
	if (Global_68131) {
		return 0;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appinternet")) > 0) {
		return 0;
	}
	if (Global_53003) {
		return 0;
	}
	if (iParam1) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			if (ped::is_ped_in_any_boat(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
					return 0;
				}
			}
			else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
				return 0;
			}
			if (cam::is_gameplay_cam_looking_behind()) {
				return 0;
			}
		}
	}
	return 1;
}

// Position - 0x4A16
bool func_116() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x4A2B
bool func_117(int iParam0) {
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

// Position - 0x4A85
void func_118(int *iParam0, int iParam1, vector3 vParam2, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (entity::is_entity_dead(iParam1, 0)) {
		func_93(iParam0, 0, 0);
	}
	if (func_121(vParam2, 0f, 0f, 0f, 0)) {
		if (entity::is_entity_a_ped(iParam1)) {
			iVar0 = entity::get_ped_index_from_entity_index(iParam1);
			if (!ped::is_ped_in_any_vehicle(iVar0, 0)) {
				if (ped::is_ped_a_player(iVar0)) {
					if (!func_119()) {
						vParam2 = {0f, 0f, 1f};
					}
				}
				else if (ped::is_ped_male(iVar0)) {
					vParam2 = {0f, 0f, 1f};
				}
			}
		}
	}
	cam::set_cinematic_button_active(0);
	iVar1 = iParam0->f_9;
	iVar2 = iParam0->f_10;
	if (iParam5 == 1726668277) {
		if (iVar1 < 1500) {
			iVar1 = 1500;
		}
		if (iVar2 < 1500) {
			iVar2 = 1500;
		}
	}
	cam::set_gameplay_entity_hint(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	ai::task_look_at_entity(player::player_ped_id(), iParam1, -1, iVar3, iVar4);
	graphics::_start_screen_effect("FocusIn", 0, 0);
	audio::start_audio_scene("HINT_CAM_SCENE");
	audio::play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	iParam0->f_11 = 1;
	iParam0->f_8 = gameplay::get_game_timer();
	iParam0->f_1 = 1;
	*iParam0 = 0;
}

// Position - 0x4B8A
int func_119() { return func_120(player::player_id()); }

// Position - 0x4B9A
int func_120(int iParam0) {
	if (entity::get_entity_model(player::get_player_ped(iParam0)) == joaat("mp_f_freemode_01")) {
		return 1;
	}
	return 0;
}

// Position - 0x4BB9
bool func_121(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x4C00
bool func_122(var *uParam0, bool bParam1, bool bParam2, int iParam3) {
	if (uParam0->f_1) {
		if (gameplay::get_game_timer() >= uParam0->f_8 + uParam0->f_9) {
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5) {
	case 0:
		uParam0->f_7 = 0;
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (func_126(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (func_125(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (func_125(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (func_126(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		if (func_111(uParam0)) {
			uParam0->f_7 = 1;
			uParam0->f_5 = 4;
		}
		break;

	case 1:
		if (gameplay::get_game_timer() - uParam0->f_4 <= 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (!func_126(bParam1, bParam2, iParam3)) {
						uParam0->f_4 = gameplay::get_game_timer();
						uParam0->f_5 = 3;
					}
				}
				else if (!func_125(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (!func_125(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!func_126(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
		}
		else {
			uParam0->f_5 = 2;
		}
		break;

	case 2:
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (!func_126(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (!func_125(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (!func_125(bParam1, bParam2, iParam3) || ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
				ai::get_is_task_active(player::player_ped_id(), 2)) {
				uParam0->f_5 = 0;
			}
			else if (!func_126(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - uParam0->f_4 > 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (func_124(bParam1, bParam2, iParam3)) {
						uParam0->f_5 = 0;
					}
				}
				else if (func_123(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) || func_123(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
					ai::get_is_task_active(player::player_ped_id(), 2)) {
					uParam0->f_5 = 0;
				}
				else if (func_124(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
		}
		break;

	case 4:
		if (!func_111(uParam0)) {
			uParam0->f_5 = 0;
		}
		break;
	}
	if (!func_115(bParam1, bParam2, iParam3)) {
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7) {
		func_128();
		return true;
	}
	else {
		return false;
	}
	return false;
}

// Position - 0x4F6C
bool func_123(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_115(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_just_released(0, 80)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x4FBE
bool func_124(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_115(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_just_released(0, 80)) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x5007
bool func_125(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_115(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x5066
bool func_126(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_115(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x50BC
bool func_127(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (entity::is_entity_a_vehicle(iParam0)) {
			if (vehicle::is_vehicle_driveable(entity::get_vehicle_index_from_entity_index(iParam0), 0)) {
				return true;
			}
		}
		else if (entity::is_entity_a_ped(iParam0)) {
			if (!ped::is_ped_injured(entity::get_ped_index_from_entity_index(iParam0))) {
				return true;
			}
		}
		else if (entity::is_entity_an_object(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x5117
void func_128() { gameplay::set_bit(&Global_2314, 4); }

// Position - 0x5127
void func_129() {
	if (entity::does_entity_exist(iLocal_91)) {
		if (ped::is_ped_injured(iLocal_91)) {
			func_145();
			func_213();
		}
		else if (func_140()) {
			if (func_9() == 0) {
				func_139(&uLocal_134, 0, player::player_ped_id(), "MICHAEL", 0, 1);
				sLocal_301 = "REBTH_RESPM";
			}
			else if (func_9() == 1) {
				func_139(&uLocal_134, 0, player::player_ped_id(), "FRANKLIN", 0, 1);
				sLocal_301 = "REBTH_RESPF";
			}
			else if (func_9() == 2) {
				func_139(&uLocal_134, 0, player::player_ped_id(), "TREVOR", 0, 1);
				sLocal_301 = "REBTH_RESPT";
			}
			if (vehicle::is_vehicle_driveable(iLocal_93, 0) && !ped::is_ped_injured(iLocal_91)) {
				if (iLocal_317 == 2) {
					ai::task_enter_vehicle(iLocal_91, iLocal_93, 20000, -1, 2f, 1, 0);
				}
				else {
					ai::open_sequence_task(&iLocal_95);
					ai::task_enter_vehicle(0, iLocal_93, 20000, -1, 2f, 1, 0);
					ai::task_vehicle_mission_ped_target(0, iLocal_93, player::player_ped_id(), 8, fLocal_114, 786468,
														10f, 1f, 0);
					ai::close_sequence_task(iLocal_95);
					ai::task_perform_sequence(iLocal_91, iLocal_95);
					ai::clear_sequence_task(&iLocal_95);
					ped::set_ped_keep_task(iLocal_91, 1);
				}
			}
			func_65(&iLocal_133);
			iLocal_131 = func_61(iLocal_91, 1, 145);
			ui::_0x75A16C3DA34F1245(iLocal_131, iLocal_326);
			gameplay::_set_unk_map_flag(2);
			if (iLocal_317 == 1) {
				pathfind::set_roads_in_angled_area(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f,
												   75f, 0, 0, 1);
			}
			iLocal_89 = 2;
			func_130(1);
		}
	}
}

// Position - 0x5292
int func_130(int iParam0) {
	if (func_133()) {
		Global_101690 = 1;
		Global_101687 = gameplay::get_game_timer();
		if (func_41(Global_101689)) {
			func_131(0);
		}
		ui::set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_41(Global_101689)) {
			ui::flash_minimap_display();
		}
		return 1;
	}
	return 0;
}

// Position - 0x52E5
void func_131(int iParam0) {
	switch (iParam0) {
	case 0:
		if (Global_101700.f_23954.f_2 < 3) {
			if (!ui::is_help_message_on_screen()) {
				func_113(func_132(iParam0), -1);
				Global_101700.f_23954.f_2++;
				gameplay::set_bit(&Global_101696, 0);
			}
		}
		break;

	case 1:
		if (!gameplay::is_bit_set(Global_101696, 1)) {
			if (!ui::is_help_message_on_screen()) {
				func_113(func_132(iParam0), -1);
				Global_101700.f_23954.f_3++;
				gameplay::set_bit(&Global_101696, 1);
			}
		}
		break;

	case 2:
		if (!gameplay::is_bit_set(Global_101696, 2)) {
			if (!ui::is_help_message_on_screen()) {
				func_113(func_132(iParam0), -1);
				Global_101700.f_23954.f_4++;
				gameplay::set_bit(&Global_101696, 2);
			}
		}
		break;
	}
}

// Position - 0x53C6
char *func_132(int iParam0) {
	char *sVar0;

	sVar0 = "";
	switch (iParam0) {
	case 0: sVar0 = "AM_H_REFS"; break;

	case 1: sVar0 = "RE_FLASHBLIP"; break;

	case 2: sVar0 = "RE_HANDOVER"; break;
	}
	return sVar0;
}

// Position - 0x5409
bool func_133() {
	switch (func_134(&Global_25249, 0, 5, 0, script::get_id_of_this_thread())) {
	case 1: return true;

	case 0: return true;
	}
	return false;
}

// Position - 0x543F
int func_134(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_138(0)) {
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
		if (!func_136(iParam2)) {
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
			func_135(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x5576
void func_135(int *iParam0, int iParam1) {
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

// Position - 0x55C5
bool func_136(int iParam0) { return func_137(iParam0, Global_35781); }

// Position - 0x55D6
int func_137(int iParam0, int iParam1) {
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

// Position - 0x57B7
bool func_138(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_136(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x57D9
void func_139(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x5874
bool func_140() {
	switch (iLocal_317) {
	case 1:
		if (entity::is_entity_in_angled_area(player::player_ped_id(), 365.9538f, -1971.716f, 18.34454f, 526.409f,
											 -1861.941f, 34.52906f, 100f, 0, 1, 0)) {
			return true;
		}
		break;

	case 2:
		if (entity::is_entity_in_angled_area(player::player_ped_id(), 886.1401f, -229.9373f, 67.42569f, 652.7365f,
											 -91.95201f, 83.21314f, 60f, 0, 1, 0)) {
			return true;
		}
		break;

	case 3:
		if (entity::is_entity_in_angled_area(player::player_ped_id(), -1969.382f, 382.1331f, 68.15017f, -1878.152f,
											 158.4052f, 104.8504f, 100f, 0, 1, 0)) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x593F
bool func_141() {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {16f, 16f, 6f};
	vVar3 = {-16f, -16f, -6f};
	if (func_58(iLocal_91)) {
		if (entity::has_entity_been_damaged_by_entity(iLocal_91, player::player_ped_id(), 1)) {
			return true;
		}
	}
	else {
		return true;
	}
	if (func_67(iLocal_93)) {
		if (entity::has_entity_been_damaged_by_entity(iLocal_93, player::player_ped_id(), 1)) {
			return true;
		}
	}
	else {
		return true;
	}
	if (func_58(iLocal_92)) {
		if (gameplay::is_bullet_in_area(ped::get_ped_bone_coords(iLocal_92, 31086, 0f, 0f, 0f), 3f, 1)) {
			return true;
		}
		vVar0 = {vVar0 + ped::get_ped_bone_coords(iLocal_92, 31086, 0f, 0f, 0f)};
		vVar3 = {vVar3 + ped::get_ped_bone_coords(iLocal_92, 31086, 0f, 0f, 0f)};
		if (gameplay::is_projectile_type_in_area(vVar3, vVar0, joaat("weapon_smokegrenade"), 1) ||
			gameplay::is_projectile_type_in_area(vVar3, vVar0, joaat("weapon_grenade"), 1) ||
			gameplay::is_projectile_type_in_area(vVar3, vVar0, joaat("weapon_stickybomb"), 1)) {
			return true;
		}
		if (graphics::_0x2F09F7976C512404(ped::get_ped_bone_coords(iLocal_92, 31086, 0f, 0f, 0f), 6f)) {
			return true;
		}
		if (fire::is_explosion_in_sphere(-1, ped::get_ped_bone_coords(iLocal_92, 31086, 0f, 0f, 0f), 6f)) {
			return true;
		}
		if (ped::is_ped_fleeing(iLocal_92)) {
			return true;
		}
		if (entity::has_entity_been_damaged_by_entity(iLocal_92, player::player_ped_id(), 1)) {
			return true;
		}
	}
	return false;
}

// Position - 0x5A93
void func_142() {
	if (iLocal_118 == 0) {
		switch (iLocal_317) {
		case 1:
			vLocal_102 = {433.57f, -1916.68f, 24.04f};
			fLocal_112 = 248.5f;
			vLocal_105 = {439.054f, -1920.145f, 23.5581f};
			vLocal_108 = {434.31f, -1908.87f, 25.92f};
			fLocal_113 = -163.17f;
			vLocal_99 = {435.18f, -1915.18f, 24.68f};
			fLocal_111 = 226.13f;
			fLocal_115 = 10f;
			fLocal_116 = 20f;
			iLocal_90 = joaat("scorcher");
			fLocal_117 = 250f;
			sLocal_305 = "REBTH_THX2";
			sLocal_306 = "REBTH_THX3";
			sLocal_307 = "REBTH_GONE";
			break;

		case 2:
			vLocal_102 = {774.06f, -155.63f, 73.44f};
			fLocal_112 = 144.3932f;
			vLocal_105 = {769.8723f, -156.9548f, 73.5144f};
			vLocal_108 = {773.632f, -150.3134f, 74.6217f};
			fLocal_113 = 151.6004f;
			vLocal_99 = {771.41f, -154.29f, 74.09f};
			fLocal_111 = 150.54f;
			fLocal_115 = 10f;
			fLocal_116 = 20f;
			iLocal_90 = joaat("scorcher");
			fLocal_117 = 250f;
			sLocal_305 = "REBTH_THX2";
			sLocal_306 = "REBTH_THX3";
			sLocal_307 = "REBTH_GONE";
			break;

		case 3:
			vLocal_102 = {-1927.94f, 254.7125f, 84.4018f};
			fLocal_112 = 285.0046f;
			vLocal_105 = {-1934.785f, 253.2105f, 83.8164f};
			vLocal_108 = {-1931.04f, 252.19f, 84.99f};
			fLocal_113 = 42.33f;
			vLocal_99 = {-1932.27f, 254.5f, 84.4f};
			fLocal_111 = 96.81f;
			fLocal_115 = 10f;
			fLocal_116 = 35f;
			iLocal_90 = joaat("bati");
			fLocal_117 = 400f;
			sLocal_305 = "REBTH_THX2X";
			sLocal_306 = "REBTH_THX3X";
			sLocal_307 = "REBTH_GONEX";
			break;
		}
		vehicle::set_all_vehicle_generators_active_in_area(vLocal_102 - Vector(20f, 20f, 20f),
														   vLocal_102 + Vector(20f, 20f, 20f), 0, 1);
		vehicle::remove_vehicles_from_generators_in_area(vLocal_102 - Vector(20f, 20f, 20f),
														 vLocal_102 + Vector(20f, 20f, 20f), 0);
		gameplay::clear_area(vLocal_102, 20f, 1, 0, 0, 0);
		iLocal_118 = 1;
	}
	streaming::request_model(joaat("g_m_y_strpunk_01"));
	streaming::request_model(joaat("a_m_y_beachvesp_01"));
	streaming::request_model(iLocal_90);
	if (streaming::has_model_loaded(joaat("g_m_y_strpunk_01")) &&
		streaming::has_model_loaded(joaat("a_m_y_beachvesp_01")) && streaming::has_model_loaded(iLocal_90) &&
		func_144() && func_143()) {
		iLocal_93 = vehicle::create_vehicle(iLocal_90, vLocal_99, fLocal_111, 1, 1);
		streaming::set_model_as_no_longer_needed(iLocal_90);
		vehicle::set_vehicle_model_is_suppressed(iLocal_90, 1);
		vehicle::set_vehicle_engine_on(iLocal_93, 1, 1, 0);
		vehicle::set_vehicle_tyres_can_burst(iLocal_93, 0);
		vehicle::_0x0AD9E8F87FF7C16F(iLocal_93, 0);
		vehicle::set_vehicle_has_strong_axles(iLocal_93, 1);
		audio::start_audio_scene("RE_CAR_STEAL_SCENE");
		audio::_dynamic_mixer_related_fn(iLocal_93, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		fLocal_114 = fLocal_116;
		if (iLocal_317 == 3) {
			vehicle::set_vehicle_colours(iLocal_93, 49, 0);
			vehicle::set_vehicle_mod_kit(iLocal_93, 0);
			vehicle::set_vehicle_mod(iLocal_93, 16, 2, 0);
			vehicle::set_vehicle_mod(iLocal_93, 11, 3, 0);
			vehicle::set_vehicle_mod(iLocal_93, 12, 2, 0);
			vehicle::set_vehicle_mod(iLocal_93, 13, 2, 0);
			vehicle::set_vehicle_mod(iLocal_93, 23, 10, 0);
			vehicle::set_vehicle_mod(iLocal_93, 24, 10, 0);
			vehicle::toggle_vehicle_mod(iLocal_93, 22, 1);
			vehicle::toggle_vehicle_mod(iLocal_93, 17, 1);
			vehicle::toggle_vehicle_mod(iLocal_93, 21, 1);
			vehicle::toggle_vehicle_mod(iLocal_93, 20, 1);
			vehicle::toggle_vehicle_mod(iLocal_93, 19, 1);
			vehicle::set_vehicle_colours(iLocal_93, 89, 89);
			vehicle::set_vehicle_extra_colours(iLocal_93, 0, 1);
			vehicle::set_vehicle_number_plate_text_index(iLocal_93, 1);
		}
		ped::add_relationship_group("re_bikethief_relGroupVictim", &iLocal_122);
		ped::add_relationship_group("re_bikethief_relGroupThief", &iLocal_123);
		ped::set_relationship_between_groups(5, iLocal_123, iLocal_122);
		ped::set_relationship_between_groups(5, iLocal_123, 1862763509);
		ped::set_relationship_between_groups(1, iLocal_122, 1862763509);
		iLocal_91 = ped::create_ped(19, joaat("g_m_y_strpunk_01"), vLocal_108, fLocal_113, 1, 1);
		streaming::set_model_as_no_longer_needed(joaat("g_m_y_strpunk_01"));
		ped::set_blocking_of_non_temporary_events(iLocal_91, 1);
		entity::set_entity_only_damaged_by_player(iLocal_91, 1);
		ped::set_ped_relationship_group_hash(iLocal_91, iLocal_123);
		ped::set_ped_combat_movement(iLocal_91, 3);
		ped::set_ped_combat_attributes(iLocal_91, 17, 1);
		ped::set_ped_combat_attributes(iLocal_91, 13, 0);
		ped::set_ped_flee_attributes(iLocal_91, 1, 1);
		ped::set_ped_helmet(iLocal_91, 0);
		ped::set_ped_config_flag(iLocal_91, 42, 1);
		ped::set_ped_config_flag(iLocal_91, 281, 1);
		ped::set_ped_can_be_knocked_off_vehicle(iLocal_91, 2);
		audio::set_ambient_voice_name(iLocal_91, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		ai::task_play_anim(iLocal_91, sLocal_318, "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
		iLocal_92 = ped::create_ped(19, joaat("a_m_y_beachvesp_01"), vLocal_102, fLocal_112, 1, 1);
		streaming::set_model_as_no_longer_needed(joaat("a_m_y_beachvesp_01"));
		ped::set_blocking_of_non_temporary_events(iLocal_92, 1);
		entity::set_entity_only_damaged_by_player(iLocal_92, 1);
		ped::set_ped_flee_attributes(iLocal_92, 8, 1);
		if (iLocal_317 == 3) {
			ped::set_ped_helmet(iLocal_92, 1);
		}
		else {
			ped::set_ped_helmet(iLocal_92, 0);
		}
		ped::set_ped_config_flag(iLocal_92, 26, 1);
		ped::set_ped_config_flag(iLocal_92, 42, 1);
		ped::set_ped_config_flag(iLocal_92, 167, 1);
		ped::set_ped_config_flag(iLocal_92, 281, 1);
		ped::set_ped_relationship_group_hash(iLocal_92, iLocal_122);
		ped::set_ped_can_be_targetted(iLocal_92, 0);
		audio::set_ambient_voice_name(iLocal_92, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		ai::task_start_scenario_in_place(iLocal_92, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
		func_139(&uLocal_134, 1, iLocal_91, "BThief", 0, 1);
		func_139(&uLocal_134, 2, iLocal_92, "BThiefVictim", 0, 1);
		if (iLocal_316 == 0) {
			if (iLocal_317 == 3) {
				sLocal_299 = "REBTH_HELPX";
			}
			else {
				sLocal_299 = "REBTH_HELP";
			}
			sLocal_303 = "REBTH_RUNSOF";
			sLocal_304 = "REBTH_TAUNT";
			sLocal_320 = "I_CANT_CATCH_HIM_ON_FOOT";
		}
		else if (iLocal_316 == 1) {
			if (iLocal_317 == 3) {
				sLocal_299 = "REBTH_HLPBX";
			}
			else {
				sLocal_299 = "REBTH_HLPB";
			}
			sLocal_303 = "REBTH_RUNB";
			sLocal_304 = "REBTH_TNTB";
			sLocal_320 = "MY_DADS_GOING_TO_KILL_ME";
		}
		else {
			sLocal_299 = "REBTH_HLPC";
			sLocal_303 = "REBTH_RUNC";
			sLocal_304 = "REBTH_TNTC";
			sLocal_320 = "PLEASE_MAN_YOU_GOTTA_HELP_ME";
		}
		ped::set_create_random_cops(0);
		iLocal_89 = 1;
	}
}

// Position - 0x603C
int func_143() {
	if (iLocal_317 == 2) {
		vehicle::request_vehicle_recording(1, "RE_BikeThief2");
		if (!vehicle::has_vehicle_recording_been_loaded(1, "RE_BikeThief2")) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x6066
int func_144() {
	streaming::request_anim_dict(sLocal_318);
	streaming::request_anim_dict(sLocal_319);
	streaming::request_anim_dict(sLocal_321);
	streaming::request_anim_dict(sLocal_322);
	streaming::request_anim_dict(sLocal_324);
	streaming::request_anim_dict(sLocal_323);
	if (streaming::has_anim_dict_loaded(sLocal_318) && streaming::has_anim_dict_loaded(sLocal_319) &&
		streaming::has_anim_dict_loaded(sLocal_321) && streaming::has_anim_dict_loaded(sLocal_322) &&
		streaming::has_anim_dict_loaded(sLocal_324) && streaming::has_anim_dict_loaded(sLocal_323)) {
		return 1;
	}
	return 0;
}

// Position - 0x60E3
void func_145() {
	if (!ped::is_ped_injured(iLocal_92)) {
		if (func_69(iLocal_92, 993674639)) {
			ai::clear_ped_tasks_immediately(iLocal_92);
		}
		else {
			ai::clear_ped_tasks(iLocal_92);
		}
		ped::set_ped_keep_task(iLocal_92, 1);
		ai::task_smart_flee_ped(iLocal_92, player::player_ped_id(), 100f, -1, 0, 0);
	}
	if (!ped::is_ped_injured(iLocal_91)) {
		ped::set_ped_keep_task(iLocal_91, 1);
		ai::task_smart_flee_ped(iLocal_91, player::player_ped_id(), 100f, -1, 0, 1);
	}
}

// Position - 0x614E
bool func_146() {
	if (iLocal_89 == 0 && func_165()) {
		return true;
	}
	if (iLocal_89 == 1 && func_153()) {
		return true;
	}
	if (entity::does_entity_exist(iLocal_92)) {
		if (ped::is_ped_injured(iLocal_92)) {
			return true;
		}
		else if (entity::has_entity_been_damaged_by_entity(iLocal_92, player::player_ped_id(), 1)) {
			func_151();
			func_150(&uLocal_134, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return true;
		}
		else if (func_147(iLocal_92, 170f)) {
			func_151();
			func_150(&uLocal_134, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return true;
		}
	}
	if (player::get_player_wanted_level(player::player_id()) > 0 && iLocal_311 == 1) {
		return true;
	}
	if (entity::does_entity_exist(iLocal_93) && !vehicle::is_vehicle_driveable(iLocal_93, 0)) {
		return true;
	}
	return false;
}

// Position - 0x621C
bool func_147(int iParam0, float fParam1) {
	float fVar0;

	if (func_58(player::player_ped_id()) && func_58(iParam0)) {
		if (func_149(iParam0) || player::is_player_targetting_entity(player::player_id(), iParam0)) {
			if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
				fVar0 = 40f;
			}
			else {
				fVar0 = 3f;
			}
			if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0)) {
				if (func_148(iParam0, fParam1)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x6292
bool func_148(int iParam0, float fParam1) { return func_75(iParam0, player::player_ped_id(), fParam1, 1, 250, 7); }

// Position - 0x62AA
int func_149(int iParam0) {
	if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) &&
		weapon::is_ped_armed(player::player_ped_id(), 6)) {
		return 1;
	}
	return 0;
}

// Position - 0x62D2
void func_150(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	func_18(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7) {
		if (iParam3 < 12) {
			iParam3 = 7;
		}
	}
	gameplay::set_bit(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

// Position - 0x630D
void func_151() {
	Global_14611 = 0;
	func_152();
}

// Position - 0x631D
void func_152() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x633E
int func_153() {
	if (!func_136(5)) {
		return 1;
	}
	if (func_161()) {
		return 1;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_160()) {
			return 0;
		}
	}
	if (func_154(100f, 1) != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x63A0
int func_154(float fParam0, int iParam1) {
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
		if (func_11(func_9())) {
			iVar36 = func_46();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63) {
				iVar32 = iVar37;
				if (gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 2) &&
					!gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 3)) {
					func_155(iVar32, &Var0);
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

// Position - 0x6457
void func_155(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_156(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
		break;

	case 1:
		func_156(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
		break;

	case 2:
		func_156(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_157(iParam0), 1, 0);
		break;

	case 3:
		func_156(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_157(iParam0), 1, 1);
		break;

	case 4:
		func_156(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 5:
		func_156(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 6:
		func_156(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 7:
		func_156(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_157(iParam0), 0, 0);
		break;

	case 8:
		func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 9:
		func_156(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 10:
		func_156(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
		break;

	case 11:
		func_156(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 12:
		func_156(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 13:
		func_156(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
		break;

	case 14:
		func_156(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 15:
		func_156(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 16:
		func_156(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
		break;

	case 17:
		func_156(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 18:
		func_156(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 19:
		func_156(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 20:
		func_156(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 21:
		func_156(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_157(iParam0), 1, 0);
		break;

	case 22:
		func_156(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_157(iParam0), 1, 0);
		break;

	case 23:
		func_156(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_157(iParam0), 0, 1);
		break;

	case 24:
		func_156(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_157(iParam0), 0, 1);
		break;

	case 25:
		func_156(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 26:
		func_156(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 27:
		func_156(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
		break;

	case 28:
		func_156(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
		break;

	case 29:
		func_156(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
		break;

	case 30:
		func_156(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_157(iParam0), 1, 0);
		break;

	case 31:
		func_156(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 32:
		func_156(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 33:
		func_156(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 34:
		func_156(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 35:
		func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 36:
		func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_157(iParam0), 0, 0);
		break;

	case 37:
		func_156(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_157(iParam0), 1, 0);
		break;

	case 38:
		func_156(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
		break;

	case 39:
		func_156(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
		break;

	case 40:
		func_156(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
		break;

	case 41:
		func_156(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
		break;

	case 42:
		func_156(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
		break;

	case 43:
		func_156(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
		break;

	case 44:
		func_156(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 45:
		func_156(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 46:
		func_156(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 47:
		func_156(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 48:
		func_156(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 49:
		func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 50:
		func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 51:
		func_156(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 52:
		func_156(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 54:
		func_156(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_157(iParam0), 1, 0);
		break;

	case 55:
		func_156(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_157(iParam0), 1, 0);
		break;

	case 56:
		func_156(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
		break;

	case 53:
		func_156(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
		break;

	case 57:
		func_156(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 58:
		func_156(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 59:
		func_156(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	case 60:
		func_156(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_157(iParam0), 0, 1);
		break;

	case 61:
		func_156(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_157(iParam0), 0, 1);
		break;

	case 62:
		func_156(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x760C
void func_156(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x769D
int func_157(int iParam0) {
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

// Position - 0x79E3
struct<2> func_158(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_159(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x7A1A
struct<2>
func_159(int iParam0) {
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

//Position - 0x7E66
int func_160()
{
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x7E83
bool func_161() {
	if (func_164() && !func_160()) {
		return true;
	}
	if (func_163() && func_162()) {
		return true;
	}
	return false;
}

// Position - 0x7EB5
bool func_162() { return Global_101418 > 0; }

// Position - 0x7EC3
int func_163() {
	if (Global_88746 != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x7ED8
int func_164() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x7EFE
int func_165() {
	if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
		if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_86) < 75f * 75f) {
			return 1;
		}
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_160()) {
			return 0;
		}
	}
	if (func_161()) {
		return 1;
	}
	if (func_154(100f, 1) != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x7F84
void func_166() {}

// Position - 0x7F8C
int func_167() {
	int iVar0;

	if (func_168(26, 1)) {
		iVar0++;
	}
	if (func_168(26, 2)) {
		iVar0++;
	}
	if (func_168(8, 0)) {
		iVar0++;
	}
	return iVar0;
}

// Position - 0x7FC6
bool func_168(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_101700.f_23954.f_8[iParam0], iParam1)) {
		return true;
	}
	return false;
}

// Position - 0x7FE9
void func_169(int iParam0) {
	if (iParam0 == -1) {
		iParam0 = func_50();
	}
	if (iParam0 == -1) {
		return;
	}
	func_171(iParam0);
	gameplay::_0x65D2EBB47E1CEC21(0);
	gameplay::set_random_event_flag(1);
	Global_101686 = 0;
	func_170();
}

// Position - 0x8022
void func_170() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			vehicle::set_vehicle_model_is_suppressed(
				entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)), 1);
		}
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
	}
}

// Position - 0x805F
void func_171(int iParam0) { Global_101689 = iParam0; }

// Position - 0x806D
bool func_172(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;

	if (!Global_138924) {
		return false;
	}
	if (iParam3 == -1) {
		iParam3 = func_50();
	}
	if (iParam3 == -1) {
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32) {
		if (!func_211()) {
			return false;
		}
	}
	vLocal_86 = {vParam0};
	iVar0 = 0;
	if (!iVar0) {
		if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
			vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_160()) {
				return false;
			}
		}
		if (!Global_101700.f_8044) {
			return false;
		}
		if (func_23(0)) {
			return false;
		}
		if (func_161()) {
			return false;
		}
		if (func_210()) {
			return false;
		}
		if (Global_101689 != -1) {
			return false;
		}
		if (func_11(func_9())) {
			if (func_154(100f, 1) != -1) {
				return false;
			}
		}
		if (player::is_player_playing(player::player_id()) && !iParam6) {
			if (vVar1.z - vLocal_86.z > 50f) {
				return false;
			}
		}
		if (!func_209(iParam3)) {
			return false;
		}
		if (func_11(func_9())) {
			if (func_208(func_9()) == 4 || func_208(func_9()) == 5) {
				return false;
			}
		}
		if (func_11(func_9())) {
			if (!func_207(iParam3, iParam4, 145)) {
				return false;
			}
		}
		if (!func_206(Global_101700.f_23954.f_43[iParam3])) {
			return false;
		}
		if (gameplay::get_game_timer() - Global_101691 < 150000) {
			if (iParam3 != 30) {
				return false;
			}
		}
		if (func_205()) {
			return false;
		}
		if (gameplay::get_mission_flag()) {
			return false;
		}
		if (gameplay::get_random_event_flag()) {
			return false;
		}
		if (!func_196(4)) {
			return false;
		}
		if (!func_136(5)) {
			return false;
		}
		if (func_168(iParam3, iParam4) && !iParam5) {
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
		if (iParam3 == 9 && (iParam4 == 2 || iParam4 == 5) && !func_168(0, 0)) {
			return false;
		}
		if (Global_25336) {
			return false;
		}
		if (func_209(30) && !func_168(30, 0)) {
			if (iParam3 != 30) {
				if (system::vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f) {
					return false;
				}
			}
		}
		if (func_11(func_9())) {
			iVar4 = 0;
			while (iVar4 < 3) {
				vVar5 = {Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_195(iVar8)) {
					if (func_173(iVar4)) {
						if (!func_121(vVar5, 0f, 0f, 0f, 0)) {
							if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 0), vVar5) <
								210f * 210f) {
								if (func_9() != iVar4) {
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

// Position - 0x8407
bool func_173(int iParam0) {
	int iVar0;

	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
	return func_174(iVar0);
}

// Position - 0x8428
int func_174(int iParam0) { return func_175(iParam0, 1); }

// Position - 0x8437
int func_175(int iParam0, int iParam1) {
	int *iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_195(iParam0)) {
		return 0;
	}
	func_176(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (iVar5 > 0 || iVar4 > 0 || iVar3 > 0 || iVar2 >= iParam1) {
		return 1;
	}
	return 0;
}

// Position - 0x848A
void func_176(int iParam0, int *iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6) {
	func_177(func_188(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x84A8
void func_177(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6,
			  int *iParam7) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_187(iParam0, iParam1)) {
		iVar0 = func_186(iParam1);
		iVar1 = func_184(iParam0);
		iVar2 = func_184(iParam0) - func_184(iParam1);
		iVar3 = func_186(iParam0) - func_186(iParam1);
		iVar4 = func_183(iParam0) - func_183(iParam1);
		iVar5 = func_182(iParam0) - func_182(iParam1);
		iVar6 = func_181(iParam0) - func_181(iParam1);
		iVar7 = func_180(iParam0) - func_180(iParam1);
	}
	else {
		iVar0 = func_186(iParam0);
		iVar1 = func_184(iParam1);
		iVar2 = func_184(iParam1) - func_184(iParam0);
		iVar3 = func_186(iParam1) - func_186(iParam0);
		iVar4 = func_183(iParam1) - func_183(iParam0);
		iVar5 = func_182(iParam1) - func_182(iParam0);
		iVar6 = func_181(iParam1) - func_181(iParam0);
		iVar7 = func_180(iParam1) - func_180(iParam0);
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
		iVar4 += func_179(iVar0, iVar1);
		iVar3--;
		iVar0 = system::round(func_178(system::to_float(iVar0 + 1), 0f, 12f));
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

// Position - 0x86A9
float func_178(float fParam0, float fParam1, float fParam2) {
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

// Position - 0x86EB
int func_179(int iParam0, int iParam1) {
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

// Position - 0x878D
int func_180(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x87A0
int func_181(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x87B3
int func_182(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x87C6
int func_183(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x87D8
int func_184(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_185(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x87FD
int func_185(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x8814
int func_186(int iParam0) { return iParam0 & 15; }

// Position - 0x8821
bool func_187(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_195(iParam1) || !func_195(iParam0)) {
		return true;
	}
	iVar0 = func_184(iParam0);
	iVar1 = func_184(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_186(iParam0);
	iVar1 = func_186(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_183(iParam0);
	iVar1 = func_183(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_181(iParam0);
	iVar1 = func_181(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	return false;
}

// Position - 0x892D
int func_188() {
	int *iVar0;

	func_194(&iVar0, time::get_clock_seconds());
	func_193(&iVar0, time::get_clock_minutes());
	func_192(&iVar0, time::get_clock_hours());
	func_191(&iVar0, time::get_clock_day_of_month());
	func_190(&iVar0, time::get_clock_month());
	func_189(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x8973
void func_189(int *iParam0, int iParam1) {
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

// Position - 0x89F9
void func_190(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x8A2C
void func_191(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_186(*uParam0);
	iVar1 = func_184(*uParam0);
	if (iParam1 < 1 || iParam1 > func_179(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x8A7D
void func_192(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x8AB7
void func_193(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x8AF2
void func_194(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x8B2E
bool func_195(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return false;
	}
	iVar0 = func_180(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return false;
	}
	iVar1 = func_181(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return false;
	}
	iVar2 = func_182(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return false;
	}
	iVar3 = func_184(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return false;
	}
	iVar4 = func_186(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return false;
	}
	iVar5 = func_183(iParam0);
	if (iVar5 < 1 || iVar5 > func_179(iVar4, iVar3)) {
		return false;
	}
	return true;
}

// Position - 0x8C0A
int func_196(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_9();
				if (!func_11(iVar0)) {
					return 0;
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_204() || Global_100747 ||
						Global_25192 || func_203() || func_16(8, -1) || func_202() || func_201() || func_200() ||
						func_199() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_204() || Global_25192 ||
						func_203() || func_16(8, -1) || func_200() || func_202() || func_201() || func_199() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 2:
					if (!player::is_player_ready_for_cutscene(player::player_id()) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_204() || Global_100747 ||
						Global_25192 || func_203() || func_16(8, -1) || func_200() || func_202() || func_201() ||
						func_199() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return 0;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_204() || Global_100747 ||
						Global_25192 || func_203() || func_16(8, -1) || func_202() || func_201() || func_199() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 4:
					if (func_204() || player::get_player_wanted_level(player::player_id()) > 0 || func_16(8, -1) ||
						func_199() || func_198() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 5:
					if (func_16(8, -1) || func_202() || func_201() || func_198() || func_197()) {
						return 0;
					}
					if (streaming::is_player_switch_in_progress() && streaming::get_player_switch_type() != 3 &&
						streaming::get_player_switch_state() < 8) {
						return 0;
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
							player::is_player_climbing(player::player_id()) || func_204() || Global_25192 ||
							func_203() || func_16(8, -1) || func_201() || func_200() || func_199() ||
							Global_101700.f_6647.f_919[iVar0] == 5) {
							return 0;
						}
					}
					break;

				case 7:
					if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
						!player::is_player_control_on(player::player_id()) ||
						!player::is_player_ready_for_cutscene(player::player_id()) || !cam::is_screen_faded_in() ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) || func_204() || func_201() ||
						Global_100747 || Global_25192 || func_203() || Global_36912 || func_16(8, -1) || func_200() ||
						func_198() || func_199() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
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
						player::is_player_climbing(player::player_id()) || func_204() || Global_100747 ||
						Global_25192 || func_203() || func_16(8, -1) || func_200() || func_198() || func_202() ||
						func_201() || func_199()) {
						return 0;
					}
					break;
				}
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
	return 1;
}

// Position - 0x9327
var func_197() { return Global_91530.f_1; }

// Position - 0x9335
int func_198() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x935B
int func_199() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x9375
int func_200() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x939F
bool func_201() { return Global_91543.f_304 > 0; }

// Position - 0x93B0
bool func_202() { return Global_91543.f_303 > 0; }

// Position - 0x93C1
var func_203() { return Global_1315233; }

// Position - 0x93CD
int func_204() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x93E9
bool func_205() {
	func_8();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
		return true;
	}
	return false;
}

// Position - 0x9411
int func_206(int iParam0) { return func_187(func_188(), iParam0); }

// Position - 0x9423
int func_207(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_9();
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

// Position - 0x9507
int func_208(int iParam0) {
	if (!func_11(iParam0)) {
		return 7;
	}
	return Global_101700.f_6647.f_919[iParam0];
}

// Position - 0x952B
int func_209(int iParam0) {
	int iVar0;
	var uVar1;

	if (iParam0 == 31 || iParam0 == 32) {
		if (!func_211()) {
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

// Position - 0x9589
bool func_210() {
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

// Position - 0x95CD
int func_211() {
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

// Position - 0x9688
float func_212(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0x96C2
void func_213() {
	func_93(&iLocal_330, 0, 0);
	if (audio::is_audio_scene_active("RE_CAR_STEAL_SCENE")) {
		if (vehicle::is_vehicle_driveable(iLocal_93, 0)) {
			audio::_0x18EB48CFC41F2EA0(iLocal_93, 0);
		}
		audio::stop_audio_scene("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_317 != 3) {
		func_216(26);
	}
	else {
		func_216(8);
	}
	if (iLocal_317 == 1) {
		pathfind::set_roads_back_to_original_in_angled_area(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f,
															28.68633f, 75f, 1);
	}
	ped::remove_scenario_blocking_area(iLocal_325, 0);
	vehicle::set_all_vehicle_generators_active_in_area(vLocal_102 - Vector(20f, 20f, 20f),
													   vLocal_102 + Vector(20f, 20f, 20f), 1, 1);
	if (vehicle::is_vehicle_driveable(iLocal_93, 0)) {
		vehicle::set_vehicle_is_considered_by_player(iLocal_93, 1);
		if (vehicle::is_playback_going_on_for_vehicle(iLocal_93)) {
			vehicle::stop_playback_recorded_vehicle(iLocal_93);
		}
	}
	if (iLocal_317 == 2) {
		vehicle::remove_vehicle_recording(1, "RE_BikeThief2");
	}
	func_65(&iLocal_133);
	func_65(&iLocal_131);
	func_66(&iLocal_342);
	func_65(&iLocal_132);
	func_72(0);
	func_215(&uLocal_134, 0);
	func_215(&uLocal_134, 1);
	func_215(&uLocal_134, 2);
	if (func_58(iLocal_92) && func_58(iLocal_93) && ped::is_ped_in_vehicle(iLocal_92, iLocal_93, 0)) {
		ai::task_vehicle_drive_wander(iLocal_92, iLocal_93, fLocal_114, 786485);
		ped::set_ped_keep_task(iLocal_92, 1);
	}
	func_87(&iLocal_91, 1, 0, 1);
	func_87(&iLocal_92, 1, 0, 1);
	func_214(&iLocal_93);
	if (func_58(iLocal_94)) {
		vehicle::set_last_driven_vehicle(iLocal_94);
		func_214(&iLocal_94);
	}
	streaming::set_model_as_no_longer_needed(joaat("g_m_y_strpunk_01"));
	streaming::set_model_as_no_longer_needed(joaat("a_m_y_beachvesp_01"));
	streaming::set_model_as_no_longer_needed(joaat("scorcher"));
	streaming::set_model_as_no_longer_needed(joaat("bati"));
	streaming::remove_anim_dict(sLocal_318);
	streaming::remove_anim_dict(sLocal_319);
	streaming::remove_anim_dict(sLocal_321);
	streaming::remove_anim_dict(sLocal_322);
	streaming::remove_anim_dict(sLocal_323);
	streaming::remove_anim_dict(sLocal_324);
	gameplay::_set_unk_map_flag(0);
	script::terminate_this_thread();
}

// Position - 0x9890
void func_214(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0x98C8
void func_215(var *uParam0, int iParam1) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
		(*uParam0)[iParam1 /*10*/].f_7 = 0;
	}
}

// Position - 0x98E5
void func_216(int iParam0) {
	char cVar0[64];

	if (iParam0 == -1) {
		iParam0 = func_50();
	}
	if (iParam0 == -1) {
		return;
	}
	if (func_227()) {
		func_220(iParam0);
		ui::set_mission_name(0, 0);
		Global_101691 = gameplay::get_game_timer();
		func_219(30000);
		StringCopy(&cVar0, func_218(Global_101689, 1), 64);
		if (func_49(Global_101689) > 0) {
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		stats::_0x71862B1D855F32E1(&cVar0, Global_101686, gameplay::get_game_timer() - Global_101687, 0);
	}
	else if (gameplay::is_bit_set(Global_101696, 0) && Global_101700.f_23954.f_2 < 3) {
		gameplay::clear_bit(&Global_101696, 0);
	}
	func_217(&Global_25249);
	Global_101690 = 0;
	func_171(-1);
}

// Position - 0x999A
void func_217(int *iParam0) {
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

// Position - 0x99D7
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

// Position - 0x9C20
void func_219(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0x9C32
void func_220(int iParam0) { func_221(iParam0, 0, func_226(iParam0)); }

// Position - 0x9C47
void func_221(int iParam0, int iParam1, int iParam2) {
	int *iVar0;
	struct<16> Var1;

	iVar0 = func_188();
	func_224(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_223(iParam0, &iVar0);
	Var1 = {func_222(&iVar0)};
}

// Position - 0x9C76
struct<16> func_222(int *iParam0) {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_182(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_181(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_180(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_183(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_186(*iParam0);
	if (iVar16 < 9) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_184(*iParam0), 64);
	return Var0;
}

//Position - 0x9D46
void func_223(int iParam0, int* iParam1)
{
	Global_101700.f_23954.f_43[iParam0] = *iParam1;
}

// Position - 0x9D5E
void func_224(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_184(*iParam0);
	iVar1 = func_186(*iParam0);
	iVar2 = func_183(*iParam0);
	iVar3 = func_182(*iParam0);
	iVar4 = func_181(*iParam0);
	iVar5 = func_180(*iParam0);
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
	iVar6 = func_179(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_179(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_225(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0x9EE0
void func_225(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_194(iParam0, iParam1);
	func_193(iParam0, iParam2);
	func_192(iParam0, iParam3);
	func_190(iParam0, iParam5);
	func_191(iParam0, iParam4);
	func_189(iParam0, iParam6);
}

// Position - 0x9F18
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

// Position - 0xA0BB
bool func_227() {
	if (Global_101689 == func_50() && gameplay::get_random_event_flag() && Global_101690) {
		return true;
	}
	return false;
}
