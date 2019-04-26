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
bool bLocal_45 = 0;
int iLocal_46 = 0;
int iLocal_47 = 0;
int iLocal_48 = 0;
int iLocal_49 = 0;
int iLocal_50 = 0;
int iLocal_51 = 0;
var uLocal_52[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
vector3 vLocal_65[12] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
int iLocal_102 = 0;
int iLocal_103 = 0;
int iLocal_104 = 0;
var uLocal_105 = 0;
int iLocal_106 = 0;
int iLocal_107[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
bool bLocal_118 = 0;
bool bLocal_119 = 0;
var uLocal_120 = 0;
var uLocal_121 = 0;
var uLocal_122 = 0;
var uLocal_123 = 0;
int iLocal_124 = 0;
int iLocal_125 = 0;
int iLocal_126 = 0;
int iLocal_127 = 0;
struct<7> Local_128 = {
	0, 0, 1097859072, 1500, 45, 1103626240, 5
};
int *iLocal_135 = NULL;
var *uLocal_136 = NULL;
var uLocal_137 = 0;
var uLocal_138 = 0;
var uLocal_139 = 0;
var uLocal_140 = 0;
var uLocal_141 = 0;
var *uLocal_142 = NULL;
var uLocal_143 = 0;
var uLocal_144 = 0;
var *uLocal_145 = NULL;
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
var uLocal_302 = 0;
var uLocal_303 = 0;
var uLocal_304 = 0;
var uLocal_305 = 0;
var uLocal_306 = 0;
var uLocal_307 = 0;
var uLocal_308 = 0;
var uLocal_309 = 0;
int iLocal_310 = 0;
int iLocal_311 = 0;
vector3 vLocal_312 = {0f, 0f, 0f};
int iLocal_315 = 0;
int iLocal_316 = 0;
int iLocal_317 = 0;
struct<76> Local_318 = {
	10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 10
};
var uLocal_394 = 0;
var uLocal_395 = 0;
var uLocal_396 = 0;
var uLocal_397 = 0;
var uLocal_398 = 0;
var uLocal_399 = 0;
var uLocal_400 = 0;
var uLocal_401 = 0;
var uLocal_402 = 0;
var uLocal_403 = 0;
var uLocal_404[3] = {0, 0, 0};
var uLocal_408[3] = {0, 0, 0};
int iLocal_412[3] = {0, 0, 0};
float fLocal_416 = 0f;
bool bLocal_417 = 0;
int iLocal_418 = 0;
int iLocal_419 = 0;
struct<13> Local_420[10];
var uLocal_551 = 0;
var uLocal_552 = 0;
var uLocal_553 = 0;
var uLocal_554 = 0;
var uLocal_555 = 0;
var uLocal_556 = 0;
var uLocal_557 = 0;
var uLocal_558 = 0;
var uLocal_559 = 0;
var uLocal_560 = 0;
var uLocal_561 = 0;
var uLocal_562 = 0;
var uLocal_563 = 0;
var uLocal_564 = 0;
var uLocal_565 = 0;
var uLocal_566 = 0;
var uLocal_567 = 0;
var uLocal_568 = 0;
int iLocal_569 = 0;
int iLocal_570 = 0;
int iLocal_571 = 0;
bool bLocal_572 = 0;
int iLocal_573 = 0;
bool bLocal_574 = 0;
int iLocal_575 = 0;
var uLocal_576[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
var uLocal_597[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
bool bLocal_618 = 0;
int iLocal_619 = 0;
var uLocal_620 = 0;
int iLocal_621 = 0;
var uLocal_622 = 0;
var uLocal_623 = 0;
var uLocal_624 = 0;
vector3 vLocal_625 = {0f, 0f, 0f};
int iLocal_628 = 0;
struct<41> Local_629 = {
	3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0,
		0, 4
};
var uLocal_670 = 0;
var uLocal_671 = 0;
var uLocal_672 = 0;
var uLocal_673 = 0;
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
	fLocal_416 = 0f;
	bLocal_417 = true;
	vLocal_625 = {1683.682f, 2518.867f, 44.5651f};
	if (player::has_force_cleanup_occurred(3)) {
		func_83(0);
	}
	iLocal_311 = player::player_ped_id();
	if (!ped::is_ped_injured(player::player_ped_id())) {
		player::clear_player_has_damaged_at_least_one_non_animal_ped(player::player_id());
	}
	while (true) {
		if (entity::is_entity_dead(iLocal_311, 0)) {
			func_83(0);
		}
		func_82();
		vLocal_312 = {entity::get_entity_coords(iLocal_311, 1)};
		switch (iLocal_310) {
		case 0:
			func_80();
			iLocal_310 = 1;
			break;

		case 1:
			if (!Global_25198) {
				func_79();
				func_78();
				func_77();
				func_75();
				iLocal_310 = 2;
			}
			break;

		case 2:
			if (func_74() && func_73() && func_72() && func_71() && func_70()) {
				iLocal_310 = 3;
			}
			break;

		case 3:
			func_64();
			system::wait(0);
			func_63();
			system::wait(0);
			func_60();
			func_59();
			iLocal_310 = 4;
			break;

		case 4:
			if (!Global_25198) {
				if (Global_88752) {
					func_83(0);
				}
				func_34();
				func_33();
				func_30();
				func_29();
				func_27();
				func_5();
				func_4();
			}
			else if (func_1(0)) {
				func_83(1);
			}
			break;
		}
		system::wait(0);
	}
}

// Position - 0x1C6
bool func_1(int iParam0) {
	if (iParam0) {
		if (func_3()) {
			return true;
		}
	}
	if (func_2(14)) {
		return true;
	}
	return false;
}

// Position - 0x1EC
bool func_2(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x1FA
bool func_3() {
	if (Global_100647) {
		return true;
	}
	if (!func_2(14) && script::_get_number_of_instances_of_script_with_name_hash(joaat("director_mode")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x22C
void func_4() {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iLocal_51 == 1) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 1766.972f, 2409.596f, 43.55469f, 1826.647f,
												 2471.633f, 56.30863f, 12f, 0, 1, 0)) {
				if (!iLocal_103) {
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[0] = 1;
				}
			}
			else {
				iLocal_107[0] = 0;
			}
		}
	}
	else if (iLocal_51 == 2) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 1662.31f, 2391.06f, 43.51377f, 1761.362f,
												 2405.143f, 56.65472f, 12f, 0, 1, 0)) {
				if (!iLocal_103) {
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[1] = 1;
				}
			}
			else {
				iLocal_107[1] = 0;
			}
		}
	}
	else if (iLocal_51 == 3) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 1537.369f, 2465.132f, 43.5756f, 1655.663f,
												 2391.822f, 56.54404f, 12f, 0, 1, 0)) {
				if (!iLocal_103) {
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[2] = 1;
				}
			}
			else {
				iLocal_107[2] = 0;
			}
		}
	}
	else if (iLocal_51 == 4) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 1529.153f, 2584.264f, 43.6168f, 1535.014f,
												 2469.253f, 56.5985f, 12f, 0, 1, 0)) {
				if (!iLocal_103) {
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[3] = 1;
				}
			}
			else {
				iLocal_107[3] = 0;
			}
		}
	}
	else if (iLocal_51 == 5) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 1565.045f, 2681.205f, 43.50552f, 1529.915f,
												 2586.427f, 56.52686f, 12f, 0, 1, 0)) {
				if (!iLocal_103) {
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[4] = 1;
				}
			}
			else {
				iLocal_107[4] = 0;
			}
		}
	}
	else if (iLocal_51 == 6) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 1645.169f, 2760.33f, 43.6705f, 1567.113f,
												 2682.905f, 56.39177f, 12f, 0, 1, 0)) {
				if (!iLocal_103) {
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[5] = 1;
				}
			}
			else {
				iLocal_107[5] = 0;
			}
		}
	}
	else if (iLocal_51 == 7) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 1772.306f, 2766.364f, 43.59126f, 1650.228f,
												 2761.691f, 56.53028f, 12f, 0, 1, 0)) {
				if (!iLocal_103) {
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[6] = 1;
				}
			}
			else {
				iLocal_107[6] = 0;
			}
		}
	}
	else if (iLocal_51 == 8) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 1831.435f, 2623.257f, 43.46658f, 1851.659f,
												 2696.404f, 56.68093f, 12f, 0, 1, 0)) {
				if (!iLocal_103) {
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[7] = 1;
				}
			}
			else {
				iLocal_107[7] = 0;
			}
		}
	}
	else if (iLocal_51 == 9) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 1831.435f, 2623.257f, 43.46658f, 1851.659f,
												 2696.404f, 56.68093f, 12f, 0, 1, 0)) {
				if (!iLocal_103) {
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[8] = 1;
				}
			}
			else {
				iLocal_107[8] = 0;
			}
		}
	}
	else if (iLocal_51 == 10) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 1829.468f, 2480.96f, 43.52237f, 1836.998f,
												 2566.856f, 60.35412f, 20.5f, 0, 1, 0)) {
				if (!iLocal_103) {
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[9] = 1;
				}
			}
			else {
				iLocal_107[9] = 0;
			}
		}
	}
	iLocal_51++;
	if (iLocal_51 > 10) {
		iLocal_51 = 0;
	}
	else {
		iVar0 = 0;
		while (iVar0 < 10) {
			if (iLocal_107[iVar0]) {
				iVar1 = 1;
			}
			iVar0++;
		}
		if (!iVar1) {
			if (!iLocal_103) {
				audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
				audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
			}
		}
	}
}

// Position - 0x6CC
void func_5() {
	vector3 vVar0;

	switch (iLocal_50) {
	case 0:
		streaming::request_model(joaat("police3"));
		streaming::request_model(joaat("s_m_y_cop_01"));
		if (streaming::has_model_loaded(joaat("police3")) && streaming::has_model_loaded(joaat("s_m_y_cop_01"))) {
			iLocal_50++;
		}
		break;

	case 1:
		iLocal_124 = vehicle::create_vehicle(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, 1, 1);
		iLocal_126 = ped::create_ped_inside_vehicle(iLocal_124, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
		func_26(&iLocal_126);
		iLocal_50++;
		break;

	case 2:
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		}
		if (func_16(iLocal_126, iLocal_124, &Local_128, &iLocal_135, 0, 1, 0, 1, 1) ||
			func_16(iLocal_127, iLocal_125, &Local_128, &iLocal_135, 0, 1, 0, 1, 1) ||
			func_15(vVar0, 4, 20, 0) && !ped::is_ped_in_flying_vehicle(player::player_ped_id())) {
			object::_door_control(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0, 0f, 50f, 0f);
			object::_door_control(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0, 0f, 50f, 0f);
			if (!entity::is_entity_dead(iLocal_126, 0)) {
				ai::task_combat_ped(iLocal_126, player::player_ped_id(), 0, 16);
			}
			if (!func_14(&uLocal_136)) {
				func_11(&uLocal_136);
			}
			iLocal_50++;
		}
		break;

	case 3:
		if (func_14(&uLocal_136)) {
			if (func_8(&uLocal_136) > 15f) {
				iLocal_125 = vehicle::create_vehicle(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, 1, 1);
				iLocal_127 = ped::create_ped_inside_vehicle(iLocal_125, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
				func_26(&iLocal_127);
				ai::task_combat_ped(iLocal_127, player::player_ped_id(), 0, 16);
				iLocal_50++;
			}
			else if (player::get_player_wanted_level(player::player_id()) == 0) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				}
				if (func_7(1818.237f, 2604.927f, 44.57381f, vVar0, 1125515264)) {
					func_6();
					iLocal_50 = 0;
				}
			}
		}
		break;

	case 4:
		if (player::get_player_wanted_level(player::player_id()) == 0) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			}
			if (func_7(1818.237f, 2604.927f, 44.57381f, vVar0, 1125515264)) {
				func_6();
				iLocal_50 = 0;
			}
		}
		break;
	}
}

