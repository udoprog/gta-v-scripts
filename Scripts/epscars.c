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
vector3 vLocal_40 = {0f, 0f, 0f};
struct<27> Local_43 = {
	0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014350479, 2, 0, 0, 0, 0, 0, 0, 0
};
vector3 vLocal_70[5] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
int iLocal_86[5] = {0, 0, 0, 0, 0};
int *iLocal_92 = NULL;
int *iLocal_93 = NULL;
int iLocal_94 = 0;
int iLocal_95 = 0;
int iLocal_96 = 0;
int iLocal_97 = 0;
int iLocal_98 = 0;
int iLocal_99 = 0;
int iLocal_100 = 0;
int iLocal_101 = 0;
int iLocal_102 = 0;
int iLocal_103 = 0;
int iLocal_104 = 0;
int iLocal_105 = 0;
int iLocal_106 = 0;
int iLocal_107 = 0;
int iLocal_108 = 0;
vector3 vLocal_109[2] = {{0f, 0f, 0f}, {0f, 0f, 0f}};
var uLocal_116 = 0;
int iLocal_117 = 0;
int iLocal_118 = 0;
var *uLocal_119 = NULL;
var uLocal_120 = 0;
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
int *iLocal_284 = NULL;
int iLocal_285 = 0;
var *uLocal_286 = NULL;
#pragma endregion //}

void __EntryFunction__() {
	vector3 vVar0;
	vector3 vVar3;

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
	vLocal_40 = {-690.938f, 512.2703f, 109.3639f};
	iLocal_100 = -1;
	iLocal_108 = 60000;
	iLocal_285 = 99;
	if (player::has_force_cleanup_occurred(146)) {
		func_90();
	}
	if (func_89(90) == 1) {
		func_88();
		script::terminate_this_thread();
	}
	iLocal_99 = Global_101700.f_9008.f_103;
	func_87();
	if (func_86()) {
		func_90();
	}
	func_85(6);
	func_84(&Local_43, joaat("prop_ch2_09c_garage_door"), -689.81f, 510.34f, 109.98f, vLocal_40, -688.4919f, 507.2549f,
			108.9186f, -691.8835f, 516.2689f, 113.4316f, 9.25f, -687.4553f, 507.5179f, 109.3635f, -690.9484f, 506.2783f,
			109.3631f);
	func_83(&Local_43, 2);
	Local_43.f_4 = 3;
	gameplay::clear_area_of_vehicles(vLocal_40, 5f, 0, 0, 0, 0, 0);
	func_82(&vLocal_109, -691.9059f, 515.8249f, 108.6139f, -684.0605f, 493.0171f, 110.8504f, 8.25f);
	pathfind::set_roads_in_angled_area(vLocal_109[0 /*3*/], vLocal_109[1 /*3*/], 8.25f, 0, 0, 1);
	pathfind::set_roads_in_angled_area(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0,
									   1);
	func_81(-688.5f, 503.7f, 110.2f, 30f, &vVar0, &vVar3);
	iLocal_118 = ped::add_scenario_blocking_area(vVar0, vVar3, 0, 1, 1, 1);
	if (func_89(90) == 1) {
		func_88();
		func_90();
	}
	if (Global_101700.f_9008.f_104 == 0) {
		Global_101700.f_9008.f_104 = time::get_clock_day_of_month();
	}
	func_77(1);
	func_76(0);
	while (true) {
		if (func_89(90) == 1) {
			func_88();
			func_90();
		}
		func_75(player::player_ped_id());
		if (gameplay::get_mission_flag() || func_70() != 0) {
			func_65();
		}
		switch (iLocal_94) {
		case 0: func_64(&iLocal_93); break;

		case 4: func_63(&iLocal_93); break;

		case 1: func_62(&iLocal_93); break;

		case 2: func_56(&iLocal_93); break;

		case 3: func_52(&iLocal_93); break;

		case 6:
			func_49(2, 6, 1);
			func_48(2, "EPS_LSTEMAIL", 1);
			func_47(2);
			func_90();
			break;
		}
		func_44(&Local_43);
		if (func_43(&Local_43)) {
			if (func_37(&Local_43)) {
				if (vehicle::get_last_driven_vehicle() == Global_69436) {
					Global_69436 = 0;
					Global_101700.f_31389.f_5588 = 0;
				}
				gameplay::clear_area_of_vehicles(Local_43.f_14, 8.5f, 0, 0, 0, 0, 0);
				Global_101700.f_9008.f_103 = iLocal_99;
				func_35();
				func_34(&uLocal_119, 0, player::player_ped_id(), "MICHAEL", 0, 1);
				func_22(&uLocal_119, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
				if (func_21("EPS_DROP_HELP")) {
					ui::clear_help(1);
				}
				func_19();
			}
		}
		if (Global_101700.f_9008.f_104 != 0) {
			iLocal_97 = Global_101700.f_9008.f_104 + 14 % func_18(time::get_clock_month(), time::get_clock_year());
			if (time::get_clock_day_of_month() == iLocal_97 && !func_17(0) &&
				!player::is_player_dead(player::player_id()) && player::is_player_playing(player::player_id())) {
				func_4(func_16());
			}
		}
		func_1(&iLocal_284, &uLocal_286, &iLocal_285);
		if (iLocal_107 > 0 && gameplay::get_game_timer() > iLocal_107 && iLocal_285 == 99) {
			iLocal_107 = 0;
			if (func_86()) {
				func_76(6);
			}
		}
		system::wait(0);
	}
}

// Position - 0x3E2
void func_1(int *iParam0, var *uParam1, int *iParam2) {
	int iVar0;

	switch (*iParam2) {
	case 0:
		*iParam0 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
		if (graphics::has_scaleform_movie_loaded(*iParam0)) {
			iVar0 = audio::get_sound_id();
			audio::play_sound_frontend(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 1);
			*iParam2++;
		}
		break;

	case 1:
		graphics::_push_scaleform_movie_function(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
		graphics::begin_text_command_scaleform_string("EPS_CAR_TITLE");
		graphics::end_text_command_scaleform_string();
		graphics::begin_text_command_scaleform_string("EPS_CAR_NOTE");
		ui::add_text_component_integer(func_3());
		graphics::end_text_command_scaleform_string();
		graphics::_pop_scaleform_movie_function_void();
		*uParam1 = gameplay::get_game_timer();
		*iParam2++;
		break;

	case 2:
		if (gameplay::get_game_timer() - *uParam1 > 7000) {
			graphics::_push_scaleform_movie_function(*iParam0, "SHARD_ANIM_OUT");
			graphics::_push_scaleform_movie_function_parameter_int(1);
			graphics::_push_scaleform_movie_function_parameter_float(0.33f);
			graphics::_pop_scaleform_movie_function_void();
			*iParam2++;
		}
		else if (!func_2()) {
			if (graphics::has_scaleform_movie_loaded(*iParam0)) {
				graphics::draw_scaleform_movie_fullscreen(*iParam0, 100, 100, 100, 255, 0);
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - *uParam1 > 7500) {
			*iParam2++;
		}
		else if (!func_2()) {
			if (graphics::has_scaleform_movie_loaded(*iParam0)) {
				graphics::draw_scaleform_movie_fullscreen(*iParam0, 100, 100, 100, 255, 0);
			}
		}
		break;

	case 4:
		if (graphics::has_scaleform_movie_loaded(*iParam0)) {
			graphics::set_scaleform_movie_as_no_longer_needed(iParam0);
		}
		*iParam2 = 99;
		break;

	case 99: break;
	}
}

// Position - 0x537
int func_2() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x561
int func_3() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		if (gameplay::is_bit_set(iLocal_99, iVar0)) {
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

// Position - 0x594
void func_4(int iParam0) {
	int iVar0;

	if (iParam0 <= 0) {
		return;
	}
	func_49(2, vLocal_70[5 - iParam0 /*3*/], 1);
	if (func_15(iLocal_100)) {
		func_48(2, vLocal_70[5 - iParam0 /*3*/].f_2, 0);
	}
	else {
		func_48(2, vLocal_70[5 - iParam0 /*3*/].f_1, 0);
	}
	iParam0 = 0;
	iVar0 = 0;
	iParam0 = 0;
	while (iParam0 < iLocal_86) {
		if (!func_14(iParam0)) {
			func_12(2, func_13(iLocal_86[iParam0]));
			iVar0++;
		}
		iParam0++;
	}
	func_5(2);
	Global_101700.f_9008.f_104 = time::get_clock_day_of_month();
	if (iVar0 == 0) {
	}
}

// Position - 0x630
void func_5(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char *sVar8;

	iVar0 = func_11(iParam0);
	if (iVar0 == -1) {
		return;
	}
	if (Global_46225[iVar0 /*203*/].f_9 == 0) {
		return;
	}
	iVar1 = Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/];
	iVar2 = Global_46225[iVar0 /*203*/].f_9 - 1;
	if (!Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1) {
		iVar7 = Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_10(Global_36925[iVar7 /*12*/].f_1)}, 4);
	}
	else {
		Var3 = {Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2};
	}
	if (iParam0 == 28) {
		switch (iVar1) {
		case 249: sVar8 = "PW_FEED_EM_1"; break;

		case 269: sVar8 = "PW_FEED_EM_3"; break;

		default: sVar8 = "PW_FEED_EM_2"; break;
		}
		func_6(1, Global_36925[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else {
		switch (Global_36925[iVar1 /*12*/].f_3) {
		case 0:
			func_6(0, Global_36925[iVar1 /*12*/].f_2, iVar1, &Var3,
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]);
			break;

		case 1:
			func_6(1, Global_36925[iVar1 /*12*/].f_2, iVar1, &Var3,
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]);
			break;

		case 2:
			func_6(2, Global_36925[iVar1 /*12*/].f_2, iVar1, &Var3,
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/],
				   &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]);
			break;
		}
	}
}

