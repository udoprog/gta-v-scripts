#pragma region Local Var //{
int iLocal_0 = 0;
var uLocal_1 = 0;
var uLocal_2 = 0;
int iLocal_3 = 0;
int iLocal_4 = 0;
int iLocal_5 = 0;
int iLocal_6 = 0;
int iLocal_7 = 0;
int iLocal_8 = 0;
int iLocal_9 = 0;
int iLocal_10 = 0;
int iLocal_11 = 0;
int iLocal_12 = 0;
var uLocal_13 = 0;
var uLocal_14 = 0;
float fLocal_15 = 0f;
var uLocal_16 = 0;
var uLocal_17 = 0;
int iLocal_18 = 0;
var uLocal_19 = 0;
var uLocal_20 = 0;
var uLocal_21 = 0;
char *sLocal_22 = NULL;
float fLocal_23 = 0f;
var uLocal_24 = 0;
var uLocal_25 = 0;
var uLocal_26 = 0;
float fLocal_27 = 0f;
float fLocal_28 = 0f;
var uLocal_29 = 0;
var uLocal_30 = 0;
var uLocal_31 = 0;
float fLocal_32 = 0f;
float fLocal_33 = 0f;
float fLocal_34 = 0f;
var uLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
var uLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
vector3 vLocal_44 = {0f, 0f, 0f};
float fLocal_47 = 0f;
int iLocal_48 = 0;
int iLocal_49 = 0;
int iLocal_50 = 0;
int iLocal_51 = 0;
int iLocal_52[2] = {0, 0};
vector3 vLocal_55[2] = {{0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_62[2] = {0f, 0f};
int iLocal_65 = 0;
vector3 vLocal_66 = {0f, 0f, 0f};
float fLocal_69 = 0f;
int iLocal_70 = 0;
int iLocal_71 = 0;
int iLocal_72 = 0;
vector3 vLocal_73 = {0f, 0f, 0f};
int iLocal_76 = 0;
int iLocal_77 = 0;
struct<6> Local_78 = {
	0, 0, 0, 0, 0, 0
};
struct<6> Local_84 = {
	0, 0, 0, 0, 0, 0
};
bool bLocal_90 = 0;
int iLocal_91 = 0;
int iLocal_92 = 0;
vector3 vLocal_93 = {0f, 0f, 0f};
vector3 vLocal_96 = {0f, 0f, 0f};
vector3 vLocal_99 = {0f, 0f, 0f};
int iLocal_102 = 0;
int iLocal_103 = 0;
bool bLocal_104 = 0;
int iLocal_105 = 0;
int iLocal_106 = 0;
int iLocal_107 = 0;
int iLocal_108 = 0;
int iLocal_109 = 0;
int iLocal_110 = 0;
bool bLocal_111 = 0;
int iLocal_112 = 0;
int iLocal_113 = 0;
int iLocal_114 = 0;
int iLocal_115 = 0;
var uLocal_116 = 0;
int iLocal_117 = 0;
int iLocal_118 = 0;
int iLocal_119 = 0;
int iLocal_120 = 0;
int iLocal_121[2] = {0, 0};
int iLocal_124 = 0;
int iLocal_125 = 0;
int iLocal_126 = 0;
int iLocal_127 = 0;
int iLocal_128 = 0;
int iLocal_129 = 0;
int iLocal_130 = 0;
var uLocal_131 = 0;
int iLocal_132 = 0;
bool bLocal_133 = 0;
int iLocal_134 = 0;
int iLocal_135 = 0;
int iLocal_136 = 0;
int iLocal_137 = 0;
bool bLocal_138 = 0;
var uLocal_139 = 0;
int iLocal_140 = 0;
int iLocal_141 = 0;
int iLocal_142 = 0;
int iLocal_143 = 0;
int iLocal_144 = 0;
int iLocal_145 = 0;
int iLocal_146 = 0;
int iLocal_147 = 0;
int iLocal_148 = 0;
int iLocal_149 = 0;
int iLocal_150 = 0;
int iLocal_151 = 0;
int iLocal_152 = 0;
int iLocal_153 = 0;
var *uLocal_154 = NULL;
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
	int iVar0;

	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	StringCopy(&Local_78, "", 24);
	if (player::has_force_cleanup_occurred(11)) {
		if (!ped::is_ped_injured(iLocal_72)) {
			if (ped::is_ped_in_group(iLocal_72)) {
				ped::remove_ped_from_group(iLocal_72);
			}
		}
		func_204();
	}
	if (func_162(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0)) {
		func_159(-1);
	}
	else {
		script::terminate_this_thread();
	}
	while (true) {
		system::wait(0);
		if (brain::is_world_point_within_brain_activation_range() || iLocal_108 || iLocal_137) {
			if (!func_158()) {
				if (func_157()) {
					func_204();
				}
			}
			unk1::_0x208784099002BC30("RE_RA", 0);
			switch (iLocal_48) {
			case 0:
				if (func_145()) {
					func_204();
				}
				if (!iLocal_103) {
					func_144();
				}
				else {
					func_143();
				}
				if (bLocal_104) {
					iLocal_102 = 1;
					iLocal_48 = 1;
				}
				break;

			case 1:
				if (player::is_player_playing(player::player_id())) {
					switch (iLocal_49) {
					case 0:
						func_133();
						iLocal_49 = 1;
						break;

					case 1:
						if (!func_132()) {
							if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_73, 75f, 75f, 75f, 0, 1,
														   0) &&
									!entity::is_entity_occluded(iLocal_72) ||
								entity::is_entity_at_entity(player::player_ped_id(), iLocal_72, 15f, 15f, 15f, 0, 1,
															0)) {
								if (!func_158()) {
									ai::task_look_at_entity(player::player_ped_id(), iLocal_72, -1, 0, 2);
									player::set_wanted_level_multiplier(0.1f);
									func_131();
									func_122(1);
								}
								bLocal_111 = true;
							}
							if (!ped::is_ped_injured(iLocal_52[0]) && !ped::is_ped_injured(iLocal_52[1])) {
								if (entity::has_entity_been_damaged_by_entity(iLocal_52[0], player::player_ped_id(),
																			  1) ||
									entity::has_entity_been_damaged_by_entity(iLocal_52[1], player::player_ped_id(),
																			  1)) {
									func_131();
									bLocal_111 = true;
								}
							}
							if (bLocal_111) {
								func_116();
							}
							if (!ped::is_ped_injured(iLocal_72) && vehicle::is_vehicle_driveable(iLocal_65, 0)) {
								if (ped::is_ped_in_vehicle(iLocal_72, iLocal_65, 0)) {
									iLocal_137 = 1;
								}
							}
							if (bLocal_138) {
								if (vehicle::is_vehicle_driveable(iLocal_65, 0)) {
									if (!entity::is_entity_at_entity(player::player_ped_id(), iLocal_65, 150f, 150f,
																	 150f, 0, 1, 0)) {
										iLocal_49 = 9;
									}
								}
							}
						}
						if (func_115()) {
							func_131();
							iLocal_49 = 3;
						}
						else if (func_132()) {
							func_131();
							func_113();
							iLocal_49 = 2;
						}
						break;

					case 2:
						switch (iLocal_132) {
						case 0: iLocal_49 = 3; break;

						case 1: iLocal_49 = 3; break;

						case 3: iLocal_49 = 3; break;

						case 4: iLocal_49 = 3; break;

						case 5:
							if (weapon::is_ped_armed(player::player_ped_id(), 4)) {
								iLocal_140 = 1;
								iLocal_51 = 9;
							}
							else {
								iLocal_51 = 13;
							}
							iLocal_49 = 1;
							break;
						}
						if (func_132()) {
							switch (iLocal_50) {
							case 2: func_112(); break;

							case 4: func_111(); break;

							case 5: func_110(); break;
							}
						}
						break;

					case 3:
						func_107();
						ai::task_clear_look_at(player::player_ped_id());
						if (!ped::is_ped_injured(iLocal_72)) {
							audio::play_pain(iLocal_72, 3, 0f, 0);
							if (!ped::is_ped_in_any_vehicle(iLocal_72, 0)) {
								if (!iLocal_117) {
									if (entity::is_entity_playing_anim(iLocal_72, "random@homelandsecurity",
																	   "idle_girl", 3) &&
										!ped::is_ped_ragdoll(iLocal_72)) {
										ped::_set_ped_ragdoll_blocking_flags(iLocal_72, 16);
										ai::open_sequence_task(&iLocal_136);
										ai::task_play_anim(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f,
														   -8f, -1, 8192, 0, 0, 0, 0);
										ai::task_play_anim(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1,
														   8321, 0, 0, 0, 0);
										ai::close_sequence_task(iLocal_136);
										ai::task_perform_sequence(iLocal_72, iLocal_136);
										ai::clear_sequence_task(&iLocal_136);
										iLocal_117 = 1;
									}
									else {
										ai::task_cower(iLocal_72, -1);
										iLocal_117 = 1;
									}
								}
								else if (!entity::is_entity_playing_anim(iLocal_72, "random@homelandsecurity",
																		 "idle_girl", 3) &&
										 !entity::is_entity_playing_anim(iLocal_72, "random@homelandsecurity",
																		 "idle_to_knees_girl", 1) &&
										 !entity::is_entity_playing_anim(iLocal_72, "random@homelandsecurity",
																		 "knees_loop_girl", 1) &&
										 ai::get_script_task_status(iLocal_72, 474215631) != 0 &&
										 ai::get_script_task_status(iLocal_72, 474215631) != 1) {
									iLocal_117 = 0;
								}
							}
							else if (vehicle::is_vehicle_driveable(iLocal_65, 0)) {
								if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_65, 0)) {
									if (ui::does_blip_exist(iLocal_120)) {
										ui::remove_blip(&iLocal_120);
									}
								}
							}
						}
						else {
							func_106();
						}
						if (!func_105()) {
							if (iLocal_129 < gameplay::get_game_timer()) {
								if (func_104()) {
									if (!ped::is_ped_injured(iLocal_52[0])) {
										func_103(&uLocal_154, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
									}
								}
								else if (!ped::is_ped_injured(iLocal_52[1])) {
									func_103(&uLocal_154, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
								}
								iLocal_129 = gameplay::get_game_timer() + gameplay::get_random_int_in_range(4500, 5000);
							}
						}
						if (ped::is_ped_injured(iLocal_52[0])) {
							if (ui::does_blip_exist(iLocal_121[0])) {
								ui::remove_blip(&iLocal_121[0]);
							}
							func_102(&uLocal_154, 5);
						}
						else if (ped::_0x6CD5A433374D4CFB(iLocal_52[0], player::player_ped_id()) ||
								 entity::is_entity_at_entity(iLocal_52[0], player::player_ped_id(), 20f, 20f, 20f, 0, 1,
															 0)) {
						}
						else if (ui::does_blip_exist(iLocal_121[0])) {
							ui::remove_blip(&iLocal_121[0]);
						}
						if (ped::is_ped_injured(iLocal_52[1])) {
							if (ui::does_blip_exist(iLocal_121[1])) {
								ui::remove_blip(&iLocal_121[1]);
							}
							func_102(&uLocal_154, 4);
						}
						else if (ped::_0x6CD5A433374D4CFB(iLocal_52[1], player::player_ped_id()) ||
								 entity::is_entity_at_entity(iLocal_52[1], player::player_ped_id(), 20f, 20f, 20f, 0, 1,
															 0)) {
						}
						else if (ui::does_blip_exist(iLocal_121[1])) {
							ui::remove_blip(&iLocal_121[1]);
						}
						if (entity::does_entity_exist(iLocal_52[0]) && entity::does_entity_exist(iLocal_52[1])) {
							if (weapon::has_entity_been_damaged_by_weapon(iLocal_52[0], joaat("weapon_stungun"), 0) &&
									weapon::has_entity_been_damaged_by_weapon(iLocal_52[1], joaat("weapon_stungun"),
																			  0) ||
								ped::is_ped_dead_or_dying(iLocal_52[0], 1) &&
									ped::is_ped_dead_or_dying(iLocal_52[1], 1) ||
								func_101()) {
								if (ui::does_blip_exist(iLocal_121[0])) {
									ui::remove_blip(&iLocal_121[0]);
								}
								if (ui::does_blip_exist(iLocal_121[1])) {
									ui::remove_blip(&iLocal_121[1]);
								}
								if (!ped::is_ped_injured(iLocal_72)) {
									if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_72, 15f, 15f, 15f,
																	0, 1, 0)) {
										if (!func_105()) {
											func_103(&uLocal_154, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
											bLocal_90 = false;
											iLocal_108 = 1;
											ped::_reset_ped_ragdoll_blocking_flags(iLocal_72, 16);
											entity::clear_entity_last_damage_entity(iLocal_72);
											iLocal_49 = 4;
										}
									}
								}
							}
						}
						break;

					case 4:
						if (!bLocal_90) {
							if (!ped::is_ped_injured(iLocal_72)) {
								if (entity::is_entity_playing_anim(iLocal_72, "random@homelandsecurity",
																   "idle_to_knees_girl", 1) ||
									entity::is_entity_playing_anim(iLocal_72, "random@homelandsecurity",
																   "knees_loop_girl", 1))
									&&!ped::is_ped_ragdoll(iLocal_72) {
										ai::task_play_anim(iLocal_72, "random@homelandsecurity", "knees_to_stand_girl",
														   4f, -4f, -1, 0, 0.3f, 0, 0, 0);
									}
								else {
									ai::clear_ped_tasks(iLocal_72);
								}
								ped::set_ped_group_member_passenger_index(iLocal_72, 0);
								ped::set_ped_as_group_member(iLocal_72, func_100());
								ped::set_ped_never_leaves_group(iLocal_72, 1);
								func_99();
								bLocal_90 = true;
							}
						}
						if (!ped::is_ped_injured(iLocal_72)) {
							if (entity::is_entity_playing_anim(iLocal_72, "random@homelandsecurity",
															   "knees_to_stand_girl", 3)) {
								if (entity::get_entity_anim_current_time(iLocal_72, "random@homelandsecurity",
																		 "knees_to_stand_girl") > 0.8f) {
									ai::clear_ped_tasks(iLocal_72);
								}
							}
						}
						if (!iLocal_92) {
							if (!func_105()) {
								if (func_103(&uLocal_154, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0)) {
									iLocal_92 = 1;
								}
							}
						}
						else if (!iLocal_91) {
							if (!func_105()) {
								if (func_98() == 0) {
									func_103(&uLocal_154, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
								}
								else if (func_98() == 1) {
									func_103(&uLocal_154, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
								}
								iLocal_91 = 1;
							}
						}
						if (bLocal_90) {
							if (!ped::is_ped_injured(iLocal_72)) {
								if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_72, 8f, 8f, 8f, 0, 1,
																0) ||
									ped::is_ped_in_any_taxi(player::player_ped_id())) {
									if (ui::does_blip_exist(iLocal_120)) {
										ui::remove_blip(&iLocal_120);
									}
								}
								else if (!ui::does_blip_exist(iLocal_120)) {
									iLocal_120 = func_96(iLocal_72, 0, 145);
								}
							}
						}
						if (!ped::is_ped_injured(iLocal_52[0])) {
							if (ped::_0x6CD5A433374D4CFB(iLocal_52[0], player::player_ped_id())) {
								if (player::get_player_wanted_level(player::player_id()) < 2) {
								}
							}
						}
						if (!ped::is_ped_injured(iLocal_52[1])) {
							if (ped::_0x6CD5A433374D4CFB(iLocal_52[1], player::player_ped_id())) {
								if (player::get_player_wanted_level(player::player_id()) < 2) {
								}
							}
						}
						if (iLocal_91 && func_95()) {
							if (!func_105()) {
								func_93();
								system::wait(0);
								func_103(&uLocal_154, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
								entity::set_ped_as_no_longer_needed(&iLocal_52[0]);
								entity::set_ped_as_no_longer_needed(&iLocal_52[1]);
								if (!ped::is_ped_injured(iLocal_72)) {
									if (ped::is_ped_in_group(iLocal_72)) {
										iVar0 = 0;
										while (iVar0 < iLocal_52) {
											if (entity::does_entity_exist(iLocal_52[iVar0])) {
												entity::set_ped_as_no_longer_needed(&iLocal_52[iVar0]);
											}
											iVar0++;
										}
										player::set_wanted_level_multiplier(1f);
										iLocal_49 = 5;
									}
								}
							}
						}
						break;

					case 5:
						func_87();
						func_82();
						func_81();
						func_78();
						func_77();
						if (func_76(vLocal_93)) {
							func_62(0);
							func_93();
							system::wait(0);
							func_103(&uLocal_154, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
						}
						if (func_60()) {
							func_62(0);
							func_93();
							system::wait(0);
							func_103(&uLocal_154, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
						}
						if (!ped::is_ped_injured(iLocal_72)) {
							if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_93, Global_22, 1, 1, 0) &&
								entity::is_entity_at_entity(iLocal_72, player::player_ped_id(), 8f, 8f, 8f, 0, 1, 0)) {
								if (ped::is_ped_in_group(iLocal_72)) {
									if (ui::does_blip_exist(iLocal_120)) {
										ui::remove_blip(&iLocal_120);
									}
									if (ui::does_blip_exist(iLocal_124)) {
										ui::remove_blip(&iLocal_124);
									}
									if (ui::does_blip_exist(iLocal_125)) {
										ui::remove_blip(&iLocal_125);
									}
									if (ped::is_ped_in_group(iLocal_72)) {
										ped::remove_ped_from_group(iLocal_72);
									}
									if (func_95()) {
										if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
											vehicle::_set_vehicle_halt(player::get_players_last_vehicle(), 5f, 2, 0);
										}
										iLocal_49 = 6;
									}
									else {
										func_93();
										system::wait(0);
										func_103(&uLocal_154, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
										if (!ped::is_ped_injured(iLocal_72)) {
											ai::open_sequence_task(&iLocal_136);
											ai::task_look_at_entity(0, player::player_ped_id(), 5000, 2052, 2);
											ai::task_follow_nav_mesh_to_coord(0, vLocal_96, 1f, -1, 0.25f, 0, 38.9844f);
											ai::task_start_scenario_in_place(0, "WORLD_HUMAN_SMOKING", 0, 1);
											ai::close_sequence_task(iLocal_136);
											ai::task_perform_sequence(iLocal_72, iLocal_136);
											ai::clear_sequence_task(&iLocal_136);
											ped::set_ped_keep_task(iLocal_72, 1);
										}
										func_34(func_98(), 1, 80, 0, 1);
										iLocal_49 = 7;
									}
								}
							}
						}
						break;

					case 6: func_33(); break;

					case 7: func_4(); break;

					case 9: func_106(); break;
					}
					if (iLocal_150 && !iLocal_151) {
						if (iLocal_49 != 6) {
							if (ped::is_synchronized_scene_running(iLocal_149)) {
								if (ped::get_synchronized_scene_phase(iLocal_149) > 0.85f) {
									if (vehicle::is_vehicle_driveable(iLocal_65, 0)) {
										if (!ped::is_ped_injured(iLocal_72)) {
											if (!ped::is_ped_in_vehicle(iLocal_72, iLocal_65, 0)) {
												if (!ped::is_ped_ragdoll(iLocal_72)) {
													ai::clear_ped_tasks(iLocal_72);
													ped::set_ped_into_vehicle(iLocal_72, iLocal_65, 2);
													ped::set_ped_keep_task(iLocal_72, 1);
													iLocal_151 = 1;
												}
												else {
													iLocal_151 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (func_2()) {
						if (entity::does_entity_exist(iLocal_72)) {
							ped::delete_ped(&iLocal_72);
						}
						func_4();
					}
					if (iLocal_49 != 0 && iLocal_49 != 6 && iLocal_49 != 7) {
						if (func_1()) {
							iLocal_49 = 9;
						}
					}
					if (iLocal_49 == 4 || iLocal_49 == 5) {
						if (!ped::is_ped_injured(iLocal_72)) {
							if (!entity::is_entity_at_entity(player::player_ped_id(), iLocal_72, 150f, 150f, 150f, 0, 1,
															 0) ||
								entity::has_entity_been_damaged_by_entity(iLocal_72, player::player_ped_id(), 1)) {
								ai::task_smart_flee_ped(iLocal_72, player::player_ped_id(), 150f, -1, 0, 0);
								func_93();
								func_106();
							}
						}
					}
					if (iLocal_49 < 5) {
						player::set_all_random_peds_flee_this_frame(player::player_id());
					}
					if (ped::is_ped_injured(iLocal_52[0])) {
						if (ui::does_blip_exist(iLocal_121[0])) {
							ui::remove_blip(&iLocal_121[0]);
						}
					}
					if (ped::is_ped_injured(iLocal_52[1])) {
						if (ui::does_blip_exist(iLocal_121[1])) {
							ui::remove_blip(&iLocal_121[1]);
						}
					}
					if (ped::is_ped_injured(iLocal_72)) {
						if (ui::does_blip_exist(iLocal_120)) {
							ui::remove_blip(&iLocal_120);
						}
					}
				}
				break;
			}
		}
		else {
			func_204();
		}
	}
}

// Position - 0xC9F
bool func_1() {
	int iVar0[3];

	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (entity::does_entity_exist(iLocal_52[0])) {
		if (ped::is_ped_injured(iLocal_52[0])) {
			iVar0[0] = 1;
		}
	}
	else {
		iVar0[0] = 1;
	}
	if (entity::does_entity_exist(iLocal_52[1])) {
		if (ped::is_ped_injured(iLocal_52[1])) {
			iVar0[1] = 1;
		}
	}
	else {
		iVar0[1] = 1;
	}
	if (entity::does_entity_exist(iLocal_72)) {
		if (ped::is_ped_injured(iLocal_72)) {
			iVar0[2] = 1;
		}
	}
	else {
		iVar0[2] = 1;
	}
	if (iVar0[0] && iVar0[1] && iVar0[2]) {
		return true;
	}
	return false;
}

// Position - 0xD4E
bool func_2() {
	if (Global_25425) {
		func_3(4);
		return true;
	}
	return false;
}

// Position - 0xD66
void func_3(int iParam0) { Global_101686 = iParam0; }

// Position - 0xD74
void func_4() {
	while (func_105()) {
		system::wait(0);
	}
	while (!func_32()) {
		system::wait(0);
	}
	func_8(-1, 0);
	func_5();
	func_204();
}

// Position - 0xDA9
void func_5() { func_6(); }

// Position - 0xDB6
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

// Position - 0xE01
bool func_7(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xE2C
void func_8(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		iParam0 = func_30();
	}
	if (iParam0 == -1) {
		return;
	}
	if (iParam1 <= func_29(iParam0)) {
		func_28(iParam0, iParam1);
		if (!func_27(51)) {
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0)) {
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322) {
			func_9(func_15(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0) {
			if (Global_101689 == 1 || Global_101689 == 5 || Global_101689 == 11 || Global_101689 == 25) {
				func_3(2);
			}
			else if (Global_101689 == 26 || Global_101689 == 8 || Global_101689 == 17) {
				func_3(7);
			}
			else {
				func_3(1);
			}
		}
	}
}

// Position - 0xF2F
void func_9(int iParam0, var uParam1, var uParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_13(891 + iParam0, 1, -1, 1);
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
		func_10();
	}
}

// Position - 0x1017
void func_10() {
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
		func_12(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_11() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_6();
				}
			}
		}
	}
}

// Position - 0x14D8
int func_11() { return Global_25190; }

// Position - 0x14E3
int func_12(int iParam0, int iParam1) {
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

// Position - 0x1534
int func_13(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_14();
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

// Position - 0x18C6
var func_14() { return Global_1312735; }

// Position - 0x18D2
int func_15(int iParam0, int iParam1) {
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

// Position - 0x1C46
bool func_16(int iParam0) {
	switch (iParam0) {
	case 29:
	case 30:
	case 2:
	case 18: return false;
	}
	return true;
}

// Position - 0x1C75
void func_17(int iParam0) {
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

// Position - 0x1CB7
void func_18(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x1CD7
void func_19(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
		func_20();
	}
}

// Position - 0x1EA9
void func_20() {
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

// Position - 0x1FC9
int func_21() {
	func_22();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x200F
void func_22() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_26(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_25(player::player_ped_id());
			if (func_24(iVar0) && (!func_23(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_24(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x210C
bool func_23(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x211A
bool func_24(int iParam0) { return iParam0 < 3; }

// Position - 0x2126
int func_25(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_26(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x2163
int func_26(int iParam0) {
	if (func_24(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x218D
int func_27(int iParam0) {
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

// Position - 0x21D0
void func_28(int iParam0, int iParam1) { gameplay::set_bit(&Global_101700.f_23954.f_8[iParam0], iParam1); }

// Position - 0x21EB
int func_29(int iParam0) {
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

// Position - 0x229C
int func_30() {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, script::get_this_script_name(), 64);
	iVar16 = func_31(Var0);
	return iVar16;
}

// Position - 0x22B9
int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5,
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

// Position - 0x2493
int func_32() { return 1; }

// Position - 0x249C
void func_33() {
	switch (iLocal_152) {
	case 0:
		func_93();
		system::wait(0);
		func_103(&uLocal_154, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
		iLocal_152++;
		break;

	case 1: iLocal_152++; break;

	case 2: iLocal_152++; break;

	case 3:
		if (!ped::is_ped_injured(iLocal_72)) {
			ai::open_sequence_task(&iLocal_136);
			ai::task_look_at_entity(0, player::player_ped_id(), 5000, 2052, 2);
			ai::task_follow_nav_mesh_to_coord(0, vLocal_96, 1f, -1, 0.25f, 0, 38.9844f);
			ai::task_start_scenario_in_place(0, "WORLD_HUMAN_SMOKING", 0, 1);
			ai::close_sequence_task(iLocal_136);
			ai::task_perform_sequence(iLocal_72, iLocal_136);
			ai::clear_sequence_task(&iLocal_136);
			ped::set_ped_keep_task(iLocal_72, 1);
		}
		iLocal_152++;
		break;

	case 4:
		func_34(func_98(), 1, 80, 0, 1);
		player::set_player_control(player::player_id(), 1, 0);
		func_4();
		break;
	}
}

// Position - 0x2580
void func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return;
	}
	func_35(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

// Position - 0x2667
int func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_59();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_58(99, 1);
			func_57(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_57(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_57(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_43(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_42(5)) {
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
			case 0: func_57(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_57(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_57(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_42(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_57(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_57(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_57(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_57(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_57(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_57(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
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
			case 0: func_57(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_57(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_57(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_57(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_57(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_57(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_57(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_57(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_57(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_42(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_57(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_57(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_57(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_57(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_57(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_57(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_41(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_58(95, iParam3); break;

		case 1: func_58(97, iParam3); break;

		case 2: func_58(96, iParam3); break;
		}
		func_58(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_38(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_38(iVar1);
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
		case 0: func_57(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_57(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_57(joaat("sp2_total_cash_earned"), iParam3); break;
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
	func_37(iParam0);
	if (Global_35781 == 15) {
		func_36(0);
	}
	return 1;
}

// Position - 0x2C66
void func_36(int iParam0) {
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

// Position - 0x2EE8
void func_37(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x2F42
void func_38(int iParam0) {
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
			 gameplay::is_bit_set(Global_2097152[func_40() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_40() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_39(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x3003
char *func_39(int iParam0) {
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

// Position - 0x307C
int func_40() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x3089
void func_41(int iParam0) {
	func_58(93, iParam0);
	func_58(29, iParam0);
	func_58(30, iParam0);
}

// Position - 0x30A9
bool func_42(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_40() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x30E5
int func_43(int iParam0) {
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
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_44(27, 1);
	return 1;
}

// Position - 0x319C
int func_44(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_45(iParam0, iParam1);
}

// Position - 0x31B7
int func_45(int iParam0, int iParam1) {
	if (func_23(14) && !func_56(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_55(&Global_2595550)) {
		if (func_53(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_46(&Global_2595550, iParam0)) {
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

// Position - 0x3254
bool func_46(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_23(14) && !func_56(iParam1)) {
		return false;
	}
	if (func_53(uParam0, iParam1)) {
		return false;
	}
	if (func_52(uParam0) < 0f) {
		func_51(uParam0, 0);
	}
	func_49(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_47(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x3305
int func_47(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_23(14) && !func_56(iParam1)) {
		return 0;
	}
	if (func_53(uParam0, iParam1)) {
		return 0;
	}
	if (func_52(uParam0) < 0f) {
		func_51(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_48(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x3380
bool func_48(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x3391
void func_49(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_50(uParam0, iVar0);
		iVar0++;
	}
	func_51(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x33C5
void func_50(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x33D5
void func_51(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x33F2
float func_52(var *uParam0) { return uParam0->f_72; }

// Position - 0x33FE
bool func_53(var *uParam0, int iParam1) { return func_54(uParam0, iParam1) != -1; }

// Position - 0x3410
int func_54(var *uParam0, int iParam1) {
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

// Position - 0x343D
bool func_55(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x344B
int func_56(int iParam0) {
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

// Position - 0x349B
void func_57(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x34BE
void func_58(int iParam0, int iParam1) {
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

// Position - 0x351B
void func_59() {
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

// Position - 0x3590
bool func_60() {
	if (func_98() == 2) {
		if (func_61()) {
			if (gameplay::get_distance_between_coords(
					-1014.154f, 4881.411f, 245.0001f,
					entity::get_entity_coords(player::get_player_ped(player::get_player_index()), 0), 1) < 400f) {
				if (!Global_25429) {
					audio::trigger_music_event("AC_EN_ROUTE_CULT");
					Global_25429 = 1;
					if (!Global_25428) {
						Global_25428 = 1;
						return true;
					}
				}
			}
			else if (Global_25429) {
				audio::trigger_music_event("AC_LEFT_AREA");
				Global_25429 = 0;
			}
		}
	}
	return false;
}

// Position - 0x360B
bool func_61() { return Global_25424; }

// Position - 0x3616
void func_62(int iParam0) {
	if (iParam0) {
		if (iLocal_77) {
			if (func_65(&uLocal_154, "REHOMAU", &Local_84, &Local_78, 8, 0, 0)) {
				iLocal_77 = 0;
			}
		}
	}
	else if (!iLocal_77 && audio::is_scripted_conversation_ongoing()) {
		Local_84 = {func_64()};
		Local_78 = {func_63()};
		func_113();
		iLocal_77 = 1;
	}
}

// Position - 0x3668
struct<6> func_63() {
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

// Position - 0x36AE
struct<6>
func_64() {
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4) {
		return Global_15364;
	}
	return Var0;
}

//Position - 0x36D2
bool func_65(var* uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_66(sParam2, iParam4, 0);
}

// Position - 0x3726
int func_66(char *sParam0, int iParam1, int iParam2) {
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
					func_74();
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
		if (func_73(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_72();
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
				func_71();
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
				if (func_70()) {
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
			if (func_69()) {
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
			func_68();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_67();
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
		func_74();
	}
	return 0;
}

// Position - 0x39F2
void func_67() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x3A22
void func_68() {
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

// Position - 0x3AB7
bool func_69() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x3ADE
bool func_70() {
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

// Position - 0x3B77
void func_71() {
	if (func_23(14)) {
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
		Global_14443 = func_98();
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

// Position - 0x3C19
void func_72() {
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

// Position - 0x3C6F
bool func_73(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x3CAA
void func_74() {
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

// Position - 0x3D01
void func_75(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
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

// Position - 0x3D57
bool func_76(vector3 vParam0) {
	if (func_98() == 2) {
		if (func_61() && !Global_25427) {
			if (fLocal_47 == -1f) {
				fLocal_47 = system::vdist(entity::get_entity_coords(player::player_ped_id(), 1), vParam0);
			}
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 1), vParam0) > fLocal_47 + 200f ||
				gameplay::get_distance_between_coords(
					-1014.154f, 4881.411f, 245.0001f,
					entity::get_entity_coords(player::get_player_ped(player::get_player_index()), 0), 1) < 400f) {
				Global_25427 = 1;
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3DE4
void func_77() {
	if (!ped::is_ped_injured(iLocal_72)) {
		if (!iLocal_105) {
			if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
				if (!ped::is_ped_in_vehicle(player::player_ped_id(), player::get_players_last_vehicle(), 1) &&
					ped::is_ped_in_vehicle(iLocal_72, player::get_players_last_vehicle(), 0)) {
					func_62(0);
					func_93();
					system::wait(0);
					func_103(&uLocal_154, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_105 = 1;
				}
			}
		}
		else if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), player::get_players_last_vehicle(), 0) &&
				ped::is_ped_in_vehicle(iLocal_72, player::get_players_last_vehicle(), 0)) {
				iLocal_105 = 0;
			}
		}
		if (!iLocal_106) {
			if (ped::is_ped_jacking(player::player_ped_id())) {
				func_62(0);
				func_93();
				system::wait(0);
				func_103(&uLocal_154, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_106 = 1;
			}
		}
		else if (!ped::is_ped_jacking(player::player_ped_id())) {
			iLocal_106 = 0;
		}
		if (!iLocal_107) {
			if (ped::is_ped_shooting(player::player_ped_id())) {
				func_62(0);
				func_93();
				system::wait(0);
				func_103(&uLocal_154, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_107 = 1;
			}
		}
		else if (ped::is_ped_shooting(player::player_ped_id())) {
			iLocal_107 = 0;
		}
	}
}

// Position - 0x3F0B
void func_78() {
	if (!func_79()) {
		func_62(1);
	}
	if (!func_105()) {
		switch (iLocal_130) {
		case 0:
			if (func_98() == 0) {
				func_103(&uLocal_154, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
			}
			else if (func_98() == 1) {
				func_103(&uLocal_154, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
			}
			iLocal_130++;
			break;

		case 1:
			func_103(&uLocal_154, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
			iLocal_130++;
			break;

		case 2:
			func_103(&uLocal_154, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
			iLocal_130++;
			break;

		case 3:
			if (func_98() == 0) {
				func_103(&uLocal_154, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
			}
			else if (func_98() == 1) {
				func_103(&uLocal_154, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
			}
			iLocal_130++;
			break;

		case 4:
			func_103(&uLocal_154, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
			iLocal_130++;
			break;

		case 5:
			if (func_98() == 0) {
				func_103(&uLocal_154, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
			}
			else if (func_98() == 1) {
				func_103(&uLocal_154, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
			}
			iLocal_130++;
			break;

		case 6:
			func_103(&uLocal_154, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
			iLocal_130++;
			break;

		case 7:
			func_103(&uLocal_154, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
			iLocal_130++;
			break;

		case 8:
			if (func_98() == 0) {
				func_103(&uLocal_154, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
			}
			else if (func_98() == 1) {
				func_103(&uLocal_154, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
			}
			iLocal_130++;
			break;

		case 9:
			func_103(&uLocal_154, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
			iLocal_130++;
			break;
		}
	}
}

// Position - 0x410E
int func_79() {
	if (func_80("REHOM_QM") || func_80("REHOM_GETOUT") || func_80("REHOM_SHOOT") || func_80("REHOM_JACK") ||
		func_80("REHOM_WRONG") || func_80("REHOM_CULT") || func_80("REHOM_STOP") || func_80("REHOM_NOVEH") ||
		func_80("REHOM_UNS1") || func_80("REHOM_UNS2")) {
		return 1;
	}
	return 0;
}

// Position - 0x41A2
int func_80(char *sParam0) {
	var uVar0;

	if (func_105()) {
		MemCopy(&uVar0, {func_64()}, 4);
		if (gameplay::are_strings_equal(sParam0, &uVar0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x41CA
void func_81() {
	if (!ped::is_ped_injured(iLocal_72)) {
		if (ped::is_ped_on_foot(iLocal_72)) {
			if (!iLocal_142) {
				iLocal_143 = gameplay::get_game_timer();
				iLocal_142 = 1;
			}
			else {
				iLocal_144 = gameplay::get_game_timer();
			}
		}
		else {
			iLocal_142 = 0;
		}
		if (iLocal_144 - iLocal_143 > 180000) {
			if (ped::is_ped_in_group(iLocal_72)) {
				ped::remove_ped_from_group(iLocal_72);
				func_103(&uLocal_154, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_106();
			}
		}
	}
}

// Position - 0x4234
void func_82() {
	if (ped::is_ped_stopped(player::player_ped_id())) {
		if (!iLocal_145) {
			iLocal_147 = gameplay::get_game_timer();
			iLocal_145 = 1;
		}
		else {
			iLocal_148 = gameplay::get_game_timer();
		}
	}
	else {
		iLocal_148 = 0;
		iLocal_145 = 0;
		iLocal_146 = 0;
	}
	if (iLocal_148 - iLocal_147 > 50000 && !iLocal_146) {
		func_62(0);
		func_93();
		system::wait(0);
		func_103(&uLocal_154, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_146 = 1;
	}
	if (iLocal_148 - iLocal_147 > 60000 && iLocal_146) {
		if (!ped::is_ped_injured(iLocal_72)) {
			ai::task_smart_flee_ped(iLocal_72, player::player_ped_id(), 150f, -1, 0, 0);
			func_83(iLocal_72, 120000, 0);
			ped::set_ped_keep_task(iLocal_72, 1);
			if (ped::is_ped_in_group(iLocal_72)) {
				ped::remove_ped_from_group(iLocal_72);
			}
		}
		func_106();
	}
}

// Position - 0x42F9
int func_83(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0) {
		return 0;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = func_86(iParam0);
	if (iVar0 != -1) {
		return 1;
	}
	iVar1 = func_85(iParam0);
	if (iVar1 != -1) {
		return 1;
	}
	if (!iParam2) {
		if (iParam1 == 0 || iParam1 < 0) {
			return 0;
		}
	}
	iVar2 = func_84();
	if (iVar2 == -1) {
		return 0;
	}
	Global_36689[iVar2 /*5*/] = 0;
	Global_36689[iVar2 /*5*/].f_1 = iParam0;
	Global_36689[iVar2 /*5*/].f_2 = iParam1;
	Global_36689[iVar2 /*5*/].f_3 = iParam1;
	Global_36689[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == player::player_ped_id()) {
		Global_36910 = 1;
	}
	Global_36688++;
	return 1;
}

// Position - 0x43B5
int func_84() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		if (Global_36689[iVar0 /*5*/] == 13) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x43E4
int func_85(int iParam0) {
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

// Position - 0x4415
int func_86(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (iParam0 == Global_36715[iVar0 /*5*/].f_1) {
			return Global_36715[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x4456
void func_87() {
	if (!ped::is_ped_injured(iLocal_72)) {
		if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_72, 8f, 8f, 8f, 0, 1, 0) ||
			ped::is_ped_in_any_taxi(player::player_ped_id())) {
			if (ui::does_blip_exist(iLocal_120)) {
				ui::remove_blip(&iLocal_120);
			}
			if (!ped::is_ped_in_group(iLocal_72)) {
				ped::set_ped_as_group_member(iLocal_72, player::get_player_group(player::player_id()));
				ped::set_ped_group_member_passenger_index(iLocal_72, 0);
			}
			if (!player::is_player_wanted_level_greater(player::player_id(), 0)) {
				if (!ui::does_blip_exist(iLocal_124)) {
					iLocal_124 = func_91(vLocal_93, 1);
				}
				if (ped::is_ped_in_any_taxi(player::player_ped_id())) {
					if (!ui::does_blip_exist(iLocal_124)) {
						iLocal_124 = func_91(vLocal_93, 1);
					}
				}
				if (func_98() == 2 && !func_90()) {
					if (!ui::does_blip_exist(iLocal_125)) {
						iLocal_125 = func_91(vLocal_99, 0);
						ui::set_blip_sprite(iLocal_125, 269);
						func_88();
					}
				}
			}
		}
		else {
			if (!ui::does_blip_exist(iLocal_120)) {
				iLocal_120 = func_96(iLocal_72, 0, 145);
			}
			if (ui::does_blip_exist(iLocal_124)) {
				ui::remove_blip(&iLocal_124);
			}
		}
	}
}

// Position - 0x4561
void func_88() {
	if (func_98() == 2) {
		if (!Global_25426) {
			func_89("CULT_BLIP_HELP", -1);
			Global_25426 = 1;
		}
	}
}

// Position - 0x4585
void func_89(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x459C
int func_90() {
	if (Global_101700.f_23954.f_5 == 1000) {
		return 1;
	}
	return 0;
}

// Position - 0x45B8
int func_91(vector3 vParam0, int iParam3) {
	int iVar0;

	iVar0 = ui::add_blip_for_coord(vParam0);
	ui::set_blip_scale(iVar0, func_92(network::network_is_game_in_progress(), 1f, 1f));
	ui::set_blip_route(iVar0, iParam3);
	return iVar0;
}

// Position - 0x45E4
var func_92(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x45FB
void func_93() {
	Global_14611 = 0;
	func_94();
}

// Position - 0x460B
void func_94() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x462C
bool func_95() {
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iLocal_118 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (vehicle::is_vehicle_driveable(iLocal_118, 0)) {
			if (!ped::is_ped_injured(iLocal_72)) {
				if (ped::is_ped_sitting_in_vehicle(iLocal_72, iLocal_118)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x466F
int func_96(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = func_97(iParam0, !iParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x46C1
int func_97(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_92(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_92(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_92(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x4765
int func_98() {
	func_22();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x477E
void func_99() {
	if (!func_90()) {
		if (func_98() == 2) {
			Global_25424 = 1;
		}
	}
}

// Position - 0x479A
var func_100() { return player::get_player_group(player::get_player_index()); }

// Position - 0x47AA
int func_101() {
	if (entity::does_entity_exist(iLocal_65)) {
		if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_65, 0) &&
			ped::is_ped_in_vehicle(iLocal_72, iLocal_65, 0) && !ped::is_ped_in_vehicle(iLocal_52[0], iLocal_65, 0) &&
			!ped::is_ped_in_vehicle(iLocal_52[1], iLocal_65, 0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x4800
void func_102(var *uParam0, int iParam1) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
		(*uParam0)[iParam1 /*10*/].f_7 = 0;
	}
}

// Position - 0x481D
bool func_103(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_75(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_66(sParam2, iParam3, 0);
}

// Position - 0x486B
bool func_104() {
	if (gameplay::is_bit_set(gameplay::get_random_int_in_range(0, 65535), 0)) {
		return true;
	}
	return false;
}

// Position - 0x488C
bool func_105() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0x48AE
void func_106() { func_204(); }

// Position - 0x48BA
void func_107() {
	if (!iLocal_109) {
		if (!ped::is_ped_injured(iLocal_52[0])) {
			ped::set_ped_combat_movement(iLocal_52[0], 0);
			ai::clear_ped_tasks(iLocal_52[0]);
			ai::open_sequence_task(&iLocal_136);
			ai::task_clear_look_at(0);
			ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
			ai::close_sequence_task(iLocal_136);
			ai::task_perform_sequence(iLocal_52[0], iLocal_136);
			ai::clear_sequence_task(&iLocal_136);
			ped::set_ped_keep_task(iLocal_52[0], 1);
			if (ui::does_blip_exist(iLocal_121[0])) {
				ui::set_blip_as_friendly(iLocal_121[0], 0);
			}
			system::settimerb(0);
			iLocal_109 = 1;
		}
		else {
			system::settimerb(500);
			iLocal_109 = 1;
		}
	}
	if (!iLocal_110) {
		if (ui::does_blip_exist(iLocal_121[1])) {
			ui::set_blip_as_friendly(iLocal_121[1], 0);
		}
		func_93();
		system::wait(0);
		if (!ped::is_ped_injured(iLocal_52[1])) {
			func_108(iLocal_52[1], "GENERIC_INSULT_HIGH", 24);
			ped::set_ped_combat_movement(iLocal_52[1], 2);
			if (entity::is_entity_playing_anim(iLocal_52[1], "random@homelandsecurity", "idle_cop_ground", 3) ||
				ped::is_synchronized_scene_running(iLocal_149))
				&&!ped::is_ped_ragdoll(iLocal_52[1]) {
					ped::_set_ped_ragdoll_blocking_flags(iLocal_52[1], 16);
					ai::open_sequence_task(&iLocal_136);
					ai::task_play_anim(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0,
									   0, 0, 0);
					ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
					ai::close_sequence_task(iLocal_136);
					ai::task_perform_sequence(iLocal_52[1], iLocal_136);
					ai::clear_sequence_task(&iLocal_136);
					ped::set_ped_keep_task(iLocal_52[1], 1);
					iLocal_110 = 1;
				}
			else {
				ai::task_combat_ped(iLocal_52[1], player::player_ped_id(), 0, 16);
				ped::set_ped_keep_task(iLocal_52[1], 1);
				iLocal_110 = 1;
			}
		}
	}
	else if (!ped::is_ped_injured(iLocal_52[1])) {
		if (!entity::is_entity_playing_anim(iLocal_52[1], "random@homelandsecurity", "idle_cop_ground", 3) &&
			!entity::is_entity_playing_anim(iLocal_52[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1) &&
			ai::get_script_task_status(iLocal_52[1], 780511057) != 0 &&
			ai::get_script_task_status(iLocal_52[1], 780511057) != 1) {
			iLocal_110 = 1;
		}
	}
}

// Position - 0x4AAB
void func_108(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_109(iParam2), 1);
}

// Position - 0x4AC2
int func_109(int iParam0) {
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

// Position - 0x4CB7
void func_110() { iLocal_49 = 3; }

// Position - 0x4CC2
void func_111() {
	func_93();
	system::wait(0);
	func_103(&uLocal_154, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_49 = 3;
}

// Position - 0x4CE8
void func_112() { iLocal_49 = 3; }

// Position - 0x4CF3
void func_113() {
	Global_14611 = 0;
	func_114();
}

// Position - 0x4D03
void func_114() {
	if (audio::is_scripted_conversation_ongoing()) {
		audio::restart_scripted_conversation();
		Global_16756 = 0;
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0x4D27
bool func_115() {
	iLocal_126 = 0;
	while (iLocal_126 <= 1) {
		if (entity::is_entity_dead(iLocal_52[iLocal_126], 0)) {
			if (entity::has_entity_been_damaged_by_entity(iLocal_52[iLocal_126], player::player_ped_id(), 1)) {
				return true;
			}
		}
		iLocal_126++;
	}
	return false;
}

// Position - 0x4D66
void func_116() {
	iLocal_128 = gameplay::get_game_timer();
	if (!bLocal_138) {
		switch (iLocal_51) {
		case 0:
			if (func_121()) {
				iLocal_51 = 9;
			}
			if (func_120() && !iLocal_114) {
				iLocal_51 = 13;
			}
			if (func_103(&uLocal_154, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0)) {
				iLocal_127 = gameplay::get_game_timer();
				iLocal_51 = 1;
			}
			break;

		case 1:
			if (func_121()) {
				iLocal_51 = 9;
			}
			if (func_120() && !iLocal_114) {
				iLocal_51 = 13;
			}
			if (func_103(&uLocal_154, "REHOMAU", "REHOM_COM", 4, 0, 0, 0)) {
				iLocal_127 = gameplay::get_game_timer();
				iLocal_51 = 2;
			}
			break;

		case 2:
			if (func_121()) {
				iLocal_51 = 9;
			}
			if (func_120() && !iLocal_114) {
				iLocal_51 = 13;
			}
			if (iLocal_128 - iLocal_127 > 6000) {
				if (func_103(&uLocal_154, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0)) {
					iLocal_127 = gameplay::get_game_timer();
					iLocal_51 = 3;
				}
			}
			break;

		case 3:
			if (func_121()) {
				iLocal_51 = 9;
			}
			if (func_120() && !iLocal_114) {
				iLocal_51 = 13;
			}
			if (func_103(&uLocal_154, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0)) {
				iLocal_127 = gameplay::get_game_timer();
				iLocal_51 = 4;
			}
			break;

		case 4:
			if (func_121()) {
				iLocal_51 = 9;
			}
			if (func_120() && !iLocal_114) {
				iLocal_51 = 13;
			}
			if (iLocal_128 - iLocal_127 > 5500) {
				if (func_103(&uLocal_154, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0)) {
					iLocal_127 = gameplay::get_game_timer();
					iLocal_51 = 5;
				}
			}
			break;

		case 5:
			if (func_121()) {
				iLocal_51 = 9;
			}
			if (func_120() && !iLocal_114) {
				iLocal_51 = 13;
			}
			if (!iLocal_115 && system::timera() > 5000) {
				ai::open_sequence_task(&iLocal_136);
				ai::task_look_at_entity(0, iLocal_72, -1, 2054, 2);
				ai::task_turn_ped_to_face_entity(0, iLocal_72, -1);
				ai::close_sequence_task(iLocal_136);
				ai::task_perform_sequence(iLocal_52[0], iLocal_136);
				ped::set_ped_keep_task(iLocal_52[0], 1);
				iLocal_115 = 1;
			}
			if (iLocal_128 - iLocal_127 > 3000 || iLocal_114) {
				if (vehicle::is_vehicle_driveable(iLocal_65, 0) && !ped::is_ped_injured(iLocal_52[0]) &&
					!ped::is_ped_injured(iLocal_52[1]) && !ped::is_ped_injured(iLocal_72)) {
					if (ped::is_synchronized_scene_running(iLocal_149)) {
						if (ped::get_synchronized_scene_phase(iLocal_149) > 0.98f) {
							if (!func_105()) {
								if (ped::is_ped_facing_ped(iLocal_52[0], iLocal_72, 10f)) {
									if (func_103(&uLocal_154, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0)) {
										ai::task_clear_look_at(iLocal_52[0]);
										iLocal_149 = ped::create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
										ped::attach_synchronized_scene_to_entity(iLocal_149, iLocal_65, 0);
										ai::task_synchronized_scene(iLocal_72, iLocal_149, "random@homelandsecurity",
																	"exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
										ai::task_synchronized_scene(iLocal_52[0], iLocal_149, "random@homelandsecurity",
																	"exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
										ai::task_synchronized_scene(iLocal_52[1], iLocal_149, "random@homelandsecurity",
																	"exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
										entity::play_entity_anim(iLocal_65, "exit_car", "random@homelandsecurity", 4f,
																 0, 0, 0, 0f, 0);
										iLocal_150 = 1;
										iLocal_127 = gameplay::get_game_timer();
										iLocal_51 = 6;
									}
								}
							}
						}
					}
				}
			}
			if (func_119()) {
				iLocal_51 = 15;
			}
			break;

		case 15:
			if (vehicle::is_vehicle_driveable(iLocal_65, 0) && !ped::is_ped_injured(iLocal_52[0]) &&
				!ped::is_ped_injured(iLocal_52[1]) && !ped::is_ped_injured(iLocal_72)) {
				if (ped::is_synchronized_scene_running(iLocal_149)) {
					if (!func_105()) {
						if (ped::is_ped_facing_ped(iLocal_52[0], iLocal_72, 10f)) {
							if (func_103(&uLocal_154, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0)) {
								ai::task_clear_look_at(iLocal_52[0]);
								iLocal_149 = ped::create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
								ped::attach_synchronized_scene_to_entity(iLocal_149, iLocal_65, 0);
								ai::task_synchronized_scene(iLocal_72, iLocal_149, "random@homelandsecurity",
															"exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
								ai::task_synchronized_scene(iLocal_52[0], iLocal_149, "random@homelandsecurity",
															"exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
								ai::task_synchronized_scene(iLocal_52[1], iLocal_149, "random@homelandsecurity",
															"exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
								entity::play_entity_anim(iLocal_65, "exit_car", "random@homelandsecurity", 2f, 0, 0, 0,
														 0f, 0);
								iLocal_150 = 1;
								iLocal_127 = gameplay::get_game_timer();
								iLocal_51 = 6;
							}
						}
					}
				}
			}
			break;

		case 6:
			func_117();
			if (ped::is_synchronized_scene_running(iLocal_149)) {
				if (ped::get_synchronized_scene_phase(iLocal_149) > 0.45f) {
					if (vehicle::is_vehicle_driveable(iLocal_65, 0) && !ped::is_ped_injured(iLocal_72) &&
						!ped::is_ped_injured(iLocal_52[0])) {
					}
				}
			}
			if (ped::is_synchronized_scene_running(iLocal_149)) {
				if (ped::get_synchronized_scene_phase(iLocal_149) > 0.9f) {
					if (vehicle::is_vehicle_driveable(iLocal_65, 0)) {
						if (!ped::is_ped_injured(iLocal_52[0])) {
							ai::task_enter_vehicle(iLocal_52[0], iLocal_65, -1, -1, 1f, 9, 0);
							iLocal_51 = 7;
						}
					}
				}
			}
			break;

		case 7:
			func_117();
			if (ped::is_synchronized_scene_running(iLocal_149)) {
				if (ped::get_synchronized_scene_phase(iLocal_149) > 0.95f) {
					if (vehicle::is_vehicle_driveable(iLocal_65, 0)) {
						if (!ped::is_ped_injured(iLocal_52[1])) {
							ai::task_enter_vehicle(iLocal_52[1], iLocal_65, -1, 0, 1f, 9, 0);
							ped::set_ped_keep_task(iLocal_52[1], 1);
							iLocal_51 = 8;
						}
					}
				}
			}
			break;

		case 8:
			func_117();
			if (vehicle::is_vehicle_driveable(iLocal_65, 0) && !ped::is_ped_injured(iLocal_52[0]) &&
				!ped::is_ped_injured(iLocal_52[1])) {
				if (ped::is_ped_sitting_in_vehicle(iLocal_72, iLocal_65) &&
					ped::is_ped_sitting_in_vehicle(iLocal_52[0], iLocal_65) &&
					ped::is_ped_sitting_in_vehicle(iLocal_52[1], iLocal_65)) {
					ai::task_vehicle_drive_wander(iLocal_52[0], iLocal_65, 15f, 786468);
					vehicle::set_vehicle_siren(iLocal_65, 1);
					bLocal_138 = true;
				}
			}
			break;

		case 9:
			ai::open_sequence_task(&iLocal_136);
			ai::task_clear_look_at(0);
			ai::task_look_at_entity(0, player::player_ped_id(), 20000, 0, 2);
			ai::task_aim_gun_at_entity(0, player::player_ped_id(), -1, 0);
			ai::close_sequence_task(iLocal_136);
			if (!ped::is_ped_injured(iLocal_52[0])) {
				ai::task_perform_sequence(iLocal_52[0], iLocal_136);
			}
			ai::clear_sequence_task(&iLocal_136);
			if (!iLocal_112) {
				if (weapon::is_ped_armed(player::player_ped_id(), 4) &&
					!weapon::is_ped_armed(player::player_ped_id(), 3)) {
					func_93();
					system::wait(0);
					func_103(&uLocal_154, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
				}
				if (weapon::is_ped_armed(player::player_ped_id(), 3) &&
					!weapon::is_ped_armed(player::player_ped_id(), 4)) {
					func_93();
					system::wait(0);
					if (!ped::is_ped_injured(iLocal_52[0])) {
						func_108(iLocal_52[0], "GUN_COOL", 24);
					}
				}
				iLocal_112 = 1;
				iLocal_134 = gameplay::get_game_timer();
			}
			iLocal_51 = 10;
			break;

		case 10:
			if (weapon::is_ped_armed(player::player_ped_id(), 6) &&
				entity::is_entity_at_entity(player::player_ped_id(), iLocal_52[0], 15f, 15f, 15f, 0, 1, 0)) {
				iLocal_135 = gameplay::get_game_timer();
			}
			else {
				iLocal_51 = 13;
			}
			if (iLocal_135 - iLocal_134 > 6000 && weapon::is_ped_armed(player::player_ped_id(), 6) && !iLocal_113) {
				if (func_103(&uLocal_154, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0)) {
					iLocal_134 = gameplay::get_game_timer();
					iLocal_113 = 1;
				}
				iLocal_51 = 11;
			}
			break;

		case 11:
			if (weapon::is_ped_armed(player::player_ped_id(), 6) &&
				entity::is_entity_at_entity(player::player_ped_id(), iLocal_52[0], 15f, 15f, 15f, 0, 1, 0)) {
				iLocal_135 = gameplay::get_game_timer();
			}
			else {
				iLocal_51 = 13;
			}
			if (iLocal_135 - iLocal_134 > 9000 && weapon::is_ped_armed(player::player_ped_id(), 6) || iLocal_140) {
				if (func_103(&uLocal_154, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0)) {
					iLocal_51 = 12;
				}
			}
			break;

		case 12:
			if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
				iLocal_135 = gameplay::get_game_timer();
			}
			else {
				iLocal_51 = 13;
			}
			if (iLocal_135 - iLocal_134 > 13000) {
				iLocal_49 = 3;
			}
			break;

		case 13:
			if (!ped::is_ped_injured(iLocal_52[0])) {
				ai::open_sequence_task(&iLocal_136);
				ai::task_clear_look_at(0);
				ai::task_look_at_entity(0, player::player_ped_id(), -1, 2052, 4);
				ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), -1);
				ai::close_sequence_task(iLocal_136);
				ai::task_perform_sequence(iLocal_52[0], iLocal_136);
				ai::clear_sequence_task(&iLocal_136);
			}
			if (iLocal_141) {
				if (!ped::is_ped_injured(iLocal_52[1])) {
					if (!ped::is_ped_injured(iLocal_72)) {
						if (ai::get_script_task_status(iLocal_52[1], 1785177548) != 1) {
							ai::open_sequence_task(&iLocal_136);
							ai::task_clear_look_at(0);
							ai::task_turn_ped_to_face_entity(0, iLocal_72, 0);
							ai::task_look_at_entity(0, iLocal_72, 20000, 0, 2);
							ai::task_follow_to_offset_of_entity(0, iLocal_72, -1f, 0f, 0f, 1f, -1, 1036831949, 1);
							ai::close_sequence_task(iLocal_136);
							ai::task_perform_sequence(iLocal_52[1], iLocal_136);
							ai::clear_sequence_task(&iLocal_136);
						}
					}
					else if (ai::get_script_task_status(iLocal_52[1], 1785177548) != 1) {
						ai::open_sequence_task(&iLocal_136);
						ai::task_clear_look_at(0);
						ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
						ai::task_look_at_entity(0, player::player_ped_id(), 20000, 0, 2);
						ai::close_sequence_task(iLocal_136);
						ai::task_perform_sequence(iLocal_52[1], iLocal_136);
						ai::clear_sequence_task(&iLocal_136);
					}
				}
				if (!ped::is_ped_injured(iLocal_72)) {
					if (ai::get_script_task_status(iLocal_72, 1785177548) != 1) {
						ai::task_seek_cover_from_ped(iLocal_72, player::player_ped_id(), -1, 0);
						ped::set_ped_keep_task(iLocal_72, 1);
					}
				}
			}
			iLocal_51 = 14;
			break;

		case 14:
			if (func_121()) {
				iLocal_51 = 9;
			}
			if (func_119()) {
				if (ped::is_synchronized_scene_running(iLocal_149)) {
					if (!iLocal_141) {
						if (!ped::is_ped_injured(iLocal_52[1])) {
						}
						if (!ped::is_ped_injured(iLocal_72)) {
							ai::task_seek_cover_from_ped(iLocal_72, player::player_ped_id(), -1, 0);
							ped::set_ped_keep_task(iLocal_72, 1);
						}
						iLocal_141 = 1;
					}
				}
			}
			if (!ped::is_ped_injured(iLocal_52[0])) {
				if (!func_105() && !iLocal_114) {
					if (func_104()) {
						func_103(&uLocal_154, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
					}
					else {
						func_103(&uLocal_154, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
					}
					iLocal_114 = 1;
				}
				iLocal_115 = 0;
				system::settimera(0);
				iLocal_127 = gameplay::get_game_timer() - 4500;
				iLocal_51 = 5;
			}
		}
	}
}

// Position - 0x5719
void func_117() {
	if (!func_105()) {
		if (vehicle::is_vehicle_driveable(iLocal_65, 0)) {
			if (!ped::is_ped_injured(iLocal_72)) {
				if (ped::is_ped_in_vehicle(iLocal_72, iLocal_65, 0)) {
					if (func_118(iLocal_72, 0) == 2) {
						if (iLocal_129 < gameplay::get_game_timer()) {
							func_103(&uLocal_154, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_129 = gameplay::get_game_timer() + gameplay::get_random_int_in_range(3500, 4000);
						}
					}
				}
			}
		}
	}
}

// Position - 0x5780
int func_118(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ped::is_ped_injured(iParam0)) {
		if (ped::is_ped_in_any_vehicle(iParam0, iParam1)) {
			iVar0 = ped::get_vehicle_ped_is_in(iParam0, iParam1);
			if (entity::does_entity_exist(iVar0)) {
				if (!entity::is_entity_dead(iVar0, 0)) {
					iVar1 = vehicle::get_vehicle_model_number_of_seats(entity::get_entity_model(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1) {
						iVar3 = iVar2 - 1;
						if (!vehicle::is_vehicle_seat_free(iVar0, iVar3, 0)) {
							if (vehicle::get_ped_in_vehicle_seat(iVar0, iVar3, 0) == iParam0) {
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

// Position - 0x5802
bool func_119() {
	if (!ped::is_ped_injured(iLocal_52[0]) && !ped::is_ped_injured(iLocal_52[1]) && !ped::is_ped_injured(iLocal_72)) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_52[0], 1.5f, 1.5f, 5f, 0, 1, 2) ||
				entity::is_entity_at_entity(player::player_ped_id(), iLocal_52[1], 2.5f, 2.5f, 5f, 0, 1, 2) ||
				entity::is_entity_at_entity(player::player_ped_id(), iLocal_72, 1.5f, 1.5f, 5f, 0, 1, 2)) {
				return true;
			}
		}
		else if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_52[0], 0.5f, 0.5f, 5f, 0, 1, 1) ||
				 entity::is_entity_at_entity(player::player_ped_id(), iLocal_52[1], 0.5f, 0.5f, 5f, 0, 1, 1) ||
				 entity::is_entity_at_entity(player::player_ped_id(), iLocal_72, 0.5f, 0.5f, 5f, 0, 1, 1)) {
			return true;
		}
	}
	return false;
}

// Position - 0x5904
int func_120() {
	if (!ped::is_ped_injured(iLocal_52[1])) {
		if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_52[1], 6f, 6f, 6f, 0, 1, 0)) {
			if (ped::is_ped_facing_ped(iLocal_52[1], player::player_ped_id(), 120f)) {
				if (!weapon::is_ped_armed(player::player_ped_id(), 6)) {
					return 1;
				}
			}
		}
	}
	if (!ped::is_ped_injured(iLocal_52[0])) {
		if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_52[0], 6f, 6f, 6f, 0, 1, 0)) {
			if (!weapon::is_ped_armed(player::player_ped_id(), 6)) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x598A
bool func_121() {
	if (!ped::is_ped_injured(iLocal_52[1])) {
		if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_52[1], 6f, 6f, 6f, 0, 1, 1)) {
			if (ped::is_ped_facing_ped(iLocal_52[1], player::player_ped_id(), 120f)) {
				if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
					return true;
				}
			}
		}
	}
	if (!ped::is_ped_injured(iLocal_52[0])) {
		if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_52[0], 6f, 6f, 6f, 0, 1, 1)) {
			if (ped::is_ped_facing_ped(iLocal_52[0], player::player_ped_id(), 120f)) {
				if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x5A23
int func_122(int iParam0) {
	if (func_125()) {
		Global_101690 = 1;
		Global_101687 = gameplay::get_game_timer();
		if (func_16(Global_101689)) {
			func_123(0);
		}
		ui::set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_16(Global_101689)) {
			ui::flash_minimap_display();
		}
		return 1;
	}
	return 0;
}

// Position - 0x5A76
void func_123(int iParam0) {
	switch (iParam0) {
	case 0:
		if (Global_101700.f_23954.f_2 < 3) {
			if (!ui::is_help_message_on_screen()) {
				func_89(func_124(iParam0), -1);
				Global_101700.f_23954.f_2++;
				gameplay::set_bit(&Global_101696, 0);
			}
		}
		break;

	case 1:
		if (!gameplay::is_bit_set(Global_101696, 1)) {
			if (!ui::is_help_message_on_screen()) {
				func_89(func_124(iParam0), -1);
				Global_101700.f_23954.f_3++;
				gameplay::set_bit(&Global_101696, 1);
			}
		}
		break;

	case 2:
		if (!gameplay::is_bit_set(Global_101696, 2)) {
			if (!ui::is_help_message_on_screen()) {
				func_89(func_124(iParam0), -1);
				Global_101700.f_23954.f_4++;
				gameplay::set_bit(&Global_101696, 2);
			}
		}
		break;
	}
}

// Position - 0x5B57
char *func_124(int iParam0) {
	char *sVar0;

	sVar0 = "";
	switch (iParam0) {
	case 0: sVar0 = "AM_H_REFS"; break;

	case 1: sVar0 = "RE_FLASHBLIP"; break;

	case 2: sVar0 = "RE_HANDOVER"; break;
	}
	return sVar0;
}

// Position - 0x5B99
bool func_125() {
	switch (func_126(&Global_25249, 0, 5, 0, script::get_id_of_this_thread())) {
	case 1: return true;

	case 0: return true;
	}
	return false;
}

// Position - 0x5BCF
int func_126(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_130(0)) {
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
		if (!func_128(iParam2)) {
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
			func_127(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x5D06
void func_127(int *iParam0, int iParam1) {
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

// Position - 0x5D55
bool func_128(int iParam0) { return func_129(iParam0, Global_35781); }

// Position - 0x5D66
int func_129(int iParam0, int iParam1) {
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

// Position - 0x5F47
bool func_130(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_128(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x5F69
void func_131() {
	if (ui::does_blip_exist(iLocal_119)) {
		ui::remove_blip(&iLocal_119);
	}
	if (!ui::does_blip_exist(iLocal_120)) {
		if (!entity::is_entity_dead(iLocal_72, 0)) {
			iLocal_120 = func_96(iLocal_72, 0, 145);
			ui::_0x75A16C3DA34F1245(iLocal_120, 0);
		}
	}
	else {
		ui::_0x75A16C3DA34F1245(iLocal_120, 1);
	}
	iLocal_126 = 0;
	while (iLocal_126 <= 1) {
		if (!ui::does_blip_exist(iLocal_121[iLocal_126])) {
			if (!entity::is_entity_dead(iLocal_52[iLocal_126], 0)) {
				iLocal_121[iLocal_126] = func_96(iLocal_52[iLocal_126], 0, 145);
				ui::_0x75A16C3DA34F1245(iLocal_121[iLocal_126], 0);
			}
		}
		else {
			ui::_0x75A16C3DA34F1245(iLocal_121[iLocal_126], 1);
		}
		iLocal_126++;
	}
}

// Position - 0x600C
bool func_132() {
	int iVar0;
	int iVar1;

	if (!bLocal_133) {
		if (gameplay::is_projectile_in_area(vLocal_66 - Vector(30f, 30f, 30f), vLocal_66 + Vector(30f, 30f, 30f), 1) ||
			gameplay::is_bullet_in_box(vLocal_66 - Vector(30f, 30f, 30f), vLocal_66 + Vector(30f, 30f, 30f), 1)) {
			iLocal_50 = 2;
			return true;
		}
		if (!ped::is_ped_injured(iLocal_52[0]) && !ped::is_ped_injured(iLocal_52[1])) {
			if (entity::is_entity_at_entity(iLocal_52[0], player::player_ped_id(), 20f, 20f, 20f, 0, 1, 0)) {
				if (weapon::is_ped_armed(player::player_ped_id(), 7) ||
					ped::is_ped_in_melee_combat(player::player_ped_id()) &&
						entity::is_entity_at_entity(iLocal_52[0], player::player_ped_id(), 6f, 6f, 6f, 0, 1, 0)) {
					if (player::is_player_targetting_entity(player::player_id(), iLocal_52[0]) ||
						player::is_player_free_aiming_at_entity(player::player_id(), iLocal_52[0]) ||
						player::is_player_targetting_entity(player::player_id(), iLocal_52[1]) ||
						player::is_player_free_aiming_at_entity(player::player_id(), iLocal_52[1])) {
						if (ped::_0x6CD5A433374D4CFB(iLocal_52[0], player::player_ped_id()) ||
							ped::_0x6CD5A433374D4CFB(iLocal_52[1], player::player_ped_id())) {
							iLocal_50 = 2;
							return true;
						}
					}
				}
			}
		}
		iVar0 = player::get_players_last_vehicle();
		if (entity::does_entity_exist(iLocal_65)) {
			if (!entity::is_entity_dead(iLocal_65, 0)) {
				if (entity::has_entity_been_damaged_by_entity(iLocal_65, player::player_ped_id(), 1)) {
					iLocal_50 = 2;
					return true;
				}
				if (ped::is_ped_on_specific_vehicle(player::player_ped_id(), iLocal_65) &&
					entity::get_entity_speed(player::player_ped_id()) > 0.1f) {
					iLocal_50 = 2;
					return true;
				}
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_65, 0)) {
					iLocal_50 = 2;
					return true;
				}
				if (vehicle::is_vehicle_driveable(iVar0, 0)) {
					if (entity::has_entity_been_damaged_by_entity(iLocal_65, iVar0, 1)) {
						iLocal_50 = 2;
						return true;
					}
				}
			}
			else if (entity::has_entity_been_damaged_by_entity(iLocal_65, player::player_ped_id(), 1)) {
				iLocal_50 = 2;
				return true;
			}
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (ped::is_ped_in_model(player::player_ped_id(), joaat("towtruck")) ||
				ped::is_ped_in_model(player::player_ped_id(), joaat("towtruck2"))) {
				iVar1 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (!entity::is_entity_dead(iLocal_65, 0)) {
					if (vehicle::is_vehicle_attached_to_tow_truck(iVar1, iLocal_65)) {
						iLocal_50 = 2;
						return true;
					}
				}
			}
		}
		if (!ped::is_ped_injured(iLocal_52[0]) || entity::is_entity_dead(iLocal_52[0], 0)) {
			if (entity::has_entity_been_damaged_by_entity(iLocal_52[0], player::player_ped_id(), 1)) {
				iLocal_50 = 5;
				return true;
			}
			if (entity::is_entity_touching_entity(player::player_ped_id(), iLocal_52[0]) &&
				entity::get_entity_speed(player::player_ped_id()) > 0.1f) {
				iLocal_50 = 5;
				return true;
			}
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				if (entity::has_entity_been_damaged_by_entity(iLocal_52[0], iVar0, 1)) {
					iLocal_50 = 5;
					return true;
				}
			}
		}
		if (!ped::is_ped_injured(iLocal_52[1]) || entity::is_entity_dead(iLocal_52[1], 0)) {
			if (entity::has_entity_been_damaged_by_entity(iLocal_52[1], player::player_ped_id(), 1)) {
				iLocal_50 = 5;
				return true;
			}
			if (entity::is_entity_touching_entity(player::player_ped_id(), iLocal_52[1]) &&
				entity::get_entity_speed(player::player_ped_id()) > 0.1f) {
				iLocal_50 = 5;
				return true;
			}
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				if (entity::has_entity_been_damaged_by_entity(iLocal_52[1], iVar0, 1)) {
					iLocal_50 = 5;
					return true;
				}
			}
		}
		if (!entity::is_entity_dead(iLocal_72, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iLocal_72, player::player_ped_id(), 1)) {
				iLocal_50 = 4;
				return true;
			}
			if (entity::is_entity_touching_entity(player::player_ped_id(), iLocal_72)) {
				iLocal_50 = 4;
				return true;
			}
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				if (entity::has_entity_been_damaged_by_entity(iLocal_72, iVar0, 1)) {
					iLocal_50 = 4;
					return true;
				}
			}
		}
		else if (entity::has_entity_been_damaged_by_entity(iLocal_72, player::player_ped_id(), 1)) {
			iLocal_50 = 4;
			return true;
		}
	}
	return false;
}

// Position - 0x63C6
void func_133() {
	func_135(39, 1);
	func_135(40, 1);
	func_135(41, 1);
	func_135(42, 1);
	func_135(43, 1);
	func_135(44, 1);
	ped::add_scenario_blocking_area(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, 0, 1, 1, 1);
	ped::add_scenario_blocking_area(vLocal_96 - Vector(20f, 20f, 20f), vLocal_96 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	gameplay::clear_area_of_peds(vLocal_73, 50f, 0);
	pathfind::set_ped_paths_in_area(419f, -1387f, 28f, 427f, -1370f, 29f, 0, 0);
	gameplay::set_bit(&uLocal_131, 5);
	iLocal_72 = ped::create_ped(26, iLocal_76, vLocal_73, 0f, 1, 1);
	ped::set_blocking_of_non_temporary_events(iLocal_72, 1);
	streaming::set_model_as_no_longer_needed(iLocal_76);
	ped::set_ped_can_be_targetted(iLocal_72, 0);
	ped::set_ped_config_flag(iLocal_72, 185, 1);
	ped::set_ped_config_flag(iLocal_72, 206, 1);
	ped::set_ped_flee_attributes(iLocal_72, 2, 0);
	audio::stop_ped_speaking(iLocal_72, 1);
	audio::set_ambient_voice_name(iLocal_72, "REHOMGirl");
	ped::set_ped_component_variation(iLocal_72, 0, 2, 1, 0);
	ped::set_ped_component_variation(iLocal_72, 2, 0, 0, 0);
	ped::set_ped_component_variation(iLocal_72, 3, 1, 4, 0);
	ped::set_ped_component_variation(iLocal_72, 4, 0, 5, 0);
	ped::set_ped_component_variation(iLocal_72, 6, 1, 0, 0);
	ped::add_relationship_group("OFFICERS", &iLocal_153);
	iLocal_126 = 0;
	while (iLocal_126 <= 1) {
		iLocal_52[iLocal_126] = ped::create_ped(6, iLocal_70, vLocal_55[iLocal_126 /*3*/], fLocal_62[iLocal_126], 1, 1);
		ped::set_blocking_of_non_temporary_events(iLocal_52[iLocal_126], 1);
		streaming::set_model_as_no_longer_needed(iLocal_70);
		ped::set_ped_relationship_group_hash(iLocal_52[iLocal_126], iLocal_153);
		ped::set_ped_config_flag(iLocal_52[iLocal_126], 42, 1);
		iLocal_126++;
	}
	weapon::give_weapon_to_ped(iLocal_52[0], joaat("weapon_pistol"), -1, 1, 1);
	weapon::give_weapon_to_ped(iLocal_52[1], joaat("weapon_pistol"), -1, 0, 1);
	ped::set_relationship_between_groups(5, iLocal_153, 1862763509);
	ped::set_relationship_between_groups(1, iLocal_153, -1533126372);
	ped::set_relationship_between_groups(1, -1533126372, iLocal_153);
	iLocal_65 = vehicle::create_vehicle(iLocal_71, vLocal_66, fLocal_69, 1, 1);
	vehicle::set_vehicle_model_is_suppressed(iLocal_71, 1);
	vehicle::set_vehicle_on_ground_properly(iLocal_65, 1084227584);
	vehicle::set_vehicle_siren(iLocal_65, 1);
	func_134(&uLocal_154, 5, iLocal_52[0], "ACULTMember1", 0, 1);
	func_134(&uLocal_154, 4, iLocal_52[1], "ACULTMember2", 0, 1);
	func_134(&uLocal_154, 3, iLocal_72, "REHOMGirl", 0, 1);
	if (func_98() == 0) {
		func_134(&uLocal_154, 0, player::player_ped_id(), "MICHAEL", 0, 1);
	}
	else if (func_98() == 1) {
		func_134(&uLocal_154, 1, player::player_ped_id(), "FRANKLIN", 0, 1);
	}
	iLocal_149 = ped::create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
	ped::attach_synchronized_scene_to_entity(iLocal_149, iLocal_65, 0);
	ai::task_synchronized_scene(iLocal_72, iLocal_149, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0,
								1148846080, 0);
	ai::task_synchronized_scene(iLocal_52[0], iLocal_149, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0,
								1148846080, 0);
	ai::task_synchronized_scene(iLocal_52[1], iLocal_149, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0,
								1148846080, 0);
	ped::set_synchronized_scene_looped(iLocal_149, 1);
}

// Position - 0x66C0
void func_134(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x675B
void func_135(int iParam0, int iParam1) {
	if (iParam1) {
		if (!func_142(iParam0, 2, 1)) {
			func_141(iParam0, 2, 1);
		}
	}
	else if (func_142(iParam0, 2, 1)) {
		func_136(iParam0, 2, 1);
	}
}

// Position - 0x6792
void func_136(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::clear_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_11() == 0) {
			iVar0 = func_139(func_140(iParam0), -1, 0);
			gameplay::clear_bit(&iVar0, iParam1);
			func_137(func_140(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::clear_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x67FB
void func_137(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x682B
int func_138(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_14();
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

// Position - 0x685F
int func_139(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_138(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x6891
int func_140(int iParam0) {
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

// Position - 0x6B58
void func_141(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::set_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_11() == 0) {
			iVar0 = func_139(func_140(iParam0), -1, 0);
			gameplay::set_bit(&iVar0, iParam1);
			func_137(func_140(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::set_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x6BC1
bool func_142(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_11() == 0) {
			return gameplay::is_bit_set(func_139(func_140(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return false;
}

// Position - 0x6C21
void func_143() {
	streaming::request_model(iLocal_76);
	streaming::request_model(iLocal_70);
	streaming::request_model(iLocal_71);
	streaming::request_anim_dict("random@homelandsecurity");
	if (streaming::has_model_loaded(iLocal_76) && streaming::has_model_loaded(iLocal_70) &&
		streaming::has_model_loaded(iLocal_71) && streaming::has_anim_dict_loaded("random@homelandsecurity")) {
		bLocal_104 = true;
	}
	else {
		streaming::request_model(iLocal_76);
		streaming::request_model(iLocal_70);
		streaming::request_model(iLocal_71);
		streaming::request_anim_dict("random@homelandsecurity");
	}
}

// Position - 0x6C8C
void func_144() {
	iLocal_76 = joaat("a_f_y_tourist_01");
	iLocal_70 = joaat("a_m_o_acult_01");
	iLocal_71 = joaat("fugitive");
	vLocal_73 = {-174.0522f, 1905.611f, 197.0466f};
	vLocal_55[0 /*3*/] = {-174.3279f, 1903.972f, 197.0502f};
	fLocal_62[0] = 147.8596f;
	vLocal_55[1 /*3*/] = {-174.3233f, 1906.384f, 197.0145f};
	fLocal_62[1] = 164.5974f;
	vLocal_66 = {-172.4207f, 1905.183f, 197.1163f};
	fLocal_69 = 187.3899f;
	vLocal_93 = {469.8768f, 2617.532f, 42.2566f};
	vLocal_96 = {472.2393f, 2611.611f, 42.2676f};
	vLocal_99 = {-1034.6f, 4918.6f, 205.9f};
	iLocal_103 = 1;
}

// Position - 0x6D52
bool func_145() {
	if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
		if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_44) < 75f * 75f) {
			return true;
		}
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_156()) {
			return false;
		}
	}
	if (func_152()) {
		return true;
	}
	if (func_146(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x6DD8
int func_146(float fParam0, int iParam1) {
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
		if (func_24(func_98())) {
			iVar36 = func_21();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63) {
				iVar32 = iVar37;
				if (gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 2) &&
					!gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 3)) {
					func_147(iVar32, &Var0);
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

// Position - 0x6E8F
void func_147(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_148(uParam1, "Abigail1", func_150(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
		break;

	case 1:
		func_148(uParam1, "Abigail2", func_150(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
		break;

	case 2:
		func_148(uParam1, "Barry1", func_150(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_149(iParam0), 1, 0);
		break;

	case 3:
		func_148(uParam1, "Barry2", func_150(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_149(iParam0), 1, 1);
		break;

	case 4:
		func_148(uParam1, "Barry3", func_150(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 5:
		func_148(uParam1, "Barry3A", func_150(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 6:
		func_148(uParam1, "Barry3C", func_150(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 7:
		func_148(uParam1, "Barry4", func_150(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_149(iParam0), 0, 0);
		break;

	case 8:
		func_148(uParam1, "Dreyfuss1", func_150(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 9:
		func_148(uParam1, "Epsilon1", func_150(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 10:
		func_148(uParam1, "Epsilon2", func_150(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
		break;

	case 11:
		func_148(uParam1, "Epsilon3", func_150(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 12:
		func_148(uParam1, "Epsilon4", func_150(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 13:
		func_148(uParam1, "Epsilon5", func_150(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
		break;

	case 14:
		func_148(uParam1, "Epsilon6", func_150(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 15:
		func_148(uParam1, "Epsilon7", func_150(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 16:
		func_148(uParam1, "Epsilon8", func_150(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
		break;

	case 17:
		func_148(uParam1, "Extreme1", func_150(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 18:
		func_148(uParam1, "Extreme2", func_150(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 19:
		func_148(uParam1, "Extreme3", func_150(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 20:
		func_148(uParam1, "Extreme4", func_150(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 21:
		func_148(uParam1, "Fanatic1", func_150(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_149(iParam0), 1, 0);
		break;

	case 22:
		func_148(uParam1, "Fanatic2", func_150(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_149(iParam0), 1, 0);
		break;

	case 23:
		func_148(uParam1, "Fanatic3", func_150(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_149(iParam0), 0, 1);
		break;

	case 24:
		func_148(uParam1, "Hao1", func_150(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_149(iParam0), 0, 1);
		break;

	case 25:
		func_148(uParam1, "Hunting1", func_150(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 26:
		func_148(uParam1, "Hunting2", func_150(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 27:
		func_148(uParam1, "Josh1", func_150(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
		break;

	case 28:
		func_148(uParam1, "Josh2", func_150(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
		break;

	case 29:
		func_148(uParam1, "Josh3", func_150(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
		break;

	case 30:
		func_148(uParam1, "Josh4", func_150(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_149(iParam0), 1, 0);
		break;

	case 31:
		func_148(uParam1, "Maude1", func_150(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 32:
		func_148(uParam1, "Minute1", func_150(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 33:
		func_148(uParam1, "Minute2", func_150(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 34:
		func_148(uParam1, "Minute3", func_150(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 35:
		func_148(uParam1, "MrsPhilips1", func_150(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 36:
		func_148(uParam1, "MrsPhilips2", func_150(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_149(iParam0), 0, 0);
		break;

	case 37:
		func_148(uParam1, "Nigel1", func_150(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_149(iParam0), 1, 0);
		break;

	case 38:
		func_148(uParam1, "Nigel1A", func_150(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
		break;

	case 39:
		func_148(uParam1, "Nigel1B", func_150(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_149(iParam0), 1, 1);
		break;

	case 40:
		func_148(uParam1, "Nigel1C", func_150(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_149(iParam0), 1, 1);
		break;

	case 41:
		func_148(uParam1, "Nigel1D", func_150(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_149(iParam0), 1, 1);
		break;

	case 42:
		func_148(uParam1, "Nigel2", func_150(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
		break;

	case 43:
		func_148(uParam1, "Nigel3", func_150(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
		break;

	case 44:
		func_148(uParam1, "Omega1", func_150(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 45:
		func_148(uParam1, "Omega2", func_150(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 46:
		func_148(uParam1, "Paparazzo1", func_150(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 47:
		func_148(uParam1, "Paparazzo2", func_150(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 48:
		func_148(uParam1, "Paparazzo3", func_150(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 49:
		func_148(uParam1, "Paparazzo3A", func_150(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 50:
		func_148(uParam1, "Paparazzo3B", func_150(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 51:
		func_148(uParam1, "Paparazzo4", func_150(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 52:
		func_148(uParam1, "Rampage1", func_150(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 54:
		func_148(uParam1, "Rampage3", func_150(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_149(iParam0), 1, 0);
		break;

	case 55:
		func_148(uParam1, "Rampage4", func_150(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_149(iParam0), 1, 0);
		break;

	case 56:
		func_148(uParam1, "Rampage5", func_150(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
		break;

	case 53:
		func_148(uParam1, "Rampage2", func_150(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
		break;

	case 57:
		func_148(uParam1, "TheLastOne", func_150(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 58:
		func_148(uParam1, "Tonya1", func_150(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 59:
		func_148(uParam1, "Tonya2", func_150(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	case 60:
		func_148(uParam1, "Tonya3", func_150(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_149(iParam0), 0, 1);
		break;

	case 61:
		func_148(uParam1, "Tonya4", func_150(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_149(iParam0), 0, 1);
		break;

	case 62:
		func_148(uParam1, "Tonya5", func_150(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x8006
void func_148(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x8097
int func_149(int iParam0) {
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

// Position - 0x83DD
struct<2> func_150(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_151(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x8413
struct<2>
func_151(int iParam0) {
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

//Position - 0x885E
bool func_152()
{
	if (func_155() && !func_156()) {
		return true;
	}
	if (func_154() && func_153()) {
		return true;
	}
	return false;
}

// Position - 0x8890
bool func_153() { return Global_101418 > 0; }

// Position - 0x889E
int func_154() {
	if (Global_88746 != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x88B3
int func_155() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x88D9
int func_156() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x88F6
bool func_157() {
	if (!func_128(5)) {
		return true;
	}
	if (func_152()) {
		return true;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_156()) {
			return false;
		}
	}
	if (func_146(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x8958
bool func_158() {
	if (Global_101689 == func_30() && gameplay::get_random_event_flag() && Global_101690) {
		return true;
	}
	return false;
}

// Position - 0x8983
void func_159(int iParam0) {
	if (iParam0 == -1) {
		iParam0 = func_30();
	}
	if (iParam0 == -1) {
		return;
	}
	func_161(iParam0);
	gameplay::_0x65D2EBB47E1CEC21(0);
	gameplay::set_random_event_flag(1);
	Global_101686 = 0;
	func_160();
}

// Position - 0x89B9
void func_160() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			vehicle::set_vehicle_model_is_suppressed(
				entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)), 1);
		}
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
	}
}

// Position - 0x89F6
void func_161(int iParam0) { Global_101689 = iParam0; }

// Position - 0x8A04
bool func_162(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;

	if (!Global_138924) {
		return false;
	}
	if (iParam3 == -1) {
		iParam3 = func_30();
	}
	if (iParam3 == -1) {
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32) {
		if (!func_203()) {
			return false;
		}
	}
	vLocal_44 = {vParam0};
	iVar0 = 0;
	if (!iVar0) {
		if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
			vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_156()) {
				return false;
			}
		}
		if (!Global_101700.f_8044) {
			return false;
		}
		if (func_7(0)) {
			return false;
		}
		if (func_152()) {
			return false;
		}
		if (func_202()) {
			return false;
		}
		if (Global_101689 != -1) {
			return false;
		}
		if (func_24(func_98())) {
			if (func_146(100f, 1) != -1) {
				return false;
			}
		}
		if (player::is_player_playing(player::player_id()) && !iParam6) {
			if (vVar1.z - vLocal_44.z > 50f) {
				return false;
			}
		}
		if (!func_201(iParam3)) {
			return false;
		}
		if (func_24(func_98())) {
			if (func_200(func_98()) == 4 || func_200(func_98()) == 5) {
				return false;
			}
		}
		if (func_24(func_98())) {
			if (!func_199(iParam3, iParam4, 145)) {
				return false;
			}
		}
		if (!func_198(Global_101700.f_23954.f_43[iParam3])) {
			return false;
		}
		if (gameplay::get_game_timer() - Global_101691 < 150000) {
			if (iParam3 != 30) {
				return false;
			}
		}
		if (func_197()) {
			return false;
		}
		if (gameplay::get_mission_flag()) {
			return false;
		}
		if (gameplay::get_random_event_flag()) {
			return false;
		}
		if (!func_188(4)) {
			return false;
		}
		if (!func_128(5)) {
			return false;
		}
		if (func_187(iParam3, iParam4) && !iParam5) {
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
		if (iParam3 == 9 && (iParam4 == 2 || iParam4 == 5) && !func_187(0, 0)) {
			return false;
		}
		if (Global_25336) {
			return false;
		}
		if (func_201(30) && !func_187(30, 0)) {
			if (iParam3 != 30) {
				if (system::vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f) {
					return false;
				}
			}
		}
		if (func_24(func_98())) {
			iVar4 = 0;
			while (iVar4 < 3) {
				vVar5 = {Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_186(iVar8)) {
					if (func_164(iVar4)) {
						if (!func_163(vVar5, 0f, 0f, 0f, 0)) {
							if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 0), vVar5) <
								210f * 210f) {
								if (func_98() != iVar4) {
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

// Position - 0x8D9E
bool func_163(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x8DE5
bool func_164(int iParam0) {
	int iVar0;

	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
	return func_165(iVar0);
}

// Position - 0x8E06
int func_165(int iParam0) { return func_166(iParam0, 1); }

// Position - 0x8E15
int func_166(int iParam0, int iParam1) {
	int *iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_186(iParam0)) {
		return 0;
	}
	func_167(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (iVar5 > 0 || iVar4 > 0 || iVar3 > 0 || iVar2 >= iParam1) {
		return 1;
	}
	return 0;
}

// Position - 0x8E68
void func_167(int iParam0, int *iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6) {
	func_168(func_179(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x8E86
void func_168(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6,
			  int *iParam7) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_178(iParam0, iParam1)) {
		iVar0 = func_177(iParam1);
		iVar1 = func_175(iParam0);
		iVar2 = func_175(iParam0) - func_175(iParam1);
		iVar3 = func_177(iParam0) - func_177(iParam1);
		iVar4 = func_174(iParam0) - func_174(iParam1);
		iVar5 = func_173(iParam0) - func_173(iParam1);
		iVar6 = func_172(iParam0) - func_172(iParam1);
		iVar7 = func_171(iParam0) - func_171(iParam1);
	}
	else {
		iVar0 = func_177(iParam0);
		iVar1 = func_175(iParam1);
		iVar2 = func_175(iParam1) - func_175(iParam0);
		iVar3 = func_177(iParam1) - func_177(iParam0);
		iVar4 = func_174(iParam1) - func_174(iParam0);
		iVar5 = func_173(iParam1) - func_173(iParam0);
		iVar6 = func_172(iParam1) - func_172(iParam0);
		iVar7 = func_171(iParam1) - func_171(iParam0);
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
		iVar4 += func_170(iVar0, iVar1);
		iVar3--;
		iVar0 = system::round(func_169(system::to_float(iVar0 + 1), 0f, 12f));
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

// Position - 0x9087
float func_169(float fParam0, float fParam1, float fParam2) {
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

// Position - 0x90C9
int func_170(int iParam0, int iParam1) {
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

// Position - 0x916B
int func_171(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x917E
int func_172(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x9191
int func_173(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x91A4
int func_174(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x91B6
int func_175(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_176(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x91DB
int func_176(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x91F2
int func_177(int iParam0) { return iParam0 & 15; }

// Position - 0x91FF
bool func_178(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_186(iParam1) || !func_186(iParam0)) {
		return true;
	}
	iVar0 = func_175(iParam0);
	iVar1 = func_175(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_177(iParam0);
	iVar1 = func_177(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_172(iParam0);
	iVar1 = func_172(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_171(iParam0);
	iVar1 = func_171(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	return false;
}

// Position - 0x930B
int func_179() {
	int *iVar0;

	func_185(&iVar0, time::get_clock_seconds());
	func_184(&iVar0, time::get_clock_minutes());
	func_183(&iVar0, time::get_clock_hours());
	func_182(&iVar0, time::get_clock_day_of_month());
	func_181(&iVar0, time::get_clock_month());
	func_180(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x9351
void func_180(int *iParam0, int iParam1) {
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

// Position - 0x93D7
void func_181(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x940A
void func_182(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_177(*uParam0);
	iVar1 = func_175(*uParam0);
	if (iParam1 < 1 || iParam1 > func_170(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x945B
void func_183(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x9495
void func_184(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x94D0
void func_185(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x950C
bool func_186(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return false;
	}
	iVar0 = func_171(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return false;
	}
	iVar1 = func_172(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return false;
	}
	iVar2 = func_173(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return false;
	}
	iVar3 = func_175(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return false;
	}
	iVar4 = func_177(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return false;
	}
	iVar5 = func_174(iParam0);
	if (iVar5 < 1 || iVar5 > func_170(iVar4, iVar3)) {
		return false;
	}
	return true;
}

// Position - 0x95E8
int func_187(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_101700.f_23954.f_8[iParam0], iParam1)) {
		return 1;
	}
	return 0;
}

// Position - 0x960B
int func_188(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_98();
				if (!func_24(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_196() || Global_100747 ||
						Global_25192 || func_195() || func_73(8, -1) || func_194() || func_193() || func_192() ||
						func_191() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_196() || Global_25192 ||
						func_195() || func_73(8, -1) || func_192() || func_194() || func_193() || func_191() ||
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_196() || Global_100747 ||
						Global_25192 || func_195() || func_73(8, -1) || func_192() || func_194() || func_193() ||
						func_191() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return 0;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_196() || Global_100747 ||
						Global_25192 || func_195() || func_73(8, -1) || func_194() || func_193() || func_191() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 4:
					if (func_196() || player::get_player_wanted_level(player::player_id()) > 0 || func_73(8, -1) ||
						func_191() || func_190() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 5:
					if (func_73(8, -1) || func_194() || func_193() || func_190() || func_189()) {
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
							player::is_player_climbing(player::player_id()) || func_196() || Global_25192 ||
							func_195() || func_73(8, -1) || func_193() || func_192() || func_191() ||
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
						player::is_player_being_arrested(player::player_id(), 1) || func_196() || func_193() ||
						Global_100747 || Global_25192 || func_195() || Global_36912 || func_73(8, -1) || func_192() ||
						func_190() || func_191() || Global_101700.f_6647.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_196() || Global_100747 ||
						Global_25192 || func_195() || func_73(8, -1) || func_192() || func_190() || func_194() ||
						func_193() || func_191()) {
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

// Position - 0x9D28
var func_189() { return Global_91530.f_1; }

// Position - 0x9D36
int func_190() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x9D5C
int func_191() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x9D76
int func_192() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x9DA0
bool func_193() { return Global_91543.f_304 > 0; }

// Position - 0x9DB1
bool func_194() { return Global_91543.f_303 > 0; }

// Position - 0x9DC2
var func_195() { return Global_1315233; }

// Position - 0x9DCE
int func_196() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x9DEA
bool func_197() {
	func_71();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
		return true;
	}
	return false;
}

// Position - 0x9E12
int func_198(int iParam0) { return func_178(func_179(), iParam0); }

// Position - 0x9E24
int func_199(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_98();
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

// Position - 0x9F08
int func_200(int iParam0) {
	if (!func_24(iParam0)) {
		return 7;
	}
	return Global_101700.f_6647.f_919[iParam0];
}

// Position - 0x9F2C
int func_201(int iParam0) {
	int iVar0;
	var uVar1;

	if (iParam0 == 31 || iParam0 == 32) {
		if (!func_203()) {
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

// Position - 0x9F8A
bool func_202() {
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

// Position - 0x9FCE
int func_203() {
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

// Position - 0xA089
void func_204() {
	int iVar0;

	if (iLocal_102) {
		func_218(0);
		if (Global_25428) {
			audio::trigger_music_event("AC_STOP");
		}
		func_217();
		ped::remove_scenario_blocking_areas();
		pathfind::set_ped_paths_back_to_original(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		player::reset_wanted_level_difficulty(player::player_id());
		player::set_wanted_level_multiplier(1f);
		func_93();
		if (iLocal_103) {
			streaming::set_model_as_no_longer_needed(iLocal_76);
			streaming::set_model_as_no_longer_needed(iLocal_70);
			streaming::set_model_as_no_longer_needed(iLocal_71);
			vehicle::set_vehicle_model_is_suppressed(iLocal_71, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_52) {
			if (entity::does_entity_exist(iLocal_52[iVar0])) {
				if (!ped::is_ped_injured(iLocal_52[iVar0])) {
					if (ped::is_ped_injured(player::player_ped_id())) {
						ai::task_aim_gun_at_coord(iLocal_52[iVar0], func_216(player::player_id()), -1, 0, 0);
						ped::set_ped_keep_task(iLocal_52[iVar0], 1);
						if (!ped::is_ped_injured(iLocal_72)) {
							ai::task_cower(iLocal_72, -1);
							ped::set_ped_keep_task(iLocal_72, 1);
						}
					}
					ped::set_blocking_of_non_temporary_events(iLocal_52[iVar0], 0);
				}
				entity::set_ped_as_no_longer_needed(&iLocal_52[iVar0]);
			}
			iVar0++;
		}
		if (entity::does_entity_exist(iLocal_72)) {
			if (!ped::is_ped_injured(iLocal_72)) {
				ped::set_ped_config_flag(iLocal_72, 317, 1);
				if (ped::is_ped_in_group(iLocal_72)) {
					ped::remove_ped_from_group(iLocal_72);
				}
				if (!ped::is_ped_in_any_vehicle(iLocal_72, 0)) {
					ped::reset_ped_last_vehicle(iLocal_72);
				}
				ped::set_blocking_of_non_temporary_events(iLocal_72, 0);
			}
			entity::set_ped_as_no_longer_needed(&iLocal_72);
		}
		if (entity::does_entity_exist(iLocal_65)) {
			entity::set_vehicle_as_no_longer_needed(&iLocal_65);
		}
		gameplay::enable_dispatch_service(5, 1);
		if (player::is_player_playing(player::player_id())) {
			if (!player::is_player_control_on(player::player_id())) {
				player::set_player_control(player::player_id(), 1, 0);
			}
		}
	}
	func_205(-1);
	script::terminate_this_thread();
}

// Position - 0xA213
void func_205(int iParam0) {
	char cVar0[64];

	if (iParam0 == -1) {
		iParam0 = func_30();
	}
	if (iParam0 == -1) {
		return;
	}
	if (func_158()) {
		func_209(iParam0);
		ui::set_mission_name(0, 0);
		Global_101691 = gameplay::get_game_timer();
		func_208(30000);
		StringCopy(&cVar0, func_207(Global_101689, 1), 64);
		if (func_29(Global_101689) > 0) {
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		stats::_0x71862B1D855F32E1(&cVar0, Global_101686, gameplay::get_game_timer() - Global_101687, 0);
	}
	else if (gameplay::is_bit_set(Global_101696, 0) && Global_101700.f_23954.f_2 < 3) {
		gameplay::clear_bit(&Global_101696, 0);
	}
	func_206(&Global_25249);
	Global_101690 = 0;
	func_161(-1);
}

// Position - 0xA2C8
void func_206(int *iParam0) {
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

// Position - 0xA305
char *func_207(int iParam0, int iParam1) {
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

// Position - 0xA54E
void func_208(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0xA560
void func_209(int iParam0) { func_210(iParam0, 0, func_215(iParam0)); }

// Position - 0xA575
void func_210(int iParam0, int iParam1, int iParam2) {
	int *iVar0;
	struct<16> Var1;

	iVar0 = func_179();
	func_213(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_212(iParam0, &iVar0);
	Var1 = {func_211(&iVar0)};
}

// Position - 0xA5A4
struct<16> func_211(int *iParam0) {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_173(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_172(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_171(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_174(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_177(*iParam0);
	if (iVar16 < 9) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_175(*iParam0), 64);
	return Var0;
}

//Position - 0xA673
void func_212(int iParam0, int* iParam1)
{
	Global_101700.f_23954.f_43[iParam0] = *iParam1;
}

// Position - 0xA68B
void func_213(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_175(*iParam0);
	iVar1 = func_177(*iParam0);
	iVar2 = func_174(*iParam0);
	iVar3 = func_173(*iParam0);
	iVar4 = func_172(*iParam0);
	iVar5 = func_171(*iParam0);
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
	iVar6 = func_170(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_170(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_214(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0xA80D
void func_214(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_185(iParam0, iParam1);
	func_184(iParam0, iParam2);
	func_183(iParam0, iParam3);
	func_181(iParam0, iParam5);
	func_182(iParam0, iParam4);
	func_180(iParam0, iParam6);
}

// Position - 0xA845
int func_215(int iParam0) {
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

// Position - 0xA9E8
Vector3 func_216(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0xA9FB
void func_217() {
	Global_25424 = 0;
	Global_25425 = 0;
	Global_25427 = 0;
	Global_25428 = 0;
	Global_25429 = 0;
}

// Position - 0xAA17
void func_218(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 46) {
		func_135(iVar0, iParam0);
		iVar0++;
	}
}
