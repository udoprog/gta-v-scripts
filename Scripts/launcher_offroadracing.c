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
int iLocal_119 = 0;
int iLocal_120 = 0;
vector3 vLocal_121 = {0f, 0f, 0f};
int iLocal_124 = 0;
vector3 vLocal_125[5] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
var *uLocal_141 = NULL;
var uLocal_142 = 0;
var uLocal_143 = 0;
var *uLocal_144 = NULL;
var uLocal_145 = 0;
var uLocal_146 = 0;
var *uLocal_147 = NULL;
var uLocal_148 = 0;
var uLocal_149 = 0;
var uLocal_150[5] = {0, 0, 0, 0, 0};
float fLocal_156 = 0f;
int iLocal_157 = 0;
bool bLocal_158 = 0;
int iLocal_159 = 0;
int iLocal_160 = 0;
int iLocal_161 = 0;
int iLocal_162 = 0;
var *uLocal_163 = NULL;
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
int iLocal_328 = 0;
struct<100> Local_329 = {
	5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
		0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1
};
var uLocal_429 = 0;
var uLocal_430 = 0;
var uLocal_431 = 0;
var uLocal_432 = 0;
var uLocal_433 = 0;
var uLocal_434 = 0;
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
	float fVar1;
	bool bVar2;
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
	iLocal_118 = 1;
	iLocal_119 = 6;
	iLocal_120 = 18;
	iLocal_124 = -1;
	bLocal_158 = true;
	iLocal_159 = 1;
	vLocal_90 = {ScriptParam_0.f_1[0 /*3*/]};
	vLocal_90 = {vLocal_90};
	iLocal_86 = iLocal_86;
	Local_69 = {Local_69};
	bVar0 = false;
	if (player::has_force_cleanup_occurred(82)) {
		func_145(1);
	}
	iLocal_85 = player::get_player_ped(player::player_id());
	iLocal_95 = 0;
	func_143(&Global_100353, 0);
	func_137();
	gameplay::_0x6F2135B6129620C1(1);
	if (func_136(iLocal_94, 1)) {
		iLocal_100 = 10;
	}
	else {
		iLocal_100 = 9;
	}
	while (!Global_31554) {
		system::wait(0);
	}
	if (!func_136(iLocal_94, 8)) {
		if (!func_134(iLocal_100)) {
			if (func_133(0, iLocal_99)) {
				func_145(0);
			}
			else {
				func_145(1);
			}
		}
	}
	if (iLocal_99 != -1) {
		if (!func_133(0, iLocal_99)) {
			iLocal_118 = 0;
		}
	}
	if (func_136(iLocal_94, 8388608)) {
		func_145(1);
	}
	if (func_136(iLocal_94, 524288) && func_132() && !func_131()) {
		func_145(1);
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(script::get_hash_of_this_script_name()) > 1 &&
		!func_136(iLocal_94, 4194304)) {
		if (iLocal_105 != 263) {
			func_130(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_129(10);
	}
	while (true) {
		if (!func_136(iLocal_94, 268435456)) {
			fVar1 = 0f;
			if (gameplay::get_ground_z_for_3d_coord(ScriptParam_0.f_1[0 /*3*/], &fVar1, 0)) {
				if (fVar1 != 0f) {
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					func_128(&iLocal_94, 268435456);
				}
			}
		}
		iLocal_85 = player::get_player_ped(player::player_id());
		if (func_136(iLocal_94, 1048576)) {
			if (entity::is_entity_dead(iLocal_85, 0)) {
				func_145(1);
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
				if (func_134(iLocal_100) || func_136(iLocal_94, 16) && !func_136(iLocal_94, 524288)) {
					iLocal_98 = -1;
					func_124();
					func_129(1);
				}
				else {
					if (fLocal_110 > fLocal_102 * fLocal_102) {
						if (iLocal_105 != 263) {
							func_130(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_129(10);
					}
					if (vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2 > 500f) {
					}
				}
				break;

			case 1:
				if (func_122() && fLocal_93 > fLocal_117 * 1.5f * fLocal_117 * 1.5f) {
					iLocal_103 = iLocal_103;
					func_129(3);
				}
				else {
					func_124();
				}
				break;

			case 3:
				if (network::network_is_in_session()) {
					func_145(1);
					return;
				}
				if (!func_134(iLocal_100)) {
					if (!func_136(iLocal_94, 8)) {
						bVar2 = true;
						if (gameplay::are_strings_equal(&Global_91491.f_3, &Local_69)) {
							Local_69 = {Local_53};
							bVar2 = false;
						}
						if (bVar2) {
							func_145(0);
							break;
						}
					}
				}
				if (!func_136(iLocal_94, 4)) {
					func_111();
					func_128(&iLocal_94, 4);
				}
				if (fLocal_110 > fLocal_102 * fLocal_102 && !Global_91525) {
					if (iLocal_105 != 263) {
						if (func_110(6) && !func_109(iLocal_105)) {
						}
						else {
							func_130(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
					}
					func_129(10);
				}
				else {
					Local_69 = {Local_53};
					bVar3 = !func_136(iLocal_94, 64);
					func_143(&iLocal_94, 128);
					if (!func_108(3) && !Global_91525) {
						if (func_136(iLocal_94, 2097152)) {
							if ((!func_136(iLocal_94, 1) || !entity::does_entity_exist(func_107())) && !Global_91525) {
								func_129(10);
								break;
							}
						}
					}
					if (func_136(iLocal_94, 524288) && func_132() && !func_131()) {
						func_145(1);
					}
					if (func_106()) {
						func_145(1);
					}
					if (!func_98(6) || Global_100747 || func_97()) {
						bVar3 = false;
					}
					if (!iLocal_118) {
						func_95(&iLocal_94, 128);
						bVar3 = false;
					}
					if (func_136(iLocal_94, 1)) {
						if (!func_94()) {
							func_95(&iLocal_94, 128);
							bVar3 = false;
						}
					}
					if (func_93(1)) {
						bVar3 = false;
					}
					if (Global_69702) {
						bVar3 = false;
					}
					if (func_92()) {
						bVar3 = false;
					}
					if (streaming::is_player_switch_in_progress()) {
						bVar3 = false;
					}
					if (func_91() || func_90(8, -1)) {
						bVar3 = false;
					}
					if (!player::can_player_start_mission(player::player_id())) {
						bVar3 = false;
					}
					if (!player::is_player_script_control_on(player::player_id())) {
						bVar3 = false;
					}
					if (func_89(0) || func_88()) {
						bVar3 = false;
					}
					if (bVar3) {
						if (!entity::is_entity_at_coord(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117,
														2f, 0, 1, iLocal_103)) {
							bVar3 = false;
						}
						iVar4 = time::get_clock_hours();
						if (iLocal_119 > iLocal_120) {
							if (iVar4 < iLocal_119 && iVar4 >= iLocal_120) {
								func_95(&iLocal_94, 128);
								bVar3 = false;
								if (fLocal_93 < fLocal_117 * fLocal_117 + 4f) {
									if (!func_136(iLocal_94, 134217728)) {
										func_87("MG_NA_TIME", iLocal_119, iLocal_120);
										func_95(&iLocal_94, 134217728);
									}
								}
								else {
									func_143(&iLocal_94, 134217728);
								}
							}
						}
						else if (iVar4 < iLocal_119 || iVar4 >= iLocal_120) {
							func_95(&iLocal_94, 128);
							bVar3 = false;
							if (fLocal_93 < fLocal_117 * fLocal_117 + 4f) {
								if (!func_136(iLocal_94, 134217728)) {
									func_87("MG_NA_TIME", iLocal_119, iLocal_120);
									func_95(&iLocal_94, 134217728);
								}
							}
							else {
								func_143(&iLocal_94, 134217728);
							}
						}
						if (!player::is_player_control_on(player::player_id())) {
							bVar3 = false;
						}
						if (bVar3) {
							controls::set_input_exclusive(0, 51);
							if (func_86(iLocal_86)) {
								if (iLocal_96 == -1) {
									func_85(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
									func_95(&iLocal_94, 2048);
								}
								else if (!func_136(iLocal_94, 2048) || !ui::is_help_message_being_displayed()) {
									func_84(&iLocal_96);
									func_143(&iLocal_94, 2048);
								}
								if (func_82(iLocal_96, 1)) {
									sLocal_101 = sLocal_101;
									func_84(&iLocal_96);
									func_143(&iLocal_94, 2048);
									script::request_script(&Local_69);
									player::set_player_control(player::player_id(), 0, 56);
									func_129(5);
								}
							}
							else {
								sLocal_101 = sLocal_101;
								func_84(&iLocal_96);
								func_143(&iLocal_94, 2048);
								script::request_script(&Local_69);
								player::set_player_control(player::player_id(), 0, 56);
								func_129(5);
							}
						}
					}
					if (!bVar3) {
						if (iLocal_96 != -1) {
							func_84(&iLocal_96);
							func_143(&iLocal_94, 2048);
							ui::clear_help(0);
						}
					}
				}
				func_50();
				break;

			case 5:
				controls::set_input_exclusive(0, 51);
				if (script::has_script_loaded(&Local_69)) {
					if (iLocal_96 != -1) {
						func_84(&iLocal_96);
					}
					iVar5 = 2;
					bVar0 = false;
					if (func_136(iLocal_94, 1)) {
						if (func_110(6) || func_110(7)) {
							iVar5 = 1;
							bVar0 = true;
						}
					}
					if (iVar5 != 1) {
						iVar5 = func_47(&iLocal_98, 6, iLocal_100, 0, 0);
					}
					if (iVar5 == 1) {
						if (!entity::is_entity_dead(iLocal_86, 0)) {
							entity::set_vehicle_as_no_longer_needed(&iLocal_86);
						}
						if (player::is_player_playing(player::player_id())) {
							player::clear_player_wanted_level(player::player_id());
						}
						func_46();
						if (Global_36912) {
							func_37(player::player_ped_id());
						}
						player::set_player_control(player::player_id(), 1, 56);
						iLocal_52 = func_36();
						func_95(&iLocal_94, 2);
						func_129(6);
						func_32(&iLocal_107);
						if (iLocal_99 != -1) {
							func_31(iLocal_99);
							func_29(func_30(iLocal_99), 0, 0);
						}
					}
					else if (iVar5 == 2) {
						func_28();
					}
					else if (iVar5 == 0) {
						func_129(10);
					}
				}
				else {
					func_28();
				}
				break;

			case 6:
				if (func_136(Global_100353, 262144)) {
					func_143(&Global_100353, 262144);
					func_27();
				}
				if (func_136(iLocal_94, 2097152)) {
					if (!func_108(3) && !script::is_thread_active(iLocal_52)) {
						func_129(10);
					}
				}
				if (!script::is_thread_active(iLocal_52)) {
					stats::playstats_oddjob_done(system::round(func_23(&iLocal_107) * 1000f), iLocal_99, 0);
					func_22(&iLocal_107);
					func_143(&iLocal_94, 256);
					func_21();
					if (bVar0) {
						func_143(&iLocal_94, 2);
					}
					else if (func_136(iLocal_94, 2)) {
						if (func_136(Global_100353, 0)) {
							func_20(&iLocal_98);
							iLocal_98 = -1;
							func_143(&iLocal_94, 2);
						}
						else {
							func_20(&iLocal_98);
							iLocal_98 = -1;
							func_143(&iLocal_94, 2);
						}
					}
					func_129(0);
					if (iLocal_99 != -1) {
						if (func_136(Global_100353, 0)) {
							stats::playstats_mission_checkpoint(func_30(iLocal_99), 0, Global_91528, 0);
							func_19(func_30(iLocal_99), 0, Global_91528, 1, 0);
						}
						else {
							stats::playstats_mission_checkpoint(func_30(iLocal_99), 0, Global_91528, 0);
							func_19(func_30(iLocal_99), 0, Global_91528, 0, 0);
						}
					}
					func_5();
					func_143(&Global_100353, 0);
					if (func_136(iLocal_94, 16777216)) {
						func_145(1);
					}
					if (iLocal_99 != -1) {
						if (Global_101700.f_8044) {
							if (!func_133(0, iLocal_99)) {
								func_145(1);
							}
						}
					}
				}
				func_4();
				break;

			case 8: func_129(0); break;

			case 10: func_145(1); break;

			case 9:
				if (fLocal_110 > fLocal_102 * fLocal_102) {
					if (iLocal_105 != 263) {
						func_130(iLocal_105, 1, 0);
						iLocal_105 = 263;
					}
					func_129(10);
				}
				break;

			case 7:
				func_2();
				if (iLocal_105 != 263) {
					func_130(iLocal_105, 0, 0);
				}
				if (iLocal_96 != -1) {
					func_84(&iLocal_96);
				}
				if (!gameplay::is_string_null_or_empty(sLocal_101)) {
					if (func_1(sLocal_101)) {
						ui::clear_help(1);
					}
				}
				func_129(4);
				break;

			case 4:
				if (iLocal_104 % 150 == 0) {
					if (!ped::is_ped_injured(player::player_ped_id())) {
						if (iLocal_106 == 2) {
							if (iLocal_106 == 2) {
								if (func_134(iLocal_100) && func_133(0, iLocal_99)) {
									func_137();
									if (iLocal_105 != 263) {
										func_130(iLocal_105, 1, 0);
									}
									func_129(0);
								}
							}
						}
						else if (iLocal_106 == 0) {
							if (fLocal_110 > fLocal_102 * fLocal_102) {
								if (iLocal_105 != 263) {
									func_130(iLocal_105, 1, 0);
									iLocal_105 = 263;
								}
								func_129(10);
							}
						}
						else if (iLocal_106 == 1) {
							if (fLocal_110 > (80f + 5f) * (80f + 5f)) {
								func_137();
								if (iLocal_105 != 263) {
									func_130(iLocal_105, 1, 0);
								}
								func_129(0);
							}
						}
					}
					else {
						func_130(iLocal_105, 1, 0);
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

// Position - 0xB3B
bool func_1(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0xB4E
void func_2() {
	char *sVar0;

	func_3(&Local_329.f_71);
	func_3(&Local_329.f_77);
	func_3(&Local_329.f_99);
	streaming::remove_anim_dict("amb@world_human_hang_out_street@male_a@idle_a");
	streaming::remove_anim_dict("amb@world_human_hang_out_street@male_b@idle_a");
	streaming::remove_anim_dict("amb@world_human_hang_out_street@male_c@idle_a");
	streaming::remove_anim_dict("amb@world_human_aa_smoke@male@idle_a");
	streaming::remove_anim_dict("random@street_race");
	streaming::remove_anim_dict("gestures@m@standing@casual");
	switch (iLocal_124) {
	case 0: sVar0 = "CanyonCliffs_Start"; break;

	case 1: sVar0 = "RidgeRun_Start"; break;

	case 3: sVar0 = "ValleyTrail_Start"; break;

	case 4: sVar0 = "LakesideSplash_Start"; break;

	case 5: sVar0 = "EcoFriendly_Start"; break;

	case 2: sVar0 = "MinewardSpiral_Start"; break;
	}
	if (!gameplay::is_string_null_or_empty(sVar0)) {
		if (ai::does_scenario_group_exist(sVar0)) {
			if (ai::is_scenario_group_enabled(sVar0)) {
				ai::set_scenario_group_enabled(sVar0, 0);
			}
		}
	}
}

// Position - 0xC24
void func_3(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] != 0) {
			streaming::set_model_as_no_longer_needed((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0xC54
void func_4() {}

// Position - 0xC5C
void func_5() {
	if (func_136(Global_101700.f_17975, 1)) {
		func_143(&Global_101700.f_17975, 1);
		func_18();
		func_8();
		func_6();
	}
}

// Position - 0xC8C
int func_6() {
	if (func_7(0)) {
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

// Position - 0xCD7
bool func_7(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xD02
void func_8() {
	if (Global_101700.f_17975.f_18 < Global_101700.f_17975.f_19[iLocal_124] ||
		Global_101700.f_17975.f_19[iLocal_124] == 0) {
		Global_101700.f_17975.f_19[iLocal_124] = Global_101700.f_17975.f_18;
		Global_101700.f_17975.f_18 = 999;
	}
	if (iLocal_124 == Global_101700.f_17975.f_1 || Global_101700.f_17975.f_1 == -1) {
		if (Global_101700.f_17975.f_1 != 5) {
			Global_101700.f_17975.f_1++;
			switch (Global_101700.f_17975.f_1) {
			case 1:
				func_130(70, 1, 0);
				func_17(70, 1);
				func_130(71, 1, 0);
				break;

			case 2:
				func_130(70, 1, 0);
				func_17(70, 1);
				func_130(71, 1, 0);
				func_17(71, 1);
				func_130(72, 1, 0);
				break;

			case 3:
				func_130(70, 1, 0);
				func_17(70, 1);
				func_130(71, 1, 0);
				func_17(71, 1);
				func_130(72, 1, 0);
				func_17(72, 1);
				func_130(73, 1, 0);
				break;

			case 4:
				func_130(70, 1, 0);
				func_17(70, 1);
				func_130(71, 1, 0);
				func_17(71, 1);
				func_130(72, 1, 0);
				func_17(72, 1);
				func_130(73, 1, 0);
				func_17(73, 1);
				func_130(74, 1, 0);
				break;

			case 5:
				func_130(70, 1, 0);
				func_17(70, 1);
				func_130(71, 1, 0);
				func_17(71, 1);
				func_130(72, 1, 0);
				func_17(72, 1);
				func_130(73, 1, 0);
				func_17(73, 1);
				func_130(74, 1, 0);
				func_17(74, 1);
				func_130(75, 1, 0);
				break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else {
			func_130(70, 1, 0);
			func_17(70, 1);
			func_130(71, 1, 0);
			func_17(71, 1);
			func_130(73, 1, 0);
			func_17(73, 1);
			func_130(74, 1, 0);
			func_17(74, 1);
			func_130(75, 1, 0);
			func_17(75, 1);
			func_130(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_101700.f_17975.f_1) {
		case 0:
			func_13(70);
			func_9(71);
			break;

		case 1:
			func_13(71);
			func_9(72);
			break;

		case 2:
			func_13(72);
			func_9(73);
			break;

		case 3:
			func_13(73);
			func_9(74);
			break;

		case 4:
			func_13(74);
			func_9(75);
			break;

		case 5: func_13(75); break;
		}
	}
}

// Position - 0xFD5
void func_9(int iParam0) {
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

// Position - 0xFF3
void func_10(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 4)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 4);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 4);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x1079
void func_11(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 5)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 5);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 5);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x10FF
void func_12(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 6)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 6);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 6);
	}
	if (iParam2) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 11);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 11);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x11AB
void func_13(int iParam0) {
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

// Position - 0x11C9
void func_14(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x11EB
void func_15(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
		func_16();
	}
}

// Position - 0x13BF
void func_16() {
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

// Position - 0x14DF
void func_17(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 20)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 20);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 20);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 20);
}

// Position - 0x1568
void func_18() {
	ped::remove_scenario_blocking_areas();
	ai::reset_scenario_types_enabled();
	switch (iLocal_124) {
	case 0:
		pathfind::set_roads_back_to_original_in_angled_area(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f,
															1);
		break;

	case 1:
		pathfind::set_roads_back_to_original_in_angled_area(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f,
															25.35144f, 300f, 1);
		break;

	case 3:
		pathfind::set_roads_back_to_original_in_angled_area(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f,
															1);
		break;

	case 4: break;

	case 5:
		pathfind::set_roads_back_to_original_in_angled_area(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f,
															1000f, 1);
		break;

	case 2:
		pathfind::set_roads_back_to_original_in_angled_area(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f,
															177.1921f, 500f, 1);
		break;
	}
}

// Position - 0x1679
void func_19(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (gameplay::is_string_null_or_empty(&Global_88894)) {
		return;
	}
	if (gameplay::compare_strings(sParam0, &Global_88894, 0, -1) != 0) {
		return;
	}
	stats::playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_86001);
	StringCopy(&Global_88894, "", 64);
}

// Position - 0x16BE
void func_20(int *iParam0) {
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

// Position - 0x16FB
void func_21() {
	vector3 vVar0[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		network::network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		network::_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

// Position - 0x173E
void func_22(int *iParam0) {
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

// Position - 0x1754
float func_23(var *uParam0) {
	if (func_26(uParam0)) {
		if (func_25(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_24(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x1793
float func_24(bool bParam0) {
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

// Position - 0x17EB
bool func_25(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x17FB
bool func_26(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x180B
int func_27() {
	func_8();
	return 1;
}

// Position - 0x1818
void func_28() {}

// Position - 0x1820
void func_29(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null_or_empty(&Global_88894)) {
		stats::playstats_mission_over(&Global_88894, 0, 0, 0, 1, 0);
		StringCopy(&Global_88894, "", 64);
	}
	StringCopy(&Global_88894, sParam0, 64);
	stats::playstats_mission_started(sParam0, iParam1, iParam2, func_7(0));
}

// Position - 0x1862
char *func_30(int iParam0) {
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

// Position - 0x19B5
void func_31(int iParam0) {
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

// Position - 0x1A0E
void func_32(var *uParam0) {
	if (!func_26(uParam0)) {
		func_35(uParam0);
	}
	else {
		func_33(uParam0);
	}
}

// Position - 0x1A2F
void func_33(var *uParam0) { func_34(uParam0, 0f); }

// Position - 0x1A3E
void func_34(int *iParam0, float fParam1) {
	uParam0->f_1 = func_24(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x1A6C
void func_35(var *uParam0) {
	if (!func_26(uParam0)) {
		func_33(uParam0);
	}
}

// Position - 0x1A84
var func_36() {
	struct<18> Var0;
	int iVar18;
	var uVar19;

	ui::clear_help(1);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0 = iLocal_124;
	Var0.f_1 = {vLocal_121};
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < Var0.f_4) {
		Var0.f_4[iVar18] = Local_329[iVar18 /*14*/];
		Var0.f_10[iVar18] = Local_329[iVar18 /*14*/].f_1;
		iVar18++;
	}
	Var0.f_16 = Local_329.f_83;
	Var0.f_17 = Local_329.f_83.f_1;
	graphics::_start_screen_effect("SwitchSceneNeutral", 0, 1);
	system::wait(400);
	uVar19 = system::start_new_script_with_args(&Local_53, &Var0, 18, iLocal_97);
	script::set_script_as_no_longer_needed(&Local_53);
	return uVar19;
}

// Position - 0x1B21
void func_37(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0) {
		return;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return;
	}
	iVar0 = func_45(iParam0);
	if (iVar0 != -1) {
		iVar1 = Global_36715[iVar0 /*5*/];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == -1) {
		return;
	}
	func_38(iVar2);
}

// Position - 0x1B7A
void func_38(int iParam0) {
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

// Position - 0x1BFD
int func_39(int iParam0) {
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

// Position - 0x1C2E
void func_40(int iParam0, int iParam1, int iParam2) { func_41(iParam0, iParam1, iParam2, 0, 0); }

// Position - 0x1C42
void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
	if (func_43(iParam0, iParam1, iParam2)) {
		return;
	}
	iVar0 = func_42();
	if (iVar0 == -1) {
		return;
	}
	Global_36796[iVar0 /*5*/] = iParam0;
	Global_36796[iVar0 /*5*/].f_1 = iParam1;
	Global_36796[iVar0 /*5*/].f_2 = iParam2;
	Global_36796[iVar0 /*5*/].f_3 = iParam3;
	Global_36796[iVar0 /*5*/].f_4 = iParam4;
}

// Position - 0x1CB9
int func_42() {
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

// Position - 0x1CEA
bool func_43(int iParam0, int iParam1, int iParam2) {
	if (func_44(iParam0, iParam1, iParam2) == -1) {
		return false;
	}
	return true;
}

// Position - 0x1D05
int func_44(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x1D51
int func_45(int iParam0) {
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

// Position - 0x1D9A
void func_46() {
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	gameplay::clear_bit(&G_SleepModeOnOn25, 25);
	gameplay::set_bit(&G_SleepModeOffOn11, 11);
}

// Position - 0x1E17
int func_47(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_49(0)) {
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
		if (!func_134(iParam2)) {
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
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x1F4E
void func_48(int *iParam0, int iParam1) {
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

// Position - 0x1F9D
bool func_49(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_134(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x1FBF
void func_50() {
	float fVar0;

	fVar0 = system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_121);
	if (fVar0 < 62500f) {
		func_74();
		func_71();
		if (iLocal_159) {
			if (fVar0 < 64f) {
				func_70();
				iLocal_159 = 0;
			}
		}
		if (fVar0 < 400f) {
			func_54();
		}
	}
	if (!iLocal_160) {
		if (func_52()) {
			iLocal_160 = 1;
			func_51();
		}
	}
}

// Position - 0x2027
void func_51() { iLocal_48++; }

// Position - 0x2035
bool func_52() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_53()) {
		if (!entity::does_entity_exist(Local_329[iVar0 /*14*/]) ||
			!entity::does_entity_exist(Local_329[iVar0 /*14*/].f_1)) {
			return false;
		}
		iVar0++;
	}
	if (!entity::does_entity_exist(Local_329.f_83) || !entity::does_entity_exist(Local_329.f_83.f_1)) {
		return false;
	}
	return true;
}

// Position - 0x209D
int func_53() {
	switch (iLocal_124) {
	case 0:
	case 3:
	case 5:
	case 2: return 5;

	case 1:
	case 4: return 4;
	}
	return 0;
}

// Position - 0x20DF
void func_54() {
	int iVar0;
	char *sVar1;

	if (!func_26(&uLocal_147)) {
		func_35(&uLocal_147);
		return;
	}
	if (entity::does_entity_exist(iLocal_157) && !entity::is_entity_dead(iLocal_157, 0)) {
		if (audio::is_ambient_speech_playing(iLocal_157)) {
			return;
		}
	}
	if (func_23(&uLocal_147) >= 8f) {
		iVar0 = gameplay::get_random_int_in_range(0, 65535) % 3 + 1;
		if (iVar0 > 0 && iVar0 <= 3) {
			if (entity::is_entity_dead(Local_329[iVar0 - 1 /*14*/], 0)) {
				return;
			}
			switch (iVar0) {
			case 1: sVar1 = "ORR_GUY1"; break;

			case 2: sVar1 = "ORR_GUY2"; break;

			case 3: sVar1 = "ORR_GUY3"; break;
			}
			func_55(&uLocal_163, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_33(&uLocal_147);
		}
	}
}

// Position - 0x21A9
int func_55(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_69(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_56(sParam2, iParam3, 0);
}

// Position - 0x21F7
int func_56(char *sParam0, int iParam1, int iParam2) {
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
					func_68();
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
		if (func_90(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_67();
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
				func_61();
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
				if (func_60()) {
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
			if (func_59()) {
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
			func_58();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_57();
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
		func_68();
	}
	return 0;
}

// Position - 0x24C3
void func_57() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x24F5
void func_58() {
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

// Position - 0x258A
bool func_59() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x25B1
bool func_60() {
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

// Position - 0x264A
void func_61() {
	if (func_110(14)) {
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
		Global_14443 = func_62();
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

// Position - 0x26EC
var func_62() {
	func_63();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x2705
void func_63() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_66(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_65(player::player_ped_id());
			if (func_64(iVar0) && (!func_110(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_64(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x2802
bool func_64(int iParam0) { return iParam0 < 3; }

// Position - 0x280E
int func_65(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_66(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x284B
int func_66(int iParam0) {
	if (func_64(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x2875
void func_67() {
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

// Position - 0x28CD
void func_68() {
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

// Position - 0x2924
void func_69(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, var uParam5) {
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

// Position - 0x297A
void func_70() {
	int iVar0;

	if (player::is_player_playing(player::player_id()) && !entity::is_entity_dead(Local_329.f_83, 0)) {
		iVar0 = time::get_clock_hours();
		if (iVar0 <= iLocal_119 && iVar0 >= iLocal_120) {
			iLocal_159 = 0;
			return;
		}
		cam::set_gameplay_entity_hint(Local_329.f_83, 0f, 0f, 0.75f, 1, 2000, 2000, 2000, 0);
	}
}

// Position - 0x29D6
void func_71() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = time::get_clock_hours();
	if (iVar0 <= iLocal_119 && iVar0 >= iLocal_120) {
		iLocal_328 = 0;
		return;
	}
	if (!entity::is_entity_dead(iLocal_157, 0) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
		switch (iLocal_328) {
		case 0:
			if (system::vdist2(entity::get_entity_coords(iLocal_157, 1),
							   entity::get_entity_coords(player::player_ped_id(), 1)) < 64f &&
				!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iLocal_161 = 0;
				iLocal_162 = 0;
				iLocal_328 = 1;
			}
			break;

		case 1:
			ai::open_sequence_task(&iVar1);
			ai::task_look_at_entity(0, player::player_ped_id(), -1, 0, 2);
			ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
			ai::close_sequence_task(iVar1);
			ai::task_perform_sequence(iLocal_157, iVar1);
			ai::clear_sequence_task(&iVar1);
			iLocal_328 = 2;
			break;

		case 2:
			if (ai::get_script_task_status(iLocal_157, 242628503) != 1 ||
				ped::is_ped_facing_ped(iLocal_157, player::player_ped_id(), 20f))
				&&!audio::is_scripted_conversation_ongoing() {
					ai::task_turn_ped_to_face_entity(iLocal_157, player::player_ped_id(), -1);
					if (!iLocal_162) {
						func_72(iLocal_157, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else {
						func_72(iLocal_157, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_328 = 3;
				}
			break;

		case 3:
			if (!audio::is_ambient_speech_playing(iLocal_157)) {
				func_33(&uLocal_144);
				ai::task_play_anim(iLocal_157, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0,
								   0);
				iLocal_328 = 4;
			}
			break;

		case 4:
			if (system::vdist2(entity::get_entity_coords(iLocal_157, 1),
							   entity::get_entity_coords(player::player_ped_id(), 1)) > 225f) {
				ai::open_sequence_task(&iVar2);
				ai::task_achieve_heading(0, Local_329.f_83.f_9, 1000);
				ai::task_play_anim(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
				ai::close_sequence_task(iVar2);
				ai::task_perform_sequence(iLocal_157, iVar2);
				ai::clear_sequence_task(&iVar2);
				iLocal_328 = 0;
			}
			if (func_26(&uLocal_144)) {
				if (func_23(&uLocal_144) >= 5f && !iLocal_161) {
					iLocal_161 = 1;
					iLocal_328 = 1;
				}
				else if (func_23(&uLocal_144) >= 10f && !iLocal_162) {
					iLocal_162 = 1;
					iLocal_328 = 1;
				}
			}
			break;

		case 5: break;
		}
	}
}

// Position - 0x2C01
void func_72(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	audio::_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_73(iParam3), 0);
}

// Position - 0x2C1A
int func_73(int iParam0) {
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

// Position - 0x2E0F
void func_74() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5) {
		if (entity::does_entity_exist(Local_329[iVar2 /*14*/].f_1) &&
			entity::does_entity_exist(Local_329[iVar2 /*14*/])) {
			if (func_79(Local_329[iVar2 /*14*/], 1, 0, 0, 0) ||
				ped::is_ped_in_vehicle(player::player_ped_id(), Local_329[iVar2 /*14*/].f_1, 1)) {
				func_77();
				func_76(iLocal_105);
				player::set_player_control(player::player_id(), 1, 0);
			}
			if (!ped::is_ped_injured(Local_329[iVar2 /*14*/])) {
				if (func_26(&vLocal_125[iVar2 /*3*/])) {
					if (func_23(&vLocal_125[iVar2 /*3*/]) > uLocal_150[iVar2]) {
						if (vehicle::is_vehicle_driveable(Local_329[iVar2 /*14*/].f_1, 0) &&
							ped::is_ped_in_vehicle(Local_329[iVar2 /*14*/], Local_329[iVar2 /*14*/].f_1, 0)) {
							iVar0 = gameplay::get_random_int_in_range(250, 500);
							iVar1 = gameplay::get_random_int_in_range(250, 500);
							ai::open_sequence_task(&iVar3);
							ai::task_vehicle_temp_action(0, Local_329[iVar2 /*14*/].f_1, 1, iVar0);
							ai::task_vehicle_temp_action(0, Local_329[iVar2 /*14*/].f_1, 31, iVar1);
							ai::close_sequence_task(iVar3);
							if (!ped::is_ped_injured(Local_329[iVar2 /*14*/])) {
								ai::task_perform_sequence(Local_329[iVar2 /*14*/], iVar3);
							}
							ai::clear_sequence_task(&iVar3);
						}
						func_33(&vLocal_125[iVar2 /*3*/]);
						uLocal_150[iVar2] = gameplay::get_random_float_in_range(0f, 3f);
					}
				}
				else {
					func_35(&vLocal_125[iVar2 /*3*/]);
				}
			}
			if (!entity::is_entity_dead(Local_329[iVar2 /*14*/], 0)) {
				if (entity::is_entity_touching_entity(player::player_ped_id(), Local_329[iVar2 /*14*/]) &&
					!ped::is_ped_ragdoll(Local_329[iVar2 /*14*/]) && !ai::is_ped_getting_up(Local_329[iVar2 /*14*/])) {
					Local_329[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_329[iVar2 /*14*/].f_11) {
					ai::open_sequence_task(&iVar3);
					ai::task_achieve_heading(0, Local_329[iVar2 /*14*/].f_9, 1000);
					ai::task_play_anim(0, Local_329[iVar2 /*14*/].f_12, Local_329[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0,
									   0, 0, 0);
					ai::close_sequence_task(iVar3);
					ai::task_perform_sequence(Local_329[iVar2 /*14*/], iVar3);
					ai::clear_sequence_task(&iVar3);
					Local_329[iVar2 /*14*/].f_11 = 0;
				}
				if (ped::is_ped_ragdoll(Local_329[iVar2 /*14*/]) || ai::is_ped_getting_up(Local_329[iVar2 /*14*/])) {
					if (!Local_329[iVar2 /*14*/].f_10 && (ped::is_ped_ragdoll(Local_329[iVar2 /*14*/]) ||
														  ai::is_ped_getting_up(Local_329[iVar2 /*14*/]))) {
						Local_329.f_101++;
					}
					Local_329[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_329[iVar2 /*14*/].f_10) {
					ai::open_sequence_task(&iVar3);
					ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 1000);
					ai::task_play_anim(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
					ai::task_achieve_heading(0, Local_329[iVar2 /*14*/].f_9, 1000);
					ai::task_play_anim(0, Local_329[iVar2 /*14*/].f_12, Local_329[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0,
									   0, 0, 0);
					ai::close_sequence_task(iVar3);
					ai::task_perform_sequence(Local_329[iVar2 /*14*/], iVar3);
					ai::clear_sequence_task(&iVar3);
					Local_329[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (entity::does_entity_exist(Local_329.f_83.f_1) && entity::does_entity_exist(Local_329.f_83)) {
		if (ped::is_ped_in_vehicle(player::player_ped_id(), Local_329.f_83.f_1, 0)) {
			iLocal_86 = Local_329.f_83.f_1;
		}
		if (func_79(Local_329.f_83, 1, 0, 0, 0)) {
			func_77();
			func_76(iLocal_105);
			player::set_player_control(player::player_id(), 1, 0);
		}
		if (!ped::is_ped_injured(Local_329.f_83)) {
			if (func_26(&uLocal_141)) {
				if (func_23(&uLocal_141) > fLocal_156) {
					if (vehicle::is_vehicle_driveable(Local_329.f_83.f_1, 0) &&
						ped::is_ped_in_vehicle(Local_329.f_83, Local_329.f_83.f_1, 0)) {
						iVar0 = gameplay::get_random_int_in_range(250, 500);
						iVar1 = gameplay::get_random_int_in_range(250, 500);
						ai::open_sequence_task(&iVar3);
						ai::task_vehicle_temp_action(0, Local_329.f_83.f_1, 1, iVar0);
						ai::task_vehicle_temp_action(0, Local_329.f_83.f_1, 31, iVar1);
						ai::close_sequence_task(iVar3);
						if (!ped::is_ped_injured(Local_329.f_83)) {
							ai::task_perform_sequence(Local_329.f_83, iVar3);
						}
						ai::clear_sequence_task(&iVar3);
					}
					func_33(&uLocal_141);
					fLocal_156 = gameplay::get_random_float_in_range(0f, 3f);
				}
			}
			else {
				func_35(&uLocal_141);
			}
		}
		if (!entity::is_entity_dead(Local_329.f_83, 0)) {
			if (entity::is_entity_touching_entity(player::player_ped_id(), Local_329.f_83) &&
				!ped::is_ped_ragdoll(Local_329.f_83) && !ai::is_ped_getting_up(Local_329.f_83)) {
				Local_329.f_83.f_11 = 1;
			}
			else if (Local_329.f_83.f_11) {
				ai::open_sequence_task(&iVar3);
				ai::task_achieve_heading(0, Local_329.f_83.f_9, 1000);
				ai::task_play_anim(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
				ai::close_sequence_task(iVar3);
				ai::task_perform_sequence(Local_329.f_83, iVar3);
				ai::clear_sequence_task(&iVar3);
				Local_329.f_83.f_11 = 0;
			}
			if (ped::is_ped_ragdoll(Local_329.f_83) || ai::is_ped_getting_up(Local_329.f_83)) {
				if (!Local_329.f_83.f_10) {
					Local_329.f_101++;
				}
				Local_329.f_83.f_10 = 1;
			}
			else if (Local_329.f_83.f_10) {
				ai::open_sequence_task(&iVar3);
				ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 1000);
				ai::task_play_anim(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::task_achieve_heading(0, Local_329.f_83.f_9, 1000);
				ai::task_play_anim(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::close_sequence_task(iVar3);
				ai::task_perform_sequence(Local_329.f_83, iVar3);
				ai::clear_sequence_task(&iVar3);
				iLocal_328 = 4;
				func_33(&uLocal_144);
				Local_329.f_83.f_10 = 0;
			}
		}
	}
}

// Position - 0x33AD
char *func_75() {
	int iVar0;
	char *sVar1;

	iVar0 = gameplay::get_random_int_in_range(0, 65535) % 2;
	switch (iVar0) {
	case 0: sVar1 = "gesture_what_hard"; break;

	case 1:
	default: sVar1 = "gesture_what_soft"; break;
	}
	return sVar1;
}

// Position - 0x33E9
void func_76(int iParam0) {
	if (iLocal_95 < 5) {
		if (iParam0 != 263) {
			if (iParam0 < 0 || iParam0 >= 263) {
			}
			func_130(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_84(&iLocal_96);
		iLocal_95 = 9;
	}
}

// Position - 0x342C
void func_77() {
	int iVar0[10];
	int iVar11;
	int iVar12;

	ped::get_ped_nearby_peds(player::player_ped_id(), &iVar0, -1);
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar0) {
		if (entity::does_entity_exist(iVar0[iVar12]) && !ped::is_ped_injured(iVar0[iVar12])) {
			if (weapon::is_ped_armed(player::player_ped_id(), 4)) {
				ai::task_smart_flee_ped(iVar0[iVar12], player::player_ped_id(), 100f, -1, 0, 0);
			}
			else {
				ai::open_sequence_task(&iVar11);
				ai::task_turn_ped_to_face_entity(0, player::player_ped_id(),
												 gameplay::get_random_int_in_range(300, 900));
				ai::task_combat_ped(0, player::player_ped_id(), 0, 0);
				ai::close_sequence_task(iVar11);
				ai::task_perform_sequence(iVar0[iVar12], iVar11);
				ai::clear_sequence_task(&iVar11);
			}
		}
		iVar12++;
	}
	switch (Global_101700.f_17975.f_1) {
	case 0: func_78(0); break;

	case 1: func_78(0); break;

	case 3: func_78(0); break;

	case 4: func_78(0); break;

	case 5: func_78(0); break;

	case 2: func_78(0); break;
	}
}

// Position - 0x353C
void func_78(int iParam0) {
	if (iParam0 == 2) {
	}
	else if (iParam0 == 0) {
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

// Position - 0x355D
bool func_79(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	vector3 vVar1;

	iVar0 = player::player_ped_id();
	if (Local_329.f_101 >= 3) {
		return true;
	}
	if (entity::does_entity_exist(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			vVar1 = {entity::get_entity_coords(iParam0, 1)};
			if (iParam1) {
				if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
					return true;
				}
			}
			if (iParam2) {
				if (ped::is_ped_in_combat(iParam0, iVar0)) {
					return true;
				}
			}
			if (iParam4) {
				if (entity::is_entity_touching_entity(iVar0, iParam0)) {
					return true;
				}
			}
			if (iParam3) {
				if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) ||
					player::is_player_targetting_entity(player::player_id(), iParam0)) {
					if (func_80(iParam0, 1) < 20f) {
						return true;
					}
				}
			}
			if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
				if (entity::has_entity_been_damaged_by_entity(ped::get_vehicle_ped_is_in(iParam0, 0), iVar0, 1)) {
					return true;
				}
			}
			if (ped::is_ped_fleeing(iParam0)) {
				return true;
			}
			if (weapon::is_ped_armed(iVar0, 4)) {
				if (ped::is_ped_shooting(iVar0)) {
					if (entity::is_entity_at_coord(iParam0, entity::get_entity_coords(iVar0, 1), 45f, 45f, 45f, 0, 1,
												   0)) {
						return true;
					}
				}
			}
			if (gameplay::is_bullet_in_area(vVar1, 4f, 1)) {
				return true;
			}
			if (gameplay::is_projectile_in_area(vVar1.x - 5f, vVar1.y - 5f, vVar1.z - 5f, vVar1.x + 5f, vVar1.y + 5f,
												vVar1.z + 5f, 0)) {
				return true;
			}
			if (ped::is_ped_being_jacked(iParam0)) {
				if (ped::get_peds_jacker(iParam0) == iVar0) {
					return true;
				}
			}
			if (fire::is_explosion_in_sphere(-1, vVar1, 25f) && !fire::is_explosion_in_sphere(11, vVar1, 25f) &&
				!fire::is_explosion_in_sphere(13, vVar1, 25f)) {
				return true;
			}
			entity::clear_entity_last_damage_entity(iParam0);
		}
		else if (iParam1) {
			return true;
		}
	}
	return false;
}

// Position - 0x3717
float func_80(int iParam0, int iParam1) {
	return func_81(player::get_player_ped(player::get_player_index()), iParam0, iParam1);
}

// Position - 0x372F
var func_81(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x378D
bool func_82(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_83(iParam0);
	if (iVar0 == -1) {
		return false;
	}
	if (!player::is_player_playing(player::get_player_index())) {
		return false;
	}
	if (func_89(0)) {
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

// Position - 0x3845
int func_83(int iParam0) {
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

// Position - 0x3880
void func_84(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_83(*iParam0);
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

// Position - 0x38D7
void func_85(int iParam0, int iParam1, char *sParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) < 1) {
	}
	if (streaming::is_player_switch_in_progress()) {
		if (*iParam0 != -1) {
			func_84(iParam0);
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

// Position - 0x3A02
bool func_86(int iParam0) {
	if (entity::does_entity_exist(iParam0) && ped::is_ped_in_vehicle(player::player_ped_id(), iParam0, 0)) {
		return false;
	}
	else {
		return true;
	}
	return true;
}

// Position - 0x3A2F
void func_87(char *sParam0, int iParam1, int iParam2) {
	ui::begin_text_command_display_help(sParam0);
	ui::add_text_component_integer(iParam1);
	ui::add_text_component_integer(iParam2);
	ui::end_text_command_display_help(0, 0, 1, -1);
}

// Position - 0x3A51
var func_88() { return G_DisableMessagesAndCalls2; }

// Position - 0x3A5D
bool func_89(int iParam0) {
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

// Position - 0x3AB7
bool func_90(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x3AF2
bool func_91() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x3B07
bool func_92() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x3B21
bool func_93(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0x3B4A
int func_94() { return 1; }

// Position - 0x3B53
void func_95(int *iParam0, int iParam1) { func_96(iParam0, iParam1); }

// Position - 0x3B63
void func_96(var *uParam0, var uParam1) { *uParam0 |= uParam1; }

// Position - 0x3B74
bool func_97() {
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

// Position - 0x3C7E
bool func_98(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_62();
				if (!func_64(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_105() || Global_100747 ||
						Global_25192 || func_104() || func_90(8, -1) || func_103() || func_102() || func_101() ||
						func_92() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_105() || Global_25192 ||
						func_104() || func_90(8, -1) || func_101() || func_103() || func_102() || func_92() ||
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_105() || Global_100747 ||
						Global_25192 || func_104() || func_90(8, -1) || func_101() || func_103() || func_102() ||
						func_92() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5 || LastDispatchedMessageOrCall != -1) {
						return false;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_105() || Global_100747 ||
						Global_25192 || func_104() || func_90(8, -1) || func_103() || func_102() || func_92() ||
						G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 4:
					if (func_105() || player::get_player_wanted_level(player::player_id()) > 0 || func_90(8, -1) ||
						func_92() || func_100() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 5:
					if (func_90(8, -1) || func_103() || func_102() || func_100() || func_99()) {
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
							player::is_player_climbing(player::player_id()) || func_105() || Global_25192 ||
							func_104() || func_90(8, -1) || func_102() || func_101() || func_92() ||
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
						player::is_player_being_arrested(player::player_id(), 1) || func_105() || func_102() ||
						Global_100747 || Global_25192 || func_104() || Global_36912 || func_90(8, -1) || func_101() ||
						func_100() || func_92() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_105() || Global_100747 ||
						Global_25192 || func_104() || func_90(8, -1) || func_101() || func_100() || func_103() ||
						func_102() || func_92()) {
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

// Position - 0x439C
var func_99() { return Global_91530.f_1; }

// Position - 0x43AA
int func_100() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x43D0
int func_101() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x43FA
bool func_102() { return Global_91543.f_304 > 0; }

// Position - 0x440B
bool func_103() { return Global_91543.f_303 > 0; }

// Position - 0x441C
var func_104() { return Global_1315233; }

// Position - 0x4428
int func_105() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x4444
bool func_106() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("stripperhome")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x445E
var func_107() { return Global_87656; }

// Position - 0x446A
int func_108(int iParam0) {
	switch (iParam0) {
	case 0: return 1;

	case 1:
		if (func_110(6) || func_110(7)) {
			return 1;
		}
		else {
			return func_108(3);
		}
		break;

	case 2: return 1;

	case 3:
		if (func_134(5)) {
			if (func_98(4)) {
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x44DC
bool func_109(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return false;
	}
	return ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19);
}

// Position - 0x4518
bool func_110(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x4526
void func_111() {
	int iVar0;
	char *sVar1;

	iVar0 = time::get_clock_hours();
	if (iVar0 <= iLocal_119 && iVar0 >= iLocal_120 || player::get_player_wanted_level(player::player_id()) != 0) {
		return;
	}
	if (bLocal_158) {
		func_121();
		func_120();
		switch (iLocal_124) {
		case 0:
			func_119(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
			func_119(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
			func_119(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
			func_119(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
			func_119(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
			func_118(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
			break;

		case 1:
			func_119(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
			func_119(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
			func_119(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
			func_119(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
			func_118(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
			break;

		case 3:
			func_119(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
			func_119(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
			func_119(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
			func_119(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
			func_119(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
			func_118(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
			break;

		case 4:
			func_119(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
			func_119(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
			func_119(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
			func_119(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
			func_118(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
			break;

		case 5:
			func_119(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
			func_119(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
			func_119(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
			func_119(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
			func_119(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
			func_118(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
			break;

		case 2:
			func_119(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
			func_119(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
			func_119(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
			func_119(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
			func_119(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
			func_118(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
			break;
		}
		switch (iLocal_124) {
		case 0: sVar1 = "CanyonCliffs_Start"; break;

		case 1: sVar1 = "RidgeRun_Start"; break;

		case 3: sVar1 = "ValleyTrail_Start"; break;

		case 4: sVar1 = "LakesideSplash_Start"; break;

		case 5: sVar1 = "EcoFriendly_Start"; break;

		case 2: sVar1 = "MinewardSpiral_Start"; break;
		}
		if (!gameplay::is_string_null_or_empty(sVar1)) {
			if (ai::does_scenario_group_exist(sVar1)) {
				if (!ai::is_scenario_group_enabled(sVar1)) {
					ai::set_scenario_group_enabled(sVar1, 1);
				}
			}
		}
	}
	func_112();
}

// Position - 0x4C09
void func_112() {
	int iVar0;
	int iVar1;
	int iVar2;
	char *sVar3;
	char *sVar4;
	int iVar5;

	if (fLocal_110 > 9f) {
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_329) {
			if (!func_117(Local_329[iVar5 /*14*/].f_2)) {
				Local_329[iVar5 /*14*/].f_1 = vehicle::create_vehicle(func_116(0), Local_329[iVar5 /*14*/].f_2,
																	  Local_329[iVar5 /*14*/].f_5, 1, 1);
				vehicle::set_vehicle_on_ground_properly(Local_329[iVar5 /*14*/].f_1, 1084227584);
				vehicle::set_vehicle_has_strong_axles(Local_329[iVar5 /*14*/].f_1, 1);
				if (func_117(Local_329[iVar5 /*14*/].f_6)) {
					Local_329[iVar5 /*14*/] =
						ped::create_ped_inside_vehicle(Local_329[iVar5 /*14*/].f_1, 4, func_115(), -1, 1, 1);
					vehicle::set_vehicle_engine_on(Local_329[iVar5 /*14*/].f_1, 1, 0, 0);
				}
				else {
					Local_329[iVar5 /*14*/] =
						ped::create_ped(4, func_115(), Local_329[iVar5 /*14*/].f_6, Local_329[iVar5 /*14*/].f_9, 1, 1);
					iVar1 = iVar5;
					switch (iVar1) {
					case 0:
					case 3: sVar4 = "idle_a"; break;

					case 1:
					case 4: sVar4 = "idle_b"; break;

					default: sVar4 = "idle_c"; break;
					}
					iVar2 = iVar5;
					switch (iVar2) {
					case 0:
					case 4: sVar3 = "amb@world_human_hang_out_street@male_a@idle_a"; break;

					case 1:
					case 3: sVar3 = "amb@world_human_hang_out_street@male_b@idle_a"; break;

					case 2:
					case 5: sVar3 = "amb@world_human_hang_out_street@male_c@idle_a"; break;
					}
					Local_329[iVar5 /*14*/].f_12 = sVar3;
					Local_329[iVar5 /*14*/].f_13 = sVar4;
					ai::open_sequence_task(&iVar0);
					ai::task_pause(0, gameplay::get_random_int_in_range(100, 500));
					ai::task_play_anim(0, sVar3, sVar4, 8f, -8f, -1, 8193, gameplay::get_random_float_in_range(0f, 1f),
									   0, 0, 0);
					ai::close_sequence_task(iVar0);
					ai::task_perform_sequence(Local_329[iVar5 /*14*/], iVar0);
					ai::clear_sequence_task(&iVar0);
				}
				ped::set_ped_helmet(Local_329[iVar5 /*14*/], 1);
				ped::give_ped_helmet(Local_329[iVar5 /*14*/], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_329.f_83.f_1 = vehicle::create_vehicle(func_116(1), Local_329.f_83.f_2, Local_329.f_83.f_5, 1, 1);
		vehicle::set_vehicle_on_ground_properly(Local_329.f_83.f_1, 1084227584);
		vehicle::set_vehicle_has_strong_axles(Local_329.f_83.f_1, 1);
		if (func_117(Local_329.f_83.f_6)) {
			Local_329.f_83 = ped::create_ped_inside_vehicle(Local_329.f_83.f_1, 4, func_115(), -1, 1, 1);
			vehicle::set_vehicle_engine_on(Local_329.f_83.f_1, 1, 0, 0);
		}
		else {
			Local_329.f_83 = ped::create_ped(4, func_115(), Local_329.f_83.f_6, Local_329.f_83.f_9, 1, 1);
			iVar1 = gameplay::get_random_int_in_range(0, 65535) % 3;
			switch (iVar1) {
			case 0: sVar4 = "idle_a"; break;

			case 1: sVar4 = "idle_b"; break;

			default: sVar4 = "idle_c"; break;
			}
			Local_329.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_329.f_83.f_13 = sVar4;
			ai::open_sequence_task(&iVar0);
			ai::task_stand_still(0, func_114(gameplay::get_random_int_in_range(0, 65535) % 1000, 1, 1000));
			ai::task_play_anim(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1,
							   gameplay::get_random_float_in_range(0f, 1f), 0, 0, 0);
			ai::close_sequence_task(iVar0);
			ai::task_perform_sequence(Local_329.f_83, iVar0);
			ai::clear_sequence_task(&iVar0);
		}
	}
	else if (fLocal_110 < 225f) {
	}
	iLocal_157 = Local_329.f_83;
	if (!entity::is_entity_dead(Local_329[0 /*14*/], 0)) {
		func_113(&uLocal_163, 1, Local_329[0 /*14*/], "MALE1", 0, 1);
	}
	if (!entity::is_entity_dead(Local_329[1 /*14*/], 0)) {
		func_113(&uLocal_163, 2, Local_329[1 /*14*/], "MALE2", 0, 1);
	}
	if (!entity::is_entity_dead(Local_329[2 /*14*/], 0)) {
		func_113(&uLocal_163, 3, Local_329[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_26(&uLocal_147)) {
		func_35(&uLocal_147);
	}
	else {
		func_33(&uLocal_147);
	}
}

// Position - 0x4FD8
void func_113(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x5073
int func_114(int iParam0, int iParam1, int iParam2) {
	if (iParam0 > iParam2) {
		return iParam2;
	}
	else if (iParam0 < iParam1) {
		return iParam1;
	}
	return iParam0;
}

// Position - 0x5098
int func_115() { return joaat("a_m_y_motox_01"); }

// Position - 0x50A5
int func_116(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_329.f_71) {
		if (streaming::is_model_a_vehicle(Local_329.f_71[iVar1])) {
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_124 == 1) {
		if (!iParam0) {
			iVar0--;
		}
	}
	iVar0 = gameplay::get_random_int_in_range(0, iVar0);
	if (Local_329.f_71[iVar0] == 0) {
		if (Local_329.f_71[0] == 0) {
			switch (iLocal_124) {
			case 0: return joaat("sanchez");

			case 1: return joaat("mesa");

			case 3: return joaat("sanchez");

			case 4: return joaat("sanchez");

			case 5: return joaat("mesa");

			case 2: return joaat("sanchez");
			}
		}
		else {
			return Local_329.f_71[0];
		}
	}
	return Local_329.f_71[iVar0];
}

// Position - 0x5197
bool func_117(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return true;
	}
	return false;
}

// Position - 0x51C1
void func_118(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7) {
	if (func_117(Local_329.f_83.f_2)) {
		Local_329.f_83.f_2 = {vParam0};
		Local_329.f_83.f_5 = fParam3;
		Local_329.f_83.f_6 = {vParam4};
		Local_329.f_83.f_9 = fParam7;
	}
}

// Position - 0x5205
void func_119(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7) {
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_329) {
		if (!bVar1 && func_117(Local_329[iVar0 /*14*/].f_2)) {
			Local_329[iVar0 /*14*/].f_2 = {vParam0};
			Local_329[iVar0 /*14*/].f_5 = fParam3;
			Local_329[iVar0 /*14*/].f_6 = {vParam4};
			Local_329[iVar0 /*14*/].f_9 = fParam7;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1) {
	}
}

// Position - 0x5280
void func_120() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_329) {
		Local_329[iVar0 /*14*/].f_2 = {0f, 0f, 0f};
		Local_329[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_329.f_83.f_2 = {0f, 0f, 0f};
	Local_329.f_83.f_5 = 0f;
}

// Position - 0x52CB
void func_121() {
	switch (iLocal_124) {
	case 0:
		pathfind::set_roads_in_angled_area(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1, 0, 1);
		gameplay::clear_area_of_vehicles(-227.43f, 3888.9f, 36.41f, 50f, 1, 0, 0, 0, 0);
		ai::set_scenario_type_enabled("WORLD_HUMAN_HIKER", 0);
		break;

	case 1:
		pathfind::set_roads_in_angled_area(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0,
										   0, 1);
		break;

	case 3:
		ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", 0);
		pathfind::set_roads_in_angled_area(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1, 0, 1);
		gameplay::clear_angled_area_of_vehicles(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0, 0, 0, 0,
												0);
		pathfind::set_roads_in_angled_area(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, 1, 0, 1);
		ai::set_scenario_type_enabled("WORLD_HUMAN_HIKER", 0);
		ai::set_scenario_type_enabled("WORLD_VEHICLE_EMPTY", 0);
		ai::set_scenario_type_enabled("WORLD_MOUNTAIN_LION_WANDER", 0);
		break;

	case 4:
		ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", 0);
		ai::set_scenario_type_enabled("WORLD_VEHICLE_EMPTY", 1);
		ai::set_scenario_type_enabled("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 1);
		break;

	case 5:
		ai::set_scenario_type_enabled("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
		pathfind::set_roads_in_angled_area(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, 1, 0, 1);
		gameplay::clear_angled_area_of_vehicles(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0, 0, 0,
												0, 0);
		break;

	case 2:
		ai::set_scenario_group_enabled("QUARRY", 0);
		pathfind::set_roads_in_angled_area(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1, 0,
										   1);
		gameplay::clear_angled_area_of_vehicles(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f,
												0, 0, 0, 0, 0);
		break;
	}
}

// Position - 0x54FF
int func_122() {
	return func_123(&Local_329.f_71) & func_123(&Local_329.f_77) & func_123(&Local_329.f_99) &
		   streaming::has_anim_dict_loaded("amb@world_human_hang_out_street@male_a@idle_a") &
		   streaming::has_anim_dict_loaded("amb@world_human_hang_out_street@male_b@idle_a") &
		   streaming::has_anim_dict_loaded("amb@world_human_hang_out_street@male_c@idle_a") &
		   streaming::has_anim_dict_loaded("amb@world_human_aa_smoke@male@idle_a") &
		   streaming::has_anim_dict_loaded("random@street_race") &
		   streaming::has_anim_dict_loaded("gestures@m@standing@casual");
}

// Position - 0x5574
int func_123(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] != 0) {
			if (!streaming::has_model_loaded((*uParam0)[iVar0])) {
				if (!streaming::has_model_loaded((*uParam0)[iVar0])) {
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x55BB
void func_124() {
	char cVar0[64];

	func_126(&Local_329.f_77, joaat("a_m_y_motox_01"));
	func_126(&Local_329.f_99, joaat("a_m_y_motox_01"));
	switch (iLocal_124) {
	case 0:
		func_126(&Local_329.f_71, joaat("sanchez"));
		func_126(&Local_329.f_71, joaat("blazer"));
		break;

	case 1:
		func_126(&Local_329.f_71, joaat("mesa"));
		func_126(&Local_329.f_71, joaat("bjxl"));
		func_126(&Local_329.f_71, joaat("patriot"));
		func_126(&Local_329.f_71, joaat("dubsta2"));
		func_126(&Local_329.f_71, joaat("bfinjection"));
		break;

	case 3:
		func_126(&Local_329.f_71, joaat("sanchez"));
		func_126(&Local_329.f_71, joaat("blazer"));
		break;

	case 4:
		func_126(&Local_329.f_71, joaat("sanchez"));
		func_126(&Local_329.f_71, joaat("blazer"));
		break;

	case 5:
		func_126(&Local_329.f_71, joaat("mesa"));
		func_126(&Local_329.f_71, joaat("bfinjection"));
		func_126(&Local_329.f_71, joaat("bjxl"));
		func_126(&Local_329.f_71, joaat("sadler"));
		func_126(&Local_329.f_71, joaat("rebel"));
		break;

	case 2:
		func_126(&Local_329.f_71, joaat("sanchez"));
		func_126(&Local_329.f_71, joaat("blazer"));
		break;
	}
	streaming::request_anim_dict("amb@world_human_hang_out_street@male_a@idle_a");
	streaming::request_anim_dict("amb@world_human_hang_out_street@male_b@idle_a");
	streaming::request_anim_dict("amb@world_human_hang_out_street@male_c@idle_a");
	streaming::request_anim_dict("amb@world_human_aa_smoke@male@idle_a");
	streaming::request_anim_dict("random@street_race");
	streaming::request_anim_dict("gestures@m@standing@casual");
	if (iLocal_124 == 0) {
		streaming::request_model(-253064476);
		streaming::request_model(1512136012);
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_124) {
	case 0: StringIntConCat(&cVar0, 1, 64); break;

	case 1: StringIntConCat(&cVar0, 2, 64); break;

	case 2: StringIntConCat(&cVar0, 6, 64); break;

	case 3: StringIntConCat(&cVar0, 3, 64); break;

	case 4: StringIntConCat(&cVar0, 4, 64); break;

	case 5: StringIntConCat(&cVar0, 5, 64); break;
	}
	StringConCat(&cVar0, "car", 64);
	vehicle::request_vehicle_recording(1, &cVar0);
	func_125(&Local_329.f_77);
	func_125(&Local_329.f_71);
	func_125(&Local_329.f_99);
}

// Position - 0x57FB
void func_125(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] != 0) {
			streaming::request_model((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x582B
int func_126(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] != 0) {
			if ((*uParam0)[iVar0] == iParam1) {
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_127(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0) {
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

// Position - 0x5888
int func_127(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] == 0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x58B4
void func_128(int *iParam0, int iParam1) { *iParam0 |= iParam1; }

// Position - 0x58C5
void func_129(int iParam0) { iLocal_95 = iParam0; }

// Position - 0x58D1
void func_130(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x59DA
int func_131() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x59F7
int func_132() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x5A1D
bool func_133(int iParam0, int iParam1) {
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

// Position - 0x5A6A
bool func_134(int iParam0) { return func_135(iParam0, Global_35781); }

// Position - 0x5A7B
int func_135(int iParam0, int iParam1) {
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

// Position - 0x5C5C
bool func_136(int *iParam0, int iParam1) { return (iParam0 & iParam1) != 0; }

// Position - 0x5C6B
void func_137() {
	StringCopy(&Local_53, "Offroad_Races", 64);
	gameplay::_0x6F2135B6129620C1(1);
	fLocal_117 = 6f + 4f;
	iLocal_99 = 4;
	func_95(&iLocal_94, 4194304);
	iLocal_97 = 20500;
	iLocal_86 = 0;
	iLocal_119 = 0;
	iLocal_120 = 25;
	iLocal_103 = 0;
	iLocal_124 = func_141(vLocal_90, &vLocal_121);
	iLocal_105 = func_140(iLocal_124);
	fLocal_102 = system::to_float(func_139(iLocal_105)) + 5f;
	if (func_133(0, iLocal_99)) {
		bLocal_158 = true;
	}
	else {
		func_76(iLocal_105);
		bLocal_158 = false;
	}
	if (iLocal_124 > Global_101700.f_17975.f_1) {
		if (func_109(func_140(iLocal_124))) {
		}
		iLocal_105 = 263;
		func_76(iLocal_105);
	}
	if (!func_109(func_140(iLocal_124)) && cam::is_screen_faded_in()) {
		if (iLocal_105 != 263) {
			if (func_138(iLocal_105, 1)) {
				iLocal_105 = 263;
			}
		}
		func_76(iLocal_105);
	}
	if (iLocal_124 == 2) {
		iLocal_119 = 20;
		iLocal_120 = 3;
	}
	if (iLocal_124 == 1 || iLocal_124 == 5) {
		sLocal_101 = "PLAY_OFFROAD_V";
	}
	else {
		sLocal_101 = "PLAY_OFFROAD_M";
	}
}

// Position - 0x5D66
bool func_138(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return false;
	}
	if (iParam1) {
		return gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 15);
	}
	return gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 0);
}

// Position - 0x5DBA
int func_139(int iParam0) {
	switch (iParam0) {
	case 91:
	case 92:
	case 110:
	case 111: return 20;

	case 66:
	case 67:
	case 76:
	case 107:
	case 108:
	case 109:
	case 96:
	case 97:
	case 98:
	case 99:
	case 100:
	case 101:
	case 102:
	case 103:
	case 129:
	case 130:
	case 131:
	case 133:
	case 137: return 100;

	case 125:
	case 126:
	case 127:
	case 128:
	case 132:
	case 134:
	case 135:
	case 136:
	case 68:
	case 69:
	case 95:
	case 70:
	case 71:
	case 73:
	case 74:
	case 75:
	case 72: return 209;
	}
	return -1;
}

// Position - 0x5ED2
int func_140(int iParam0) {
	switch (iParam0) {
	case 0: return 70;

	case 1: return 71;

	case 3: return 73;

	case 4: return 74;

	case 5: return 75;

	case 2: return 72;

	default:
	}
	return 263;
}

// Position - 0x5F26
int func_141(vector3 vParam0, var *uParam3) {
	int iVar0;
	vector3 vVar1[7];
	float fVar23;
	int iVar24;
	float fVar25;

	iVar0 = 0;
	vVar1[0 /*3*/] = {func_142(0)};
	vVar1[1 /*3*/] = {func_142(1)};
	vVar1[3 /*3*/] = {func_142(3)};
	vVar1[4 /*3*/] = {func_142(4)};
	vVar1[5 /*3*/] = {func_142(5)};
	vVar1[2 /*3*/] = {func_142(2)};
	vVar1[6 /*3*/] = {func_142(6)};
	fVar23 = system::vdist2(vParam0, vVar1[0 /*3*/]);
	iVar24 = 0;
	fVar25 = 0f;
	iVar24 = 1;
	while (iVar24 <= 7 - 1) {
		fVar25 = system::vdist2(vParam0, vVar1[iVar24 /*3*/]);
		if (fVar25 < fVar23) {
			iVar0 = iVar24;
			fVar23 = fVar25;
		}
		iVar24++;
	}
	*uParam3 = {vVar1[iVar0 /*3*/]};
	return iVar0;
}

// Position - 0x5FE5
Vector3 func_142(int iParam0) {
	if (iParam0 >= 7 || iParam0 <= -1) {
		return 0f, 0f, 0f;
	}
	switch (iParam0) {
	case 0: return -1939.483f, 4443.953f, 37.3474f;

	case 1: return -516.9256f, 2008.014f, 204.0998f;

	case 3: return -223.6755f, 4224.644f, 43.7304f;

	case 4: return 1606.578f, 3841.188f, 33.2931f;

	case 5: return 2037.664f, 2137.386f, 92.7095f;

	case 2: return 2996.776f, 2774.085f, 43.26f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x609E
void func_143(int *iParam0, int iParam1) { func_144(iParam0, iParam1); }

// Position - 0x60AE
void func_144(int *iParam0, var uParam1) { *iParam0 -= (*iParam0 & uParam1); }

// Position - 0x60C3
void func_145(int iParam0) {
	if (iParam0) {
		if (iLocal_105 != 263) {
			func_130(iLocal_105, 0, 0);
		}
	}
	func_84(&iLocal_96);
	if (func_136(iLocal_94, 2)) {
		func_5();
		func_143(&iLocal_94, 2);
		func_20(&iLocal_98);
	}
	iLocal_98 = -1;
	func_146();
	script::terminate_this_thread();
}

// Position - 0x610C
void func_146() {
	func_143(&iLocal_94, 4);
	func_147();
	if (script::is_thread_active(iLocal_52)) {
		player::force_cleanup_for_thread_with_this_id(iLocal_52, 3);
	}
	if (!gameplay::is_string_null(&Local_69)) {
		if (ui::get_length_of_literal_string(&Local_69) != 0) {
			script::set_script_as_no_longer_needed(&Local_69);
		}
	}
}

// Position - 0x6149
void func_147() {}
