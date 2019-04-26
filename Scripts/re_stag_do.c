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
float fLocal_43 = 0f;
var uLocal_44 = 0;
vector3 vLocal_45 = {0f, 0f, 0f};
int iLocal_48 = 0;
int iLocal_49 = 0;
int iLocal_50 = 0;
int iLocal_51 = 0;
vector3 vLocal_52 = {0f, 0f, 0f};
int iLocal_55 = 0;
int iLocal_56 = 0;
int iLocal_57 = 0;
int iLocal_58 = 0;
int iLocal_59 = 0;
var uLocal_60[4] = {0, 0, 0, 0};
int iLocal_65 = 0;
int iLocal_66 = 0;
vector3 vLocal_67 = {0f, 0f, 0f};
vector3 vLocal_70 = {0f, 0f, 0f};
vector3 vLocal_73 = {0f, 0f, 0f};
float fLocal_76 = 0f;
vector3 vLocal_77 = {0f, 0f, 0f};
vector3 vLocal_80 = {0f, 0f, 0f};
vector3 vLocal_83 = {0f, 0f, 0f};
float fLocal_86 = 0f;
vector3 vLocal_87 = {0f, 0f, 0f};
vector3 vLocal_90 = {0f, 0f, 0f};
vector3 vLocal_93 = {0f, 0f, 0f};
vector3 vLocal_96 = {0f, 0f, 0f};
vector3 vLocal_99 = {0f, 0f, 0f};
float fLocal_102 = 0f;
vector3 vLocal_103 = {0f, 0f, 0f};
vector3 vLocal_106 = {0f, 0f, 0f};
vector3 vLocal_109 = {0f, 0f, 0f};
float fLocal_112 = 0f;
int iLocal_113 = 0;
int iLocal_114 = 0;
int iLocal_115 = 0;
bool bLocal_116 = 0;
int iLocal_117 = 0;
bool bLocal_118 = 0;
int iLocal_119 = 0;
int iLocal_120 = 0;
int iLocal_121 = 0;
int iLocal_122 = 0;
bool bLocal_123 = 0;
int iLocal_124 = 0;
int iLocal_125 = 0;
int iLocal_126 = 0;
int iLocal_127 = 0;
int iLocal_128 = 0;
int iLocal_129 = 0;
int iLocal_130 = 0;
int iLocal_131 = 0;
int iLocal_132 = 0;
int iLocal_133 = 0;
int iLocal_134 = 0;
int iLocal_135 = 0;
var *uLocal_136 = NULL;
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
var uLocal_299 = 0;
var uLocal_300 = 0;
int iLocal_301 = 0;
char *sLocal_302 = NULL;
int iLocal_303 = 0;
int iLocal_304 = 0;
int iLocal_305 = 0;
int iLocal_306 = 0;
int iLocal_307 = 0;
int iLocal_308 = 0;
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
int iLocal_320 = 0;
int iLocal_321 = 0;
int iLocal_322 = 0;
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
	fLocal_43 = 20f;
	iLocal_117 = 1;
	iLocal_308 = 6000;
	vLocal_52 = {ScriptParam_0.f_1[0 /*3*/]};
	if (player::has_force_cleanup_occurred(11)) {
		if (!ped::is_ped_injured(iLocal_55)) {
			if (ped::is_ped_in_group(iLocal_55)) {
				ped::remove_ped_from_group(iLocal_55);
			}
		}
		if (!ped::is_ped_injured(iLocal_57)) {
			if (ped::is_ped_in_group(iLocal_57)) {
				ped::remove_ped_from_group(iLocal_57);
			}
		}
		func_177();
	}
	if (func_176(283, 1)) {
		script::terminate_this_thread();
	}
	if (func_147(vLocal_52, -1, 0, 0, 0)) {
		if (time::get_clock_hours() > 2 && time::get_clock_hours() < 15 &&
			!player::is_player_wanted_level_greater(player::player_id(), 0)) {
		}
		else {
			script::terminate_this_thread();
		}
		func_144(-1);
	}
	else {
		script::terminate_this_thread();
	}
	while (true) {
		system::wait(0);
		if (brain::is_world_point_within_brain_activation_range() || bLocal_116) {
			if (!func_143()) {
				if (func_142()) {
					func_177();
				}
			}
			unk1::_0x208784099002BC30("RE_SDRM", 0);
			switch (iLocal_48) {
			case 0:
				if (func_130()) {
					func_177();
				}
				if (iLocal_50) {
					iLocal_51 = 1;
					iLocal_48 = 1;
				}
				else {
					func_121();
				}
				break;

			case 1:
				func_120();
				if (!iLocal_114) {
					func_119();
					func_116();
					func_105();
					if (!ped::is_synchronized_scene_running(iLocal_318)) {
						func_104();
					}
				}
				else {
					func_101();
					if (!iLocal_124) {
						func_99();
					}
					func_91();
					func_89();
					func_73();
					func_72(iLocal_55, 0);
					if (!iLocal_121) {
					}
					if (iLocal_49 == 0 && !bLocal_118) {
						func_68();
						func_66();
					}
					else {
						func_61();
					}
					if (iLocal_49 == 3) {
						if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
																  vLocal_87, 1) < 100f) {
							if (!cutscene::is_cutscene_active()) {
								cutscene::request_cutscene("sdrm_mcs_2", 8);
							}
							if (cutscene::is_cutscene_active()) {
								if (cutscene::_0xB56BBBCC2955D9CB()) {
									if (!ped::is_ped_injured(iLocal_55) && !ped::is_ped_injured(iLocal_57) &&
										!ped::is_ped_injured(iLocal_56) && !ped::is_ped_injured(iLocal_58) &&
										!entity::is_entity_dead(iLocal_132, 0)) {
										cutscene::_0x2A56C06EBEF2B0D9("Groom", iLocal_55, 0);
										cutscene::_0x2A56C06EBEF2B0D9("Groomsman", iLocal_57, 0);
										cutscene::_0x2A56C06EBEF2B0D9("Bride", iLocal_56, 0);
										cutscene::_0x2A56C06EBEF2B0D9("Father_of_the_bride", iLocal_58, 0);
									}
								}
							}
						}
						else if (cutscene::is_cutscene_active()) {
							cutscene::remove_cutscene();
						}
						if (bLocal_118) {
							if (func_60(1, 0, 1)) {
								func_25();
							}
						}
						else if (!ped::is_ped_injured(iLocal_57)) {
							if (ped::is_ped_in_any_vehicle(iLocal_57, 0)) {
								if (ui::does_blip_exist(iLocal_322)) {
									ui::remove_blip(&iLocal_322);
									if (ui::does_blip_exist(iLocal_320)) {
										ui::remove_blip(&iLocal_320);
									}
									if (!ui::does_blip_exist(iLocal_320)) {
										iLocal_320 = func_23(vLocal_67, 1);
									}
								}
							}
						}
					}
					if (func_3()) {
						if (!ped::is_ped_injured(iLocal_55)) {
							ai::task_smart_flee_ped(iLocal_55, player::player_ped_id(), 1000f, -1, 0, 0);
						}
						if (!ped::is_ped_injured(iLocal_57)) {
							ai::task_smart_flee_ped(iLocal_57, player::player_ped_id(), 1000f, -1, 0, 0);
						}
						if (!ped::is_ped_injured(iLocal_56)) {
							ai::task_smart_flee_ped(iLocal_56, player::player_ped_id(), 1000f, -1, 0, 0);
						}
						if (!ped::is_ped_injured(iLocal_58)) {
							ai::task_smart_flee_ped(iLocal_58, player::player_ped_id(), 1000f, -1, 0, 0);
						}
						func_2();
					}
				}
				func_1();
				break;
			}
		}
		else {
			func_177();
		}
	}
}

// Position - 0x395
void func_1() {}

// Position - 0x39D
void func_2() { func_177(); }