// Position - 0x99D
void func_6(int iParam0, int iParam1, int iParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6,
			char *sParam7, char *sParam8, char *sParam9, char *sParam10, char *sParam11, char *sParam12,
			char *sParam13) {
	int iVar0;
	bool bVar1;
	char cVar2[64];

	if (cutscene::is_cutscene_playing()) {
		return;
	}
	iVar0 = func_70();
	bVar1 = false;
	StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
	if (iVar0 == iParam0) {
		switch (iParam2) {
		case 72: ui::_set_notification_text_entry("PROPR_INCEMAIL1"); break;

		case 73: ui::_set_notification_text_entry("PROPR_INCEMAIL3"); break;

		case 74: ui::_set_notification_text_entry("PROPR_INCEMAIL2"); break;

		default:
			ui::_set_notification_text_entry(sParam3);
			if (!gameplay::is_string_null_or_empty(sParam4)) {
				ui::add_text_component_substring_text_label(sParam4);
			}
			if (!gameplay::is_string_null_or_empty(sParam5)) {
				ui::add_text_component_substring_text_label(sParam5);
			}
			if (!gameplay::is_string_null_or_empty(sParam6)) {
				ui::add_text_component_substring_text_label(sParam6);
			}
			if (!gameplay::is_string_null_or_empty(sParam7)) {
				ui::add_text_component_substring_text_label(sParam7);
			}
			if (!gameplay::is_string_null_or_empty(sParam8)) {
				ui::add_text_component_substring_text_label(sParam8);
			}
			if (!gameplay::is_string_null_or_empty(sParam9)) {
				ui::add_text_component_substring_text_label(sParam9);
			}
			if (!gameplay::is_string_null_or_empty(sParam10)) {
				ui::add_text_component_substring_text_label(sParam10);
			}
			if (!gameplay::is_string_null_or_empty(sParam11)) {
				ui::add_text_component_substring_text_label(sParam11);
			}
			if (!gameplay::is_string_null_or_empty(sParam12)) {
				ui::add_text_component_substring_text_label(sParam12);
			}
			if (!gameplay::is_string_null_or_empty(sParam13)) {
				ui::add_text_component_substring_text_label(sParam13);
			}
			break;
		}
		if (bVar1) {
			func_7(ui::_set_notification_message(&cVar2, &cVar2, 0, 2, ui::_get_label_text(func_8(iParam1)), 0));
		}
		else {
			func_7(ui::_set_notification_message("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2,
												 ui::_get_label_text(func_8(iParam1)), 0));
		}
		switch (Global_14443) {
		case 0:
			StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
			Global_36917++;
			if (Global_36917 > 16) {
				Global_36917 = 16;
			}
			break;

		case 2:
			StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
			Global_36919++;
			if (Global_36919 > 16) {
				Global_36919 = 16;
			}
			break;

		case 1:
			StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
			Global_36918++;
			if (Global_36918 > 16) {
				Global_36918 = 16;
			}
			break;

		default: StringCopy(&Global_14432, "Phone_SoundSet_Default", 24); break;
		}
		audio::play_sound_frontend(-1, "Notification", &Global_14432, 1);
	}
}

// Position - 0xB83
void func_7(var uParam0) {
	Global_36920[Global_36924] = uParam0;
	Global_16803 = 1;
	Global_16802 = uParam0;
	Global_36924++;
	if (Global_36924 == 3) {
		Global_36924 = 0;
	}
}

