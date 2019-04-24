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
char *sLocal_21 = NULL;
float fLocal_22 = 0f;
var uLocal_23 = 0;
var uLocal_24 = 0;
var uLocal_25 = 0;
float fLocal_26 = 0f;
float fLocal_27 = 0f;
var uLocal_28 = 0;
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
vector3 vLocal_43 = {0f, 0f, 0f};
int iLocal_46 = 0;
int iLocal_47 = 0;
vector3 vLocal_48 = {0f, 0f, 0f};
vector3 vLocal_51 = {0f, 0f, 0f};
vector3 vLocal_54[6] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_73 = {0f, 0f, 0f};
vector3 vLocal_76 = {0f, 0f, 0f};
float fLocal_79 = 0f;
float fLocal_80[6] = {0f, 0f, 0f, 0f, 0f, 0f};
int iLocal_87 = 0;
int iLocal_88 = 0;
bool bLocal_89 = 0;
int iLocal_90[6] = {0, 0, 0, 0, 0, 0};
int iLocal_97 = 0;
int iLocal_98 = 0;
int iLocal_99 = 0;
int iLocal_100 = 0;
bool bLocal_101 = 0;
int iLocal_102 = 0;
int iLocal_103[6] = {0, 0, 0, 0, 0, 0};
int iLocal_110[2] = {0, 0};
var *uLocal_113 = NULL;
int iLocal_114 = 0;
int iLocal_115 = 0;
int iLocal_116[6] = {0, 0, 0, 0, 0, 0};
int iLocal_123 = 0;
int iLocal_124 = 0;
int iLocal_125 = 0;
int iLocal_126 = 0;
int iLocal_127 = 0;
int iLocal_128 = 0;
int iLocal_129 = 0;
int iLocal_130 = 0;
var *uLocal_131 = NULL;
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
var uLocal_293 = 0;
var uLocal_294 = 0;
var uLocal_295 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_51 = {2194.135f, 5593.278f, 53.70383f};
	vLocal_73 = {2203.27f, 5549.918f, 93.09485f};
	vLocal_76 = {2199.629f, 5640.293f, 52.23926f};
	fLocal_79 = 81.5f;
	vLocal_48 = {ScriptParam_0.f_1[0 /*3*/]};
	if (player::has_force_cleanup_occurred(11)) {
		func_136();
	}
	if (func_109(vLocal_48, -1, 0, 0, 0)) {
		func_106(-1);
	}
	else {
		script::terminate_this_thread();
	}
	while (true) {
		system::wait(0);
		if (brain::is_world_point_within_brain_activation_range() || iLocal_100 ||
			func_105() && entity::is_entity_at_coord(player::player_ped_id(), vLocal_48, 500f, 500f, 500f, 0, 1, 0)) {
			if (!func_105()) {
				if (func_104()) {
					func_136();
				}
			}
			unk1::_0x208784099002BC30("RE_DS", 0);
			switch (iLocal_46) {
			case 0:
				if (func_92()) {
					func_136();
				}
				func_90();
				iLocal_88 = 1;
				break;

			case 1: func_24(); break;

			case 2: func_1(); break;
			}
		}
		else {
			func_136();
		}
	}
}

// Position - 0x18C
void func_1() {
	if (iLocal_88 && !iLocal_87) {
		audio::trigger_music_event("RE20_FAIL");
		if (ped::is_ped_injured(player::player_ped_id())) {
			func_23(0);
		}
		iLocal_125 = 0;
		while (iLocal_125 < 6) {
			if (!ped::is_ped_injured(iLocal_103[iLocal_125])) {
				if (ui::does_blip_exist(iLocal_116[iLocal_125])) {
					ui::remove_blip(&iLocal_116[iLocal_125]);
				}
				entity::set_ped_as_no_longer_needed(&iLocal_103[iLocal_125]);
			}
			iLocal_125++;
		}
		player::set_wanted_level_multiplier(1f);
		gameplay::enable_dispatch_service(3, 1);
		if (bLocal_89) {
			func_3(18, 7, 0);
		}
		else {
			func_3(18, 1, 0);
		}
		iLocal_87 = 1;
	}
	if (system::vdist(func_2(player::player_id()), vLocal_48) > 150f) {
		func_136();
	}
}

