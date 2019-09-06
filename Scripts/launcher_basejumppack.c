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
var uLocal_48 = 0;
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
var uLocal_86 = 0;
vector3 vLocal_87 = {0f, 0f, 0f};
vector3 vLocal_90 = {0f, 0f, 0f};
var uLocal_93 = 0;
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
var *uLocal_118 = NULL;
var uLocal_119 = 0;
var *uLocal_120 = NULL;
var uLocal_121 = 0;
int iLocal_122 = 0;
vector3 vLocal_123 = {0f, 0f, 0f};
var uLocal_126 = 0;
var uLocal_127 = 16;
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
int *iLocal_293 = NULL;
var uLocal_294 = 0;
var uLocal_295 = 0;
bool bLocal_296 = 0;
int iLocal_297 = 0;
var uLocal_298 = 0;
var uLocal_299 = 0;
var uLocal_300 = 0;
var uLocal_301 = 0;
var uLocal_302 = 0;
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
	bool bVar1;
	bool bVar2;
	int iVar3;

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
	vLocal_90 = {ScriptParam_0.f_1[0 /*3*/]};
	vLocal_90 = {vLocal_90};
	uLocal_86 = uLocal_86;
	Local_69 = {Local_69};
	bVar0 = false;
	if (player::has_force_cleanup_occurred(114)) {
		func_138(1);
	}
	iLocal_85 = player::get_player_ped(player::player_id());
	iLocal_95 = 0;
	func_136(&Global_100353, 0);
	func_130();
	gameplay::_0x6F2135B6129620C1(1);
	if (func_129(iLocal_94, 1)) {
		iLocal_100 = 10;
	}
	else {
		iLocal_100 = 9;
	}
	while (!Global_31554) {
		system::wait(0);
	}
	if (!func_129(iLocal_94, 8)) {
		if (!func_127(iLocal_100)) {
			if (func_126(0, iLocal_99)) {
				func_138(0);
			}
			else {
				func_138(1);
			}
		}
	}
	if (iLocal_99 != -1) {
		if (!func_126(0, iLocal_99)) {
			func_138(1);
		}
	}
	if (func_129(iLocal_94, 8388608)) {
		func_138(1);
	}
	if (func_129(iLocal_94, 524288) && func_125() && !func_124()) {
		func_138(1);
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(script::get_hash_of_this_script_name()) > 1 &&
		!func_129(iLocal_94, 4194304)) {
		if (iLocal_105 != 263) {
			func_123(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_122(10);
	}
	while (true) {
		if (Global_3) {
			func_138(1);
		}
		iLocal_85 = player::get_player_ped(player::player_id());
		if (func_129(iLocal_94, 1048576)) {
			if (entity::is_entity_dead(iLocal_85, 0)) {
				func_138(1);
			}
		}
		if (entity::does_entity_exist(iLocal_85) && !entity::is_entity_dead(iLocal_85, 0)) {
			vLocal_87 = {entity::get_entity_coords(iLocal_85, 1)};
			uLocal_93 = system::vdist2(vLocal_87, ScriptParam_0.f_1[0 /*3*/]);
			uLocal_93 = uLocal_93;
			vLocal_111 = {vLocal_87};
			vLocal_114 = {ScriptParam_0.f_1[0 /*3*/]};
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = system::vdist2(vLocal_111, vLocal_114);
			switch (iLocal_95) {
			case 0:
				if (func_127(iLocal_100) || func_129(iLocal_94, 16) && !func_129(iLocal_94, 524288)) {
					iLocal_98 = -1;
					func_118();
					func_122(1);
				}
				else {
					if (fLocal_110 > fLocal_102 * fLocal_102) {
						if (iLocal_105 != 263) {
							func_123(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_122(10);
					}
					if (vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2 > 500f) {
					}
				}
				break;

			case 1:
				if (func_116()) {
					iLocal_103 = iLocal_103;
					func_122(3);
				}
				else {
					func_118();
				}
				break;

			case 3:
				if (network::network_is_in_session()) {
					func_138(1);
					return;
				}
				if (!func_127(iLocal_100)) {
					if (!func_129(iLocal_94, 8)) {
						bVar1 = true;
						if (gameplay::are_strings_equal(&Global_91491.f_3, &Local_69)) {
							Local_69 = {Local_53};
							bVar1 = false;
						}
						if (bVar1) {
							func_138(0);
							break;
						}
					}
				}
				if (!func_129(iLocal_94, 4)) {
					func_113();
					func_112(&iLocal_94, 4);
				}
				if (fLocal_110 > fLocal_102 * fLocal_102 && !Global_91525) {
					if (iLocal_105 != 263) {
						if (func_111(6) && !func_110(iLocal_105)) {
						}
						else {
							func_123(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
					}
					func_122(10);
				}
				else {
					Local_69 = {Local_53};
					bVar2 = !func_129(iLocal_94, 64);
					func_136(&iLocal_94, 128);
					if (!func_109(3) && !Global_91525) {
						if (func_129(iLocal_94, 2097152)) {
							if ((!func_129(iLocal_94, 1) || !entity::does_entity_exist(func_108())) && !Global_91525) {
								func_122(10);
								break;
							}
						}
					}
					if (func_129(iLocal_94, 524288) && func_125() && !func_124()) {
						func_138(1);
					}
					if (func_107()) {
						func_138(1);
					}
					if (!func_99(6) || Global_100747 || func_98()) {
						bVar2 = false;
					}
					if (func_129(iLocal_94, 1)) {
						if (!func_97()) {
							func_95(&iLocal_94, 128);
							bVar2 = false;
						}
					}
					if (func_94(1)) {
						bVar2 = false;
					}
					if (Global_69702) {
						bVar2 = false;
					}
					if (func_93()) {
						bVar2 = false;
					}
					if (streaming::is_player_switch_in_progress()) {
						bVar2 = false;
					}
					if (func_92() || func_91(8, -1)) {
						bVar2 = false;
					}
					if (!player::can_player_start_mission(player::player_id())) {
						bVar2 = false;
					}
					if (!player::is_player_script_control_on(player::player_id())) {
						bVar2 = false;
					}
					if (func_90(0) || func_89()) {
						bVar2 = false;
					}
					if (bVar2) {
						if (!entity::is_entity_at_coord(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117,
														2f, 0, 1, iLocal_103)) {
							bVar2 = false;
						}
						if (!player::is_player_control_on(player::player_id())) {
							bVar2 = false;
						}
						if (bVar2) {
							controls::set_input_exclusive(0, 51);
							if (func_88(uLocal_86)) {
								if (iLocal_96 == -1) {
									func_87(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
									func_95(&iLocal_94, 2048);
								}
								else if (!func_129(iLocal_94, 2048) || !ui::is_help_message_being_displayed()) {
									func_86(&iLocal_96);
									func_136(&iLocal_94, 2048);
								}
								if (func_84(iLocal_96, 1)) {
									sLocal_101 = sLocal_101;
									func_86(&iLocal_96);
									func_136(&iLocal_94, 2048);
									script::request_script(&Local_69);
									player::set_player_control(player::player_id(), 0, 56);
									func_122(5);
								}
							}
							else {
								sLocal_101 = sLocal_101;
								func_86(&iLocal_96);
								func_136(&iLocal_94, 2048);
								script::request_script(&Local_69);
								player::set_player_control(player::player_id(), 0, 56);
								func_122(5);
							}
						}
					}
					if (!bVar2) {
						if (iLocal_96 != -1) {
							func_86(&iLocal_96);
							func_136(&iLocal_94, 2048);
							ui::clear_help(0);
						}
					}
				}
				func_81();
				break;

			case 5:
				controls::set_input_exclusive(0, 51);
				if (script::has_script_loaded(&Local_69)) {
					if (iLocal_96 != -1) {
						func_86(&iLocal_96);
					}
					iVar3 = 2;
					bVar0 = false;
					if (func_129(iLocal_94, 1)) {
						if (func_111(6) || func_111(7)) {
							iVar3 = 1;
							bVar0 = true;
						}
					}
					if (iVar3 != 1) {
						iVar3 = func_78(&iLocal_98, 6, iLocal_100, 0, 0);
					}
					if (iVar3 == 1) {
						if (player::is_player_playing(player::player_id())) {
							player::clear_player_wanted_level(player::player_id());
						}
						func_77();
						if (Global_36912) {
							func_68(player::player_ped_id());
						}
						player::set_player_control(player::player_id(), 1, 56);
						iLocal_52 = func_24();
						func_95(&iLocal_94, 2);
						func_122(6);
						func_20(&iLocal_107);
						if (iLocal_99 != -1) {
							func_19(iLocal_99);
							func_16(func_18(iLocal_99), 0, 0);
						}
					}
					else if (iVar3 == 2) {
						func_15();
					}
					else if (iVar3 == 0) {
						func_122(10);
					}
				}
				else {
					func_15();
				}
				break;

			case 6:
				if (func_129(Global_100353, 262144)) {
					func_136(&Global_100353, 262144);
					func_14();
				}
				if (func_129(iLocal_94, 2097152)) {
					if (!func_109(3) && !script::is_thread_active(iLocal_52)) {
						func_122(10);
					}
				}
				if (!script::is_thread_active(iLocal_52)) {
					stats::playstats_oddjob_done(system::round(func_10(&iLocal_107) * 1000f), iLocal_99, 0);
					func_9(&iLocal_107);
					func_136(&iLocal_94, 256);
					func_8();
					if (bVar0) {
						func_136(&iLocal_94, 2);
					}
					else if (func_129(iLocal_94, 2)) {
						if (func_129(Global_100353, 0)) {
							func_7(&iLocal_98);
							iLocal_98 = -1;
							func_136(&iLocal_94, 2);
						}
						else {
							func_7(&iLocal_98);
							iLocal_98 = -1;
							func_136(&iLocal_94, 2);
						}
					}
					func_122(0);
					if (iLocal_99 != -1) {
						if (func_129(Global_100353, 0)) {
							stats::playstats_mission_checkpoint(func_18(iLocal_99), 0, Global_91528, 0);
							func_6(func_18(iLocal_99), 0, Global_91528, 1, 0);
						}
						else {
							stats::playstats_mission_checkpoint(func_18(iLocal_99), 0, Global_91528, 0);
							func_6(func_18(iLocal_99), 0, Global_91528, 0, 0);
						}
					}
					func_5();
					func_136(&Global_100353, 0);
					if (func_129(iLocal_94, 16777216)) {
						func_138(1);
					}
					if (iLocal_99 != -1) {
						if (Global_101700.f_8044) {
							if (!func_126(0, iLocal_99)) {
								func_138(1);
							}
						}
					}
				}
				func_4();
				break;

			case 8: func_122(0); break;

			case 10: func_138(1); break;

			case 9:
				if (fLocal_110 > fLocal_102 * fLocal_102) {
					if (iLocal_105 != 263) {
						func_123(iLocal_105, 1, 0);
						iLocal_105 = 263;
					}
					func_122(10);
				}
				break;

			case 7:
				func_2();
				if (iLocal_105 != 263) {
					func_123(iLocal_105, 0, 0);
				}
				if (iLocal_96 != -1) {
					func_86(&iLocal_96);
				}
				if (!gameplay::is_string_null_or_empty(sLocal_101)) {
					if (func_1(sLocal_101)) {
						ui::clear_help(1);
					}
				}
				func_122(4);
				break;

			case 4:
				if (iLocal_104 % 150 == 0) {
					if (!ped::is_ped_injured(player::player_ped_id())) {
						if (iLocal_106 == 2) {
							if (iLocal_106 == 2) {
								if (func_127(iLocal_100) && func_126(0, iLocal_99)) {
									func_130();
									if (iLocal_105 != 263) {
										func_123(iLocal_105, 1, 0);
									}
									func_122(0);
								}
							}
						}
						else if (iLocal_106 == 0) {
							if (fLocal_110 > fLocal_102 * fLocal_102) {
								if (iLocal_105 != 263) {
									func_123(iLocal_105, 1, 0);
									iLocal_105 = 263;
								}
								func_122(10);
							}
						}
						else if (iLocal_106 == 1) {
							if (fLocal_110 > (80f + 5f) * (80f + 5f)) {
								func_130();
								if (iLocal_105 != 263) {
									func_123(iLocal_105, 1, 0);
								}
								func_122(0);
							}
						}
					}
					else {
						func_123(iLocal_105, 1, 0);
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

// Position - 0x9EB
bool func_1(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x9FE
void func_2() {
	func_3(&uLocal_118);
	func_3(&uLocal_120);
	streaming::remove_anim_dict("pickup_object");
	streaming::remove_anim_dict("oddjobs@basejump@ig_15");
}

// Position - 0xA20
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

// Position - 0xA50
void func_4() {}

// Position - 0xA58
void func_5() {}

// Position - 0xA60
void func_6(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (gameplay::is_string_null_or_empty(&Global_88894)) {
		return;
	}
	if (gameplay::compare_strings(sParam0, &Global_88894, 0, -1) != 0) {
		return;
	}
	stats::playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_86001);
	StringCopy(&Global_88894, "", 64);
}

// Position - 0xAA4
void func_7(int *iParam0) {
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

// Position - 0xAE1
void func_8() {
	vector3 vVar0[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		network::network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		network::_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

// Position - 0xB23
void func_9(int *iParam0) {
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

// Position - 0xB39
float func_10(var *uParam0) {
	if (func_13(uParam0)) {
		if (func_12(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_11(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0xB78
float func_11(bool bParam0) {
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

// Position - 0xBD0
bool func_12(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0xBE0
bool func_13(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0xBF0
int func_14() { return 1; }

// Position - 0xBF9
void func_15() {}

// Position - 0xC01
void func_16(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null_or_empty(&Global_88894)) {
		stats::playstats_mission_over(&Global_88894, 0, 0, 0, 1, 0);
		StringCopy(&Global_88894, "", 64);
	}
	StringCopy(&Global_88894, sParam0, 64);
	stats::playstats_mission_started(sParam0, iParam1, iParam2, func_17(0));
}

// Position - 0xC42
int func_17(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xC6D
char *func_18(int iParam0) {
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

// Position - 0xDAB
void func_19(int iParam0) {
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

// Position - 0xE02
void func_20(var *uParam0) {
	if (!func_13(uParam0)) {
		func_23(uParam0);
	}
	else {
		func_21(uParam0);
	}
}

// Position - 0xE23
void func_21(var *uParam0) { func_22(uParam0, 0f); }

// Position - 0xE32
void func_22(int *iParam0, float fParam1) {
	uParam0->f_1 = func_11(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0xE60
void func_23(var *uParam0) {
	if (!func_13(uParam0)) {
		func_21(uParam0);
	}
}

// Position - 0xE78
var func_24() {
	var uVar0;

	Global_101700.f_17926 = iLocal_122;
	switch (iLocal_122) {
	case 4:
	case 8: func_25(1); break;

	case 5:
	case 12:
	case 6: func_25(0); break;

	default: break;
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ped::set_ped_reset_flag(player::player_ped_id(), 177, 1);
	}
	uVar0 = system::start_new_script_with_args(&Local_53, &vLocal_123, 170, iLocal_97);
	script::set_script_as_no_longer_needed(&Local_53);
	return uVar0;
}

// Position - 0xEEF
void func_25(int iParam0) {
	var *uVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	int iVar16;

	vVar12 = {func_67(iLocal_122)};
	vVar12 = {func_66(system::cos(vVar12.z), system::sin(vVar12.z), gameplay::tan(vVar12.x))};
	streaming::new_load_scene_start(func_65(iLocal_122), vVar12, 5000f, 0);
	player::set_player_control(player::player_id(), 0, 256);
	ui::display_hud(0);
	ui::display_radar(0);
	func_63(1);
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
		ped::set_ped_reset_flag(player::player_ped_id(), 177, 1);
		if (entity::get_entity_speed(player::player_ped_id()) > 0.3f) {
			ai::task_stand_still(player::player_ped_id(), -1);
			while (!entity::is_entity_dead(player::player_ped_id(), 0) &&
				   entity::get_entity_speed(player::player_ped_id()) > 0.3f) {
				system::wait(0);
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					ped::set_ped_reset_flag(player::player_ped_id(), 177, 1);
				}
			}
		}
		if (entity::does_entity_exist(iLocal_297)) {
			vVar6 = {entity::get_entity_coords(player::player_ped_id(), 1) - entity::get_entity_coords(iLocal_297, 0)};
			vVar6.z = 0f;
			fVar15 = system::vmag(vVar6);
			ai::open_sequence_task(&iVar3);
			if (fVar15 > 0.8f) {
				vVar6 = {vVar6 * FtoV(0.78f / fVar15)};
				vVar9 = {entity::get_entity_coords(iLocal_297, 0) + vVar6};
				if (iLocal_122 == 12) {
					ai::task_follow_nav_mesh_to_coord(0, vVar9, 1f, 20000, 1048576000, 0,
													  func_62(vVar9, entity::get_entity_coords(iLocal_297, 0)));
				}
				else {
					ai::task_go_straight_to_coord(0, vVar9, 1f, -1,
												  func_62(vVar9, entity::get_entity_coords(iLocal_297, 0)), 1056964608);
				}
			}
			else if (fVar15 > 0.15f) {
				ai::task_achieve_heading(0,
										 func_62(entity::get_entity_coords(player::player_ped_id(), 1),
												 entity::get_entity_coords(iLocal_297, 0)),
										 0);
			}
			ai::task_play_anim(0, "pickup_object", "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
			ai::close_sequence_task(iVar3);
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				ai::clear_ped_tasks(player::player_ped_id());
				ped::set_ped_reset_flag(player::player_ped_id(), 177, 1);
				ai::task_perform_sequence(player::player_ped_id(), iVar3);
			}
			ai::clear_sequence_task(&iVar3);
			func_63(1);
		}
	}
	func_23(&iLocal_293);
	while (func_10(&iLocal_293) < 6f && !entity::is_entity_dead(player::player_ped_id(), 0) &&
		   !entity::is_entity_playing_anim(player::player_ped_id(), "pickup_object", "pickup_low", 3)) {
		ped::set_ped_reset_flag(player::player_ped_id(), 177, 1);
		system::wait(0);
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0) &&
		entity::is_entity_playing_anim(player::player_ped_id(), "pickup_object", "pickup_low", 3)) {
		entity::set_entity_anim_speed(player::player_ped_id(), "pickup_object", "pickup_low", 0.8f);
		iVar16 = 1;
	}
	while (func_10(&iLocal_293) < 6f && !entity::is_entity_dead(player::player_ped_id(), 0) &&
		   entity::get_entity_anim_current_time(player::player_ped_id(), "pickup_object", "pickup_low") < 0.22f) {
		ped::set_ped_reset_flag(player::player_ped_id(), 177, 1);
		if (!iVar16 && entity::is_entity_playing_anim(player::player_ped_id(), "pickup_object", "pickup_low", 3)) {
			entity::set_entity_anim_speed(player::player_ped_id(), "pickup_object", "pickup_low", 0.8f);
			iVar16 = 1;
		}
		system::wait(0);
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (!iVar16 && entity::is_entity_playing_anim(player::player_ped_id(), "pickup_object", "pickup_low", 3)) {
			entity::set_entity_anim_speed(player::player_ped_id(), "pickup_object", "pickup_low", 0.7f);
			iVar16 = 1;
		}
		ped::set_ped_reset_flag(player::player_ped_id(), 177, 1);
	}
	func_9(&iLocal_293);
	func_40();
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (func_35() == 0) {
			ped::set_ped_component_variation(player::player_ped_id(), 9, 5, 0, 0);
		}
		else if (func_35() == 1) {
			ped::set_ped_component_variation(player::player_ped_id(), 8, 1, 0, 0);
		}
		else if (func_35() == 2) {
			ped::set_ped_component_variation(player::player_ped_id(), 8, 3, 0, 0);
		}
	}
	if (iParam0) {
		if (!func_33(func_34(iLocal_122)) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
			ai::clear_ped_tasks(player::player_ped_id());
			ai::task_follow_nav_mesh_to_coord(player::player_ped_id(), func_34(iLocal_122), 1f, -1, 1048576000, 0,
											  1193033728);
		}
		if (entity::does_entity_exist(iLocal_297)) {
			object::delete_object(&iLocal_297);
		}
		iVar4 = cam::create_camera_with_params(26379945, func_32(iLocal_122), func_31(iLocal_122), func_30(iLocal_122),
											   1, 2);
		iVar5 = cam::create_camera_with_params(26379945, func_29(iLocal_122), func_28(iLocal_122), func_27(iLocal_122),
											   0, 2);
		cam::render_script_cams(1, 0, 3000, 1, 0, 0);
		cam::_0xF4C8CF9E353AFECA("HAND_SHAKE", 0.2f);
		func_23(&uVar0);
		while (func_10(&uVar0) < 1.5f) {
			system::wait(0);
		}
		cam::set_cam_active_with_interp(iVar5, iVar4, func_26(iLocal_122), 1, 1);
		func_21(&uVar0);
		while (func_10(&uVar0) < system::to_float(func_26(iLocal_122)) / 1000f + 0.3f) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				ped::set_ped_reset_flag(player::player_ped_id(), 177, 1);
			}
			system::wait(0);
		}
	}
	else {
		vLocal_123.z = iLocal_297;
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ped::set_ped_reset_flag(player::player_ped_id(), 177, 1);
	}
}

// Position - 0x13DB
int func_26(int iParam0) {
	switch (iParam0) {
	case 4:
	case 8: return 3500;
	}
	return 0;
}

// Position - 0x1400
float func_27(int iParam0) {
	switch (iParam0) {
	case 4: return 50f;

	case 8: return 50f;

	default:
	}
	return 60f;
}

// Position - 0x1430
Vector3 func_28(int iParam0) {
	switch (iParam0) {
	case 4: return 58.4197f, 0f, -47.9402f;

	case 8: return 47.6798f, 0f, -55.2921f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x146A
Vector3 func_29(int iParam0) {
	switch (iParam0) {
	case 4: return -119.8524f, -866.9928f, 42.3211f;

	case 8: return -846.0496f, 277.5203f, 92.9133f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x14AC
float func_30(int iParam0) {
	switch (iParam0) {
	case 4: return 50f;

	case 8: return 50f;

	default:
	}
	return 60f;
}

// Position - 0x14DC
Vector3 func_31(int iParam0) {
	switch (iParam0) {
	case 4: return -4.0151f, 0f, -47.5544f;

	case 8: return 2.5127f, 0f, -55.2921f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x1516
Vector3 func_32(int iParam0) {
	switch (iParam0) {
	case 4: return -119.8524f, -866.9928f, 42.3211f;

	case 8: return -846.0496f, 277.5203f, 92.9133f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x1558
int func_33(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return 1;
	}
	return 0;
}

// Position - 0x1582
Vector3 func_34(int iParam0) {
	switch (iParam0) {
	case 4: return -83.4741f, -835.4191f, 39.5575f;

	case 8: return -772.8513f, 312.9656f, 84.6996f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x15C4
int func_35() {
	func_36();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x15DD
void func_36() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_39(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_38(player::player_ped_id());
			if (func_37(iVar0) && (!func_111(14) || Global_100652)) {
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

// Position - 0x16DA
bool func_37(int iParam0) { return iParam0 < 3; }

// Position - 0x16E6
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

// Position - 0x1723
int func_39(int iParam0) {
	if (func_37(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x174D
void func_40() {
	vector3 vVar0;
	float *fVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	if (ped::is_ped_injured(player::player_ped_id())) {
		return;
	}
	player::set_player_control(player::player_id(), 0, 0);
	if (entity::does_entity_exist(iLocal_297)) {
		object::delete_object(&iLocal_297);
	}
	func_48(0, 0, 1);
	iLocal_297 = object::create_object_no_offset(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
	entity::set_entity_rotation(iLocal_297, func_46(iLocal_122), 2, 1);
	func_41(&vVar0, &fVar3);
	vVar4 = {0f, 0f, fVar3};
	iVar7 = ped::create_synchronized_scene(vVar0, vVar4, 2);
	entity::play_synchronized_entity_anim(iLocal_297, iVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f,
										  -1000f, 1, 1148846080);
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ai::clear_ped_tasks(player::player_ped_id());
		ai::task_synchronized_scene(player::player_ped_id(), iVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f,
									-1000f, 0, 0, 1148846080, 0);
	}
	audio::play_sound_frontend(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	iVar8 = cam::create_cam("DEFAULT_ANIMATED_CAMERA", 0);
	cam::play_synchronized_cam_anim(iVar8, iVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	cam::set_cam_active(iVar8, 1);
	cam::render_script_cams(1, 0, 3000, 1, 0, 0);
	while (ped::get_synchronized_scene_phase(iVar7) < 0.6f) {
		system::wait(0);
	}
	player::set_player_control(player::player_id(), 1, 0);
}

// Position - 0x187B
void func_41(var *uParam0, float *fParam1) {
	*uParam0 = {func_45(iLocal_122)};
	switch (iLocal_122) {
	case 5: *fParam1 = -1.8f; break;

	case 4:
		*fParam1 = func_44(func_62(entity::get_entity_coords(player::player_ped_id(), 1), *uParam0), -180f, 180f);
		if (*fParam1 > 0f) {
			*fParam1 = func_43(*fParam1, 111.6f);
		}
		else {
			*fParam1 = func_42(*fParam1, -104.04f);
		}
		break;

	case 8:
		*fParam1 = func_44(func_62(entity::get_entity_coords(player::player_ped_id(), 1), *uParam0), -180f, 180f);
		if (*fParam1 > 0f) {
			*fParam1 = func_43(*fParam1, 79.28f);
		}
		else {
			*fParam1 = func_42(*fParam1, -8f);
		}
		break;

	case 6:
		*fParam1 = func_44(func_62(entity::get_entity_coords(player::player_ped_id(), 1), *uParam0), -180f, 180f);
		break;

	case 12:
		*fParam1 = func_44(func_62(entity::get_entity_coords(player::player_ped_id(), 1), *uParam0), -180f, 180f);
		break;
	}
}

// Position - 0x19A3
float func_42(float fParam0, float fParam1) {
	if (fParam0 > fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x19BA
float func_43(float fParam0, float fParam1) {
	if (fParam0 > fParam1) {
		return fParam0;
	}
	return fParam1;
}

// Position - 0x19D1
float func_44(float fParam0, float fParam1, float fParam2) {
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

// Position - 0x1A13
Vector3 func_45(int iParam0) {
	switch (iParam0) {
	case 0: return -829.3729f, -1289.817f, 4.0005f;

	case 1: return 1208.2f, 174.3914f, 80.1245f;

	case 2: return 2463.793f, 1509.956f, 35.0349f;

	case 3: return -274.6549f, 6633.898f, 7.1166f;

	case 4: return -92.35f, -854.3f, 39.571f;

	case 5: return -120.92f, -976.05f, 295.49f;

	case 6: return -1237.2f, 4540.75f, 184.75f;

	case 7: return -742.5269f, 4493.315f, 75.1444f;

	case 8: return -801.3582f, 298.8532f, 84.949f;

	case 9: return -1367.595f, 4381.943f, 41.132f;

	case 10: return 2517.931f, 4971.752f, 44.7082f;

	case 11: return 1054.534f, -179.6562f, 70.3066f;

	case 12: return -767.415f, 4331.792f, 147.682f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x1B5D
Vector3 func_46(int iParam0) {
	switch (iParam0) {
	case 4: return 12f, 0f, 12.77f;

	case 5: return 10f, 0f, -134.58f;

	case 6: return 76f, 0f, -89.95f;

	case 8: return 12f, 0f, 89.56f;

	case 12: return 0f, 75f, -22f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x1BD3
Vector3 func_47(int iParam0) {
	switch (iParam0) {
	case 4: return -92.25f, -854.28f, 39.85f;

	case 5: return -120.92f, -976.05f, 295.49f;

	case 6: return -1237.2f, 4540.75f, 184.75f;

	case 8: return -801.57f, 298.85f, 85.25f;

	case 12: return -767.415f, 4331.792f, 147.682f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x1C5D
void func_48(int iParam0, int iParam1, int iParam2) {
	player::set_player_control(player::get_player_index(), 0, iParam0);
	if (!ped::is_ped_injured(player::player_ped_id())) {
		fire::stop_fire_in_range(entity::get_entity_coords(player::player_ped_id(), 1), 15f);
	}
	cutscene::_0xC61B86C9F61EB404(iParam1);
	func_60(0);
	func_50(1, 1, iParam2, 0);
	ui::display_radar(0);
	ui::display_hud(0);
	func_49(23, 1);
}

// Position - 0x1CB3
void func_49(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&Global_25434, iParam0);
	}
	else {
		gameplay::clear_bit(&Global_25434, iParam0);
	}
}

// Position - 0x1CD5
void func_50(int iParam0, int iParam1, var uParam2, int iParam3) {
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
			if (!func_58()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_57(1, iParam3, uParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		G_DisableMessagesAndCalls1 = 1;
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
		func_57(0, iParam3, uParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_55(player::player_id()) &&
				!func_52(player::player_id(), 0) && !func_51()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_55(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		G_DisableMessagesAndCalls1 = 0;
	}
}

// Position - 0x1DEE
bool func_51() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x1E0B
bool func_52(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_53(-1, 0) == 8;
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

// Position - 0x1E56
int func_53(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_54();
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

// Position - 0x1E97
var func_54() { return Global_1312735; }

// Position - 0x1EA3
int func_55(int iParam0) {
	if (func_52(iParam0, 0)) {
		return 1;
	}
	if (func_56()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x1EE5
bool func_56() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x1EF6
int func_57(int iParam0, int iParam1, var uParam2, int iParam3) {
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

// Position - 0x1F29
int func_58() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x1F50
void func_59(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 13);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 13);
	}
}

// Position - 0x1F73
void func_60(int iParam0) {
	if (Global_14604) {
		func_61(0, 0);
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
	if (!func_58()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x1FE3
void func_61(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_90(0)) {
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

// Position - 0x2057
float func_62(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5) {
	return gameplay::get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

// Position - 0x2071
void func_63(int iParam0) {
	if (iParam0) {
		func_64();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&G_SleepModeOffOn11, 16);
		}
		Global_14443.f_1 = 1;
		if (func_90(0)) {
			func_60(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x20D4
void func_64() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

// Position - 0x20FD
Vector3 func_65(int iParam0) {
	switch (iParam0) {
	case 0: return -1143.586f, -1859.747f, 208.3878f;

	case 1: return 877.5864f, -436.3322f, 536.9036f;

	case 2: return 2041.231f, 1978.98f, 585.9358f;

	case 3: return 405.2326f, 5705.887f, 697.2318f;

	case 4: return -103.8901f, -870.8046f, 298.7574f;

	case 5: return -118.2569f, -975.1133f, 297.3781f;

	case 6: return -1237.465f, 4526.661f, 181.7929f;

	case 7: return -357.7932f, 4107.914f, 314.8059f;

	case 8: return -809.6324f, 331.3331f, 233.2818f;

	case 9: return -1286.926f, 3660.203f, 1076.051f;

	case 10: return 1022.178f, 3975.738f, 1362.533f;

	case 11: return 1608.553f, -434.5186f, 1321.916f;

	case 12: return -756.3533f, 4341.521f, 143.8134f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x2247
Vector3 func_66(vector3 vParam0) {
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

// Position - 0x2286
Vector3 func_67(int iParam0) {
	switch (iParam0) {
	case 0: return -21.7965f, -0.0328f, 70.0438f;

	case 1: return -26.5541f, 0.0092f, -86.4416f;

	case 2: return -11.2825f, 0.0213f, 148.5283f;

	case 3: return -39.935f, 0f, 12.8174f;

	case 4: return 0.9749f, 0f, -5.2236f;

	case 5: return -12.889f, 0f, 1.6227f;

	case 6: return -48.5605f, 0f, 160.4909f;

	case 7: return -37.0509f, 0.0324f, 24.0288f;

	case 8: return -17.4118f, 0f, 117.7175f;

	case 9: return -15.4633f, 0.0328f, -5.1142f;

	case 10: return -20.9567f, 0f, 170.5743f;

	case 11: return 1.9344f, 0f, -55.2084f;

	case 12: return -46.0342f, 0f, 37.5935f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x23B0
void func_68(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0) {
		return;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return;
	}
	iVar0 = func_76(iParam0);
	if (iVar0 != -1) {
		iVar1 = Global_36715[iVar0 /*5*/];
		func_71(1, iVar1, 1);
		return;
	}
	iVar2 = func_70(iParam0);
	if (iVar2 == -1) {
		return;
	}
	func_69(iVar2);
}

// Position - 0x2409
void func_69(int iParam0) {
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

// Position - 0x248C
int func_70(int iParam0) {
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

// Position - 0x24BD
void func_71(int iParam0, int iParam1, int iParam2) { func_72(iParam0, iParam1, iParam2, 0, 0); }

// Position - 0x24D1
void func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
	if (func_74(iParam0, iParam1, iParam2)) {
		return;
	}
	iVar0 = func_73();
	if (iVar0 == -1) {
		return;
	}
	Global_36796[iVar0 /*5*/] = iParam0;
	Global_36796[iVar0 /*5*/].f_1 = iParam1;
	Global_36796[iVar0 /*5*/].f_2 = iParam2;
	Global_36796[iVar0 /*5*/].f_3 = iParam3;
	Global_36796[iVar0 /*5*/].f_4 = iParam4;
}

// Position - 0x2548
int func_73() {
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

// Position - 0x2579
bool func_74(int iParam0, int iParam1, int iParam2) {
	if (func_75(iParam0, iParam1, iParam2) == -1) {
		return false;
	}
	return true;
}

// Position - 0x2594
int func_75(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x25E0
int func_76(int iParam0) {
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

// Position - 0x2629
void func_77() {
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

// Position - 0x26A6
int func_78(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_80(0)) {
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
		if (!func_127(iParam2)) {
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
			func_79(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x27DD
void func_79(int *iParam0, int iParam1) {
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

// Position - 0x282C
bool func_80(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_127(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x284E
void func_81() {
	switch (iLocal_122) {
	case 4:
	case 5:
	case 6:
	case 8:
	case 12: func_82(); break;

	default: break;
	}
}

// Position - 0x2885
void func_82() {
	int iVar0;
	vector3 vVar1;

	iVar0 = player::get_players_last_vehicle();
	if (entity::does_entity_exist(iVar0)) {
		vLocal_123.y = iVar0;
	}
	if (entity::does_entity_exist(iLocal_297)) {
		vVar1 = {entity::get_entity_coords(iLocal_297, 1)};
		if (system::vdist2(vVar1, vLocal_90) > 25f) {
			func_83(0);
		}
	}
}

// Position - 0x28D2
void func_83(int iParam0) {
	if (iParam0 == 2) {
	}
	else if (iParam0 == 0) {
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

// Position - 0x28F3
bool func_84(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_85(iParam0);
	if (iVar0 == -1) {
		return false;
	}
	if (!player::is_player_playing(player::get_player_index())) {
		return false;
	}
	if (func_90(0)) {
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

// Position - 0x29AB
int func_85(int iParam0) {
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

// Position - 0x29E6
void func_86(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_85(*iParam0);
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

// Position - 0x2A3D
void func_87(int iParam0, int iParam1, char *sParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) < 1) {
	}
	if (streaming::is_player_switch_in_progress()) {
		if (*iParam0 != -1) {
			func_86(iParam0);
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

// Position - 0x2B68
bool func_88(var uParam0) { return true; }

// Position - 0x2B71
var func_89() { return G_DisableMessagesAndCalls2; }

// Position - 0x2B7D
bool func_90(int iParam0) {
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

// Position - 0x2BD7
var func_91(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x2C12
bool func_92() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x2C27
bool func_93() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x2C41
bool func_94(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0x2C6A
void func_95(int *iParam0, int iParam1) { func_96(iParam0, iParam1); }

// Position - 0x2C7A
void func_96(var *uParam0, var uParam1) { *uParam0 |= uParam1; }

// Position - 0x2C8B
int func_97() { return 1; }

// Position - 0x2C94
bool func_98() {
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

// Position - 0x2D9E
bool func_99(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_35();
				if (!func_37(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_106() || Global_100747 ||
						Global_25192 || func_105() || func_91(8, -1) || func_104() || func_103() || func_102() ||
						func_93() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_106() || Global_25192 ||
						func_105() || func_91(8, -1) || func_102() || func_104() || func_103() || func_93() ||
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_106() || Global_100747 ||
						Global_25192 || func_105() || func_91(8, -1) || func_102() || func_104() || func_103() ||
						func_93() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5 || LastDispatchedMessageOrCall != -1) {
						return false;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_106() || Global_100747 ||
						Global_25192 || func_105() || func_91(8, -1) || func_104() || func_103() || func_93() ||
						G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 4:
					if (func_106() || player::get_player_wanted_level(player::player_id()) > 0 || func_91(8, -1) ||
						func_93() || func_101() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 5:
					if (func_91(8, -1) || func_104() || func_103() || func_101() || func_100()) {
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
							player::is_player_climbing(player::player_id()) || func_106() || Global_25192 ||
							func_105() || func_91(8, -1) || func_103() || func_102() || func_93() ||
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
						player::is_player_being_arrested(player::player_id(), 1) || func_106() || func_103() ||
						Global_100747 || Global_25192 || func_105() || Global_36912 || func_91(8, -1) || func_102() ||
						func_101() || func_93() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_106() || Global_100747 ||
						Global_25192 || func_105() || func_91(8, -1) || func_102() || func_101() || func_104() ||
						func_103() || func_93()) {
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

// Position - 0x34BB
var func_100() { return Global_91530.f_1; }

// Position - 0x34C9
int func_101() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x34EF
int func_102() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x3519
bool func_103() { return Global_91543.f_304 > 0; }

// Position - 0x352A
bool func_104() { return Global_91543.f_303 > 0; }

// Position - 0x353B
var func_105() { return Global_1315233; }

// Position - 0x3547
int func_106() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x3563
bool func_107() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("stripperhome")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x357D
var func_108() { return Global_87656; }

// Position - 0x3589
int func_109(int iParam0) {
	switch (iParam0) {
	case 0: return 1;

	case 1:
		if (func_111(6) || func_111(7)) {
			return 1;
		}
		else {
			return func_109(3);
		}
		break;

	case 2: return 1;

	case 3:
		if (func_127(5)) {
			if (func_99(4)) {
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x35FB
int func_110(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0;
	}
	return ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19);
}

// Position - 0x3637
bool func_111(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x3645
void func_112(int *iParam0, int iParam1) { *iParam0 |= iParam1; }

// Position - 0x3656
void func_113() {
	vector3 vVar0;

	if (bLocal_296) {
		switch (iLocal_122) {
		case 4:
		case 5:
		case 8:
			iLocal_297 = object::create_object_no_offset(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
			entity::set_entity_rotation(iLocal_297, func_46(iLocal_122), 2, 1);
			entity::freeze_entity_position(iLocal_297, 1);
			break;

		case 6:
		case 12:
			iLocal_297 = object::create_object_no_offset(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
			entity::set_entity_rotation(iLocal_297, func_46(iLocal_122), 2, 1);
			object::place_object_on_ground_properly(iLocal_297);
			vVar0 = {func_115(iLocal_122)};
			if (!func_33(vVar0)) {
				uLocal_298 = vehicle::create_vehicle(joaat("bati"), vVar0, func_114(iLocal_122), 1, 1);
				uLocal_298 = uLocal_298;
			}
			break;

		default: break;
		}
	}
}

// Position - 0x371E
float func_114(int iParam0) {
	switch (iParam0) {
	case 6: return 165.0425f;

	default:
	}
	return 0f;
}

// Position - 0x373C
Vector3 func_115(int iParam0) {
	switch (iParam0) {
	case 6: return -1243.606f, 4543.016f, 185.9527f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x3766
bool func_116() {
	switch (iLocal_122) {
	case 5:
	case 4:
	case 8:
	case 6:
		return streaming::has_anim_dict_loaded("pickup_object") &
			   streaming::has_anim_dict_loaded("oddjobs@basejump@ig_15") & func_117(&uLocal_118) &
			   func_117(&uLocal_120);

	case 12:
		return streaming::has_anim_dict_loaded("pickup_object") &
			   streaming::has_anim_dict_loaded("oddjobs@basejump@ig_15") & func_117(&uLocal_118);

	default: break;
	}
	return func_117(&uLocal_118) & func_117(&uLocal_120);
}

// Position - 0x37FA
int func_117(var *uParam0) {
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

// Position - 0x3841
void func_118() {
	switch (iLocal_122) {
	case 5:
	case 8:
		func_120(&uLocal_118, joaat("p_parachute_s"));
		streaming::request_anim_dict("pickup_object");
		streaming::request_anim_dict("oddjobs@basejump@ig_15");
		break;

	case 4:
	case 6:
		func_120(&uLocal_118, joaat("p_parachute_s"));
		func_120(&uLocal_120, joaat("bati"));
		streaming::request_anim_dict("pickup_object");
		streaming::request_anim_dict("oddjobs@basejump@ig_15");
		break;

	case 12:
		func_120(&uLocal_118, joaat("p_parachute_s"));
		streaming::request_anim_dict("pickup_object");
		streaming::request_anim_dict("oddjobs@basejump@ig_15");
		break;

	default: break;
	}
	func_119(&uLocal_118);
	func_119(&uLocal_120);
}

// Position - 0x38E0
void func_119(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] != 0) {
			streaming::request_model((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x3910
int func_120(var *uParam0, int iParam1) {
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
	iVar1 = func_121(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0) {
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

// Position - 0x396D
int func_121(var *uParam0) {
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

// Position - 0x3999
void func_122(int iParam0) { iLocal_95 = iParam0; }

// Position - 0x39A5
void func_123(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x3AAE
int func_124() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x3ACB
int func_125() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x3AF1
bool func_126(int iParam0, int iParam1) {
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

// Position - 0x3B3E
bool func_127(int iParam0) { return func_128(iParam0, Global_35781); }

// Position - 0x3B4F
int func_128(int iParam0, int iParam1) {
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

// Position - 0x3D30
bool func_129(int *iParam0, int iParam1) { return (iParam0 & iParam1) != 0; }

// Position - 0x3D3F
void func_130() {
	if (entity::is_entity_dead(player::player_ped_id(), 0)) {
		func_95(&iLocal_94, 8388608);
		return;
	}
	StringCopy(&Local_53, "bj", 64);
	iLocal_122 = func_134(vLocal_90, 0);
	switch (iLocal_122) {
	case 4: iLocal_105 = 129; break;

	case 5: iLocal_105 = 130; break;

	case 6: iLocal_105 = 131; break;

	case 8: iLocal_105 = 133; break;

	case 12: iLocal_105 = 137; break;

	default: break;
	}
	if (iLocal_105 == 129) {
		if (func_133(19)) {
			func_132(iLocal_105);
		}
	}
	func_95(&iLocal_94, 4194304);
	iLocal_99 = 0;
	fLocal_102 = system::to_float(func_131(iLocal_105)) + 5f;
	fLocal_117 = 1.1f;
	sLocal_101 = "PLAY_BASEJUMP_G";
	if (iLocal_105 != 263) {
		if (!func_126(0, iLocal_99)) {
			bLocal_296 = false;
			func_132(iLocal_105);
		}
		else {
			bLocal_296 = true;
		}
	}
	else {
		bLocal_296 = false;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("bj")) > 0) {
		func_95(&iLocal_94, 8);
	}
	else {
		func_136(&iLocal_94, 8);
	}
	if (func_111(12)) {
		func_95(&iLocal_94, 8);
	}
	iLocal_97 = 20500;
}

// Position - 0x3E5D
int func_131(int iParam0) {
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

// Position - 0x3F75
void func_132(int iParam0) {
	if (iLocal_95 < 5) {
		if (iParam0 != 263) {
			if (iParam0 < 0 || iParam0 >= 263) {
			}
			func_123(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_86(&iLocal_96);
		iLocal_95 = 9;
	}
}

// Position - 0x3FB8
bool func_133(int iParam0) { return Global_100787[iParam0 /*10*/].f_1; }

// Position - 0x3FCA
int func_134(vector3 vParam0, int iParam3) {
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13) {
		if (iParam3 == func_135(iVar3)) {
			fVar1 = system::vdist2(vParam0, func_45(iVar3));
			if (fVar0 > fVar1) {
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

// Position - 0x401A
int func_135(int iParam0) {
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 7:
	case 9:
	case 10:
	case 11: return 1;
	}
	return 0;
}

// Position - 0x4061
void func_136(int *iParam0, int iParam1) { func_137(iParam0, iParam1); }

// Position - 0x4071
void func_137(int *iParam0, var uParam1) { *iParam0 -= (*iParam0 & uParam1); }

// Position - 0x4086
void func_138(int iParam0) {
	if (iParam0) {
		if (iLocal_105 != 263) {
			func_123(iLocal_105, 0, 0);
		}
	}
	func_86(&iLocal_96);
	if (func_129(iLocal_94, 2)) {
		func_5();
		func_136(&iLocal_94, 2);
		func_7(&iLocal_98);
	}
	iLocal_98 = -1;
	func_139();
	script::terminate_this_thread();
}

// Position - 0x40CF
void func_139() {
	func_136(&iLocal_94, 4);
	func_140();
	if (script::is_thread_active(iLocal_52)) {
		player::force_cleanup_for_thread_with_this_id(iLocal_52, 3);
	}
	if (!gameplay::is_string_null(&Local_69)) {
		if (ui::get_length_of_literal_string(&Local_69) != 0) {
			script::set_script_as_no_longer_needed(&Local_69);
		}
	}
}

// Position - 0x410C
void func_140() {}