// Position - 0x3A9
bool func_3() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_injured(iLocal_55)) {
			return true;
		}
		else {
			if (entity::has_entity_been_damaged_by_entity(iLocal_55, player::player_ped_id(), 1) ||
				entity::is_entity_in_water(iLocal_55)) {
				return true;
			}
			if (bLocal_116) {
				if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
					func_21();
					if (func_4(&uLocal_136, "stagdau", "stagd_police", 4, 0, 0, 0)) {
						return true;
					}
				}
			}
		}
	}
	if (!entity::is_entity_dead(iLocal_59, 0)) {
		if (!vehicle::is_vehicle_driveable(iLocal_59, 0) || vehicle::is_vehicle_stuck_on_roof(iLocal_59) ||
			entity::is_entity_in_water(iLocal_59)) {
			func_21();
			if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0)) {
				return true;
			}
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (ped::is_ped_in_model(player::player_ped_id(), joaat("towtruck")) ||
				ped::is_ped_in_model(player::player_ped_id(), joaat("towtruck2"))) {
				if (vehicle::is_vehicle_attached_to_tow_truck(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
															  iLocal_59)) {
					func_21();
					if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0)) {
						return true;
					}
				}
			}
		}
	}
	else {
		func_21();
		if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0)) {
			return true;
		}
	}
	if (!ped::is_ped_injured(iLocal_55)) {
		if (!entity::is_entity_at_entity(iLocal_55, player::player_ped_id(), 150f, 150f, 150f, 0, 1, 0)) {
			if (!entity::is_entity_dead(iLocal_59, 0)) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_59, 0)) {
					player::set_player_wanted_level_no_drop(player::player_id(), 1, 0);
					player::set_wanted_level_difficulty(player::player_id(), 0f);
				}
			}
			return true;
		}
	}
	if (iLocal_49 >= 1) {
		if (bLocal_123) {
			if (ped::is_ped_injured(iLocal_57)) {
				func_21();
				return true;
			}
			else if (entity::has_entity_been_damaged_by_entity(iLocal_57, player::player_ped_id(), 1)) {
				func_21();
				return true;
			}
		}
		if (!entity::is_entity_dead(iLocal_59, 0)) {
			if (!entity::is_entity_at_entity(iLocal_59, player::player_ped_id(), 20f, 20f, 20f, 0, 1, 0)) {
				if (!iLocal_126) {
					func_21();
					if (func_4(&uLocal_136, "stagdau", "stagd_comeba", 4, 0, 0, 0)) {
						iLocal_126 = 1;
					}
				}
			}
			else {
				iLocal_126 = 0;
			}
			if (!entity::is_entity_at_entity(iLocal_59, player::player_ped_id(), 150f, 150f, 150f, 0, 1, 0)) {
				return true;
			}
		}
	}
	if (iLocal_49 == 3) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_injured(iLocal_56) || ped::is_ped_injured(iLocal_58)) {
				return true;
			}
			else if (entity::has_entity_been_damaged_by_entity(iLocal_56, player::player_ped_id(), 1) ||
					 entity::has_entity_been_damaged_by_entity(iLocal_58, player::player_ped_id(), 1)) {
				return true;
			}
		}
		if (!ped::is_ped_injured(iLocal_57)) {
			if (!entity::is_entity_at_entity(iLocal_57, player::player_ped_id(), 20f, 20f, 20f, 0, 1, 0) &&
				iLocal_310) {
				if (!iLocal_127) {
					func_21();
					if (func_4(&uLocal_136, "stagdau", "stagd_nobest", 4, 0, 0, 0)) {
						iLocal_127 = 1;
					}
				}
			}
			else {
				iLocal_127 = 0;
			}
			if (!entity::is_entity_at_entity(iLocal_57, player::player_ped_id(), 150f, 150f, 150f, 0, 1, 0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x6AC
bool func_4(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

// Position - 0x6FA
int func_5(char *sParam0, int iParam1, int iParam2) {
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
					func_19();
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
		if (func_18(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_17();
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
				func_10();
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
				if (func_9()) {
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
			if (func_8()) {
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
			func_7();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_6();
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
		func_19();
	}
	return 0;
}

// Position - 0x9C6
void func_6() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x9F7
void func_7() {
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

// Position - 0xA8C
bool func_8() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0xAB3
bool func_9() {
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

// Position - 0xB4C
void func_10() {
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
		Global_14443 = func_11();
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

// Position - 0xBEE
int func_11() {
	func_12();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0xC07
void func_12() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_15(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_14(player::player_ped_id());
			if (func_13(iVar0) && (!func_16(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_13(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0xD04
bool func_13(int iParam0) { return iParam0 < 3; }

// Position - 0xD10
int func_14(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_15(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0xD4D
int func_15(int iParam0) {
	if (func_13(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xD77
bool func_16(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xD85
void func_17() {
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

// Position - 0xDDC
bool func_18(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0xE17
void func_19() {
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

// Position - 0xE6E
void func_20(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
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

// Position - 0xEC4
void func_21() {
	Global_14611 = 0;
	func_22();
}

// Position - 0xED4
void func_22() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0xEF5
int func_23(vector3 vParam0, int iParam3) {
	int iVar0;

	iVar0 = ui::add_blip_for_coord(vParam0);
	ui::set_blip_scale(iVar0, func_24(network::network_is_game_in_progress(), 1f, 1f));
	ui::set_blip_route(iVar0, iParam3);
	return iVar0;
}

// Position - 0xF21
var func_24(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0xF38
void func_25() {
	switch (iLocal_131) {
	case 0:
		func_21();
		system::wait(0);
		func_52(1, 1, 1, 0);
		audio::set_frontend_radio_active(0);
		iLocal_310 = 0;
		iLocal_131++;
		break;

	case 1: iLocal_131++; break;

	case 2:
		if (!ped::is_ped_injured(iLocal_55) && !ped::is_ped_injured(iLocal_57) && !ped::is_ped_injured(iLocal_56) &&
			!ped::is_ped_injured(iLocal_58) && !entity::is_entity_dead(iLocal_132, 0)) {
			if (func_51()) {
				cutscene::register_entity_for_cutscene(iLocal_132, "SDRM_Car", 0, 0, 0);
				cutscene::register_entity_for_cutscene(iLocal_55, "Groom", 0, 0, 0);
				cutscene::register_entity_for_cutscene(iLocal_57, "Groomsman", 0, 0, 0);
				cutscene::register_entity_for_cutscene(iLocal_56, "Bride", 0, 0, 0);
				cutscene::register_entity_for_cutscene(iLocal_58, "Father_of_the_bride", 0, 0, 0);
				cutscene::start_cutscene(4);
				iLocal_131++;
			}
		}
		break;

	case 3:
		if (cutscene::can_set_exit_state_for_camera(0)) {
			if (!entity::is_entity_dead(iLocal_132, 0)) {
				vehicle::set_vehicle_on_ground_properly(iLocal_132, 1084227584);
				vehicle::set_vehicle_doors_shut(iLocal_132, 1);
				ui::display_hud(1);
				ui::display_radar(1);
				cam::set_gameplay_cam_relative_heading(0f);
				cam::set_gameplay_cam_relative_pitch(-7f, 1065353216);
			}
			iLocal_131++;
		}
		break;

	case 4:
		ped::delete_ped(&iLocal_55);
		ped::delete_ped(&iLocal_57);
		ped::delete_ped(&iLocal_56);
		ped::delete_ped(&iLocal_58);
		func_52(0, 1, 1, 0);
		audio::set_frontend_radio_active(1);
		func_26();
		break;
	}
}

// Position - 0x1095
void func_26() {
	while (!func_50()) {
		system::wait(0);
	}
	func_30(-1, 0);
	func_27();
	func_177();
}

// Position - 0x10BB
void func_27() { func_28(); }

// Position - 0x10C8
int func_28() {
	if (func_29(0)) {
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

// Position - 0x1113
bool func_29(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x113E
void func_30(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		iParam0 = func_48();
	}
	if (iParam0 == -1) {
		return;
	}
	if (iParam1 <= func_47(iParam0)) {
		func_46(iParam0, iParam1);
		if (!func_45(51)) {
			func_41("RE_REWARD", 1, 0, 4000, 10000, func_44(), 0, 138, 0);
			func_40(51);
		}
		if (func_39(iParam0)) {
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_38(iParam0, iParam1) != 322) {
			func_32(func_38(iParam0, iParam1), vLocal_45.x, vLocal_45.y);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0) {
			if (Global_101689 == 1 || Global_101689 == 5 || Global_101689 == 11 || Global_101689 == 25) {
				func_31(2);
			}
			else if (Global_101689 == 26 || Global_101689 == 8 || Global_101689 == 17) {
				func_31(7);
			}
			else {
				func_31(1);
			}
		}
	}
}

// Position - 0x1241
void func_31(int iParam0) { Global_101686 = iParam0; }

// Position - 0x124F
void func_32(int iParam0, var uParam1, var uParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_36(891 + iParam0, 1, -1, 1);
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
		func_33();
	}
}

// Position - 0x1337
void func_33() {
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
		func_35(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_34() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_28();
				}
			}
		}
	}
}

// Position - 0x17F8
int func_34() { return Global_25190; }

// Position - 0x1803
int func_35(int iParam0, int iParam1) {
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

// Position - 0x1854
int func_36(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_37();
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

// Position - 0x1BE2
var func_37() { return Global_1312735; }

// Position - 0x1BEE
int func_38(int iParam0, int iParam1) {
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

// Position - 0x1F62
bool func_39(int iParam0) {
	switch (iParam0) {
	case 29:
	case 30:
	case 2:
	case 18: return false;
	}
	return true;
}

// Position - 0x1F91
void func_40(int iParam0) {
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

// Position - 0x1FD3
void func_41(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_42(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x1FF4
void func_42(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
		func_43();
	}
}

// Position - 0x21C7
void func_43() {
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

// Position - 0x22E7
int func_44() {
	func_12();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x232D
int func_45(int iParam0) {
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

// Position - 0x2370
void func_46(int iParam0, int iParam1) { gameplay::set_bit(&Global_101700.f_23954.f_8[iParam0], iParam1); }

// Position - 0x238B
int func_47(int iParam0) {
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

// Position - 0x243C
int func_48() {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, script::get_this_script_name(), 64);
	iVar16 = func_49(Var0);
	return iVar16;
}

// Position - 0x2459
int func_49(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5,
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

// Position - 0x2633
int func_50() { return 1; }

// Position - 0x263C
bool func_51() {
	bool bVar0;

	bVar0 = cutscene::has_cutscene_loaded();
	if (!Global_69701) {
		if (!bVar0) {
			Global_69701 = 1;
		}
	}
	return bVar0;
}

// Position - 0x265F
void func_52(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_59(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_8()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_58(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_59(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_58(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_56(player::player_id()) &&
				!func_54(player::player_id(), 0) && !func_53()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_56(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0x2778
bool func_53() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x2795
bool func_54(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_55(-1, 0) == 8;
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

// Position - 0x27E0
int func_55(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_37();
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

// Position - 0x2821
int func_56(int iParam0) {
	if (func_54(iParam0, 0)) {
		return 1;
	}
	if (func_57()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x2863
bool func_57() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x2874
int func_58(int iParam0, int iParam1, var uParam2, int iParam3) {
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

// Position - 0x28A7
void func_59(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}

// Position - 0x28CA
bool func_60(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (gameplay::is_minigame_in_progress()) {
		return false;
	}
	if (iParam0) {
		if (entity::is_entity_dead(player::player_ped_id(), 0)) {
			return false;
		}
	}
	iVar0 = 0;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			return false;
		}
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (iParam0) {
			if (entity::is_entity_dead(iVar0, 0)) {
				return false;
			}
		}
		if (iParam2) {
			if (!entity::is_entity_dead(iVar0, 0)) {
				if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != player::player_ped_id()) {
					return false;
				}
			}
		}
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (entity::get_entity_upright_value(iVar0) < 0.95f || entity::get_entity_upright_value(iVar0) > 1.011f) {
				return false;
			}
		}
	}
	else if (iParam1) {
		return false;
	}
	if (!player::is_player_ready_for_cutscene(player::player_id())) {
		return false;
	}
	if (!player::can_player_start_mission(player::player_id())) {
		return false;
	}
	return true;
}

// Position - 0x29AF
void func_61() {
	if (!entity::is_entity_dead(iLocal_59, 0) && !entity::is_entity_dead(iLocal_55, 0)) {
		if (!iLocal_117) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_59, 0) &&
				ped::is_ped_in_vehicle(iLocal_55, iLocal_59, 0)) {
				iLocal_117 = 1;
				if (ui::does_blip_exist(iLocal_319)) {
					ui::remove_blip(&iLocal_319);
				}
				if (iLocal_122 && !bLocal_118) {
					if (!ui::does_blip_exist(iLocal_320)) {
						iLocal_320 = func_23(vLocal_67, 1);
					}
				}
				if (!func_65()) {
				}
			}
		}
		if (!iLocal_117 && !iLocal_119) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_59, 0)) {
				if (!ped::is_ped_in_vehicle(iLocal_55, iLocal_59, 0)) {
					if (!func_65()) {
					}
					if (ui::does_blip_exist(iLocal_319)) {
						ui::remove_blip(&iLocal_319);
					}
					if (!ui::does_blip_exist(iLocal_319)) {
						iLocal_319 = func_64(iLocal_55, 0, 145);
						ui::set_blip_as_friendly(iLocal_319, 1);
					}
					iLocal_117 = 0;
					iLocal_119 = 1;
				}
			}
		}
		if (iLocal_117) {
			if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_59, 0)) {
				if (!func_65()) {
				}
				if (!ui::does_blip_exist(iLocal_319)) {
					iLocal_319 = func_62(iLocal_59, 0, 0);
					ui::set_blip_as_friendly(iLocal_319, 1);
				}
				if (ui::does_blip_exist(iLocal_320)) {
					ui::remove_blip(&iLocal_320);
				}
				iLocal_117 = 0;
			}
			if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_59, 0) &&
				!ped::is_ped_in_vehicle(iLocal_55, iLocal_59, 0)) {
				if (!func_65()) {
				}
				if (!ui::does_blip_exist(iLocal_319)) {
					iLocal_319 = func_62(iLocal_59, 0, 0);
					ui::set_blip_as_friendly(iLocal_319, 1);
				}
				if (ui::does_blip_exist(iLocal_320)) {
					ui::remove_blip(&iLocal_320);
				}
				iLocal_117 = 0;
			}
		}
	}
}

// Position - 0x2B3E
int func_62(int iParam0, int iParam1, int iParam2) { return func_63(iParam0, !iParam1, iParam2); }

// Position - 0x2B51
int func_63(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_24(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_24(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_24(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x2BF5
int func_64(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = func_63(iParam0, !iParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x2C47
bool func_65() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0x2C69
void func_66() {
	if (entity::does_entity_exist(iLocal_55)) {
		if (!ped::is_ped_injured(iLocal_55)) {
			if (entity::is_entity_at_entity(iLocal_55, player::player_ped_id(), 4f, 4f, 4f, 0, 1, 0)) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
						!ped::is_ped_in_any_vehicle(iLocal_55, 0) ||
					ped::is_ped_in_any_taxi(player::player_ped_id())) {
					if (ui::does_blip_exist(iLocal_321)) {
						ui::remove_blip(&iLocal_321);
						if (!ui::does_blip_exist(iLocal_320)) {
							iLocal_320 = func_23(vLocal_67, 1);
						}
					}
				}
				else if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
						 ped::is_ped_in_any_vehicle(iLocal_55, 0)) {
					if (ui::does_blip_exist(iLocal_321)) {
						ui::remove_blip(&iLocal_321);
						if (!ui::does_blip_exist(iLocal_320)) {
							iLocal_320 = func_23(vLocal_67, 1);
						}
					}
				}
				else if (ui::does_blip_exist(iLocal_320)) {
					ui::remove_blip(&iLocal_320);
					if (!ui::does_blip_exist(iLocal_321)) {
						iLocal_321 = func_64(iLocal_55, 0, 145);
					}
				}
				if (ped::is_ped_in_any_boat(player::player_ped_id())) {
				}
			}
			else if (ui::does_blip_exist(iLocal_320)) {
				ui::remove_blip(&iLocal_320);
				if (!ui::does_blip_exist(iLocal_321)) {
					iLocal_321 = func_64(iLocal_55, 0, 145);
				}
			}
			if (!ped::is_ped_in_group(iLocal_55)) {
				if (!entity::is_entity_at_entity(player::player_ped_id(), iLocal_55, 10f, 10f, 10f, 0, 1, 0)) {
					ai::clear_ped_tasks(iLocal_55);
					ped::set_ped_as_group_member(iLocal_55, func_67());
					ped::set_ped_never_leaves_group(iLocal_55, 1);
					ped::set_ped_group_member_passenger_index(iLocal_55, 0);
				}
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					ai::clear_ped_tasks(iLocal_55);
					ped::set_ped_as_group_member(iLocal_55, func_67());
					ped::set_ped_never_leaves_group(iLocal_55, 1);
					ped::set_ped_group_member_passenger_index(iLocal_55, 0);
				}
			}
		}
	}
}

// Position - 0x2DFD
var func_67() { return player::get_player_group(player::get_player_index()); }

// Position - 0x2E0D
void func_68() {
	if (!ped::is_ped_injured(iLocal_55)) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			if (!func_71()) {
				if (ped::is_ped_in_group(iLocal_55)) {
					ped::remove_ped_from_group(iLocal_55);
				}
				if (ai::get_script_task_status(iLocal_55, 1227113341) != 1 &&
					ai::get_script_task_status(iLocal_55, 1227113341) != 0) {
					ai::task_go_to_entity(iLocal_55, player::player_ped_id(), -1, 6f, 2f, 1073741824, 0);
				}
				if (ped::is_ped_in_any_vehicle(iLocal_55, 0)) {
					ai::task_leave_any_vehicle(iLocal_55, 0, 0);
				}
				if (!iLocal_125) {
					if (!func_65()) {
						iLocal_125 = 1;
						if (func_70()) {
							func_69(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						}
						else {
							func_69(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
						}
					}
				}
			}
			else {
				iLocal_125 = 0;
				if (ai::get_script_task_status(iLocal_55, 1227113341) == 1 ||
					ai::get_script_task_status(iLocal_55, 1227113341) == 0 ||
					ai::get_script_task_status(iLocal_55, 242628503) == 1 ||
					ai::get_script_task_status(iLocal_55, 242628503) == 0) {
					ai::clear_ped_tasks(iLocal_55);
					if (!ped::is_ped_in_group(iLocal_55)) {
						ped::set_ped_as_group_member(iLocal_55, func_67());
						ped::set_ped_never_leaves_group(iLocal_55, 1);
						ped::set_ped_group_member_passenger_index(iLocal_55, 0);
					}
				}
			}
		}
		else if (!ped::is_ped_in_group(iLocal_55) && !ped::is_ped_in_any_vehicle(iLocal_55, 0) &&
				 ai::get_script_task_status(iLocal_55, 242628503) != 1 &&
				 ai::get_script_task_status(iLocal_55, 242628503) != 0) {
			ped::set_ped_as_group_member(iLocal_55, func_67());
			ped::set_ped_never_leaves_group(iLocal_55, 1);
			ped::set_ped_group_member_passenger_index(iLocal_55, 0);
		}
	}
}

// Position - 0x2F9B
int func_69(var *uParam0, char *sParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6) {
	func_20(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_5(sParam2, iParam4, 0);
}

// Position - 0x2FEF
bool func_70() {
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		if (vehicle::is_vehicle_driveable(ped::get_vehicle_ped_is_using(player::player_ped_id()), 1)) {
			if (vehicle::is_this_model_a_bicycle(
					entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 1))) ||
				vehicle::is_this_model_a_bike(
					entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 1))) ||
				vehicle::is_this_model_a_quadbike(
					entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 1)))) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x305A
int func_71() {
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (vehicle::is_vehicle_driveable(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0)) {
			if (!ped::is_ped_in_any_boat(player::player_ped_id()) &&
				!ped::is_ped_in_any_heli(player::player_ped_id()) &&
				!ped::is_ped_in_any_plane(player::player_ped_id()) &&
				!ped::is_ped_in_any_sub(player::player_ped_id()) &&
				!ped::is_ped_in_any_train(player::player_ped_id()) &&
				!ped::is_ped_in_model(player::player_ped_id(), joaat("rhino"))) {
				if (vehicle::get_vehicle_max_number_of_passengers(
						ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)) >= 1) {
					return 1;
				}
			}
		}
	}
	else if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		if (vehicle::is_vehicle_driveable(ped::set_exclusive_phone_relationships(player::player_ped_id()), 0)) {
			if (!vehicle::is_this_model_a_boat(
					entity::get_entity_model(ped::set_exclusive_phone_relationships(player::player_ped_id()))) &&
				!vehicle::is_this_model_a_heli(
					entity::get_entity_model(ped::set_exclusive_phone_relationships(player::player_ped_id()))) &&
				!vehicle::is_this_model_a_plane(
					entity::get_entity_model(ped::set_exclusive_phone_relationships(player::player_ped_id()))) &&
				!vehicle::is_this_model_a_train(
					entity::get_entity_model(ped::set_exclusive_phone_relationships(player::player_ped_id()))) &&
				entity::get_entity_model(ped::set_exclusive_phone_relationships(player::player_ped_id())) !=
					joaat("rhino")) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x317C
void func_72(int iParam0, int iParam1) {
	bool bVar0;

	if (!ped::is_ped_injured(iParam0)) {
		bVar0 = false;
		if (iParam1) {
			if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id()) &&
				ped::is_ped_sitting_in_any_vehicle(iParam0)) {
				if (ped::get_vehicle_ped_is_in(player::player_ped_id(), 0) == ped::get_vehicle_ped_is_in(iParam0, 0)) {
					bVar0 = true;
				}
			}
		}
		else {
			bVar0 = false;
		}
		if (!ped::is_ped_headtracking_entity(iParam0, player::player_ped_id())) {
			if (!bVar0) {
				ai::task_look_at_entity(iParam0, player::player_ped_id(), -1, 2049, 2);
			}
		}
		else if (bVar0) {
			if (!audio::is_ped_in_current_conversation(iParam0)) {
				ai::task_clear_look_at(iParam0);
			}
		}
	}
}

// Position - 0x3203
void func_73() {
	if (entity::does_entity_exist(iLocal_55)) {
		if (!entity::is_entity_dead(iLocal_55, 0) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (func_87("stagd_chape_1")) {
				if (!ui::does_blip_exist(iLocal_320)) {
					iLocal_320 = func_23(vLocal_67, 1);
				}
				iLocal_122 = 1;
			}
			if (func_87("stagd_chape_3")) {
				ai::task_clear_look_at(player::player_ped_id());
				if (!ped::is_ped_injured(iLocal_55)) {
					if (ped::is_ped_in_any_vehicle(iLocal_55, 0)) {
						ai::open_sequence_task(&iLocal_113);
						ai::task_clear_look_at(0);
						ai::task_use_mobile_phone_timed(0, 30600);
						ai::close_sequence_task(iLocal_113);
						ai::task_perform_sequence(iLocal_55, iLocal_113);
						ai::clear_sequence_task(&iLocal_113);
					}
				}
			}
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_55, 13.5f, 13.5f, 13.5f, 0, 1, 0) &&
				ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (ped::is_ped_in_vehicle(iLocal_55, ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0)) {
					if (iLocal_49 == 0) {
						if (system::timerb() > 5000) {
							if (iLocal_130 == 0) {
								if (!func_65()) {
									func_86();
									if (func_4(&uLocal_136, "stagdau", sLocal_302, 4, 0, 0, 0)) {
										iLocal_310 = 1;
									}
									iLocal_121 = 1;
									iLocal_130++;
									system::settimerb(0);
								}
							}
						}
						if (system::timerb() > 5000) {
							if (iLocal_130 == 1) {
								if (!func_65()) {
									ui::display_hud(1);
									ui::display_radar(1);
									iLocal_130++;
									system::settimerb(0);
								}
							}
						}
						if (system::timerb() > 2500) {
							if (iLocal_130 == 2) {
								if (!func_65()) {
									func_86();
									if (func_11() == 0) {
										func_4(&uLocal_136, "stagdau", "stagd_tailM", 4, 0, 0, 0);
									}
									if (func_11() == 1) {
										func_4(&uLocal_136, "stagdau", "stagd_tailF", 4, 0, 0, 0);
									}
									if (func_11() == 2) {
										func_4(&uLocal_136, "stagdau", "stagd_tailT", 4, 0, 0, 0);
									}
									iLocal_130++;
									system::settimerb(0);
								}
							}
						}
					}
					if (!iLocal_124) {
						if (iLocal_49 == 3) {
							if (!func_65()) {
								if (iLocal_130 == 0) {
									func_4(&uLocal_136, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_130++;
								}
							}
						}
						if (iLocal_49 == 3) {
							if (system::timerb() > 5000) {
								if (iLocal_130 == 0) {
									if (!func_65()) {
										iLocal_130++;
									}
								}
							}
						}
						if (!entity::is_entity_at_coord(player::player_ped_id(), vLocal_87, 150f, 150f, 150f, 0, 1,
														0)) {
							if (iLocal_303 == 0) {
								if (iLocal_307 == func_74(func_75()) + 11) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_303 = 1;
									}
								}
							}
							if (iLocal_303 < 2) {
								if (iLocal_307 == func_74(func_75()) + 10) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_303 = 2;
									}
								}
							}
							if (iLocal_303 < 3) {
								if (iLocal_307 == func_74(func_75()) + 9) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_303 = 3;
									}
								}
							}
							if (iLocal_303 < 4) {
								if (iLocal_307 == func_74(func_75()) + 8) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_303 = 4;
									}
								}
							}
							if (iLocal_303 < 5) {
								if (iLocal_307 == func_74(func_75()) + 7) {
									if (!func_65()) {
										iLocal_303 = 5;
									}
								}
							}
							if (iLocal_303 < 6) {
								if (iLocal_307 == func_74(func_75()) + 6) {
									if (!func_65()) {
										iLocal_303 = 6;
									}
								}
							}
							if (iLocal_303 < 7) {
								if (iLocal_307 == func_74(func_75()) + 5) {
									if (!func_65()) {
										iLocal_303 = 7;
									}
								}
							}
							if (iLocal_303 < 8) {
								if (iLocal_307 == func_74(func_75()) + 4) {
									if (!func_65()) {
										iLocal_303 = 8;
									}
								}
							}
							if (iLocal_303 < 9) {
								if (iLocal_307 == func_74(func_75()) + 3) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 9;
									}
								}
							}
							if (iLocal_303 < 10) {
								if (iLocal_307 == func_74(func_75()) + 2) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 10;
									}
								}
							}
							if (iLocal_303 < 11) {
								if (iLocal_307 == func_74(func_75()) + 1) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 11;
									}
								}
							}
						}
						else {
							if (iLocal_303 < 6) {
								if (iLocal_307 == func_74(func_75()) + 6) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 7) {
								if (iLocal_307 == func_74(func_75()) + 5) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 8) {
								if (iLocal_307 == func_74(func_75()) + 4) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 9) {
								if (iLocal_307 == func_74(func_75()) + 3) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 10) {
								if (iLocal_307 == func_74(func_75()) + 2) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 11) {
								if (iLocal_307 == func_74(func_75()) + 1) {
									if (!func_65()) {
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x37A5
int func_74(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x37B8
int func_75() {
	int *iVar0;

	func_85(&iVar0, time::get_clock_seconds());
	func_84(&iVar0, time::get_clock_minutes());
	func_83(&iVar0, time::get_clock_hours());
	func_78(&iVar0, time::get_clock_day_of_month());
	func_77(&iVar0, time::get_clock_month());
	func_76(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x37FE
void func_76(int *iParam0, int iParam1) {
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

// Position - 0x3884
void func_77(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x38B7
void func_78(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_82(*uParam0);
	iVar1 = func_80(*uParam0);
	if (iParam1 < 1 || iParam1 > func_79(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x3908
int func_79(int iParam0, int iParam1) {
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

// Position - 0x39AA
int func_80(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_81(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x39CF
int func_81(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x39E6
int func_82(int iParam0) { return iParam0 & 15; }

// Position - 0x39F3
void func_83(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x3A2D
void func_84(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x3A68
void func_85(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x3AA4
void func_86() {
	Global_14611 = 0;
	func_19();
}

// Position - 0x3AB4
bool func_87(char *sParam0) {
	var uVar0;

	if (func_65()) {
		MemCopy(&uVar0, {func_88()}, 4);
		if (gameplay::are_strings_equal(sParam0, &uVar0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x3ADC
struct<6> func_88() {
	struct<6> Var0;
	int iVar6;

	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4) {
		iVar6 = audio::get_current_scripted_conversation_line();
		iVar6 += Global_16755;
		if (iVar6 > -1) {
			return Global_14613[iVar6 /*6*/];
		}
		else {
			return Var0;
		}
	}
	return Var0;
}

//Position - 0x3B22
void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (entity::does_entity_exist(iLocal_55)) {
		if (!entity::is_entity_dead(iLocal_55, 0)) {
			if (!ped::is_ped_injured(iLocal_55)) {
				if (!iLocal_129 && bLocal_118) {
					controls::disable_control_action(0, 75, 1);
					controls::disable_control_action(0, 80, 1);
					iVar0 = cam::_0x19CAFA3C87F7C2FF();
					if (iVar0 != 0) {
						iVar1 = cam::_0xEE778F8C7E1142E2(iVar0);
						if (iVar1 != 4) {
							controls::disable_control_action(0, 79, 1);
							controls::disable_control_action(0, 286, 1);
							controls::disable_control_action(0, 287, 1);
							controls::disable_control_action(0, 26, 1);
							controls::disable_control_action(0, 273, 1);
							controls::disable_control_action(0, 4, 1);
							controls::disable_control_action(0, 270, 1);
							controls::disable_control_action(0, 5, 1);
							controls::disable_control_action(0, 1, 1);
							controls::disable_control_action(0, 271, 1);
							controls::disable_control_action(0, 6, 1);
							controls::disable_control_action(0, 2, 1);
							controls::disable_control_action(0, 272, 1);
							controls::disable_control_action(0, 3, 1);
						}
					}
					if (entity::is_entity_in_angled_area(iLocal_55, -2002.008f, 455.58f, 101.0381f, -2009.761f,
														 453.2027f, 105.9135f, 12.4375f, 0, 1, 0) ||
						system::timera() > 5000) {
						iLocal_129 = 1;
						system::settimera(0);
						func_52(1, 1, 1, 0);
						ui::clear_help(1);
						ui::display_hud(0);
						ui::display_radar(0);
						player::set_player_control(player::player_id(), 0, 0);
						vehicle::request_vehicle_asset(joaat("superd"), 3);
						while (!vehicle::has_vehicle_asset_loaded(joaat("superd"))) {
							system::wait(0);
						}
						iLocal_134 =
							cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.4961f, 103.5524f,
														-6.509435f, -0.037031f, -95.98762f, 29.00143f, 0, 2);
						iLocal_135 =
							cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -2014.334f, 456.418f, 103.3152f,
														-6.198685f, -0.037031f, -100.5736f, 29.00143f, 0, 2);
						cam::shake_cam(iLocal_134, "HAND_SHAKE", 0.25f);
						cam::shake_cam(iLocal_135, "HAND_SHAKE", 0.25f);
						cam::set_cam_active(iLocal_134, 1);
						cam::render_script_cams(1, 0, 3000, 1, 0, 0);
						system::wait(1000);
						cam::set_cam_active_with_interp(iLocal_135, iLocal_134, 4000, 1, 1);
						cam::render_script_cams(1, 0, 3000, 1, 0, 0);
						gameplay::clear_area_of_vehicles(vLocal_99, 10f, 0, 0, 0, 0, 0);
						if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
							vehicle::request_vehicle_high_detail_model(player::get_players_last_vehicle());
							if (entity::is_entity_at_coord(player::get_players_last_vehicle(), vLocal_99, 8f, 8f, 8f, 0,
														   1, 0)) {
								iLocal_133 = player::get_players_last_vehicle();
								entity::set_entity_as_mission_entity(iLocal_133, 1, 0);
								vehicle::delete_vehicle(&iLocal_133);
							}
						}
						if (!entity::is_entity_dead(iLocal_59, 0)) {
							vehicle::set_vehicle_doors_locked(iLocal_59, 1);
							if (!ui::does_blip_exist(iLocal_319)) {
								iLocal_319 = func_62(iLocal_59, 0, 0);
								ui::set_blip_as_friendly(iLocal_319, 1);
							}
						}
						iLocal_117 = 0;
					}
				}
				if (iLocal_129 && cam::does_cam_exist(iLocal_134)) {
					if (system::timera() > 5700 && !iLocal_317) {
						if (ped::is_ped_on_foot(player::player_ped_id()) && cam::get_follow_ped_cam_view_mode() == 4 ||
							ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
								cam::get_follow_vehicle_cam_view_mode() == 4) {
							graphics::_start_screen_effect("CamPushInNeutral", 0, 0);
							audio::play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_317 = 1;
						}
					}
					if (system::timera() > 6000) {
						if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							ai::task_leave_any_vehicle(player::player_ped_id(), 0, 0);
						}
						player::set_player_control(player::player_id(), 1, 0);
						ui::display_hud(1);
						ui::display_radar(1);
						func_52(0, 1, 1, 0);
						cam::set_cam_active(iLocal_134, 0);
						cam::render_script_cams(0, 0, 3000, 1, 0, 0);
						cam::destroy_cam(iLocal_134, 0);
						cam::stop_gameplay_hint(0);
					}
				}
				if (entity::is_entity_at_coord(player::player_ped_id(), -2201.417f, 4296.06f, 47.5076f, 100f, 100f,
											   100f, 0, 1, 0)) {
					gameplay::clear_area_of_vehicles(vLocal_87, 5f, 0, 0, 0, 0, 0);
				}
			}
			if (!bLocal_123) {
				if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_103, 100f, 100f, 100f, 0, 1, 0)) {
					streaming::request_model(joaat("ig_bestmen"));
					if (streaming::has_model_loaded(joaat("ig_bestmen"))) {
						iLocal_57 =
							ped::create_ped(4, joaat("ig_bestmen"), -2202.747f, 4299.008f, 47.4293f, 73.0028f, 1, 1);
						func_90(&uLocal_136, 4, iLocal_57, "BESTMAN", 0, 1);
						ped::set_ped_component_variation(iLocal_57, 0, 0, 0, 0);
						ped::set_ped_relationship_group_hash(iLocal_57, 1862763509);
						ped::set_blocking_of_non_temporary_events(iLocal_57, 1);
						ped::set_ped_config_flag(iLocal_57, 185, 1);
						ai::open_sequence_task(&iLocal_113);
						ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), -1);
						ai::task_look_at_entity(0, player::player_ped_id(), -1, 2048, 2);
						ai::close_sequence_task(iLocal_113);
						ai::task_perform_sequence(iLocal_57, iLocal_113);
						ai::clear_sequence_task(&iLocal_113);
						bLocal_123 = true;
					}
				}
			}
			if (!iLocal_124) {
				if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_77, 20f, 20f, 20f, 0, 1, 0)) {
					func_21();
					if (!func_65()) {
						func_4(&uLocal_136, "stagdau", "stagd_spot", 4, 0, 0, 0);
						iLocal_124 = 1;
					}
				}
			}
			if (entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_70, vLocal_73, fLocal_76, 0, 1, 0) &&
					entity::is_entity_in_angled_area(iLocal_55, vLocal_70, vLocal_73, fLocal_76, 0, 1, 0) ||
				entity::is_entity_at_coord(iLocal_55, vLocal_67, 0f, 0f, 2f, 1, 1, 0) && func_60(1, 0, 1) ||
				bLocal_118) {
				switch (iLocal_49) {
				case 0:
					ui::remove_blip(&iLocal_320);
					if (!bLocal_118) {
						vLocal_67 = {vLocal_103};
						if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
								vehicle::_set_vehicle_halt(player::get_players_last_vehicle(), 10.5f, 4, 0);
							}
						}
						if (!entity::is_entity_dead(iLocal_59, 0)) {
							iVar2 = cam::_0x19CAFA3C87F7C2FF();
							if (iVar2 != 0) {
								iVar3 = cam::_0xEE778F8C7E1142E2(iVar2);
								if (iVar3 == 4) {
									ai::task_look_at_entity(player::player_ped_id(), iLocal_55, 5000, 0, 2);
								}
								else {
									ai::task_look_at_entity(player::player_ped_id(), iLocal_59, 5000, 2052, 4);
									cam::set_gameplay_vehicle_hint(iLocal_59, 0f, 0f, 0f, 1, -1, 3000, 2000);
								}
							}
						}
						func_21();
						if (!func_65()) {
							func_4(&uLocal_136, "stagdau", "stagd_wait1", 4, 0, 0, 0);
							if (!ped::is_ped_injured(iLocal_55)) {
								ai::clear_ped_tasks(iLocal_55);
								ai::open_sequence_task(&iLocal_113);
								ai::task_follow_nav_mesh_to_coord(0, -2013.094f, 460.3515f, 101.8024f, 2f, 20000,
																  1048576000, 0, 1193033728);
								ai::task_follow_nav_mesh_to_coord(0, vLocal_99, 3f, 20000, 1048576000, 0, 1193033728);
								ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), -1);
								ai::task_look_at_entity(0, player::player_ped_id(), -1, 2048, 2);
								ai::close_sequence_task(iLocal_113);
								ai::task_perform_sequence(iLocal_55, iLocal_113);
								ai::clear_sequence_task(&iLocal_113);
								ped::set_ped_keep_task(iLocal_55, 1);
							}
							bLocal_118 = true;
							system::settimera(0);
						}
					}
					if (!ped::is_ped_injured(iLocal_55) && !entity::is_entity_dead(iLocal_59, 0)) {
						if (bLocal_118 && entity::is_entity_at_coord(iLocal_55, vLocal_99, 1f, 1f, 1f, 0, 1, 0) &&
							!ped::is_ped_in_any_vehicle(iLocal_55, 0)) {
							if (ped::is_ped_in_group(iLocal_55)) {
								if (!func_65()) {
									if (func_11() == 2) {
										func_4(&uLocal_136, "stagdau", "stagd_reply", 4, 0, 0, 0);
									}
								}
								ped::remove_ped_from_group(iLocal_55);
							}
							if (entity::is_entity_occluded(iLocal_55)) {
								if (!ped::is_ped_injured(iLocal_55)) {
									entity::set_entity_visible(iLocal_55, 0, 0);
									entity::set_entity_collision(iLocal_55, 0, 0);
									entity::set_entity_invincible(iLocal_55, 1);
									entity::freeze_entity_position(iLocal_55, 1);
								}
								if (system::timera() > 15000) {
									if (!ped::is_ped_injured(iLocal_55)) {
										ped::set_ped_component_variation(iLocal_55, 2, 1, 0, 0);
										ped::set_ped_component_variation(iLocal_55, 0, 0, 1, 0);
										ped::set_ped_component_variation(iLocal_55, 3, 1, 0, 0);
										ped::set_ped_component_variation(iLocal_55, 4, 1, 0, 0);
										ped::set_ped_component_variation(iLocal_55, 11, 0, 0, 0);
										entity::set_entity_visible(iLocal_55, 1, 0);
										entity::set_entity_collision(iLocal_55, 1, 0);
										entity::set_entity_invincible(iLocal_55, 0);
										entity::freeze_entity_position(iLocal_55, 0);
										entity::set_entity_coords(iLocal_55, vLocal_99, 1, 0, 0, 1);
										entity::set_entity_heading(iLocal_55, 106.5078f);
										ped::set_ped_group_member_passenger_index(iLocal_55, 0);
										ped::set_ped_combat_attributes(iLocal_55, 17, 1);
										ped::set_ped_stay_in_vehicle_when_jacked(iLocal_55, 1);
										ai::task_look_at_entity(player::player_ped_id(), iLocal_55, -1, 2048, 4);
										if (!entity::is_entity_dead(iLocal_59, 0)) {
											ai::open_sequence_task(&iLocal_113);
											ai::task_look_at_entity(0, player::player_ped_id(), -1, 2052, 4);
											ai::task_enter_vehicle(0, iLocal_59, -1, 0, 2f, 1, 0);
											ai::close_sequence_task(iLocal_113);
											ai::task_perform_sequence(iLocal_55, iLocal_113);
											ai::clear_sequence_task(&iLocal_113);
										}
									}
									system::settimera(0);
									vLocal_67 = {vLocal_103};
									vLocal_70 = {vLocal_106};
									vLocal_73 = {vLocal_109};
									fLocal_76 = fLocal_112;
									iLocal_49 = 1;
								}
							}
						}
					}
					break;

				case 1:
					if (!ped::is_ped_injured(iLocal_55) && !entity::is_entity_dead(iLocal_59, 0)) {
						if (entity::is_entity_at_entity(iLocal_55, iLocal_59, 5f, 5f, 5f, 0, 1, 0) && !iLocal_128) {
							func_4(&uLocal_136, "stagdau", "stagd_suit", 4, 0, 0, 0);
							iLocal_128 = 1;
						}
						if (ped::is_ped_in_any_vehicle(iLocal_55, 0)) {
							if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_59, 0)) {
								if (func_4(&uLocal_136, "stagdau", "stagd_chape", 4, 0, 0, 0)) {
									iLocal_49 = 2;
									bLocal_118 = false;
									iLocal_130 = 0;
								}
							}
							else {
								if (iLocal_308 == 0) {
									iLocal_308 = gameplay::get_game_timer();
								}
								if (iLocal_308 != 0 && gameplay::get_game_timer() > iLocal_308 + 6000) {
									func_4(&uLocal_136, "stagdau", "stagd_getin", 4, 0, 0, 0);
									iLocal_308 = 0;
								}
								system::settimera(0);
							}
						}
					}
					break;

				case 2:
					if (!bLocal_118) {
						func_21();
						if (func_4(&uLocal_136, "stagdau", "stagd_hairc", 4, 0, 0, 0)) {
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
								if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
									iLocal_132 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
									vehicle::_set_vehicle_halt(player::get_players_last_vehicle(), 10.5f, 2, 0);
								}
							}
							if (!ped::is_ped_injured(iLocal_57) && !ped::is_ped_injured(iLocal_55)) {
								if (ped::is_ped_in_any_vehicle(iLocal_55, 0)) {
									iLocal_132 = ped::get_vehicle_ped_is_in(iLocal_55, 0);
									ai::open_sequence_task(&iLocal_113);
									ai::task_enter_vehicle(0, iLocal_132, -1, 2, 1f, 1, 0);
									ai::task_clear_look_at(0);
									ai::close_sequence_task(iLocal_113);
									ai::task_perform_sequence(iLocal_57, iLocal_113);
									ped::set_ped_config_flag(iLocal_57, 185, 0);
								}
								else {
									ai::task_go_to_entity(iLocal_57, iLocal_55, -1, 8f, 2f, 1073741824, 0);
								}
								if (!ui::does_blip_exist(iLocal_322)) {
									iLocal_322 = func_64(iLocal_57, 0, 145);
								}
								if (ui::does_blip_exist(iLocal_320)) {
									ui::remove_blip(&iLocal_320);
								}
							}
							system::settimera(0);
							iLocal_120 = 1;
							bLocal_118 = true;
						}
					}
					if (bLocal_118 && !ped::is_ped_injured(iLocal_55)) {
						if (ai::get_script_task_status(iLocal_55, 242628503) == 7 || system::timera() > 12000) {
							vLocal_67 = {vLocal_77};
							vLocal_70 = {vLocal_80};
							vLocal_73 = {vLocal_83};
							fLocal_76 = fLocal_86;
							streaming::request_model(joaat("ig_bride"));
							streaming::request_model(joaat("washington"));
							streaming::request_model(joaat("baller2"));
							streaming::request_model(joaat("primo"));
							if (streaming::has_model_loaded(joaat("ig_bride")) &&
								streaming::has_model_loaded(joaat("washington")) &&
								streaming::has_model_loaded(joaat("baller2")) &&
								streaming::has_model_loaded(joaat("primo"))) {
								iLocal_56 = ped::create_ped(5, joaat("ig_bride"), -330.36f, 6154.03f, 30.8f, 90f, 1, 1);
								ped::set_blocking_of_non_temporary_events(iLocal_56, 1);
								ai::open_sequence_task(&iLocal_113);
								ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), -1);
								ai::close_sequence_task(iLocal_113);
								ai::task_perform_sequence(iLocal_56, iLocal_113);
								ai::clear_sequence_task(&iLocal_113);
								iLocal_58 = ped::create_ped(4, joaat("ig_bestmen"), -333.3692f, 6157.644f, 30.489f,
															83.2763f, 1, 1);
								ped::set_blocking_of_non_temporary_events(iLocal_58, 1);
								ai::task_turn_ped_to_face_entity(iLocal_58, player::player_ped_id(), -1);
								ped::set_ped_component_variation(iLocal_58, 0, 1, 0, 0);
								uLocal_60[0] = vehicle::create_vehicle(joaat("washington"), -342.1295f, 6141.404f,
																	   30.4839f, 133.4604f, 1, 1);
								uLocal_60[1] = vehicle::create_vehicle(joaat("baller2"), -338.3777f, 6137.41f, 30.476f,
																	   135.6866f, 1, 1);
								uLocal_60[2] = vehicle::create_vehicle(joaat("primo"), -329.4687f, 6143.247f, 30.4893f,
																	   313.82f, 1, 1);
								uLocal_60[3] = vehicle::create_vehicle(joaat("washington"), -322.3235f, 6135.427f,
																	   30.4924f, 316.5898f, 1, 1);
								vehicle::set_vehicle_colours(uLocal_60[0], gameplay::get_random_int_in_range(0, 127),
															 0);
								vehicle::set_vehicle_colours(uLocal_60[1], gameplay::get_random_int_in_range(0, 127),
															 0);
								vehicle::set_vehicle_colours(uLocal_60[2], gameplay::get_random_int_in_range(0, 127),
															 0);
								vehicle::set_vehicle_colours(uLocal_60[3], gameplay::get_random_int_in_range(0, 127),
															 0);
								iLocal_49 = 3;
								bLocal_118 = false;
								iLocal_130 = 0;
							}
						}
					}
					break;

				case 3:
					if (!bLocal_118) {
						if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
								vehicle::_set_vehicle_halt(player::get_players_last_vehicle(), 10.5f, 2, 0);
								bLocal_118 = true;
								system::wait(3000);
								func_21();
								system::wait(0);
							}
						}
					}
					break;
				}
			}
		}
		else if (entity::is_entity_dead(iLocal_55, 0)) {
			func_177();
		}
	}
}

// Position - 0x4747
void func_90(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x47E2
void func_91() {
	if (iLocal_310 && iLocal_307 != func_74(func_75()) && !cam::does_cam_exist(iLocal_134)) {
		func_95(iLocal_307 * 1000 * 60 - func_74(func_75()) * 1000 * 60 + iLocal_306 * 1000 - func_98(func_75()) * 1000,
				"TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iLocal_306 == 0) {
		if (iLocal_307 == func_74(func_75()) + 1 &&
			(iLocal_306 == func_98(func_75()) - 55 || iLocal_306 == func_98(func_75()) - 56 ||
			 iLocal_306 == func_98(func_75()) - 57 || iLocal_306 == func_98(func_75()) - 58 ||
			 iLocal_306 == func_98(func_75()) - 59)) {
			func_94();
		}
	}
	if (iLocal_307 == func_74(func_75())) {
		func_94();
		func_92();
		if (!func_65()) {
			func_4(&uLocal_136, "stagdau", "stagd_failti", 4, 0, 0, 0);
			if (!ped::is_ped_injured(iLocal_55)) {
				ai::task_use_mobile_phone(iLocal_55, 1, 1);
			}
			if (!ped::is_ped_injured(iLocal_56)) {
				ai::task_smart_flee_ped(iLocal_56, player::player_ped_id(), 300f, -1, 0, 0);
			}
			if (!ped::is_ped_injured(iLocal_58)) {
				ai::task_smart_flee_ped(iLocal_58, player::player_ped_id(), 300f, -1, 0, 0);
			}
			system::wait(8500);
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
					vehicle::_set_vehicle_halt(player::get_players_last_vehicle(), 10.5f, 3, 0);
				}
			}
			system::wait(2000);
			if (!entity::is_entity_dead(iLocal_55, 0)) {
				ai::clear_ped_tasks(iLocal_55);
				ai::task_look_at_entity(player::player_ped_id(), iLocal_55, 5000, 2048, 2);
				ai::task_look_at_entity(iLocal_55, player::player_ped_id(), 5000, 2048, 2);
				ai::task_leave_any_vehicle(iLocal_55, 0, 0);
				ped::remove_ped_from_group(iLocal_55);
			}
			if (!entity::is_entity_dead(iLocal_57, 0)) {
				ai::task_look_at_entity(player::player_ped_id(), iLocal_55, 5000, 0, 2);
				ai::task_leave_any_vehicle(iLocal_57, 500, 0);
			}
			system::wait(1000);
			if (!entity::is_entity_dead(iLocal_59, 0)) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_59, 0)) {
					ai::task_leave_any_vehicle(player::player_ped_id(), 0, 0);
				}
			}
			if (!entity::is_entity_dead(iLocal_55, 0) &&
				!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
				ai::open_sequence_task(&iLocal_113);
				if (player::get_players_last_vehicle() == iLocal_59) {
					ai::task_enter_vehicle(0, iLocal_59, -1, -1, 1f, 8, 0);
					ai::task_vehicle_mission_ped_target(0, iLocal_59, player::player_ped_id(), 8, 15f, 786469, 10f, 10f,
														1);
				}
				else {
					ai::task_smart_flee_ped(0, player::player_ped_id(), 300f, -1, 0, 0);
				}
				ai::close_sequence_task(iLocal_113);
				ai::task_perform_sequence(iLocal_55, iLocal_113);
				ai::clear_sequence_task(&iLocal_113);
				ped::set_ped_keep_task(iLocal_55, 1);
				if (!entity::is_entity_dead(iLocal_57, 0)) {
					ai::open_sequence_task(&iLocal_113);
					if (player::get_players_last_vehicle() == iLocal_59) {
						ai::task_enter_vehicle(0, iLocal_59, -1, 0, 2f, 1, 0);
						ai::task_pause(0, 100000);
					}
					else {
						ai::task_smart_flee_ped(0, player::player_ped_id(), 300f, -1, 0, 0);
					}
					ai::close_sequence_task(iLocal_113);
					ai::task_perform_sequence(iLocal_57, iLocal_113);
					ai::clear_sequence_task(&iLocal_113);
					ped::set_ped_keep_task(iLocal_57, 1);
				}
			}
			player::set_player_control(player::player_id(), 1, 0);
			while (func_65()) {
				system::wait(0);
			}
			func_2();
		}
	}
}

// Position - 0x4B15
void func_92() {
	Global_14611 = 0;
	func_93();
}

// Position - 0x4B25
void func_93() {
	if (audio::is_scripted_conversation_ongoing()) {
		audio::restart_scripted_conversation();
		Global_16756 = 0;
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0x4B49
void func_94() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = time::get_clock_hours();
	iVar1 = time::get_clock_minutes();
	iVar2 = time::get_clock_seconds();
	if (iLocal_309 == 0) {
		if (iVar1 == 55 && iVar2 >= 30) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 1) {
		if (iVar1 == 56 && iVar2 >= 0) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 2) {
		if (iVar1 == 56 && iVar2 >= 30) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 3) {
		if (iVar1 == 57 && iVar2 >= 0) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 4) {
		if (iVar1 == 57 && iVar2 >= 30) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 5) {
		if (iVar1 == 58 && iVar2 >= 0) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 6) {
		if (iVar1 == 58 && iVar2 >= 15) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 7) {
		if (iVar1 == 58 && iVar2 >= 30) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 8) {
		if (iVar1 == 58 && iVar2 >= 45) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 9) {
		if (iVar1 == 59 && iVar2 >= 0) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 10) {
		if (iVar1 == 59 && iVar2 >= 15) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 11) {
		if (iVar1 == 59 && iVar2 >= 30) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 12) {
		if (iVar1 == 59 && iVar2 >= 45) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 13) {
		if (iVar1 >= 0 && iVar0 == iLocal_307) {
			audio::play_sound_frontend(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
}

// Position - 0x4E1E
void func_95(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14,
			 int iParam15, int iParam16) {
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9) {
		if (iVar0 == -1) {
			if (func_97(7, iVar1) == 0) {
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1) {
		Global_1354542.f_1 = 1;
		func_96(7, iVar0);
		Global_1354542.f_4282[iVar0] = iParam0;
		StringCopy(&Global_1354542.f_4282.f_11[iVar0 /*16*/], sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = iParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = iParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

// Position - 0x4F6C
void func_96(int iParam0, int iParam1) { gameplay::set_bit(&Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x4F85
int func_97(int iParam0, int iParam1) { return gameplay::is_bit_set(Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x4F9E
int func_98(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x4FB1
void func_99() {
	if (!ped::is_ped_injured(iLocal_55)) {
		if (!entity::is_entity_dead(iLocal_59, 0) && ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (ped::is_ped_in_vehicle(iLocal_55, iLocal_59, 0) &&
				entity::has_entity_collided_with_anything(iLocal_59)) {
				if (!func_65()) {
					if (func_100()) {
						func_4(&uLocal_136, "stagdau", "stagd_crash", 4, 0, 0, 0);
					}
					else {
						func_4(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);
					}
				}
			}
			else if (ped::is_ped_in_vehicle(iLocal_55, ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0) &&
					 entity::has_entity_collided_with_anything(
						 ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
				if (!func_65()) {
					func_4(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);
				}
			}
		}
	}
}

// Position - 0x506B
bool func_100() {
	if (gameplay::is_bit_set(gameplay::get_random_int_in_range(0, 65535), 0)) {
		return true;
	}
	return false;
}

// Position - 0x508C
void func_101() {
	if (!ped::is_ped_injured(iLocal_55)) {
		ped::set_ped_can_play_ambient_base_anims(iLocal_55, 0);
	}
	if (!ped::is_ped_injured(iLocal_57)) {
		ped::set_ped_can_play_ambient_base_anims(iLocal_57, 0);
	}
	if (entity::is_entity_at_entity(iLocal_55, player::player_ped_id(), 4f, 4f, 4f, 0, 1, 0) || iLocal_49 == 1 ||
		iLocal_126 || iLocal_127 || iLocal_125 || bLocal_118) {
		if (iLocal_49 >= 2 && iLocal_120 && iLocal_49 != 1 && !iLocal_126 && !iLocal_127 && !iLocal_125 &&
			!bLocal_118) {
			if (entity::is_entity_at_entity(iLocal_57, player::player_ped_id(), 4f, 4f, 4f, 0, 1, 0)) {
				if (func_103()) {
					func_102(0);
				}
			}
			else if (func_65() && !func_103()) {
				func_102(1);
			}
		}
		else if (func_103()) {
			func_102(0);
		}
	}
	else if (func_65() && !func_103()) {
		func_102(1);
	}
}

// Position - 0x518A
void func_102(int iParam0) { Global_16756 = iParam0; }

// Position - 0x5197
bool func_103() {
	if (Global_16756 == 1) {
		return true;
	}
	return false;
}

// Position - 0x51AE
void func_104() {
	if (time::get_clock_hours() > 2 && time::get_clock_hours() < 15 &&
		!player::is_player_wanted_level_greater(player::player_id(), 0)) {
	}
	else {
		if (!ped::is_ped_injured(iLocal_55)) {
			ai::clear_ped_tasks(iLocal_55);
			func_21();
			system::wait(0);
			func_4(&uLocal_136, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (entity::does_entity_exist(iLocal_66)) {
				entity::detach_entity(iLocal_66, 1, 1);
			}
		}
		while (func_65()) {
			system::wait(0);
		}
		func_2();
	}
}

// Position - 0x522C
void func_105() {
	if (!ped::is_ped_injured(player::player_ped_id()) && !ped::is_ped_injured(iLocal_55)) {
		if (!iLocal_115) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_55, 130f, 60f, 50f, 0, 1, 0) &&
					!entity::is_entity_occluded(iLocal_55) ||
				entity::is_entity_at_entity(player::player_ped_id(), iLocal_55, 10f, 10f, 10f, 0, 1, 0)) {
				if (!ui::does_blip_exist(iLocal_321)) {
					iLocal_321 = func_64(iLocal_55, 0, 145);
					ui::_0x75A16C3DA34F1245(iLocal_321, 0);
					ai::task_look_at_entity(iLocal_55, player::player_ped_id(), -1, 2052, 4);
				}
				if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_55, 10f, 10f, 10f, 0, 1, 0)) {
					if (ui::does_blip_exist(iLocal_321)) {
						ui::_0x75A16C3DA34F1245(iLocal_321, 1);
					}
					system::settimerb(0);
					func_92();
					while (func_65()) {
						system::wait(0);
					}
					if (!func_65()) {
						if (func_11() == 0) {
							func_4(&uLocal_136, "stagdau", "stagd_greetM", 4, 0, 0, 0);
						}
						if (func_11() == 1) {
							func_4(&uLocal_136, "stagdau", "stagd_greetF", 4, 0, 0, 0);
						}
						if (func_11() == 2) {
							func_4(&uLocal_136, "stagdau", "stagd_greetT", 4, 0, 0, 0);
						}
					}
					iLocal_115 = 1;
				}
			}
			if (!ped::is_ped_injured(player::player_ped_id()) && !ped::is_ped_injured(iLocal_55)) {
				if (!func_143() &&
					entity::is_entity_in_angled_area(player::player_ped_id(), -1131.777f, 2636.418f, 15.589f,
													 -1040.995f, 2717.077f, 31.715f, 60.75f, 0, 1, 0) &&
					ui::does_blip_exist(iLocal_321)) {
					if (!func_65()) {
						func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
						iLocal_65 = player::get_players_last_vehicle();
					}
					func_106(1);
				}
			}
		}
		else if (!iLocal_301) {
			if (!ped::is_ped_injured(iLocal_55)) {
				if (!entity::is_entity_at_entity(player::player_ped_id(), iLocal_55, 25f, 25f, 25f, 0, 1, 0)) {
					func_21();
					system::wait(0);
					func_4(&uLocal_136, "stagdau", "stagd_leave", 4, 0, 0, 0);
					iLocal_301 = 1;
				}
			}
		}
	}
}

// Position - 0x5454
int func_106(int iParam0) {
	if (func_110()) {
		Global_101690 = 1;
		Global_101687 = gameplay::get_game_timer();
		if (func_39(Global_101689)) {
			func_107(0);
		}
		ui::set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_39(Global_101689)) {
			ui::flash_minimap_display();
		}
		return 1;
	}
	return 0;
}

// Position - 0x54A7
void func_107(int iParam0) {
	switch (iParam0) {
	case 0:
		if (Global_101700.f_23954.f_2 < 3) {
			if (!ui::is_help_message_on_screen()) {
				func_108(func_109(iParam0), -1);
				Global_101700.f_23954.f_2++;
				gameplay::set_bit(&Global_101696, 0);
			}
		}
		break;

	case 1:
		if (!gameplay::is_bit_set(Global_101696, 1)) {
			if (!ui::is_help_message_on_screen()) {
				func_108(func_109(iParam0), -1);
				Global_101700.f_23954.f_3++;
				gameplay::set_bit(&Global_101696, 1);
			}
		}
		break;

	case 2:
		if (!gameplay::is_bit_set(Global_101696, 2)) {
			if (!ui::is_help_message_on_screen()) {
				func_108(func_109(iParam0), -1);
				Global_101700.f_23954.f_4++;
				gameplay::set_bit(&Global_101696, 2);
			}
		}
		break;
	}
}

// Position - 0x5588
void func_108(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x559F
char *func_109(int iParam0) {
	char *sVar0;

	sVar0 = "";
	switch (iParam0) {
	case 0: sVar0 = "AM_H_REFS"; break;

	case 1: sVar0 = "RE_FLASHBLIP"; break;

	case 2: sVar0 = "RE_HANDOVER"; break;
	}
	return sVar0;
}

// Position - 0x55E2
bool func_110() {
	switch (func_111(&Global_25249, 0, 5, 0, script::get_id_of_this_thread())) {
	case 1: return true;

	case 0: return true;
	}
	return false;
}

// Position - 0x5618
int func_111(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_115(0)) {
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
		if (!func_113(iParam2)) {
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
			func_112(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x574F
void func_112(int *iParam0, int iParam1) {
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

// Position - 0x579E
bool func_113(int iParam0) { return func_114(iParam0, Global_35781); }

// Position - 0x57AF
int func_114(int iParam0, int iParam1) {
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

// Position - 0x5990
bool func_115(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_113(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x59B2
void func_116() {
	if (entity::does_entity_exist(iLocal_55)) {
		if (!ped::is_ped_injured(iLocal_55)) {
			if (fire::is_explosion_in_sphere(-1, entity::get_entity_coords(iLocal_55, 1), 3f)) {
				ai::clear_ped_tasks_immediately(iLocal_55);
				entity::set_entity_health(iLocal_55, 99);
			}
			if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
				if (entity::get_entity_speed(player::get_players_last_vehicle()) < 3f) {
					entity::freeze_entity_position(iLocal_55, 1);
				}
				else {
					entity::freeze_entity_position(iLocal_55, 0);
					if (entity::is_entity_touching_entity(player::get_players_last_vehicle(), iLocal_55)) {
						ai::clear_ped_tasks_immediately(iLocal_55);
						entity::set_entity_health(iLocal_55, 99);
					}
				}
			}
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_55, 2f, 2f, 2f, 0, 1, 0)) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					if (func_60(1, 0, 1)) {
						if (!iLocal_311) {
							func_106(1);
							func_52(1, 1, 1, 0);
							player::set_player_control(player::player_id(), 0, 0);
							weapon::hide_ped_weapon_for_scripted_cutscene(player::player_ped_id(), 1);
							ui::clear_help(1);
							ui::display_hud(0);
							ui::display_radar(0);
							if (!ped::is_ped_injured(iLocal_55)) {
								gameplay::clear_area(entity::get_entity_coords(iLocal_55, 1), 5f, 1, 0, 0, 0);
								graphics::remove_particle_fx_in_range(
									entity::get_entity_coords(player::player_ped_id(), 1), 5f);
							}
							if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
								if (entity::is_entity_at_entity(player::get_players_last_vehicle(), iLocal_55, 5f, 5f,
																5f, 0, 1, 0)) {
									entity::set_entity_coords(
										player::get_players_last_vehicle(),
										entity::get_entity_coords(iLocal_55, 1) - Vector(1.5f, 4f, 3f), 1, 0, 0, 1);
									vehicle::set_vehicle_on_ground_properly(player::get_players_last_vehicle(),
																			1084227584);
								}
							}
							if (!ped::is_ped_injured(iLocal_55)) {
								iLocal_318 = ped::create_synchronized_scene(-935.57f, 2767.616f, 24.448f, 2.433f,
																			0.152f, 53.743f, 2);
								iLocal_134 = cam::create_cam("DEFAULT_ANIMATED_CAMERA", 0);
								ped::set_synchronized_scene_phase(iLocal_318, 0.158f);
								cam::play_synchronized_cam_anim(iLocal_134, iLocal_318, "untie_cam", "re@stag_do@");
								ai::clear_ped_tasks_immediately(player::player_ped_id());
								ai::clear_ped_tasks_immediately(iLocal_55);
								ai::task_synchronized_scene(iLocal_55, iLocal_318, "re@stag_do@", "untie_ped", 1000f,
															-1000f, 4, 0, 1148846080, 0);
								ped::_0x2208438012482A1A(iLocal_55, 0, 0);
								ai::task_synchronized_scene(player::player_ped_id(), iLocal_318, "re@stag_do@",
															"untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
								ped::_0x2208438012482A1A(player::player_ped_id(), 0, 0);
								cam::set_cam_active(iLocal_134, 1);
								cam::render_script_cams(1, 0, 3000, 1, 0, 0);
								iLocal_311 = 1;
							}
						}
					}
				}
			}
		}
		else {
			func_2();
		}
	}
	if (iLocal_311 && !iLocal_313) {
		func_21();
		system::wait(0);
		if (func_11() == 0) {
			func_4(&uLocal_136, "stagdau", "stagd_untieM", 4, 0, 0, 0);
		}
		if (func_11() == 1) {
			func_4(&uLocal_136, "stagdau", "stagd_untieF", 4, 0, 0, 0);
		}
		if (func_11() == 2) {
			func_4(&uLocal_136, "stagdau", "stagd_untieT", 4, 0, 0, 0);
		}
		iLocal_313 = 1;
	}
	if (iLocal_311 && !iLocal_312) {
		if (!iLocal_316) {
			if (ped::get_synchronized_scene_phase(iLocal_318) > 0.2f &&
				ped::get_synchronized_scene_phase(iLocal_318) < 0.3f) {
				audio::play_sound_from_entity(-1, "ROPE_CUT", player::player_ped_id(), "ROPE_CUT_SOUNDSET", 0, 0);
				iLocal_316 = 1;
			}
		}
		if (ped::get_synchronized_scene_phase(iLocal_318) > 0.4647059f && !iLocal_317) {
			if (cam::get_follow_ped_cam_view_mode() == 4) {
				graphics::_start_screen_effect("CamPushInNeutral", 0, 0);
				audio::play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_317 = 1;
			}
		}
		if (ped::get_synchronized_scene_phase(iLocal_318) > 0.5f) {
			iLocal_312 = 1;
		}
		if (func_117(1000)) {
			cam::do_screen_fade_out(800);
			while (cam::is_screen_fading_out()) {
				system::wait(0);
			}
			iLocal_312 = 1;
			iLocal_315 = 1;
		}
	}
	if (iLocal_312 && !iLocal_314) {
		if (entity::does_entity_exist(iLocal_66)) {
			entity::detach_entity(iLocal_66, 1, 1);
		}
		ai::clear_ped_tasks_immediately(player::player_ped_id());
		entity::set_entity_coords(player::player_ped_id(), -936.6537f, 2767.497f, 24.4289f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 208.4017f);
		ped::_0x2208438012482A1A(player::player_ped_id(), 0, 0);
		cam::set_cam_active(iLocal_134, 0);
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		cam::destroy_cam(iLocal_134, 0);
		cam::set_gameplay_cam_relative_heading(0f);
		cam::set_gameplay_cam_relative_pitch(-7f, 1065353216);
		func_52(0, 1, 1, 0);
		weapon::hide_ped_weapon_for_scripted_cutscene(player::player_ped_id(), 0);
		ui::display_hud(1);
		ui::display_radar(1);
		if (!ped::is_ped_injured(iLocal_55)) {
			entity::freeze_entity_position(iLocal_55, 0);
			ai::clear_ped_tasks_immediately(iLocal_55);
			ped::set_ped_can_ragdoll(iLocal_55, 1);
			entity::set_entity_coords(iLocal_55, -935.6716f, 2767.772f, 24.4289f, 1, 0, 0, 1);
			entity::set_entity_heading(iLocal_55, 136.9073f);
			ped::_0x2208438012482A1A(iLocal_55, 0, 0);
		}
		if (iLocal_315) {
			cam::do_screen_fade_in(800);
			while (cam::is_screen_fading_in()) {
				system::wait(0);
			}
			iLocal_315 = 0;
		}
		iLocal_317 = 0;
		iLocal_314 = 1;
	}
	if (iLocal_314 && !ped::is_ped_injured(iLocal_55)) {
		if (vehicle::is_vehicle_driveable(player::get_players_last_vehicle(), 0)) {
			if (entity::is_entity_at_entity(iLocal_55, player::get_players_last_vehicle(), 20f, 20f, 20f, 0, 1, 0) &&
				vehicle::get_vehicle_max_number_of_passengers(player::get_players_last_vehicle()) >= 1 &&
				!vehicle::is_this_model_a_boat(entity::get_entity_model(player::get_players_last_vehicle())) &&
				!vehicle::is_this_model_a_heli(entity::get_entity_model(player::get_players_last_vehicle())) &&
				!vehicle::is_this_model_a_plane(entity::get_entity_model(player::get_players_last_vehicle())) &&
				!vehicle::is_this_model_a_train(entity::get_entity_model(player::get_players_last_vehicle())) &&
				entity::get_entity_model(player::get_players_last_vehicle()) != joaat("rhino")) {
				ai::open_sequence_task(&iLocal_113);
				ai::task_look_at_entity(0, player::player_ped_id(), 10000, 2048, 3);
				ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 6500);
				ai::task_enter_vehicle(0, player::get_players_last_vehicle(), -1, 0, 1f, 1, 0);
				ai::close_sequence_task(iLocal_113);
				ai::task_perform_sequence(iLocal_55, iLocal_113);
				ai::clear_sequence_task(&iLocal_113);
			}
			else if (!ped::is_ped_in_group(iLocal_55)) {
				ped::set_ped_as_group_member(iLocal_55, func_67());
				ped::set_ped_never_leaves_group(iLocal_55, 1);
				ped::set_ped_group_member_passenger_index(iLocal_55, 0);
			}
		}
		else if (!ped::is_ped_in_group(iLocal_55)) {
			ped::set_ped_as_group_member(iLocal_55, func_67());
			ped::set_ped_never_leaves_group(iLocal_55, 1);
			ped::set_ped_group_member_passenger_index(iLocal_55, 0);
		}
		ped::set_blocking_of_non_temporary_events(iLocal_55, 0);
		player::set_player_control(player::player_id(), 1, 0);
		iLocal_320 = func_23(vLocal_67, 1);
		iLocal_114 = 1;
		bLocal_116 = true;
		streaming::remove_anim_dict("re@stag_do@");
		streaming::remove_anim_dict("re@stag_do@idle_a");
		iLocal_305 = func_74(func_75());
		iLocal_307 = iLocal_305 + 5;
		iLocal_304 = func_98(func_75());
		if (iLocal_304 >= 30) {
			iLocal_306 = 0;
			iLocal_307++;
		}
		if (iLocal_307 > 24) {
			iLocal_307 -= 24;
		}
		if (iLocal_307 == 0) {
			sLocal_302 = "stagd_ptime0";
		}
		else if (iLocal_307 == 1) {
			sLocal_302 = "stagd_ptime1";
		}
		else if (iLocal_307 == 2) {
			sLocal_302 = "stagd_ptime2";
		}
		else if (iLocal_307 == 3) {
			sLocal_302 = "stagd_ptime3";
		}
		else if (iLocal_307 == 4) {
			sLocal_302 = "stagd_ptime4";
		}
		else if (iLocal_307 == 5) {
			sLocal_302 = "stagd_ptime5";
		}
		else if (iLocal_307 == 6) {
			sLocal_302 = "stagd_ptime6";
		}
		else if (iLocal_307 == 7) {
			sLocal_302 = "stagd_ptime7";
		}
		else if (iLocal_307 == 8) {
			sLocal_302 = "stagd_ptime8";
		}
		else if (iLocal_307 == 9) {
			sLocal_302 = "stagd_ptime9";
		}
		else if (iLocal_307 == 10) {
			sLocal_302 = "stagd_ptim10";
		}
		else if (iLocal_307 == 11) {
			sLocal_302 = "stagd_ptim11";
		}
		else if (iLocal_307 == 12) {
			sLocal_302 = "stagd_ptim12";
		}
		else if (iLocal_307 == 13) {
			sLocal_302 = "stagd_ptim13";
		}
		else if (iLocal_307 == 14) {
			sLocal_302 = "stagd_ptim14";
		}
		else if (iLocal_307 == 15) {
			sLocal_302 = "stagd_ptim15";
		}
		else if (iLocal_307 == 16) {
			sLocal_302 = "stagd_ptim16";
		}
		else if (iLocal_307 == 17) {
			sLocal_302 = "stagd_ptim17";
		}
		else if (iLocal_307 == 18) {
			sLocal_302 = "stagd_ptim18";
		}
		else if (iLocal_307 == 19) {
			sLocal_302 = "stagd_ptim19";
		}
		else if (iLocal_307 == 20) {
			sLocal_302 = "stagd_ptim20";
		}
		else if (iLocal_307 == 21) {
			sLocal_302 = "stagd_ptim21";
		}
		else if (iLocal_307 == 22) {
			sLocal_302 = "stagd_ptim22";
		}
		else if (iLocal_307 == 23) {
			sLocal_302 = "stagd_ptim23";
		}
	}
}

// Position - 0x6178
bool func_117(int iParam0) {
	if (cam::is_screen_faded_in()) {
		if (gameplay::get_game_timer() - Global_28 > iParam0) {
			Global_27 = gameplay::get_game_timer();
		}
		Global_28 = gameplay::get_game_timer();
		if (gameplay::get_game_timer() - Global_27 > iParam0) {
			if (func_118()) {
				Global_27 = gameplay::get_game_timer();
				return true;
			}
		}
	}
	return false;
}

// Position - 0x61C2
bool func_118() {
	if (ui::is_pause_menu_active()) {
		return false;
	}
	if (controls::is_control_just_pressed(0, 18) || controls::is_control_just_pressed(2, 18)) {
		return true;
	}
	return false;
}

// Position - 0x61F4
void func_119() {
	if (!ped::is_ped_injured(iLocal_55)) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (!entity::is_entity_a_mission_entity(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
				entity::set_entity_as_mission_entity(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 1, 0);
			}
		}
		iLocal_133 = vehicle::get_random_vehicle_in_sphere(entity::get_entity_coords(iLocal_55, 0), 30f, 0, 4);
		if (!entity::is_entity_dead(iLocal_133, 0)) {
			if (!vehicle::is_vehicle_seat_free(iLocal_133, -1, 0)) {
				if (entity::is_entity_at_entity(iLocal_133, iLocal_55, 30f, 30f, 30f, 0, 1, 0)) {
					entity::set_entity_as_mission_entity(iLocal_133, 1, 0);
					if (vehicle::is_vehicle_driveable(iLocal_133, 0)) {
						vehicle::start_vehicle_horn(iLocal_133, 3000, 0, 0);
						if (!ped::is_ped_injured(iLocal_55)) {
							if (!func_65() && !iLocal_115) {
								func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
							}
						}
					}
				}
				else {
					entity::set_vehicle_as_no_longer_needed(&iLocal_133);
				}
			}
		}
	}
}

// Position - 0x62CC
void func_120() {
	int iVar0;
	int iVar1;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		iVar0 = ped::set_exclusive_phone_relationships(player::player_ped_id());
		if (vehicle::is_vehicle_driveable(iVar0, 0)) {
			iVar1 = vehicle::get_ped_in_vehicle_seat(iVar0, 0, 0);
			if (!ped::is_ped_injured(iVar1)) {
				if (iVar1 != player::player_ped_id()) {
					if (entity::is_entity_a_mission_entity(iVar1)) {
						if (!ped::is_ped_headtracking_entity(iVar1, player::player_ped_id())) {
							ai::task_look_at_entity(iVar1, player::player_ped_id(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

// Position - 0x6339
void func_121() {
	func_122(39, 1);
	func_122(40, 1);
	func_122(41, 1);
	func_122(42, 1);
	func_122(43, 1);
	func_122(44, 1);
	streaming::request_model(joaat("u_m_y_staggrm_01"));
	streaming::request_model(joaat("superd"));
	streaming::request_model(joaat("prop_stag_do_rope"));
	while (!streaming::has_model_loaded(joaat("u_m_y_staggrm_01")) || !streaming::has_model_loaded(joaat("superd")) ||
		   !streaming::has_model_loaded(joaat("prop_stag_do_rope"))) {
		system::wait(0);
	}
	streaming::request_anim_dict("re@stag_do@");
	streaming::request_anim_dict("re@stag_do@idle_a");
	audio::request_script_audio_bank("ROPE_CUT", 0, -1);
	while (!streaming::has_anim_dict_loaded("re@stag_do@") || !streaming::has_anim_dict_loaded("re@stag_do@idle_a") ||
		   !audio::request_script_audio_bank("ROPE_CUT", 0, -1)) {
		system::wait(0);
	}
	iLocal_55 = ped::create_ped(26, joaat("u_m_y_staggrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, 1, 1);
	audio::set_ambient_voice_name(iLocal_55, "GROOM");
	ped::set_ped_relationship_group_hash(iLocal_55, 1862763509);
	ped::set_blocking_of_non_temporary_events(iLocal_55, 1);
	ped::set_ped_money(iLocal_55, 0);
	ped::set_ped_component_variation(iLocal_55, 2, 0, 0, 0);
	ped::set_ped_component_variation(iLocal_55, 0, 0, 0, 0);
	ped::set_ped_component_variation(iLocal_55, 3, 0, 0, 0);
	ped::set_ped_component_variation(iLocal_55, 4, 0, 0, 0);
	ped::set_ped_component_variation(iLocal_55, 11, 1, 0, 0);
	ai::task_set_decision_maker(iLocal_55, -1143637011);
	ped::set_ped_combat_movement(iLocal_55, 3);
	ped::set_ped_config_flag(iLocal_55, 206, 1);
	ped::set_ped_config_flag(iLocal_55, 134, 1);
	iLocal_66 = object::create_object(joaat("prop_stag_do_rope"), entity::get_entity_coords(iLocal_55, 1), 1, 1, 0);
	entity::attach_entity_to_entity(iLocal_66, iLocal_55, ped::get_ped_bone_index(iLocal_55, 28422), 0f, 0f, 0f, 0f, 0f,
									0f, 0, 0, 0, 0, 2, 1);
	iLocal_59 = vehicle::create_vehicle(joaat("superd"), -2009.015f, 455.3556f, 101.6528f, 274.8103f, 0, 0);
	vehicle::set_vehicle_has_strong_axles(iLocal_59, 1);
	vehicle::set_vehicle_dirt_level(iLocal_59, 0f);
	vehicle::set_vehicle_doors_locked(iLocal_59, 3);
	vehicle::set_vehicle_mod_kit(iLocal_59, 0);
	vehicle::set_vehicle_mod_color_1(iLocal_59, 0, 73, 0);
	vehicle::set_vehicle_mod_color_2(iLocal_59, 2, 48);
	vehicle::set_vehicle_mod(iLocal_59, 11, 1, 0);
	vehicle::set_vehicle_mod(iLocal_59, 12, 1, 0);
	vehicle::request_vehicle_asset(joaat("superd"), 3);
	entity::set_entity_lod_dist(iLocal_59, 10000);
	vehicle::set_vehicle_lod_multiplier(iLocal_59, 5f);
	vehicle::add_vehicle_upsidedown_check(iLocal_59);
	vLocal_77 = {-352.88f, 6164.31f, 30.5f};
	vLocal_80 = {-355.2565f, 6164.931f, 30.2944f};
	vLocal_83 = {-330.5575f, 6139.852f, 34.4886f};
	fLocal_86 = 25.375f;
	vLocal_87 = {-343.5804f, 6156.198f, 30.489f};
	vLocal_90 = {-1991.126f, 457.991f, 101.1808f};
	vLocal_93 = {-2002.69f, 460.539f, 99.828f};
	vLocal_96 = {-1997.605f, 445.6651f, 105.0519f};
	vLocal_99 = {-2026.817f, 450.3329f, 104.8771f};
	fLocal_102 = 24.6875f;
	vLocal_103 = {-2205.351f, 4298.79f, 47.265f};
	vLocal_106 = {-2207.525f, 4301.697f, 47.1803f};
	vLocal_109 = {-2195.637f, 4295.407f, 51.1889f};
	fLocal_112 = 12.5625f;
	vLocal_67 = {vLocal_90};
	vLocal_70 = {vLocal_93};
	vLocal_73 = {vLocal_96};
	fLocal_76 = fLocal_102;
	vehicle::set_vehicle_model_is_suppressed(joaat("superd"), 1);
	vehicle::set_all_vehicle_generators_active_in_area(vLocal_87 - Vector(10f, 10f, 10f),
													   vLocal_87 + Vector(10f, 10f, 10f), 0, 1);
	ped::add_scenario_blocking_area(vLocal_87 - Vector(20f, 20f, 20f), vLocal_87 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	ped::add_scenario_blocking_area(entity::get_entity_coords(iLocal_55, 0) - Vector(10f, 10f, 10f),
									entity::get_entity_coords(iLocal_55, 0) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	ped::add_scenario_blocking_area(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f),
									Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	ped::add_scenario_blocking_area(Vector(47.4293f, 4299.008f, -2202.747f) - Vector(15f, 25f, 25f),
									Vector(47.4293f, 4299.008f, -2202.747f) + Vector(15f, 25f, 25f), 0, 1, 1, 1);
	gameplay::clear_area_of_peds(entity::get_entity_coords(iLocal_55, 1), 10f, 0);
	if (!entity::is_entity_dead(iLocal_55, 0)) {
		ai::open_sequence_task(&iLocal_113);
		ai::task_play_anim(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0, 0, 0, 0);
		ai::close_sequence_task(iLocal_113);
		ai::task_perform_sequence(iLocal_55, iLocal_113);
		ai::clear_sequence_task(&iLocal_113);
		ped::set_ped_keep_task(iLocal_55, 1);
	}
	if (func_11() == 0) {
		func_90(&uLocal_136, 0, player::player_ped_id(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1) {
		func_90(&uLocal_136, 0, player::player_ped_id(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2) {
		func_90(&uLocal_136, 0, player::player_ped_id(), "TREVOR", 0, 1);
	}
	func_90(&uLocal_136, 3, iLocal_55, "GROOM", 0, 1);
	iLocal_50 = 1;
}

// Position - 0x6845
void func_122(int iParam0, int iParam1) {
	if (iParam1) {
		if (!func_129(iParam0, 2, 1)) {
			func_128(iParam0, 2, 1);
		}
	}
	else if (func_129(iParam0, 2, 1)) {
		func_123(iParam0, 2, 1);
	}
}

// Position - 0x687C
void func_123(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::clear_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_34() == 0) {
			iVar0 = func_126(func_127(iParam0), -1, 0);
			gameplay::clear_bit(&iVar0, iParam1);
			func_124(func_127(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::clear_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x68E5
void func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_125(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x6915
int func_125(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_37();
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

// Position - 0x6949
int func_126(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_125(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x697B
int func_127(int iParam0) {
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

// Position - 0x6C42
void func_128(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::set_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_34() == 0) {
			iVar0 = func_126(func_127(iParam0), -1, 0);
			gameplay::set_bit(&iVar0, iParam1);
			func_124(func_127(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::set_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x6CAB
bool func_129(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_34() == 0) {
			return gameplay::is_bit_set(func_126(func_127(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return false;
}

// Position - 0x6D0B
bool func_130() {
	if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
		if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_45) < 75f * 75f) {
			return true;
		}
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_141()) {
			return false;
		}
	}
	if (func_137()) {
		return true;
	}
	if (func_131(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x6D91
int func_131(float fParam0, int iParam1) {
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
		if (func_13(func_11())) {
			iVar36 = func_44();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63) {
				iVar32 = iVar37;
				if (gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 2) &&
					!gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 3)) {
					func_132(iVar32, &Var0);
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

// Position - 0x6E48
void func_132(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_133(uParam1, "Abigail1", func_135(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 1:
		func_133(uParam1, "Abigail2", func_135(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 2:
		func_133(uParam1, "Barry1", func_135(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 3:
		func_133(uParam1, "Barry2", func_135(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_134(iParam0), 1, 1);
		break;

	case 4:
		func_133(uParam1, "Barry3", func_135(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 5:
		func_133(uParam1, "Barry3A", func_135(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 6:
		func_133(uParam1, "Barry3C", func_135(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 7:
		func_133(uParam1, "Barry4", func_135(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_134(iParam0), 0, 0);
		break;

	case 8:
		func_133(uParam1, "Dreyfuss1", func_135(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 9:
		func_133(uParam1, "Epsilon1", func_135(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 10:
		func_133(uParam1, "Epsilon2", func_135(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 11:
		func_133(uParam1, "Epsilon3", func_135(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 12:
		func_133(uParam1, "Epsilon4", func_135(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 13:
		func_133(uParam1, "Epsilon5", func_135(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 14:
		func_133(uParam1, "Epsilon6", func_135(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 15:
		func_133(uParam1, "Epsilon7", func_135(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 16:
		func_133(uParam1, "Epsilon8", func_135(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 17:
		func_133(uParam1, "Extreme1", func_135(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 18:
		func_133(uParam1, "Extreme2", func_135(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 19:
		func_133(uParam1, "Extreme3", func_135(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 20:
		func_133(uParam1, "Extreme4", func_135(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 21:
		func_133(uParam1, "Fanatic1", func_135(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_134(iParam0), 1, 0);
		break;

	case 22:
		func_133(uParam1, "Fanatic2", func_135(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_134(iParam0), 1, 0);
		break;

	case 23:
		func_133(uParam1, "Fanatic3", func_135(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_134(iParam0), 0, 1);
		break;

	case 24:
		func_133(uParam1, "Hao1", func_135(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_134(iParam0), 0, 1);
		break;

	case 25:
		func_133(uParam1, "Hunting1", func_135(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 26:
		func_133(uParam1, "Hunting2", func_135(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 27:
		func_133(uParam1, "Josh1", func_135(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 28:
		func_133(uParam1, "Josh2", func_135(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
		break;

	case 29:
		func_133(uParam1, "Josh3", func_135(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
		break;

	case 30:
		func_133(uParam1, "Josh4", func_135(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 31:
		func_133(uParam1, "Maude1", func_135(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 32:
		func_133(uParam1, "Minute1", func_135(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 33:
		func_133(uParam1, "Minute2", func_135(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 34:
		func_133(uParam1, "Minute3", func_135(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 35:
		func_133(uParam1, "MrsPhilips1", func_135(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 36:
		func_133(uParam1, "MrsPhilips2", func_135(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_134(iParam0), 0, 0);
		break;

	case 37:
		func_133(uParam1, "Nigel1", func_135(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 38:
		func_133(uParam1, "Nigel1A", func_135(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
		break;

	case 39:
		func_133(uParam1, "Nigel1B", func_135(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_134(iParam0), 1, 1);
		break;

	case 40:
		func_133(uParam1, "Nigel1C", func_135(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_134(iParam0), 1, 1);
		break;

	case 41:
		func_133(uParam1, "Nigel1D", func_135(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_134(iParam0), 1, 1);
		break;

	case 42:
		func_133(uParam1, "Nigel2", func_135(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
		break;

	case 43:
		func_133(uParam1, "Nigel3", func_135(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
		break;

	case 44:
		func_133(uParam1, "Omega1", func_135(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 45:
		func_133(uParam1, "Omega2", func_135(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 46:
		func_133(uParam1, "Paparazzo1", func_135(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 47:
		func_133(uParam1, "Paparazzo2", func_135(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 48:
		func_133(uParam1, "Paparazzo3", func_135(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 49:
		func_133(uParam1, "Paparazzo3A", func_135(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 50:
		func_133(uParam1, "Paparazzo3B", func_135(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 51:
		func_133(uParam1, "Paparazzo4", func_135(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 52:
		func_133(uParam1, "Rampage1", func_135(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 54:
		func_133(uParam1, "Rampage3", func_135(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 55:
		func_133(uParam1, "Rampage4", func_135(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 56:
		func_133(uParam1, "Rampage5", func_135(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 53:
		func_133(uParam1, "Rampage2", func_135(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 57:
		func_133(uParam1, "TheLastOne", func_135(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 58:
		func_133(uParam1, "Tonya1", func_135(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 59:
		func_133(uParam1, "Tonya2", func_135(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 60:
		func_133(uParam1, "Tonya3", func_135(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_134(iParam0), 0, 1);
		break;

	case 61:
		func_133(uParam1, "Tonya4", func_135(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_134(iParam0), 0, 1);
		break;

	case 62:
		func_133(uParam1, "Tonya5", func_135(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x7FFD
void func_133(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x8091
int func_134(int iParam0) {
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

// Position - 0x83D7
struct<2> func_135(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_136(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x840E
struct<2>
func_136(int iParam0) {
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

//Position - 0x885A
bool func_137()
{
	if (func_140() && !func_141()) {
		return true;
	}
	if (func_139() && func_138()) {
		return true;
	}
	return false;
}

// Position - 0x888C
bool func_138() { return Global_101418 > 0; }

// Position - 0x889A
int func_139() {
	if (Global_88746 != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x88AF
int func_140() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x88D5
int func_141() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x88F2
bool func_142() {
	if (!func_113(5)) {
		return true;
	}
	if (func_137()) {
		return true;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_141()) {
			return false;
		}
	}
	if (func_131(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x8954
bool func_143() {
	if (Global_101689 == func_48() && gameplay::get_random_event_flag() && Global_101690) {
		return true;
	}
	return false;
}

// Position - 0x897F
void func_144(int iParam0) {
	if (iParam0 == -1) {
		iParam0 = func_48();
	}
	if (iParam0 == -1) {
		return;
	}
	func_146(iParam0);
	gameplay::_0x65D2EBB47E1CEC21(0);
	gameplay::set_random_event_flag(1);
	Global_101686 = 0;
	func_145();
}

// Position - 0x89B5
void func_145() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			vehicle::set_vehicle_model_is_suppressed(
				entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)), 1);
		}
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
	}
}

// Position - 0x89F2
void func_146(int iParam0) { Global_101689 = iParam0; }

// Position - 0x8A00
bool func_147(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;

	if (!Global_138924) {
		return false;
	}
	if (iParam3 == -1) {
		iParam3 = func_48();
	}
	if (iParam3 == -1) {
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32) {
		if (!func_175()) {
			return false;
		}
	}
	vLocal_45 = {vParam0};
	iVar0 = 0;
	if (!iVar0) {
		if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
			vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_141()) {
				return false;
			}
		}
		if (!Global_101700.f_8044) {
			return false;
		}
		if (func_29(0)) {
			return false;
		}
		if (func_137()) {
			return false;
		}
		if (func_174()) {
			return false;
		}
		if (Global_101689 != -1) {
			return false;
		}
		if (func_13(func_11())) {
			if (func_131(100f, 1) != -1) {
				return false;
			}
		}
		if (player::is_player_playing(player::player_id()) && !iParam6) {
			if (vVar1.z - vLocal_45.z > 50f) {
				return false;
			}
		}
		if (!func_173(iParam3)) {
			return false;
		}
		if (func_13(func_11())) {
			if (func_172(func_11()) == 4 || func_172(func_11()) == 5) {
				return false;
			}
		}
		if (func_13(func_11())) {
			if (!func_171(iParam3, iParam4, 145)) {
				return false;
			}
		}
		if (!func_170(Global_101700.f_23954.f_43[iParam3])) {
			return false;
		}
		if (gameplay::get_game_timer() - Global_101691 < 150000) {
			if (iParam3 != 30) {
				return false;
			}
		}
		if (func_169()) {
			return false;
		}
		if (gameplay::get_mission_flag()) {
			return false;
		}
		if (gameplay::get_random_event_flag()) {
			return false;
		}
		if (!func_160(4)) {
			return false;
		}
		if (!func_113(5)) {
			return false;
		}
		if (func_159(iParam3, iParam4) && !iParam5) {
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
		if (iParam3 == 9 && (iParam4 == 2 || iParam4 == 5) && !func_159(0, 0)) {
			return false;
		}
		if (Global_25336) {
			return false;
		}
		if (func_173(30) && !func_159(30, 0)) {
			if (iParam3 != 30) {
				if (system::vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f) {
					return false;
				}
			}
		}
		if (func_13(func_11())) {
			iVar4 = 0;
			while (iVar4 < 3) {
				vVar5 = {Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_158(iVar8)) {
					if (func_149(iVar4)) {
						if (!func_148(vVar5, 0f, 0f, 0f, 0)) {
							if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 0), vVar5) <
								210f * 210f) {
								if (func_11() != iVar4) {
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

// Position - 0x8D9A
bool func_148(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x8DE1
bool func_149(int iParam0) {
	int iVar0;

	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
	return func_150(iVar0);
}

// Position - 0x8E02
int func_150(int iParam0) { return func_151(iParam0, 1); }

// Position - 0x8E11
int func_151(int iParam0, int iParam1) {
	int *iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_158(iParam0)) {
		return 0;
	}
	func_152(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (iVar5 > 0 || iVar4 > 0 || iVar3 > 0 || iVar2 >= iParam1) {
		return 1;
	}
	return 0;
}

// Position - 0x8E64
void func_152(int iParam0, int *iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6) {
	func_153(func_75(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x8E82
void func_153(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6,
			  int *iParam7) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_157(iParam0, iParam1)) {
		iVar0 = func_82(iParam1);
		iVar1 = func_80(iParam0);
		iVar2 = func_80(iParam0) - func_80(iParam1);
		iVar3 = func_82(iParam0) - func_82(iParam1);
		iVar4 = func_156(iParam0) - func_156(iParam1);
		iVar5 = func_74(iParam0) - func_74(iParam1);
		iVar6 = func_98(iParam0) - func_98(iParam1);
		iVar7 = func_155(iParam0) - func_155(iParam1);
	}
	else {
		iVar0 = func_82(iParam0);
		iVar1 = func_80(iParam1);
		iVar2 = func_80(iParam1) - func_80(iParam0);
		iVar3 = func_82(iParam1) - func_82(iParam0);
		iVar4 = func_156(iParam1) - func_156(iParam0);
		iVar5 = func_74(iParam1) - func_74(iParam0);
		iVar6 = func_98(iParam1) - func_98(iParam0);
		iVar7 = func_155(iParam1) - func_155(iParam0);
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
		iVar4 += func_79(iVar0, iVar1);
		iVar3--;
		iVar0 = system::round(func_154(system::to_float(iVar0 + 1), 0f, 12f));
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

// Position - 0x9083
float func_154(float fParam0, float fParam1, float fParam2) {
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

// Position - 0x90C5
int func_155(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x90D8
int func_156(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x90EA
bool func_157(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_158(iParam1) || !func_158(iParam0)) {
		return true;
	}
	iVar0 = func_80(iParam0);
	iVar1 = func_80(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_82(iParam0);
	iVar1 = func_82(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_156(iParam0);
	iVar1 = func_156(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_74(iParam0);
	iVar1 = func_74(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_98(iParam0);
	iVar1 = func_98(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_155(iParam0);
	iVar1 = func_155(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	return false;
}

// Position - 0x91F6
bool func_158(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return false;
	}
	iVar0 = func_155(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return false;
	}
	iVar1 = func_98(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return false;
	}
	iVar2 = func_74(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return false;
	}
	iVar3 = func_80(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return false;
	}
	iVar4 = func_82(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return false;
	}
	iVar5 = func_156(iParam0);
	if (iVar5 < 1 || iVar5 > func_79(iVar4, iVar3)) {
		return false;
	}
	return true;
}

// Position - 0x92D2
int func_159(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_101700.f_23954.f_8[iParam0], iParam1)) {
		return 1;
	}
	return 0;
}

// Position - 0x92F5
int func_160(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_11();
				if (!func_13(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_168() || Global_100747 ||
						Global_25192 || func_167() || func_18(8, -1) || func_166() || func_165() || func_164() ||
						func_163() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_168() || Global_25192 ||
						func_167() || func_18(8, -1) || func_164() || func_166() || func_165() || func_163() ||
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_168() || Global_100747 ||
						Global_25192 || func_167() || func_18(8, -1) || func_164() || func_166() || func_165() ||
						func_163() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return 0;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_168() || Global_100747 ||
						Global_25192 || func_167() || func_18(8, -1) || func_166() || func_165() || func_163() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 4:
					if (func_168() || player::get_player_wanted_level(player::player_id()) > 0 || func_18(8, -1) ||
						func_163() || func_162() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 5:
					if (func_18(8, -1) || func_166() || func_165() || func_162() || func_161()) {
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
							player::is_player_climbing(player::player_id()) || func_168() || Global_25192 ||
							func_167() || func_18(8, -1) || func_165() || func_164() || func_163() ||
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
						player::is_player_being_arrested(player::player_id(), 1) || func_168() || func_165() ||
						Global_100747 || Global_25192 || func_167() || Global_36912 || func_18(8, -1) || func_164() ||
						func_162() || func_163() || Global_101700.f_6647.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_168() || Global_100747 ||
						Global_25192 || func_167() || func_18(8, -1) || func_164() || func_162() || func_166() ||
						func_165() || func_163()) {
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

// Position - 0x9A12
var func_161() { return Global_91530.f_1; }

// Position - 0x9A20
int func_162() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x9A46
int func_163() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x9A60
int func_164() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x9A8A
bool func_165() { return Global_91543.f_304 > 0; }

// Position - 0x9A9B
bool func_166() { return Global_91543.f_303 > 0; }

// Position - 0x9AAC
var func_167() { return Global_1315233; }

// Position - 0x9AB8
int func_168() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x9AD4
bool func_169() {
	func_10();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
		return true;
	}
	return false;
}

// Position - 0x9AFC
int func_170(int iParam0) { return func_157(func_75(), iParam0); }

// Position - 0x9B0E
int func_171(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_11();
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

// Position - 0x9BF2
int func_172(int iParam0) {
	if (!func_13(iParam0)) {
		return 7;
	}
	return Global_101700.f_6647.f_919[iParam0];
}

// Position - 0x9C16
int func_173(int iParam0) {
	int iVar0;
	var uVar1;

	if (iParam0 == 31 || iParam0 == 32) {
		if (!func_175()) {
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

// Position - 0x9C74
bool func_174() {
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

// Position - 0x9CB8
int func_175() {
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

// Position - 0x9D73
bool func_176(int iParam0, int iParam1) {
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1) {
		if (iParam1 == 1) {
		}
		return true;
	}
	return false;
}

// Position - 0x9D9A
void func_177() {
	if (iLocal_51) {
		func_212(0);
		vehicle::set_all_vehicle_generators_active_in_area(vLocal_87 - Vector(10f, 10f, 10f),
														   vLocal_87 + Vector(10f, 10f, 10f), 1, 1);
		ped::remove_scenario_blocking_areas();
		func_21();
		player::reset_wanted_level_difficulty(player::player_id());
		if (!entity::is_entity_dead(iLocal_65, 0)) {
			if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_65, 0) &&
				!entity::is_entity_at_entity(player::player_ped_id(), iLocal_65, 50f, 50f, 50f, 0, 1, 0)) {
				func_189(iLocal_65, 0, 145);
			}
		}
		if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_87, 100f, 100f, 100f, 0, 1, 0)) {
			if (!ped::is_ped_injured(iLocal_55) && !ped::is_ped_injured(iLocal_57)) {
				ai::open_sequence_task(&iLocal_113);
				ai::task_follow_nav_mesh_to_coord(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				ai::task_chat_to_ped(0, iLocal_57, 16, 0f, 0f, 0f, 0f, 0f);
				ai::close_sequence_task(iLocal_113);
				ai::task_perform_sequence(iLocal_55, iLocal_113);
				ai::clear_sequence_task(&iLocal_113);
				ai::open_sequence_task(&iLocal_113);
				ai::task_follow_nav_mesh_to_coord(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				ai::task_chat_to_ped(0, iLocal_55, 16, 0f, 0f, 0f, 0f, 0f);
				ai::close_sequence_task(iLocal_113);
				ai::task_perform_sequence(iLocal_57, iLocal_113);
				ai::clear_sequence_task(&iLocal_113);
			}
		}
		entity::set_vehicle_as_no_longer_needed(&iLocal_133);
		entity::set_vehicle_as_no_longer_needed(&iLocal_59);
		if (!player::is_player_dead(player::player_id())) {
			player::set_player_control(player::player_id(), 1, 0);
		}
		if (!ped::is_ped_injured(iLocal_55)) {
			ped::set_ped_config_flag(iLocal_55, 317, 1);
			if (!entity::is_entity_attached(iLocal_55)) {
				entity::freeze_entity_position(iLocal_55, 0);
			}
			ped::remove_ped_from_group(iLocal_55);
			ped::set_blocking_of_non_temporary_events(iLocal_55, 0);
		}
		else if (entity::does_entity_exist(iLocal_66)) {
			entity::detach_entity(iLocal_66, 1, 1);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_55);
		if (!ped::is_ped_injured(iLocal_57)) {
			ped::set_ped_config_flag(iLocal_57, 317, 1);
			ped::set_blocking_of_non_temporary_events(iLocal_57, 0);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_57);
		if (!ped::is_ped_injured(iLocal_56)) {
			ped::set_blocking_of_non_temporary_events(iLocal_56, 0);
		}
		if (!ped::is_ped_injured(iLocal_58)) {
			ped::set_blocking_of_non_temporary_events(iLocal_58, 0);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_56);
	}
	func_178(-1);
	script::terminate_this_thread();
}

// Position - 0x9FB9
void func_178(int iParam0) {
	char cVar0[64];

	if (iParam0 == -1) {
		iParam0 = func_48();
	}
	if (iParam0 == -1) {
		return;
	}
	if (func_143()) {
		func_182(iParam0);
		ui::set_mission_name(0, 0);
		Global_101691 = gameplay::get_game_timer();
		func_181(30000);
		StringCopy(&cVar0, func_180(Global_101689, 1), 64);
		if (func_47(Global_101689) > 0) {
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		stats::_0x71862B1D855F32E1(&cVar0, Global_101686, gameplay::get_game_timer() - Global_101687, 0);
	}
	else if (gameplay::is_bit_set(Global_101696, 0) && Global_101700.f_23954.f_2 < 3) {
		gameplay::clear_bit(&Global_101696, 0);
	}
	func_179(&Global_25249);
	Global_101690 = 0;
	func_146(-1);
}

// Position - 0xA06E
void func_179(int *iParam0) {
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

// Position - 0xA0AB
char *func_180(int iParam0, int iParam1) {
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

// Position - 0xA2F4
void func_181(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0xA306
void func_182(int iParam0) { func_183(iParam0, 0, func_188(iParam0)); }

// Position - 0xA31B
void func_183(int iParam0, int iParam1, int iParam2) {
	int *iVar0;
	struct<16> Var1;

	iVar0 = func_75();
	func_186(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_185(iParam0, &iVar0);
	Var1 = {func_184(&iVar0)};
}

// Position - 0xA34A
struct<16> func_184(int *iParam0) {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_74(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_98(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_155(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_156(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_82(*iParam0);
	if (iVar16 < 9) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_80(*iParam0), 64);
	return Var0;
}

//Position - 0xA41A
void func_185(int iParam0, int* iParam1)
{
	Global_101700.f_23954.f_43[iParam0] = *iParam1;
}

// Position - 0xA432
void func_186(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_80(*iParam0);
	iVar1 = func_82(*iParam0);
	iVar2 = func_156(*iParam0);
	iVar3 = func_74(*iParam0);
	iVar4 = func_98(*iParam0);
	iVar5 = func_155(*iParam0);
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
	iVar6 = func_79(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_79(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_187(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0xA5B4
void func_187(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_85(iParam0, iParam1);
	func_84(iParam0, iParam2);
	func_83(iParam0, iParam3);
	func_77(iParam0, iParam5);
	func_78(iParam0, iParam4);
	func_76(iParam0, iParam6);
}

// Position - 0xA5EC
int func_188(int iParam0) {
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

// Position - 0xA78F
int func_189(int iParam0, int iParam1, int iParam2) {
	var uVar0;
	char *sVar1;

	if (iParam1 == 0) {
		sVar1 = entity::get_entity_script(iParam0, &uVar0);
		if (!gameplay::is_string_null_or_empty(sVar1)) {
			if (gameplay::get_hash_key(sVar1) == gameplay::get_hash_key("vehicle_gen_controller")) {
				return 0;
			}
		}
	}
	func_190(iParam0, iParam2);
	return 1;
}

// Position - 0xA7CF
void func_190(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_195(iParam0)) {
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
	func_191(iParam0, &Global_101700.f_31389.f_5510);
}

// Position - 0xA9D1
void func_191(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_194(uParam1);
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
		func_193(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_192(iVar0 + 1));
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

// Position - 0xAC7D
int func_192(int iParam0) {
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

// Position - 0xAD2D
int func_193(int iParam0, var *uParam1, var *uParam2) {
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

// Position - 0xAE07
void func_194(var *uParam0) {
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

// Position - 0xAEB7
int func_195(int iParam0) {
	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0) || func_210(iParam0, 0, 0) ||
		func_210(iParam0, 1, 0) || func_210(iParam0, 2, 0) || func_209(iParam0) != 145 || func_208(iParam0) ||
		func_207(iParam0) || func_206(iParam0) || func_205(iParam0) || !func_196(entity::get_entity_model(iParam0))) {
		if (func_207(iParam0)) {
		}
		if (func_207(iParam0)) {
		}
		if (func_210(iParam0, 0, 0)) {
		}
		if (func_210(iParam0, 1, 0)) {
		}
		if (func_210(iParam0, 2, 0)) {
		}
		if (func_209(iParam0) != 145) {
		}
		return 0;
	}
	return 1;
}

// Position - 0xAF94
int func_196(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	if (!func_197(iParam0, 0)) {
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

// Position - 0xB145
int func_197(int iParam0, int iParam1) {
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
		if (!func_175()) {
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
		if (!func_204() && !func_203() && !func_202() && !func_201() && !func_175()) {
			return 0;
		}
	}
	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion")) {
		if (gameplay::is_durango_version() || gameplay::is_pc_version() || gameplay::is_orbis_version()) {
		}
		else if (!func_202()) {
			return 0;
		}
	}
	if (iParam1) {
		if (!func_200(iParam0)) {
			return 0;
		}
	}
	if (!func_198(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0xB2D3
int func_198(int iParam0) {
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_199()) {
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

// Position - 0xB39F
int func_199() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0xB3B3
int func_200(int iParam0) {
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

// Position - 0xC0F9
int func_201() { return 0; }

// Position - 0xC102
int func_202() { return 1; }

// Position - 0xC10B
int func_203() { return 1; }

// Position - 0xC114
int func_204() {
	if (dlc2::is_dlc_present(-1226939934)) {
		return 1;
	}
	return 0;
}

// Position - 0xC12D
int func_205(int iParam0) {
	int iVar0;
	char *sVar1;

	iVar0 = entity::get_entity_model(iParam0);
	sVar1 = vehicle::get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && gameplay::are_strings_equal(sVar1, "LAMAR G ")) {
		return 1;
	}
	if (!func_197(iVar0, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0xC173
int func_206(int iParam0) {
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

// Position - 0xC1AE
bool func_207(int iParam0) {
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

// Position - 0xC22A
int func_208(int iParam0) {
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

// Position - 0xC312
int func_209(int iParam0) {
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

// Position - 0xC375
bool func_210(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_211(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0xC3E6
bool func_211(int iParam0, int iParam1, char *sParam2, int *iParam3) {
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

// Position - 0xC4BE
void func_212(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 46) {
		func_122(iVar0, iParam0);
		iVar0++;
	}
}