// Position - 0xBB1
char *func_8(int iParam0) {
	switch (iParam0) {
	case 0: return "EMSTR_0";

	case 3: return "EMSTR_3";

	case 1: return "EMSTR_6";

	case 2: return "EMSTR_9";

	case 4: return "EMSTR_12";

	case 5: return "EMSTR_29";

	case 6: return "EMSTR_36";

	case 7: return "EMSTR_39";

	case 8: return "EMSTR_52";

	case 9: return "EMSTR_55";

	case 10: return "EMSTR_58";

	case 11: return "EMSTR_78";

	case 12: return "EMSTR_81";

	case 13: return "EMSTR_84";

	case 14: return "EMSTR_87";

	case 15: return "EMSTR_106";

	case 16: return "EMSTR_114";

	case 17: return "EMSTR_142";

	case 18: return "EMSTR_145";

	case 19: return "EMSTR_152";

	case 20: return "EMSTR_157";

	case 21: return "EMSTR_163";

	case 22: return "EMSTR_182";

	case 23: return "EMSTR_187";

	case 24: return "EMSTR_190";

	case 25: return "EMSTR_206";

	case 26: return "EMSTR_219";

	case 27: return "EMSTR_226";

	case 28: return "EMSTR_233";

	case 29: return "EMSTR_242";

	case 30: return "EMSTR_249";

	case 31: return "EMSTR_262";

	case 32: return "EMSTR_269";

	case 33: return "EMSTR_319";

	case 34: return "EMSTR_340";

	case 35: return "EMSTR_348";

	case 36: return "EMSTR_182";

	case 37: return "EMSTR_357";

	case 38: return "EMSTR_360";

	case 39: return "EMSTR_369";

	case 40: return "EMSTR_376";

	case 41: return "EMSTR_379";

	case 42: return "EMSTR_382";

	case 43: return "EMSTR_384";

	case 44: return "EMSTR_387";

	case 45: return "EMSTR_390";

	case 46: return "EMSTR_393";

	case 47: return "EMSTR_396";

	case 48: return "EMSTR_399";

	case 49: return "EMSTR_402";

	case 50: return "EMSTR_405";

	case 51: return "EMSTR_408";

	case 52: return "EMSTR_411";

	case 53: return "EMSTR_414";

	case 54: return "EMSTR_465";

	case 55: return "EMSTR_468";

	case 56: return "EMSTR_489";

	case 57: return "EMSTR_492";

	case 58: return "EMSTR_495";

	case 59: return "EMSTR_498";

	case 60: return "EMSTR_501";

	case 61: return "EMSTR_504";

	case 62: return "EMSTR_507";

	case 63: return "EMSTR_640";

	case 64: return "EMSTR_643";

	case 65: return "EMSTR_652";

	default:
	}
	return "NULL";
}