// Position - 0x94C
void func_6() {
	if (entity::does_entity_exist(iLocal_124)) {
		vehicle::delete_vehicle(&iLocal_124);
	}
	if (entity::does_entity_exist(iLocal_126)) {
		ped::delete_ped(&iLocal_126);
	}
	if (entity::does_entity_exist(iLocal_125)) {
		vehicle::delete_vehicle(&iLocal_125);
	}
	if (entity::does_entity_exist(iLocal_127)) {
		ped::delete_ped(&iLocal_127);
	}
}

// Position - 0x990
bool func_7(vector3 vParam0, vector3 vParam3, float fParam6) {
	if (system::vdist2(vParam0, vParam3) < fParam6 * fParam6) {
		if (entity::does_entity_exist(iLocal_124) && entity::does_entity_exist(iLocal_126) &&
			entity::does_entity_exist(iLocal_125) && entity::does_entity_exist(iLocal_127)) {
			if (entity::is_entity_occluded(iLocal_124) || !entity::is_entity_on_screen(iLocal_124)) {
				if (entity::is_entity_occluded(iLocal_126) || !entity::is_entity_on_screen(iLocal_126)) {
					if (entity::is_entity_occluded(iLocal_125) || !entity::is_entity_on_screen(iLocal_125)) {
						if (entity::is_entity_occluded(iLocal_127) || !entity::is_entity_on_screen(iLocal_127)) {
							return true;
						}
					}
				}
			}
		}
	}
	else if (system::vdist2(vParam0, vParam3) > 62500f) {
		return true;
	}
	return false;
}