// Position - 0x23D
Vector3 func_2(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0x250
void func_3(int iParam0, int iParam1, int iParam2) {
	int *iVar0;
	struct<16> Var1;

	iVar0 = func_22();
	func_13(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_12(iParam0, &iVar0);
	Var1 = {func_4(&iVar0)};
}

// Position - 0x27F
struct<16> func_4(int *iParam0) {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_11(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_10(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_9(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_8(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_7(*iParam0);
	if (iVar16 < 9) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_5(*iParam0), 64);
	return Var0;
}

//Position - 0x34A
int func_5(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31) * func_6(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x36F
int func_6(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x386
int func_7(int iParam0) { return iParam0 & 15; }

// Position - 0x393
int func_8(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x3A5
int func_9(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x3B8
int func_10(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x3CB
int func_11(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x3DE
void func_12(int iParam0, int *iParam1) { Global_101700.f_23954.f_43[iParam0] = *iParam1; }

// Position - 0x3F6
void func_13(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_5(*iParam0);
	iVar1 = func_7(*iParam0);
	iVar2 = func_8(*iParam0);
	iVar3 = func_11(*iParam0);
	iVar4 = func_10(*iParam0);
	iVar5 = func_9(*iParam0);
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
	iVar6 = func_21(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_21(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_14(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0x578
void func_14(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_20(iParam0, iParam1);
	func_19(iParam0, iParam2);
	func_18(iParam0, iParam3);
	func_17(iParam0, iParam5);
	func_16(iParam0, iParam4);
	func_15(iParam0, iParam6);
}

// Position - 0x5B0
void func_15(int *iParam0, int iParam1) {
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

// Position - 0x636
void func_16(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_7(*uParam0);
	iVar1 = func_5(*uParam0);
	if (iParam1 < 1 || iParam1 > func_21(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x687
void func_17(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x6BA
void func_18(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x6F4
void func_19(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x72F
void func_20(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x76B
int func_21(int iParam0, int iParam1) {
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

// Position - 0x80D
int func_22() {
	int *iVar0;

	func_20(&iVar0, time::get_clock_seconds());
	func_19(&iVar0, time::get_clock_minutes());
	func_18(&iVar0, time::get_clock_hours());
	func_16(&iVar0, time::get_clock_day_of_month());
	func_17(&iVar0, time::get_clock_month());
	func_15(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x853
void func_23(int iParam0) { Global_101700.f_23954.f_7 = iParam0; }

// Position - 0x866
void func_24() {
	func_70();
	func_69();
	switch (iLocal_47) {
	case 0:
		if (object::does_pickup_exist(uLocal_113)) {
			if (ui::does_blip_exist(iLocal_114)) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_73, vLocal_76, fLocal_79, 0, 1,
													 0)) {
					func_66();
					if (!bLocal_101) {
						audio::trigger_music_event("RE20_FADE_RADIO_OUT");
						iLocal_130 = gameplay::get_game_timer();
						bLocal_101 = true;
					}
					if (!func_105()) {
						func_57(1);
					}
				}
			}
		}
		if (bLocal_101) {
			if (gameplay::get_game_timer() - iLocal_130 > 6000) {
				if (!iLocal_102) {
					audio::trigger_music_event("RE20_START");
					iLocal_102 = 1;
				}
			}
		}
		break;

	case 1:
		if (ped::is_ped_injured(iLocal_103[0]) && ped::is_ped_injured(iLocal_103[1]) &&
			ped::is_ped_injured(iLocal_103[2]) && ped::is_ped_injured(iLocal_103[3]) &&
			ped::is_ped_injured(iLocal_103[4])) {
			func_25();
		}
		else if (!entity::is_entity_at_coord(player::player_ped_id(), vLocal_48, 100f, 100f, 100f, 0, 1, 0)) {
			func_25();
		}
		break;
	}
	iLocal_125 = 0;
	while (iLocal_125 < 6) {
		if (ped::is_ped_injured(iLocal_103[iLocal_125])) {
			if (ui::does_blip_exist(iLocal_116[iLocal_125])) {
				ui::remove_blip(&iLocal_116[iLocal_125]);
			}
		}
		iLocal_125++;
	}
}

// Position - 0x9AC
void func_25() {
	func_56("DRUG_BLIP_END", -1);
	audio::trigger_music_event("RE20_END");
	func_23(1);
	while (func_55()) {
		system::wait(0);
	}
	while (!func_54()) {
		system::wait(0);
	}
	bLocal_89 = true;
	func_29(-1, 0);
	func_26();
	iLocal_46 = 2;
}

// Position - 0x9F8
void func_26() { func_27(); }

// Position - 0xA05
int func_27() {
	if (func_28(0)) {
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

// Position - 0xA50
bool func_28(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xA7B
void func_29(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		iParam0 = func_52();
	}
	if (iParam0 == -1) {
		return;
	}
	if (iParam1 <= func_51(iParam0)) {
		func_50(iParam0, iParam1);
		if (!func_49(51)) {
			func_40("RE_REWARD", 1, 0, 4000, 10000, func_43(), 0, 138, 0);
			func_39(51);
		}
		if (func_38(iParam0)) {
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_37(iParam0, iParam1) != 322) {
			func_31(func_37(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0) {
			if (Global_101689 == 1 || Global_101689 == 5 || Global_101689 == 11 || Global_101689 == 25) {
				func_30(2);
			}
			else if (Global_101689 == 26 || Global_101689 == 8 || Global_101689 == 17) {
				func_30(7);
			}
			else {
				func_30(1);
			}
		}
	}
}

// Position - 0xB7E
void func_30(int iParam0) { Global_101686 = iParam0; }

// Position - 0xB8C
void func_31(int iParam0, var uParam1, var uParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_35(891 + iParam0, 1, -1, 1);
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
		func_32();
	}
}

// Position - 0xC74
void func_32() {
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
		func_34(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_33() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_27();
				}
			}
		}
	}
}

// Position - 0x1135
int func_33() { return Global_25190; }

// Position - 0x1140
int func_34(int iParam0, int iParam1) {
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

// Position - 0x1191
int func_35(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_36();
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

// Position - 0x151F
var func_36() { return Global_1312735; }

// Position - 0x152B
int func_37(int iParam0, int iParam1) {
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

// Position - 0x189F
bool func_38(int iParam0) {
	switch (iParam0) {
	case 29:
	case 30:
	case 2:
	case 18: return false;
	}
	return true;
}

// Position - 0x18CE
void func_39(int iParam0) {
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

// Position - 0x1910
void func_40(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_41(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x1931
void func_41(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
		func_42();
	}
}

// Position - 0x1B04
void func_42() {
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

// Position - 0x1C24
int func_43() {
	func_44();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x1C6A
void func_44() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_48(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_47(player::player_ped_id());
			if (func_46(iVar0) && (!func_45(14) || Global_100652)) {
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

// Position - 0x1D67
bool func_45(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x1D75
bool func_46(int iParam0) { return iParam0 < 3; }

// Position - 0x1D81
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

// Position - 0x1DBE
int func_48(int iParam0) {
	if (func_46(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x1DE8
int func_49(int iParam0) {
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

// Position - 0x1E2B
void func_50(int iParam0, int iParam1) { gameplay::set_bit(&Global_101700.f_23954.f_8[iParam0], iParam1); }

// Position - 0x1E46
int func_51(int iParam0) {
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

// Position - 0x1EF7
int func_52() {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, script::get_this_script_name(), 64);
	iVar16 = func_53(Var0);
	return iVar16;
}

// Position - 0x1F14
int func_53(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5,
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

// Position - 0x20EE
int func_54() { return 1; }

// Position - 0x20F7
bool func_55() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0x2119
void func_56(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x2130
int func_57(int iParam0) {
	if (func_60()) {
		Global_101690 = 1;
		Global_101687 = gameplay::get_game_timer();
		if (func_38(Global_101689)) {
			func_58(0);
		}
		ui::set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_38(Global_101689)) {
			ui::flash_minimap_display();
		}
		return 1;
	}
	return 0;
}

// Position - 0x2182
void func_58(int iParam0) {
	switch (iParam0) {
	case 0:
		if (Global_101700.f_23954.f_2 < 3) {
			if (!ui::is_help_message_on_screen()) {
				func_56(func_59(iParam0), -1);
				Global_101700.f_23954.f_2++;
				gameplay::set_bit(&Global_101696, 0);
			}
		}
		break;

	case 1:
		if (!gameplay::is_bit_set(Global_101696, 1)) {
			if (!ui::is_help_message_on_screen()) {
				func_56(func_59(iParam0), -1);
				Global_101700.f_23954.f_3++;
				gameplay::set_bit(&Global_101696, 1);
			}
		}
		break;

	case 2:
		if (!gameplay::is_bit_set(Global_101696, 2)) {
			if (!ui::is_help_message_on_screen()) {
				func_56(func_59(iParam0), -1);
				Global_101700.f_23954.f_4++;
				gameplay::set_bit(&Global_101696, 2);
			}
		}
		break;
	}
}

// Position - 0x2263
char *func_59(int iParam0) {
	char *sVar0;

	sVar0 = "";
	switch (iParam0) {
	case 0: sVar0 = "AM_H_REFS"; break;

	case 1: sVar0 = "RE_FLASHBLIP"; break;

	case 2: sVar0 = "RE_HANDOVER"; break;
	}
	return sVar0;
}

// Position - 0x22A3
bool func_60() {
	switch (func_61(&Global_25249, 0, 5, 0, script::get_id_of_this_thread())) {
	case 1: return true;

	case 0: return true;
	}
	return false;
}

// Position - 0x22D9
int func_61(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_65(0)) {
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
		if (!func_63(iParam2)) {
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
			func_62(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x2410
void func_62(int *iParam0, int iParam1) {
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

// Position - 0x245F
bool func_63(int iParam0) { return func_64(iParam0, Global_35781); }

// Position - 0x2470
int func_64(int iParam0, int iParam1) {
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

// Position - 0x2651
bool func_65(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_63(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x2673
void func_66() {
	if (ui::does_blip_exist(iLocal_114)) {
		ui::remove_blip(&iLocal_114);
		if (object::does_pickup_exist(uLocal_113)) {
			if (!ui::does_blip_exist(iLocal_115)) {
				iLocal_115 = func_67(uLocal_113);
			}
		}
	}
}

// Position - 0x26A5
int func_67(var *uParam0) {
	int iVar0;

	if (!object::does_pickup_exist(uParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_pickup(uParam0);
	ui::set_blip_scale(iVar0, func_68(network::network_is_game_in_progress(), 0.7f, 0.7f));
	return iVar0;
}

// Position - 0x26DD
var func_68(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x26F4
void func_69() {
	if (object::has_pickup_been_collected(uLocal_113)) {
		if (ui::does_blip_exist(iLocal_114)) {
			ui::remove_blip(&iLocal_114);
		}
		system::settimera(0);
		iLocal_100 = 1;
		iLocal_127 = 2;
		iLocal_47 = 1;
	}
}

// Position - 0x2722
void func_70() {
	int iVar0;
	int iVar1;

	iLocal_125 = 0;
	while (iLocal_125 < 6) {
		if (ped::is_ped_injured(iLocal_103[iLocal_125])) {
			if (ui::does_blip_exist(iLocal_116[iLocal_125])) {
				ui::remove_blip(&iLocal_116[iLocal_125]);
			}
			iLocal_127 = 2;
		}
		else {
			if (func_89() && iLocal_127 != 2 || iLocal_127 == 1 && ped::is_ped_shooting(player::player_ped_id())) {
				func_87();
				system::wait(0);
				if (func_86()) {
					func_85(&uLocal_131, 4, iLocal_103[iLocal_125], "DRUGFARMGOON", 0, 1);
					func_73(&uLocal_131, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
				}
				iLocal_127 = 2;
			}
			switch (iLocal_127) {
			case 0:
				if (!iLocal_90[iLocal_125]) {
					if (entity::is_entity_at_entity(iLocal_103[iLocal_125], player::player_ped_id(), 15f, 15f, 40f, 0,
													1, 0) &&
							player::can_ped_hear_player(player::player_id(), iLocal_103[iLocal_125]) ||
						ped::_0x6CD5A433374D4CFB(iLocal_103[iLocal_125], player::player_ped_id())) {
						if (entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_73, vLocal_76, fLocal_79,
															 0, 1, 0) ||
							entity::is_entity_at_coord(player::player_ped_id(), 2205.918f, 5633.455f, 55.7472f, 15f,
													   15f, 40f, 0, 1, 0)) {
							if (!func_55()) {
								func_85(&uLocal_131, 3, iLocal_103[iLocal_125], "SalvadorGang", 0, 1);
								func_73(&uLocal_131, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
							}
							iVar0 = 0;
							while (iVar0 < iLocal_103) {
								ped::_0xF1C03A5352243A30(iLocal_103[iLocal_125]);
								ai::open_sequence_task(&iLocal_124);
								ai::task_look_at_entity(0, player::player_ped_id(), -1, 0, 2);
								ai::task_go_to_entity_while_aiming_at_entity(0, player::player_ped_id(),
																			 player::player_ped_id(), 1f, 0, 4f,
																			 1082130432, 1, 0, -957453492);
								ai::task_aim_gun_at_entity(0, player::player_ped_id(), -1, 0);
								ai::close_sequence_task(iLocal_124);
								ai::task_perform_sequence(iLocal_103[iVar0], iLocal_124);
								ai::clear_sequence_task(&iLocal_124);
								ped::set_ped_using_action_mode(iLocal_103[iVar0], 1, -1, 0);
								iVar0++;
							}
							iLocal_90[iLocal_125] = 1;
							iLocal_130 = gameplay::get_game_timer();
							iLocal_127 = 1;
						}
					}
				}
				break;

			case 1:
				iVar1 = 0;
				while (iVar1 < iLocal_103) {
					if (!iLocal_90[iVar1]) {
						ped::_0xF1C03A5352243A30(iLocal_103[iLocal_125]);
						ai::open_sequence_task(&iLocal_124);
						ai::task_look_at_entity(0, player::player_ped_id(), -1, 0, 2);
						ai::task_go_to_entity_while_aiming_at_entity(0, player::player_ped_id(),
																	 player::player_ped_id(), 1f, 0, 4f, 1082130432, 1,
																	 0, -957453492);
						ai::task_aim_gun_at_entity(0, player::player_ped_id(), -1, 0);
						ai::close_sequence_task(iLocal_124);
						ai::task_perform_sequence(iLocal_103[iVar1], iLocal_124);
						ai::clear_sequence_task(&iLocal_124);
						ped::set_ped_using_action_mode(iLocal_103[iVar1], 1, -1, 0);
						iLocal_90[iVar1] = 1;
					}
					iVar1++;
				}
				if (!ped::is_ped_injured(iLocal_103[iLocal_125])) {
					if (!ped::is_ped_facing_ped(iLocal_103[iLocal_125], player::player_ped_id(), 50f)) {
						ai::task_look_at_entity(iLocal_103[iLocal_125], player::player_ped_id(), -1, 0, 2);
						ped::set_ped_keep_task(iLocal_103[iLocal_125], 1);
					}
				}
				if (ped::is_ped_stopped(player::player_ped_id())) {
					if (iLocal_128 == 0) {
						iLocal_128 = gameplay::get_game_timer();
					}
					else {
						iLocal_129 = gameplay::get_game_timer();
					}
				}
				else {
					iLocal_129 = 0;
					iLocal_128 = 0;
				}
				if (iLocal_90[iLocal_125] && !iLocal_97) {
					if (gameplay::get_game_timer() - iLocal_130 > 6000) {
						if (!func_55()) {
							func_85(&uLocal_131, 3, iLocal_103[iLocal_125], "SalvadorGang", 0, 1);
							func_73(&uLocal_131, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
							iLocal_97 = 1;
						}
					}
				}
				if (iLocal_90[iLocal_125] && !iLocal_98) {
					if (gameplay::get_game_timer() - iLocal_130 > 12000) {
						if (!func_55()) {
							func_85(&uLocal_131, 3, iLocal_103[iLocal_125], "SalvadorGang", 0, 1);
							func_73(&uLocal_131, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
							iLocal_98 = 1;
						}
					}
				}
				if (iLocal_90[iLocal_125]) {
					if (gameplay::get_game_timer() - iLocal_130 > 18000 || iLocal_129 - iLocal_128 > 5000 ||
						ped::is_ped_in_combat(iLocal_103[iLocal_125], 0)) {
						if (entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_73, vLocal_76, fLocal_79,
															 0, 1, 0) ||
							entity::is_entity_at_entity(iLocal_103[iLocal_125], player::player_ped_id(), 15f, 15f, 5f,
														0, 1, 0)) {
							func_87();
							system::wait(0);
							if (func_86()) {
								func_85(&uLocal_131, 4, iLocal_103[iLocal_125], "DRUGFARMGOON", 0, 1);
								func_73(&uLocal_131, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
							}
							else {
								func_85(&uLocal_131, 3, iLocal_103[iLocal_125], "SalvadorGang", 0, 1);
								func_73(&uLocal_131, "RECSHAU", "RECSH_FIRE", 4, 0, 0, 0);
							}
							iLocal_127 = 2;
						}
						else {
							if (!ped::is_ped_in_combat(iLocal_103[iLocal_125], 0)) {
								ai::clear_ped_tasks(iLocal_103[iLocal_125]);
								if (!ped::is_ped_injured(iLocal_103[0])) {
									ai::open_sequence_task(&iLocal_124);
									ai::task_follow_nav_mesh_to_coord(0, 2205.769f, 5631.985f, 55.553f, 1f, -1,
																	  1048576000, 0, 1193033728);
									ai::task_turn_ped_to_face_coord(0, 2214.833f, 5635.627f, 55.0029f, 8000);
									ai::task_follow_nav_mesh_to_coord(0, 2222.259f, 5613.22f, 53.5576f, 1f, -1,
																	  1048576000, 0, 1193033728);
									ai::task_turn_ped_to_face_coord(0, 2221.951f, 5593.625f, 52.9483f, 10000);
									ai::set_sequence_to_repeat(iLocal_124, 1);
									ai::close_sequence_task(iLocal_124);
									ai::task_perform_sequence(iLocal_103[0], iLocal_124);
									ai::clear_sequence_task(&iLocal_124);
									ped::set_ped_using_action_mode(iLocal_103[0], 0, -1, 0);
								}
								if (!ped::is_ped_injured(iLocal_103[1])) {
									ai::open_sequence_task(&iLocal_124);
									ai::task_follow_nav_mesh_to_coord(0, 2210.584f, 5580.684f, 52.8132f, 1f, -1,
																	  1048576000, 0, 1193033728);
									ai::task_turn_ped_to_face_coord(0, 2205.466f, 5583.631f, 52.8682f, 8000);
									ai::task_follow_nav_mesh_to_coord(0, 2203.039f, 5567.408f, 52.7996f, 1f, -1,
																	  1048576000, 0, 1193033728);
									ai::task_turn_ped_to_face_coord(0, 2199.498f, 5560.702f, 52.8606f, 10000);
									ai::set_sequence_to_repeat(iLocal_124, 1);
									ai::close_sequence_task(iLocal_124);
									ai::task_perform_sequence(iLocal_103[1], iLocal_124);
									ai::clear_sequence_task(&iLocal_124);
									ped::set_ped_using_action_mode(iLocal_103[1], 0, -1, 0);
								}
								if (!ped::is_ped_injured(iLocal_103[2])) {
									ai::open_sequence_task(&iLocal_124);
									ai::task_follow_nav_mesh_to_coord(0, 2199.679f, 5590.673f, 52.7784f, 1f, -1,
																	  1048576000, 0, 1193033728);
									ai::task_turn_ped_to_face_coord(0, 2210.646f, 5593.576f, 52.8312f, 8000);
									ai::task_follow_nav_mesh_to_coord(0, 2232.761f, 5593.563f, 53.0542f, 1f, -1,
																	  1048576000, 0, 1193033728);
									ai::task_turn_ped_to_face_coord(0, 2237.916f, 5599.589f, 53.2311f, 12000);
									ai::set_sequence_to_repeat(iLocal_124, 1);
									ai::close_sequence_task(iLocal_124);
									ai::task_perform_sequence(iLocal_103[2], iLocal_124);
									ai::clear_sequence_task(&iLocal_124);
									ped::set_ped_using_action_mode(iLocal_103[2], 0, -1, 0);
								}
								if (!ped::is_ped_injured(iLocal_103[3]) && !ped::is_ped_injured(iLocal_103[4])) {
									ai::open_sequence_task(&iLocal_124);
									ai::task_go_to_entity(0, iLocal_103[4], -1, 2f, 1f, 1073741824, 0);
									ai::task_turn_ped_to_face_entity(0, iLocal_103[4], 0);
									ai::task_start_scenario_in_place(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
									ai::close_sequence_task(iLocal_124);
									ai::task_perform_sequence(iLocal_103[3], iLocal_124);
									ai::clear_sequence_task(&iLocal_124);
									ped::set_ped_using_action_mode(iLocal_103[3], 0, -1, 0);
								}
								if (!ped::is_ped_injured(iLocal_103[4])) {
									ai::open_sequence_task(&iLocal_124);
									ai::task_go_to_entity(0, iLocal_103[3], -1, 2f, 1f, 1073741824, 0);
									ai::task_turn_ped_to_face_entity(0, iLocal_103[3], 0);
									ai::task_start_scenario_in_place(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
									ai::close_sequence_task(iLocal_124);
									ai::task_perform_sequence(iLocal_103[4], iLocal_124);
									ai::clear_sequence_task(&iLocal_124);
									ped::set_ped_using_action_mode(iLocal_103[4], 0, -1, 0);
								}
								if (!ped::is_ped_injured(iLocal_103[5])) {
									ai::task_guard_current_position(iLocal_103[5], 0f, 3f, 1);
									ped::set_ped_using_action_mode(iLocal_103[5], 0, -1, 0);
								}
							}
							iVar1 = 0;
							while (iVar1 < iLocal_90) {
								iLocal_90[iVar1] = 0;
								iVar1++;
							}
							iLocal_90[iLocal_125] = 0;
							iLocal_127 = 0;
						}
					}
				}
				break;

			case 2:
				func_66();
				iLocal_125 = 0;
				while (iLocal_125 < 6) {
					if (!ped::is_ped_injured(iLocal_103[iLocal_125])) {
						if (!ped::is_ped_in_combat(iLocal_103[iLocal_125], 0)) {
							ped::_0xF1C03A5352243A30(iLocal_103[iLocal_125]);
							ai::task_combat_ped(iLocal_103[iLocal_125], player::player_ped_id(), 0, 16);
							ped::set_ped_keep_task(iLocal_103[iLocal_125], 1);
							if (!ui::does_blip_exist(iLocal_116[iLocal_125])) {
								iLocal_116[iLocal_125] = func_71(iLocal_103[iLocal_125], 1, 145);
							}
						}
					}
					if (!iLocal_99) {
						if (!func_55()) {
							func_85(&uLocal_131, 3, iLocal_103[iLocal_125], "SalvadorGang", 0, 1);
							func_73(&uLocal_131, "RECSHAU", "RECSH_STASH", 4, 0, 0, 0);
							iLocal_99 = 1;
						}
					}
					iLocal_125++;
				}
				break;
			}
		}
		iLocal_125++;
	}
}

// Position - 0x2F7A
int func_71(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = func_72(iParam0, !iParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x2FCC
int func_72(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_68(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_68(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_68(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x3070
int func_73(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_74(sParam2, iParam3, 0);
}

// Position - 0x30BE
int func_74(char *sParam0, int iParam1, int iParam2) {
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
					func_83();
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
		if (func_82(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_81();
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
				func_79();
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
				if (func_78()) {
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
			if (func_77()) {
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
			func_76();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_75();
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
		func_83();
	}
	return 0;
}

// Position - 0x338A
void func_75() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x33BB
void func_76() {
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

// Position - 0x3450
bool func_77() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x3477
bool func_78() {
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

// Position - 0x3510
void func_79() {
	if (func_45(14)) {
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
		Global_14443 = func_80();
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

// Position - 0x35B2
int func_80() {
	func_44();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x35CB
void func_81() {
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

// Position - 0x3622
bool func_82(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x365D
void func_83() {
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

// Position - 0x36B4
void func_84(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, var uParam5) {
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

// Position - 0x370A
void func_85(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x37A5
bool func_86() { return Global_101700.f_23954.f_7; }

// Position - 0x37B6
void func_87() {
	Global_14611 = 0;
	func_88();
}

// Position - 0x37C6
void func_88() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x37E7
int func_89() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_110) {
		if (vehicle::is_vehicle_driveable(iLocal_110[iVar0], 0)) {
			if (entity::has_entity_been_damaged_by_entity(iLocal_110[iVar0], player::player_ped_id(), 1)) {
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_103) {
		if (!ped::is_ped_injured(iLocal_103[iVar0])) {
			if (ped::_0x6CD5A433374D4CFB(iLocal_103[iVar0], player::player_ped_id())) {
				if (player::is_player_free_aiming_at_entity(player::player_id(), iLocal_103[iVar0]) ||
					player::is_player_targetting_entity(player::player_id(), iLocal_103[iVar0])) {
					return 1;
				}
			}
			if (gameplay::is_bullet_in_area(entity::get_entity_coords(iLocal_103[iVar0], 1), 5f, 1) ||
				entity::has_entity_been_damaged_by_entity(iLocal_103[iVar0], player::player_ped_id(), 1) ||
				entity::is_entity_touching_entity(player::player_ped_id(), iLocal_103[iVar0]) ||
				gameplay::is_projectile_type_in_area(
					entity::get_entity_coords(iLocal_103[iVar0], 1) - Vector(15f, 15f, 15f),
					entity::get_entity_coords(iLocal_103[iVar0], 1) + Vector(15f, 15f, 15f),
					joaat("weapon_smokegrenade"), 1) ||
				gameplay::is_projectile_type_in_area(
					entity::get_entity_coords(iLocal_103[iVar0], 1) - Vector(15f, 15f, 15f),
					entity::get_entity_coords(iLocal_103[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_grenade"),
					1) ||
				gameplay::is_projectile_type_in_area(
					entity::get_entity_coords(iLocal_103[iVar0], 1) - Vector(15f, 15f, 15f),
					entity::get_entity_coords(iLocal_103[iVar0], 1) + Vector(15f, 15f, 15f),
					joaat("weapon_grenadelauncher"), 1) ||
				gameplay::is_projectile_type_in_area(
					entity::get_entity_coords(iLocal_103[iVar0], 1) - Vector(15f, 15f, 15f),
					entity::get_entity_coords(iLocal_103[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_stickybomb"),
					1)) {
				return 1;
			}
		}
		iVar0++;
	}
	if (fire::is_explosion_in_angled_area(-1, vLocal_73, vLocal_76, fLocal_79)) {
		return 1;
	}
	if (entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_73, vLocal_76, fLocal_79, 0, 1, 0)) {
		if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
			return 1;
		}
	}
	if (entity::is_entity_at_coord(player::player_ped_id(), 2202.498f, 5603.424f, 52.7476f, 20f, 20f, 20f, 0, 1, 0)) {
		if (entity::get_entity_speed(player::player_ped_id()) > 15f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x3A5A
void func_90() {
	int iVar0;

	streaming::request_model(joaat("g_m_y_salvagoon_01"));
	streaming::request_model(joaat("bobcatxl"));
	streaming::request_model(joaat("prop_cash_case_01"));
	if (streaming::has_model_loaded(joaat("g_m_y_salvagoon_01")) && streaming::has_model_loaded(joaat("bobcatxl")) &&
		streaming::has_model_loaded(joaat("prop_cash_case_01"))) {
		ped::add_scenario_blocking_area(vLocal_48 - Vector(20f, 50f, 50f), vLocal_48 + Vector(20f, 50f, 50f), 0, 1, 1,
										1);
		vehicle::set_vehicle_model_is_suppressed(joaat("bobcatxl"), 1);
		player::set_wanted_level_multiplier(0f);
		gameplay::enable_dispatch_service(3, 0);
		iLocal_110[0] = vehicle::create_vehicle(joaat("bobcatxl"), 2209.17f, 5572.897f, 52.7565f, 255.5161f, 1, 1);
		entity::set_entity_as_mission_entity(iLocal_110[0], 1, 0);
		vehicle::set_vehicle_on_ground_properly(iLocal_110[0], 1084227584);
		vehicle::set_vehicle_extra(iLocal_110[0], 1, 1);
		iLocal_110[1] = vehicle::create_vehicle(joaat("bobcatxl"), 2195.473f, 5607.506f, 52.5648f, 168.4012f, 1, 1);
		entity::set_entity_as_mission_entity(iLocal_110[1], 1, 0);
		vehicle::set_vehicle_extra(iLocal_110[1], 1, 0);
		iVar0 = 0;
		gameplay::set_bit(&iVar0, 1);
		uLocal_113 = object::create_pickup_rotate(joaat("pickup_money_case"), vLocal_51, -1.368082f, 0.230633f,
												  176.8749f, iVar0, gameplay::get_random_int_in_range(40000, 100000), 2,
												  1, joaat("prop_cash_case_01"));
		vLocal_54[0 /*3*/] = {2205.769f, 5631.985f, 55.553f};
		fLocal_80[0] = 352.2203f;
		vLocal_54[1 /*3*/] = {2210.584f, 5580.684f, 52.8132f};
		fLocal_80[1] = 300.5012f;
		vLocal_54[2 /*3*/] = {2201.302f, 5589.279f, 52.9354f};
		fLocal_80[2] = 53.1602f;
		vLocal_54[3 /*3*/] = {2202.535f, 5613.367f, 52.6781f};
		fLocal_80[3] = 70f;
		vLocal_54[4 /*3*/] = {2200.764f, 5614.076f, 52.6852f};
		fLocal_80[4] = 53f;
		vLocal_54[5 /*3*/] = {2193.714f, 5595.456f, 52.7615f};
		fLocal_80[5] = 338.8346f;
		ped::add_relationship_group("DrugCult", &iLocal_123);
		ped::set_relationship_between_groups(3, iLocal_123, -1533126372);
		ped::set_relationship_between_groups(3, -1533126372, iLocal_123);
		ped::set_relationship_between_groups(5, iLocal_123, 1862763509);
		iLocal_125 = 0;
		while (iLocal_125 < 6) {
			iLocal_103[iLocal_125] = ped::create_ped(26, joaat("g_m_y_salvagoon_01"), vLocal_54[iLocal_125 /*3*/],
													 fLocal_80[iLocal_125], 1, 1);
			ped::set_blocking_of_non_temporary_events(iLocal_103[iLocal_125], 1);
			ped::set_ped_combat_movement(iLocal_103[iLocal_125], 2);
			ped::set_ped_combat_attributes(iLocal_103[iLocal_125], 50, 1);
			ped::set_ped_combat_range(iLocal_103[iLocal_125], 0);
			ped::set_ped_accuracy(iLocal_103[iLocal_125], 13);
			ped::set_ped_relationship_group_hash(iLocal_103[iLocal_125], iLocal_123);
			iLocal_126 = gameplay::get_random_int_in_range(0, 3);
			if (iLocal_126 == 0) {
				weapon::give_weapon_to_ped(iLocal_103[iLocal_125], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
			}
			else if (iLocal_126 == 1) {
				weapon::give_weapon_to_ped(iLocal_103[iLocal_125], joaat("weapon_microsmg"), -1, 1, 1);
			}
			else {
				weapon::give_weapon_to_ped(iLocal_103[iLocal_125], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			ped::set_ped_config_flag(iLocal_103[iLocal_125], 42, 1);
			func_85(&uLocal_131, 3, iLocal_103[iLocal_125], "SalvadorGang", 0, 1);
			iLocal_125++;
		}
		if (!ped::is_ped_injured(iLocal_103[0])) {
			ai::open_sequence_task(&iLocal_124);
			ai::task_follow_nav_mesh_to_coord(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 1048576000, 0, 1193033728);
			ai::task_turn_ped_to_face_coord(0, 2214.833f, 5635.627f, 55.0029f, 8000);
			ai::task_follow_nav_mesh_to_coord(0, 2215.993f, 5613.299f, 53.6157f, 1f, -1, 1048576000, 0, 1193033728);
			ai::task_turn_ped_to_face_coord(0, 2221.951f, 5593.625f, 52.9483f, 10000);
			ai::set_sequence_to_repeat(iLocal_124, 1);
			ai::close_sequence_task(iLocal_124);
			ai::task_perform_sequence(iLocal_103[0], iLocal_124);
			ai::clear_sequence_task(&iLocal_124);
		}
		ped::set_ped_name_debug(iLocal_103[0], "piDrugCult[0]");
		if (!ped::is_ped_injured(iLocal_103[1])) {
			ai::open_sequence_task(&iLocal_124);
			ai::task_follow_nav_mesh_to_coord(0, 2210.584f, 5580.684f, 52.8132f, 1f, -1, 1048576000, 0, 1193033728);
			ai::task_turn_ped_to_face_coord(0, 2205.466f, 5583.631f, 52.8682f, 8000);
			ai::task_follow_nav_mesh_to_coord(0, 2203.039f, 5567.408f, 52.7996f, 1f, -1, 1048576000, 0, 1193033728);
			ai::task_turn_ped_to_face_coord(0, 2199.498f, 5560.702f, 52.8606f, 10000);
			ai::set_sequence_to_repeat(iLocal_124, 1);
			ai::close_sequence_task(iLocal_124);
			ai::task_perform_sequence(iLocal_103[1], iLocal_124);
			ai::clear_sequence_task(&iLocal_124);
		}
		ped::set_ped_name_debug(iLocal_103[1], "piDrugCult[1]");
		if (!ped::is_ped_injured(iLocal_103[2])) {
			ai::open_sequence_task(&iLocal_124);
			ai::task_follow_nav_mesh_to_coord(0, 2201.014f, 5589.357f, 52.9573f, 1f, -1, 1048576000, 0, 1193033728);
			ai::task_turn_ped_to_face_coord(0, 2210.646f, 5593.576f, 52.8312f, 8000);
			ai::task_follow_nav_mesh_to_coord(0, 2229.667f, 5598.368f, 53.2195f, 1f, -1, 1048576000, 0, 1193033728);
			ai::task_turn_ped_to_face_coord(0, 2237.916f, 5599.589f, 53.2311f, 12000);
			ai::set_sequence_to_repeat(iLocal_124, 1);
			ai::close_sequence_task(iLocal_124);
			ai::task_perform_sequence(iLocal_103[2], iLocal_124);
			ai::clear_sequence_task(&iLocal_124);
		}
		ped::set_ped_name_debug(iLocal_103[2], "piDrugCult[2]");
		if (!ped::is_ped_injured(iLocal_103[3]) && !ped::is_ped_injured(iLocal_103[4])) {
			ai::open_sequence_task(&iLocal_124);
			ai::task_go_to_entity(0, iLocal_103[4], -1, 2f, 1f, 1073741824, 0);
			ai::task_turn_ped_to_face_entity(0, iLocal_103[4], 0);
			ai::task_start_scenario_in_place(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			ai::close_sequence_task(iLocal_124);
			ai::task_perform_sequence(iLocal_103[3], iLocal_124);
			ai::clear_sequence_task(&iLocal_124);
		}
		ped::set_ped_name_debug(iLocal_103[3], "piDrugCult[3]");
		if (!ped::is_ped_injured(iLocal_103[4])) {
			ai::open_sequence_task(&iLocal_124);
			ai::task_go_to_entity(0, iLocal_103[3], -1, 2f, 1f, 1073741824, 0);
			ai::task_turn_ped_to_face_entity(0, iLocal_103[3], 0);
			ai::task_start_scenario_in_place(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			ai::close_sequence_task(iLocal_124);
			ai::task_perform_sequence(iLocal_103[4], iLocal_124);
			ai::clear_sequence_task(&iLocal_124);
		}
		ped::set_ped_name_debug(iLocal_103[4], "piDrugCult[4]");
		ai::task_guard_current_position(iLocal_103[5], 0f, 3f, 1);
		ped::set_ped_name_debug(iLocal_103[5], "piDrugCult[5]");
		iLocal_114 = func_91(vLocal_51, 0);
		ui::set_blip_sprite(iLocal_114, 140);
		func_56("DRUG_BLIP_START", -1);
		iLocal_46 = 1;
	}
}

// Position - 0x4096
int func_91(vector3 vParam0, int iParam3) {
	int iVar0;

	iVar0 = ui::add_blip_for_coord(vParam0);
	ui::set_blip_scale(iVar0, func_68(network::network_is_game_in_progress(), 1f, 1f));
	ui::set_blip_route(iVar0, iParam3);
	return iVar0;
}

// Position - 0x40C2
bool func_92() {
	if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
		if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_43) < 75f * 75f) {
			return true;
		}
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_103()) {
			return false;
		}
	}
	if (func_99()) {
		return true;
	}
	if (func_93(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x4148
int func_93(float fParam0, int iParam1) {
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
		if (func_46(func_80())) {
			iVar36 = func_43();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63) {
				iVar32 = iVar37;
				if (gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 2) &&
					!gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 3)) {
					func_94(iVar32, &Var0);
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

// Position - 0x41FF
void func_94(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_95(uParam1, "Abigail1", func_97(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				"ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
		break;

	case 1:
		func_95(uParam1, "Abigail2", func_97(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				-1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
		break;

	case 2:
		func_95(uParam1, "Barry1", func_97(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				4, 1, 0, 2359, func_96(iParam0), 1, 0);
		break;

	case 3:
		func_95(uParam1, "Barry2", func_97(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				4, 4, 0, 2359, func_96(iParam0), 1, 1);
		break;

	case 4:
		func_95(uParam1, "Barry3", func_97(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0,
				2359, func_96(iParam0), 0, 0);
		break;

	case 5:
		func_95(uParam1, "Barry3A", func_97(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "",
				166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 6:
		func_95(uParam1, "Barry3C", func_97(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 7:
		func_95(uParam1, "Barry4", func_97(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4",
				0, 0, -1, 4, 2, 800, 2000, func_96(iParam0), 0, 0);
		break;

	case 8:
		func_95(uParam1, "Dreyfuss1", func_97(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 9:
		func_95(uParam1, "Epsilon1", func_97(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10,
				4, 1, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 10:
		func_95(uParam1, "Epsilon2", func_97(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11,
				4, 1, 0, 2359, func_96(iParam0), 1, 0);
		break;

	case 11:
		func_95(uParam1, "Epsilon3", func_97(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				0, 0, 12, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 12:
		func_95(uParam1, "Epsilon4", func_97(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				"postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 13:
		func_95(uParam1, "Epsilon5", func_97(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes",
				0, 0, 14, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
		break;

	case 14:
		func_95(uParam1, "Epsilon6", func_97(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				15, 4, 1, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 15:
		func_95(uParam1, "Epsilon7", func_97(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert",
				0, 0, 16, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 16:
		func_95(uParam1, "Epsilon8", func_97(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				"epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
		break;

	case 17:
		func_95(uParam1, "Extreme1", func_97(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18,
				4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 18:
		func_95(uParam1, "Extreme2", func_97(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0,
				19, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 19:
		func_95(uParam1, "Extreme3", func_97(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 20:
		func_95(uParam1, "Extreme4", func_97(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				-1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 21:
		func_95(uParam1, "Fanatic1", func_97(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1,
				-1, 4, 1, 700, 2000, func_96(iParam0), 1, 0);
		break;

	case 22:
		func_95(uParam1, "Fanatic2", func_97(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				-1, 4, 4, 700, 2000, func_96(iParam0), 1, 0);
		break;

	case 23:
		func_95(uParam1, "Fanatic3", func_97(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4,
				2, 700, 2000, func_96(iParam0), 0, 1);
		break;

	case 24:
		func_95(uParam1, "Hao1", func_97(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				"controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_96(iParam0), 0, 1);
		break;

	case 25:
		func_95(uParam1, "Hunting1", func_97(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				26, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 26:
		func_95(uParam1, "Hunting2", func_97(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				-1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 27:
		func_95(uParam1, "Josh1", func_97(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				0, 1, 28, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
		break;

	case 28:
		func_95(uParam1, "Josh2", func_97(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29,
				4, 4, 0, 2359, func_96(iParam0), 1, 1);
		break;

	case 29:
		func_95(uParam1, "Josh3", func_97(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30,
				4, 4, 0, 2359, func_96(iParam0), 1, 1);
		break;

	case 30:
		func_95(uParam1, "Josh4", func_97(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				4, 4, 0, 2359, func_96(iParam0), 1, 0);
		break;

	case 31:
		func_95(uParam1, "Maude1", func_97(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher",
				0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 32:
		func_95(uParam1, "Minute1", func_97(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				4, 4, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 33:
		func_95(uParam1, "Minute2", func_97(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				0, 2359, func_96(iParam0), 0, 1);
		break;

	case 34:
		func_95(uParam1, "Minute3", func_97(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				-1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 35:
		func_95(uParam1, "MrsPhilips1", func_97(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				"ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 36:
		func_95(uParam1, "MrsPhilips2", func_97(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				2359, func_96(iParam0), 0, 0);
		break;

	case 37:
		func_95(uParam1, "Nigel1", func_97(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				-1, 1, 4, 0, 2359, func_96(iParam0), 1, 0);
		break;

	case 38:
		func_95(uParam1, "Nigel1A", func_97(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "",
				0, 0, 42, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
		break;

	case 39:
		func_95(uParam1, "Nigel1B", func_97(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
		break;

	case 40:
		func_95(uParam1, "Nigel1C", func_97(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
		break;

	case 41:
		func_95(uParam1, "Nigel1D", func_97(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
		break;

	case 42:
		func_95(uParam1, "Nigel2", func_97(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43,
				4, 4, 0, 2359, func_96(iParam0), 1, 1);
		break;

	case 43:
		func_95(uParam1, "Nigel3", func_97(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				"postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
		break;

	case 44:
		func_95(uParam1, "Omega1", func_97(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				"spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 45:
		func_95(uParam1, "Omega2", func_97(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				-1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 46:
		func_95(uParam1, "Paparazzo1", func_97(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				47, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 47:
		func_95(uParam1, "Paparazzo2", func_97(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0,
				48, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 48:
		func_95(uParam1, "Paparazzo3", func_97(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				1, -1, 2, 2, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 49:
		func_95(uParam1, "Paparazzo3A", func_97(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0,
				"", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 50:
		func_95(uParam1, "Paparazzo3B", func_97(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0,
				0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 51:
		func_95(uParam1, "Paparazzo4", func_97(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				-1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 52:
		func_95(uParam1, "Rampage1", func_97(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				4, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 54:
		func_95(uParam1, "Rampage3", func_97(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				4, 4, 0, 2359, func_96(iParam0), 1, 0);
		break;

	case 55:
		func_95(uParam1, "Rampage4", func_97(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				4, 0, 2359, func_96(iParam0), 1, 0);
		break;

	case 56:
		func_95(uParam1, "Rampage5", func_97(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				53, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
		break;

	case 53:
		func_95(uParam1, "Rampage2", func_97(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				"rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
		break;

	case 57:
		func_95(uParam1, "TheLastOne", func_97(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0,
				1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 58:
		func_95(uParam1, "Tonya1", func_97(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				"ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 59:
		func_95(uParam1, "Tonya2", func_97(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				"ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	case 60:
		func_95(uParam1, "Tonya3", func_97(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359,
				func_96(iParam0), 0, 1);
		break;

	case 61:
		func_95(uParam1, "Tonya4", func_97(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				func_96(iParam0), 0, 1);
		break;

	case 62:
		func_95(uParam1, "Tonya5", func_97(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				-1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x53B4
void func_95(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x5445
int func_96(int iParam0) {
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

// Position - 0x578B
struct<2> func_97(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_98(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x57C2
struct<2>
func_98(int iParam0) {
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

//Position - 0x5C0E
bool func_99()
{
	if (func_102() && !func_103()) {
		return true;
	}
	if (func_101() && func_100()) {
		return true;
	}
	return false;
}

// Position - 0x5C40
bool func_100() { return Global_101418 > 0; }

// Position - 0x5C4E
int func_101() {
	if (Global_88746 != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x5C63
int func_102() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x5C89
int func_103() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x5CA6
bool func_104() {
	if (!func_63(5)) {
		return true;
	}
	if (func_99()) {
		return true;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_103()) {
			return false;
		}
	}
	if (func_93(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x5D08
bool func_105() {
	if (Global_101689 == func_52() && gameplay::get_random_event_flag() && Global_101690) {
		return true;
	}
	return false;
}

// Position - 0x5D33
void func_106(int iParam0) {
	if (iParam0 == -1) {
		iParam0 = func_52();
	}
	if (iParam0 == -1) {
		return;
	}
	func_108(iParam0);
	gameplay::_0x65D2EBB47E1CEC21(0);
	gameplay::set_random_event_flag(1);
	Global_101686 = 0;
	func_107();
}

// Position - 0x5D69
void func_107() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			vehicle::set_vehicle_model_is_suppressed(
				entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)), 1);
		}
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
	}
}

// Position - 0x5DA6
void func_108(int iParam0) { Global_101689 = iParam0; }

// Position - 0x5DB4
bool func_109(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;

	if (!Global_138924) {
		return false;
	}
	if (iParam3 == -1) {
		iParam3 = func_52();
	}
	if (iParam3 == -1) {
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32) {
		if (!func_135()) {
			return false;
		}
	}
	vLocal_43 = {vParam0};
	iVar0 = 0;
	if (!iVar0) {
		if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
			vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_103()) {
				return false;
			}
		}
		if (!Global_101700.f_8044) {
			return false;
		}
		if (func_28(0)) {
			return false;
		}
		if (func_99()) {
			return false;
		}
		if (func_134()) {
			return false;
		}
		if (Global_101689 != -1) {
			return false;
		}
		if (func_46(func_80())) {
			if (func_93(100f, 1) != -1) {
				return false;
			}
		}
		if (player::is_player_playing(player::player_id()) && !iParam6) {
			if (vVar1.z - vLocal_43.z > 50f) {
				return false;
			}
		}
		if (!func_133(iParam3)) {
			return false;
		}
		if (func_46(func_80())) {
			if (func_132(func_80()) == 4 || func_132(func_80()) == 5) {
				return false;
			}
		}
		if (func_46(func_80())) {
			if (!func_131(iParam3, iParam4, 145)) {
				return false;
			}
		}
		if (!func_130(Global_101700.f_23954.f_43[iParam3])) {
			return false;
		}
		if (gameplay::get_game_timer() - Global_101691 < 150000) {
			if (iParam3 != 30) {
				return false;
			}
		}
		if (func_129()) {
			return false;
		}
		if (gameplay::get_mission_flag()) {
			return false;
		}
		if (gameplay::get_random_event_flag()) {
			return false;
		}
		if (!func_120(4)) {
			return false;
		}
		if (!func_63(5)) {
			return false;
		}
		if (func_119(iParam3, iParam4) && !iParam5) {
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
		if (iParam3 == 9 && (iParam4 == 2 || iParam4 == 5) && !func_119(0, 0)) {
			return false;
		}
		if (Global_25336) {
			return false;
		}
		if (func_133(30) && !func_119(30, 0)) {
			if (iParam3 != 30) {
				if (system::vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f) {
					return false;
				}
			}
		}
		if (func_46(func_80())) {
			iVar4 = 0;
			while (iVar4 < 3) {
				vVar5 = {Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_118(iVar8)) {
					if (func_111(iVar4)) {
						if (!func_110(vVar5, 0f, 0f, 0f, 0)) {
							if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 0), vVar5) <
								210f * 210f) {
								if (func_80() != iVar4) {
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

// Position - 0x614E
bool func_110(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x6195
bool func_111(int iParam0) {
	int iVar0;

	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
	return func_112(iVar0);
}

// Position - 0x61B6
int func_112(int iParam0) { return func_113(iParam0, 1); }

// Position - 0x61C5
int func_113(int iParam0, int iParam1) {
	int *iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_118(iParam0)) {
		return 0;
	}
	func_114(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (iVar5 > 0 || iVar4 > 0 || iVar3 > 0 || iVar2 >= iParam1) {
		return 1;
	}
	return 0;
}

// Position - 0x6218
void func_114(int iParam0, int *iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6) {
	func_115(func_22(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x6236
void func_115(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6,
			  int *iParam7) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_117(iParam0, iParam1)) {
		iVar0 = func_7(iParam1);
		iVar1 = func_5(iParam0);
		iVar2 = func_5(iParam0) - func_5(iParam1);
		iVar3 = func_7(iParam0) - func_7(iParam1);
		iVar4 = func_8(iParam0) - func_8(iParam1);
		iVar5 = func_11(iParam0) - func_11(iParam1);
		iVar6 = func_10(iParam0) - func_10(iParam1);
		iVar7 = func_9(iParam0) - func_9(iParam1);
	}
	else {
		iVar0 = func_7(iParam0);
		iVar1 = func_5(iParam1);
		iVar2 = func_5(iParam1) - func_5(iParam0);
		iVar3 = func_7(iParam1) - func_7(iParam0);
		iVar4 = func_8(iParam1) - func_8(iParam0);
		iVar5 = func_11(iParam1) - func_11(iParam0);
		iVar6 = func_10(iParam1) - func_10(iParam0);
		iVar7 = func_9(iParam1) - func_9(iParam0);
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
		iVar4 += func_21(iVar0, iVar1);
		iVar3--;
		iVar0 = system::round(func_116(system::to_float(iVar0 + 1), 0f, 12f));
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

// Position - 0x6437
float func_116(float fParam0, float fParam1, float fParam2) {
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

// Position - 0x6479
bool func_117(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_118(iParam1) || !func_118(iParam0)) {
		return true;
	}
	iVar0 = func_5(iParam0);
	iVar1 = func_5(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_7(iParam0);
	iVar1 = func_7(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_8(iParam0);
	iVar1 = func_8(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_11(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_10(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_9(iParam0);
	iVar1 = func_9(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	return false;
}

// Position - 0x6585
bool func_118(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return false;
	}
	iVar0 = func_9(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return false;
	}
	iVar1 = func_10(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return false;
	}
	iVar2 = func_11(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return false;
	}
	iVar3 = func_5(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return false;
	}
	iVar4 = func_7(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return false;
	}
	iVar5 = func_8(iParam0);
	if (iVar5 < 1 || iVar5 > func_21(iVar4, iVar3)) {
		return false;
	}
	return true;
}

// Position - 0x6661
int func_119(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_101700.f_23954.f_8[iParam0], iParam1)) {
		return 1;
	}
	return 0;
}

// Position - 0x6684
int func_120(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_80();
				if (!func_46(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_128() || Global_100747 ||
						Global_25192 || func_127() || func_82(8, -1) || func_126() || func_125() || func_124() ||
						func_123() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_128() || Global_25192 ||
						func_127() || func_82(8, -1) || func_124() || func_126() || func_125() || func_123() ||
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_128() || Global_100747 ||
						Global_25192 || func_127() || func_82(8, -1) || func_124() || func_126() || func_125() ||
						func_123() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return 0;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_128() || Global_100747 ||
						Global_25192 || func_127() || func_82(8, -1) || func_126() || func_125() || func_123() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 4:
					if (func_128() || player::get_player_wanted_level(player::player_id()) > 0 || func_82(8, -1) ||
						func_123() || func_122() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 5:
					if (func_82(8, -1) || func_126() || func_125() || func_122() || func_121()) {
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
							player::is_player_climbing(player::player_id()) || func_128() || Global_25192 ||
							func_127() || func_82(8, -1) || func_125() || func_124() || func_123() ||
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
						player::is_player_being_arrested(player::player_id(), 1) || func_128() || func_125() ||
						Global_100747 || Global_25192 || func_127() || Global_36912 || func_82(8, -1) || func_124() ||
						func_122() || func_123() || Global_101700.f_6647.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_128() || Global_100747 ||
						Global_25192 || func_127() || func_82(8, -1) || func_124() || func_122() || func_126() ||
						func_125() || func_123()) {
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

// Position - 0x6DA1
var func_121() { return Global_91530.f_1; }

// Position - 0x6DAF
int func_122() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x6DD5
int func_123() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x6DEF
int func_124() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x6E19
bool func_125() { return Global_91543.f_304 > 0; }

// Position - 0x6E2A
bool func_126() { return Global_91543.f_303 > 0; }

// Position - 0x6E3B
var func_127() { return Global_1315233; }

// Position - 0x6E47
int func_128() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x6E63
bool func_129() {
	func_79();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
		return true;
	}
	return false;
}

// Position - 0x6E8B
int func_130(int iParam0) { return func_117(func_22(), iParam0); }

// Position - 0x6E9D
int func_131(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_80();
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

// Position - 0x6F81
int func_132(int iParam0) {
	if (!func_46(iParam0)) {
		return 7;
	}
	return Global_101700.f_6647.f_919[iParam0];
}

// Position - 0x6FA5
int func_133(int iParam0) {
	int iVar0;
	var uVar1;

	if (iParam0 == 31 || iParam0 == 32) {
		if (!func_135()) {
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

// Position - 0x7003
bool func_134() {
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

// Position - 0x7047
int func_135() {
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

// Position - 0x7102
void func_136() {
	if (iLocal_88) {
		if (!iLocal_87) {
			audio::trigger_music_event("RE20_FAIL");
			if (ped::is_ped_injured(player::player_ped_id())) {
				func_23(0);
			}
			iLocal_125 = 0;
			while (iLocal_125 < 6) {
				if (!ped::is_ped_injured(iLocal_103[iLocal_125])) {
					if (ui::does_blip_exist(iLocal_116[iLocal_125])) {
						ui::remove_blip(&iLocal_116[iLocal_125]);
					}
					entity::set_ped_as_no_longer_needed(&iLocal_103[iLocal_125]);
				}
				iLocal_125++;
			}
			player::set_wanted_level_multiplier(1f);
			gameplay::enable_dispatch_service(3, 1);
			if (bLocal_89) {
				func_3(18, 7, 0);
			}
			else {
				func_3(18, 1, 0);
			}
		}
		ped::remove_scenario_blocking_areas();
	}
	func_137(-1);
	script::terminate_this_thread();
}

// Position - 0x719E
void func_137(int iParam0) {
	char cVar0[64];

	if (iParam0 == -1) {
		iParam0 = func_52();
	}
	if (iParam0 == -1) {
		return;
	}
	if (func_105()) {
		func_141(iParam0);
		ui::set_mission_name(0, 0);
		Global_101691 = gameplay::get_game_timer();
		func_140(30000);
		StringCopy(&cVar0, func_139(Global_101689, 1), 64);
		if (func_51(Global_101689) > 0) {
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		stats::_0x71862B1D855F32E1(&cVar0, Global_101686, gameplay::get_game_timer() - Global_101687, 0);
	}
	else if (gameplay::is_bit_set(Global_101696, 0) && Global_101700.f_23954.f_2 < 3) {
		gameplay::clear_bit(&Global_101696, 0);
	}
	func_138(&Global_25249);
	Global_101690 = 0;
	func_108(-1);
}

// Position - 0x7253
void func_138(int *iParam0) {
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

// Position - 0x7290
char *func_139(int iParam0, int iParam1) {
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

// Position - 0x74D9
void func_140(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0x74EB
void func_141(int iParam0) { func_3(iParam0, 0, func_142(iParam0)); }

// Position - 0x7500
int func_142(int iParam0) {
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