// Position - 0xF1C
char *func_9(int iParam0, int *iParam1) {
	*iParam1 = 1;
	switch (iParam0) {
	case 0: return ui::_get_label_text(&Global_101700.f_27009[0 /*29*/].f_7);

	case 1: return ui::_get_label_text(&Global_101700.f_27009[1 /*29*/].f_7);

	case 2: return ui::_get_label_text(&Global_101700.f_27009[2 /*29*/].f_7);

	case 7: return ui::_get_label_text(&Global_101700.f_27009[12 /*29*/].f_7);

	case 4: return ui::_get_label_text(&Global_101700.f_27009[60 /*29*/].f_7);

	case 6: return ui::_get_label_text(&Global_101700.f_27009[62 /*29*/].f_7);

	case 3: return ui::_get_label_text(&Global_101700.f_27009[14 /*29*/].f_7);

	case 16: return ui::_get_label_text(&Global_101700.f_27009[97 /*29*/].f_7);

	case 19: return ui::_get_label_text(&Global_101700.f_27009[99 /*29*/].f_7);

	case 15: return ui::_get_label_text(&Global_101700.f_27009[96 /*29*/].f_7);

	case 63: return "CHAR_CARSITE2";

	case 64: return "CHAR_BOATSITE";

	case 8: return "CHAR_BANK_MAZE";

	case 9: return "CHAR_BANK_FLEECA";

	case 10: return "CHAR_BANK_BOL";

	case 21: return "CHAR_MINOTAUR";

	case 25: return ui::_get_label_text(&Global_101700.f_27009[15 /*29*/].f_7);

	case 26: return ui::_get_label_text(&Global_101700.f_27009[30 /*29*/].f_7);

	case 27: return ui::_get_label_text(&Global_101700.f_27009[17 /*29*/].f_7);

	case 29: return ui::_get_label_text(&Global_101700.f_27009[20 /*29*/].f_7);

	case 30: return ui::_get_label_text(&Global_101700.f_27009[43 /*29*/].f_7);

	case 31: return ui::_get_label_text(&Global_101700.f_27009[44 /*29*/].f_7);

	case 32: return ui::_get_label_text(&Global_101700.f_27009[19 /*29*/].f_7);

	case 34: return ui::_get_label_text(&Global_101700.f_27009[40 /*29*/].f_7);

	case 36: return ui::_get_label_text("CELL_E_381");

	case 38: return ui::_get_label_text(&Global_101700.f_27009[64 /*29*/].f_7);

	case 5: return "CHAR_EPSILON";

	case 13: return "CHAR_MILSITE";

	case 11: return "CHAR_CARSITE";

	case 14: return "CHAR_BOATSITE";

	case 12: return "CHAR_PLANESITE";

	case 24: return "CHAR_DR_FRIEDLANDER";

	case 55: return "CHAR_CARSITE2";

	case 54: return "CHAR_BIKESITE";

	case 39: return ui::_get_label_text(&Global_101700.f_27009[122 /*29*/].f_7);

	case 40: return ui::_get_label_text(&Global_101700.f_27009[125 /*29*/].f_7);

	case 41: return ui::_get_label_text(&Global_101700.f_27009[113 /*29*/].f_7);

	case 42: return ui::_get_label_text(&Global_101700.f_27009[126 /*29*/].f_7);

	case 43: return ui::_get_label_text(&Global_101700.f_27009[127 /*29*/].f_7);

	case 44: return ui::_get_label_text(&Global_101700.f_27009[124 /*29*/].f_7);

	case 45: return ui::_get_label_text(&Global_101700.f_27009[114 /*29*/].f_7);

	case 46: return ui::_get_label_text(&Global_101700.f_27009[115 /*29*/].f_7);

	case 47: return ui::_get_label_text(&Global_101700.f_27009[116 /*29*/].f_7);

	case 48: return ui::_get_label_text(&Global_101700.f_27009[123 /*29*/].f_7);

	case 49: return ui::_get_label_text(&Global_101700.f_27009[117 /*29*/].f_7);

	case 50: return ui::_get_label_text(&Global_101700.f_27009[118 /*29*/].f_7);

	case 51: return ui::_get_label_text(&Global_101700.f_27009[119 /*29*/].f_7);

	case 52: return ui::_get_label_text(&Global_101700.f_27009[120 /*29*/].f_7);

	case 53: return ui::_get_label_text(&Global_101700.f_27009[121 /*29*/].f_7);

	default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

// Position - 0x136F
struct<16> func_10(int iParam0) {
	struct<16> Var0;
	struct<16> Var16;

	if (iParam0 > -1) {
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

//Position - 0x13A0
int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (Global_46225[iVar0 /*203*/].f_2 == iParam0) {
			if (Global_46225[iVar0 /*203*/].f_1 > iVar2) {
				iVar2 = Global_46225[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1) {
		return iVar1;
	}
	return -1;
}

// Position - 0x1404
void func_12(int iParam0, char *sParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_11(iParam0);
	if (iVar0 == -1) {
		return;
	}
	if (Global_46225[iVar0 /*203*/].f_9 == 0) {
		return;
	}
	if (Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_6 == 10) {
		return;
	}
	iVar1 = Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_6;
	Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_6++;
	StringCopy(&Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[iVar1 /*4*/], sParam1,
			   16);
}

// Position - 0x14B9
char *func_13(int iParam0) {
	if (iParam0 == iLocal_86[0]) {
		return "EPS_CARNME_0";
	}
	if (iParam0 == iLocal_86[1]) {
		return "EPS_CARNME_1";
	}
	if (iParam0 == iLocal_86[2]) {
		return "EPS_CARNME_2";
	}
	if (iParam0 == iLocal_86[3]) {
		return "EPS_CARNME_3";
	}
	if (iParam0 == iLocal_86[4]) {
		return "EPS_CARNME_4";
	}
	return "EPS_CARNME_N";
}

// Position - 0x151A
bool func_14(int iParam0) { return gameplay::is_bit_set(iLocal_99, iParam0); }

// Position - 0x152A
bool func_15(int iParam0) {
	if (iParam0 < 0) {
		return true;
	}
	return gameplay::is_bit_set(iLocal_99, iParam0 + 5);
}

// Position - 0x1546
int func_16() { return 5 - func_3(); }

// Position - 0x1554
int func_17(int iParam0) {
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

// Position - 0x15AE
int func_18(int iParam0, int iParam1) {
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

// Position - 0x1650
void func_19() {
	int iVar0;

	iLocal_285 = 0;
	stats::stat_get_int(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 6 + func_3()) {
		stats::stat_set_int(joaat("num_epsilon_step"), 6 + func_3(), 1);
		func_20(23, 6 + func_3());
	}
}

// Position - 0x1692
int func_20(int iParam0, int iParam1) {
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

// Position - 0x16E3
bool func_21(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x16F6
int func_22(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_23(sParam2, iParam3, 0);
}

// Position - 0x1744
int func_23(char *sParam0, int iParam1, int iParam2) {
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
					func_32();
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
		if (func_31(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_30();
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
				func_28();
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
				if (func_27()) {
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
			if (func_26()) {
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
			func_25();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_24();
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
		func_32();
	}
	return 0;
}

// Position - 0x1A10
void func_24() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x1A42
void func_25() {
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

// Position - 0x1AD7
bool func_26() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x1AFE
bool func_27() {
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

// Position - 0x1B97
void func_28() {
	if (func_29(14)) {
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
		Global_14443 = func_70();
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

// Position - 0x1C39
bool func_29(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x1C47
void func_30() {
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

// Position - 0x1C9F
bool func_31(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x1CDA
void func_32() {
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

// Position - 0x1D31
void func_33(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, var uParam5) {
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

// Position - 0x1D87
void func_34(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x1E22
int func_35() {
	if (func_36(0)) {
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

// Position - 0x1E6D
bool func_36(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x1E98
bool func_37(var *uParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[20];

	iVar2 = 0;
	iVar1 = ped::get_ped_nearby_vehicles(player::player_ped_id(), &uVar3);
	if (iVar1 == 0) {
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iVar1) {
		if (func_75(uVar3[iVar0])) {
			if (entity::is_entity_in_angled_area(uVar3[iVar0], uParam0->f_6[0 /*3*/], uParam0->f_6[1 /*3*/],
												 uParam0->f_6.f_7, 0, 1, 0) &&
				!uParam0->f_26) {
				if (func_38(uVar3[iVar0])) {
					iVar2 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 == 1) {
		Global_101700.f_9008.f_104 = time::get_clock_day_of_month();
		iLocal_107 = gameplay::get_game_timer() + iLocal_108;
	}
	return iVar2;
}

// Position - 0x1F3F
bool func_38(int iParam0) {
	int iVar0;
	int iVar1;

	iVar1 = entity::get_entity_model(iParam0);
	if (func_42(iParam0)) {
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		if (func_41(iVar1, iVar0)) {
			if (!func_14(iVar0)) {
				func_40(iVar0, entity::get_entity_health(iParam0) < 875);
				func_39(iVar0, 1);
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x1F9F
void func_39(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&iLocal_99, iParam0);
		iLocal_100 = iParam0;
	}
	else {
		gameplay::clear_bit(&iLocal_99, iParam0);
	}
}

// Position - 0x1FC3
void func_40(int iParam0, bool bParam1) {
	if (bParam1) {
		gameplay::set_bit(&iLocal_99, iParam0 + 5);
	}
	else {
		gameplay::clear_bit(&iLocal_99, iParam0 + 5);
	}
}

// Position - 0x1FE7
bool func_41(int iParam0, int iParam1) {
	if (iParam0 == iLocal_86[iParam1]) {
		return true;
	}
	if (iLocal_86[iParam1] != joaat("tornado2")) {
		return false;
	}
	if (iParam0 == joaat("tornado")) {
		return true;
	}
	if (iParam0 == joaat("tornado2")) {
		return true;
	}
	if (iParam0 == joaat("tornado3")) {
		return true;
	}
	if (iParam0 == joaat("tornado4")) {
		return true;
	}
	return false;
}

// Position - 0x2049
bool func_42(int iParam0) {
	if (!func_75(iParam0)) {
		return true;
	}
	if (entity::get_entity_health(iParam0) < 750) {
		return true;
	}
	if (vehicle::is_vehicle_bumper_broken_off(iParam0, 1) || vehicle::is_vehicle_bumper_broken_off(iParam0, 0)) {
		return true;
	}
	return vehicle::_0x42A4BEB35D372407(iParam0) > 0;
}

// Position - 0x2092
bool func_43(var *uParam0) { return uParam0->f_5 == 2 && uParam0->f_4 == 2; }

// Position - 0x20AB
void func_44(var *uParam0) {
	vector3 vVar0;

	uParam0->f_26 = 0;
	if (gameplay::is_position_occupied(uParam0->f_19[0 /*3*/], 1.2f, 0, 1, 1, 0, 0, player::player_ped_id(), 0)) {
		uParam0->f_26 = 1;
	}
	else if (gameplay::is_position_occupied(uParam0->f_19[1 /*3*/], 1.2f, 0, 1, 1, 0, 0, player::player_ped_id(), 0)) {
		uParam0->f_26 = 1;
	}
	else {
		vVar0 = {func_45(uParam0->f_19[0 /*3*/], uParam0->f_19[1 /*3*/], 0.5f, 1)};
		uParam0->f_26 = gameplay::is_position_occupied(vVar0, 1.2f, 0, 1, 1, 0, 0, player::player_ped_id(), 0);
		if (uParam0->f_26) {
		}
	}
	if (uParam0->f_5 == 2 && (uParam0->f_4 != 2 || uParam0->f_4 == 3)) {
		uParam0->f_17 -= uParam0->f_18;
		if (uParam0->f_17 <= 0f) {
			uParam0->f_17 = 0f;
			uParam0->f_4 = 2;
			audio::stop_sound(iLocal_95);
			iLocal_96 = 0;
			audio::play_sound_from_coord(-1, "CLOSED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_96) {
			audio::play_sound_from_coord(iLocal_95, "CLOSING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_96 = 1;
		}
	}
	if (uParam0->f_5 == 1 && (uParam0->f_4 != 1 || uParam0->f_4 == 4)) {
		uParam0->f_17 += uParam0->f_18;
		if (uParam0->f_17 >= 1f) {
			uParam0->f_17 = 1f;
			uParam0->f_4 = 1;
			audio::stop_sound(iLocal_95);
			iLocal_96 = 0;
			audio::play_sound_from_coord(-1, "OPENED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_96) {
			audio::play_sound_from_coord(iLocal_95, "OPENING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_96 = 1;
		}
	}
	if (object::does_object_of_type_exist_at_coords(*uParam0, 20f, uParam0->f_3, 0)) {
		object::set_state_of_closest_door_of_type(uParam0->f_3, *uParam0, 1, uParam0->f_17, 0);
	}
}

// Position - 0x226B
Vector3 func_45(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
	if (iParam7) {
		fParam6 = func_46(fParam6, 0f, 1f);
	}
	return vParam0 + FtoV(fParam6) * vParam3 - vParam0;
}

// Position - 0x2294
float func_46(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x22BB
void func_47(int iParam0) {
	int iVar0;

	if (iParam0 == 26) {
		if (!gameplay::is_bit_set(Global_101700.f_23945, 4 - 1)) {
			return;
		}
	}
	iVar0 = func_11(iParam0);
	if (iVar0 == -1) {
		return;
	}
	Global_46225[iVar0 /*203*/] = 0;
}

// Position - 0x22F8
void func_48(int iParam0, char *sParam1, int iParam2) {
	int iVar0;

	iVar0 = func_11(iParam0);
	if (iVar0 == -1) {
		return;
	}
	if (Global_46225[iVar0 /*203*/].f_9 == 0) {
		return;
	}
	Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_1 = 1;
	StringCopy(&Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_2, sParam1, 16);
	Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_6 = 0;
	StringCopy(&Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[0 /*4*/], "", 16);
	StringCopy(&Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[1 /*4*/], "", 16);
	StringCopy(&Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[2 /*4*/], "", 16);
	StringCopy(&Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[3 /*4*/], "", 16);
	StringCopy(&Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[4 /*4*/], "", 16);
	if (iParam2) {
		func_5(iParam0);
	}
}

// Position - 0x241F
int func_49(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_51(iParam0, 1);
	if (iVar0 == -1) {
		return 0;
	}
	if (Global_46225[iVar0 /*203*/].f_9 == 4) {
		return 0;
	}
	Global_46225[iVar0 /*203*/].f_2 = iParam0;
	Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46225[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46225[iVar0 /*203*/].f_3) {
		if (iVar2 == -1) {
			if (Global_46225[iVar0 /*203*/].f_4[iVar1] == Global_36925[iParam1 /*12*/].f_3) {
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1) {
		if (Global_46225[iVar0 /*203*/].f_3 == 4) {
			return 0;
		}
		else {
			Global_46225[iVar0 /*203*/].f_4[Global_46225[iVar0 /*203*/].f_3] = Global_36925[iParam1 /*12*/].f_3;
			Global_46225[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46225[iVar0 /*203*/].f_3) {
		if (iVar2 == -1) {
			if (Global_46225[iVar0 /*203*/].f_4[iVar1] == Global_36925[iParam1 /*12*/].f_2) {
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1) {
		if (Global_46225[iVar0 /*203*/].f_3 == 4) {
			return 0;
		}
		else {
			Global_46225[iVar0 /*203*/].f_4[Global_46225[iVar0 /*203*/].f_3] = Global_36925[iParam1 /*12*/].f_2;
			Global_46225[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46225[iVar0 /*203*/].f_3) {
		iVar3 = Global_46225[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3) {
			func_50(Global_46225[iVar0 /*203*/].f_4[iVar1], Global_46225[iVar0 /*203*/].f_1, 1, iParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

// Position - 0x261B
void func_50(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	if (iParam0 >= 3) {
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!iParam2) {
		iVar19 = Global_40250[iParam1 /*46*/].f_42 - 1;
		if (iVar19 < 0) {
			return;
		}
		iVar20 = Global_40250[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = {func_10(Global_36925[iVar20 /*12*/].f_1)};
		if (Global_36925[iVar20 /*12*/].f_2 == iParam0 && Global_36925[iVar20 /*12*/].f_3 != iParam0) {
			return;
		}
		iVar1 = Global_36925[iVar20 /*12*/].f_2;
		iVar0 = Global_45863[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16) {
			iVar0 -= 16;
			bVar21 = true;
		}
		if (bVar21) {
			if (!Global_45863[iParam0 /*120*/].f_69[iVar0]) {
				switch (iParam0) {
				case 0:
					Global_36917--;
					if (Global_36917 < 0) {
						Global_36917 = 0;
					}
					break;

				case 1:
					Global_36918--;
					if (Global_36918 < 0) {
						Global_36918 = 0;
					}
					break;

				case 2:
					Global_36919--;
					if (Global_36919 < 0) {
						Global_36919 = 0;
					}
					break;
				}
			}
		}
		Global_45863[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45863[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45863[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45863[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45863[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45863[iParam0 /*120*/]++;
	}
	else {
		iVar0 = Global_45863[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16) {
			iVar0 -= 16;
			bVar22 = true;
		}
		if (bVar22) {
			if (!Global_45863[iParam0 /*120*/].f_69[iVar0]) {
				switch (iParam0) {
				case 0:
					Global_36917--;
					if (Global_36917 < 0) {
						Global_36917 = 0;
					}
					break;

				case 1:
					Global_36918--;
					if (Global_36918 < 0) {
						Global_36918 = 0;
					}
					break;

				case 2:
					Global_36919--;
					if (Global_36919 < 0) {
						Global_36919 = 0;
					}
					break;
				}
			}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7) {
			if (Global_46225[iVar24 /*203*/].f_1 == iParam1 && Global_46225[iVar24 /*203*/].f_9 > 0) {
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1) {
			return;
		}
		Global_45863[iParam0 /*120*/].f_18[iVar0] = Global_46225[iVar23 /*203*/].f_1;
		Global_45863[iParam0 /*120*/].f_1[iVar0] = Global_46225[iVar23 /*203*/].f_9 - 1;
		Global_45863[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45863[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45863[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45863[iParam0 /*120*/]++;
		iVar25 = Global_45863[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_46225[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_36925[iVar26 /*12*/].f_2;
		if (Global_46225[iVar23 /*203*/].f_10[Global_46225[iVar23 /*203*/].f_9 - 1 /*48*/].f_1) {
			MemCopy(&Var3, {Global_46225[iVar23 /*203*/].f_10[Global_46225[iVar23 /*203*/].f_9 - 1 /*48*/].f_2}, 16);
		}
		else {
			Var3 = {func_10(Global_36925[iVar26 /*12*/].f_1)};
		}
	}
	if (!iParam4) {
		if (!Global_45863[iParam0 /*120*/].f_69[iVar0] && !bParam3) {
			switch (iParam0) {
			case 0: func_6(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); break;

			case 1:
				if (iVar2 == 249) {
					func_6(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else {
					func_6(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				break;

			case 2: func_6(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); break;
			}
		}
	}
}

// Position - 0x29EF
int func_51(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_11(iParam0);
	if (iVar0 > -1) {
		if (Global_46225[iVar0 /*203*/].f_9 < 4) {
			return iVar0;
		}
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 7) {
		if (Global_46225[iVar1 /*203*/] == 0) {
			iVar2 = 1;
		}
		iVar1++;
	}
	if (!iVar2) {
		return -1;
	}
	iVar3 = 1;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7) {
		if (Global_46225[iVar1 /*203*/] == 0) {
			if (iVar3) {
				iVar4 = iVar1;
				iVar5 = Global_46225[iVar1 /*203*/].f_1;
				iVar3 = 0;
			}
			else if (iVar5 > Global_46225[iVar1 /*203*/].f_1) {
				iVar4 = iVar1;
				iVar5 = Global_46225[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46225[iVar4 /*203*/].f_9 > 0) {
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46225[iVar4 /*203*/].f_9) {
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3) {
				iVar7 = Global_45863[iVar6 /*120*/];
				if (iVar7 > 16) {
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7) {
					if (Global_45863[iVar6 /*120*/].f_86[iVar8]) {
						if (!Global_45863[iVar6 /*120*/].f_69[iVar8]) {
							if (Global_45863[iVar6 /*120*/].f_18[iVar8] == Global_46225[iVar4 /*203*/].f_1) {
								if (Global_45863[iVar6 /*120*/].f_1[iVar8] == iVar1) {
									switch (iVar6) {
									case 0: Global_36917--; break;

									case 1: Global_36918--; break;

									case 2: Global_36919--; break;
									}
								}
							}
						}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_46225[iVar4 /*203*/].f_2 = iParam0;
	Global_46225[iVar4 /*203*/].f_3 = 0;
	if (!iParam1) {
		Global_46225[iVar4 /*203*/] = 1;
	}
	Global_101700.f_19996.f_310++;
	if (Global_101700.f_19996.f_310 == 0) {
		Global_101700.f_19996.f_310 = 1;
	}
	Global_46225[iVar4 /*203*/].f_1 = Global_101700.f_19996.f_310;
	Global_46225[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

// Position - 0x2C07
void func_52(int *iParam0) {
	int iVar0;

	switch (*iParam0) {
	case 1:
		func_55(&iLocal_92);
		func_54("EPS_DROP_PERSON", -1);
		*iParam0 = 2;
		break;

	case 2:
		if (!func_53()) {
			*iParam0 = 4;
			return;
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 1);
			if (func_75(iVar0)) {
				if (vehicle::get_vehicle_number_of_passengers(iVar0) == 0) {
					*iParam0 = 4;
				}
			}
		}
		break;

	case 4:
		if (!func_53()) {
			func_76(0);
		}
		else {
			func_54("EPS_DROP_ESCAPE", -1);
			func_76(2);
		}
		break;
	}
}

// Position - 0x2CA0
bool func_53() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_75(player::player_ped_id())) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iLocal_102 = 0;
		return false;
	}
	iVar1 = ped::get_vehicle_ped_is_using(player::player_ped_id());
	if (!func_75(iVar1)) {
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		if (!func_14(iVar0)) {
			if (func_41(entity::get_entity_model(iVar1), iVar0)) {
				if (func_42(iVar1)) {
					if (!iLocal_102) {
						func_54("EPS_DROP_FAIL", -1);
						iLocal_102 = 1;
					}
					return false;
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x2D36
void func_54(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x2D4D
void func_55(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x2D6D
void func_56(int *iParam0) {
	int iVar0;

	switch (*iParam0) {
	case 1:
		func_83(&Local_43, 1);
		Local_43.f_4 = 4;
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			fire::stop_fire_in_range(entity::get_entity_coords(player::player_ped_id(), 1), 1.5f);
		}
		*iParam0 = 2;
		iLocal_98 = 0;
		iLocal_106 = 0;
		break;

	case 2:
		switch (iLocal_98) {
		case 0:
			if (iLocal_103 == 1 && !Local_43.f_26) {
				if (func_21("EPS_DROP_MESS")) {
					ui::clear_help(1);
				}
			}
			if (player::get_player_wanted_level(player::player_id()) > 0) {
				func_76(4);
				return;
			}
			if (func_61(player::player_ped_id()) && ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 1);
			}
			if (func_75(iVar0) && vehicle::get_vehicle_number_of_passengers(iVar0) > 0) {
				if (vehicle::get_ped_in_vehicle_seat(iVar0, 0, 0) != player::player_ped_id()) {
					func_76(3);
					return;
				}
			}
			if (!Local_43.f_26) {
				if (iLocal_104 == 0) {
					if (func_60(iVar0)) {
						if (entity::is_entity_in_angled_area(iVar0, Local_43.f_6[0 /*3*/], Local_43.f_6[1 /*3*/],
															 Local_43.f_6.f_7, 0, 1, 0)) {
							func_59("EPS_DROP_EXIT", 7500, 1);
							iLocal_106 = 0;
							iLocal_104 = 1;
							iLocal_103 = 0;
						}
					}
				}
				if (func_58(player::player_ped_id(), Local_43.f_14, 0) < 3f) {
					func_55(&iLocal_92);
				}
				if (func_58(player::player_ped_id(), Local_43, 0) > 15f + 5f) {
					func_83(&Local_43, 2);
					Local_43.f_4 = 3;
					iLocal_104 = 0;
					iLocal_103 = 0;
					iLocal_106 = 0;
					func_76(1);
					return;
				}
				if (func_57(&Local_43) && !ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					func_83(&Local_43, 2);
					Local_43.f_4 = 3;
					iLocal_106 = 0;
					func_76(0);
					return;
				}
			}
			if (Local_43.f_26 && !ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
				ped::is_ped_on_foot(player::player_ped_id())) {
				if (iLocal_106 == 0) {
					iLocal_106 = gameplay::get_game_timer();
				}
				else if (gameplay::get_game_timer() - iLocal_106 > 500) {
					if (iLocal_103 == 0) {
						ui::clear_prints();
						func_54("EPS_DROP_MESS", -1);
						iLocal_103 = 1;
						iLocal_104 = 0;
					}
				}
			}
			break;
		}
		break;
	}
}

// Position - 0x2F7F
bool func_57(var *uParam0) {
	return !uParam0->f_26 && !gameplay::is_position_occupied(uParam0->f_14, 6.2f, 0, 0, 1, 0, 0, 0, 0);
}

// Position - 0x2FA8
float func_58(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0x2FE2
void func_59(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 1);
}

// Position - 0x2FFB
bool func_60(int iParam0) {
	if (func_61(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3025
bool func_61(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x3046
void func_62(int *iParam0) {
	int iVar0;

	switch (*iParam0) {
	case 1:
		if (!ui::does_blip_exist(iLocal_92)) {
			iLocal_92 = ui::add_blip_for_coord(vLocal_40);
			if (ui::does_blip_exist(iLocal_92)) {
				ui::set_blip_sprite(iLocal_92, 206);
				ui::set_blip_colour(iLocal_92, 42);
			}
		}
		*iParam0 = 2;
		iLocal_98 = 0;
		break;

	case 2:
		if (!func_53()) {
			func_76(0);
			return;
		}
		if (player::get_player_wanted_level(player::player_id()) > 0) {
			func_76(4);
			return;
		}
		if (func_61(player::player_ped_id()) && ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 1);
		}
		if (func_75(iVar0) && vehicle::get_vehicle_number_of_passengers(iVar0) > 0) {
			if (vehicle::get_ped_in_vehicle_seat(iVar0, 0, 0) != player::player_ped_id()) {
				func_76(3);
				return;
			}
		}
		if (func_58(player::player_ped_id(), Local_43, 0) < 15f) {
			*iParam0 = 4;
			return;
		}
		break;

	case 4: func_76(2); break;
	}
}

// Position - 0x313C
void func_63(int *iParam0) {
	switch (*iParam0) {
	case 1:
		func_55(&iLocal_92);
		if (iLocal_105 == 0) {
			func_54("EPS_DROP_WANTED", -1);
		}
		*iParam0 = 2;
		break;

	case 2:
		if (player::get_player_wanted_level(player::player_id()) == 0) {
			*iParam0 = 4;
		}
		break;

	case 4:
		if (!func_53()) {
			func_76(0);
		}
		else {
			if (iLocal_105 == 0) {
				func_54("EPS_DROP_ESCAPE", -1);
			}
			func_76(2);
		}
		iLocal_105 = 1;
		break;
	}
}

// Position - 0x31B7
void func_64(int *iParam0) {
	switch (*iParam0) {
	case 1:
		*iParam0 = 2;
		iLocal_101 = 0;
		iLocal_103 = 0;
		func_55(&iLocal_92);
		break;

	case 2:
		if (func_61(player::player_ped_id())) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), Local_43.f_6[0 /*3*/], Local_43.f_6[1 /*3*/],
												 Local_43.f_6.f_7, 0, 1, 0) &&
				func_43(&Local_43)) {
				entity::set_entity_coords(player::player_ped_id(), -687.6668f, 500.598f, 109.0364f, 1, 0, 0, 1);
				entity::set_entity_heading(player::player_ped_id(), 200.7367f);
			}
		}
		if (func_58(player::player_ped_id(), Local_43, 0) > 15f + 5f) {
			func_83(&Local_43, 2);
			if (Local_43.f_4 != 2) {
				Local_43.f_4 = 3;
			}
		}
		if (func_53()) {
			if (player::get_player_wanted_level(player::player_id()) > 0) {
				func_76(4);
				return;
			}
			*iParam0 = 4;
			return;
		}
		break;

	case 4:
		if (iLocal_101 == 0 && func_61(player::player_ped_id())) {
			if (iLocal_117 != ped::get_vehicle_ped_is_in(player::player_ped_id(), 1)) {
				iLocal_117 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 1);
				func_54("EPS_DROP_HELP", -1);
				iLocal_101 = 1;
			}
		}
		iLocal_102 = 0;
		func_76(1);
		break;
	}
}

// Position - 0x32E4
void func_65() {
	func_67();
	while (gameplay::get_mission_flag() || func_70() != 0) {
		system::wait(0);
	}
	func_66();
}

// Position - 0x330F
void func_66() {
	vector3 vVar0;
	vector3 vVar3;

	if (!func_75(player::player_ped_id())) {
	}
	pathfind::set_roads_in_angled_area(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0,
									   1);
	func_81(-688.5f, 503.7f, 110.2f, 30f, &vVar0, &vVar3);
	iLocal_118 = ped::add_scenario_blocking_area(vVar0, vVar3, 0, 1, 1, 1);
	iLocal_99 = Global_101700.f_9008.f_103;
	func_87();
	if (func_86()) {
		func_90();
	}
	func_77(1);
	if (func_11(2) == -1) {
		func_4(func_16());
	}
	func_76(0);
}

// Position - 0x33B3
void func_67() {
	if (ui::does_blip_exist(iLocal_92)) {
		func_55(&iLocal_92);
		iLocal_92 = 0;
	}
	Global_101700.f_9008.f_103 = iLocal_99;
	func_55(&iLocal_92);
	func_77(0);
	func_69();
	func_68(&Local_43);
	ped::remove_scenario_blocking_area(iLocal_118, 0);
	pathfind::set_roads_back_to_original_in_angled_area(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f,
														112.1928f, 11.25f, 1);
	pathfind::set_roads_back_to_original_in_angled_area(vLocal_109[0 /*3*/], vLocal_109[1 /*3*/], 8.25f, 1);
}

// Position - 0x3434
void func_68(var *uParam0) {
	if (object::does_object_of_type_exist_at_coords(*uParam0, 20f, uParam0->f_3, 0)) {
		object::set_state_of_closest_door_of_type(uParam0->f_3, *uParam0, 1, 0f, 0);
	}
}

// Position - 0x3460
void func_69() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		streaming::set_model_as_no_longer_needed(iLocal_86[iVar0]);
		iVar0++;
	}
}

// Position - 0x3487
int func_70() {
	func_71();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x34A0
void func_71() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_74(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_73(player::player_ped_id());
			if (func_72(iVar0) && (!func_29(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_72(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x359D
bool func_72(int iParam0) { return iParam0 < 3; }

// Position - 0x35A9
int func_73(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_74(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x35E6
int func_74(int iParam0) {
	if (func_72(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x3610
bool func_75(int iParam0) {
	if (!entity::does_entity_exist(iParam0)) {
		return false;
	}
	return !entity::is_entity_dead(iParam0, 0);
}

// Position - 0x362E
void func_76(int iParam0) {
	iLocal_94 = iParam0;
	iLocal_93 = 1;
}

// Position - 0x363D
void func_77(int iParam0) {
	func_78(44, iParam0);
	func_78(45, iParam0);
	func_78(46, iParam0);
	func_78(47, iParam0);
	func_78(48, iParam0);
	func_78(49, iParam0);
	func_78(50, iParam0);
}

// Position - 0x367D
void func_78(int iParam0, bool bParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (bParam1) {
		if (!func_80(iParam0, 0)) {
			func_79(iParam0, 1, 0);
			func_79(iParam0, 2, 0);
			func_79(iParam0, 3, 0);
			func_79(iParam0, 4, 0);
			func_79(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_79(iParam0, 0, 0);
	}
}

// Position - 0x36DA
void func_79(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x3715
int func_80(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x3738
void func_81(vector3 vParam0, float fParam3, var *uParam4, var *uParam5) {
	vector3 vVar0;

	vVar0 = {fParam3, fParam3, fParam3};
	*uParam4 = {vParam0 - vVar0};
	*uParam5 = {vParam0 + vVar0};
}

// Position - 0x3764
void func_82(var *uParam0, vector3 vParam1, vector3 vParam4, float fParam7) {
	(*uParam0)[0 /*3*/] = {vParam1};
	(*uParam0)[1 /*3*/] = {vParam4};
	uParam0->f_7 = fParam7;
}

// Position - 0x3788
void func_83(var *uParam0, int iParam1) { uParam0->f_5 = iParam1; }

// Position - 0x3796
void func_84(var *uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, vector3 vParam11,
			 float fParam14, vector3 vParam15, vector3 vParam18) {
	uParam0->f_3 = iParam1;
	*uParam0 = {vParam2};
	uParam0->f_5 = 2;
	uParam0->f_4 = 0;
	uParam0->f_19[0 /*3*/] = {vParam15};
	uParam0->f_19[1 /*3*/] = {vParam18};
	uParam0->f_14 = {vParam5};
	func_82(&uParam0->f_6, vParam8, vParam11, fParam14);
}

// Position - 0x37EC
int func_85(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 <= 31) {
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else {
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iVar0], iVar1)) {
		return 0;
	}
	gameplay::set_bit(&Global_101700.f_8044.f_99.f_219[iVar0], iVar1);
	return 1;
}

// Position - 0x3846
bool func_86() { return func_3() == 5; }

// Position - 0x3854
void func_87() {
	iLocal_86[0] = joaat("vacca");
	iLocal_86[1] = joaat("surano");
	iLocal_86[2] = joaat("tornado2");
	iLocal_86[3] = joaat("superd");
	iLocal_86[4] = joaat("double");
	vLocal_70[0 /*3*/] = 1;
	vLocal_70[0 /*3*/].f_1 = "EPS_GMAIL_G5";
	vLocal_70[0 /*3*/].f_2 = "EPS_BMAIL_G5";
	vLocal_70[1 /*3*/] = 2;
	vLocal_70[1 /*3*/].f_1 = "EPS_GMAIL_G4";
	vLocal_70[1 /*3*/].f_2 = "EPS_BMAIL_G4";
	vLocal_70[2 /*3*/] = 3;
	vLocal_70[2 /*3*/].f_1 = "EPS_GMAIL_G3";
	vLocal_70[2 /*3*/].f_2 = "EPS_BMAIL_G3";
	vLocal_70[3 /*3*/] = 4;
	vLocal_70[3 /*3*/].f_1 = "EPS_GMAIL_G2";
	vLocal_70[3 /*3*/].f_2 = "EPS_BMAIL_G2";
	vLocal_70[4 /*3*/] = 5;
	vLocal_70[4 /*3*/].f_1 = "EPS_GMAIL_G1";
	vLocal_70[4 /*3*/].f_2 = "EPS_BMAIL_G1";
}

// Position - 0x391A
void func_88() {
	int iVar0;

	iLocal_99 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		gameplay::set_bit(&iLocal_99, iVar0);
		iVar0++;
	}
}

// Position - 0x393F
int func_89(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0x396C
void func_90() {
	int iVar0;

	func_55(&iLocal_92);
	func_77(0);
	func_69();
	func_68(&Local_43);
	Global_101700.f_9008.f_103 = iLocal_99;
	if (func_86() || func_89(90) == 1) {
		func_92(90, 1);
		func_91(6);
	}
	pathfind::set_roads_back_to_original_in_angled_area(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f,
														112.1928f, 11.25f, 1);
	pathfind::set_roads_back_to_original_in_angled_area(vLocal_109[0 /*3*/], vLocal_109[1 /*3*/], 8.25f, 1);
	ped::remove_scenario_blocking_area(iLocal_118, 0);
	if (iLocal_284 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_284);
		iLocal_284 = 0;
	}
	stats::stat_get_int(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 6 + func_3()) {
		stats::stat_set_int(joaat("num_epsilon_step"), 6 + func_3(), 1);
		func_20(23, 6 + func_3());
	}
	script::terminate_this_thread();
}

// Position - 0x3A49
int func_91(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 <= 31) {
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else {
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iVar0], iVar1)) {
		gameplay::clear_bit(&Global_101700.f_8044.f_99.f_219[iVar0], iVar1);
		return 1;
	}
	return 0;
}

// Position - 0x3AA3
void func_92(int iParam0, int iParam1) {
	if (iParam0 == 146 || iParam0 == -1) {
		return;
	}
	if (Global_101700.f_8044.f_99.f_58[iParam0] == iParam1) {
		return;
	}
	Global_101700.f_8044.f_99.f_58[iParam0] = iParam1;
}