// Position - 0xA50
float func_8(var *uParam0) {
	if (func_14(uParam0)) {
		if (func_10(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_9(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0xA8F
float func_9(bool bParam0) {
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

// Position - 0xAE7
bool func_10(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0xAF7
void func_11(var *uParam0) {
	if (!func_14(uParam0)) {
		func_12(uParam0);
	}
}

// Position - 0xB0F
void func_12(var *uParam0) { func_13(uParam0, 0f); }

// Position - 0xB1E
void func_13(int *iParam0, float fParam1) {
	uParam0->f_1 = func_9(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0xB4C
bool func_14(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0xB5C
bool func_15(vector3 vParam0, int iParam3, int iParam4, int iParam5) {
	vector3 vVar0[15];
	vector3 vVar46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;

	iVar110 = 0;
	switch (iParam3) {
	case 1:
		vVar0[0 /*3*/] = {-1332.211f, 100.4608f, 40.38437f};
		vVar46[0 /*3*/] = {-1094.238f, 148.4274f, 73f};
		fVar92[0] = 171.25f;
		vVar0[1 /*3*/] = {-999.7344f, -110.2231f, 25.25706f};
		vVar46[1 /*3*/] = {-1149.494f, 109.2558f, 73f};
		fVar92[1] = 132f;
		vVar0[2 /*3*/] = {-1035.113f, -84.95885f, 28.2746f};
		vVar46[2 /*3*/] = {-1261.103f, 50.08148f, 73f};
		fVar92[2] = 132f;
		iVar108 = 3;
		break;

	case 2:
		vVar0[0 /*3*/] = {-804.3439f, -3346.5f, 10f};
		vVar46[0 /*3*/] = {-1816.954f, -2768.893f, IntToFloat(250 + iParam4)};
		fVar92[0] = 247f;
		vVar0[1 /*3*/] = {-1911.488f, -2934.197f, 10f};
		vVar46[1 /*3*/] = {-968.6236f, -3477.748f, IntToFloat(250 + iParam4)};
		fVar92[1] = 149f;
		vVar0[2 /*3*/] = {-844.9433f, -2802.785f, 10f};
		vVar46[2 /*3*/] = {-1011.081f, -3086.904f, IntToFloat(250 + iParam4)};
		fVar92[2] = 185.5f;
		vVar0[3 /*3*/] = {-1021.086f, -2952.277f, 10f};
		vVar46[3 /*3*/] = {-1599.008f, -2616.271f, IntToFloat(250 + iParam4)};
		fVar92[3] = 250f;
		vVar0[4 /*3*/] = {-1027.136f, -2436.457f, 10f};
		vVar46[4 /*3*/] = {-1392.61f, -2226.763f, IntToFloat(250 + iParam4)};
		fVar92[4] = 193.5f;
		vVar0[5 /*3*/] = {-1497.549f, -2408.712f, 10f};
		vVar46[5 /*3*/] = {-1136.917f, -2617.955f, IntToFloat(250 + iParam4)};
		fVar92[5] = 234.5f;
		vVar0[6 /*3*/] = {-982.7924f, -2831.709f, 12.93313f};
		vVar46[6 /*3*/] = {-966.4677f, -2803.458f, 16.68313f};
		fVar92[6] = 16f;
		vVar0[7 /*3*/] = {-1110.083f, -3496.806f, 12f};
		vVar46[7 /*3*/] = {-1955.298f, -3010.431f, IntToFloat(250 + iParam4)};
		fVar92[7] = 80f;
		vVar0[8 /*3*/] = {-1886.899f, -3193.024f, 12f};
		vVar46[8 /*3*/] = {-1836.143f, -3105.268f, IntToFloat(250 + iParam4)};
		fVar92[8] = 142f;
		vVar0[9 /*3*/] = {-1134.337f, -3535.648f, 12f};
		vVar46[9 /*3*/] = {-1259.649f, -3463.486f, IntToFloat(250 + iParam4)};
		fVar92[9] = 30.75f;
		vVar0[10 /*3*/] = {-969.1279f, -3463.899f, 12f};
		vVar46[10 /*3*/] = {-896.3734f, -3505.715f, IntToFloat(250 + iParam4)};
		fVar92[10] = 150f;
		vVar0[11 /*3*/] = {-1369.491f, -2173.579f, 10f};
		vVar46[11 /*3*/] = {-1685.626f, -2720.364f, IntToFloat(250 + iParam4)};
		fVar92[11] = 29.25f;
		vVar0[12 /*3*/] = {-1010.926f, -3550.943f, 10f};
		vVar46[12 /*3*/] = {-1110.198f, -3493.617f, IntToFloat(250 + iParam4)};
		fVar92[12] = 43f;
		iVar108 = 13;
		break;

	case 3:
		vVar0[0 /*3*/] = {-1773.944f, 3287.334f, 30f};
		vVar46[0 /*3*/] = {-2029.776f, 2845.083f, IntToFloat(250 + iParam4)};
		fVar92[0] = 250f;
		vVar0[1 /*3*/] = {-2725.889f, 3291.099f, 30f};
		vVar46[1 /*3*/] = {-2009.182f, 2879.835f, IntToFloat(250 + iParam4)};
		fVar92[1] = 180f;
		vVar0[2 /*3*/] = {-2442.026f, 3326.699f, 30f};
		vVar46[2 /*3*/] = {-2033.928f, 3089.049f, IntToFloat(250 + iParam4)};
		fVar92[2] = 200f;
		vVar0[3 /*3*/] = {-1917.165f, 3374.209f, 30f};
		vVar46[3 /*3*/] = {-2016.791f, 3195.058f, IntToFloat(250 + iParam4)};
		fVar92[3] = 86.25f;
		vVar0[4 /*3*/] = {-2192.753f, 3373.278f, 30f};
		vVar46[4 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
		fVar92[4] = 140.5f;
		vVar0[5 /*3*/] = {-2077.663f, 3344.514f, 30f};
		vVar46[5 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
		fVar92[5] = 140.5f;
		vVar0[6 /*3*/] = {-2861.755f, 3352.661f, 30f};
		vVar46[6 /*3*/] = {-2715.871f, 3269.916f, IntToFloat(250 + iParam4)};
		fVar92[6] = 90f;
		vVar0[7 /*3*/] = {-2005.574f, 3364.533f, 30f};
		vVar46[7 /*3*/] = {-1977.569f, 3330.888f, IntToFloat(250 + iParam4)};
		fVar92[7] = 100f;
		vVar0[8 /*3*/] = {-1682.235f, 3004.285f, 30f};
		vVar46[8 /*3*/] = {-1942.747f, 2947.441f, IntToFloat(250 + iParam4)};
		fVar92[8] = 248.75f;
		vVar0[9 /*3*/] = {-2393.295f, 2936.406f, 31.6801f};
		vVar46[9 /*3*/] = {-2453.037f, 3006.863f, 52.31003f};
		fVar92[9] = 128f;
		vVar0[10 /*3*/] = {-2347.185f, 3023.83f, 31.56573f};
		vVar46[10 /*3*/] = {-2517.33f, 2989.063f, 49.95644f};
		fVar92[10] = 127.25f;
		vVar0[11 /*3*/] = {-2259.922f, 3358.04f, 29.99972f};
		vVar46[11 /*3*/] = {-2299.772f, 3385.79f, 38.06014f};
		fVar92[11] = 16f;
		vVar0[12 /*3*/] = {-2476.309f, 3363.914f, 31.67933f};
		vVar46[12 /*3*/] = {-2431.981f, 3287.669f, 39.97826f};
		fVar92[12] = 214.25f;
		vVar0[13 /*3*/] = {-2103.081f, 2797.783f, 29.37864f};
		vVar46[13 /*3*/] = {-2096.821f, 2874.423f, 57.80989f};
		fVar92[13] = 65.75f;
		if (iParam5) {
			iVar111 = iParam4;
		}
		else {
			iVar111 = 0;
		}
		vVar46[9 /*3*/].f_2 += IntToFloat(iVar111);
		vVar46[10 /*3*/].f_2 += IntToFloat(iVar111);
		vVar46[11 /*3*/].f_2 += IntToFloat(iVar111);
		vVar46[12 /*3*/].f_2 += IntToFloat(iVar111);
		vVar46[13 /*3*/].f_2 += IntToFloat(iVar111);
		iVar108 = 14;
		break;

	case 4:
		vVar0[0 /*3*/] = {1541.607f, 2527.555f, 40f};
		vVar46[0 /*3*/] = {1815.575f, 2535.06f, IntToFloat(150 + iParam4)};
		fVar92[0] = 114f;
		vVar0[1 /*3*/] = {1788.879f, 2445.727f, 40f};
		vVar46[1 /*3*/] = {1716.96f, 2502.957f, IntToFloat(150 + iParam4)};
		fVar92[1] = 88.5f;
		vVar0[2 /*3*/] = {1601.157f, 2436.244f, 40f};
		vVar46[2 /*3*/] = {1650.078f, 2515.923f, IntToFloat(150 + iParam4)};
		fVar92[2] = 133.25f;
		vVar0[3 /*3*/] = {1706.331f, 2407.597f, 40f};
		vVar46[3 /*3*/] = {1698.555f, 2460.208f, IntToFloat(150 + iParam4)};
		fVar92[3] = 104.5f;
		vVar0[4 /*3*/] = {1712.452f, 2756.218f, 40f};
		vVar46[4 /*3*/] = {1718.848f, 2589.162f, IntToFloat(150 + iParam4)};
		fVar92[4] = 121.75f;
		vVar0[5 /*3*/] = {1830.228f, 2661.24f, 40f};
		vVar46[5 /*3*/] = {1774.812f, 2679.419f, IntToFloat(150 + iParam4)};
		fVar92[5] = 84.5f;
		vVar0[6 /*3*/] = {1559.05f, 2632.22f, 40f};
		vVar46[6 /*3*/] = {1657.208f, 2595.484f, IntToFloat(150 + iParam4)};
		fVar92[6] = 103.75f;
		vVar0[7 /*3*/] = {1612.021f, 2716.869f, 40f};
		vVar46[7 /*3*/] = {1657.165f, 2669.721f, IntToFloat(150 + iParam4)};
		fVar92[7] = 104.25f;
		vVar0[8 /*3*/] = {1809.872f, 2729.827f, 40f};
		vVar46[8 /*3*/] = {1789.855f, 2705.037f, IntToFloat(150 + iParam4)};
		fVar92[8] = 91f;
		vVar0[9 /*3*/] = {1818.789f, 2605.948f, 40f};
		vVar46[9 /*3*/] = {1783.114f, 2606.783f, IntToFloat(150 + iParam4)};
		fVar92[9] = 51.25f;
		iVar108 = 10;
		break;

	case 5:
		vVar0[0 /*3*/] = {3411.002f, 3663.185f, 20f};
		vVar46[0 /*3*/] = {3615.583f, 3626.194f, IntToFloat(40 + iParam4)};
		fVar92[0] = 45.75f;
		vVar0[1 /*3*/] = {3426.66f, 3733.078f, 20f};
		vVar46[1 /*3*/] = {3643.801f, 3694.362f, IntToFloat(40 + iParam4)};
		fVar92[1] = 99f;
		vVar0[2 /*3*/] = {3446.036f, 3795.688f, 20f};
		vVar46[2 /*3*/] = {3650.914f, 3766.152f, IntToFloat(40 + iParam4)};
		fVar92[2] = 81.5f;
		iVar108 = 3;
		break;

	case 6:
		vVar0[0 /*3*/] = {526.053f, -3391.497f, -10f};
		vVar46[0 /*3*/] = {523.2289f, -3118.678f, IntToFloat(10 + iParam4)};
		fVar92[0] = 120f;
		vVar0[1 /*3*/] = {459.4397f, -3199.99f, 4.819676f};
		vVar46[1 /*3*/] = {593.8928f, -3199.998f, 30.06926f};
		fVar92[1] = 170f;
		vVar0[2 /*3*/] = {552.8467f, -3111.054f, 4.819394f};
		vVar46[2 /*3*/] = {585.3137f, -3111.844f, 17.56923f};
		fVar92[2] = 12.5f;
		vVar0[3 /*3*/] = {598.4666f, -3140.147f, 4.819257f};
		vVar46[3 /*3*/] = {597.4973f, -3117.063f, 17.31926f};
		fVar92[3] = 9.75f;
		iVar108 = 4;
		break;

	case 7:
		vVar0[0 /*3*/] = {-1108.55f, -570.8798f, 20f};
		vVar46[0 /*3*/] = {-1187.811f, -477.5037f, IntToFloat(50 + iParam4)};
		fVar92[0] = 162f;
		vVar0[1 /*3*/] = {-1201.378f, -485.9673f, 20f};
		vVar46[1 /*3*/] = {-1215.796f, -464.8281f, IntToFloat(50 + iParam4)};
		fVar92[1] = 124f;
		vVar0[2 /*3*/] = {-985.6311f, -525.4233f, 20f};
		vVar46[2 /*3*/] = {-1013.393f, -475.2057f, IntToFloat(50 + iParam4)};
		fVar92[2] = 55f;
		vVar0[3 /*3*/] = {-1055.849f, -477.8226f, 20f};
		vVar46[3 /*3*/] = {-1073.333f, -498.717f, IntToFloat(50 + iParam4)};
		fVar92[3] = 142f;
		iVar108 = 4;
		break;

	case 8:
		vVar0[0 /*3*/] = {461.5684f, -984.572f, 29.43951f};
		vVar46[0 /*3*/] = {471.17f, -984.4292f, 40.14212f};
		fVar92[0] = 7.75f;
		vVar0[1 /*3*/] = {457.3404f, -984.756f, 34.43951f};
		vVar46[1 /*3*/] = {457.2084f, -993.7189f, 29.38958f};
		fVar92[1] = 14.75f;
		vVar0[2 /*3*/] = {477.6227f, -986.6f, 40.00819f};
		vVar46[2 /*3*/] = {424.8687f, -986.3279f, 48.71241f};
		fVar92[2] = 31.5f;
		vVar0[3 /*3*/] = {474.3889f, -974.4613f, 39.55761f};
		vVar46[3 /*3*/] = {474.0358f, -1021.972f, 49.10033f};
		fVar92[3] = 30.5f;
		vVar0[4 /*3*/] = {442.1768f, -974.1888f, 29.68951f};
		vVar46[4 /*3*/] = {442.1855f, -979.8635f, 33.43951f};
		fVar92[4] = 6.75f;
		iVar108 = 5;
		break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108) {
		if (object::is_point_in_angled_area(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109],
											iVar110, 1)) {
			return true;
		}
		iVar109++;
	}
	return false;
}

// Position - 0x18B0
int func_16(int iParam0, int iParam1, var *uParam2, int *iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8) {
	int iVar0;
	bool bVar1;

	iVar0 = player::player_ped_id();
	if (!entity::is_entity_dead(iVar0, 0) && !entity::is_entity_dead(iParam0, 0)) {
		if (!func_25(*uParam2, 1)) {
			if (func_24(iParam0, uParam2)) {
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_25(*uParam2, 2)) {
			if (player::get_player_wanted_level(player::player_id()) > 0) {
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_25(*uParam2, 4)) {
			if (func_22(iVar0, iParam0, uParam2, iParam5)) {
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_25(*uParam2, 8)) {
			if (func_21(iVar0, iParam0, uParam2)) {
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_25(*uParam2, 128);
		if (iParam4) {
			if (func_17(iParam0, iParam1, 1, iParam6, bVar1, 1)) {
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_25(*uParam2, 16)) {
			if (func_17(iParam0, iParam1, 0, iParam6, bVar1, iParam8)) {
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (entity::does_entity_exist(iParam0)) {
		if (iParam7 && entity::has_entity_been_damaged_by_entity(iParam0, iVar0, 1)) {
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

// Position - 0x19DA
bool func_17(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5) {
	int iVar0;
	int iVar1;

	if (bParam3) {
		if (!bLocal_45) {
			iLocal_46 = entity::get_entity_health(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = entity::get_entity_health(iParam0);
		iLocal_48 = iLocal_46 - iLocal_47;
		iVar0 = player::get_players_last_vehicle();
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iParam0, iVar0, 1)) {
				if (IntToFloat(iLocal_48) > 100f) {
					return true;
				}
			}
		}
		if (bLocal_45) {
			if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
				if (IntToFloat(iLocal_48) > 100f) {
					return true;
				}
			}
		}
	}
	else if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
		return true;
	}
	if (!bParam3) {
		iVar1 = player::get_players_last_vehicle();
		if (!entity::is_entity_dead(iVar1, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iParam0, iVar1, 1)) {
				return true;
			}
		}
	}
	if (bParam4) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			if (ped::is_ped_being_jacked(iParam0)) {
				if (ped::get_peds_jacker(iParam0) == player::player_ped_id()) {
					return true;
				}
			}
		}
	}
	if (iParam5) {
		if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
			if (entity::is_entity_at_coord(iParam0, entity::get_entity_coords(player::player_ped_id(), 1), 10f, 10f,
										   10f, 0, 1, 0)) {
				if (player::has_player_damaged_at_least_one_ped(player::player_id())) {
					return true;
				}
			}
		}
	}
	if (ped::is_ped_performing_stealth_kill(player::player_ped_id())) {
		if (ped::was_ped_killed_by_stealth(iParam0)) {
			return true;
		}
	}
	if (func_20(player::player_ped_id(), iParam0)) {
		return true;
	}
	if (iParam2) {
		if (ped::is_ped_ragdoll(iParam0) && func_18(iParam0, 1) < 1.5f) {
			return true;
		}
		else if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
			if (entity::is_entity_touching_entity(player::player_ped_id(), ped::get_vehicle_ped_is_in(iParam0, 0))) {
				return true;
			}
		}
		else if (entity::is_entity_touching_entity(player::player_ped_id(), iParam0)) {
			return true;
		}
		if (!entity::is_entity_dead(iParam1, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iParam1, player::player_ped_id(), 1)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x1BA2
float func_18(int iParam0, int iParam1) {
	return func_19(player::get_player_ped(player::get_player_index()), iParam0, iParam1);
}

// Position - 0x1BBA
float func_19(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x1C18
bool func_20(int iParam0, int iParam1) {
	int iVar0;

	weapon::get_current_ped_weapon(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan")) {
		if (ped::is_ped_shooting(iParam0)) {
			if (system::vdist(entity::get_entity_coords(iParam0, 1), entity::get_entity_coords(iParam1, 1)) < 2.5f) {
				if (ped::is_ped_facing_ped(iParam0, iParam1, 180f)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x1C6D
bool func_21(int iParam0, int iParam1, var *uParam2) {
	if (weapon::is_ped_armed(iParam0, 4)) {
		if (ped::is_ped_shooting(iParam0) && !weapon::is_ped_current_weapon_silenced(iParam0)) {
			if (entity::is_entity_at_coord(iParam1, entity::get_entity_coords(iParam0, 1), IntToFloat(uParam2->f_4),
										   IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x1CBB
bool func_22(int iParam0, int iParam1, var *uParam2, bool bParam3) {
	vector3 vVar0;
	int iVar3;

	iVar3 = 0;
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar0 = {entity::get_entity_coords(iParam1, 1)};
	}
	if (gameplay::is_bullet_in_area(vVar0, 4f, 1)) {
		return true;
	}
	if (gameplay::has_bullet_impacted_in_area(vVar0, system::to_float(uParam2->f_6), 1, 1)) {
		return true;
	}
	if (weapon::is_ped_armed(iParam0, 2)) {
		if (ped::is_ped_shooting(iParam0)) {
			if (entity::is_entity_at_coord(iParam1, entity::get_entity_coords(iParam0, 1), IntToFloat(uParam2->f_6 * 3),
										   IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0)) {
				if (ped::is_ped_facing_ped(entity::get_ped_index_from_entity_index(iParam1), iParam0, 120f) &&
					entity::has_entity_clear_los_to_entity(iParam1, iParam0, 17)) {
					return true;
				}
			}
		}
		else {
			if (ped::is_ped_in_any_vehicle(entity::get_ped_index_from_entity_index(iParam1), 0)) {
				iVar3 = ped::get_vehicle_ped_is_in(entity::get_ped_index_from_entity_index(iParam1), 0);
			}
			if (ped::is_ped_planting_bomb(iParam0) || func_23(iVar3)) {
				if (entity::is_entity_at_coord(iParam1, entity::get_entity_coords(iParam0, 1),
											   IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3),
											   IntToFloat(uParam2->f_6 * 3), 0, 1, 0)) {
					if (ped::is_ped_facing_ped(entity::get_ped_index_from_entity_index(iParam1), iParam0, 120f) &&
						entity::has_entity_clear_los_to_entity(iParam1, iParam0, 17)) {
						return true;
					}
				}
			}
		}
	}
	if (bParam3) {
		if (gameplay::is_projectile_in_area(vVar0.x - IntToFloat(uParam2->f_6), vVar0.y - IntToFloat(uParam2->f_6),
											vVar0.z - IntToFloat(uParam2->f_6), vVar0.x + IntToFloat(uParam2->f_6),
											vVar0.y + IntToFloat(uParam2->f_6), vVar0.z + IntToFloat(uParam2->f_6),
											0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x1E34
int func_23(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0) != 0) {
				if (weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1)) {
					if (iVar0 == joaat("weapon_stickybomb")) {
						if (func_19(player::player_ped_id(), iParam0, 1) < 40f) {
							if (player::get_entity_player_is_free_aiming_at(player::player_id(), &iVar1)) {
								if (entity::is_entity_a_vehicle(iVar1) &&
										entity::get_vehicle_index_from_entity_index(iVar1) == iParam0 ||
									entity::is_entity_a_ped(iVar1) &&
										entity::get_ped_index_from_entity_index(iVar1) ==
											vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0)) {
									if (ped::is_ped_on_foot(player::player_ped_id()) &&
											controls::is_control_pressed(0, 24) ||
										ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
											controls::is_control_pressed(0, 69)) {
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x1F02
bool func_24(int iParam0, var *uParam1) {
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
			if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) ||
				player::is_player_targetting_entity(player::player_id(), iParam0)) {
				if (ped::is_ped_facing_ped(iParam0, player::player_ped_id(), 90f)) {
					if (func_18(iParam0, 1) < uParam1->f_2) {
						if (uParam1->f_1 == 0) {
							uParam1->f_1 = gameplay::get_game_timer();
						}
						else if (gameplay::get_game_timer() - uParam1->f_1 > uParam1->f_3) {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x1F87
bool func_25(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0x1F96
void func_26(int iParam0) {
	weapon::give_weapon_to_ped(*iParam0, joaat("weapon_assaultshotgun"), -1, 0, 1);
	ped::set_blocking_of_non_temporary_events(*iParam0, 1);
	ped::set_ped_combat_attributes(*iParam0, 13, 1);
	ped::set_ped_combat_attributes(*iParam0, 0, 1);
	ped::set_ped_target_loss_response(*iParam0, 1);
	ped::set_ped_combat_movement(*iParam0, 1);
	ai::set_ped_desired_move_blend_ratio(*iParam0, 0f);
	ped::set_ped_keep_task(*iParam0, 1);
	ped::set_ped_accuracy(*iParam0, 100);
	ped::set_ped_combat_range(*iParam0, 2);
	ped::set_ped_combat_attributes(*iParam0, 23, 0);
	ped::set_ped_seeing_range(*iParam0, 1000f);
	ped::set_ped_combat_attributes(*iParam0, 1, 1);
}

// Position - 0x2018
void func_27() {
	vector3 vVar0;
	vector3 vVar3;

	if (bLocal_574) {
		if (!entity::is_entity_dead(iLocal_569, 0)) {
			if (!vehicle::is_playback_going_on_for_vehicle(iLocal_569)) {
				vehicle::start_playback_recorded_vehicle(iLocal_569, 101, "PrisonHeli", 1);
			}
			if (!entity::is_entity_dead(iLocal_570, 0)) {
				vVar0 = {entity::get_offset_from_entity_in_world_coords(iLocal_570, 0f, 4f, -2f)};
				ai::task_vehicle_aim_at_coord(iLocal_570, vVar0);
			}
			if (bLocal_572) {
				if (!func_28()) {
					bLocal_572 = false;
					vehicle::set_vehicle_searchlight(iLocal_569, 0, 0);
				}
			}
			else if (func_28()) {
				bLocal_572 = true;
				vehicle::set_vehicle_searchlight(iLocal_569, 1, 0);
			}
			if (bLocal_572) {
				vVar3 = {entity::get_entity_coords(iLocal_569, 1)};
				if (system::vdist2(vLocal_312, vVar3) < 90000f) {
					if (!iLocal_573) {
						iLocal_573 = 1;
					}
				}
			}
		}
		else if (ui::does_blip_exist(iLocal_571)) {
			ui::remove_blip(&iLocal_571);
		}
	}
}

// Position - 0x20EB
bool func_28() {
	if (time::get_clock_hours() >= 20 || time::get_clock_hours() < 6) {
		return true;
	}
	return false;
}

// Position - 0x210E
void func_29() {
	int iVar0;
	vector3 vVar1;

	if (!Local_629.f_18[0]) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		}
		if (!iLocal_106) {
			if (system::vdist2(vVar1, vLocal_625) < 5625f) {
				iLocal_628 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (!ped::is_ped_injured(Local_629.f_27[iVar0])) {
			if (!Local_629.f_18[iVar0]) {
				if (func_16(Local_629.f_27[iVar0], 0, &Local_128, &iLocal_135, 1, 1, 0, 1, 1) || iLocal_628) {
					ai::task_combat_ped(Local_629.f_27[iVar0], player::player_ped_id(), 0, 16);
					Local_629.f_18[iVar0] = 1;
				}
			}
			if (!Local_629.f_18[iVar0]) {
				if (!ai::is_waypoint_playback_going_on_for_ped(Local_629.f_27[iVar0])) {
					ai::task_follow_waypoint_recording(Local_629.f_27[iVar0], Local_629.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (ui::does_blip_exist(Local_629.f_36[iVar0])) {
			ui::remove_blip(&Local_629.f_36[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4) {
		if (entity::does_entity_exist(Local_629.f_31[iVar0])) {
			if (ped::is_ped_injured(Local_629.f_31[iVar0])) {
				if (ui::does_blip_exist(Local_629.f_40[iVar0])) {
					ui::remove_blip(&Local_629.f_40[iVar0]);
				}
			}
		}
		iVar0++;
	}
	if (!Local_629.f_22[0]) {
		if (!ped::is_ped_injured(Local_629.f_31[0])) {
			if (func_16(Local_629.f_31[0], 0, &Local_128, &iLocal_135, 1, 1, 0, 1, 1) || Local_629.f_18[1] == 1 ||
				iLocal_628) {
				ai::clear_ped_tasks(Local_629.f_31[0]);
				ai::task_combat_ped(Local_629.f_31[0], player::player_ped_id(), 0, 16);
				Local_629.f_22[0] = 1;
			}
		}
	}
	if (!Local_629.f_22[1]) {
		if (!ped::is_ped_injured(Local_629.f_31[1])) {
			if (func_16(Local_629.f_31[1], 0, &Local_128, &iLocal_135, 0, 1, 0, 1, 1) || Local_629.f_18[1] == 1 ||
				iLocal_628) {
				ai::clear_ped_tasks(Local_629.f_31[1]);
				ai::task_combat_ped(Local_629.f_31[1], player::player_ped_id(), 0, 16);
				Local_629.f_22[1] = 1;
			}
		}
	}
	if (!Local_629.f_22[2]) {
		if (!ped::is_ped_injured(Local_629.f_31[2])) {
			if (func_16(Local_629.f_31[2], 0, &Local_128, &iLocal_135, 0, 1, 0, 1, 1) || Local_629.f_18[2] == 1 ||
				iLocal_628) {
				ai::clear_ped_tasks(Local_629.f_31[2]);
				ai::task_combat_ped(Local_629.f_31[2], player::player_ped_id(), 0, 16);
				Local_629.f_22[2] = 1;
			}
		}
	}
	if (!Local_629.f_22[3]) {
		if (!ped::is_ped_injured(Local_629.f_31[3])) {
			if (func_16(Local_629.f_31[3], 0, &Local_128, &iLocal_135, 0, 1, 0, 1, 1) || Local_629.f_18[2] == 1 ||
				iLocal_628) {
				ai::clear_ped_tasks(Local_629.f_31[3]);
				ai::task_combat_ped(Local_629.f_31[3], player::player_ped_id(), 0, 16);
				Local_629.f_22[3] = 1;
			}
		}
	}
	if (!ped::is_ped_injured(Local_629.f_27[1])) {
		if (ai::is_waypoint_playback_going_on_for_ped(Local_629.f_27[1])) {
			if (!Local_629.f_22[0]) {
				if (!ped::is_ped_injured(Local_629.f_31[0])) {
					ai::task_follow_to_offset_of_entity(Local_629.f_31[0], Local_629.f_27[1], -2f, 0f, 0f, 1f, -1,
														1036831949, 1);
				}
			}
			if (!Local_629.f_22[1]) {
				if (!ped::is_ped_injured(Local_629.f_31[1])) {
					ai::task_follow_to_offset_of_entity(Local_629.f_31[1], Local_629.f_27[1], -1f, 0f, 0f, 1f, -1,
														1036831949, 1);
				}
			}
		}
	}
	if (!ped::is_ped_injured(Local_629.f_27[2])) {
		if (ai::is_waypoint_playback_going_on_for_ped(Local_629.f_27[2])) {
			if (!Local_629.f_22[2]) {
				if (!ped::is_ped_injured(Local_629.f_31[2])) {
					ai::task_follow_to_offset_of_entity(Local_629.f_31[2], Local_629.f_27[2], 1f, 0f, 0f, 1f, -1,
														1036831949, 1);
				}
			}
			if (!Local_629.f_22[3]) {
				if (!ped::is_ped_injured(Local_629.f_31[3])) {
					ai::task_follow_to_offset_of_entity(Local_629.f_31[3], Local_629.f_27[2], -1f, 0f, 0f, 1f, -1,
														1036831949, 1);
				}
			}
		}
	}
}

// Position - 0x2578
void func_30() {
	int iVar0;
	vector3 vVar1;

	iLocal_419++;
	if (iLocal_419 >= 30) {
		if (!iLocal_106) {
			if (func_15(entity::get_entity_coords(player::player_ped_id(), 1), 4, 100, 0)) {
				iVar0 = 0;
				while (iVar0 < 10) {
					if (entity::does_entity_exist(Local_318.f_64[iVar0]) &&
						!ped::is_ped_injured(Local_318.f_64[iVar0])) {
						if (ped::get_ped_parachute_state(player::player_ped_id()) != -1) {
							if (ped::get_ped_parachute_state(player::player_ped_id()) == 1 ||
								ped::get_ped_parachute_state(player::player_ped_id()) == 2) {
								ped::set_ped_accuracy(Local_318.f_64[iVar0], 10);
								iLocal_418 = 1;
							}
						}
						else if (ped::is_ped_in_flying_vehicle(player::player_ped_id())) {
							ped::set_ped_accuracy(Local_318.f_64[iVar0], 10);
							iLocal_418 = 1;
						}
						else {
							ped::set_ped_accuracy(Local_318.f_64[iVar0], 100);
							iLocal_418 = 1;
						}
					}
					iVar0++;
				}
			}
			else {
				iLocal_418 = 0;
			}
		}
		iLocal_419 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		if (entity::does_entity_exist(Local_318.f_64[iVar0]) && !ped::is_ped_injured(Local_318.f_64[iVar0])) {
			if (player::is_player_wanted_level_greater(player::get_player_index(), 0)) {
				player::_0xDC64D2C53493ED12(player::player_id());
			}
			if (func_16(Local_318.f_64[iVar0], 0, &Local_128, &iLocal_135, 0, 1, 0, 1, 1) ||
				gameplay::is_bullet_in_area(Local_318[iVar0 /*3*/], 20f, 1) ||
				gameplay::is_sniper_bullet_in_area(Local_318[iVar0 /*3*/] - Vector(20f, 20f, 20f),
												   Local_318[iVar0 /*3*/] + Vector(20f, 20f, 20f)) ||
				iLocal_418 || func_32(&Local_318.f_64[iVar0])) {
				if (!func_2(5)) {
					if (ped::is_ped_in_flying_vehicle(player::player_ped_id())) {
						if (bLocal_119) {
							func_31(iVar0);
						}
					}
					else {
						func_31(iVar0);
					}
				}
			}
			else if (player::get_player_wanted_level(player::player_id()) == 0) {
				if (!ai::is_waypoint_playback_going_on_for_ped(Local_318.f_64[iVar0])) {
					ai::task_follow_waypoint_recording(Local_318.f_64[iVar0], Local_318.f_42[iVar0], 0, 0, -1);
					Local_318.f_53[iVar0] = 0;
				}
			}
		}
		else if (ui::does_blip_exist(Local_318.f_75[iVar0])) {
			ui::remove_blip(&Local_318.f_75[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(uLocal_408[iVar0]) && !entity::is_entity_dead(uLocal_408[iVar0], 0) &&
			entity::does_entity_exist(uLocal_404[iVar0]) && !entity::is_entity_dead(uLocal_404[iVar0], 0)) {
			vVar1 = {entity::get_offset_from_entity_in_world_coords(uLocal_408[iVar0], 0f, 3.5f, -2f)};
			ai::task_vehicle_aim_at_coord(uLocal_408[iVar0], vVar1);
			vehicle::set_vehicle_engine_on(uLocal_404[iVar0], 0, 0, 0);
			if (iLocal_412[iVar0]) {
				if (!func_28()) {
					if (!entity::is_entity_dead(uLocal_404[iVar0], 0)) {
						iLocal_412[iVar0] = 0;
						vehicle::set_vehicle_searchlight(uLocal_404[iVar0], 0, 0);
					}
				}
			}
			else if (func_28()) {
				if (!entity::is_entity_dead(uLocal_404[iVar0], 0)) {
					iLocal_412[iVar0] = 1;
					vehicle::set_vehicle_searchlight(uLocal_404[iVar0], 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_416 > 20f) {
		bLocal_417 = false;
	}
	else if (fLocal_416 < -20f) {
		bLocal_417 = true;
	}
	if (bLocal_417) {
		fLocal_416 += 0.25f;
	}
	else {
		fLocal_416 -= 0.25f;
	}
	if (entity::does_entity_exist(uLocal_404[0])) {
		entity::set_entity_heading(uLocal_404[0], 53f + fLocal_416);
	}
	if (entity::does_entity_exist(uLocal_404[1])) {
		entity::set_entity_heading(uLocal_404[1], 13f + fLocal_416);
	}
	if (entity::does_entity_exist(uLocal_404[2])) {
		entity::set_entity_heading(uLocal_404[2], 250f + fLocal_416);
	}
}

// Position - 0x2953
void func_31(int iParam0) {
	if (!Local_318.f_53[iParam0]) {
		ai::task_shoot_at_entity(Local_318.f_64[iParam0], player::player_ped_id(), -1, 0);
		ped::set_ped_seeing_range(Local_318.f_64[iParam0], 1000f);
		ped::_0xF1C03A5352243A30(Local_318.f_64[iParam0]);
		Local_318.f_53[iParam0] = 1;
		if (player::get_player_wanted_level(player::player_id()) == 0) {
			player::set_player_wanted_level(player::player_id(), 3, 0);
			player::set_player_wanted_level_now(player::player_id(), 0);
		}
	}
}

// Position - 0x29C3
int func_32(var *uParam0) {
	vector3 vVar0;
	vector3 vVar3;

	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	if (!entity::is_entity_dead(*uParam0, 0)) {
		vVar3 = {entity::get_entity_coords(*uParam0, 1)};
	}
	if (system::vdist2(vVar0, vVar3) < 100f) {
		return 1;
	}
	return 0;
}

// Position - 0x2A17
void func_33() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (player::get_player_wanted_level(player::player_id()) >= 2 ||
			func_15(entity::get_entity_coords(player::player_ped_id(), 1), 4, 150, 0)) {
			if (audio::prepare_alarm("PRISON_ALARMS")) {
				audio::start_alarm("PRISON_ALARMS", 0);
			}
		}
		else {
			audio::stop_alarm("PRISON_ALARMS", 0);
		}
	}
}

// Position - 0x2A6D
void func_34() {
	vector3 vVar0;

	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (entity::is_entity_in_angled_area(player::player_ped_id(), 1840.23f, 2471.49f, 41.94113f, 1840.553f,
											 2751.983f, 54.68177f, 84.25f, 0, 1, 0)) {
			func_57(&Local_128, 2);
		}
		else {
			func_55(&Local_128, 2);
		}
	}
	if (iLocal_49 > 20) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			if (ped::is_ped_in_flying_vehicle(player::player_ped_id())) {
				if (func_15(vVar0, 4, 150, 0)) {
					func_54(4, 1);
					if (!func_14(&uLocal_142)) {
						func_11(&uLocal_142);
					}
					if (!bLocal_118) {
						if (entity::does_entity_exist(iLocal_126) && !entity::is_entity_dead(iLocal_126, 0)) {
							func_53(&uLocal_145, 8, iLocal_126, "TANNOY", 0, 1);
							if (func_37(&uLocal_145, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0)) {
								iLocal_106 = 1;
								bLocal_118 = true;
							}
						}
					}
				}
				else {
					func_54(4, 0);
					if (func_14(&uLocal_142)) {
						func_12(&uLocal_142);
					}
					iLocal_106 = 0;
				}
			}
			else {
				func_54(4, 0);
				if (func_14(&uLocal_142)) {
					func_12(&uLocal_142);
				}
				iLocal_106 = 0;
			}
			if (iLocal_106) {
				if (func_14(&uLocal_142)) {
					if (func_8(&uLocal_142) > 10f) {
						if (player::get_player_wanted_level(player::player_id()) < 4) {
							player::set_player_wanted_level(player::player_id(), 4, 0);
							player::set_player_wanted_level_now(player::player_id(), 0);
							bLocal_119 = true;
							iLocal_106 = 0;
							func_54(4, 0);
						}
					}
				}
			}
			if (!iLocal_103) {
				if (bLocal_118) {
					if (!func_36()) {
						if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
							audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							iLocal_103 = 1;
						}
					}
				}
				else if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
					iLocal_103 = 1;
				}
			}
			if (!iLocal_106) {
				if (func_15(vVar0, 4, 100, 0)) {
					if (!iLocal_103) {
						if (bLocal_118) {
							if (!func_36()) {
								audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_"
															  "GENERAL",
															  0, 1);
								audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
								iLocal_103 = 1;
							}
						}
						else {
							audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							audio::set_ambient_zone_state("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							iLocal_103 = 1;
						}
					}
					func_35();
				}
			}
			iLocal_49 = 0;
		}
	}
	iLocal_49++;
}

// Position - 0x2C8E
void func_35() {
	int iVar0;

	if (!iLocal_102) {
		iVar0 = 0;
		while (iVar0 < 12) {
			uLocal_52[iVar0] = pathfind::add_navmesh_blocking_object(vLocal_65[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
			iVar0++;
		}
		iLocal_102 = 1;
	}
}

// Position - 0x2CD6
int func_36() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0x2CF8
bool func_37(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_38(sParam2, iParam3, 0);
}

// Position - 0x2D46
int func_38(char *sParam0, int iParam1, int iParam2) {
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
					func_51();
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
		if (func_50(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_49();
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
				func_43();
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
				if (func_42()) {
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
			if (func_41()) {
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
			func_40();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_39();
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
		func_51();
	}
	return 0;
}

// Position - 0x3012
void func_39() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x3043
void func_40() {
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

// Position - 0x30D8
bool func_41() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x30FF
bool func_42() {
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

// Position - 0x3198
void func_43() {
	if (func_2(14)) {
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
		Global_14443 = func_44();
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

// Position - 0x323A
var func_44() {
	func_45();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x3253
void func_45() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_48(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_47(player::player_ped_id());
			if (func_46(iVar0) && (!func_2(14) || Global_100652)) {
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

// Position - 0x3350
bool func_46(int iParam0) { return iParam0 < 3; }

// Position - 0x335C
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

// Position - 0x3399
int func_48(int iParam0) {
	if (func_46(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x33C3
void func_49() {
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

// Position - 0x341A
bool func_50(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x3455
void func_51() {
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

// Position - 0x34AC
void func_52(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, var uParam5) {
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

// Position - 0x3502
void func_53(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x359D
void func_54(int iParam0, int iParam1) {
	gameplay::set_bit(&Global_25347, iParam0);
	StringCopy(&Global_25348[iParam0 /*6*/], script::get_this_script_name(), 24);
	Global_25403[iParam0] = iParam1;
}

// Position - 0x35C4
void func_55(int *iParam0, int iParam1) { func_56(iParam0, iParam1); }

// Position - 0x35D4
void func_56(var *uParam0, var uParam1) { *uParam0 |= uParam1; }

// Position - 0x35E5
void func_57(int *iParam0, int iParam1) { func_58(iParam0, iParam1); }

// Position - 0x35F5
void func_58(int *iParam0, var uParam1) { *iParam0 -= (*iParam0 & uParam1); }

// Position - 0x360A
void func_59() {
	streaming::set_model_as_no_longer_needed(joaat("s_m_m_security_01"));
	streaming::set_model_as_no_longer_needed(joaat("s_m_m_prisguard_01"));
}

// Position - 0x3624
void func_60() {
	func_62();
	func_61();
}

// Position - 0x3634
void func_61() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(Local_629.f_27[iVar0]) && !entity::is_entity_dead(Local_629.f_27[iVar0], 0)) {
			weapon::give_weapon_to_ped(Local_629.f_27[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			entity::set_entity_lod_dist(Local_629.f_27[iVar0], 1000);
			ped::set_ped_relationship_group_hash(Local_629.f_27[iVar0], -183807561);
			ped::_0xA9B61A329BFDCBEA(Local_629.f_27[iVar0], 0);
			ped::set_blocking_of_non_temporary_events(Local_629.f_27[iVar0], 1);
			if (!ped::is_ped_injured(Local_629.f_27[iVar0])) {
				ai::task_follow_waypoint_recording(Local_629.f_27[iVar0], Local_629.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

// Position - 0x36EF
void func_62() {
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (!entity::does_entity_exist(Local_629.f_27[iVar0])) {
			Local_629.f_27[iVar0] =
				ped::create_ped(6, joaat("s_m_m_prisguard_01"), Local_629[iVar0 /*3*/], Local_629.f_10[iVar0], 1, 1);
			system::wait(0);
		}
		iVar0++;
	}
	vVar1 = {object::_get_object_offset_from_coords(Local_629[1 /*3*/], Local_629.f_10[1], -2f, 0f, 0f)};
	vVar4 = {object::_get_object_offset_from_coords(Local_629[1 /*3*/], Local_629.f_10[1], -1f, 0f, 0f)};
	vVar7 = {object::_get_object_offset_from_coords(Local_629[2 /*3*/], Local_629.f_10[2], 1f, 0f, 0f)};
	vVar10 = {object::_get_object_offset_from_coords(Local_629[2 /*3*/], Local_629.f_10[2], -1f, 0f, 0f)};
	Local_629.f_31[0] = ped::create_ped(6, joaat("s_m_m_prisguard_01"), vVar1, Local_629.f_10[1], 1, 1);
	Local_629.f_31[1] = ped::create_ped(6, joaat("s_m_m_prisguard_01"), vVar4, Local_629.f_10[1], 1, 1);
	Local_629.f_31[2] = ped::create_ped(6, joaat("s_m_m_prisguard_01"), vVar7, Local_629.f_10[2], 1, 1);
	Local_629.f_31[3] = ped::create_ped(6, joaat("s_m_m_prisguard_01"), vVar10, Local_629.f_10[2], 1, 1);
	iVar0 = 0;
	while (iVar0 < 4) {
		if (entity::does_entity_exist(Local_629.f_31[iVar0])) {
			weapon::give_weapon_to_ped(Local_629.f_31[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			entity::set_entity_lod_dist(Local_629.f_31[iVar0], 500);
			ped::set_ped_relationship_group_hash(Local_629.f_31[iVar0], -183807561);
			ped::set_ped_steers_around_peds(Local_629.f_31[iVar0], 0);
			ped::set_blocking_of_non_temporary_events(Local_629.f_31[iVar0], 1);
		}
		iVar0++;
	}
	streaming::set_model_as_no_longer_needed(joaat("s_m_m_prisguard_01"));
}

// Position - 0x38B4
void func_63() {
	if (bLocal_574) {
		iLocal_569 = vehicle::create_vehicle(joaat("polmav"), 10f, 10f, -30f, 0f, 1, 1);
		vehicle::set_vehicle_engine_on(iLocal_569, 1, 1, 0);
		vehicle::set_heli_blades_full_speed(iLocal_569);
		entity::set_entity_velocity(iLocal_569, 0f, 0f, 10f);
		entity::set_entity_lod_dist(iLocal_569, 500);
		if (func_28()) {
			bLocal_572 = true;
			vehicle::set_vehicle_searchlight(iLocal_569, 1, 0);
		}
		iLocal_570 = ped::create_ped(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, 1);
		ped::set_ped_into_vehicle(iLocal_570, iLocal_569, -1);
		if (!entity::is_entity_dead(iLocal_569, 0)) {
			vehicle::start_playback_recorded_vehicle(iLocal_569, 101, "PrisonHeli", 1);
		}
		streaming::set_model_as_no_longer_needed(joaat("polmav"));
	}
}

// Position - 0x396B
void func_64() {
	func_69();
	func_68();
	func_67();
	func_66();
	func_65();
}

// Position - 0x3987
void func_65() {
	Local_420[0 /*13*/][0 /*3*/] = {1827.69f, 2474.181f, 61.7202f};
	Local_420[0 /*13*/][1 /*3*/] = {1826.054f, 2478.934f, 61.7157f};
	Local_420[0 /*13*/][2 /*3*/] = {1820.909f, 2477.528f, 61.7153f};
	Local_420[0 /*13*/][3 /*3*/] = {1822.585f, 2472.122f, 61.7167f};
	ai::open_patrol_route("miss_Tower_01");
	ai::add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f,
							  53.5496f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f,
							  54.1376f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f,
							  gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f,
							  gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_link(0, 1);
	ai::add_patrol_route_link(1, 2);
	ai::add_patrol_route_link(2, 3);
	ai::add_patrol_route_link(3, 0);
	ai::close_patrol_route();
	ai::create_patrol_route();
	Local_420[1 /*13*/][0 /*3*/] = {1764.729f, 2409.139f, 61.7533f};
	Local_420[1 /*13*/][1 /*3*/] = {1763.129f, 2413.976f, 61.7328f};
	Local_420[1 /*13*/][2 /*3*/] = {1758.079f, 2411.984f, 61.7403f};
	Local_420[1 /*13*/][3 /*3*/] = {1760.213f, 2406.827f, 61.7419f};
	ai::open_patrol_route("miss_Tower_02");
	ai::add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f,
							  53.5496f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f,
							  54.1376f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f,
							  gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f,
							  gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_link(0, 1);
	ai::add_patrol_route_link(1, 2);
	ai::add_patrol_route_link(2, 3);
	ai::add_patrol_route_link(3, 0);
	ai::close_patrol_route();
	ai::create_patrol_route();
	Local_420[2 /*13*/][0 /*3*/] = {1658.829f, 2390.888f, 61.7462f};
	Local_420[2 /*13*/][1 /*3*/] = {1662.521f, 2394.692f, 61.7532f};
	Local_420[2 /*13*/][2 /*3*/] = {1658.854f, 2398.062f, 61.7573f};
	Local_420[2 /*13*/][3 /*3*/] = {1655.15f, 2394.705f, 61.7429f};
	ai::open_patrol_route("miss_Tower_03");
	ai::add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f,
							  55.1775f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f,
							  44.9049f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f,
							  44.5652f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f,
							  44.6212f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_link(0, 1);
	ai::add_patrol_route_link(1, 2);
	ai::add_patrol_route_link(2, 3);
	ai::add_patrol_route_link(3, 0);
	ai::close_patrol_route();
	ai::create_patrol_route();
	Local_420[3 /*13*/][0 /*3*/] = {1537.28f, 2468.338f, 61.7497f};
	Local_420[3 /*13*/][1 /*3*/] = {1542.189f, 2465.756f, 61.7247f};
	Local_420[3 /*13*/][2 /*3*/] = {1543.899f, 2470.971f, 61.7482f};
	Local_420[3 /*13*/][3 /*3*/] = {1539.14f, 2473.264f, 61.7359f};
	ai::open_patrol_route("miss_Tower_04");
	ai::add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f,
							  51.3366f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f,
							  44.8143f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f,
							  gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f,
							  44.8417f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_link(0, 1);
	ai::add_patrol_route_link(1, 2);
	ai::add_patrol_route_link(2, 3);
	ai::add_patrol_route_link(3, 0);
	ai::close_patrol_route();
	ai::create_patrol_route();
	Local_420[4 /*13*/][0 /*3*/] = {1535.098f, 2581.919f, 61.7312f};
	Local_420[4 /*13*/][1 /*3*/] = {1535.124f, 2581.101f, 61.7002f};
	Local_420[4 /*13*/][2 /*3*/] = {1538.325f, 2585.722f, 61.7251f};
	Local_420[4 /*13*/][3 /*3*/] = {1534.679f, 2589.268f, 61.7123f};
	ai::open_patrol_route("miss_Tower_05");
	ai::add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f,
							  gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f,
							  gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f,
							  44.5655f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f,
							  44.9156f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_link(0, 1);
	ai::add_patrol_route_link(1, 2);
	ai::add_patrol_route_link(2, 3);
	ai::add_patrol_route_link(3, 0);
	ai::close_patrol_route();
	ai::create_patrol_route();
	Local_420[5 /*13*/][0 /*3*/] = {1566.921f, 2682.525f, 61.7716f};
	Local_420[5 /*13*/][1 /*3*/] = {1567.927f, 2677.463f, 61.7741f};
	Local_420[5 /*13*/][2 /*3*/] = {1572.574f, 2678.193f, 61.7702f};
	Local_420[5 /*13*/][3 /*3*/] = {1572.359f, 2683.086f, 61.7664f};
	ai::open_patrol_route("miss_Tower_06");
	ai::add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f,
							  37.6965f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f,
							  gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f,
							  44.5652f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f,
							  44.4309f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_link(0, 1);
	ai::add_patrol_route_link(1, 2);
	ai::add_patrol_route_link(2, 3);
	ai::add_patrol_route_link(3, 0);
	ai::close_patrol_route();
	ai::create_patrol_route();
	Local_420[6 /*13*/][0 /*3*/] = {1648.104f, 2761.528f, 61.9103f};
	Local_420[6 /*13*/][1 /*3*/] = {1646.051f, 2756.671f, 61.9091f};
	Local_420[6 /*13*/][2 /*3*/] = {1651.533f, 2754.668f, 61.9021f};
	Local_420[6 /*13*/][3 /*3*/] = {1653.125f, 2759.327f, 61.9056f};
	ai::open_patrol_route("miss_Tower_07");
	ai::add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f,
							  37.9512f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f,
							  gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f,
							  44.5652f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f,
							  44.6846f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_link(0, 1);
	ai::add_patrol_route_link(1, 2);
	ai::add_patrol_route_link(2, 3);
	ai::add_patrol_route_link(3, 0);
	ai::close_patrol_route();
	ai::create_patrol_route();
	Local_420[7 /*13*/][0 /*3*/] = {1774.523f, 2766.559f, 61.9143f};
	Local_420[7 /*13*/][1 /*3*/] = {1769.768f, 2763.816f, 61.9248f};
	Local_420[7 /*13*/][2 /*3*/] = {1772.442f, 2759.139f, 61.9193f};
	Local_420[7 /*13*/][3 /*3*/] = {1776.893f, 2762.356f, 61.9258f};
	ai::open_patrol_route("miss_Tower_08");
	ai::add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f,
							  44.4414f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f,
							  44.5747f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f,
							  44.5652f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f,
							  44.9326f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_link(0, 1);
	ai::add_patrol_route_link(1, 2);
	ai::add_patrol_route_link(2, 3);
	ai::add_patrol_route_link(3, 0);
	ai::close_patrol_route();
	ai::create_patrol_route();
	Local_420[9 /*13*/][0 /*3*/] = {1824.288f, 2625.042f, 61.9749f};
	Local_420[9 /*13*/][1 /*3*/] = {1820.524f, 2621.49f, 61.9951f};
	Local_420[9 /*13*/][2 /*3*/] = {1820.414f, 2621.544f, 61.9908f};
	Local_420[9 /*13*/][3 /*3*/] = {1823.45f, 2617.477f, 61.9829f};
	ai::open_patrol_route("miss_Tower_10");
	ai::add_patrol_route_node(0, "WORLD_HUMAN_GUARD_STAND", Local_420[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f,
							  37.9512f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(1, "WORLD_HUMAN_GUARD_STAND", Local_420[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f,
							  gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(2, "WORLD_HUMAN_GUARD_STAND", Local_420[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f,
							  44.5652f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_node(3, "WORLD_HUMAN_GUARD_STAND", Local_420[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f,
							  44.6846f, gameplay::get_random_int_in_range(5000, 10000));
	ai::add_patrol_route_link(0, 1);
	ai::add_patrol_route_link(1, 2);
	ai::add_patrol_route_link(2, 3);
	ai::add_patrol_route_link(3, 0);
	ai::close_patrol_route();
	ai::create_patrol_route();
}

// Position - 0x44D7
void func_66() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10) {
		if (entity::does_entity_exist(Local_318.f_64[iVar0]) && !entity::is_entity_dead(Local_318.f_64[iVar0], 0)) {
			ped::set_ped_relationship_group_hash(Local_318.f_64[iVar0], -183807561);
			ped::set_ped_config_flag(Local_318.f_64[iVar0], 132, 1);
			ped::set_ped_to_inform_respected_friends(Local_318.f_64[iVar0], 300f, 10);
			ped::set_ped_seeing_range(Local_318.f_64[iVar0], 1000f);
			ped::set_ped_id_range(Local_318.f_64[iVar0], 1000f);
			ped::set_ped_hearing_range(Local_318.f_64[iVar0], 1000f);
			ped::set_ped_combat_ability(Local_318.f_64[iVar0], 2);
			ped::set_ped_combat_attributes(Local_318.f_64[iVar0], 13, 1);
			ped::set_ped_combat_attributes(Local_318.f_64[iVar0], 0, 0);
			ped::set_ped_target_loss_response(Local_318.f_64[iVar0], 1);
			ped::set_ped_combat_movement(Local_318.f_64[iVar0], 1);
			ai::set_ped_desired_move_blend_ratio(Local_318.f_64[iVar0], 0f);
			ped::set_ped_keep_task(Local_318.f_64[iVar0], 1);
			ped::set_ped_accuracy(Local_318.f_64[iVar0], 20);
			ped::set_ped_combat_range(Local_318.f_64[iVar0], 2);
			ped::set_ped_combat_attributes(Local_318.f_64[iVar0], 23, 0);
			weapon::give_weapon_to_ped(Local_318.f_64[iVar0], joaat("weapon_sniperrifle"), -1, 1, 1);
			entity::set_entity_lod_dist(Local_318.f_64[iVar0], 1000);
			ped::set_blocking_of_non_temporary_events(Local_318.f_64[iVar0], 1);
			ped::set_ped_seeing_range(Local_318.f_64[iVar0], 1000f);
			if (!ped::is_ped_injured(Local_318.f_64[iVar0])) {
				if (iVar0 == 0) {
					ai::task_patrol(Local_318.f_64[iVar0], "miss_Tower_01", 1, 0, 1);
				}
				else if (iVar0 == 1) {
					ai::task_patrol(Local_318.f_64[iVar0], "miss_Tower_02", 1, 0, 1);
				}
				else if (iVar0 == 2) {
					ai::task_patrol(Local_318.f_64[iVar0], "miss_Tower_03", 1, 0, 1);
				}
				else if (iVar0 == 3) {
					ai::task_patrol(Local_318.f_64[iVar0], "miss_Tower_04", 1, 0, 1);
				}
				else if (iVar0 == 4) {
					ai::task_patrol(Local_318.f_64[iVar0], "miss_Tower_05", 1, 0, 1);
				}
				else if (iVar0 == 5) {
					ai::task_patrol(Local_318.f_64[iVar0], "miss_Tower_06", 1, 0, 1);
				}
				else if (iVar0 == 6) {
					ai::task_patrol(Local_318.f_64[iVar0], "miss_Tower_07", 1, 0, 1);
				}
				else if (iVar0 == 7) {
					ai::task_patrol(Local_318.f_64[iVar0], "miss_Tower_08", 1, 0, 1);
				}
				else if (iVar0 == 9) {
					ai::task_patrol(Local_318.f_64[iVar0], "miss_Tower_10", 1, 0, 1);
				}
				else {
					ai::task_follow_waypoint_recording(Local_318.f_64[iVar0], Local_318.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x4785
void func_67() {
	int iVar0;

	if (!cam::is_sphere_visible(1823.845f, 2621.267f, 57f, 0.5f)) {
		uLocal_404[0] = vehicle::create_vehicle(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, 1, 1);
		if (entity::does_entity_exist(uLocal_404[0]) && !entity::is_entity_dead(uLocal_404[0], 0)) {
			uLocal_408[0] = ped::create_ped_inside_vehicle(uLocal_404[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			entity::set_entity_can_be_damaged(uLocal_408[0], 0);
			ped::set_ped_relationship_group_hash(uLocal_408[0], iLocal_316);
			entity::set_entity_collision(uLocal_404[0], 0, 0);
			entity::set_entity_visible(uLocal_404[0], 0, 0);
			entity::set_entity_can_be_damaged(uLocal_404[0], 0);
			entity::freeze_entity_position(uLocal_404[0], 1);
		}
		system::wait(0);
	}
	if (!cam::is_sphere_visible(1761.418f, 2410.378f, 61f, 0.5f)) {
		uLocal_404[1] = vehicle::create_vehicle(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, 1, 1);
		if (entity::does_entity_exist(uLocal_404[1]) && !entity::is_entity_dead(uLocal_404[1], 0)) {
			uLocal_408[1] = ped::create_ped_inside_vehicle(uLocal_404[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			entity::set_entity_can_be_damaged(uLocal_408[1], 0);
			ped::set_ped_relationship_group_hash(uLocal_408[1], iLocal_316);
			entity::set_entity_collision(uLocal_404[1], 0, 0);
			entity::set_entity_visible(uLocal_404[1], 0, 0);
			entity::set_entity_can_be_damaged(uLocal_404[1], 0);
			entity::freeze_entity_position(uLocal_404[1], 1);
		}
		system::wait(0);
	}
	if (!cam::is_sphere_visible(1534.635f, 2585.162f, 61f, 0.5f)) {
		uLocal_404[2] = vehicle::create_vehicle(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, 1, 1);
		if (entity::does_entity_exist(uLocal_404[2]) && !entity::is_entity_dead(uLocal_404[2], 0)) {
			uLocal_408[2] = ped::create_ped_inside_vehicle(uLocal_404[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			entity::set_entity_can_be_damaged(uLocal_408[2], 0);
			ped::set_ped_relationship_group_hash(uLocal_408[2], iLocal_316);
			entity::set_entity_collision(uLocal_404[2], 0, 0);
			entity::set_entity_visible(uLocal_404[2], 0, 0);
			entity::set_entity_can_be_damaged(uLocal_404[2], 0);
			entity::freeze_entity_position(uLocal_404[2], 1);
		}
		system::wait(0);
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(uLocal_408[iVar0]) && !entity::is_entity_dead(uLocal_408[iVar0], 0) &&
			!entity::is_entity_dead(uLocal_404[iVar0], 0)) {
			if (func_28()) {
				iLocal_412[iVar0] = 1;
				vehicle::set_vehicle_searchlight(uLocal_404[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

// Position - 0x4A36
void func_68() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10) {
		if (!entity::does_entity_exist(Local_318.f_64[iVar0])) {
			Local_318.f_64[iVar0] =
				ped::create_ped(6, joaat("s_m_m_prisguard_01"), Local_318[iVar0 /*3*/], Local_318.f_31[iVar0], 1, 1);
			streaming::set_model_as_no_longer_needed(joaat("s_m_m_prisguard_01"));
			system::wait(0);
		}
		iVar0++;
	}
}

// Position - 0x4A97
void func_69() {
	Local_318[0 /*3*/] = {1827.69f, 2474.181f, 61.7202f};
	Local_318[1 /*3*/] = {1764.729f, 2409.139f, 61.7533f};
	Local_318[2 /*3*/] = {1658.829f, 2390.888f, 61.7462f};
	Local_318[3 /*3*/] = {1537.28f, 2468.338f, 61.7497f};
	Local_318[4 /*3*/] = {1530.493f, 2585.172f, 61.7001f};
	Local_318[5 /*3*/] = {1566.921f, 2682.525f, 61.7716f};
	Local_318[6 /*3*/] = {1648.104f, 2761.528f, 61.9103f};
	Local_318[7 /*3*/] = {1774.523f, 2766.559f, 61.9143f};
	Local_318[8 /*3*/] = {1852.475f, 2697.632f, 61.9547f};
	Local_318[9 /*3*/] = {1824.288f, 2625.042f, 61.9749f};
	Local_318.f_31[0] = 248.9733f;
	Local_318.f_31[1] = 45.8793f;
	Local_318.f_31[2] = 186.3656f;
	Local_318.f_31[3] = 313.5206f;
	Local_318.f_31[4] = 95.9574f;
	Local_318.f_31[5] = 289.3531f;
	Local_318.f_31[6] = 13.7511f;
	Local_318.f_31[7] = 0f;
	Local_318.f_31[8] = 208.5786f;
	Local_318.f_31[9] = 280.9389f;
}

// Position - 0x4C07
int func_70() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		while (!ai::get_is_waypoint_recording_loaded(Local_629.f_14[iVar0])) {
			system::wait(0);
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x4C3B
int func_71() {
	if (bLocal_618) {
		if (!streaming::has_model_loaded(joaat("s_m_y_prisoner_01"))) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x4C5B
int func_72() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10) {
		if (!ai::get_is_waypoint_recording_loaded(Local_318.f_42[iVar0])) {
			return 0;
		}
		iVar0++;
	}
	if (!streaming::has_model_loaded(joaat("polmav"))) {
		return 0;
	}
	if (!streaming::has_model_loaded(joaat("s_m_m_prisguard_01"))) {
		return 0;
	}
	return 1;
}

// Position - 0x4CAE
int func_73() {
	if (bLocal_574) {
		if (!streaming::has_model_loaded(joaat("polmav"))) {
			return 0;
		}
		if (!vehicle::has_vehicle_recording_been_loaded(101, "PrisonHeli")) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x4CDE
int func_74() {
	if (!streaming::has_model_loaded(joaat("s_m_m_security_01"))) {
		return 0;
	}
	if (!streaming::has_model_loaded(joaat("s_m_m_prisguard_01"))) {
		return 0;
	}
	if (!streaming::has_model_loaded(joaat("polmav"))) {
		return 0;
	}
	return 1;
}

// Position - 0x4D1A
void func_75() {
	int iVar0;

	func_76();
	iVar0 = 0;
	while (iVar0 < 3) {
		ai::request_waypoint_recording(Local_629.f_14[iVar0]);
		iVar0++;
	}
}

// Position - 0x4D45
void func_76() {
	Local_629[0 /*3*/] = {1768.628f, 2538.97f, 44.4054f};
	Local_629[1 /*3*/] = {1633.613f, 2498.849f, 44.4117f};
	Local_629[2 /*3*/] = {1622.61f, 2555.683f, 44.4051f};
	Local_629.f_10[0] = 0f;
	Local_629.f_10[1] = 0f;
	Local_629.f_10[2] = 198.4323f;
	Local_629.f_14[0] = "PatrolGuard02";
	Local_629.f_14[1] = "PatrolGuard03";
	Local_629.f_14[2] = "PatrolGuard04";
}

// Position - 0x4DD5
void func_77() {
	int iVar0;

	Local_318.f_42[0] = "TowerGuard01";
	Local_318.f_42[1] = "TowerGuard02";
	Local_318.f_42[2] = "TowerGuard03";
	Local_318.f_42[3] = "TowerGuard04";
	Local_318.f_42[4] = "TowerGuard05";
	Local_318.f_42[5] = "TowerGuard06";
	Local_318.f_42[6] = "TowerGuard07";
	Local_318.f_42[7] = "TowerGuard08";
	Local_318.f_42[8] = "TowerGuard09";
	Local_318.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10) {
		ai::request_waypoint_recording(Local_318.f_42[iVar0]);
		iVar0++;
	}
	streaming::request_model(joaat("polmav"));
	streaming::request_model(joaat("s_m_m_prisguard_01"));
}

// Position - 0x4E89
void func_78() {
	bLocal_574 = false;
	if (func_28()) {
		iLocal_575 = gameplay::get_random_int_in_range(0, 65535) % 2;
		if (iLocal_575 == 0) {
			bLocal_574 = true;
			streaming::request_model(joaat("polmav"));
			vehicle::request_vehicle_recording(101, "PrisonHeli");
		}
		else {
			bLocal_574 = false;
		}
	}
}

// Position - 0x4ECD
void func_79() {
	streaming::request_model(joaat("s_m_m_security_01"));
	streaming::request_model(joaat("s_m_m_prisguard_01"));
	streaming::request_model(joaat("polmav"));
}

// Position - 0x4EF0
void func_80() {
	iLocal_315 = iLocal_315;
	iLocal_315 = 0;
	func_81();
	func_34();
	Local_128.f_4 = 75;
	Local_128.f_6 = 15;
	object::_door_control(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0f, 0f, 0f);
	object::_door_control(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0f);
	ped::add_relationship_group("Prison_Guards", &iLocal_316);
	ped::add_relationship_group("Prison_Prisoners", &iLocal_317);
	ped::set_relationship_between_groups(2, iLocal_316, iLocal_317);
	ped::set_relationship_between_groups(2, iLocal_317, iLocal_316);
	ped::set_relationship_between_groups(1, iLocal_316, -1533126372);
	ped::set_relationship_between_groups(1, -1533126372, iLocal_316);
	ped::set_relationship_between_groups(3, 1862763509, iLocal_317);
	ped::set_relationship_between_groups(3, iLocal_317, 1862763509);
}

// Position - 0x4FB4
void func_81() {
	vLocal_65[0 /*3*/] = {1809.816f, 2482.877f, 44.4744f};
	vLocal_65[1 /*3*/] = {1755.823f, 2424.904f, 44.4319f};
	vLocal_65[2 /*3*/] = {1661.2f, 2410.096f, 44.4265f};
	vLocal_65[3 /*3*/] = {1555.966f, 2476.43f, 44.4042f};
	vLocal_65[4 /*3*/] = {1549.141f, 2583.103f, 44.4225f};
	vLocal_65[5 /*3*/] = {1581.156f, 2671.974f, 44.481f};
	vLocal_65[6 /*3*/] = {1655.49f, 2743.69f, 44.4665f};
	vLocal_65[7 /*3*/] = {1768.776f, 2748.527f, 44.4402f};
	vLocal_65[8 /*3*/] = {1831.2f, 2696f, 44.4578f};
	vLocal_65[9 /*3*/] = {1803.121f, 2617.781f, 44.5082f};
	vLocal_65[10 /*3*/] = {1817.221f, 2608.387f, 44.6204f};
	vLocal_65[11 /*3*/] = {1843.838f, 2608.361f, 44.6178f};
}

// Position - 0x50C8
void func_82() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (entity::is_entity_in_angled_area(player::player_ped_id(), 1879.956f, 2705.097f, 52.07341f, 1869.859f,
											 2726.776f, 59.82338f, 24.75f, 0, 1, 0) ||
			entity::is_entity_in_angled_area(player::player_ped_id(), 1833.113f, 2520.888f, 52.26086f, 1833.115f,
											 2554.431f, 61.25998f, 15f, 0, 1, 0) ||
			entity::is_entity_in_angled_area(player::player_ped_id(), 1832.742f, 2568.421f, 48.87375f, 1833.015f,
											 2596.529f, 57.12439f, 27.75f, 0, 1, 0)) {
			if (player::get_player_wanted_level(player::player_id()) == 0) {
				player::set_player_wanted_level(player::player_id(), 2, 0);
				player::set_player_wanted_level_now(player::player_id(), 0);
			}
		}
	}
	if (!iLocal_104) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 1917.889f, 2618.476f, -45.677f, 1822.889f,
												 2618.476f, 45.677f, 195f, 0, 0, 0)) {
				if (player::has_player_damaged_at_least_one_non_animal_ped(player::player_id())) {
					player::set_player_wanted_level(player::player_id(), 4, 0);
					player::set_player_wanted_level_now(player::player_id(), 0);
					ped::set_relationship_between_groups(5, 1862763509, -183807561);
					ped::set_relationship_between_groups(5, -183807561, 1862763509);
					iLocal_104 = 1;
				}
				if (gameplay::is_bullet_in_area(1874.072f, 2605.423f, 44.6723f, 100f, 1) &&
						!player::has_player_damaged_at_least_one_ped(player::player_id()) ||
					ped::is_ped_shooting(player::player_ped_id()) &&
						!player::has_player_damaged_at_least_one_non_animal_ped(player::player_id())) {
					player::set_player_wanted_level_now(player::player_id(), 0);
					player::set_player_wanted_level(player::player_id(), 1, 0);
					ped::set_relationship_between_groups(5, 1862763509, -183807561);
					ped::set_relationship_between_groups(5, -183807561, 1862763509);
					iLocal_104 = 1;
				}
			}
		}
	}
}

// Position - 0x5291
void func_83(int iParam0) {
	int iVar0;

	func_89();
	func_88();
	func_87();
	func_86();
	func_85();
	func_84();
	audio::stop_alarm("PRISON_ALARMS", 1);
	if (iLocal_104) {
		ped::set_relationship_between_groups(2, 1862763509, -183807561);
		ped::set_relationship_between_groups(2, -183807561, 1862763509);
	}
	iVar0 = 0;
	while (iVar0 < 12) {
		if (pathfind::does_navmesh_blocking_object_exist(uLocal_52[iVar0])) {
			pathfind::remove_navmesh_blocking_object(uLocal_52[iVar0]);
		}
		iVar0++;
	}
	object::_door_control(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0f, 0f, 0f);
	object::_door_control(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0f);
	if (iParam0) {
		gameplay::clear_area(1695.1f, 2595.8f, 50f, 1000f, 1, 0, 0, 0);
	}
	script::terminate_this_thread();
}

// Position - 0x5367
void func_84() {
	if (entity::does_entity_exist(iLocal_124)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_124);
	}
	if (entity::does_entity_exist(iLocal_126)) {
		entity::set_ped_as_no_longer_needed(&iLocal_126);
	}
	if (entity::does_entity_exist(iLocal_125)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_125);
	}
	if (entity::does_entity_exist(iLocal_127)) {
		entity::set_ped_as_no_longer_needed(&iLocal_127);
	}
}

// Position - 0x53AB
void func_85() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(Local_629.f_27[iVar0])) {
			if (ui::does_blip_exist(Local_629.f_36[iVar0])) {
				ui::remove_blip(&Local_629.f_36[iVar0]);
			}
			if (entity::is_entity_occluded(Local_629.f_27[iVar0])) {
				ped::delete_ped(&Local_629.f_27[iVar0]);
			}
			else {
				entity::set_ped_as_no_longer_needed(&Local_629.f_27[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4) {
		if (entity::does_entity_exist(Local_629.f_31[iVar0])) {
			if (ui::does_blip_exist(Local_629.f_40[iVar0])) {
				ui::remove_blip(&Local_629.f_40[iVar0]);
			}
			if (entity::is_entity_occluded(Local_629.f_31[iVar0])) {
				ped::delete_ped(&Local_629.f_31[iVar0]);
			}
			else {
				entity::set_ped_as_no_longer_needed(&Local_629.f_31[iVar0]);
			}
		}
		iVar0++;
	}
}

// Position - 0x548B
void func_86() {
	if (ui::does_blip_exist(iLocal_621)) {
		ui::remove_blip(&iLocal_621);
	}
	if (entity::does_entity_exist(iLocal_619)) {
		vehicle::delete_vehicle(&iLocal_619);
	}
}

// Position - 0x54B5
void func_87() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20) {
		if (entity::does_entity_exist(uLocal_576[iVar0])) {
			if (ui::does_blip_exist(uLocal_597[iVar0])) {
				ui::remove_blip(&uLocal_597[iVar0]);
			}
			ped::delete_ped(&uLocal_576[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x5502
void func_88() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(uLocal_404[iVar0])) {
			vehicle::delete_vehicle(&uLocal_404[iVar0]);
		}
		if (entity::does_entity_exist(uLocal_408[iVar0])) {
			ped::delete_ped(&uLocal_408[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		if (entity::does_entity_exist(Local_318.f_64[iVar0])) {
			if (ui::does_blip_exist(Local_318.f_75[iVar0])) {
				ui::remove_blip(&Local_318.f_75[iVar0]);
			}
			if (entity::is_entity_occluded(Local_318.f_64[iVar0])) {
				ped::delete_ped(&Local_318.f_64[iVar0]);
			}
			else {
				entity::set_ped_as_no_longer_needed(&Local_318.f_64[iVar0]);
			}
		}
		iVar0++;
	}
}

// Position - 0x55BB
void func_89() {
	if (ui::does_blip_exist(iLocal_571)) {
		ui::remove_blip(&iLocal_571);
	}
	if (entity::does_entity_exist(iLocal_569)) {
		if (entity::is_entity_occluded(iLocal_569)) {
			vehicle::delete_vehicle(&iLocal_569);
			ped::delete_ped(&iLocal_570);
		}
		else {
			func_90(&iLocal_569, &iLocal_570);
			entity::set_vehicle_as_no_longer_needed(&iLocal_569);
		}
	}
}

// Position - 0x560A
void func_90(int iParam0, var *uParam1) {
	if (entity::does_entity_exist(*iParam0) && entity::does_entity_exist(*uParam1) &&
		!entity::is_entity_dead(*iParam0, 0) && !entity::is_entity_dead(*uParam1, 0)) {
		if (entity::is_entity_in_air(*iParam0)) {
			if (vehicle::is_playback_going_on_for_vehicle(*iParam0)) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					ai::task_plane_mission(*uParam1, *iParam0, 0, 0,
										   entity::get_entity_coords(player::player_ped_id(), 1), 8, 50f, -1f, 30f, 100,
										   50);
				}
			}
		}
	}
}
