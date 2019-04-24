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
vector3 vLocal_22 = {0f, 0f, 0f};
float fLocal_25 = 0f;
float fLocal_26 = 0f;
var uLocal_27 = 0;
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
int iLocal_35 = 0;
int *iLocal_36 = NULL;
var uLocal_37 = 0;
var uLocal_38 = -1;
var uLocal_39 = 0;
var uLocal_40 = 0;
var uLocal_41 = 0;
var uLocal_42 = 0;
var uLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 1000;
var uLocal_46 = 1000;
var uLocal_47 = 0;
int iLocal_48 = 0;
struct<4> Local_49[10];
bool bLocal_90 = 0;
int iLocal_91 = 0;
int iLocal_92 = 0;
int iLocal_93 = 0;
int iLocal_94 = 0;
int iLocal_95 = 0;
var uLocal_96 = 0;
var uLocal_97 = 0;
var uLocal_98 = 0;
var uLocal_99 = 0;
var uLocal_100 = 0;
var uLocal_101 = 0;
var uLocal_102 = 0;
var uLocal_103 = 0;
var uLocal_104 = 0;
var uLocal_105 = 0;
var uLocal_106 = 0;
int iLocal_107 = 0;
struct<61> Local_108 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
		0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
int iLocal_169 = 0;
int iLocal_170 = 0;
int iLocal_171 = 0;
int iLocal_172 = 0;
int iLocal_173 = 0;
var *uLocal_174 = NULL;
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
var uLocal_337 = 0;
var uLocal_338 = 0;
int *iLocal_339 = NULL;
int *iLocal_340 = NULL;
int iLocal_341 = 0;
int iLocal_342 = 0;
int iLocal_343 = 0;
int iLocal_344 = 0;
int iLocal_345 = 0;
int iLocal_346 = 0;
int iLocal_347 = 0;
int iLocal_348 = 0;
int iLocal_349 = 0;
int iLocal_350 = 0;
int iLocal_351 = 0;
int iLocal_352 = 0;
int iLocal_353 = 0;
int iLocal_354 = 0;
int iLocal_355 = 0;
int iLocal_356 = 0;
int iLocal_357 = 0;
int iLocal_358 = 0;
int iLocal_359 = 0;
int iLocal_360 = 0;
int iLocal_361 = 0;
int iLocal_362 = 0;
int iLocal_363 = 0;
int iLocal_364 = 0;
int iLocal_365 = 0;
int iLocal_366 = 0;
int iLocal_367 = 0;
int iLocal_368 = 0;
bool bLocal_369 = 0;
int iLocal_370 = 0;
int iLocal_371 = 0;
int iLocal_372 = 0;
int iLocal_373 = 0;
int iLocal_374 = 0;
var uLocal_375 = 0;
var uLocal_376 = 0;
int iLocal_377 = 0;
int iLocal_378 = 0;
int iLocal_379 = 0;
int iLocal_380 = 0;
int iLocal_381 = 0;
var uLocal_382 = 0;
var uLocal_383 = 0;
int iLocal_384 = 0;
int iLocal_385 = 0;
int iLocal_386 = 0;
int iLocal_387 = 0;
int iLocal_388 = 0;
int iLocal_389 = 0;
vector3 vLocal_390 = {0f, 0f, 0f};
vector3 vLocal_393 = {0f, 0f, 0f};
vector3 vLocal_396 = {0f, 0f, 0f};
vector3 vLocal_399 = {0f, 0f, 0f};
struct<13> Local_402[4];
struct<9> Local_455 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_464 = 0;
var uLocal_465 = 0;
var uLocal_466 = 0;
var uLocal_467 = 0;
struct<9> Local_468 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_477 = 0;
var uLocal_478 = 0;
var uLocal_479 = 0;
var uLocal_480 = 0;
struct<13> Local_481[3];
struct<13> Local_521[3];
struct<13> Local_561[6];
struct<13> Local_640[2];
int iLocal_667[3] = {0, 0, 0};
int iLocal_671[6] = {0, 0, 0, 0, 0, 0};
int iLocal_678[2] = {0, 0};
int iLocal_681[3] = {0, 0, 0};
int iLocal_685[4] = {0, 0, 0, 0};
int iLocal_690 = 0;
int iLocal_691 = 0;
var uLocal_692 = 0;
int iLocal_693 = 0;
struct<6> Local_694[9];
struct<6> Local_749 = {
	0, 0, 0, 0, 0, 0
};
struct<6> Local_755[2];
struct<6> Local_768 = {
	0, 0, 0, 0, 0, 0
};
int iLocal_774 = 0;
int iLocal_775 = 0;
int iLocal_776 = 0;
int iLocal_777 = 0;
int iLocal_778 = 0;
int iLocal_779 = 0;
int iLocal_780 = 0;
int iLocal_781 = 0;
struct<4> Local_782 = {
	0, 0, 0, 0
};
var uLocal_786 = 0;
var uLocal_787 = 0;
struct<6> Local_788[6];
struct<6> Local_825 = {
	0, 0, 0, 0, 0, 0
};
var *uLocal_831 = NULL;
var uLocal_832 = 0;
var uLocal_833 = 0;
var uLocal_834 = 0;
var uLocal_835 = 0;
var uLocal_836 = 0;
var uLocal_837 = 0;
var uLocal_838 = 0;
var uLocal_839 = 0;
var uLocal_840 = 0;
var uLocal_841 = 0;
var uLocal_842 = 0;
var uLocal_843 = 0;
var uLocal_844 = 0;
var uLocal_845 = 0;
var uLocal_846 = 0;
var uLocal_847 = 0;
var uLocal_848 = 0;
var uLocal_849 = 0;
var uLocal_850 = 0;
var uLocal_851 = 0;
var uLocal_852 = 0;
var uLocal_853 = 0;
var uLocal_854 = 0;
var uLocal_855 = 0;
var uLocal_856 = 0;
var uLocal_857 = 0;
var uLocal_858 = 0;
var uLocal_859 = 0;
var uLocal_860 = 0;
var uLocal_861 = 0;
var uLocal_862 = 0;
var uLocal_863 = 0;
var uLocal_864 = 0;
var uLocal_865 = 0;
var uLocal_866 = 0;
var uLocal_867 = 0;
var uLocal_868 = 0;
var uLocal_869 = 0;
var uLocal_870 = 0;
var uLocal_871 = 0;
var uLocal_872 = 0;
var uLocal_873 = 0;
var uLocal_874 = 0;
var uLocal_875 = 0;
var uLocal_876 = 0;
var uLocal_877 = 0;
var uLocal_878 = 0;
var uLocal_879 = 0;
var uLocal_880 = 0;
var uLocal_881 = 0;
var uLocal_882 = 0;
var *uLocal_883 = NULL;
var uLocal_884 = 0;
var uLocal_885 = 0;
var uLocal_886 = 0;
var uLocal_887 = 0;
var uLocal_888 = 0;
var uLocal_889 = 0;
var uLocal_890 = 0;
var uLocal_891 = 0;
var uLocal_892 = 0;
var uLocal_893 = 0;
var uLocal_894 = 0;
var uLocal_895 = 0;
var uLocal_896 = 0;
var uLocal_897 = 0;
var uLocal_898 = 0;
var uLocal_899 = 0;
var uLocal_900 = 0;
var uLocal_901 = 0;
var uLocal_902 = 0;
var uLocal_903 = 0;
var uLocal_904 = 0;
var uLocal_905 = 0;
var uLocal_906 = 0;
var uLocal_907 = 0;
var uLocal_908 = 0;
var uLocal_909 = 0;
var uLocal_910 = 0;
var uLocal_911 = 0;
var uLocal_912 = 0;
var uLocal_913 = 0;
var uLocal_914 = 0;
var uLocal_915 = 0;
var uLocal_916 = 0;
var uLocal_917 = 0;
var uLocal_918 = 0;
var uLocal_919 = 0;
var uLocal_920 = 0;
var uLocal_921 = 0;
var uLocal_922 = 0;
var uLocal_923 = 0;
var uLocal_924 = 0;
var uLocal_925 = 0;
var uLocal_926 = 0;
var uLocal_927 = 0;
var uLocal_928 = 0;
var uLocal_929 = 0;
var uLocal_930 = 0;
var uLocal_931 = 0;
var uLocal_932 = 0;
var uLocal_933 = 0;
var uLocal_934 = 0;
var *uLocal_935 = NULL;
var uLocal_936 = 0;
var uLocal_937 = 0;
var uLocal_938 = 0;
var uLocal_939 = 0;
var uLocal_940 = 0;
var uLocal_941 = 0;
var uLocal_942 = 0;
var uLocal_943 = 0;
var uLocal_944 = 0;
var uLocal_945 = 0;
var uLocal_946 = 0;
var uLocal_947 = 0;
var uLocal_948 = 0;
var uLocal_949 = 0;
var uLocal_950 = 0;
var uLocal_951 = 0;
var uLocal_952 = 0;
var uLocal_953 = 0;
var uLocal_954 = 0;
var uLocal_955 = 0;
var uLocal_956 = 0;
var uLocal_957 = 0;
var uLocal_958 = 0;
var uLocal_959 = 0;
var uLocal_960 = 0;
var uLocal_961 = 0;
var uLocal_962 = 0;
var uLocal_963 = 0;
var uLocal_964 = 0;
var uLocal_965 = 0;
var uLocal_966 = 0;
var uLocal_967 = 0;
var uLocal_968 = 0;
var uLocal_969 = 0;
var uLocal_970 = 0;
var uLocal_971 = 0;
var uLocal_972 = 0;
var uLocal_973 = 0;
var uLocal_974 = 0;
var uLocal_975 = 0;
var uLocal_976 = 0;
var uLocal_977 = 0;
var uLocal_978 = 0;
var uLocal_979 = 0;
var uLocal_980 = 0;
var uLocal_981 = 0;
var uLocal_982 = 0;
var uLocal_983 = 0;
var uLocal_984 = 0;
var uLocal_985 = 0;
var uLocal_986 = 0;
struct<61> ScriptParam_0 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
		0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;
	int iVar1;

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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_92 = func_537(64);
	iLocal_93 = func_537(63);
	iLocal_94 = joaat("u_m_m_aldinapoli");
	iLocal_95 = joaat("premier");
	iLocal_169 = 1;
	iLocal_368 = 1;
	bLocal_369 = true;
	vLocal_390 = {-1304.754f, -38.3551f, 47.0814f};
	vLocal_393 = {-1340.555f, 17.6527f, 51.7458f};
	vLocal_396 = {-1388.436f, 138.2263f, 55.0734f};
	iLocal_780 = -1;
	iLocal_781 = joaat("u_m_m_markfost");
	Local_108 = {ScriptParam_0};
	func_535(&Local_108);
	func_534();
	gameplay::set_mission_flag(1);
	if (player::has_force_cleanup_occurred(19)) {
		func_533("Force cleanup [TERMINATING]");
		func_517(1);
		func_506(1);
	}
	if (func_505()) {
		Global_69947 = 1;
		iLocal_91 = 0;
		while (!func_499(&Local_108, &uLocal_831)) {
			system::wait(0);
		}
		func_498(&Local_108, 0, 1);
		Global_69947 = 0;
		func_497("Set up script for replay");
	}
	Local_455 = Local_108.f_28[0];
	Local_468 = Local_108.f_28[1];
	Local_481[0 /*13*/] = Local_108.f_28[2];
	Local_481[1 /*13*/] = Local_108.f_28[3];
	Local_481[2 /*13*/] = Local_108.f_28[4];
	Local_782.f_1 = Local_108.f_41[0];
	Local_825 = Local_108.f_41[1];
	iLocal_777 = Local_108.f_41[2];
	Local_749 = Local_108.f_35[0];
	Local_694[4 /*6*/] = Local_108.f_35[1];
	Local_694[5 /*6*/] = Local_108.f_35[2];
	vehicle::add_vehicle_upsidedown_check(Local_749);
	iLocal_354 = 1;
	iLocal_345 = 1;
	iLocal_372 = gameplay::get_game_timer();
	audio::register_script_with_audio(0);
	gameplay::clear_bit(&Global_101700.f_17533.f_382, 4);
	func_486();
	iVar0 = 0;
	while (iVar0 <= Local_481 - 1) {
		if (func_485(Local_481[iVar0 /*13*/])) {
			ped::set_ped_relationship_group_hash(Local_481[iVar0 /*13*/], iLocal_774);
			entity::set_entity_can_be_damaged_by_relationship_group(Local_481[iVar0 /*13*/], 0, iLocal_774);
			ped::set_relationship_between_groups(5, iLocal_774, 1862763509);
		}
		iVar0++;
	}
	if (gameplay::is_next_weather_type("THUNDER") || gameplay::is_prev_weather_type("THUNDER")) {
		gameplay::_set_weather_type_over_time("OVERCAST", 25f);
	}
	if (func_505() || func_484(0)) {
		if (func_484(0) && !func_505()) {
			iVar1 = 0;
			func_483(player::player_ped_id(), -1291.596f, -12.9214f, 48.5137f, 294.7073f, 0, 1);
		}
		else {
			iVar1 = func_482();
		}
		func_481("Replay stage grabbed: ", iVar1);
		if (Global_86001 == 1) {
			iVar1++;
		}
		switch (iVar1) {
		case 0:
			func_481("Replay skipping to stage ", 1);
			func_480(-1291.596f, -12.9214f, 48.5137f, 294.7073f, 1, 0);
			func_472(1, 0);
			break;

		case 1:
			func_481("Replay skipping to stage ", 3);
			func_480(-1190.22f, 36.83f, 52.03f, 299f, 1, 0);
			func_472(3, 0);
			break;

		case 2:
			func_481("Replay skipping to stage ", 7);
			func_480(-1324.854f, 60.2491f, 52.54f, 94.6913f, 1, 0);
			func_472(7, 0);
			break;

		default: break;
		}
	}
	while (true) {
		unk1::_0x208784099002BC30("SF_VSM", 0);
		system::wait(0);
		func_456(Local_108.f_9, 0, 0, 0, 0, 0);
		if (func_485(Local_455)) {
			if (gameplay::get_game_timer() - iLocal_372 > 2000) {
				if (!iLocal_371) {
					func_455(Local_455, 0);
					func_497("Added Mark to headshot watch");
					iLocal_371 = 1;
				}
			}
		}
		if (iLocal_169 == 8) {
			func_448();
		}
		else {
			if (func_485(player::player_ped_id())) {
				switch (iLocal_169) {
				case 0: func_446(); break;

				case 1: func_440(); break;

				case 2: func_377(); break;

				case 3: func_367(); break;

				case 4: func_352(); break;

				case 5: func_324(); break;

				case 6: func_316(); break;

				case 9: func_314(); break;

				case 10: func_291(); break;

				case 7: func_36(); break;
				}
			}
			else {
				func_34(0);
			}
			if (iLocal_173 == 0) {
				func_1(iLocal_172);
			}
		}
	}
}

// Position - 0x46A
void func_1(int iParam0) {
	if (iLocal_169 == iParam0) {
		iLocal_173 = 1;
		if (iLocal_169 == 3) {
			func_33("N1D_TAKE", 7500, 5);
		}
		if (func_32()) {
			if (func_482() == 1) {
				func_30(Local_768, -1, 1);
			}
			else {
				func_30(0, -1, 1);
			}
		}
		func_17(1, 1, 1);
	}
	else {
		func_497("Still skipping...");
		func_2();
	}
}

// Position - 0x4C4
void func_2() {
	int iVar0;

	if (func_485(player::player_ped_id())) {
		ai::clear_ped_tasks_immediately(player::player_ped_id());
	}
	if (audio::is_scripted_conversation_ongoing()) {
		func_15();
	}
	switch (iLocal_169) {
	case 0:
		func_497("In INTRO_PHONECALL stage skip");
		if (iLocal_171 == 1) {
			if (func_14()) {
				func_12();
				func_10();
			}
			iLocal_359 = 1;
			iLocal_171 = 2;
		}
		break;

	case 1:
		func_497("In GO_TO_THE_GOLF_CLUB stage skip");
		if (func_9(1) && func_8(1) && func_7(1)) {
			if (!func_32()) {
				if (func_485(player::player_ped_id())) {
					entity::set_entity_coords(player::player_ped_id(), -1291.596f, -12.9214f, 48.5137f, 1, 0, 0, 1);
					entity::set_entity_heading(player::player_ped_id(), 303.114f);
				}
			}
		}
		break;

	case 2:
		func_497("Skipping MS_GO_TO_CELBRITY...");
		iLocal_350 = 0;
		if (func_14()) {
			func_15();
		}
		if (!func_32()) {
			if (func_485(player::player_ped_id())) {
				entity::set_entity_coords(player::player_ped_id(), -1190.22f, 36.83f, 52.03f, 1, 0, 0, 1);
				entity::set_entity_heading(player::player_ped_id(), 299f);
			}
		}
		break;

	case 3:
		func_497("In GO_TO_CELBRITY stage skip");
		if (func_14()) {
			func_15();
		}
		if (!func_32()) {
			if (func_485(player::player_ped_id())) {
				entity::set_entity_coords(player::player_ped_id(), -1102.455f, 73.615f, 53.2039f, 1, 0, 0, 1);
				entity::set_entity_heading(player::player_ped_id(), 238f);
			}
			if (func_6(Local_455)) {
				if (func_5(Local_749)) {
					if (!ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
						ped::set_ped_into_vehicle(Local_455, Local_749, -1);
					}
				}
			}
		}
		break;

	case 4:
		func_497("Skipping MS_CHASE_THE_GOLFER...");
		if (func_5(Local_749)) {
			if (ai::is_waypoint_playback_going_on_for_vehicle(Local_749)) {
				ai::vehicle_waypoint_playback_pause(Local_749);
			}
			entity::set_entity_coords(Local_749, -1246.956f, -89.9753f, 42.904f, 1, 0, 0, 1);
			entity::set_entity_heading(Local_749, 238f);
			if (func_6(Local_455)) {
				if (!ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
					ped::set_ped_into_vehicle(Local_455, Local_749, -1);
				}
			}
		}
		if (!func_32()) {
			if (func_5(Local_694[4 /*6*/])) {
				if (func_485(player::player_ped_id())) {
					if (!ped::is_ped_in_vehicle(player::player_ped_id(), Local_694[4 /*6*/], 0)) {
						ped::set_ped_into_vehicle(player::player_ped_id(), Local_694[4 /*6*/], -1);
					}
				}
				entity::set_entity_coords(Local_694[4 /*6*/], -1273.736f, -75.3014f, 44.6289f, 1, 0, 0, 1);
				entity::set_entity_heading(Local_694[4 /*6*/], 242f);
			}
			else {
				func_497("Skip buggy isn't okay, probably going to fail");
			}
		}
		iLocal_362 = 0;
		iLocal_171 = 2;
		break;

	case 5:
		func_497("Skipping MS_CHASE_IN_CITY...");
		if (func_5(Local_749)) {
			entity::set_entity_health(Local_749, 450);
			func_497("SKIPPED CITY CHASE SETTING HEALTH TO 450 ");
		}
		if (func_485(iLocal_777)) {
			if (entity::is_entity_attached(iLocal_777)) {
				entity::detach_entity(iLocal_777, 1, 1);
			}
		}
		func_4(&Local_455);
		iLocal_354 = 0;
		iLocal_362 = 0;
		func_3(&Local_749);
		system::wait(2000);
		iLocal_171 = 2;
		break;

	case 6:
		func_497("Skipping MS_COLLECT_GOLF_CLUB...");
		if (!func_32()) {
			if (func_485(player::player_ped_id())) {
				entity::set_entity_coords(player::player_ped_id(),
										  entity::get_entity_coords(iLocal_777, 1) + Vector(0f, 1.5f, 0f), 1, 0, 0, 1);
			}
		}
		iLocal_362 = 1;
		iLocal_171 = 2;
		break;

	case 7:
		if (iLocal_171 == 1) {
			if (func_14()) {
				func_12();
				func_10();
			}
			iLocal_359 = 1;
			iLocal_171 = 2;
		}
		break;

	case 9:
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_485(Local_481[iVar0 /*13*/])) {
				entity::set_entity_health(Local_481[iVar0 /*13*/], 0);
			}
			iVar0++;
		}
		break;

	case 10:
		if (player::is_player_playing(player::player_id())) {
			player::clear_player_wanted_level(player::player_id());
		}
		break;
	}
}

// Position - 0x880
void func_3(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		if (func_5(*iParam0)) {
			if (entity::is_entity_a_mission_entity(*iParam0) &&
				entity::does_entity_belong_to_this_script(*iParam0, 1)) {
				if (func_485(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
						entity::set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				vehicle::delete_vehicle(iParam0);
			}
		}
		else {
			if (func_485(player::player_ped_id())) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
					entity::set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			vehicle::delete_vehicle(iParam0);
		}
	}
}

// Position - 0x91C
void func_4(int iParam0) {
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

// Position - 0x95C
bool func_5(int iParam0) {
	if (func_485(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x986
bool func_6(int iParam0) {
	if (func_485(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x9A6
int func_7(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 2) {
		streaming::request_model(Local_521[iVar0 /*13*/].f_8);
		iVar0++;
	}
	if (iParam0 == 0) {
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (!streaming::has_model_loaded(Local_521[iVar0 /*13*/].f_8)) {
				return 0;
			}
			iVar0++;
		}
	}
	else {
		iVar1 = 0;
		while (iVar1 == 0) {
			system::wait(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 2) {
				if (!streaming::has_model_loaded(Local_521[iVar0 /*13*/].f_8)) {
					iVar1 = 0;
				}
				iVar0++;
			}
		}
	}
	return 1;
}

// Position - 0xA38
bool func_8(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 2) {
		streaming::request_model(Local_481[iVar0 /*13*/].f_8);
		iVar0++;
	}
	if (iParam0 == 0) {
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (!streaming::has_model_loaded(Local_481[iVar0 /*13*/].f_8)) {
				return false;
			}
			iVar0++;
		}
	}
	else {
		iVar1 = 0;
		while (iVar1 == 0) {
			system::wait(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 2) {
				if (!streaming::has_model_loaded(Local_481[iVar0 /*13*/].f_8)) {
					iVar1 = 0;
				}
				iVar0++;
			}
		}
	}
	return true;
}

// Position - 0xACA
bool func_9(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 3) {
		streaming::request_model(Local_402[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8) {
		streaming::request_model(Local_694[iVar0 /*6*/].f_5);
		iVar0++;
	}
	if (iParam0 == 0) {
		iVar0 = 0;
		while (iVar0 <= 3) {
			if (!streaming::has_model_loaded(Local_402[iVar0 /*13*/].f_8)) {
				return false;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 8) {
			if (!streaming::has_model_loaded(Local_694[iVar0 /*6*/].f_5)) {
				return false;
			}
			iVar0++;
		}
		if (!ai::get_is_waypoint_recording_loaded("NIGEL1DTRANS") ||
			!ai::get_is_waypoint_recording_loaded("NIGEL1DGOLF") ||
			!ai::get_is_waypoint_recording_loaded("NIGEL1DGOLF2") ||
			!ai::get_is_waypoint_recording_loaded("NIGEL1DCRASH")) {
			return false;
		}
	}
	else {
		iVar1 = 0;
		while (iVar1 == 0) {
			system::wait(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 3) {
				if (!streaming::has_model_loaded(Local_402[iVar0 /*13*/].f_8)) {
					iVar1 = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 8) {
				if (!streaming::has_model_loaded(Local_694[iVar0 /*6*/].f_5)) {
					iVar1 = 0;
				}
				iVar0++;
			}
			if (!ai::get_is_waypoint_recording_loaded("NIGEL1DTRANS") ||
				!ai::get_is_waypoint_recording_loaded("NIGEL1DGOLF") ||
				!ai::get_is_waypoint_recording_loaded("NIGEL1DGOLF2") ||
				!ai::get_is_waypoint_recording_loaded("NIGEL1DCRASH")) {
				iVar1 = 0;
			}
		}
	}
	return true;
}

// Position - 0xC44
void func_10() {
	Global_14611 = 0;
	func_11();
}

// Position - 0xC54
void func_11() {
	if (audio::is_mobile_phone_call_ongoing() || Global_14442 == 1) {
		audio::restart_scripted_conversation();
		Global_16756 = 0;
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
		Global_14443.f_1 = Global_14445;
		return;
	}
}

// Position - 0xC8B
void func_12() {
	Global_14611 = 0;
	func_13();
}

// Position - 0xC9B
void func_13() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0xCBC
bool func_14() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0xCDE
void func_15() {
	Global_14611 = 0;
	func_16();
}

// Position - 0xCEE
void func_16() {
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

// Position - 0xD45
void func_17(int iParam0, int iParam1, int iParam2) {
	func_19(0, 0, iParam2, 1);
	if (iParam0 == 1) {
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		cam::set_gameplay_cam_relative_heading(0f);
	}
	if (iParam1 == 1) {
		func_18(500, 0);
	}
}

// Position - 0xD79
void func_18(int iParam0, int iParam1) {
	if (cam::is_screen_faded_out() || cam::is_screen_fading_out()) {
		if (!cam::is_screen_fading_in()) {
			cam::do_screen_fade_in(iParam0);
		}
	}
	if (iParam1) {
		while (!cam::is_screen_faded_in()) {
			system::wait(0);
		}
	}
}

// Position - 0xDB5
void func_19(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = player::get_player_index();
	player::set_everyone_ignore_player(iVar0, 0);
	player::set_player_control(iVar0, iParam3, 0);
	func_20(0, 1, 0, 0);
	if (iParam2 == 1) {
		ui::display_radar(1);
		ui::display_hud(1);
	}
	ui::clear_help(1);
	if (iParam0 == 1) {
		cam::set_widescreen_borders(0, 0);
	}
	if (iParam1 == 1) {
		if (iLocal_48 != 0 && iLocal_48 != joaat("object") && iLocal_48 != joaat("gadget_parachute")) {
			if (func_485(player::player_ped_id())) {
				if (weapon::has_ped_got_weapon(player::player_ped_id(), iLocal_48, 0)) {
					weapon::set_current_ped_weapon(player::player_ped_id(), iLocal_48, 0);
				}
			}
		}
	}
	if (func_6(player::player_ped_id())) {
		ped::set_ped_stealth_movement(player::player_ped_id(), 0, 0);
	}
}

// Position - 0xE5C
void func_20(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_29(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_28()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_27(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_29(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_27(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_25(player::player_id()) &&
				!func_22(player::player_id(), 0) && !func_21()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_25(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0xF75
bool func_21() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0xF92
bool func_22(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_23(-1, 0) == 8;
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

// Position - 0xFDD
int func_23(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_24();
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

// Position - 0x101E
var func_24() { return Global_1312735; }

// Position - 0x102A
int func_25(int iParam0) {
	if (func_22(iParam0, 0)) {
		return 1;
	}
	if (func_26()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x106C
bool func_26() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x107D
int func_27(int iParam0, int iParam1, var uParam2, int iParam3) {
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

// Position - 0x10B0
bool func_28() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x10D7
void func_29(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}

// Position - 0x10FA
void func_30(int iParam0, int iParam1, int iParam2) {
	if (func_505() && func_32()) {
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
		func_31(0);
	}
}

// Position - 0x11BE
void func_31(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_91491.f_20, 13);
	}
	else {
		gameplay::clear_bit(&Global_91491.f_20, 13);
	}
}

// Position - 0x11E7
bool func_32() { return gameplay::is_bit_set(Global_91491.f_20, 13); }

// Position - 0x11FB
void func_33(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 1);
}

// Position - 0x1214
void func_34(int iParam0) {
	iLocal_377 = iParam0;
	func_35(8);
}

// Position - 0x1227
void func_35(int iParam0) {
	iLocal_169 = iParam0;
	iLocal_171 = 0;
}

// Position - 0x1236
void func_36() {
	int iVar0;

	switch (iLocal_171) {
	case 0:
		func_497("ENTERING END PHONECALL");
		iLocal_373 = gameplay::get_game_timer();
		if (func_485(player::player_ped_id())) {
			iVar0 = 0;
			while (iVar0 <= 2) {
				func_290(Local_481[iVar0 /*13*/], 0);
				func_289(&Local_481[iVar0 /*13*/].f_11);
				iVar0++;
			}
			func_289(&iLocal_339);
			func_288(&uLocal_174, 2);
			func_288(&uLocal_174, 3);
			func_288(&uLocal_174, 4);
			func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
			func_287(&uLocal_174, 3, 0, "NIGEL", 0, 1);
			func_287(&uLocal_174, 4, 0, "MRSTHORNHILL", 0, 1);
			iLocal_171 = 1;
			func_497("ENTERING END PHONECALL LOOP");
		}
		break;

	case 1:
		func_248();
		if (!func_14()) {
			if (!iLocal_359) {
				if (gameplay::get_game_timer() - iLocal_373 > 3000) {
					if (func_238(&uLocal_174, 64, "NIG1DAU", "NIG1D_OUTRO", 9, 1, 0, 0, 0)) {
						unk1::_0x293220DA1B46CEBC(4f, 10f, 1);
						iLocal_359 = 1;
					}
				}
			}
			else if (!func_14()) {
				if (func_237()) {
					iLocal_171 = 2;
				}
			}
		}
		break;

	case 2:
		func_497("CLEANUP END PHONECALL");
		ui::clear_prints();
		func_37();
		break;
	}
}

// Position - 0x1367
void func_37() {
	func_236(1);
	if (iLocal_370 == 1) {
		func_233(func_235(2), 12, 4, 1, 1);
	}
	func_38(99, 1);
	func_506(1);
}

// Position - 0x1396
void func_38(int iParam0, int iParam1) {
	int iVar0;
	char *sVar1;

	iVar0 = func_231();
	if (iVar0 == -1) {
		return;
	}
	if (!Global_100787[iVar0 /*10*/].f_4) {
		return;
	}
	if (Global_100787[iVar0 /*10*/].f_5) {
		return;
	}
	if (Global_100787[iVar0 /*10*/].f_6) {
		return;
	}
	func_202(iVar0, 0);
	gameplay::set_bit(&Global_69950, 1);
	if (Global_100787[iVar0 /*10*/].f_9 == -1) {
	}
	else {
		func_201(&Global_100787[iVar0 /*10*/].f_9);
	}
	if (iParam1) {
		if (player::is_player_playing(player::player_id())) {
			player::set_player_wanted_level(player::player_id(), 0, 0);
			player::set_player_wanted_level_now(player::player_id(), 0);
			player::start_firing_amnesty(5000);
		}
	}
	func_189(iVar0, 1, 0, 0);
	func_188(0, 0);
	MemCopy(&sVar1, {func_186(iVar0)}, 4);
	func_182(&sVar1, func_183());
	func_63();
	if (gameplay::is_bit_set(Global_101700.f_8975.f_25, 3)) {
		func_62();
	}
	func_45();
	if (iParam0 == 210 || iParam0 == 211) {
		func_40(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111) {
		func_40(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322) {
		func_40(iParam0, 0, 0);
	}
	func_39();
}

// Position - 0x14CD
int func_39() {
	if (func_484(0)) {
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

// Position - 0x1518
void func_40(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_44(891 + iParam0, 1, -1, 1);
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
		func_41();
	}
}

// Position - 0x1600
void func_41() {
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
		func_43(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_42() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_39();
				}
			}
		}
	}
}

// Position - 0x1AC1
int func_42() { return Global_25190; }

// Position - 0x1ACC
int func_43(int iParam0, int iParam1) {
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

// Position - 0x1B1D
int func_44(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_24();
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

// Position - 0x1EB1
void func_45() {
	func_61();
	func_53();
	func_49();
	func_48();
	func_47();
	func_46();
	Global_91528 = 0;
	Global_85999 = -1;
	gameplay::clear_bit(&Global_91491.f_20, 17);
	Global_91526 = 0;
	gameplay::_disable_automatic_respawn(0);
	gameplay::ignore_next_restart(0);
	gameplay::set_fade_in_after_death_arrest(1);
	gameplay::set_fade_out_after_arrest(1);
	gameplay::set_fade_out_after_death(1);
	func_31(0);
}

// Position - 0x1F0A
void func_46() {
	Global_69942 = {0f, 0f, 0f};
	Global_69945 = 0f;
	Global_91491.f_21 = 145;
}

// Position - 0x1F28
void func_47() {
	StringCopy(&Global_69934, "", 16);
	StringCopy(&Global_69938, "", 16);
}

// Position - 0x1F44
void func_48() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6) {
		Global_91491.f_22[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x1F69
void func_49() {
	Global_91491 = 13;
	Global_91491.f_1 = -1;
	Global_91491.f_2 = 0;
	Global_91491.f_30 = 0f;
	gameplay::clear_bit(&Global_91491.f_20, 25);
	Global_91525 = 0;
	func_52(0);
	func_51();
	func_50();
	Global_91491.f_18 = -1;
	Global_91491.f_19 = -1;
}

// Position - 0x1FB8
void func_50() {
	gameplay::clear_bit(&Global_91491.f_20, 22);
	gameplay::clear_bit(&Global_91491.f_20, 8);
}

// Position - 0x1FD8
void func_51() {
	if (Global_91491.f_16 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_91491.f_16);
		Global_91491.f_16 = 0;
	}
	if (Global_91491.f_17 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_91491.f_17);
		Global_91491.f_17 = 0;
	}
}

// Position - 0x2016
void func_52(int iParam0) {
	if (iParam0 == 1) {
		Global_36330 = 1;
	}
	else {
		Global_36330 = 0;
	}
}

// Position - 0x202F
void func_53() { func_54(&Global_96040); }

// Position - 0x203F
void func_54(var *uParam0) {
	int iVar0;
	int iVar1;

	*uParam0 = 145;
	func_60(&uParam0->f_1);
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3) {
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_59(&uParam0->f_25[0 /*295*/][iVar1 /*98*/]);
		func_59(&uParam0->f_25[1 /*295*/][iVar1 /*98*/]);
		iVar0 = 0;
		while (iVar0 < 12) {
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9) {
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4) {
			uParam0->f_1665[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10) {
			uParam0->f_1665[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15) {
			uParam0->f_1665[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1762[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3) {
			uParam0->f_2259[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			uParam0->f_1766[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_58(&uParam0->f_2305);
	func_56(&uParam0->f_2311);
	func_55(&uParam0->f_2401);
}

// Position - 0x2587
void func_55(var *uParam0) {
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

// Position - 0x25A2
void func_56(var *uParam0) {
	func_57(&uParam0->f_12);
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = {0f, 0f, 0f};
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

// Position - 0x25D1
void func_57(var *uParam0) {
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

// Position - 0x2682
void func_58(var *uParam0) {
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

// Position - 0x26A0
void func_59(var *uParam0) {
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11) {
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&uParam0->f_27, "", 16);
	iVar0 = 0;
	while (iVar0 <= 48) {
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

// Position - 0x2781
void func_60(int *iParam0) { *iParam0 = -15; }

// Position - 0x278F
void func_61() {
	StringCopy(&Global_93627, "", 32);
	func_54(&Global_93635);
}

// Position - 0x27A9
void func_62() {
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 0) {
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 0) {
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 0) {
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	gameplay::set_bit(&Global_2313, 25);
	gameplay::set_bit(&Global_2314, 11);
}

// Position - 0x2826
void func_63() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 8) {
		iVar1 = Global_89193[iVar0];
		if (entity::does_entity_exist(iVar1) && !ped::is_ped_injured(iVar1)) {
			iVar3 = func_181(iVar1);
			iVar2 = -99;
			switch (iVar3) {
			case 0: iVar2 = 112; break;

			case 1: iVar2 = 158; break;

			case 2: iVar2 = 154; break;
			}
			if (iVar2 != -99) {
				if (func_180(iVar1, 14, iVar2)) {
					func_64(iVar1, 14, iVar2);
				}
				if (Global_101700.f_2095.f_539[iVar3 /*65*/].f_39[2] == iVar2) {
					Global_101700.f_2095.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x28E7
int func_64(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar19;
	int iVar20;
	var uVar21;
	var uVar31;
	int iVar48;

	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_115(iVar0, iParam1, iParam2)};
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return 0;
	}
	if (!func_180(iParam0, iParam1, iParam2)) {
		return 0;
	}
	if (iParam1 == 12) {
		uVar2 = {func_111(iVar0, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 14) {
			if (uVar2[iVar1] != -99) {
				func_64(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13) {
		uVar21 = {func_108(iVar0, iParam2)};
		iVar19 = 0;
		while (iVar19 <= 8) {
			if (!func_64(iParam0, 14, uVar21[iVar19])) {
				iVar20 = 0;
			}
			iVar19++;
		}
		return iVar20;
	}
	else if (iParam1 == 14) {
		ped::clear_ped_prop(iParam0, Global_69523[1 /*14*/].f_12);
	}
	else {
		uVar31 = {func_111(iVar0, 0)};
		Global_69523[1 /*14*/] = {func_115(iVar0, iParam1, uVar31[iParam1])};
		if (ped::get_number_of_ped_drawable_variations(iParam0, func_107(iParam1)) > 0 &&
			ped::get_number_of_ped_texture_variations(iParam0, func_107(iParam1), Global_69523[1 /*14*/].f_3) > 0) {
			ped::set_ped_component_variation(iParam0, func_107(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, 0);
		}
	}
	if (func_106(iParam0, iVar0, &iVar48, 0)) {
		func_67(iParam0, 2, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_65(iParam0, iVar0, &iVar48)) {
		func_67(iParam0, 1, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

// Position - 0x2AA4
bool func_65(int iParam0, int iParam1, int *iParam2) {
	int iVar0;

	iVar0 = func_66(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 != -99) {
		if (!func_180(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_64,
					  Global_101700.f_2095.f_539[iVar0 /*65*/].f_63)) {
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

// Position - 0x2B30
int func_66(int iParam0) {
	switch (iParam0) {
	case joaat("player_zero"): return 0;

	case joaat("player_one"): return 1;

	case joaat("player_two"): return 2;

	default: break;
	}
	return 145;
}

// Position - 0x2B6B
int func_67(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int *iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var *uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;

	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	Global_69522++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = entity::get_entity_model(iParam0);
	if (iParam5 == 0) {
		Global_69523[1 /*14*/] = {func_115(iVar10, iParam1, iParam2)};
		if (!func_105(iParam3)) {
			Global_69522--;
			return 0;
		}
		func_98(iParam1);
	}
	if (iParam1 == 12) {
		if (iParam7 == 1) {
			if (iVar10 == joaat("player_one")) {
				iVar5 = func_96(iParam0, 8);
				if (iVar5 != 9) {
					iVar5 = -99;
				}
			}
			iVar6 = func_96(iParam0, 9);
			if (iVar10 == joaat("player_zero")) {
				if (iVar6 >= 9 && iVar6 <= 14) {
				}
				else {
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one")) {
				if (iVar6 >= 5 && iVar6 <= 10) {
				}
				else {
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two")) {
				if (iVar6 >= 9 && iVar6 <= 14 || iVar6 >= 15 && iVar6 <= 16) {
				}
				else {
					iVar6 = -99;
				}
			}
			iVar7 = func_95(iParam0, 1);
			if (!func_94(iVar10, 14, iVar7, -1)) {
				iVar7 = -99;
			}
			iVar8 = func_95(iParam0, 0);
			if (!func_93(iVar10, 14, iVar8, -1) && !func_92(iVar10, 14, iVar8, -1)) {
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one")) {
				iVar9 = func_95(iParam0, 2);
			}
		}
		ped::clear_all_ped_props(iParam0);
		uVar11 = 15;
		if (iParam5 == 1) {
			uVar11 = {Global_69566};
		}
		else {
			uVar11 = {func_111(iVar10, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14) {
			if (uVar11[iVar0] != -99) {
				Global_69523[1 /*14*/] = {func_115(iVar10, iVar0, uVar11[iVar0])};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
					if (iVar0 == 13) {
						uVar28 = 9;
						if (iParam5 == 1) {
							uVar28 = {Global_69583};
						}
						else {
							uVar28 = {func_108(iVar10, uVar11[iVar0])};
						}
						iVar1 = 0;
						while (iVar1 <= 8) {
							Global_69523[1 /*14*/] = {func_115(iVar10, 14, uVar28[iVar1])};
							func_83(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3,
									Global_69523[1 /*14*/].f_4);
							func_98(14);
							if (Global_69522 == 1) {
								iVar2 = 0;
								while (iVar2 < 15) {
									iVar3 = func_75(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99) {
										func_67(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12) {
						if (iVar10 == joaat("player_one") && iVar0 == 2 && uVar11[iVar0] == 20) {
							func_74(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1) {
							ped::set_ped_component_variation(iParam0, func_107(iVar0), Global_69523[1 /*14*/].f_3,
															 Global_69523[1 /*14*/].f_4,
															 ped::get_ped_palette_variation(iParam0, func_107(iVar0)));
						}
						else {
							ped::set_ped_component_variation(iParam0, func_107(iVar0), Global_69523[1 /*14*/].f_3,
															 Global_69523[1 /*14*/].f_4, iParam4);
						}
						func_98(iVar0);
						if (Global_69522 == 1) {
							iVar2 = 0;
							while (iVar2 < 15) {
								iVar3 = func_75(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99) {
									func_67(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14) {
				Global_69523[1 /*14*/] = {func_115(iVar10, iVar0, func_73(iParam0, iVar0, -1))};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 3)) {
					if (iVar0 == 2) {
						if (iVar10 == joaat("player_one")) {
							if (func_106(iParam0, iVar10, &iVar4, 1)) {
								func_67(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else {
						uVar38 = {func_111(iVar10, 0)};
						func_67(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1) {
			Var55 = {func_115(iVar10, 8, iVar5)};
			if (iVar5 != -99) {
				if (func_71(iVar10, iParam2, 8, iVar5, &uVar11, &Var55)) {
					func_67(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_115(iVar10, 9, iVar6)};
			if (iVar6 != -99) {
				if (func_71(iVar10, iParam2, 9, iVar6, &uVar11, &Var55)) {
					func_67(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_115(iVar10, 14, iVar7)};
			if (iVar7 != -99) {
				if (func_71(iVar10, iParam2, 14, iVar7, &uVar11, &Var55)) {
					func_67(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_115(iVar10, 14, iVar8)};
			if (iVar8 != -99) {
				if (func_71(iVar10, iParam2, 14, iVar8, &uVar11, &Var55)) {
					func_67(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_115(iVar10, 14, iVar9)};
			if (iVar9 != -99) {
				if (func_71(iVar10, iParam2, 14, iVar9, &uVar11, &Var55)) {
					func_67(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13) {
		uVar69 = {func_108(iVar10, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8) {
			Global_69523[1 /*14*/] = {func_115(iVar10, 14, uVar69[iVar1])};
			func_83(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
			func_98(14);
			if (Global_69522 == 1) {
				iVar2 = 0;
				while (iVar2 < 15) {
					iVar3 = func_75(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99) {
						func_67(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14) {
		func_83(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
		func_98(iParam1);
		if (Global_69522 == 1) {
			iVar2 = 0;
			while (iVar2 < 15) {
				iVar3 = func_75(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99) {
					func_67(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else {
		if (iParam4 == -1) {
			ped::set_ped_component_variation(iParam0, func_107(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4,
											 ped::get_ped_palette_variation(iParam0, func_107(iParam1)));
		}
		else {
			ped::set_ped_component_variation(iParam0, func_107(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, iParam4);
		}
		if (Global_69522 == 1) {
			iVar2 = 0;
			while (iVar2 < 15) {
				iVar3 = func_75(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99) {
					func_67(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0) {
			func_68(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69522 == 1) {
		if (func_106(iParam0, iVar10, &iVar4, 0)) {
			func_67(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_65(iParam0, iVar10, &iVar4)) {
			func_67(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_69522--;
	return 1;
}

// Position - 0x3377
void func_68(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (iParam0 == joaat("player_zero")) {
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one")) {
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two")) {
		iVar0 = 4;
	}
	if (func_70(iParam0, 12, iVar0)) {
		if (func_69(iParam0, iParam1, iParam2)) {
			iVar1 = func_66(iParam0);
			if (iParam1 == 3) {
				Global_101700.f_2095.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4) {
				Global_101700.f_2095.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

// Position - 0x3401
bool func_69(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == joaat("player_zero")) {
		if (iParam1 == 4) {
			if (iParam2 >= 47 && iParam2 <= 54) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 77 && iParam2 <= 84) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (iParam1 == 4) {
			if (iParam2 >= 14 && iParam2 <= 21) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 41 && iParam2 <= 56) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 4) {
			if (iParam2 >= 18 && iParam2 <= 29) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 54 && iParam2 <= 69) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x34DF
bool func_70(int iParam0, int iParam1, int iParam2) {
	Global_69523[1 /*14*/] = {func_115(iParam0, iParam1, iParam2)};
	return gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2);
}

// Position - 0x3509
bool func_71(int iParam0, int iParam1, int iParam2, int iParam3, var *uParam4, var *uParam5) {
	var uVar0;
	int iVar10;

	if ((*uParam4)[iParam2] == iParam3) {
		return true;
	}
	if ((*uParam4)[iParam2] == -99 && iParam2 != 14 && iParam2 != 13) {
		return true;
	}
	if (iParam2 == 13 || iParam2 == 14 && (*uParam4)[13] == 31) {
		if (iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 ||
			iParam3 == 6 || iParam3 == 7 || iParam3 == 8) {
			return true;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1) {
		return true;
	}
	if (iParam2 == 14) {
		uVar0 = {func_108(iParam0, (*uParam4)[13])};
		iVar10 = 0;
		while (iVar10 <= 8) {
			if (uVar0[iVar10] == iParam3) {
				return true;
			}
			iVar10++;
		}
	}
	if (func_72(iParam0, iParam2, iParam3)) {
		return true;
	}
	if (iParam0 == joaat("player_zero")) {
		if (func_94(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 18 ||
				iParam1 == 50) {
				return false;
			}
			return true;
		}
		else if (func_93(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 0) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
			}
			return true;
		}
		else if (func_92(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (func_94(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7) {
				return false;
			}
			return true;
		}
		else if (func_93(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				if (iParam2 == 8) {
					if (iParam3 == 9) {
						if (iParam1 == 8 || iParam1 == 21) {
							return true;
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
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 26) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 5 && iParam3 <= 10) {
						return false;
					}
				}
			}
			else if (iParam2 == 14) {
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 26 && iParam3 <= 39) {
						return false;
					}
				}
			}
			return true;
		}
		else if (func_92(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				return false;
			}
			return true;
		}
		else if (iParam2 == 14) {
			if (iParam3 >= 159 && iParam3 <= 174) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 2) {
			if (iParam2 == 14 && iParam3 == 0) {
				return true;
			}
		}
		if (func_94(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 6 || iParam1 == 8 || iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			return true;
		}
		else if (func_93(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 15) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
			}
			return true;
		}
		else if (func_92(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 12) {
				return false;
			}
			return true;
		}
	}
	return false;
}

// Position - 0x3B0D
bool func_72(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 15) {
				return true;
			}
			break;

		case 9:
			if (iParam2 == 6) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 1 || iParam2 == 10) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 4) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x3BA6
int func_73(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 == 12) {
			iVar0 = 0;
			while (iVar0 <= 53) {
				if (func_180(iParam0, iParam1, iVar0)) {
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13) {
			iVar1 = 0;
			while (iVar1 <= 19) {
				if (func_180(iParam0, iParam1, iVar1)) {
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14) {
			if (iParam2 == -1) {
			}
			else {
				return func_95(iParam0, iParam2);
			}
		}
		else {
			return func_96(iParam0, iParam1);
		}
	}
	return -99;
}

// Position - 0x3C47
int func_74(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;

	*iParam3 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 7 || iParam2 == 23) {
				*iParam3 = 1;
			}
			break;

		case 9:
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14) {
				*iParam3 = 1;
			}
			break;

		case 10:
			if (iParam2 >= 44 && iParam2 <= 47) {
				*iParam3 = 1;
			}
			break;

		case 14:
			if (iParam2 >= 31 && iParam2 <= 32 || iParam2 >= 33 && iParam2 <= 34 || iParam2 >= 35 && iParam2 <= 36 ||
				iParam2 == 37 || iParam2 >= 40 && iParam2 <= 41 || iParam2 == 46) {
				*iParam3 = 1;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 2:
			if (iParam2 == 20) {
				*iParam3 = 20;
			}
			break;

		case 8:
			if (iParam2 == 4) {
				*iParam3 = 19;
			}
			break;

		case 9:
			if (iParam2 >= 5 && iParam2 <= 10) {
				*iParam3 = 19;
			}
			break;

		case 10:
			if (iParam2 >= 47 && iParam2 <= 50) {
				*iParam3 = 19;
			}
			break;

		case 14:
			if (iParam2 >= 26 && iParam2 <= 27 || iParam2 >= 28 && iParam2 <= 29 || iParam2 >= 30 && iParam2 <= 31 ||
				iParam2 == 32 || iParam2 >= 35 && iParam2 <= 36) {
				*iParam3 = 19;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 7) {
				*iParam3 = 2;
			}
			break;

		case 9:
			if (iParam2 >= 9 && iParam2 <= 14 || iParam2 >= 15 && iParam2 <= 16) {
				*iParam3 = 2;
			}
			break;

		case 10:
			if (iParam2 >= 29 && iParam2 <= 32) {
				*iParam3 = 2;
			}
			break;

		case 14:
			if (iParam2 >= 47 && iParam2 <= 48 || iParam2 >= 49 && iParam2 <= 50 || iParam2 >= 51 && iParam2 <= 52 ||
				iParam2 == 53 || iParam2 >= 56 && iParam2 <= 57 || iParam2 == 62) {
				*iParam3 = 2;
			}
			break;
		}
		break;
	}
	if (*iParam3 != -99) {
		iVar0 = func_66(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

// Position - 0x3F4E
var func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int *iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = -99;
	if (iParam4 == 0) {
		switch (iParam2) {
		case 2:
			iVar1 = func_96(iParam0, 1);
			iVar0 = func_82(iParam1, iParam3, iVar1);
			break;

		case 1:
			iVar2 = func_96(iParam0, 2);
			iVar0 = func_82(iParam1, iVar2, iParam3);
			break;
		}
	}
	else if (iParam4 == 2) {
		func_74(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1) {
		func_81(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6) {
		if (iParam2 == 4) {
			if (func_80(iParam1, iParam3, &iVar0)) {
			}
		}
	}
	else {
		switch (iParam1) {
		case joaat("player_zero"):
			switch (iParam4) {
			case 3:
				switch (iParam2) {
				case 10:
					switch (iParam3) {
					case 36: iVar0 = 17; break;

					case 37: iVar0 = 17; break;

					case 38: iVar0 = 18; break;

					case 39: iVar0 = 18; break;

					case 40: iVar0 = 19; break;

					case 41: iVar0 = 19; break;

					case 42: iVar0 = 20; break;

					case 43: iVar0 = 20; break;
					}
					break;

				case 11:
					if (iParam3 >= 2 && iParam3 <= 7) {
						if (!func_79(iParam0, 3, 44, 59)) {
							iVar0 = 44;
						}
					}
					else if (iParam3 >= 8 && iParam3 <= 17 || iParam3 >= 18 && iParam3 <= 27 ||
							 iParam3 >= 28 && iParam3 <= 43) {
						if (!func_79(iParam0, 3, 135, 150)) {
							iVar0 = func_78(iParam1, 3, 135, 150);
						}
					}
					break;
				}
				break;

			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 63: iVar0 = 4; break;

					case 61: iVar0 = 3; break;

					case 16: iVar0 = 1; break;

					case 114: iVar0 = 15; break;

					case 115: iVar0 = 17; break;

					case 116: iVar0 = 16; break;

					case 117: iVar0 = 18; break;

					case 118: iVar0 = 20; break;

					case 119: iVar0 = 19; break;

					case 125: iVar0 = 21; break;

					case 120: iVar0 = 22; break;

					case 124: iVar0 = 23; break;

					case 126: iVar0 = 24; break;

					case 121: iVar0 = 25; break;

					case 127: iVar0 = 26; break;

					case 128: iVar0 = 27; break;

					case 85: iVar0 = 6; break;

					case 77: iVar0 = 7; break;

					case 78: iVar0 = 8; break;

					case 79: iVar0 = 9; break;

					case 80: iVar0 = 10; break;

					case 81: iVar0 = 11; break;

					case 82: iVar0 = 12; break;

					case 83: iVar0 = 13; break;

					case 84: iVar0 = 14; break;

					case 21: iVar0 = 31; break;

					case 22: iVar0 = 30; break;

					case 23: iVar0 = 29; break;

					case 24: iVar0 = 28; break;

					case 25: iVar0 = 33; break;

					case 26: iVar0 = 35; break;

					case 27: iVar0 = 34; break;

					case 28: iVar0 = 32; break;

					default:
						if (iParam3 >= 17 && iParam3 <= 20) {
						}
						else {
							iVar0 = 0;
						}
						break;
					}
					break;

				case 11:
					if (iParam3 != 0) {
						iVar0 = 0;
					}
					break;
				}
				break;

			case 11:
				if (iParam2 == 3) {
					if (iParam3 >= 44 && iParam3 <= 59 || iParam3 >= 135 && iParam3 <= 150) {
					}
					else {
						iVar0 = 0;
					}
				}
				else if (iParam2 == 10) {
					if (iParam3 >= 36 && iParam3 <= 43) {
						iVar0 = 0;
					}
				}
				break;
			}
			break;

		case joaat("player_one"):
			switch (iParam4) {
			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 17: iVar0 = 2; break;

					case 90: iVar0 = 1; break;

					case 268: iVar0 = 3; break;

					case 269: iVar0 = 5; break;

					case 270: iVar0 = 4; break;

					case 271: iVar0 = 6; break;

					case 272: iVar0 = 8; break;

					case 273: iVar0 = 7; break;

					case 279: iVar0 = 9; break;

					case 274: iVar0 = 10; break;

					case 278: iVar0 = 11; break;

					case 280: iVar0 = 12; break;

					case 275: iVar0 = 13; break;

					case 281: iVar0 = 14; break;

					case 282: iVar0 = 15; break;

					case 107: iVar0 = 16; break;

					case 108: iVar0 = 17; break;

					case 109: iVar0 = 18; break;

					case 110: iVar0 = 19; break;

					case 111: iVar0 = 20; break;

					case 112: iVar0 = 21; break;

					case 113: iVar0 = 22; break;

					case 114: iVar0 = 23; break;

					case 115: iVar0 = 24; break;

					case 116: iVar0 = 25; break;

					case 117: iVar0 = 52; break;

					case 118: iVar0 = 27; break;

					case 119: iVar0 = 28; break;

					case 120: iVar0 = 29; break;

					case 121: iVar0 = 30; break;

					case 122: iVar0 = 31; break;

					case 296: iVar0 = 32; break;

					case 297: iVar0 = 33; break;

					case 298: iVar0 = 34; break;

					case 299: iVar0 = 35; break;

					case 300: iVar0 = 36; break;

					case 301: iVar0 = 37; break;

					case 302: iVar0 = 38; break;

					case 309: iVar0 = 39; break;

					case 310: iVar0 = 40; break;

					case 311: iVar0 = 41; break;

					case 312: iVar0 = 42; break;

					case 313: iVar0 = 43; break;

					case 314: iVar0 = 44; break;

					case 315: iVar0 = 45; break;

					case 316: iVar0 = 46; break;

					case 317: iVar0 = 51; break;

					default: iVar0 = 0; break;
					}
					break;

				case 11:
					if (iParam3 != 0) {
						iVar0 = 0;
					}
					break;
				}
				break;

			case 3:
				switch (iParam2) {
				case 11:
					if (iParam3 >= 47 && iParam3 <= 62) {
						if (!func_79(iParam0, 3, 209, 222)) {
							iVar0 = func_78(iParam1, 3, 209, 222);
						}
					}
					else if (iParam3 >= 1 && iParam3 <= 4 || iParam3 >= 5 && iParam3 <= 8) {
						if (!func_79(iParam0, 3, 243, 258)) {
							if (iParam3 == 1 || iParam3 == 5) {
								iVar0 = func_78(iParam1, 3, 243, 246);
							}
							else if (iParam3 == 2 || iParam3 == 6) {
								iVar0 = func_78(iParam1, 3, 247, 250);
							}
							else if (iParam3 == 3 || iParam3 == 7) {
								iVar0 = func_78(iParam1, 3, 251, 254);
							}
							else if (iParam3 == 4 || iParam3 == 8) {
								iVar0 = func_78(iParam1, 3, 255, 258);
							}
						}
					}
					else if (iParam3 == 41 || iParam3 == 42) {
						if (!func_79(iParam0, 3, 176, 191) && !func_79(iParam0, 3, 227, 242)) {
							iVar0 = func_78(iParam1, 3, 176, 191);
						}
					}
					break;
				}
				break;

			case 8:
				if (iParam2 == 11 || iParam2 == 3) {
					if (iParam2 == 11) {
						iVar5 = iParam3;
						iVar4 = func_96(iParam0, 3);
					}
					else if (iParam2 == 3) {
						iVar4 = iParam3;
						iVar5 = func_96(iParam0, 11);
						iVar5 = func_77(iParam1, iVar4, iVar5, 0);
					}
					iVar3 = func_96(iParam0, 8);
					if (iVar5 >= 5 && iVar5 <= 8 || iVar5 >= 25 && iVar5 <= 40 || iVar5 >= 42 && iVar5 <= 43) {
						if (!func_76(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6)) {
							if (iVar6 != -99) {
								iVar0 = iVar6;
							}
						}
					}
					else if (iVar3 >= 27 && iVar3 <= 42 || iVar3 >= 43 && iVar3 <= 58 || iVar3 >= 59 && iVar3 <= 74) {
						iVar0 = 26;
					}
				}
				break;

			case 11:
				if (iParam2 == 3) {
					if (iParam3 >= 209 && iParam3 <= 222) {
					}
					else if (iParam3 >= 176 && iParam3 <= 191 || iParam3 >= 227 && iParam3 <= 242 ||
							 iParam3 >= 243 && iParam3 <= 258) {
						iVar7 = func_96(iParam0, 8);
						iVar8 = func_96(iParam0, 11);
						if (iVar7 >= 27 && iVar7 <= 42 || iVar7 >= 43 && iVar7 <= 58 || iVar7 >= 59 && iVar7 <= 74) {
							iVar0 = func_77(iParam1, iParam3, iVar8, 0);
						}
						else {
							iVar0 = func_77(iParam1, iParam3, iVar8, 1);
						}
					}
					else if (iParam3 >= 41 && iParam3 <= 56) {
						iVar0 = 45;
					}
					else if (iParam3 >= 223 && iParam3 <= 226) {
						iVar0 = 44;
					}
					else {
						iVar0 = 0;
					}
				}
				else if (iParam2 == 8) {
					if (iParam3 >= 27 && iParam3 <= 42 || iParam3 >= 43 && iParam3 <= 58 ||
						iParam3 >= 59 && iParam3 <= 74) {
						iVar9 = func_96(iParam0, 11);
						iVar0 = func_77(iParam1, -99, iVar9, 0);
					}
				}
				break;
			}
			break;

		case joaat("player_two"):
			switch (iParam4) {
			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 50: iVar0 = 3; break;

					case 81: iVar0 = 5; break;

					case 82: iVar0 = 6; break;

					case 83: iVar0 = 7; break;

					case 84: iVar0 = 10; break;

					case 85: iVar0 = 9; break;

					case 86: iVar0 = 8; break;

					case 92: iVar0 = 22; break;

					case 87: iVar0 = 23; break;

					case 91: iVar0 = 24; break;

					case 93: iVar0 = 25; break;

					case 88: iVar0 = 26; break;

					case 94: iVar0 = 27; break;

					case 120: iVar0 = 11; break;

					case 121: iVar0 = 13; break;

					case 122: iVar0 = 14; break;

					case 124: iVar0 = 12; break;

					case 126: iVar0 = 18; break;

					case 128: iVar0 = 17; break;

					case 130: iVar0 = 19; break;

					case 131: iVar0 = 16; break;

					case 134: iVar0 = 15; break;

					case 135: iVar0 = 20; break;

					default: iVar0 = 0; break;
					}
					break;
				}
				break;
			}
			break;
		}
	}
	return iVar0;
}

// Position - 0x4B13
int func_76(int iParam0, int iParam1, int iParam2, int iParam3, int *iParam4) {
	int iVar0;

	switch (iParam0) {
	case joaat("player_zero"): break;

	case joaat("player_one"):
		*iParam4 = 0;
		if (iParam1 >= 27 && iParam1 <= 42) {
			if (iParam2 != -99) {
				if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
				}
				else {
					if (iParam2 >= 42 && iParam2 <= 43) {
						if (iParam3 >= 176 && iParam3 <= 191) {
							iVar0 = iParam1 - 27;
							*iParam4 = 59 + iVar0;
						}
						else if (iParam3 >= 227 && iParam3 <= 242) {
							iVar0 = iParam1 - 27;
							*iParam4 = 43 + iVar0;
						}
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 227 && iParam3 <= 242 || iParam3 >= 176 && iParam3 <= 191 ||
					iParam3 >= 243 && iParam3 <= 258) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 43 && iParam1 <= 58) {
			if (iParam2 != -99) {
				if (iParam2 >= 42 && iParam2 <= 43) {
				}
				else {
					if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 43;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 227 && iParam3 <= 242) {
				}
				else {
					if (iParam3 >= 176 && iParam3 <= 191) {
						if (iParam2 >= 42 && iParam2 <= 43) {
							iVar0 = iParam1 - 43;
							*iParam4 = 59 + iVar0;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 59 && iParam1 <= 74) {
			if (iParam2 != -99) {
				if (iParam2 >= 42 && iParam2 <= 43) {
				}
				else {
					if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 59;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 176 && iParam3 <= 191) {
				}
				else {
					if (iParam3 >= 227 && iParam3 <= 242) {
						if (iParam2 >= 42 && iParam2 <= 43) {
							iVar0 = iParam1 - 59;
							*iParam4 = 43 + iVar0;
						}
					}
					else if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 59;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 12) {
			if (iParam3 != 241) {
				return 0;
			}
		}
		break;
	}
	return 1;
}

// Position - 0x4DF7
int func_77(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (iParam1 >= 243 && iParam1 <= 246) {
		if (iParam3 == 1) {
			return 1;
		}
		else {
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250) {
		if (iParam3 == 1) {
			return 2;
		}
		else {
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254) {
		if (iParam3 == 1) {
			return 3;
		}
		else {
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258) {
		if (iParam3 == 1) {
			return 4;
		}
		else {
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258) {
		if (iParam3 == 1) {
			return 4;
		}
		else {
			return 8;
		}
	}
	else if (iParam1 >= 176 && iParam1 <= 191 || iParam1 >= 227 && iParam1 <= 242) {
		if (iParam2 >= 9 && iParam2 <= 24) {
			if (iParam3 == 1) {
				return iParam2;
			}
			else {
				iVar0 = iParam2 - 9;
				iParam2 = 25 + iVar0;
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40) {
			if (iParam3 == 1) {
				iVar0 = iParam2 - 25;
				iParam2 = 9 + iVar0;
				return iParam2;
			}
			else {
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42) {
			if (iParam3 == 1) {
				return 41;
			}
			else {
				return 42;
			}
		}
		else {
			if (iParam3 == 1) {
				iParam2 = func_78(iParam0, 11, 9, 24);
			}
			else {
				iParam2 = func_78(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99) {
				if (iParam3 == 1) {
					return 41;
				}
				else {
					return 42;
				}
			}
			else {
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4) {
		if (iParam3 == 1) {
			return iParam2;
		}
		else {
			iVar0 = iParam2 - 1;
			iParam2 = 5 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8) {
		if (iParam3 == 1) {
			iVar0 = iParam2 - 5;
			iParam2 = 1 + iVar0;
			return iParam2;
		}
		else {
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24) {
		if (iParam3 == 1) {
			return iParam2;
		}
		else {
			iVar0 = iParam2 - 9;
			iParam2 = 25 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40) {
		if (iParam3 == 1) {
			iVar0 = iParam2 - 25;
			iParam2 = 9 + iVar0;
			return iParam2;
		}
		else {
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42) {
		if (iParam3 == 1) {
			return 41;
		}
		else {
			return 42;
		}
	}
	return -99;
}

// Position - 0x50BE
int func_78(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;

	iVar0 = iParam2;
	while (iVar0 <= iParam3 - 1) {
		iVar1 = iVar0;
		if (func_70(iParam0, iParam1, iVar1)) {
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

// Position - 0x50F5
int func_79(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = func_96(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3) {
		return 1;
	}
	return 0;
}

// Position - 0x511E
bool func_80(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 16 || iParam1 == 17 || iParam1 == 21 || iParam1 == 22 || iParam1 == 32 ||
			iParam1 >= 34 && iParam1 <= 39 || iParam1 >= 41 && iParam1 <= 45 || iParam1 == 46 ||
			iParam1 >= 47 && iParam1 <= 54 || iParam1 >= 55 && iParam1 <= 70 || iParam1 >= 72 && iParam1 <= 79 ||
			iParam1 == 80 || iParam1 >= 81 && iParam1 <= 83 || iParam1 >= 84 && iParam1 <= 87 || iParam1 == 88 ||
			iParam1 >= 89 && iParam1 <= 91 || iParam1 == 95 || iParam1 >= 96 && iParam1 <= 111 || iParam1 == 112) {
			*iParam2 = 6;
			return true;
		}
		break;

	case joaat("player_one"):
		if (iParam1 == 12 || iParam1 >= 14 && iParam1 <= 21 || iParam1 == 32 || iParam1 == 52 ||
			iParam1 >= 69 && iParam1 <= 70 || iParam1 == 71 || iParam1 >= 72 && iParam1 <= 77) {
			*iParam2 = 17;
			return true;
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 4 || iParam1 == 5 || iParam1 == 6 || iParam1 == 7 || iParam1 == 14 ||
			iParam1 >= 18 && iParam1 <= 29 || iParam1 == 31 || iParam1 == 32 || iParam1 == 33 || iParam1 == 34 ||
			iParam1 >= 35 && iParam1 <= 42 || iParam1 >= 43 && iParam1 <= 53 || iParam1 >= 54 && iParam1 <= 61 ||
			iParam1 >= 71 && iParam1 <= 80 || iParam1 >= 81 && iParam1 <= 90 || iParam1 >= 94 && iParam1 <= 103) {
			*iParam2 = 8;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x53E8
int func_81(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;

	*iParam3 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 10:
			if (iParam2 >= 44 && iParam2 <= 47) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 31 && iParam2 <= 32 || iParam2 >= 33 && iParam2 <= 34 || iParam2 >= 35 && iParam2 <= 36 ||
				iParam2 == 37 || iParam2 >= 38 && iParam2 <= 39 || iParam2 >= 40 && iParam2 <= 41 ||
				iParam2 >= 42 && iParam2 <= 44) {
				*iParam3 = 0;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 10:
			if (iParam2 >= 47 && iParam2 <= 50) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 26 && iParam2 <= 27 || iParam2 >= 28 && iParam2 <= 29 || iParam2 >= 30 && iParam2 <= 31 ||
				iParam2 == 32 || iParam2 >= 35 && iParam2 <= 36) {
				*iParam3 = 0;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 9:
			if (iParam2 >= 15 && iParam2 <= 16) {
				*iParam3 = 0;
			}
			break;

		case 10:
			if (iParam2 >= 29 && iParam2 <= 32) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 47 && iParam2 <= 48 || iParam2 >= 49 && iParam2 <= 50 || iParam2 >= 51 && iParam2 <= 52 ||
				iParam2 == 53 || iParam2 >= 54 && iParam2 <= 55 || iParam2 >= 56 && iParam2 <= 57 ||
				iParam2 >= 58 && iParam2 <= 60) {
				*iParam3 = 0;
			}
			break;
		}
		break;
	}
	if (*iParam3 != -99) {
		iVar0 = func_66(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

// Position - 0x5672
int func_82(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 1) {
			if (iParam2 == 0) {
				return 1;
			}
			else if (iParam2 == 4) {
				return 5;
			}
			else {
				return 3;
			}
		}
		else if (iParam2 == 0) {
			return 0;
		}
		else if (iParam2 == 4) {
			return 4;
		}
		else {
			return 2;
		}
		break;

	case joaat("player_one"):
		if (iParam1 >= 0 && iParam1 <= 15) {
			if (iParam2 == 0) {
				return 0;
			}
			else {
				return 3;
			}
		}
		else if (iParam1 >= 16 && iParam1 <= 17) {
			if (iParam2 == 0) {
				return 2;
			}
			else {
				return 5;
			}
		}
		else if (iParam1 == 18) {
			if (iParam2 == 0) {
				return 6;
			}
			else {
				return 7;
			}
		}
		else if (iParam1 == 19) {
			if (iParam2 == 0) {
				return 1;
			}
			else {
				return 4;
			}
		}
		else if (iParam2 == 0) {
			return 1;
		}
		else {
			return 4;
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 2) {
			if (iParam2 == 0) {
				return 2;
			}
			else {
				return 3;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 == 0) {
				return 4;
			}
			else {
				return 6;
			}
		}
		else if (iParam1 == 8) {
			return 5;
		}
		else if (iParam2 == 0) {
			return 0;
		}
		else {
			return 1;
		}
		break;
	}
	return -99;
}

// Position - 0x57C9
void func_83(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (iParam2 == -1) {
		ped::clear_ped_prop(iParam0, iParam1);
		if (iParam1 == 0) {
			ped::set_ped_config_flag(iParam0, 34, 0);
			ped::set_ped_config_flag(iParam0, 36, 0);
		}
	}
	else {
		ped::set_ped_prop_index(iParam0, iParam1, iParam2, iParam3, network::network_is_game_in_progress());
		if (iParam1 == 0) {
			iVar0 = func_88(iParam0, iParam2, iParam3, iParam1);
			if (func_84(entity::get_entity_model(iParam0), 14, iVar0,
						dlc1::get_hash_name_for_prop(iParam0, 0, iParam2, iParam3))) {
				ped::set_ped_config_flag(iParam0, 34, 1);
				ped::set_ped_config_flag(iParam0, 36, 1);
			}
			else {
				ped::set_ped_config_flag(iParam0, 34, 0);
				ped::set_ped_config_flag(iParam0, 36, 0);
			}
		}
	}
}

// Position - 0x5861
bool func_84(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_85(iParam0, iParam2, 14, 3);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_85(iParam0, iParam2, 14, 4);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x592F
int func_85(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = iParam1 - func_87(iParam0);
		if (iVar19 < 0) {
			return -1;
		}
		iVar20 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iVar18 == iVar19) {
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var21);
		iVar39 = 0;
		iVar40 = iParam1 - func_86(iParam0, func_107(iParam2));
		if (iVar40 < 0) {
			return -1;
		}
		if (iParam0 == Global_69645.f_26[iParam2] && iParam1 == Global_69645[iParam2] &&
			Global_69645.f_13[iParam2] != 0) {
			return Global_69645.f_13[iParam2];
		}
		iVar41 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_107(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41) {
			dlc1::get_shop_ped_query_component(iVar38, &Var21);
			if (!dlc1::_is_dlc_data_empty(Var21)) {
				if (iVar39 == iVar40) {
					Global_69645.f_13[iParam2] = Var21.f_1;
					Global_69645[iParam2] = iParam1;
					Global_69645.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

// Position - 0x5A8B
int func_86(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 5;

		case 2: return 6;

		case 3: return 181;

		case 4: return 113;

		case 5: return 14;

		case 6: return 99;

		case 7: return 1;

		case 8: return 24;

		case 9: return 20;

		case 10: return 48;

		case 11: return 45;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 5;

		case 2: return 21;

		case 3: return 318;

		case 4: return 117;

		case 5: return 7;

		case 6: return 134;

		case 7: return 1;

		case 8: return 77;

		case 9: return 12;

		case 10: return 53;

		case 11: return 63;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 6;

		case 2: return 9;

		case 3: return 242;

		case 4: return 104;

		case 5: return 7;

		case 6: return 84;

		case 7: return 1;

		case 8: return 18;

		case 9: return 17;

		case 10: return 33;

		case 11: return 1;
		}
		break;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 91;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 92;

		case 8: return 241;

		case 9: return 46;

		case 10: return 7;

		case 11: return 237;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 92;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 55;

		case 8: return 136;

		case 9: return 36;

		case 10: return 6;

		case 11: return 256;
		}
		break;
	}
	return -99;
}

// Position - 0x5E32
int func_87(int iParam0) {
	switch (iParam0) {
	case joaat("player_zero"): return 113;

	case joaat("player_one"): return 175;

	case joaat("player_two"): return 155;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"): return 327;

	case joaat("mp_f_freemode_01"): return 327;
	}
	return -99;
}

// Position - 0x5E93
int func_88(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1) {
		return func_91(iParam3);
	}
	iVar0 = entity::get_entity_model(iParam0);
	iVar1 = dlc1::get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0) {
		if (iVar0 == joaat("mp_m_freemode_01")) {
			return func_90(entity::get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			return func_90(entity::get_entity_model(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = ped::get_number_of_ped_prop_drawable_variations(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= iVar2 - 1) {
		iVar6 = ped::get_number_of_ped_prop_texture_variations(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1) {
			iVar3 += iVar6;
		}
		else {
			iVar5 = 0;
			while (iVar5 <= iVar6 - 1) {
				if (iVar4 == iParam1 && iVar5 == iParam2) {
					iVar3 += func_89(iParam0, iParam3);
					return iVar3;
				}
				else {
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_91(iParam3);
}

// Position - 0x5F8F
int func_89(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = entity::get_entity_model(iParam0);
	switch (iVar0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 58;

		case 2: return 112;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 82;

		case 2: return 158;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 88;

		case 2: return 154;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;
	}
	return -99;
}

// Position - 0x60CD
int func_90(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iParam1 == Var0.f_1) {
					return func_87(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_107(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39) {
			dlc1::get_shop_ped_query_component(iVar37, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iParam1 == Var20.f_1) {
					return func_86(iParam0, func_107(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

// Position - 0x61AD
int func_91(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;
	}
	return 0;
}

// Position - 0x6233
bool func_92(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 16) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 40 || iParam2 >= 41 && iParam2 <= 56 || iParam2 >= 64 && iParam2 <= 79) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 17 && iParam2 <= 18 || iParam2 >= 71 && iParam2 <= 86) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_85(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_85(iParam0, iParam2, 14, 3), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_85(iParam0, iParam2, 1, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_85(iParam0, iParam2, 1, 3), -1842686353, 0);
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_85(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_85(iParam0, iParam2, 14, 4), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_85(iParam0, iParam2, 1, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_85(iParam0, iParam2, 1, 4), -1842686353, 0);
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x64B0
bool func_93(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0 == joaat("player_zero")) {
		if (iParam1 == 6) {
			if (iParam2 == 10) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 9 || iParam2 == 7 || iParam2 == 23) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 9 && iParam2 <= 14) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 12 || iParam2 == 59 || iParam2 == 60 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 ||
				iParam2 == 34 || iParam2 == 35 || iParam2 == 36 || iParam2 == 37 || iParam2 == 38 || iParam2 == 39 ||
				iParam2 == 40 || iParam2 == 41 || iParam2 >= 42 && iParam2 <= 44 || iParam2 == 54 || iParam2 == 55) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (iParam1 == 2) {
			if (iParam2 == 20) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 3 || iParam2 == 5 || iParam2 == 9) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 5 && iParam2 <= 10) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 82 || iParam2 == 10 || iParam2 == 26 || iParam2 == 27 || iParam2 == 28 || iParam2 == 29 ||
				iParam2 == 30 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 || iParam2 == 34 || iParam2 == 35 ||
				iParam2 == 36 || iParam2 >= 37 && iParam2 <= 39) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 8) {
			if (iParam2 == 14 || iParam2 == 7) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14 || iParam2 == 15 || iParam2 == 16) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 88 || iParam2 == 12 || iParam2 == 47 || iParam2 == 48 || iParam2 == 49 || iParam2 == 50 ||
				iParam2 == 51 || iParam2 == 52 || iParam2 == 53 || iParam2 == 54 || iParam2 == 55 || iParam2 == 56 ||
				iParam2 == 57 || iParam2 >= 58 && iParam2 <= 60) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_85(iParam0, iParam2, 1, 3);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_85(iParam0, iParam2, 1, 4);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

// Position - 0x68B1
bool func_94(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 14) {
			if (iParam2 == 58 || iParam2 == 61 || iParam2 >= 62 && iParam2 <= 69 || iParam2 >= 70 && iParam2 <= 79 ||
				iParam2 >= 80 && iParam2 <= 89 || iParam2 == 90 || iParam2 >= 91 && iParam2 <= 102 ||
				iParam2 >= 103 && iParam2 <= 110 || iParam2 == 111) {
				return true;
			}
		}
		break;

	case joaat("player_one"):
		if (iParam1 == 14) {
			if (iParam2 >= 83 && iParam2 <= 92 || iParam2 == 93 || iParam2 == 94 || iParam2 >= 95 && iParam2 <= 101 ||
				iParam2 >= 102 && iParam2 <= 111 || iParam2 >= 112 && iParam2 <= 121 ||
				iParam2 >= 122 && iParam2 <= 131 || iParam2 >= 132 && iParam2 <= 139 ||
				iParam2 >= 140 && iParam2 <= 149 || iParam2 >= 150 && iParam2 <= 156 || iParam2 == 157) {
				return true;
			}
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 14) {
			if (iParam2 == 89 || iParam2 >= 90 && iParam2 <= 99 || iParam2 >= 100 && iParam2 <= 109 || iParam2 == 111 ||
				iParam2 == 112 || iParam2 >= 113 && iParam2 <= 122 || iParam2 >= 123 && iParam2 <= 132 ||
				iParam2 >= 133 && iParam2 <= 142 || iParam2 >= 143 && iParam2 <= 152 || iParam2 == 153) {
				return true;
			}
		}
		break;

	case joaat("mp_m_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_85(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_85(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;
	}
	return false;
}

// Position - 0x6BA4
int func_95(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = ped::get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1) {
		return func_91(iParam1);
	}
	iVar1 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	return func_88(iParam0, iVar0, iVar1, iParam1);
}

// Position - 0x6BEA
int func_96(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = func_107(iParam1);
	iVar1 = ped::get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = ped::get_ped_texture_variation(iParam0, iVar0);
	return func_97(iParam0, iVar1, iVar2, iParam1);
}

// Position - 0x6C4A
int func_97(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_107(iParam3);
	iVar1 = ped::get_number_of_ped_drawable_variations(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= iVar1 - 1) {
		iVar5 = ped::get_number_of_ped_texture_variations(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1) {
			iVar2 += iVar5;
		}
		else {
			iVar4 = 0;
			while (iVar4 <= iVar5 - 1) {
				if (iVar3 == iParam1 && iVar4 == iParam2) {
					return iVar2;
				}
				else {
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

// Position - 0x6CCE
void func_98(int iParam0) {
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		func_104(iParam0, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 2, Global_69523[1 /*14*/].f_1, 1, 0);
	}
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1) && gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam0 == 12) {
			func_99(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13) {
		}
		else if (iParam0 == 14) {
			func_99(Global_2621444, 2, 1, 1, -1);
		}
		else {
			func_99(Global_2621444, 2, 1, 1, -1);
		}
	}
}

// Position - 0x6D86
void func_99(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_103(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_102(iVar2, iVar0, 0);
		gameplay::set_bit(&iVar3, iVar1);
		func_100(iVar2, iVar3, iVar0, 1, 0);
	}
}

// Position - 0x6DD0
void func_100(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_101(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x6E00
int func_101(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_24();
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

// Position - 0x6E34
int func_102(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_101(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x6E66
bool func_103(int iParam0, int iParam1, int *iParam2, int *iParam3, bool bParam4, bool bParam5) {
	int iVar0;

	*iParam2 = 6022;
	if (bParam4 && Global_2592887 || !bParam4 && bParam5) {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;

			case -1071423629:
			case -1382822784:
			case 385813134:
				*iParam2 = 930;
				*iParam3 = 0;
				return true;

			case -833094692:
			case -1731353868:
			case 675392787:
				*iParam2 = 930;
				*iParam3 = 1;
				return true;

			case -1836153782:
			case -1960638561:
			case -238272479:
				*iParam2 = 930;
				*iParam3 = 2;
				return true;

			case -1598414687:
			case 147161830:
			case 67757212:
				*iParam2 = 930;
				*iParam3 = 3;
				return true;

			case 123661793:
			case -92608943:
			case -536372072:
				*iParam2 = 930;
				*iParam3 = 4;
				return true;

			case 330958487:
			case -162931217:
			case -247578875:
				*iParam2 = 930;
				*iParam3 = 5;
				return true;

			case -142717408:
			case 1665087452:
			case -854821214:
				*iParam2 = 930;
				*iParam3 = 7;
				return true;

			case 1290696959:
			case 1012984348:
			case -1458295118:
				*iParam2 = 930;
				*iParam3 = 8;
				return true;

			case 2059568454:
			case 933072050:
			case -1454802604:
				*iParam2 = 930;
				*iParam3 = 11;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	else {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	iVar0 = -1;
	if (bParam4) {
		if (Global_2592887) {
			iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else {
			iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5) {
		iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else {
		iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1) {
		return false;
	}
	switch (iParam1) {
	case 1:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1753; break;

		case 1: *iParam2 = 1754; break;

		case 2: *iParam2 = 1755; break;

		case 3: *iParam2 = 1756; break;

		case 4: *iParam2 = 1757; break;

		case 5: *iParam2 = 1758; break;

		case 6: *iParam2 = 1765; break;

		case 7: *iParam2 = 1766; break;

		case 8: *iParam2 = 1767; break;

		case 9: *iParam2 = 1768; break;

		case 10: *iParam2 = 1769; break;

		case 11: *iParam2 = 1770; break;

		case 12: *iParam2 = 1771; break;

		case 13: *iParam2 = 1779; break;

		case 14: *iParam2 = 1780; break;

		case 15: *iParam2 = 1881; break;

		case 16: *iParam2 = 1882; break;

		case 17: *iParam2 = 1913; break;

		case 18: *iParam2 = 1927; break;

		case 19: *iParam2 = 1928; break;

		case 20: *iParam2 = 1929; break;

		case 21: *iParam2 = 1930; break;

		case 22: *iParam2 = 1931; break;

		case 23: *iParam2 = 2035; break;

		case 24: *iParam2 = 2036; break;

		case 25: *iParam2 = 2062; break;

		case 26: *iParam2 = 2063; break;

		case 27: *iParam2 = 2064; break;

		case 28: *iParam2 = 2065; break;

		case 29: *iParam2 = 2066; break;

		case 30: *iParam2 = 2067; break;

		case 31: *iParam2 = 2068; break;

		case 32: *iParam2 = 2069; break;

		case 33: *iParam2 = 2070; break;

		case 34: *iParam2 = 2071; break;

		case 35: *iParam2 = 2318; break;

		case 36: *iParam2 = 2319; break;

		case 37: *iParam2 = 2371; break;

		case 38: *iParam2 = 2372; break;

		case 39: *iParam2 = 2373; break;

		case 40: *iParam2 = 2374; break;

		case 41: *iParam2 = 2433; break;

		case 42: *iParam2 = 2434; break;

		case 43: *iParam2 = 2435; break;

		case 44: *iParam2 = 2436; break;

		case 45: *iParam2 = 2437; break;

		case 46: *iParam2 = 2438; break;

		case 47: *iParam2 = 2439; break;

		case 48: *iParam2 = 2440; break;

		case 49: *iParam2 = 2441; break;

		case 50: *iParam2 = 2442; break;

		case 51: *iParam2 = 2571; break;

		case 52: *iParam2 = 2572; break;

		case 53: *iParam2 = 2573; break;

		case 54: *iParam2 = 2574; break;

		case 55: *iParam2 = 2575; break;

		case 56: *iParam2 = 2576; break;

		case 57: *iParam2 = 2577; break;

		case 58: *iParam2 = 2578; break;

		case 59: *iParam2 = 2579; break;

		case 60: *iParam2 = 2580; break;

		case 61: *iParam2 = 2581; break;

		case 62: *iParam2 = 3178; break;

		case 63: *iParam2 = 3179; break;

		case 64: *iParam2 = 3180; break;

		case 65: *iParam2 = 3181; break;

		case 66: *iParam2 = 3182; break;

		case 67: *iParam2 = 3183; break;

		case 68: *iParam2 = 3651; break;

		case 69: *iParam2 = 3652; break;

		case 70: *iParam2 = 3653; break;

		case 71: *iParam2 = 3654; break;

		case 72: *iParam2 = 3655; break;

		case 73: *iParam2 = 3656; break;

		case 74: *iParam2 = 3657; break;

		case 75: *iParam2 = 3658; break;

		case 76: *iParam2 = 3659; break;

		case 77: *iParam2 = 3660; break;

		case 78: *iParam2 = 3764; break;

		case 79: *iParam2 = 3765; break;

		case 80: *iParam2 = 3766; break;

		case 81: *iParam2 = 3767; break;

		case 82: *iParam2 = 3768; break;

		case 83: *iParam2 = 3769; break;

		case 84: *iParam2 = 3770; break;

		case 85: *iParam2 = 3771; break;

		case 86: *iParam2 = 3874; break;

		case 87: *iParam2 = 3875; break;

		case 88: *iParam2 = 3876; break;

		case 89: *iParam2 = 5309; break;

		case 90: *iParam2 = 5310; break;

		case 91: *iParam2 = 5311; break;

		case 92: *iParam2 = 5312; break;

		case 93: *iParam2 = 5313; break;

		case 94: *iParam2 = 5314; break;

		case 95: *iParam2 = 5315; break;

		case 96: *iParam2 = 5316; break;

		case 97: *iParam2 = 5317; break;

		case 98: *iParam2 = 5318; break;

		case 99: *iParam2 = 5319; break;

		case 100: *iParam2 = 5320; break;

		default: break;
		}
		break;

	case 2:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1759; break;

		case 1: *iParam2 = 1760; break;

		case 2: *iParam2 = 1761; break;

		case 3: *iParam2 = 1762; break;

		case 4: *iParam2 = 1763; break;

		case 5: *iParam2 = 1764; break;

		case 6: *iParam2 = 1772; break;

		case 7: *iParam2 = 1773; break;

		case 8: *iParam2 = 1774; break;

		case 9: *iParam2 = 1775; break;

		case 10: *iParam2 = 1776; break;

		case 11: *iParam2 = 1777; break;

		case 12: *iParam2 = 1778; break;

		case 13: *iParam2 = 1781; break;

		case 14: *iParam2 = 1782; break;

		case 15: *iParam2 = 1883; break;

		case 16: *iParam2 = 1884; break;

		case 17: *iParam2 = 1914; break;

		case 18: *iParam2 = 1932; break;

		case 19: *iParam2 = 1933; break;

		case 20: *iParam2 = 1934; break;

		case 21: *iParam2 = 1935; break;

		case 22: *iParam2 = 1936; break;

		case 23: *iParam2 = 2037; break;

		case 24: *iParam2 = 2038; break;

		case 25: *iParam2 = 2072; break;

		case 26: *iParam2 = 2073; break;

		case 27: *iParam2 = 2074; break;

		case 28: *iParam2 = 2075; break;

		case 29: *iParam2 = 2076; break;

		case 30: *iParam2 = 2077; break;

		case 31: *iParam2 = 2078; break;

		case 32: *iParam2 = 2079; break;

		case 33: *iParam2 = 2080; break;

		case 34: *iParam2 = 2081; break;

		case 35: *iParam2 = 2320; break;

		case 36: *iParam2 = 2321; break;

		case 37: *iParam2 = 2375; break;

		case 38: *iParam2 = 2376; break;

		case 39: *iParam2 = 2377; break;

		case 40: *iParam2 = 2378; break;

		case 41: *iParam2 = 2443; break;

		case 42: *iParam2 = 2444; break;

		case 43: *iParam2 = 2445; break;

		case 44: *iParam2 = 2446; break;

		case 45: *iParam2 = 2447; break;

		case 46: *iParam2 = 2448; break;

		case 47: *iParam2 = 2449; break;

		case 48: *iParam2 = 2450; break;

		case 49: *iParam2 = 2451; break;

		case 50: *iParam2 = 2452; break;

		case 51: *iParam2 = 2582; break;

		case 52: *iParam2 = 2583; break;

		case 53: *iParam2 = 2584; break;

		case 54: *iParam2 = 2585; break;

		case 55: *iParam2 = 2586; break;

		case 56: *iParam2 = 2587; break;

		case 57: *iParam2 = 2588; break;

		case 58: *iParam2 = 2589; break;

		case 59: *iParam2 = 2590; break;

		case 60: *iParam2 = 2591; break;

		case 61: *iParam2 = 2592; break;

		case 62: *iParam2 = 3184; break;

		case 63: *iParam2 = 3185; break;

		case 64: *iParam2 = 3186; break;

		case 65: *iParam2 = 3187; break;

		case 66: *iParam2 = 3188; break;

		case 67: *iParam2 = 3189; break;

		case 68: *iParam2 = 3661; break;

		case 69: *iParam2 = 3662; break;

		case 70: *iParam2 = 3663; break;

		case 71: *iParam2 = 3664; break;

		case 72: *iParam2 = 3665; break;

		case 73: *iParam2 = 3666; break;

		case 74: *iParam2 = 3667; break;

		case 75: *iParam2 = 3668; break;

		case 76: *iParam2 = 3669; break;

		case 77: *iParam2 = 3670; break;

		case 78: *iParam2 = 3772; break;

		case 79: *iParam2 = 3773; break;

		case 80: *iParam2 = 3774; break;

		case 81: *iParam2 = 3775; break;

		case 82: *iParam2 = 3776; break;

		case 83: *iParam2 = 3777; break;

		case 84: *iParam2 = 3778; break;

		case 85: *iParam2 = 3779; break;

		case 86: *iParam2 = 3877; break;

		case 87: *iParam2 = 3878; break;

		case 88: *iParam2 = 3879; break;

		case 89: *iParam2 = 5321; break;

		case 90: *iParam2 = 5322; break;

		case 91: *iParam2 = 5323; break;

		case 92: *iParam2 = 5324; break;

		case 93: *iParam2 = 5325; break;

		case 94: *iParam2 = 5326; break;

		case 95: *iParam2 = 5327; break;

		case 96: *iParam2 = 5328; break;

		case 97: *iParam2 = 5329; break;

		case 98: *iParam2 = 5330; break;

		case 99: *iParam2 = 5331; break;

		case 100: *iParam2 = 5332; break;

		default: break;
		}
		break;
	}
	*iParam3 = iVar0 % 32;
	return *iParam2 != 6022;
}

// Position - 0x8057
bool func_104(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	if (iParam0 == 0) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

// Position - 0x8F75
int func_105(int iParam0) {
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return 0;
	}
	if (iParam0 == 1) {
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
			return 0;
		}
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2)) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x8FC6
bool func_106(int iParam0, int iParam1, int *iParam2, int iParam3) {
	int iVar0;

	iVar0 = func_66(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 != -99) {
		if (!func_180(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_61,
					  Global_101700.f_2095.f_539[iVar0 /*65*/].f_60) ||
			iParam3 == 1) {
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

// Position - 0x905C
int func_107(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0x910C
struct<10> func_108(int iParam0, int iParam1) {
	int iVar0;
	struct<10> Var1;

	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 31: func_110(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_110(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_110(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_110(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_110(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_110(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8); break;

		case 5: func_110(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8); break;

		case 6: func_110(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_110(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_110(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_110(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8); break;

		default: func_109(&Var1, iParam0, iParam1, 10); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 31: func_110(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_110(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_110(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8); break;

		case 2: func_110(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8); break;

		case 3: func_110(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_110(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_110(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_110(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_110(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_110(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_109(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 31: func_110(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_110(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_110(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_110(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_110(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8); break;

		case 4: func_110(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8); break;

		case 5: func_110(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_110(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_110(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_110(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_109(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 31: func_110(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_110(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_110(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_110(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_110(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_110(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_110(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_110(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_110(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_110(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_110(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_110(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_110(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_110(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_110(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 14: func_110(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_110(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_110(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_110(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_110(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_110(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_110(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_110(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_110(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_110(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 24: func_110(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_109(&Var1, iParam0, iParam1, 25); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 31: func_110(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_110(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_110(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_110(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_110(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_110(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_110(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_110(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_110(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_110(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_110(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_110(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_110(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_110(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_110(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8); break;

		case 14: func_110(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_110(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_110(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_110(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_110(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_110(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_110(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_110(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_110(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_110(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_109(&Var1, iParam0, iParam1, 25); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x9A3B
void func_109(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;

	if (iParam2 != 0 && iParam2 != -99) {
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero")) {
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one")) {
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two")) {
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01")) {
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01")) {
			iVar0 = 4;
		}
		dlc1::get_shop_ped_outfit(iParam2, &Var1);
		if (!dlc1::_is_dlc_data_empty(Var1)) {
			iVar19 = 0;
			while (iVar19 < Var1.f_3) {
				if (dlc1::_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1) {
					if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
						(*iParam0)[vVar16.z] = func_90(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1) {
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

// Position - 0x9B65
void func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9) {
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

// Position - 0x9BAD
struct<17> func_111(int iParam0, int iParam1) {
	int iVar0;
	struct<17> Var1;

	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0:
			if (Global_101700.f_8044.f_99.f_58[120]) {
				func_114(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			else {
				func_114(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			break;

		case 1: func_114(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0); break;

		case 2: func_114(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8); break;

		case 3: func_114(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31); break;

		case 4: func_114(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2); break;

		case 5:
			func_114(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[0], Global_101700.f_2095.f_539.f_200[0], 6, 3, 0,
					 0, 0, -99, 0, 0, 3);
			break;

		case 6: func_114(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_114(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 8: func_114(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 9: func_114(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 10: func_114(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4); break;

		case 11: func_114(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5); break;

		case 12: func_114(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31); break;

		case 13: func_114(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 14: func_114(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6); break;

		case 15: func_114(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31); break;

		case 16: func_114(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31); break;

		case 17: func_114(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 18: func_114(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7); break;

		case 19: func_114(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 20: func_114(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 21: func_114(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_114(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 23: func_114(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31); break;

		case 24: func_114(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31); break;

		case 25: func_114(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 26: func_114(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 27: func_114(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 28: func_114(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 29: func_114(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 30: func_114(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 31: func_114(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31); break;

		case 32: func_114(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 33: func_114(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 34: func_114(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31); break;

		case 35: func_114(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 36: func_114(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 37: func_114(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 38: func_114(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 39: func_114(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 40: func_114(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 41: func_114(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_114(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_114(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_114(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 45: func_114(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 46: func_114(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_114(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 48: func_114(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31); break;

		case 49: func_114(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 50: func_114(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9); break;

		case 51: func_114(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 52: func_114(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		default: func_112(&Var1, iParam0, iParam1, 53); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: func_114(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 1: func_114(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 2:
			func_114(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[1], Global_101700.f_2095.f_539.f_200[1], 17, 2,
					 26, 0, 0, -99, 0, 45, 31);
			break;

		case 3: func_114(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1); break;

		case 4: func_114(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2); break;

		case 5: func_114(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 6: func_114(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_114(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3); break;

		case 8: func_114(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5); break;

		case 9: func_114(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 10: func_114(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 11: func_114(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 12: func_114(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 13: func_114(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 14: func_114(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 15: func_114(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 16: func_114(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 17: func_114(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 18: func_114(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31); break;

		case 19: func_114(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 20: func_114(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 21: func_114(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4); break;

		case 22: func_114(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31); break;

		case 23: func_114(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31); break;

		case 24: func_114(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31); break;

		case 25: func_114(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31); break;

		case 26: func_114(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31); break;

		case 27: func_114(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31); break;

		case 28: func_114(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31); break;

		case 29: func_114(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31); break;

		case 30: func_114(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31); break;

		case 31: func_114(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31); break;

		case 32: func_114(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31); break;

		case 33: func_114(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31); break;

		case 34: func_114(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31); break;

		case 35: func_114(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31); break;

		case 36: func_114(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31); break;

		case 37: func_114(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31); break;

		case 38: func_114(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 39: func_114(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 40: func_114(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 41: func_114(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 42: func_114(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31); break;

		case 43: func_114(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6); break;

		case 44: func_114(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 45: func_114(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8); break;

		case 46: func_114(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31); break;

		default: func_112(&Var1, iParam0, iParam1, 47); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: func_114(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 1: func_114(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8); break;

		case 2: func_114(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1); break;

		case 3: func_114(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2); break;

		case 4:
			func_114(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[2], Global_101700.f_2095.f_539.f_200[2], 8, 0, 0,
					 0, 0, -99, 0, 0, 31);
			break;

		case 5: func_114(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6); break;

		case 6: func_114(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3); break;

		case 7: func_114(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4); break;

		case 8: func_114(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31); break;

		case 9: func_114(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 10: func_114(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 11: func_114(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5); break;

		case 12: func_114(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 13: func_114(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31); break;

		case 14: func_114(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31); break;

		case 15: func_114(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 16: func_114(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 17: func_114(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 18: func_114(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 19: func_114(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 20: func_114(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 21: func_114(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_114(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 23: func_114(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 24: func_114(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 25: func_114(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 26: func_114(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 27: func_114(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 28: func_114(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 29: func_114(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 30: func_114(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 31: func_114(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 32: func_114(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 33: func_114(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 34: func_114(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 35: func_114(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 36: func_114(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 37: func_114(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 38: func_114(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 39: func_114(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 40: func_114(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 41: func_114(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_114(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_114(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_114(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31); break;

		case 45: func_114(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 46: func_114(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_114(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31); break;

		default: func_112(&Var1, iParam0, iParam1, 48); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: func_114(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31); break;

		case 1: func_114(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0); break;

		case 2: func_114(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1); break;

		case 3: func_114(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2); break;

		case 4: func_114(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3); break;

		case 5: func_114(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4); break;

		case 6: func_114(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5); break;

		case 7: func_114(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6); break;

		case 8: func_114(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7); break;

		case 9: func_114(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8); break;

		case 10: func_114(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9); break;

		case 11: func_114(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10); break;

		case 12: func_114(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11); break;

		case 13: func_114(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12); break;

		case 14: func_114(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13); break;

		case 15: func_114(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14); break;

		case 16: func_114(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15); break;

		case 17: func_114(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16); break;

		case 18: func_114(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17); break;

		case 19: func_114(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18); break;

		case 20: func_114(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19); break;

		case 21: func_114(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20); break;

		case 22: func_114(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21); break;

		case 23: func_114(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22); break;

		case 24: func_114(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23); break;

		case 25: func_114(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24); break;

		default: func_112(&Var1, iParam0, iParam1, 26); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: func_114(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31); break;

		case 1: func_114(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31); break;

		case 2: func_114(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0); break;

		case 3: func_114(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1); break;

		case 4: func_114(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2); break;

		case 5: func_114(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3); break;

		case 6: func_114(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4); break;

		case 7: func_114(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5); break;

		case 8: func_114(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6); break;

		case 9: func_114(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7); break;

		case 10: func_114(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8); break;

		case 11: func_114(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9); break;

		case 12: func_114(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10); break;

		case 13: func_114(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31); break;

		case 14: func_114(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11); break;

		case 15: func_114(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12); break;

		case 16: func_114(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13); break;

		case 17: func_114(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14); break;

		case 18: func_114(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15); break;

		case 19: func_114(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16); break;

		case 20: func_114(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17); break;

		case 21: func_114(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31); break;

		case 22: func_114(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18); break;

		case 23: func_114(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19); break;

		case 24: func_114(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20); break;

		case 25: func_114(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21); break;

		case 26: func_114(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22); break;

		case 27: func_114(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23); break;

		default: func_112(&Var1, iParam0, iParam1, 28); break;
		}
		break;
	}
	return Var1;
}

//Position - 0xB9F5
void func_112(var* uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;

	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero")) {
		iVar0 = 0;
		(*uParam0)[13] = 10 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_one")) {
		iVar0 = 1;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_two")) {
		iVar0 = 2;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("mp_m_freemode_01")) {
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01")) {
		iVar0 = 4;
	}
	dlc1::_0xF3FBE2D50A6A8C28(iVar0, 0);
	dlc1::get_shop_ped_query_outfit(iParam2 - iParam3, &Var1);
	if (!dlc1::_is_dlc_data_empty(Var1)) {
		iVar36 = 0;
		while (iVar36 < Var1.f_4) {
			if (dlc1::_get_prop_from_outfit(Var1.f_1, iVar36, &vVar16)) {
				if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
					if (vVar16.z == 10) {
						dlc1::init_shop_ped_component(&Var19);
						dlc1::get_shop_ped_component(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1) {
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16) {
						(*uParam0)[func_113(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else {
						(*uParam0)[func_113(vVar16.z)] = func_90(iParam1, vVar16.x, func_113(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1) {
					(*uParam0)[func_113(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0) {
			(*uParam0)[13] = -99;
		}
		else {
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

// Position - 0xBBDF
int func_113(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0xBC8F
void func_114(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

// Position - 0xBD00
struct<14> func_115(int iParam0, int iParam1, int iParam2) {
	func_179();
	if (iParam0 == joaat("player_zero")) {
		func_161(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one")) {
		func_142(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two")) {
		func_116(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

//Position - 0xBD52
void func_116(int iParam0, int iParam1)
{
	switch (iParam0) {
	case 0: func_141(iParam1); break;

	case 2: func_140(iParam1); break;

	case 3: func_137(iParam1); break;

	case 4: func_136(iParam1); break;

	case 6: func_135(iParam1); break;

	case 5: func_134(iParam1); break;

	case 8: func_133(iParam1); break;

	case 9: func_132(iParam1); break;

	case 10: func_131(iParam1); break;

	case 1: func_130(iParam1); break;

	case 7: func_129(iParam1); break;

	case 11: func_128(iParam1); break;

	case 12: func_127(iParam1); break;

	case 13: func_126(iParam1); break;

	case 14: func_117(iParam1); break;
	}
}

// Position - 0xBE42
void func_117(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 154:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	case 88:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P2_E1", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 45;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P2_E2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P2_E2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P2_E2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P2_E2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 52;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P2_E2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 54;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P2_E2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 54;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P2_E2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P2_E2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P2_E2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P2_E2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P2_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P2_E3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P2_E3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P2_E3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P2_E3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P2_E3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P2_E3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P2_E3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P2_E3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P2_E3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 113:
		StringCopy(&Var2, "PROPS_P2_E7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 114:
		StringCopy(&Var2, "PROPS_P2_E7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 115:
		StringCopy(&Var2, "PROPS_P2_E7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 116:
		StringCopy(&Var2, "PROPS_P2_E7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 59;
		iVar8 = 10;
		break;

	case 117:
		StringCopy(&Var2, "PROPS_P2_E7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 118:
		StringCopy(&Var2, "PROPS_P2_E7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 119:
		StringCopy(&Var2, "PROPS_P2_E7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 120:
		StringCopy(&Var2, "PROPS_P2_E7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 59;
		iVar8 = 10;
		break;

	case 121:
		StringCopy(&Var2, "PROPS_P2_E7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 79;
		iVar8 = 10;
		break;

	case 122:
		StringCopy(&Var2, "PROPS_P2_E7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 79;
		iVar8 = 10;
		break;

	case 123:
		StringCopy(&Var2, "PROPS_P2_E8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 124:
		StringCopy(&Var2, "PROPS_P2_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 125:
		StringCopy(&Var2, "PROPS_P2_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 126:
		StringCopy(&Var2, "PROPS_P2_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 127:
		StringCopy(&Var2, "PROPS_P2_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 128:
		StringCopy(&Var2, "PROPS_P2_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 129:
		StringCopy(&Var2, "PROPS_P2_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 130:
		StringCopy(&Var2, "PROPS_P2_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 131:
		StringCopy(&Var2, "PROPS_P2_E8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 132:
		StringCopy(&Var2, "PROPS_P2_E8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 215;
		iVar8 = 10;
		break;

	case 133:
		StringCopy(&Var2, "PROPS_P2_E9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 134:
		StringCopy(&Var2, "PROPS_P2_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 135:
		StringCopy(&Var2, "PROPS_P2_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 169;
		iVar8 = 10;
		break;

	case 136:
		StringCopy(&Var2, "PROPS_P2_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 169;
		iVar8 = 10;
		break;

	case 137:
		StringCopy(&Var2, "PROPS_P2_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 138:
		StringCopy(&Var2, "PROPS_P2_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 139:
		StringCopy(&Var2, "PROPS_P2_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 140:
		StringCopy(&Var2, "PROPS_P2_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 141:
		StringCopy(&Var2, "PROPS_P2_E9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 142:
		StringCopy(&Var2, "PROPS_P2_E9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 143:
		StringCopy(&Var2, "PROPS_P2_E10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 49;
		iVar8 = 10;
		break;

	case 144:
		StringCopy(&Var2, "PROPS_P2_E10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 145:
		StringCopy(&Var2, "PROPS_P2_E10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 52;
		iVar8 = 10;
		break;

	case 146:
		StringCopy(&Var2, "PROPS_P2_E10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 147:
		StringCopy(&Var2, "PROPS_P2_E10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 148:
		StringCopy(&Var2, "PROPS_P2_E10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 149:
		StringCopy(&Var2, "PROPS_P2_E10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 150:
		StringCopy(&Var2, "PROPS_P2_E10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 63;
		iVar8 = 10;
		break;

	case 151:
		StringCopy(&Var2, "PROPS_P2_E10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 152:
		StringCopy(&Var2, "PROPS_P2_E10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 153:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "PROPS_P2_H2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "PROPS_P2_H7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "PROPS_P2_H7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 12;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 13;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 14;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 15;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 59:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 60:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 64:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 65:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 66:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 67:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 68:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 69:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P1_H26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P1_H26_1", 16);
		iVar6 = 26;
		iVar7 = 1;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P1_H26_2", 16);
		iVar6 = 26;
		iVar7 = 2;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P1_H26_3", 16);
		iVar6 = 26;
		iVar7 = 3;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P1_H26_4", 16);
		iVar6 = 26;
		iVar7 = 4;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P1_H26_5", 16);
		iVar6 = 26;
		iVar7 = 5;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P1_H26_6", 16);
		iVar6 = 26;
		iVar7 = 6;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P1_H26_7", 16);
		iVar6 = 26;
		iVar7 = 7;
		iVar1 = 24;
		iVar8 = 0;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P1_H26_8", 16);
		iVar6 = 26;
		iVar7 = 8;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 80:
		StringCopy(&Var2, "PROPS_P1_H26_9", 16);
		iVar6 = 26;
		iVar7 = 9;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 81:
		StringCopy(&Var2, "PROPS_P1_H26_10", 16);
		iVar6 = 26;
		iVar7 = 10;
		iVar1 = 18;
		iVar8 = 0;
		break;

	case 82:
		StringCopy(&Var2, "PROPS_P1_H26_11", 16);
		iVar6 = 26;
		iVar7 = 11;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P1_H26_12", 16);
		iVar6 = 26;
		iVar7 = 12;
		iVar1 = 24;
		iVar8 = 0;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P1_H26_13", 16);
		iVar6 = 26;
		iVar7 = 13;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P1_H26_14", 16);
		iVar6 = 26;
		iVar7 = 14;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P1_H26_15", 16);
		iVar6 = 26;
		iVar7 = 15;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 87:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar8 = 0;
		break;

	default: func_125(iVar10, iParam0, 155); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xD24E
void func_118(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9, int iParam10) {
	int iVar0;
	int iVar1;

	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = iParam2 % 32;
	uParam0->f_2 = iParam2 / 32;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&uParam0->f_8, sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_124(iParam8);
	if (uParam0->f_2 >= 10 && uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		if (!iParam10) {
		}
		uParam0->f_2 = 0;
	}
	if (gameplay::get_hash_key(sParam3) != gameplay::get_hash_key("NO_LABEL")) {
	}
	if (iParam7) {
		gameplay::set_bit(&uParam0->f_6, 3);
	}
	if (iParam10) {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
			gameplay::set_bit(&uParam0->f_6, 5);
		}
		gameplay::set_bit(&uParam0->f_6, 1);
		gameplay::set_bit(&uParam0->f_6, 2);
		gameplay::set_bit(&uParam0->f_6, 6);
		if (func_123(14)) {
			return;
		}
		if (iParam1 == 1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0)) {
				gameplay::set_bit(&uParam0->f_6, 7);
			}
		}
		if (iParam1 == 12) {
			if (!func_122(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_122(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else if (iParam1 == 13) {
		}
		else if (iParam1 == 14) {
			if (!func_122(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_122(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else {
			if (!func_122(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_122(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		gameplay::set_bit(&uParam0->f_6, 0);
		gameplay::set_bit(&uParam0->f_6, 5);
		if (func_104(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 1);
		}
		if (func_104(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 2);
		}
		if (!func_104(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 4);
		}
	}
	else {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 ||
			iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12) {
			if (func_123(14)) {
				return;
			}
			iVar0 = func_102(func_121(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 1);
			}
			iVar0 = func_102(func_120(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 2);
			}
			if (func_119(iParam1, uParam0->f_2, &iVar1)) {
				iVar0 = func_102(iVar1, Global_69521, 0);
				if (!gameplay::is_bit_set(iVar0, uParam0->f_1)) {
					gameplay::set_bit(&uParam0->f_6, 4);
				}
			}
		}
		else {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
	if (iParam1 == 14) {
		if (iParam4 == -1) {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
}

// Position - 0xD5DF
bool func_119(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = 973;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: *iParam2 = 974; break;

		case 3: *iParam2 = 1424; break;

		case 4: *iParam2 = 990; break;

		case 6: *iParam2 = 998; break;

		case 8: *iParam2 = 1425; break;

		case 9: *iParam2 = 1433; break;

		case 10: *iParam2 = 1435; break;

		case 1: *iParam2 = 1006; break;

		case 7: *iParam2 = 1436; break;

		case 11: *iParam2 = 982; break;

		case 14: *iParam2 = 1014; break;

		case 12: *iParam2 = 1025; break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: *iParam2 = 975; break;

		case 4: *iParam2 = 991; break;

		case 6: *iParam2 = 999; break;

		case 8: *iParam2 = 1426; break;

		case 9: *iParam2 = 1434; break;

		case 7: *iParam2 = 1437; break;

		case 11: *iParam2 = 983; break;

		case 14: *iParam2 = 1015; break;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: *iParam2 = 976; break;

		case 4: *iParam2 = 992; break;

		case 6: *iParam2 = 1000; break;

		case 8: *iParam2 = 1427; break;

		case 7: *iParam2 = 1438; break;

		case 11: *iParam2 = 984; break;

		case 14: *iParam2 = 1016; break;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: *iParam2 = 993; break;

		case 6: *iParam2 = 1001; break;

		case 8: *iParam2 = 1428; break;

		case 11: *iParam2 = 985; break;

		case 14: *iParam2 = 1017; break;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: *iParam2 = 994; break;

		case 6: *iParam2 = 1002; break;

		case 8: *iParam2 = 1429; break;

		case 11: *iParam2 = 986; break;

		case 14: *iParam2 = 1018; break;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: *iParam2 = 995; break;

		case 6: *iParam2 = 1003; break;

		case 8: *iParam2 = 1430; break;

		case 11: *iParam2 = 987; break;

		case 14: *iParam2 = 1019; break;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: *iParam2 = 996; break;

		case 6: *iParam2 = 1004; break;

		case 8: *iParam2 = 1431; break;

		case 11: *iParam2 = 988; break;

		case 14: *iParam2 = 1020; break;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: *iParam2 = 997; break;

		case 6: *iParam2 = 1005; break;

		case 8: *iParam2 = 1432; break;

		case 11: *iParam2 = 989; break;

		case 14: *iParam2 = 1021; break;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: *iParam2 = 1022; break;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: *iParam2 = 1023; break;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: *iParam2 = 1024; break;
		}
		break;
	}
	return *iParam2 != 973;
}

// Position - 0xD9E4
int func_120(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 922;

		case 3: return 1409;

		case 4: return 938;

		case 6: return 946;

		case 8: return 1410;

		case 9: return 1418;

		case 10: return 1420;

		case 1: return 954;

		case 7: return 1421;

		case 11: return 930;

		case 14: return 962;

		case 12: return 973;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 923;

		case 4: return 939;

		case 6: return 947;

		case 8: return 1411;

		case 9: return 1419;

		case 7: return 1422;

		case 11: return 931;

		case 14: return 963;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 924;

		case 4: return 940;

		case 6: return 948;

		case 8: return 1412;

		case 7: return 1423;

		case 11: return 932;

		case 14: return 964;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 941;

		case 6: return 949;

		case 8: return 1413;

		case 11: return 933;

		case 14: return 965;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 942;

		case 6: return 950;

		case 8: return 1414;

		case 11: return 934;

		case 14: return 966;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 943;

		case 6: return 951;

		case 8: return 1415;

		case 11: return 935;

		case 14: return 967;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 944;

		case 6: return 952;

		case 8: return 1416;

		case 11: return 936;

		case 14: return 968;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 945;

		case 6: return 953;

		case 8: return 1417;

		case 11: return 937;

		case 14: return 969;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 970;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 971;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 972;
		}
		break;
	}
	return 930;
}

// Position - 0xDDDF
int func_121(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 870;

		case 3: return 1394;

		case 4: return 886;

		case 6: return 894;

		case 8: return 1395;

		case 9: return 1403;

		case 10: return 1405;

		case 1: return 902;

		case 7: return 1406;

		case 11: return 878;

		case 14: return 910;

		case 12: return 921;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 871;

		case 4: return 887;

		case 6: return 895;

		case 8: return 1396;

		case 9: return 1404;

		case 7: return 1407;

		case 11: return 879;

		case 14: return 911;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 872;

		case 4: return 888;

		case 6: return 896;

		case 8: return 1397;

		case 7: return 1408;

		case 11: return 880;

		case 14: return 912;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 889;

		case 6: return 897;

		case 8: return 1398;

		case 11: return 881;

		case 14: return 913;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 890;

		case 6: return 898;

		case 8: return 1399;

		case 11: return 882;

		case 14: return 914;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 891;

		case 6: return 899;

		case 8: return 1400;

		case 11: return 883;

		case 14: return 915;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 892;

		case 6: return 900;

		case 8: return 1401;

		case 11: return 884;

		case 14: return 916;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 893;

		case 6: return 901;

		case 8: return 1402;

		case 11: return 885;

		case 14: return 917;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 918;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 919;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 920;
		}
		break;
	}
	return 878;
}

// Position - 0xE1DA
int func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_103(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_102(iVar2, iVar0, 0);
		return gameplay::is_bit_set(iVar3, iVar1);
	}
	return 0;
}

// Position - 0xE21C
bool func_123(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xE22A
int func_124(int iParam0) {
	switch (iParam0) {
	case -1: return 0;

	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;

	case 9: return 0;

	case 10: return 1;

	case 11: return 0;

	case 12: return 0;

	case 13: return 0;
	}
	return 0;
}

// Position - 0xE2FE
void func_125(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;

	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;
	if (iVar0 < 0) {
		return;
	}
	iVar1 = Global_69523[0 /*14*/].f_5;
	if (iParam0 == 12) {
		iVar18 = 0;
		iVar19 = dlc1::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_outfit(iVar17, &Var2);
			if (!dlc1::_is_dlc_data_empty(Var2)) {
				if (iVar18 == iParam1 - iParam2) {
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_118(&Global_69523[0 /*14*/], iParam0, iParam1, &Var2.f_7, 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13) {
		func_118(&Global_69523[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14) {
		dlc1::init_shop_ped_prop(&Var20);
		iVar39 = 0;
		iVar40 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40) {
			dlc1::get_shop_ped_query_prop(iVar38, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iVar39 == iParam1 - iParam2) {
					if (Var20.f_6 == 0) {
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1) {
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2) {
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3) {
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4) {
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5) {
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6) {
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7) {
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8) {
						iVar37 = 8;
					}
					else {
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_118(&Global_69523[0 /*14*/], iParam0, iParam1, &Var20.f_9, Var20.f_3, Var20.f_4, Var20.f_5,
							 dlc1::_0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var41);
		iVar59 = 0;
		iVar60 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_107(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60) {
			dlc1::get_shop_ped_query_component(iVar58, &Var41);
			if (!dlc1::_is_dlc_data_empty(Var41)) {
				if (iVar59 == iParam1 - iParam2) {
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_118(&Global_69523[0 /*14*/], iParam0, iParam1, &Var41.f_9, Var41.f_3, Var41.f_4, Var41.f_5,
							 dlc1::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

// Position - 0xE579
void func_126(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_125(iVar10, iParam0, 9); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xE6CF
void func_127(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P2_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "OUTFIT_P2_5", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "OUTFIT_P2_6", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P2_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P2_8", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P2_9", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "OUTFIT_P2_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P2_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P2_13", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "OUTFIT_P2_14", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P2_15", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P2_16", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P2_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P2_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P2_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P2_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P2_21", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P2_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P2_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P2_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P2_25", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P2_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P2_27", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P2_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 119;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P2_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 99;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P2_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 129;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P2_44", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P2_45", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P2_46", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 139;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P2_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 149;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P2_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 145;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P2_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 140;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P2_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 135;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P2_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P2_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P2_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P2_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P2_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P2_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P2_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P2_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P2_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P2_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P2_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P2_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P2_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 47:
		StringCopy(&Var2, "OUTFIT_P2_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 48); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xEBDC
void func_128(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 1); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xEC50
void func_129(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 1); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xECC3
void func_130(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P2_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P2_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "BERD_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 6); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xEDA9
void func_131(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 7;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 8;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 9;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 5;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 6;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		break;

	default: func_125(iVar10, iParam0, 33); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF10B
void func_132(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 11:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 12:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 13:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 14:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 15:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 270;
		break;

	case 16:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 270;
		break;

	default: func_125(iVar10, iParam0, 17); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF31B
void func_133(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "SPEC_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "SPEC_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_125(iVar10, iParam0, 18); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF54A
void func_134(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_125(iVar10, iParam0, 7); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF659
void func_135(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 22;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 45;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 65;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P2_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 58;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P2_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 72;
		break;

	case 6:
		StringCopy(&Var2, "FEET_P2_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 68;
		break;

	case 7:
		StringCopy(&Var2, "FEET_P2_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 60;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "FEET_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "FEET_P2_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "FEET_P2_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "FEET_P2_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P2_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 19:
		StringCopy(&Var2, "FEET_P2_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P2_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P2_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P2_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P2_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 24:
		StringCopy(&Var2, "FEET_P2_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P2_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P2_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P2_9_11", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 700;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P2_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 38:
		StringCopy(&Var2, "FEET_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P2_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P2_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P2_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P2_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P2_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P2_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P2_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P2_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P2_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P2_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P2_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P2_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P2_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P2_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P2_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P2_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P2_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P2_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 73:
		StringCopy(&Var2, "FEET_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P2_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P2_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P2_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P2_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P2_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P2_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P2_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 110;
		break;

	default: func_125(iVar10, iParam0, 84); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xFFF7
void func_136(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 129;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 115;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "LEGS_P2_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "LEGS_P2_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 20:
		StringCopy(&Var2, "LEGS_P2_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 21:
		StringCopy(&Var2, "LEGS_P2_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 22:
		StringCopy(&Var2, "LEGS_P2_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 850;
		break;

	case 23:
		StringCopy(&Var2, "LEGS_P2_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 750;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P2_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 690;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P2_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 820;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P2_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 650;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P2_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 690;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P2_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 690;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P2_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 820;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "LEGS_P2_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "LEGS_P2_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "LEGS_P2_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "LEGS_P2_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 58;
		break;

	case 36:
		StringCopy(&Var2, "LEGS_P2_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 68;
		break;

	case 37:
		StringCopy(&Var2, "LEGS_P2_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 65;
		break;

	case 38:
		StringCopy(&Var2, "LEGS_P2_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 60;
		break;

	case 39:
		StringCopy(&Var2, "LEGS_P2_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 40:
		StringCopy(&Var2, "LEGS_P2_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 63;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P2_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 60;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P2_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 58;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 99;
		break;

	case 46:
		StringCopy(&Var2, "LEGS_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 105;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 110;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 110;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P2_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 99;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P2_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 110;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P2_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 110;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P2_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P2_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 105;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 15;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 15;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 15;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 15;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 15;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 15;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 15;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 15;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 600;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 600;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 600;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 600;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 600;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 600;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 600;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 600;
		break;

	case 70:
		StringCopy(&Var2, "LEGS_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 600;
		break;

	case 71:
		StringCopy(&Var2, "LEGS_P2_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 80;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P2_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P2_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P2_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P2_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 80;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P2_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P2_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 80;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P2_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 80;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P2_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 80;
		break;

	case 80:
		StringCopy(&Var2, "LEGS_P2_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 80;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P2_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P2_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 12;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P2_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 12;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P2_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P2_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 18;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P2_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 20;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P2_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 30;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P2_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 30;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P2_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 30;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P2_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P2_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		break;

	case 92:
		StringCopy(&Var2, "LEGS_P2_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		break;

	case 93:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 95:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 1;
		break;

	case 96:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 2;
		break;

	case 97:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 3;
		break;

	case 98:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 4;
		break;

	case 99:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 5;
		break;

	case 100:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 6;
		break;

	case 101:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 7;
		break;

	case 102:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 8;
		break;

	case 103:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 9;
		break;

	default: func_125(iVar10, iParam0, 104); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x10B6A
void func_137(int iParam0) {
	if (iParam0 < 136) {
		func_139(iParam0);
	}
	else {
		func_138(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_125(3, iParam0, 242);
	}
}

// Position - 0x10B9E
void func_138(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 136:
		StringCopy(&Var2, "TORSO_P2_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 32;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P2_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 39;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P2_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 40;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P2_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 42;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P2_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 45;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P2_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 48;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P2_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 52;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P2_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P2_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P2_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P2_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 560;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P2_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 390;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P2_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 390;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P2_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 390;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P2_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 560;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P2_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 390;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P2_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 390;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P2_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 390;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P2_22_10", 16);
		iVar6 = 22;
		iVar7 = 10;
		iVar1 = 390;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P2_22_11", 16);
		iVar6 = 22;
		iVar7 = 11;
		iVar1 = 3950;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P2_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P2_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P2_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P2_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P2_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P2_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P2_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 19;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P2_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 20;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P2_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 19;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P2_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P2_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 20;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P2_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 28;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P2_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 28;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P2_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 25;
		break;

	case 170:
		StringCopy(&Var2, "TORSO_P2_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 22;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P2_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 19;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P2_24_10", 16);
		iVar6 = 24;
		iVar7 = 10;
		iVar1 = 22;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P2_24_11", 16);
		iVar6 = 24;
		iVar7 = 11;
		iVar1 = 19;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P2_24_12", 16);
		iVar6 = 24;
		iVar7 = 12;
		iVar1 = 20;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P2_24_13", 16);
		iVar6 = 24;
		iVar7 = 13;
		iVar1 = 25;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P2_24_14", 16);
		iVar6 = 24;
		iVar7 = 14;
		iVar1 = 20;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P2_24_15", 16);
		iVar6 = 24;
		iVar7 = 15;
		iVar1 = 28;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P2_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar1 = 35;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P2_25_1", 16);
		iVar6 = 25;
		iVar7 = 1;
		iVar1 = 40;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P2_25_2", 16);
		iVar6 = 25;
		iVar7 = 2;
		iVar1 = 45;
		break;

	case 181:
		StringCopy(&Var2, "TORSO_P2_25_3", 16);
		iVar6 = 25;
		iVar7 = 3;
		iVar1 = 45;
		break;

	case 182:
		StringCopy(&Var2, "TORSO_P2_25_4", 16);
		iVar6 = 25;
		iVar7 = 4;
		iVar1 = 49;
		break;

	case 183:
		StringCopy(&Var2, "TORSO_P2_25_5", 16);
		iVar6 = 25;
		iVar7 = 5;
		iVar1 = 820;
		break;

	case 184:
		StringCopy(&Var2, "TORSO_P2_25_6", 16);
		iVar6 = 25;
		iVar7 = 6;
		iVar1 = 790;
		break;

	case 185:
		StringCopy(&Var2, "TORSO_P2_25_7", 16);
		iVar6 = 25;
		iVar7 = 7;
		iVar1 = 820;
		break;

	case 186:
		StringCopy(&Var2, "TORSO_P2_25_8", 16);
		iVar6 = 25;
		iVar7 = 8;
		iVar1 = 929;
		break;

	case 187:
		StringCopy(&Var2, "TORSO_P2_25_9", 16);
		iVar6 = 25;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 188:
		StringCopy(&Var2, "TORSO_P2_25_10", 16);
		iVar6 = 25;
		iVar7 = 10;
		iVar1 = 850;
		break;

	case 189:
		StringCopy(&Var2, "TORSO_P2_25_11", 16);
		iVar6 = 25;
		iVar7 = 11;
		iVar1 = 790;
		break;

	case 190:
		StringCopy(&Var2, "TORSO_P2_26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 191:
		StringCopy(&Var2, "TORSO_P2_26_1", 16);
		iVar6 = 26;
		iVar7 = 1;
		break;

	case 192:
		StringCopy(&Var2, "TORSO_P2_26_2", 16);
		iVar6 = 26;
		iVar7 = 2;
		break;

	case 193:
		StringCopy(&Var2, "TORSO_P2_26_3", 16);
		iVar6 = 26;
		iVar7 = 3;
		break;

	case 194:
		StringCopy(&Var2, "TORSO_P2_26_4", 16);
		iVar6 = 26;
		iVar7 = 4;
		break;

	case 195:
		StringCopy(&Var2, "TORSO_P2_26_5", 16);
		iVar6 = 26;
		iVar7 = 5;
		break;

	case 196:
		StringCopy(&Var2, "TORSO_P2_26_6", 16);
		iVar6 = 26;
		iVar7 = 6;
		break;

	case 197:
		StringCopy(&Var2, "TORSO_P2_26_7", 16);
		iVar6 = 26;
		iVar7 = 7;
		break;

	case 198:
		StringCopy(&Var2, "TORSO_P2_26_8", 16);
		iVar6 = 26;
		iVar7 = 8;
		break;

	case 199:
		StringCopy(&Var2, "TORSO_P2_26_9", 16);
		iVar6 = 26;
		iVar7 = 9;
		break;

	case 200:
		StringCopy(&Var2, "TORSO_P2_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar1 = 2200;
		break;

	case 201:
		StringCopy(&Var2, "TORSO_P2_27_1", 16);
		iVar6 = 27;
		iVar7 = 1;
		iVar1 = 2500;
		break;

	case 202:
		StringCopy(&Var2, "TORSO_P2_27_2", 16);
		iVar6 = 27;
		iVar7 = 2;
		iVar1 = 2500;
		break;

	case 203:
		StringCopy(&Var2, "TORSO_P2_27_3", 16);
		iVar6 = 27;
		iVar7 = 3;
		iVar1 = 2200;
		break;

	case 204:
		StringCopy(&Var2, "TORSO_P2_27_4", 16);
		iVar6 = 27;
		iVar7 = 4;
		iVar1 = 2500;
		break;

	case 205:
		StringCopy(&Var2, "TORSO_P2_27_5", 16);
		iVar6 = 27;
		iVar7 = 5;
		iVar1 = 2500;
		break;

	case 206:
		StringCopy(&Var2, "TORSO_P2_27_6", 16);
		iVar6 = 27;
		iVar7 = 6;
		iVar1 = 2200;
		break;

	case 207:
		StringCopy(&Var2, "TORSO_P2_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 1100;
		break;

	case 208:
		StringCopy(&Var2, "TORSO_P2_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 1200;
		break;

	case 209:
		StringCopy(&Var2, "TORSO_P2_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 1220;
		break;

	case 210:
		StringCopy(&Var2, "TORSO_P2_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 1250;
		break;

	case 211:
		StringCopy(&Var2, "TORSO_P2_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 1300;
		break;

	case 212:
		StringCopy(&Var2, "TORSO_P2_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 1360;
		break;

	case 213:
		StringCopy(&Var2, "TORSO_P2_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 214:
		StringCopy(&Var2, "TORSO_P2_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 215:
		StringCopy(&Var2, "TORSO_P2_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 216:
		StringCopy(&Var2, "TORSO_P2_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 42;
		break;

	case 217:
		StringCopy(&Var2, "TORSO_P2_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 218:
		StringCopy(&Var2, "TORSO_P2_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 45;
		break;

	case 219:
		StringCopy(&Var2, "TORSO_P2_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 45;
		break;

	case 220:
		StringCopy(&Var2, "TORSO_P2_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 44;
		break;

	case 221:
		StringCopy(&Var2, "TORSO_P2_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 46;
		break;

	case 222:
		StringCopy(&Var2, "TORSO_P2_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 52;
		break;

	case 223:
		StringCopy(&Var2, "TORSO_P2_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar1 = 3200;
		break;

	case 224:
		StringCopy(&Var2, "TORSO_P2_29_1", 16);
		iVar6 = 29;
		iVar7 = 1;
		iVar1 = 3200;
		break;

	case 225:
		StringCopy(&Var2, "TORSO_P2_29_2", 16);
		iVar6 = 29;
		iVar7 = 2;
		iVar1 = 2550;
		break;

	case 226:
		StringCopy(&Var2, "TORSO_P2_29_3", 16);
		iVar6 = 29;
		iVar7 = 3;
		iVar1 = 2750;
		break;

	case 227:
		StringCopy(&Var2, "TORSO_P2_29_4", 16);
		iVar6 = 29;
		iVar7 = 4;
		iVar1 = 2590;
		break;

	case 228:
		StringCopy(&Var2, "TORSO_P2_29_5", 16);
		iVar6 = 29;
		iVar7 = 5;
		iVar1 = 2750;
		break;

	case 229:
		StringCopy(&Var2, "TORSO_P2_29_6", 16);
		iVar6 = 29;
		iVar7 = 6;
		iVar1 = 2550;
		break;

	case 230:
		StringCopy(&Var2, "TORSO_P2_29_7", 16);
		iVar6 = 29;
		iVar7 = 7;
		iVar1 = 2590;
		break;

	case 231:
		StringCopy(&Var2, "TORSO_P2_29_8", 16);
		iVar6 = 29;
		iVar7 = 8;
		iVar1 = 2720;
		break;

	case 232:
		StringCopy(&Var2, "TORSO_P2_29_9", 16);
		iVar6 = 29;
		iVar7 = 9;
		iVar1 = 2750;
		break;

	case 233:
		StringCopy(&Var2, "TORSO_P2_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 3250;
		break;

	case 234:
		StringCopy(&Var2, "TORSO_P2_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 2950;
		break;

	case 235:
		StringCopy(&Var2, "TORSO_P2_30_2", 16);
		iVar6 = 30;
		iVar7 = 2;
		iVar1 = 3100;
		break;

	case 236:
		StringCopy(&Var2, "TORSO_P2_30_3", 16);
		iVar6 = 30;
		iVar7 = 3;
		iVar1 = 3150;
		break;

	case 237:
		StringCopy(&Var2, "TORSO_P2_30_4", 16);
		iVar6 = 30;
		iVar7 = 4;
		iVar1 = 3240;
		break;

	case 238:
		StringCopy(&Var2, "TORSO_P2_30_5", 16);
		iVar6 = 30;
		iVar7 = 5;
		iVar1 = 3350;
		break;

	case 239:
		StringCopy(&Var2, "TORSO_P2_30_6", 16);
		iVar6 = 30;
		iVar7 = 6;
		iVar1 = 3400;
		break;

	case 240:
		StringCopy(&Var2, "TORSO_P2_30_7", 16);
		iVar6 = 30;
		iVar7 = 7;
		iVar1 = 3280;
		break;

	case 241:
		StringCopy(&Var2, "TORSO_P2_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		break;

	default: return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x117A2
void func_139(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 25;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 15;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P2_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P2_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 25;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P2_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P2_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 22;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P2_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 20;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P2_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 20;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P2_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 24;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P2_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 26;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P2_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 28;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P2_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 29;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P2_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 22;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P2_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 20;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "TORSO_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 35;
		break;

	case 19:
		StringCopy(&Var2, "TORSO_P2_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 22;
		break;

	case 20:
		StringCopy(&Var2, "TORSO_P2_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 25;
		break;

	case 21:
		StringCopy(&Var2, "TORSO_P2_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 38;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P2_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 23:
		StringCopy(&Var2, "TORSO_P2_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 40;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P2_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 40;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P2_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 40;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P2_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P2_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 500;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P2_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 560;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P2_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 600;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 650;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 500;
		break;

	case 33:
		StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 560;
		break;

	case 34:
		StringCopy(&Var2, "TORSO_P2_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 500;
		break;

	case 35:
		StringCopy(&Var2, "TORSO_P2_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 650;
		break;

	case 36:
		StringCopy(&Var2, "TORSO_P2_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 540;
		break;

	case 37:
		StringCopy(&Var2, "TORSO_P2_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 690;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P2_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 560;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P2_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 590;
		break;

	case 40:
		StringCopy(&Var2, "TORSO_P2_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 690;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P2_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 540;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P2_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 500;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 53:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P2_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P2_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P2_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 25;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P2_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 27;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P2_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 22;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P2_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 350;
		break;

	case 60:
		StringCopy(&Var2, "TORSO_P2_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 27;
		break;

	case 61:
		StringCopy(&Var2, "TORSO_P2_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 370;
		break;

	case 62:
		StringCopy(&Var2, "TORSO_P2_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 25;
		break;

	case 63:
		StringCopy(&Var2, "TORSO_P2_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 22;
		break;

	case 64:
		StringCopy(&Var2, "TORSO_P2_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 25;
		break;

	case 65:
		StringCopy(&Var2, "TORSO_P2_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		break;

	case 66:
		StringCopy(&Var2, "TORSO_P2_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 22;
		break;

	case 67:
		StringCopy(&Var2, "TORSO_P2_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 27;
		break;

	case 68:
		StringCopy(&Var2, "TORSO_P2_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 25;
		break;

	case 69:
		StringCopy(&Var2, "TORSO_P2_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 27;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 1;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P2_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P2_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 39;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P2_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 42;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P2_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 49;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P2_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 35;
		break;

	case 76:
		StringCopy(&Var2, "TORSO_P2_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P2_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P2_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P2_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P2_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 88;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P2_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 60;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P2_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P2_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 70;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P2_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P2_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P2_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 90;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P2_14_8", 16);
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 95;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P2_14_9", 16);
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 89:
		StringCopy(&Var2, "TORSO_P2_14_10", 16);
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 95;
		break;

	case 90:
		StringCopy(&Var2, "TORSO_P2_14_11", 16);
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 110;
		break;

	case 91:
		StringCopy(&Var2, "TORSO_P2_14_12", 16);
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 98;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P2_14_13", 16);
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 88;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P2_14_14", 16);
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 98;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P2_14_15", 16);
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 110;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P2_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P2_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P2_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 520;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 490;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 450;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 420;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 420;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 85;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 85;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 107:
		StringCopy(&Var2, "TORSO_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 68;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 68;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 78;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 85;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P2_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P2_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P2_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 78;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P2_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 75;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P2_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 75;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P2_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 75;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P2_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 78;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P2_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 78;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 40;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 32;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 32;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 32;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 38;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 29;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P2_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 32;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P2_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 29;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P2_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P2_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 32;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P2_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 35;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P2_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 32;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P2_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 40;
		break;

	default: return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x126B0
void func_140(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P2_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P2_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "HAIR_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "HAIR_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "HAIR_P2_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "HAIR_P2_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 9); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x127DC
void func_141(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	default: func_125(iVar10, iParam0, 7); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x128D9
void func_142(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_160(iParam1); break;

	case 2: func_159(iParam1); break;

	case 3: func_155(iParam1); break;

	case 4: func_154(iParam1); break;

	case 6: func_153(iParam1); break;

	case 5: func_152(iParam1); break;

	case 8: func_151(iParam1); break;

	case 9: func_150(iParam1); break;

	case 10: func_149(iParam1); break;

	case 1: func_148(iParam1); break;

	case 7: func_147(iParam1); break;

	case 11: func_146(iParam1); break;

	case 12: func_145(iParam1); break;

	case 13: func_144(iParam1); break;

	case 14: func_143(iParam1); break;
	}
}

// Position - 0x129C9
void func_143(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 158:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	case 159:
		StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 4590;
		iVar8 = 2;
		break;

	case 160:
		StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 4100;
		iVar8 = 2;
		break;

	case 161:
		StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 3850;
		iVar8 = 2;
		break;

	case 162:
		StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 1850;
		iVar8 = 2;
		break;

	case 163:
		StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 5250;
		iVar8 = 2;
		break;

	case 164:
		StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 2700;
		iVar8 = 2;
		break;

	case 165:
		StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 3100;
		iVar8 = 2;
		break;

	case 166:
		StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 5050;
		iVar8 = 2;
		break;

	case 167:
		StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 2500;
		iVar8 = 2;
		break;

	case 168:
		StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 1950;
		iVar8 = 2;
		break;

	case 169:
		StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 3900;
		iVar8 = 2;
		break;

	case 170:
		StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 3550;
		iVar8 = 2;
		break;

	case 171:
		StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 4500;
		iVar8 = 2;
		break;

	case 172:
		StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 2700;
		iVar8 = 2;
		break;

	case 173:
		StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 3100;
		iVar8 = 2;
		break;

	case 174:
		StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 2950;
		iVar8 = 2;
		break;

	case 82:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P1_E1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P1_E1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P1_E1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P1_E1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 87:
		StringCopy(&Var2, "PROPS_P1_E1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 88:
		StringCopy(&Var2, "PROPS_P1_E1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P1_E1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P1_E1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P1_E1_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P1_E1_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P1_E2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P1_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P1_E4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 120;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P1_E4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 128;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P1_E4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 130;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P1_E4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P1_E4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P1_E4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 135;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P1_E4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P1_E5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P1_E5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 112;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P1_E5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P1_E5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 118;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P1_E5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P1_E5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 125;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P1_E5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 128;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P1_E5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "PROPS_P1_E5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "PROPS_P1_E5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "PROPS_P1_E6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 113:
		StringCopy(&Var2, "PROPS_P1_E6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 114:
		StringCopy(&Var2, "PROPS_P1_E6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 115:
		StringCopy(&Var2, "PROPS_P1_E6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 116:
		StringCopy(&Var2, "PROPS_P1_E6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 117:
		StringCopy(&Var2, "PROPS_P1_E6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 62;
		iVar8 = 10;
		break;

	case 118:
		StringCopy(&Var2, "PROPS_P1_E6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 119:
		StringCopy(&Var2, "PROPS_P1_E6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 120:
		StringCopy(&Var2, "PROPS_P1_E6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 121:
		StringCopy(&Var2, "PROPS_P1_E6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 72;
		iVar8 = 10;
		break;

	case 122:
		StringCopy(&Var2, "PROPS_P1_E7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 123:
		StringCopy(&Var2, "PROPS_P1_E7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 149;
		iVar8 = 10;
		break;

	case 124:
		StringCopy(&Var2, "PROPS_P1_E7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 139;
		iVar8 = 10;
		break;

	case 125:
		StringCopy(&Var2, "PROPS_P1_E7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 149;
		iVar8 = 10;
		break;

	case 126:
		StringCopy(&Var2, "PROPS_P1_E7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 135;
		iVar8 = 10;
		break;

	case 127:
		StringCopy(&Var2, "PROPS_P1_E7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 128:
		StringCopy(&Var2, "PROPS_P1_E7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 129:
		StringCopy(&Var2, "PROPS_P1_E7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 130:
		StringCopy(&Var2, "PROPS_P1_E7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 159;
		iVar8 = 10;
		break;

	case 131:
		StringCopy(&Var2, "PROPS_P1_E7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 132:
		StringCopy(&Var2, "PROPS_P1_E8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 198;
		iVar8 = 10;
		break;

	case 133:
		StringCopy(&Var2, "PROPS_P1_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 134:
		StringCopy(&Var2, "PROPS_P1_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 135:
		StringCopy(&Var2, "PROPS_P1_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 220;
		iVar8 = 10;
		break;

	case 136:
		StringCopy(&Var2, "PROPS_P1_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 190;
		iVar8 = 10;
		break;

	case 137:
		StringCopy(&Var2, "PROPS_P1_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 200;
		iVar8 = 10;
		break;

	case 138:
		StringCopy(&Var2, "PROPS_P1_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 208;
		iVar8 = 10;
		break;

	case 139:
		StringCopy(&Var2, "PROPS_P1_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 140:
		StringCopy(&Var2, "PROPS_P1_E9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 141:
		StringCopy(&Var2, "PROPS_P1_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 142:
		StringCopy(&Var2, "PROPS_P1_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 190;
		iVar8 = 10;
		break;

	case 143:
		StringCopy(&Var2, "PROPS_P1_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 144:
		StringCopy(&Var2, "PROPS_P1_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 145:
		StringCopy(&Var2, "PROPS_P1_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 168;
		iVar8 = 10;
		break;

	case 146:
		StringCopy(&Var2, "PROPS_P1_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 147:
		StringCopy(&Var2, "PROPS_P1_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 148:
		StringCopy(&Var2, "PROPS_P1_E9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 149:
		StringCopy(&Var2, "PROPS_P1_E9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 150:
		StringCopy(&Var2, "PROPS_P1_E10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 151:
		StringCopy(&Var2, "PROPS_P1_E10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 152:
		StringCopy(&Var2, "PROPS_P1_E10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 153:
		StringCopy(&Var2, "PROPS_P1_E10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 154:
		StringCopy(&Var2, "PROPS_P1_E10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 168;
		iVar8 = 10;
		break;

	case 155:
		StringCopy(&Var2, "PROPS_P1_E10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 156:
		StringCopy(&Var2, "PROPS_P1_E10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 160;
		iVar8 = 10;
		break;

	case 157:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 10:
		StringCopy(&Var2, "PROPS_P1_H0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 13:
		StringCopy(&Var2, "PROPS_P1_H3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "PROPS_P1_H19_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "PROPS_P1_H19_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "PROPS_P1_H19_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "PROPS_P1_H19_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "PROPS_P1_H19_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "PROPS_P1_H19_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "PROPS_P1_H19_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "PROPS_P1_H19_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "PROPS_P1_H19_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "PROPS_P1_H19_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "PROPS_P1_H19_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "PROPS_P1_H19_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "PROPS_P1_H19_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "PROPS_P1_H19_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "PROPS_P1_H19_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "PROPS_P1_H19_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 59:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 64:
		StringCopy(&Var2, "PROPS_P1_H19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 65:
		StringCopy(&Var2, "PROPS_P1_H19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 66:
		StringCopy(&Var2, "PROPS_P1_H19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 32;
		iVar8 = 0;
		break;

	case 67:
		StringCopy(&Var2, "PROPS_P1_H19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 35;
		iVar8 = 0;
		break;

	case 68:
		StringCopy(&Var2, "PROPS_P1_H19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 38;
		iVar8 = 0;
		break;

	case 69:
		StringCopy(&Var2, "PROPS_P1_H19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 42;
		iVar8 = 0;
		break;

	case 70:
		StringCopy(&Var2, "PROPS_P1_H19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 42;
		iVar8 = 0;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P1_H19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 40;
		iVar8 = 0;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P1_H19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 45;
		iVar8 = 0;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P1_H19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 48;
		iVar8 = 0;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P1_H19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P1_H19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P1_H19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P1_H19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P1_H19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P1_H19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 35;
		iVar8 = 0;
		break;

	case 80:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 81:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	default: func_125(iVar10, iParam0, 175); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13EB9
void func_144(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 9); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1400A
void func_145(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P1_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "OUTFIT_P1_2", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "OUTFIT_P1_4", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P1_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P1_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P1_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "OUTFIT_P1_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P1_13", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P1_15", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "OUTFIT_P1_16", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P1_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P1_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P1_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P1_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P1_21", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P1_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P1_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P1_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P1_25", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P1_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P1_27", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P1_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4000;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P1_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P1_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P1_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4650;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P1_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P1_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P1_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4750;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P1_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4750;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P1_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5200;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P1_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5200;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P1_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P1_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P1_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P1_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P1_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P1_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P1_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P1_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P1_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P1_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P1_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P1_51", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P1_52", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P1_53", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P1_54", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 47); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14514
void func_146(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		StringCopy(&Var2, "JBIB_P1_1_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "JBIB_P1_1_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 7:
		StringCopy(&Var2, "JBIB_P1_1_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 8:
		StringCopy(&Var2, "JBIB_P1_1_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 9:
		StringCopy(&Var2, "JBIB_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "JBIB_P1_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 11:
		StringCopy(&Var2, "JBIB_P1_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 12:
		StringCopy(&Var2, "JBIB_P1_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 13:
		StringCopy(&Var2, "JBIB_P1_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 14:
		StringCopy(&Var2, "JBIB_P1_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		break;

	case 15:
		StringCopy(&Var2, "JBIB_P1_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		break;

	case 16:
		StringCopy(&Var2, "JBIB_P1_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		break;

	case 17:
		StringCopy(&Var2, "JBIB_P1_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		break;

	case 18:
		StringCopy(&Var2, "JBIB_P1_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		break;

	case 19:
		StringCopy(&Var2, "JBIB_P1_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		break;

	case 20:
		StringCopy(&Var2, "JBIB_P1_3_11", 16);
		iVar6 = 3;
		iVar7 = 11;
		break;

	case 21:
		StringCopy(&Var2, "JBIB_P1_3_12", 16);
		iVar6 = 3;
		iVar7 = 12;
		break;

	case 22:
		StringCopy(&Var2, "JBIB_P1_3_13", 16);
		iVar6 = 3;
		iVar7 = 13;
		break;

	case 23:
		StringCopy(&Var2, "JBIB_P1_3_14", 16);
		iVar6 = 3;
		iVar7 = 14;
		break;

	case 24:
		StringCopy(&Var2, "JBIB_P1_3_15", 16);
		iVar6 = 3;
		iVar7 = 15;
		break;

	case 25:
		StringCopy(&Var2, "JBIB_P1_3_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 26:
		StringCopy(&Var2, "JBIB_P1_3_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 27:
		StringCopy(&Var2, "JBIB_P1_3_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 28:
		StringCopy(&Var2, "JBIB_P1_3_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 29:
		StringCopy(&Var2, "JBIB_P1_3_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 30:
		StringCopy(&Var2, "JBIB_P1_3_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		break;

	case 31:
		StringCopy(&Var2, "JBIB_P1_3_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		break;

	case 32:
		StringCopy(&Var2, "JBIB_P1_3_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		break;

	case 33:
		StringCopy(&Var2, "JBIB_P1_3_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		break;

	case 34:
		StringCopy(&Var2, "JBIB_P1_3_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		break;

	case 35:
		StringCopy(&Var2, "JBIB_P1_3_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		break;

	case 36:
		StringCopy(&Var2, "JBIB_P1_3_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		break;

	case 37:
		StringCopy(&Var2, "JBIB_P1_3_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		break;

	case 38:
		StringCopy(&Var2, "JBIB_P1_3_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		break;

	case 39:
		StringCopy(&Var2, "JBIB_P1_3_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		break;

	case 40:
		StringCopy(&Var2, "JBIB_P1_3_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		break;

	case 41:
		StringCopy(&Var2, "JBIB_P1_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "JBIB_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "JBIB_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 44:
		StringCopy(&Var2, "JBIB_P1_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "JBIB_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "JBIB_P1_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 47:
		StringCopy(&Var2, "JBIB_P1_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "JBIB_P1_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 49:
		StringCopy(&Var2, "JBIB_P1_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 35;
		break;

	case 50:
		StringCopy(&Var2, "JBIB_P1_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 32;
		break;

	case 51:
		StringCopy(&Var2, "JBIB_P1_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 35;
		break;

	case 52:
		StringCopy(&Var2, "JBIB_P1_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 48;
		break;

	case 53:
		StringCopy(&Var2, "JBIB_P1_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 52;
		break;

	case 54:
		StringCopy(&Var2, "JBIB_P1_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 55:
		StringCopy(&Var2, "JBIB_P1_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 42;
		break;

	case 56:
		StringCopy(&Var2, "JBIB_P1_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 38;
		break;

	case 57:
		StringCopy(&Var2, "JBIB_P1_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 58:
		StringCopy(&Var2, "JBIB_P1_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 48;
		break;

	case 59:
		StringCopy(&Var2, "JBIB_P1_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 42;
		break;

	case 60:
		StringCopy(&Var2, "JBIB_P1_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 45;
		break;

	case 61:
		StringCopy(&Var2, "JBIB_P1_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 62:
		StringCopy(&Var2, "JBIB_P1_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 49;
		break;

	default: func_125(iVar10, iParam0, 63); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14B81
void func_147(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 1); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14BF4
void func_148(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P1_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 5); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14CC3
void func_149(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 5;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 5;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 6;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 6;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 7;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 8;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 9;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 10;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 11;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 12;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 13;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 14;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 15;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 41:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 42:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 5;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 6;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 7;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 53); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x151F2
void func_150(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 6:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 7:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 8:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 12); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15388
void func_151(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC_P1_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "SPEC_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 195;
		break;

	case 12:
		StringCopy(&Var2, "SPEC_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 195;
		break;

	case 13:
		StringCopy(&Var2, "SPEC_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 195;
		break;

	case 14:
		StringCopy(&Var2, "SPEC_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 250;
		break;

	case 15:
		StringCopy(&Var2, "SPEC_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 250;
		break;

	case 16:
		StringCopy(&Var2, "SPEC_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 250;
		break;

	case 17:
		StringCopy(&Var2, "SPEC_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 195;
		break;

	case 18:
		StringCopy(&Var2, "SPEC_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 250;
		break;

	case 19:
		StringCopy(&Var2, "SPEC_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 250;
		break;

	case 20:
		StringCopy(&Var2, "SPEC_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 250;
		break;

	case 21:
		StringCopy(&Var2, "SPEC_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 250;
		break;

	case 22:
		StringCopy(&Var2, "SPEC_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 195;
		break;

	case 23:
		StringCopy(&Var2, "SPEC_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 250;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 27:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		break;

	case 29:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		break;

	case 30:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		break;

	case 31:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 32:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		break;

	case 33:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		break;

	case 34:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		break;

	case 35:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		break;

	case 36:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		break;

	case 37:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		break;

	case 38:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		break;

	case 39:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		break;

	case 40:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		break;

	case 41:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		break;

	case 42:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		break;

	case 43:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		break;

	case 45:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		break;

	case 46:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		break;

	case 47:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		break;

	case 48:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		break;

	case 49:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		break;

	case 50:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		break;

	case 51:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		break;

	case 52:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		break;

	case 53:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		break;

	case 54:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		break;

	case 55:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		break;

	case 56:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		break;

	case 57:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		break;

	case 58:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		break;

	case 59:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 60:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		break;

	case 61:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 62:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		break;

	case 63:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		break;

	case 64:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		break;

	case 65:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		break;

	case 66:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		break;

	case 67:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		break;

	case 68:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		break;

	case 69:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		break;

	case 70:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		break;

	case 71:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		break;

	case 72:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		break;

	case 73:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		break;

	case 74:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		break;

	case 75:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 76:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 77); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15B85
void func_152(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_125(iVar10, iParam0, 7); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15C94
void func_153(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P1_00_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P1_00_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P1_00_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P1_00_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 89;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P1_00_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 45;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P1_00_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 35;
		break;

	case 6:
		StringCopy(&Var2, "FEET_P1_00_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 89;
		break;

	case 7:
		StringCopy(&Var2, "FEET_P1_00_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 8:
		StringCopy(&Var2, "FEET_P1_00_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 9:
		StringCopy(&Var2, "FEET_P1_00_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 10:
		StringCopy(&Var2, "FEET_P1_00_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 145;
		break;

	case 11:
		StringCopy(&Var2, "FEET_P1_00_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 145;
		break;

	case 12:
		StringCopy(&Var2, "FEET_P1_01_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P1_06_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "FEET_P1_06_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 180;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P1_06_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P1_06_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 200;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P1_06_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 220;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P1_06_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 235;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P1_08_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 870;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P1_08_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 870;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P1_08_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 870;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P1_08_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 1275;
		break;

	case 29:
		StringCopy(&Var2, "FEET_P1_08_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 1275;
		break;

	case 30:
		StringCopy(&Var2, "FEET_P1_08_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 1275;
		break;

	case 31:
		StringCopy(&Var2, "FEET_P1_08_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 1275;
		break;

	case 32:
		StringCopy(&Var2, "FEET_P1_08_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 1275;
		break;

	case 33:
		StringCopy(&Var2, "FEET_P1_08_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 1275;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "FEET_P1_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 50;
		break;

	case 38:
		StringCopy(&Var2, "FEET_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 50;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 50;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 50;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P1_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P1_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 50;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P1_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 50;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P1_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P1_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 25;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P1_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 20;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P1_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 24;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P1_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P1_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 27;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P1_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 29;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P1_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P1_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 25;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P1_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P1_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 28;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P1_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 30;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 155;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P1_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 155;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P1_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 165;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P1_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 170;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P1_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P1_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 165;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P1_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 170;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P1_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 160;
		break;

	case 73:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 720;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P1_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P1_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P1_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P1_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P1_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P1_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P1_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P1_16_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P1_16_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 84:
		StringCopy(&Var2, "FEET_P1_16_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 85:
		StringCopy(&Var2, "FEET_P1_16_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar1 = 700;
		break;

	case 86:
		StringCopy(&Var2, "FEET_P1_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 87:
		StringCopy(&Var2, "FEET_P1_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 88:
		StringCopy(&Var2, "FEET_P1_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 89:
		StringCopy(&Var2, "FEET_P1_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 90:
		StringCopy(&Var2, "FEET_P1_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 91:
		StringCopy(&Var2, "FEET_P1_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 92:
		StringCopy(&Var2, "FEET_P1_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 93:
		StringCopy(&Var2, "FEET_P1_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 94:
		StringCopy(&Var2, "FEET_P1_17_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 95:
		StringCopy(&Var2, "FEET_P1_17_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 96:
		StringCopy(&Var2, "FEET_P1_17_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 97:
		StringCopy(&Var2, "FEET_P1_17_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 98:
		StringCopy(&Var2, "FEET_P1_17_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 99:
		StringCopy(&Var2, "FEET_P1_17_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 100:
		StringCopy(&Var2, "FEET_P1_17_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 101:
		StringCopy(&Var2, "FEET_P1_17_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 102:
		StringCopy(&Var2, "FEET_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 103:
		StringCopy(&Var2, "FEET_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 104:
		StringCopy(&Var2, "FEET_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 105:
		StringCopy(&Var2, "FEET_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 106:
		StringCopy(&Var2, "FEET_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 107:
		StringCopy(&Var2, "FEET_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 108:
		StringCopy(&Var2, "FEET_P1_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 109:
		StringCopy(&Var2, "FEET_P1_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 110:
		StringCopy(&Var2, "FEET_P1_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 111:
		StringCopy(&Var2, "FEET_P1_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 112:
		StringCopy(&Var2, "FEET_P1_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 113:
		StringCopy(&Var2, "FEET_P1_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 114:
		StringCopy(&Var2, "FEET_P1_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 115:
		StringCopy(&Var2, "FEET_P1_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 116:
		StringCopy(&Var2, "FEET_P1_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 117:
		StringCopy(&Var2, "FEET_P1_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 118:
		StringCopy(&Var2, "FEET_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 119:
		StringCopy(&Var2, "FEET_P1_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 120:
		StringCopy(&Var2, "FEET_P1_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 121:
		StringCopy(&Var2, "FEET_P1_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 122:
		StringCopy(&Var2, "FEET_P1_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 123:
		StringCopy(&Var2, "FEET_P1_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 124:
		StringCopy(&Var2, "FEET_P1_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 125:
		StringCopy(&Var2, "FEET_P1_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 126:
		StringCopy(&Var2, "FEET_P1_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 127:
		StringCopy(&Var2, "FEET_P1_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 128:
		StringCopy(&Var2, "FEET_P1_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 129:
		StringCopy(&Var2, "FEET_P1_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 130:
		StringCopy(&Var2, "FEET_P1_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 131:
		StringCopy(&Var2, "FEET_P1_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 132:
		StringCopy(&Var2, "FEET_P1_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 133:
		StringCopy(&Var2, "FEET_P1_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 110;
		break;

	default: func_125(iVar10, iParam0, 134); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16BBE
void func_154(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 32;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 38;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 44;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "LEGS_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "LEGS_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 15:
		StringCopy(&Var2, "LEGS_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 690;
		break;

	case 16:
		StringCopy(&Var2, "LEGS_P1_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 720;
		break;

	case 17:
		StringCopy(&Var2, "LEGS_P1_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 18:
		StringCopy(&Var2, "LEGS_P1_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 850;
		break;

	case 19:
		StringCopy(&Var2, "LEGS_P1_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 740;
		break;

	case 20:
		StringCopy(&Var2, "LEGS_P1_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 750;
		break;

	case 21:
		StringCopy(&Var2, "LEGS_P1_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 790;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P1_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 145;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P1_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 140;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P1_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 148;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P1_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P1_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 154;
		break;

	case 30:
		StringCopy(&Var2, "LEGS_P1_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 158;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "LEGS_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 820;
		break;

	case 34:
		StringCopy(&Var2, "LEGS_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 820;
		break;

	case 35:
		StringCopy(&Var2, "LEGS_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 850;
		break;

	case 36:
		StringCopy(&Var2, "LEGS_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 37:
		StringCopy(&Var2, "LEGS_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 920;
		break;

	case 38:
		StringCopy(&Var2, "LEGS_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 950;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 40:
		StringCopy(&Var2, "LEGS_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P1_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 45;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P1_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P1_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 45;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P1_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 48;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P1_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 52;
		break;

	case 46:
		StringCopy(&Var2, "LEGS_P1_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 55;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P1_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 58;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P1_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 60;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P1_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 58;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P1_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 62;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P1_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P1_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P1_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P1_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P1_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 180;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 180;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P1_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 118;
		break;

	case 80:
		StringCopy(&Var2, "LEGS_P1_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 120;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P1_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 128;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P1_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 128;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P1_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 130;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P1_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 145;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P1_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 138;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P1_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 132;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P1_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 148;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P1_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 118;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P1_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 118;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P1_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 118;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P1_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 129;
		break;

	case 92:
		StringCopy(&Var2, "LEGS_P1_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 135;
		break;

	case 93:
		StringCopy(&Var2, "LEGS_P1_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 135;
		break;

	case 94:
		StringCopy(&Var2, "LEGS_P1_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 118;
		break;

	case 95:
		StringCopy(&Var2, "LEGS_P1_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 118;
		break;

	case 96:
		StringCopy(&Var2, "LEGS_P1_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 118;
		break;

	case 97:
		StringCopy(&Var2, "LEGS_P1_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 55;
		break;

	case 98:
		StringCopy(&Var2, "LEGS_P1_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 55;
		break;

	case 99:
		StringCopy(&Var2, "LEGS_P1_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 59;
		break;

	case 100:
		StringCopy(&Var2, "LEGS_P1_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 59;
		break;

	case 101:
		StringCopy(&Var2, "LEGS_P1_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 102:
		StringCopy(&Var2, "LEGS_P1_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 65;
		break;

	case 103:
		StringCopy(&Var2, "LEGS_P1_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 69;
		break;

	case 104:
		StringCopy(&Var2, "LEGS_P1_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 69;
		break;

	case 105:
		StringCopy(&Var2, "LEGS_P1_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 106:
		StringCopy(&Var2, "LEGS_P1_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 107:
		StringCopy(&Var2, "LEGS_P1_22_10", 16);
		iVar6 = 22;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 108:
		StringCopy(&Var2, "LEGS_P1_22_11", 16);
		iVar6 = 22;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 109:
		StringCopy(&Var2, "LEGS_P1_22_12", 16);
		iVar6 = 22;
		iVar7 = 12;
		iVar1 = 65;
		break;

	case 110:
		StringCopy(&Var2, "LEGS_P1_22_13", 16);
		iVar6 = 22;
		iVar7 = 13;
		iVar1 = 65;
		break;

	case 111:
		StringCopy(&Var2, "LEGS_P1_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 38;
		break;

	case 112:
		StringCopy(&Var2, "LEGS_P1_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 38;
		break;

	case 113:
		StringCopy(&Var2, "LEGS_P1_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 28;
		break;

	case 114:
		StringCopy(&Var2, "LEGS_P1_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 34;
		break;

	case 115:
		StringCopy(&Var2, "LEGS_P1_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 36;
		break;

	case 116:
		StringCopy(&Var2, "LEGS_P1_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar1 = 32;
		break;

	default: func_125(iVar10, iParam0, 117); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1787A
void func_155(int iParam0) {
	if (iParam0 < 107) {
		func_158(iParam0);
	}
	else if (iParam0 < 227) {
		func_157(iParam0);
	}
	else {
		func_156(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_125(3, iParam0, 318);
	}
}

// Position - 0x178BF
void func_156(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 227:
		StringCopy(&Var2, "TORSO_P1_18_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 228:
		StringCopy(&Var2, "TORSO_P1_18_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar9 = 3;
		break;

	case 229:
		StringCopy(&Var2, "TORSO_P1_18_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar9 = 3;
		break;

	case 230:
		StringCopy(&Var2, "TORSO_P1_18_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 231:
		StringCopy(&Var2, "TORSO_P1_18_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 232:
		StringCopy(&Var2, "TORSO_P1_18_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 233:
		StringCopy(&Var2, "TORSO_P1_18_6", 16);
		iVar6 = 23;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 234:
		StringCopy(&Var2, "TORSO_P1_18_7", 16);
		iVar6 = 23;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 235:
		StringCopy(&Var2, "TORSO_P1_18_8", 16);
		iVar6 = 23;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 236:
		StringCopy(&Var2, "TORSO_P1_18_9", 16);
		iVar6 = 23;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 237:
		StringCopy(&Var2, "TORSO_P1_18_10", 16);
		iVar6 = 23;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 238:
		StringCopy(&Var2, "TORSO_P1_18_11", 16);
		iVar6 = 23;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 239:
		StringCopy(&Var2, "TORSO_P1_18_12", 16);
		iVar6 = 23;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 240:
		StringCopy(&Var2, "TORSO_P1_18_13", 16);
		iVar6 = 23;
		iVar7 = 13;
		iVar9 = 3;
		break;

	case 241:
		StringCopy(&Var2, "TORSO_P1_18_14", 16);
		iVar6 = 23;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 242:
		StringCopy(&Var2, "TORSO_P1_18_15", 16);
		iVar6 = 23;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 243:
		StringCopy(&Var2, "TORSO_P1_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 244:
		StringCopy(&Var2, "TORSO_P1_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 245:
		StringCopy(&Var2, "TORSO_P1_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 246:
		StringCopy(&Var2, "TORSO_P1_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 247:
		StringCopy(&Var2, "TORSO_P1_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 248:
		StringCopy(&Var2, "TORSO_P1_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 249:
		StringCopy(&Var2, "TORSO_P1_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 250:
		StringCopy(&Var2, "TORSO_P1_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 251:
		StringCopy(&Var2, "TORSO_P1_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 252:
		StringCopy(&Var2, "TORSO_P1_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 253:
		StringCopy(&Var2, "TORSO_P1_24_10", 16);
		iVar6 = 24;
		iVar7 = 10;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 254:
		StringCopy(&Var2, "TORSO_P1_24_11", 16);
		iVar6 = 24;
		iVar7 = 11;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 255:
		StringCopy(&Var2, "TORSO_P1_24_12", 16);
		iVar6 = 24;
		iVar7 = 12;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 256:
		StringCopy(&Var2, "TORSO_P1_24_13", 16);
		iVar6 = 24;
		iVar7 = 13;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 257:
		StringCopy(&Var2, "TORSO_P1_24_14", 16);
		iVar6 = 24;
		iVar7 = 14;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 258:
		StringCopy(&Var2, "TORSO_P1_24_15", 16);
		iVar6 = 24;
		iVar7 = 15;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 259:
		StringCopy(&Var2, "TORSO_P1_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 3;
		break;

	case 260:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar9 = 1;
		break;

	case 261:
		StringCopy(&Var2, "TORSO_P1_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 262:
		StringCopy(&Var2, "TORSO_P1_27_1", 16);
		iVar6 = 27;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 263:
		StringCopy(&Var2, "TORSO_P1_27_2", 16);
		iVar6 = 27;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 264:
		StringCopy(&Var2, "TORSO_P1_27_3", 16);
		iVar6 = 27;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 265:
		StringCopy(&Var2, "TORSO_P1_27_4", 16);
		iVar6 = 27;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 266:
		StringCopy(&Var2, "TORSO_P1_27_5", 16);
		iVar6 = 27;
		iVar7 = 5;
		iVar1 = 160;
		break;

	case 267:
		StringCopy(&Var2, "TORSO_P1_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 268:
		StringCopy(&Var2, "TORSO_P1_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 269:
		StringCopy(&Var2, "TORSO_P1_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 70;
		break;

	case 270:
		StringCopy(&Var2, "TORSO_P1_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 271:
		StringCopy(&Var2, "TORSO_P1_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 90;
		break;

	case 272:
		StringCopy(&Var2, "TORSO_P1_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 273:
		StringCopy(&Var2, "TORSO_P1_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 274:
		StringCopy(&Var2, "TORSO_P1_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 275:
		StringCopy(&Var2, "TORSO_P1_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 105;
		break;

	case 276:
		StringCopy(&Var2, "TORSO_P1_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 95;
		break;

	case 277:
		StringCopy(&Var2, "TORSO_P1_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 110;
		break;

	case 278:
		StringCopy(&Var2, "TORSO_P1_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 98;
		break;

	case 279:
		StringCopy(&Var2, "TORSO_P1_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 88;
		break;

	case 280:
		StringCopy(&Var2, "TORSO_P1_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 98;
		break;

	case 281:
		StringCopy(&Var2, "TORSO_P1_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 110;
		break;

	case 282:
		StringCopy(&Var2, "TORSO_P1_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 98;
		break;

	case 283:
		StringCopy(&Var2, "TORSO_P1_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 284:
		StringCopy(&Var2, "TORSO_P1_29_1", 16);
		iVar6 = 29;
		iVar7 = 1;
		iVar1 = 270;
		break;

	case 285:
		StringCopy(&Var2, "TORSO_P1_29_2", 16);
		iVar6 = 29;
		iVar7 = 2;
		iVar1 = 280;
		break;

	case 286:
		StringCopy(&Var2, "TORSO_P1_29_3", 16);
		iVar6 = 29;
		iVar7 = 3;
		iVar1 = 275;
		break;

	case 287:
		StringCopy(&Var2, "TORSO_P1_29_4", 16);
		iVar6 = 29;
		iVar7 = 4;
		iVar1 = 290;
		break;

	case 288:
		StringCopy(&Var2, "TORSO_P1_29_5", 16);
		iVar6 = 29;
		iVar7 = 5;
		iVar1 = 35;
		break;

	case 289:
		StringCopy(&Var2, "TORSO_P1_29_6", 16);
		iVar6 = 29;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 290:
		StringCopy(&Var2, "TORSO_P1_29_7", 16);
		iVar6 = 29;
		iVar7 = 7;
		iVar1 = 35;
		break;

	case 291:
		StringCopy(&Var2, "TORSO_P1_29_8", 16);
		iVar6 = 29;
		iVar7 = 8;
		iVar1 = 295;
		break;

	case 292:
		StringCopy(&Var2, "TORSO_P1_29_9", 16);
		iVar6 = 29;
		iVar7 = 9;
		iVar1 = 35;
		break;

	case 293:
		StringCopy(&Var2, "TORSO_P1_29_10", 16);
		iVar6 = 29;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 294:
		StringCopy(&Var2, "TORSO_P1_29_11", 16);
		iVar6 = 29;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 295:
		StringCopy(&Var2, "TORSO_P1_29_12", 16);
		iVar6 = 29;
		iVar7 = 12;
		break;

	case 296:
		StringCopy(&Var2, "TORSO_P1_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 1750;
		break;

	case 297:
		StringCopy(&Var2, "TORSO_P1_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 1920;
		break;

	case 298:
		StringCopy(&Var2, "TORSO_P1_30_2", 16);
		iVar6 = 30;
		iVar7 = 2;
		iVar1 = 1890;
		break;

	case 299:
		StringCopy(&Var2, "TORSO_P1_30_3", 16);
		iVar6 = 30;
		iVar7 = 3;
		iVar1 = 1850;
		break;

	case 300:
		StringCopy(&Var2, "TORSO_P1_30_4", 16);
		iVar6 = 30;
		iVar7 = 4;
		iVar1 = 1750;
		break;

	case 301:
		StringCopy(&Var2, "TORSO_P1_30_5", 16);
		iVar6 = 30;
		iVar7 = 5;
		iVar1 = 1990;
		break;

	case 302:
		StringCopy(&Var2, "TORSO_P1_30_6", 16);
		iVar6 = 30;
		iVar7 = 6;
		iVar1 = 1820;
		break;

	case 303:
		StringCopy(&Var2, "TORSO_P1_30_7", 16);
		iVar6 = 30;
		iVar7 = 7;
		iVar1 = 1990;
		break;

	case 304:
		StringCopy(&Var2, "TORSO_P1_30_8", 16);
		iVar6 = 30;
		iVar7 = 8;
		iVar1 = 1920;
		break;

	case 305:
		StringCopy(&Var2, "TORSO_P1_30_9", 16);
		iVar6 = 30;
		iVar7 = 9;
		iVar1 = 1850;
		break;

	case 306:
		StringCopy(&Var2, "TORSO_P1_30_10", 16);
		iVar6 = 30;
		iVar7 = 10;
		iVar1 = 1990;
		break;

	case 307:
		StringCopy(&Var2, "TORSO_P1_30_11", 16);
		iVar6 = 30;
		iVar7 = 11;
		iVar1 = 1790;
		break;

	case 308:
		StringCopy(&Var2, "TORSO_P1_30_12", 16);
		iVar6 = 30;
		iVar7 = 12;
		iVar1 = 1790;
		break;

	case 309:
		StringCopy(&Var2, "TORSO_P1_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		iVar1 = 69;
		break;

	case 310:
		StringCopy(&Var2, "TORSO_P1_31_1", 16);
		iVar6 = 31;
		iVar7 = 1;
		iVar1 = 75;
		break;

	case 311:
		StringCopy(&Var2, "TORSO_P1_31_2", 16);
		iVar6 = 31;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 312:
		StringCopy(&Var2, "TORSO_P1_31_3", 16);
		iVar6 = 31;
		iVar7 = 3;
		iVar1 = 79;
		break;

	case 313:
		StringCopy(&Var2, "TORSO_P1_31_4", 16);
		iVar6 = 31;
		iVar7 = 4;
		iVar1 = 79;
		break;

	case 314:
		StringCopy(&Var2, "TORSO_P1_31_5", 16);
		iVar6 = 31;
		iVar7 = 5;
		iVar1 = 89;
		break;

	case 315:
		StringCopy(&Var2, "TORSO_P1_31_6", 16);
		iVar6 = 31;
		iVar7 = 6;
		iVar1 = 85;
		break;

	case 316:
		StringCopy(&Var2, "TORSO_P1_31_7", 16);
		iVar6 = 31;
		iVar7 = 7;
		iVar1 = 85;
		break;

	case 317:
		StringCopy(&Var2, "TORSO_P1_31_8", 16);
		iVar6 = 31;
		iVar7 = 8;
		break;

	default: return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18366
void func_157(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 107:
		StringCopy(&Var2, "TORSO_P1_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 195;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P1_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 420;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P1_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 390;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P1_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 450;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P1_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 400;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P1_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 390;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P1_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 570;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P1_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 390;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P1_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 470;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P1_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 390;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P1_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 520;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P1_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 490;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P1_12_12", 16);
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 490;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P1_12_13", 16);
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 590;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P1_12_14", 16);
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 560;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P1_12_15", 16);
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 520;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P1_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P1_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P1_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P1_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 85;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P1_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 45;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P1_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 90;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P1_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 47;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P1_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 45;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P1_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 48;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P1_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 45;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P1_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 85;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P1_13_12", 16);
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 45;
		break;

	case 136:
		StringCopy(&Var2, "TORSO_P1_13_13", 16);
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 47;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P1_13_14", 16);
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P1_13_15", 16);
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 48;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P1_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 290;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P1_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 290;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P1_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 290;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P1_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 290;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P1_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 290;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P1_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 65;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P1_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 65;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 220;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 220;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 250;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 260;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 40;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 45;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 40;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 55;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P1_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 40;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P1_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 50;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P1_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P1_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P1_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 50;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P1_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P1_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P1_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P1_17_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P1_17_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		iVar1 = 50;
		break;

	case 170:
		StringCopy(&Var2, "TORSO_P1_17_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P1_17_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		iVar1 = 50;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P1_17_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P1_17_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P1_17_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		iVar1 = 50;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P1_17_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		iVar1 = 50;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar9 = 3;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar9 = 3;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 181:
		StringCopy(&Var2, "TORSO_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 182:
		StringCopy(&Var2, "TORSO_P1_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 183:
		StringCopy(&Var2, "TORSO_P1_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 184:
		StringCopy(&Var2, "TORSO_P1_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 185:
		StringCopy(&Var2, "TORSO_P1_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 186:
		StringCopy(&Var2, "TORSO_P1_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 187:
		StringCopy(&Var2, "TORSO_P1_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 188:
		StringCopy(&Var2, "TORSO_P1_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 189:
		StringCopy(&Var2, "TORSO_P1_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar9 = 3;
		break;

	case 190:
		StringCopy(&Var2, "TORSO_P1_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 191:
		StringCopy(&Var2, "TORSO_P1_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 192:
		StringCopy(&Var2, "TORSO_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 193:
		StringCopy(&Var2, "TORSO_P1_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 194:
		StringCopy(&Var2, "TORSO_P1_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 195:
		StringCopy(&Var2, "TORSO_P1_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 196:
		StringCopy(&Var2, "TORSO_P1_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 197:
		StringCopy(&Var2, "TORSO_P1_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 198:
		StringCopy(&Var2, "TORSO_P1_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 199:
		StringCopy(&Var2, "TORSO_P1_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 200:
		StringCopy(&Var2, "TORSO_P1_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 201:
		StringCopy(&Var2, "TORSO_P1_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 202:
		StringCopy(&Var2, "TORSO_P1_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 203:
		StringCopy(&Var2, "TORSO_P1_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 204:
		StringCopy(&Var2, "TORSO_P1_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 205:
		StringCopy(&Var2, "TORSO_P1_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 206:
		StringCopy(&Var2, "TORSO_P1_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 207:
		StringCopy(&Var2, "TORSO_P1_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 208:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 209:
		StringCopy(&Var2, "TORSO_P1_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 220;
		break;

	case 210:
		StringCopy(&Var2, "TORSO_P1_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 200;
		break;

	case 211:
		StringCopy(&Var2, "TORSO_P1_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 240;
		break;

	case 212:
		StringCopy(&Var2, "TORSO_P1_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 213:
		StringCopy(&Var2, "TORSO_P1_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 260;
		break;

	case 214:
		StringCopy(&Var2, "TORSO_P1_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 275;
		break;

	case 215:
		StringCopy(&Var2, "TORSO_P1_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 275;
		break;

	case 216:
		StringCopy(&Var2, "TORSO_P1_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 280;
		break;

	case 217:
		StringCopy(&Var2, "TORSO_P1_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 280;
		break;

	case 218:
		StringCopy(&Var2, "TORSO_P1_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 280;
		break;

	case 219:
		StringCopy(&Var2, "TORSO_P1_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 280;
		break;

	case 220:
		StringCopy(&Var2, "TORSO_P1_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 280;
		break;

	case 221:
		StringCopy(&Var2, "TORSO_P1_21_12", 16);
		iVar6 = 21;
		iVar7 = 12;
		iVar1 = 280;
		break;

	case 222:
		StringCopy(&Var2, "TORSO_P1_21_13", 16);
		iVar6 = 21;
		iVar7 = 13;
		iVar1 = 280;
		break;

	case 223:
		StringCopy(&Var2, "TORSO_P1_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 3100;
		iVar9 = 3;
		break;

	case 224:
		StringCopy(&Var2, "TORSO_P1_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 2800;
		iVar9 = 3;
		break;

	case 225:
		StringCopy(&Var2, "TORSO_P1_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 2500;
		iVar9 = 3;
		break;

	case 226:
		StringCopy(&Var2, "TORSO_P1_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 3000;
		iVar9 = 3;
		break;

	default: return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x19155
void func_158(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 180;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P1_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 20;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P1_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 18;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P1_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 19;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P1_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 22;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P1_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 20;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P1_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 19;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P1_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 19;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P1_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 18;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P1_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 20;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P1_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 22;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P1_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 19;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P1_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 22;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 3;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 1;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 20;
		iVar9 = 2;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P1_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 22;
		iVar9 = 2;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P1_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 20;
		iVar9 = 2;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P1_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P1_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 23;
		iVar9 = 2;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P1_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P1_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 28;
		iVar9 = 2;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P1_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 26;
		iVar9 = 2;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P1_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 24;
		iVar9 = 2;
		break;

	case 33:
		StringCopy(&Var2, "TORSO_P1_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 27;
		iVar9 = 2;
		break;

	case 34:
		StringCopy(&Var2, "TORSO_P1_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 29;
		iVar9 = 2;
		break;

	case 35:
		StringCopy(&Var2, "TORSO_P1_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 28;
		iVar9 = 2;
		break;

	case 36:
		StringCopy(&Var2, "TORSO_P1_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 37:
		StringCopy(&Var2, "TORSO_P1_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 22;
		iVar9 = 2;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P1_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 27;
		iVar9 = 2;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P1_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 29;
		iVar9 = 2;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 43:
		StringCopy(&Var2, "TORSO_P1_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 44:
		StringCopy(&Var2, "TORSO_P1_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 45:
		StringCopy(&Var2, "TORSO_P1_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1090;
		iVar9 = 3;
		break;

	case 46:
		StringCopy(&Var2, "TORSO_P1_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 1090;
		iVar9 = 3;
		break;

	case 47:
		StringCopy(&Var2, "TORSO_P1_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 1120;
		iVar9 = 3;
		break;

	case 48:
		StringCopy(&Var2, "TORSO_P1_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 1120;
		iVar9 = 3;
		break;

	case 49:
		StringCopy(&Var2, "TORSO_P1_6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 1290;
		iVar9 = 3;
		break;

	case 50:
		StringCopy(&Var2, "TORSO_P1_6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 1290;
		iVar9 = 3;
		break;

	case 51:
		StringCopy(&Var2, "TORSO_P1_6_10", 16);
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 52:
		StringCopy(&Var2, "TORSO_P1_6_11", 16);
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 53:
		StringCopy(&Var2, "TORSO_P1_6_12", 16);
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P1_6_13", 16);
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P1_6_14", 16);
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P1_6_15", 16);
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P1_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 98;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P1_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 98;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P1_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 60:
		StringCopy(&Var2, "TORSO_P1_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 61:
		StringCopy(&Var2, "TORSO_P1_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 118;
		break;

	case 62:
		StringCopy(&Var2, "TORSO_P1_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 63:
		StringCopy(&Var2, "TORSO_P1_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 64:
		StringCopy(&Var2, "TORSO_P1_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 129;
		break;

	case 65:
		StringCopy(&Var2, "TORSO_P1_7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 125;
		break;

	case 66:
		StringCopy(&Var2, "TORSO_P1_7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 125;
		break;

	case 67:
		StringCopy(&Var2, "TORSO_P1_7_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 129;
		break;

	case 68:
		StringCopy(&Var2, "TORSO_P1_7_11", 16);
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 129;
		break;

	case 69:
		StringCopy(&Var2, "TORSO_P1_7_12", 16);
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 135;
		break;

	case 70:
		StringCopy(&Var2, "TORSO_P1_7_13", 16);
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 139;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P1_7_14", 16);
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 145;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P1_7_15", 16);
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 145;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P1_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P1_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 76:
		StringCopy(&Var2, "TORSO_P1_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P1_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 30;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P1_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 38;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P1_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 32;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P1_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 30;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P1_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 33;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P1_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 35;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P1_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P1_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 38;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P1_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 33;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P1_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 35;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P1_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 38;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P1_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 32;
		break;

	case 89:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 91:
		StringCopy(&Var2, "TORSO_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 59;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 25;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 29;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 27;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 25;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 28;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 29;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 27;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 29;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P1_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 32;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P1_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 30;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P1_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 28;
		break;

	default: return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x19D9E
void func_159(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P1_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 5:
		StringCopy(&Var2, "HAIR_P1_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 6:
		StringCopy(&Var2, "HAIR_P1_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 7:
		StringCopy(&Var2, "HAIR_P1_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 8:
		StringCopy(&Var2, "HAIR_P1_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 9:
		StringCopy(&Var2, "HAIR_P1_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 10:
		StringCopy(&Var2, "HAIR_P1_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 11:
		StringCopy(&Var2, "HAIR_P1_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 12:
		StringCopy(&Var2, "HAIR_P1_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 13:
		StringCopy(&Var2, "HAIR_P1_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "HAIR_P1_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 15:
		StringCopy(&Var2, "HAIR_P1_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 16:
		StringCopy(&Var2, "HAIR_P1_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 17:
		StringCopy(&Var2, "HAIR_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 18:
		StringCopy(&Var2, "HAIR_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 19:
		StringCopy(&Var2, "HAIR_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_125(iVar10, iParam0, 21); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1A016
void func_160(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	default: func_125(iVar10, iParam0, 10); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1A15B
void func_161(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_178(iParam1); break;

	case 2: func_177(iParam1); break;

	case 3: func_174(iParam1); break;

	case 4: func_173(iParam1); break;

	case 6: func_172(iParam1); break;

	case 5: func_171(iParam1); break;

	case 8: func_170(iParam1); break;

	case 9: func_169(iParam1); break;

	case 10: func_168(iParam1); break;

	case 1: func_167(iParam1); break;

	case 7: func_166(iParam1); break;

	case 11: func_165(iParam1); break;

	case 12: func_164(iParam1); break;

	case 13: func_163(iParam1); break;

	case 14: func_162(iParam1); break;
	}
}

// Position - 0x1A24B
void func_162(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "PROPS_P0_H1", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "PROPS_P0_H2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 11;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "PROPS_P0_H12", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "PROPS_P0_E0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 45;
		iVar8 = 10;
		break;

	case 59:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 61:
		StringCopy(&Var2, "PROPS_P0_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 62:
		StringCopy(&Var2, "PROPS_P0_E4", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 63:
		StringCopy(&Var2, "PROPS_P0_E4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 56;
		iVar8 = 10;
		break;

	case 64:
		StringCopy(&Var2, "PROPS_P0_E4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 65:
		StringCopy(&Var2, "PROPS_P0_E4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 66:
		StringCopy(&Var2, "PROPS_P0_E4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 62;
		iVar8 = 10;
		break;

	case 67:
		StringCopy(&Var2, "PROPS_P0_E4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 68:
		StringCopy(&Var2, "PROPS_P0_E4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 69:
		StringCopy(&Var2, "PROPS_P0_E4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 70:
		StringCopy(&Var2, "PROPS_P0_E5", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P0_E5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P0_E5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 72;
		iVar8 = 10;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P0_E5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 70;
		iVar8 = 10;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P0_E5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 74;
		iVar8 = 10;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P0_E5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 78;
		iVar8 = 10;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P0_E5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 82;
		iVar8 = 10;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P0_E5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 85;
		iVar8 = 10;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P0_E5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 85;
		iVar8 = 10;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P0_E5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar8 = 10;
		break;

	case 80:
		StringCopy(&Var2, "PROPS_P0_E6", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 81:
		StringCopy(&Var2, "PROPS_P0_E6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 82:
		StringCopy(&Var2, "PROPS_P0_E6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P0_E6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P0_E6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P0_E6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P0_E6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 87:
		StringCopy(&Var2, "PROPS_P0_E6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 88:
		StringCopy(&Var2, "PROPS_P0_E6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P0_E6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P0_E7", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P0_E8", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P0_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P0_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P0_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P0_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P0_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P0_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 235;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P0_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 245;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P0_E8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 250;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P0_E8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 275;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P0_E8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 280;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P0_E8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 295;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P0_E9", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 179;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P0_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 159;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P0_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P0_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P0_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P0_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P0_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "PROPS_P0_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 225;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	default: func_125(iVar10, iParam0, 113); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1AFD4
void func_163(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_125(iVar10, iParam0, 10); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1B14D
void func_164(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "OUTFIT_P0_1", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "OUTFIT_P0_4", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P0_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P0_8", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P0_9", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P0_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P0_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P0_14", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P0_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P0_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P0_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P0_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P0_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P0_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P0_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P0_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P0_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P0_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P0_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P0_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P0_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P0_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P0_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P0_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P0_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P0_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P0_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 840;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P0_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P0_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P0_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P0_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P0_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P0_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P0_44", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P0_45", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4000;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P0_46", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P0_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4600;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P0_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P0_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4400;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P0_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4400;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P0_51", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P0_52", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P0_53", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 47:
		StringCopy(&Var2, "OUTFIT_P0_54", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 48:
		StringCopy(&Var2, "OUTFIT_P0_55", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 49:
		StringCopy(&Var2, "OUTFIT_P0_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 53); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1B6C3
void func_165(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "JBIB_P0_02_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "JBIB_P0_02_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 4:
		StringCopy(&Var2, "JBIB_P0_02_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 5:
		StringCopy(&Var2, "JBIB_P0_02_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 6:
		StringCopy(&Var2, "JBIB_P0_02_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		break;

	case 7:
		StringCopy(&Var2, "JBIB_P0_02_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		break;

	case 8:
		StringCopy(&Var2, "JBIB_P0_03_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 9:
		StringCopy(&Var2, "JBIB_P0_03_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 10:
		StringCopy(&Var2, "JBIB_P0_03_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 420;
		break;

	case 11:
		StringCopy(&Var2, "JBIB_P0_03_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 420;
		break;

	case 12:
		StringCopy(&Var2, "JBIB_P0_03_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 490;
		break;

	case 13:
		StringCopy(&Var2, "JBIB_P0_03_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 490;
		break;

	case 14:
		StringCopy(&Var2, "JBIB_P0_03_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 540;
		break;

	case 15:
		StringCopy(&Var2, "JBIB_P0_03_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 540;
		break;

	case 16:
		StringCopy(&Var2, "JBIB_P0_03_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 550;
		break;

	case 17:
		StringCopy(&Var2, "JBIB_P0_03_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 540;
		break;

	case 18:
		StringCopy(&Var2, "JBIB_P0_04_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 19:
		StringCopy(&Var2, "JBIB_P0_04_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 850;
		break;

	case 20:
		StringCopy(&Var2, "JBIB_P0_04_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 890;
		break;

	case 21:
		StringCopy(&Var2, "JBIB_P0_04_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 22:
		StringCopy(&Var2, "JBIB_P0_04_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 920;
		break;

	case 23:
		StringCopy(&Var2, "JBIB_P0_04_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 920;
		break;

	case 24:
		StringCopy(&Var2, "JBIB_P0_04_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 950;
		break;

	case 25:
		StringCopy(&Var2, "JBIB_P0_04_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 980;
		break;

	case 26:
		StringCopy(&Var2, "JBIB_P0_04_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 1050;
		break;

	case 27:
		StringCopy(&Var2, "JBIB_P0_04_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 1100;
		break;

	case 28:
		StringCopy(&Var2, "JBIB_P0_05_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 1890;
		break;

	case 29:
		StringCopy(&Var2, "JBIB_P0_05_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 1820;
		break;

	case 30:
		StringCopy(&Var2, "JBIB_P0_05_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 1820;
		break;

	case 31:
		StringCopy(&Var2, "JBIB_P0_05_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 1850;
		break;

	case 32:
		StringCopy(&Var2, "JBIB_P0_05_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 1850;
		break;

	case 33:
		StringCopy(&Var2, "JBIB_P0_05_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 1900;
		break;

	case 34:
		StringCopy(&Var2, "JBIB_P0_05_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 1920;
		break;

	case 35:
		StringCopy(&Var2, "JBIB_P0_05_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 1980;
		break;

	case 36:
		StringCopy(&Var2, "JBIB_P0_05_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 2100;
		break;

	case 37:
		StringCopy(&Var2, "JBIB_P0_05_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 2120;
		break;

	case 38:
		StringCopy(&Var2, "JBIB_P0_05_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 2000;
		break;

	case 39:
		StringCopy(&Var2, "JBIB_P0_05_11", 16);
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 2200;
		break;

	case 40:
		StringCopy(&Var2, "JBIB_P0_05_12", 16);
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 2280;
		break;

	case 41:
		StringCopy(&Var2, "JBIB_P0_05_13", 16);
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 2300;
		break;

	case 42:
		StringCopy(&Var2, "JBIB_P0_05_14", 16);
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 2350;
		break;

	case 43:
		StringCopy(&Var2, "JBIB_P0_05_15", 16);
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 2280;
		break;

	case 44:
		StringCopy(&Var2, "JBIB_P0_06_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 45); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1BBEC
void func_166(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 1); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1BC5F
void func_167(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P0_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P0_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P0_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P0_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 5); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1BD2E
void func_168(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 5;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 6;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 7;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 5;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 4;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 5;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 6;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 1;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 2;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 3;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 4;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 5;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 6;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 7;
		break;

	case 36:
		StringCopy(&Var2, "DECL_P0_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		break;

	case 37:
		StringCopy(&Var2, "DECL_P0_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		break;

	case 38:
		StringCopy(&Var2, "DECL_P0_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		break;

	case 39:
		StringCopy(&Var2, "DECL_P0_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		break;

	case 40:
		StringCopy(&Var2, "DECL_P0_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		break;

	case 41:
		StringCopy(&Var2, "DECL_P0_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		break;

	case 42:
		StringCopy(&Var2, "DECL_P0_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		break;

	case 43:
		StringCopy(&Var2, "DECL_P0_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		break;

	default: func_125(iVar10, iParam0, 48); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1C207
void func_169(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 11:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 12:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 13:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 14:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_125(iVar10, iParam0, 20); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1C46F
void func_170(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "SPEC_P0_10", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "SPEC_P0_16", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_125(iVar10, iParam0, 24); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1C744
void func_171(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_125(iVar10, iParam0, 14); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1C90C
void func_172(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P0_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 665;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 620;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 540;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 580;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 650;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P0_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P0_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P0_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 64;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P0_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 56;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P0_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 69;
		break;

	case 24:
		StringCopy(&Var2, "FEET_P0_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 59;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P0_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 62;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P0_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 74;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P0_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P0_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 72;
		break;

	case 29:
		StringCopy(&Var2, "FEET_P0_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 70;
		break;

	case 30:
		StringCopy(&Var2, "FEET_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 48;
		break;

	case 31:
		StringCopy(&Var2, "FEET_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 32:
		StringCopy(&Var2, "FEET_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 55;
		break;

	case 33:
		StringCopy(&Var2, "FEET_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 75;
		break;

	case 34:
		StringCopy(&Var2, "FEET_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 35:
		StringCopy(&Var2, "FEET_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 68;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P0_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P0_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P0_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P0_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P0_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P0_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P0_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P0_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P0_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P0_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P0_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P0_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P0_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P0_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P0_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P0_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P0_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P0_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P0_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P0_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P0_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P0_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P0_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P0_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P0_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P0_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P0_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P0_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P0_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P0_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P0_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P0_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 73:
		StringCopy(&Var2, "FEET_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P0_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P0_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P0_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P0_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P0_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P0_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P0_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P0_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P0_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P0_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 84:
		StringCopy(&Var2, "FEET_P0_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 85:
		StringCopy(&Var2, "FEET_P0_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 86:
		StringCopy(&Var2, "FEET_P0_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 110;
		break;

	case 87:
		StringCopy(&Var2, "FEET_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 720;
		break;

	case 88:
		StringCopy(&Var2, "FEET_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 89:
		StringCopy(&Var2, "FEET_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 90:
		StringCopy(&Var2, "FEET_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 91:
		StringCopy(&Var2, "FEET_P0_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 92:
		StringCopy(&Var2, "FEET_P0_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 93:
		StringCopy(&Var2, "FEET_P0_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 94:
		StringCopy(&Var2, "FEET_P0_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 95:
		StringCopy(&Var2, "FEET_P0_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 96:
		StringCopy(&Var2, "FEET_P0_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 97:
		StringCopy(&Var2, "FEET_P0_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 98:
		StringCopy(&Var2, "FEET_P0_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 700;
		break;

	default: func_125(iVar10, iParam0, 99); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1D45F
void func_173(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "LEGS_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "LEGS_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "LEGS_P0_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "LEGS_P0_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "LEGS_P0_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "LEGS_P0_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	case 10:
		StringCopy(&Var2, "LEGS_P0_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		break;

	case 11:
		StringCopy(&Var2, "LEGS_P0_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		break;

	case 12:
		StringCopy(&Var2, "LEGS_P0_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		break;

	case 13:
		StringCopy(&Var2, "LEGS_P0_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "LEGS_P0_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		break;

	case 15:
		StringCopy(&Var2, "LEGS_P0_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "LEGS_P0_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P0_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P0_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 128;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P0_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 118;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P0_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P0_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P0_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 128;
		break;

	case 30:
		StringCopy(&Var2, "LEGS_P0_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 125;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P0_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 68;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P0_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 68;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P0_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 68;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P0_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 68;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P0_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 68;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P0_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P0_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 550;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P0_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P0_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 875;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P0_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P0_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 720;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P0_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 750;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P0_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 850;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 38;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 38;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 42;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 46;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P0_16_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar1 = 46;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P0_16_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar1 = 46;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P0_16_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar1 = 68;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P0_16_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar1 = 58;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P0_16_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P0_16_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		iVar1 = 68;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P0_16_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		iVar1 = 68;
		break;

	case 70:
		StringCopy(&Var2, "LEGS_P0_16_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		iVar1 = 42;
		break;

	case 71:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P0_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P0_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 250;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P0_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 250;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P0_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 290;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P0_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 270;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P0_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 270;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P0_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 15;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P0_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 12;
		break;

	case 80:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 118;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 95;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 98;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P0_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 140;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P0_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P0_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P0_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 130;
		break;

	case 92:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 93:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "LEGS_P0_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		break;

	case 96:
		StringCopy(&Var2, "LEGS_P0_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 97:
		StringCopy(&Var2, "LEGS_P0_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 98:
		StringCopy(&Var2, "LEGS_P0_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 99:
		StringCopy(&Var2, "LEGS_P0_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 52;
		break;

	case 100:
		StringCopy(&Var2, "LEGS_P0_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 52;
		break;

	case 101:
		StringCopy(&Var2, "LEGS_P0_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 55;
		break;

	case 102:
		StringCopy(&Var2, "LEGS_P0_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 55;
		break;

	case 103:
		StringCopy(&Var2, "LEGS_P0_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 104:
		StringCopy(&Var2, "LEGS_P0_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 58;
		break;

	case 105:
		StringCopy(&Var2, "LEGS_P0_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 58;
		break;

	case 106:
		StringCopy(&Var2, "LEGS_P0_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 60;
		break;

	case 107:
		StringCopy(&Var2, "LEGS_P0_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 108:
		StringCopy(&Var2, "LEGS_P0_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 62;
		break;

	case 109:
		StringCopy(&Var2, "LEGS_P0_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 62;
		break;

	case 110:
		StringCopy(&Var2, "LEGS_P0_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 65;
		break;

	case 111:
		StringCopy(&Var2, "LEGS_P0_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 65;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 29;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 113); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1E0A8
void func_174(int iParam0) {
	if (iParam0 < 60) {
		func_176(iParam0);
	}
	else {
		func_175(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_125(3, iParam0, 181);
	}
}

// Position - 0x1E0DC
void func_175(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 64:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 66:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 67:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "TORSO_P0_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P0_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 120;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P0_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P0_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 120;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P0_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 120;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P0_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 76:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 20;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 24;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 25;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P0_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P0_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P0_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P0_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 48;
		break;

	case 89:
		StringCopy(&Var2, "TORSO_P0_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 90:
		StringCopy(&Var2, "TORSO_P0_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 45;
		break;

	case 91:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P0_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P0_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 190;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P0_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 190;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P0_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 190;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P0_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 210;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 55;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P0_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P0_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 99;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P0_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 49;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P0_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P0_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P0_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P0_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 107:
		StringCopy(&Var2, "TORSO_P0_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 90;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P0_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 95;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P0_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 39;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P0_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 95;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P0_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 35;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P0_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 95;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 70;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P0_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 90;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P0_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P0_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P0_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P0_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 105;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P0_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 95;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P0_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 110;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P0_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 98;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P0_21_12", 16);
		iVar6 = 21;
		iVar7 = 12;
		iVar1 = 88;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P0_21_13", 16);
		iVar6 = 21;
		iVar7 = 13;
		iVar1 = 98;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P0_21_14", 16);
		iVar6 = 21;
		iVar7 = 14;
		iVar1 = 110;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P0_21_15", 16);
		iVar6 = 21;
		iVar7 = 15;
		iVar1 = 98;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P0_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P0_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 4950;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P0_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 4195;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P0_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 3195;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P0_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 2950;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P0_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 3950;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P0_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 3200;
		break;

	case 136:
		StringCopy(&Var2, "TORSO_P0_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 3200;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P0_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 3200;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P0_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 3200;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P0_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 3200;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P0_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar1 = 3200;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P0_23_6", 16);
		iVar6 = 23;
		iVar7 = 6;
		iVar1 = 3200;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P0_23_7", 16);
		iVar6 = 23;
		iVar7 = 7;
		iVar1 = 3200;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P0_23_8", 16);
		iVar6 = 23;
		iVar7 = 8;
		iVar1 = 3200;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P0_23_9", 16);
		iVar6 = 23;
		iVar7 = 9;
		iVar1 = 3200;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P0_23_10", 16);
		iVar6 = 23;
		iVar7 = 10;
		iVar1 = 3200;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P0_23_11", 16);
		iVar6 = 23;
		iVar7 = 11;
		iVar1 = 3200;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P0_23_12", 16);
		iVar6 = 23;
		iVar7 = 12;
		iVar1 = 3200;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P0_23_13", 16);
		iVar6 = 23;
		iVar7 = 13;
		iVar1 = 3200;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P0_23_14", 16);
		iVar6 = 23;
		iVar7 = 14;
		iVar1 = 3200;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P0_23_15", 16);
		iVar6 = 23;
		iVar7 = 15;
		iVar1 = 3200;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P0_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 1350;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P0_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 1400;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P0_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 1200;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P0_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 1250;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P0_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 1350;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P0_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 1300;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P0_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 1380;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P0_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 1340;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P0_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 1380;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P0_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 1250;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P0_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar1 = 840;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P0_25_1", 16);
		iVar6 = 25;
		iVar7 = 1;
		iVar1 = 840;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P0_25_2", 16);
		iVar6 = 25;
		iVar7 = 2;
		iVar1 = 840;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P0_25_3", 16);
		iVar6 = 25;
		iVar7 = 3;
		iVar1 = 840;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P0_25_4", 16);
		iVar6 = 25;
		iVar7 = 4;
		iVar1 = 840;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P0_25_5", 16);
		iVar6 = 25;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P0_25_6", 16);
		iVar6 = 25;
		iVar7 = 6;
		iVar1 = 840;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P0_25_7", 16);
		iVar6 = 25;
		iVar7 = 7;
		iVar1 = 840;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P0_26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 170:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P0_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P0_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 130;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P0_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P0_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P0_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P0_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 320;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P0_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		iVar1 = 59;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P0_31_1", 16);
		iVar6 = 31;
		iVar7 = 1;
		iVar1 = 55;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P0_31_2", 16);
		iVar6 = 31;
		iVar7 = 2;
		iVar1 = 59;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P0_31_3", 16);
		iVar6 = 31;
		iVar7 = 3;
		iVar1 = 49;
		break;

	default: return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1EE7C
void func_176(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 3500;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P0_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P0_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P0_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P0_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P0_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P0_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P0_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P0_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P0_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P0_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 20;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 18;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 22;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 25;
		break;

	case 21:
		StringCopy(&Var2, "TORSO_P0_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 19;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P0_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 20;
		break;

	case 23:
		StringCopy(&Var2, "TORSO_P0_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P0_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 18;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P0_2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 39;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P0_2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 32;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P0_2_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P0_2_11", 16);
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P0_2_12", 16);
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 210;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P0_2_13", 16);
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 250;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P0_2_14", 16);
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 290;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P0_2_15", 16);
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 310;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P0_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P0_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 40:
		StringCopy(&Var2, "TORSO_P0_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P0_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P0_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 43:
		StringCopy(&Var2, "TORSO_P0_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 160;
		break;

	case 44:
		StringCopy(&Var2, "TORSO_P0_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "TORSO_P0_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 52;
		break;

	case 46:
		StringCopy(&Var2, "TORSO_P0_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 52;
		break;

	case 47:
		StringCopy(&Var2, "TORSO_P0_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 55;
		break;

	case 48:
		StringCopy(&Var2, "TORSO_P0_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 55;
		break;

	case 49:
		StringCopy(&Var2, "TORSO_P0_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 58;
		break;

	case 50:
		StringCopy(&Var2, "TORSO_P0_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 51:
		StringCopy(&Var2, "TORSO_P0_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 62;
		break;

	case 52:
		StringCopy(&Var2, "TORSO_P0_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 65;
		break;

	case 53:
		StringCopy(&Var2, "TORSO_P0_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 65;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P0_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 68;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P0_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 68;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P0_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 55;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P0_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 62;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P0_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 58;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P0_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 58;
		break;

	default: return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1F508
void func_177(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P0_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P0_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P0_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P0_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	default: func_125(iVar10, iParam0, 6); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1F5EE
void func_178(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	default: func_125(iVar10, iParam0, 7); return;
	}
	func_118(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1F6EB
void func_179() {
	Global_69523[0 /*14*/].f_1 = -1;
	Global_69523[0 /*14*/].f_2 = -1;
	Global_69523[0 /*14*/].f_5 = -1;
	Global_69523[0 /*14*/].f_3 = -1;
	Global_69523[0 /*14*/].f_4 = -1;
	Global_69523[0 /*14*/].f_7 = 0;
	Global_69523[0 /*14*/].f_6 = 0;
	Global_69523[0 /*14*/].f_13 = -1;
	Global_69523[0 /*14*/].f_12 = 0;
	Global_69523[0 /*14*/] = 0;
	StringCopy(&Global_69523[0 /*14*/].f_8, "NO_LABEL", 16);
}

// Position - 0x1F764
bool func_180(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var *uVar5;
	var uVar22;
	int iVar32;
	var uVar33;

	if (ped::is_ped_injured(iParam0)) {
		return false;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_115(iVar0, iParam1, iParam2)};
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return false;
	}
	if (iParam1 == 12) {
		uVar5 = {func_111(iVar0, iParam2)};
		iVar2 = 0;
		while (iVar2 <= 14) {
			if (uVar5[iVar2] != -99 && iVar2 != 12 && iVar2 != 14) {
				if (!func_180(iParam0, iVar2, uVar5[iVar2])) {
					if (iVar2 == 13) {
						uVar22 = {func_108(iVar0, uVar5[iVar2])};
						iVar3 = 0;
						while (iVar3 <= 8) {
							if (!func_180(iParam0, 14, uVar22[iVar3])) {
								iVar4 = 0;
								while (iVar4 <= 19) {
									Global_69523[2 /*14*/] = {func_115(iVar0, 14, iVar4)};
									if (Global_69523[2 /*14*/].f_12 == iVar3) {
										if (func_180(iParam0, 14, iVar4)) {
											if (!func_71(iVar0, iParam2, 14, iVar4, &uVar5, &Global_69523[2 /*14*/])) {
												return false;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else {
						iVar1 = func_96(iParam0, iVar2);
						Global_69523[2 /*14*/] = {func_115(iVar0, iVar2, iVar1)};
						if (!func_71(iVar0, iParam2, iVar2, iVar1, &uVar5, &Global_69523[2 /*14*/])) {
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13) {
		uVar33 = {func_108(iVar0, iParam2)};
		iVar32 = 0;
		while (iVar32 <= 8) {
			if (!func_180(iParam0, 14, uVar33[iVar32])) {
				return false;
			}
			iVar32++;
		}
		return true;
	}
	else if (iParam1 == 14) {
		if (ped::get_ped_prop_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_3 &&
			(ped::get_ped_prop_texture_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_4 ||
			 Global_69523[1 /*14*/].f_3 == -1)) {
			return true;
		}
	}
	else if (Global_69523[1 /*14*/].f_3 == ped::get_ped_drawable_variation(iParam0, func_107(iParam1)) &&
			 Global_69523[1 /*14*/].f_4 == ped::get_ped_texture_variation(iParam0, func_107(iParam1))) {
		return true;
	}
	return false;
}

// Position - 0x1F9BC
int func_181(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_235(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x1F9F9
void func_182(char *sParam0, int iParam1) {
	stats::stat_set_gxt_label(joaat("sp_last_mission_name"), sParam0, 1);
	if (gameplay::is_bit_set(iParam1, 0)) {
		stats::stat_set_gxt_label(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (gameplay::is_bit_set(iParam1, 1)) {
		stats::stat_set_gxt_label(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (gameplay::is_bit_set(iParam1, 2)) {
		stats::stat_set_gxt_label(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

// Position - 0x1FA53
int func_183() {
	func_184();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x1FA99
void func_184() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_235(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_181(player::player_ped_id());
			if (func_185(iVar0) && (!func_123(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_185(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x1FB96
bool func_185(int iParam0) { return iParam0 < 3; }

// Position - 0x1FBA2
struct<2> func_186(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_187(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x1FBDA
struct<2>
func_187(int iParam0) {
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

//Position - 0x20028
void func_188(int iParam0, int iParam1)
{
	Global_69970 = iParam1;
	if (Global_55816) {
		return;
	}
	if (Global_55843) {
		Global_55843 = 0;
		return;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) > 0) {
		if (Global_55816) {
		}
		Global_55842 = iParam0;
		Global_55816 = 1;
		Global_55827 = 1;
	}
}

// Position - 0x20072
void func_189(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		ped::set_ped_config_flag(player::player_ped_id(), 32, 1);
		ped::set_ped_config_flag(player::player_ped_id(), 250, 1);
	}
	player::set_player_control(player::player_id(), 1, 0);
	player::set_wanted_level_multiplier(1f);
	player::set_max_wanted_level(5);
	player::set_all_random_peds_flee(player::player_id(), 0);
	player::set_player_weapon_damage_modifier(player::player_id(), 1f);
	player::set_player_weapon_defense_modifier(player::player_id(), 1f);
	ui::display_hud(1);
	ui::display_radar(1);
	cam::set_widescreen_borders(0, 0);
	gameplay::set_time_scale(1f);
	func_200();
	func_199(1, 1);
	func_198();
	func_196();
	func_195(30000);
	if (iParam1 == 1) {
		func_190(iParam0, iParam2, iParam3);
	}
	ui::set_mission_name(0, 0);
}

// Position - 0x2010F
void func_190(int iParam0, int iParam1, int iParam2) {
	struct<4> Var0;
	char *sVar32;

	if (iParam0 != -1) {
		func_192(iParam0, &Var0);
		MemCopy(&sVar32, {func_187(iParam0)}, 4);
		stats::playstats_mission_checkpoint(&sVar32, 0, Global_91528, 0);
		func_191(&sVar32, Var0.f_3, Global_91528, iParam1, iParam2);
	}
}

// Position - 0x2014E
void func_191(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (gameplay::is_string_null_or_empty(&Global_88894)) {
		return;
	}
	if (gameplay::compare_strings(sParam0, &Global_88894, 0, -1) != 0) {
		return;
	}
	stats::playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_86001);
	StringCopy(&Global_88894, "", 64);
}

// Position - 0x20193
void func_192(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_193(uParam1, "Abigail1", func_186(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
		break;

	case 1:
		func_193(uParam1, "Abigail2", func_186(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
		break;

	case 2:
		func_193(uParam1, "Barry1", func_186(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_194(iParam0), 1, 0);
		break;

	case 3:
		func_193(uParam1, "Barry2", func_186(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_194(iParam0), 1, 1);
		break;

	case 4:
		func_193(uParam1, "Barry3", func_186(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 5:
		func_193(uParam1, "Barry3A", func_186(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 6:
		func_193(uParam1, "Barry3C", func_186(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 7:
		func_193(uParam1, "Barry4", func_186(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_194(iParam0), 0, 0);
		break;

	case 8:
		func_193(uParam1, "Dreyfuss1", func_186(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 9:
		func_193(uParam1, "Epsilon1", func_186(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 10:
		func_193(uParam1, "Epsilon2", func_186(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
		break;

	case 11:
		func_193(uParam1, "Epsilon3", func_186(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 12:
		func_193(uParam1, "Epsilon4", func_186(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 13:
		func_193(uParam1, "Epsilon5", func_186(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
		break;

	case 14:
		func_193(uParam1, "Epsilon6", func_186(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 15:
		func_193(uParam1, "Epsilon7", func_186(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 16:
		func_193(uParam1, "Epsilon8", func_186(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
		break;

	case 17:
		func_193(uParam1, "Extreme1", func_186(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 18:
		func_193(uParam1, "Extreme2", func_186(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 19:
		func_193(uParam1, "Extreme3", func_186(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 20:
		func_193(uParam1, "Extreme4", func_186(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 21:
		func_193(uParam1, "Fanatic1", func_186(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_194(iParam0), 1, 0);
		break;

	case 22:
		func_193(uParam1, "Fanatic2", func_186(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_194(iParam0), 1, 0);
		break;

	case 23:
		func_193(uParam1, "Fanatic3", func_186(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_194(iParam0), 0, 1);
		break;

	case 24:
		func_193(uParam1, "Hao1", func_186(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_194(iParam0), 0, 1);
		break;

	case 25:
		func_193(uParam1, "Hunting1", func_186(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 26:
		func_193(uParam1, "Hunting2", func_186(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 27:
		func_193(uParam1, "Josh1", func_186(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_194(iParam0), 1, 0);
		break;

	case 28:
		func_193(uParam1, "Josh2", func_186(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
		break;

	case 29:
		func_193(uParam1, "Josh3", func_186(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
		break;

	case 30:
		func_193(uParam1, "Josh4", func_186(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_194(iParam0), 1, 0);
		break;

	case 31:
		func_193(uParam1, "Maude1", func_186(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 32:
		func_193(uParam1, "Minute1", func_186(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 33:
		func_193(uParam1, "Minute2", func_186(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 34:
		func_193(uParam1, "Minute3", func_186(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 35:
		func_193(uParam1, "MrsPhilips1", func_186(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 36:
		func_193(uParam1, "MrsPhilips2", func_186(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_194(iParam0), 0, 0);
		break;

	case 37:
		func_193(uParam1, "Nigel1", func_186(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_194(iParam0), 1, 0);
		break;

	case 38:
		func_193(uParam1, "Nigel1A", func_186(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
		break;

	case 39:
		func_193(uParam1, "Nigel1B", func_186(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_194(iParam0), 1, 1);
		break;

	case 40:
		func_193(uParam1, "Nigel1C", func_186(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_194(iParam0), 1, 1);
		break;

	case 41:
		func_193(uParam1, "Nigel1D", func_186(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_194(iParam0), 1, 1);
		break;

	case 42:
		func_193(uParam1, "Nigel2", func_186(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
		break;

	case 43:
		func_193(uParam1, "Nigel3", func_186(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
		break;

	case 44:
		func_193(uParam1, "Omega1", func_186(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 45:
		func_193(uParam1, "Omega2", func_186(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 46:
		func_193(uParam1, "Paparazzo1", func_186(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 47:
		func_193(uParam1, "Paparazzo2", func_186(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 48:
		func_193(uParam1, "Paparazzo3", func_186(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 49:
		func_193(uParam1, "Paparazzo3A", func_186(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 50:
		func_193(uParam1, "Paparazzo3B", func_186(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 51:
		func_193(uParam1, "Paparazzo4", func_186(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 52:
		func_193(uParam1, "Rampage1", func_186(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 54:
		func_193(uParam1, "Rampage3", func_186(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_194(iParam0), 1, 0);
		break;

	case 55:
		func_193(uParam1, "Rampage4", func_186(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_194(iParam0), 1, 0);
		break;

	case 56:
		func_193(uParam1, "Rampage5", func_186(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_194(iParam0), 0, 0);
		break;

	case 53:
		func_193(uParam1, "Rampage2", func_186(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_194(iParam0), 1, 0);
		break;

	case 57:
		func_193(uParam1, "TheLastOne", func_186(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 58:
		func_193(uParam1, "Tonya1", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 59:
		func_193(uParam1, "Tonya2", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	case 60:
		func_193(uParam1, "Tonya3", func_186(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_194(iParam0), 0, 1);
		break;

	case 61:
		func_193(uParam1, "Tonya4", func_186(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_194(iParam0), 0, 1);
		break;

	case 62:
		func_193(uParam1, "Tonya5", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x213DA
void func_193(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x2146B
int func_194(int iParam0) {
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

// Position - 0x217B1
void func_195(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0x217C3
void func_196() {
	if (Global_89136) {
		func_184();
		graphics::_0xBF59707B3E5ED531(func_197(Global_101700.f_2095.f_539.f_3549));
	}
	else {
		graphics::_0xBF59707B3E5ED531("");
	}
}

// Position - 0x217F6
char *func_197(var uParam0) {
	uParam0 = uParam0;
	return "";
}

// Position - 0x21806
void func_198() {
	vector3 vVar0[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		network::network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		network::_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

// Position - 0x21849
void func_199(int iParam0, int iParam1) {
	Global_89131 = iParam0;
	Global_89132 = iParam1;
}

// Position - 0x2185D
void func_200() {
	if (Global_69956 != 6) {
	}
	if (Global_69961) {
		ui::reset_hud_component_values(15);
		Global_69961 = 0;
		Global_17290.f_7899 = 0;
	}
	Global_69956 = 6;
	Global_69958 = -1;
	Global_69957 = -1;
}

// Position - 0x21895
void func_201(int *iParam0) {
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

// Position - 0x218D2
void func_202(int iParam0, int iParam1) {
	struct<26> Var0;
	int iVar32;
	bool bVar33;
	int iVar34;
	struct<6> Var35;
	int iVar67;
	int iVar68;
	struct<6> Var69;
	int iVar101;
	int iVar102;

	func_192(iParam0, &Var0);
	if (!gameplay::are_strings_equal(&Var0.f_16, "")) {
		while (!func_230(&Var0.f_16)) {
			system::wait(0);
		}
	}
	if (Var0.f_22 != 0) {
		func_229(Var0.f_22, 0);
	}
	func_220(iParam0, Global_69971);
	if (!iParam1) {
		iVar32 = func_219(iParam0);
		if (iVar32 != 0) {
			if (!audio::get_number_of_passenger_voice_variations(iVar32)) {
				audio::unlock_mission_news_story(iVar32);
			}
		}
	}
	if (Var0.f_24 != -1) {
		bVar33 = true;
		if (Var0.f_5 != 4) {
			iVar34 = 0;
			while (iVar34 < 63) {
				iVar67 = iVar34;
				if (iVar67 != iParam0) {
					func_192(iVar67, &Var35);
					if (Var35.f_5 == Var0.f_5) {
						if (!gameplay::is_bit_set(Global_101700.f_17533[iVar67 /*6*/], 3)) {
							bVar33 = false;
						}
						if (!gameplay::is_bit_set(Global_101700.f_17533[iVar67 /*6*/], 0)) {
							func_207(iVar67);
						}
					}
				}
				iVar34++;
			}
		}
		if (bVar33) {
			func_207(Var0.f_24);
		}
	}
	else if (Var0.f_25 != 4) {
		iVar68 = 0;
		while (iVar68 < 63) {
			iVar101 = iVar68;
			if (iVar101 != iParam0) {
				func_192(iVar101, &Var69);
				if (Var69.f_5 == Var0.f_25) {
					func_207(iVar101);
				}
			}
			iVar68++;
		}
	}
	if (!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3)) {
		gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 3);
		Global_100787[iParam0 /*10*/].f_5 = 1;
		func_204(iParam0);
		iVar102 = func_203(iParam0);
		if (iVar102 != 322) {
			func_40(iVar102, 0, 0);
		}
	}
}

// Position - 0x21A59
int func_203(int iParam0) {
	switch (iParam0) {
	case 0: return 109;

	case 1: return 322;

	case 2: return 69;

	case 3: return 70;

	case 4: return 322;

	case 5: return 71;

	case 6: return 71;

	case 7: return 72;

	case 8: return 68;

	case 9: return 73;

	case 10: return 74;

	case 11: return 75;

	case 12: return 76;

	case 13: return 77;

	case 14: return 78;

	case 15: return 79;

	case 16: return 80;

	case 17: return 81;

	case 18: return 82;

	case 19: return 83;

	case 20: return 84;

	case 21: return 85;

	case 22: return 86;

	case 23: return 87;

	case 24: return 106;

	case 25: return 178;

	case 26: return 179;

	case 27: return 88;

	case 28: return 89;

	case 29: return 90;

	case 30: return 91;

	case 31: return 107;

	case 32: return 92;

	case 33: return 93;

	case 34: return 94;

	case 35: return 110;

	case 36: return 111;

	case 37: return 95;

	case 38: return 96;

	case 39: return 97;

	case 40: return 98;

	case 41: return 99;

	case 42: return 100;

	case 43: return 101;

	case 44: return 66;

	case 45: return 67;

	case 46: return 102;

	case 47: return 103;

	case 48: return 322;

	case 49: return 104;

	case 50: return 104;

	case 51: return 105;

	case 52: return 194;

	case 53: return 195;

	case 54: return 196;

	case 55: return 197;

	case 56: return 198;

	case 57: return 108;

	case 58: return 208;

	case 59: return 209;

	case 60: return 210;

	case 61: return 211;

	case 62: return 212;
	}
	return 322;
}

// Position - 0x21DE0
void func_204(int iParam0) {
	func_206(iParam0, 1);
	Global_101700.f_17533[iParam0 /*6*/].f_3 = func_205();
	Global_101700.f_17533.f_380++;
}

// Position - 0x21E16
int func_205() { return Global_101700.f_8975.f_21 + Global_101700.f_17533.f_380; }

// Position - 0x21E32
void func_206(var uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 55;
	if (iParam1) {
		iVar1 = uParam0;
		if (iVar1 == 46) {
			iVar0 = 35;
		}
		else if (iVar1 == 49) {
			iVar0 = 36;
		}
		else if (iVar1 == 50) {
			iVar0 = 37;
		}
		else if (iVar1 == 8) {
			iVar0 = 38;
		}
		else if (iVar1 == 16) {
			iVar0 = 39;
		}
		else if (iVar1 == 38) {
			iVar0 = 40;
		}
		else if (iVar1 == 39) {
			iVar0 = 41;
		}
		else if (iVar1 == 40) {
			iVar0 = 42;
		}
		else if (iVar1 == 41) {
			iVar0 = 43;
		}
		else if (iVar1 == 42) {
			iVar0 = 44;
		}
		else if (iVar1 == 43) {
			iVar0 = 45;
		}
		else if (iVar1 == 20) {
			iVar0 = 46;
		}
	}
	else {
		iVar2 = uParam0;
		if (iVar2 == 53) {
			iVar0 = 0;
		}
		else if (iVar2 == 1) {
			iVar0 = 1;
		}
		else if (iVar2 == 2) {
			iVar0 = 2;
		}
		else if (iVar2 == 17) {
			iVar0 = 3;
		}
		else if (iVar2 == 19) {
			iVar0 = 4;
		}
		else if (iVar2 == 43) {
			iVar0 = 5;
		}
		else if (iVar2 == 44) {
			iVar0 = 6;
		}
		else if (iVar2 == 63) {
			iVar0 = 8;
		}
		else if (iVar2 == 12) {
			iVar0 = 9;
		}
		else if (iVar2 == 13) {
			iVar0 = 10;
		}
		else if (iVar2 == 64) {
			iVar0 = 11;
		}
		else if (iVar2 == 20) {
			iVar0 = 12;
		}
		else if (iVar2 == 30) {
			iVar0 = 13;
		}
		else if (iVar2 == 31) {
			iVar0 = 14;
		}
		else if (iVar2 == 41) {
			iVar0 = 15;
		}
		else if (iVar2 == 38) {
			iVar0 = 16;
		}
		else if (iVar2 == 9) {
			iVar0 = 18;
		}
		else if (iVar2 == 59) {
			iVar0 = 19;
		}
		else if (iVar2 == 45) {
			iVar0 = 20;
		}
		else if (iVar2 == 10) {
			iVar0 = 21;
		}
		else if (iVar2 == 14) {
			iVar0 = 22;
		}
		else if (iVar2 == 16) {
			iVar0 = 24;
		}
		else if (iVar2 == 39) {
			iVar0 = 25;
		}
		else if (iVar2 == 46) {
			iVar0 = 26;
		}
		else if (iVar2 == 60) {
			iVar0 = 27;
		}
		else if (iVar2 == 22) {
			iVar0 = 28;
		}
		else if (iVar2 == 48) {
			iVar0 = 30;
		}
		else if (iVar2 == 61) {
			iVar0 = 31;
		}
		else if (iVar2 == 49) {
			iVar0 = 32;
		}
		else if (iVar2 == 27) {
			iVar0 = 34;
		}
		else if (iVar2 == 3) {
			iVar0 = 47;
		}
		else if (iVar2 == 4) {
			iVar0 = 48;
		}
		else if (iVar2 == 5) {
			iVar0 = 49;
		}
		else if (iVar2 == 6) {
			iVar0 = 50;
		}
		else if (iVar2 == 7) {
			iVar0 = 51;
		}
		else if (iVar2 == 58) {
			iVar0 = 53;
		}
		else if (iVar2 == 90) {
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75) {
			iVar0 = 17;
		}
		else if (iVar2 == 93) {
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70) {
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85) {
			iVar0 = 33;
		}
	}
	if (iVar0 != 55) {
		Global_101700.f_19523.f_472 = iVar0;
	}
}

// Position - 0x22156
void func_207(int iParam0) {
	if (iParam0 == 63 || iParam0 == -1) {
		return;
	}
	func_208(iParam0);
	gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 0);
}

// Position - 0x22189
void func_208(int iParam0) {
	switch (iParam0) {
	case 30: func_212(22, 1, 0, 1, 0); break;

	case 15: func_209(37, 0); break;

	default: break;
	}
}

// Position - 0x221BE
void func_209(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_211(iParam0, 0)) {
			func_210(iParam0, 1, 0);
			func_210(iParam0, 2, 0);
			func_210(iParam0, 3, 0);
			func_210(iParam0, 4, 0);
			func_210(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_210(iParam0, 0, 0);
	}
}

// Position - 0x2221B
void func_210(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x22256
int func_211(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x22279
void func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (iParam0 != 198) {
		if (Global_69702) {
			Global_2433125.f_74.f_227[iParam0] = iParam1;
		}
		else {
			Global_101700.f_6220.f_227[iParam0] = iParam1;
		}
		Global_32749[iParam0] = iParam2;
		Global_32948[iParam0] = 1;
		func_215(iParam0, iParam3, iParam4, 0);
		func_213(iParam0, iParam1);
	}
}

// Position - 0x222D4
void func_213(int iParam0, int iParam1) {
	switch (iParam0) {
	case 12:
		if (iParam1 == 0) {
			audio::set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
		}
		else {
			audio::set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
		}
		break;

	case 71:
		if (iParam1 != 1) {
			audio::set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 0, 0);
		}
		else {
			audio::set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 1, 0);
		}
		break;

	case 65:
		if (iParam1 == 1) {
			func_214(0, 0);
		}
		else {
			func_214(0, 1);
		}
		break;

	case 6:
		if (iParam1 == 1) {
			audio::set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
		}
		else {
			audio::set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
		}
		break;

	case 174:
		if (iParam1 == 2) {
			audio::_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
		}
		break;

	case 37:
		if (iParam1 == 1) {
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
		}
		break;
	}
}

// Position - 0x223BD
void func_214(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&Global_100340, iParam0);
	}
	else {
		gameplay::clear_bit(&Global_100340, iParam0);
	}
	Global_100339 = 1;
}

// Position - 0x223E6
bool func_215(int iParam0, bool bParam1, int iParam2, int iParam3) {
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;

	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_218(&Var3, iParam0);
	if (func_216()) {
		iVar1 = Global_101700.f_6220.f_227[iParam0];
	}
	else {
		iVar1 = Global_2433125.f_74.f_227[iParam0];
	}
	iVar2 = Global_33147[iParam0];
	if (ped::is_ped_injured(player::player_ped_id()) && !iParam3) {
	}
	else {
		bVar99 = true;
		if (gameplay::get_hash_key(script::get_this_script_name()) != gameplay::get_hash_key("standard_global_reg")) {
			if (iParam2 == 0) {
				if (Global_32749[iParam0] &&
					gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0), Var3,
														  1) < 200f) {
					bVar99 = false;
				}
				if (!player::is_player_playing(player::player_id()) ||
					ai::is_ped_being_arrested(player::player_ped_id())) {
					if (!cam::is_screen_faded_out()) {
						bVar99 = false;
					}
				}
			}
		}
		if (streaming::is_new_load_scene_active() &&
			(!streaming::is_player_switch_in_progress() || streaming::get_player_switch_state() != 5)) {
			bVar99 = false;
		}
		if (bVar99) {
			switch (Var3.f_3) {
			case 0:
				if (iVar1 == 2) {
				}
				else {
					if (Var3.f_4[iVar1] != 0) {
						entity::remove_model_hide(Var3, 10f, Var3.f_4[iVar1], 0);
					}
					if (Var3.f_4[iVar2] != 0) {
						entity::create_model_hide(Var3, 10f, Var3.f_4[iVar2], 1);
					}
					Global_34343[iParam0] = 1;
				}
				bVar0 = true;
				break;

			case 1:
				if (iVar1 == 0) {
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_34)) {
							streaming::request_ipl(&Var3.f_34);
						}
					}
				}
				else if (iVar1 == 1) {
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (streaming::is_ipl_active(&Var3.f_34)) {
							streaming::remove_ipl(&Var3.f_34);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
				}
				else if (iVar1 == 2) {
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (streaming::is_ipl_active(&Var3.f_34)) {
							streaming::remove_ipl(&Var3.f_34);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES")) {
						if (!streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
				}
				Global_34144[iParam0] = 1;
				Global_34343[iParam0] = 1;
				bVar0 = true;
				break;

			case 2:
				iVar100 = interior::get_interior_at_coords_with_type(Var3, &Var3.f_42);
				if (iVar100 != 0) {
					if (gameplay::get_hash_key(&Var3.f_50) != gameplay::get_hash_key("")) {
						if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_50)) {
							interior::_disable_interior_prop(iVar100, &Var3.f_50);
						}
					}
					if (iVar1 == 0) {
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) !=
								gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
					}
					else if (iVar1 == 1) {
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) !=
								gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
					}
					else if (iVar1 == 2) {
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
					}
					if (bParam1) {
						interior::refresh_interior(iVar100);
					}
				}
				Global_34343[iParam0] = 1;
				Global_34144[iParam0] = 1;
				bVar0 = true;
				break;

			case 3:
				if (gameplay::get_distance_between_coords(Var3, entity::get_entity_coords(player::player_ped_id(), 0),
														  1) < 250f) {
					uVar98 = object::_get_des_object(Var3, 25f, &Var3.f_8[0 /*8*/]);
					if (object::_does_des_object_exist(uVar98)) {
						if (iVar1 == 0) {
							object::_set_des_object_state(uVar98, 3);
							Global_34343[iParam0] = 1;
							bVar0 = true;
						}
						else if (iVar1 == 1) {
							if (object::_get_des_object_state(uVar98) != 6 &&
								object::_get_des_object_state(uVar98) != 7 &&
								object::_get_des_object_state(uVar98) != 8) {
								object::_set_des_object_state(uVar98, 10);
								Global_34343[iParam0] = 1;
								bVar0 = true;
							}
						}
						else if (iVar1 == 2) {
							bVar0 = true;
						}
					}
				}
				break;

			case 4:
				if (iVar1 == 0) {
					entity::remove_model_swap(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
					gameplay::clear_bit(&Global_32495[iParam0 / 32], iParam0 % 32);
				}
				else if (iVar1 == 1) {
					entity::create_model_swap(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
					gameplay::set_bit(&Global_32495[iParam0 / 32], iParam0 % 32);
				}
				bVar0 = true;
				break;
			}
			if (bVar0) {
				Global_32948[iParam0] = 0;
				Global_33147[iParam0] = iVar1;
				if (!func_216()) {
					if (!Global_33744[iParam0]) {
						Global_33744[iParam0] = 1;
						Global_33943++;
					}
				}
			}
		}
	}
	return bVar0;
}

// Position - 0x22D21
bool func_216() {
	if ((func_42() == -1 || func_42() == 999) && func_217() != 0) {
		return true;
	}
	return false;
}

// Position - 0x22D51
int func_217() { return Global_25191; }

// Position - 0x22D5C
int func_218(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		uParam0->f_4[iVar0] = 0;
		StringCopy(&uParam0->f_8[iVar0 /*8*/], "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&uParam0->f_34, "", 32);
	StringCopy(&uParam0->f_42, "", 32);
	StringCopy(&uParam0->f_50, "", 32);
	uParam0->f_58 = {0f, 0f, 0f};
	uParam0->f_61 = {0f, 0f, 0f};
	uParam0->f_68 = {0f, 0f, 0f};
	uParam0->f_71 = {0f, 0f, 0f};
	uParam0->f_74 = 0f;
	uParam0->f_79 = {0f, 0f, 0f};
	uParam0->f_82 = {0f, 0f, 0f};
	uParam0->f_85 = {0f, 0f, 0f};
	uParam0->f_88 = {0f, 0f, 0f};
	switch (iParam1) {
	case 3:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "TRV1_Trail_start", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "TRV1_Trail_end", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-24.685f, 3032.92f, 40.331f};
		break;

	case 4:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS3_05_water_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS3_05_water_grp2", 32);
		*uParam0 = {-24.685f, 3032.92f, 40.331f};
		break;

	case 0:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "gasstation_ipl_group1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "gasstation_ipl_group2", 32);
		*uParam0 = {-93.4f, 6410.9f, 36.8f};
		break;

	case 1:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DES_Smash2_startimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_Smash2_endimap", 32);
		*uParam0 = {890.3647f, -2367.289f, 28.10582f};
		break;

	case 2:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1020.5f, 663.41f, 154.75f};
		uParam0->f_58 = {-1018.913f, 603.2904f, 105.6611f};
		uParam0->f_61 = {-1038.913f, 639.2904f, 135.6611f};
		uParam0->f_64[0] = 1;
		uParam0->f_64[1] = 0;
		break;

	case 5:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "bnkheist_apt_norm", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest", 32);
		break;

	case 196:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		break;

	case 6:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "crashed_cargoplane", 32);
		break;

	case 7:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_jb700_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 8:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_entityXF_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 9:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_cheetah_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 10:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_ztype_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 11:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
		break;

	case 12:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "cargoship", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "sunkcargoship", 32);
		uParam0->f_68 = {-162.8918f, -2365.769f, 0f};
		uParam0->f_71 = {190.75f, 31.25f, 21f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		break;

	case 13:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ship_occ_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ship_occ_grp2", 32);
		break;

	case 14:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "smboat", 32);
		break;

	case 15:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "gasparticle_grp2", 32);
		*uParam0 = {-95.2f, 6411.3f, 31.5f};
		break;

	case 16:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 17:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 18:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 19:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 20:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "jetstealtunnel", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {801.7f, -1810.8f, 23.3f};
		break;

	case 21:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {787.3967f, -1808.858f, 29.8532f};
		uParam0->f_58 = {814f, -1750f, 20f};
		uParam0->f_61 = {790f, -1899f, 35f};
		uParam0->f_64[0] = 1;
		uParam0->f_64[1] = 0;
		uParam0->f_64[2] = 0;
		break;

	case 22:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
		break;

	case 23:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
		break;

	case 24:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
		break;

	case 25:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "triathlon2_VBprops", 32);
		break;

	case 26:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_REQUEST", 32);
		*uParam0 = {163.4f, -745.7f, 251f};
		break;

	case 27:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FBI_colPLUG", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 28:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FBI_repair", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 29:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = joaat("dt1_05_build1_h");
		uParam0->f_4[1] = joaat("dt1_05_build1_damage");
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 30:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = -112041596;
		uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 31:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = -186270611;
		uParam0->f_4[1] = joaat("dt1_05_damage_slod");
		*uParam0 = {178.534f, -668.835f, 37.2113f};
		break;

	case 32:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FIB_heist_lights", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 33:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FIB_heist_dmg", 32);
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 34:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_rubble", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 35:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FIBlobbyfake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FIBlobby", 32);
		*uParam0 = {105.4557f, -745.4835f, 44.7548f};
		break;

	case 36:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
		*uParam0 = {169f, -670.3f, 41.9f};
		break;

	case 37:
		uParam0->f_3 = 1;
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		uParam0->f_79 = {16.9757f, 3614.307f, 30.0677f};
		uParam0->f_82 = {145.2451f, 3748.912f, 49.6958f};
		uParam0->f_85 = {16.9757f, 3614.307f, 30.0677f};
		uParam0->f_88 = {145.2451f, 3748.912f, 49.6958f};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		break;

	case 38:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkA_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkA_grp2", 32);
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		break;

	case 39:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerA_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		break;

	case 40:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkB_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkB_grp2", 32);
		*uParam0 = {106.7f, 3732.1f, 40.8f};
		break;

	case 41:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerB_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {106.7f, 3732.1f, 40.8f};
		break;

	case 42:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkC_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkC_grp2", 32);
		*uParam0 = {72.7f, 3695.4f, 42f};
		break;

	case 43:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerC_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {72.7f, 3695.4f, 42f};
		break;

	case 44:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkD_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkD_grp2", 32);
		*uParam0 = {43.8f, 3699.7f, 41.3f};
		break;

	case 45:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerD_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {43.8f, 3699.7f, 41.3f};
		break;

	case 46:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkE_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkE_grp2", 32);
		*uParam0 = {28.5f, 3668f, 40.4f};
		break;

	case 47:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerE_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {28.5f, 3668f, 40.4f};
		break;

	case 48:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_34, "des_methtrailer", 32);
		StringCopy(&uParam0->f_8[0 /*8*/], "methtrailer_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "methtrailer_grp2", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "methtrailer_grp3", 32);
		uParam0->f_33 = 1;
		*uParam0 = {29.4838f, 3735.593f, 38.688f};
		uParam0->f_68 = {31.134f, 3738.783f, 39.062f};
		uParam0->f_71 = {13.6f, 20f, 8.9f};
		uParam0->f_74 = 48f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 1;
		break;

	case 49:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_meth_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {29.4838f, 3735.593f, 38.688f};
		break;

	case 50:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhs_startimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhs_endimap", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2450.595f, 4959.929f, 44.2575f};
		uParam0->f_79 = {2383.756f, 4929.988f, 39.52461f};
		uParam0->f_82 = {2505.756f, 5023.988f, 67.52461f};
		break;

	case 55:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhs_start_occl", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhs_end_occl", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {2450.595f, 4959.929f, 44.2575f};
		break;

	case 51:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farm", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "farm", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "farm_burnt", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2444.8f, 4976.4f, 50.5f};
		break;

	case 52:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farm_props", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "farm_burnt_props", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 53:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhouse", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhouse", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 54:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farmint_cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "farmint", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 56:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "tankerexp_grp0", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp3", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 57:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp1", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 58:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp2", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 59:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_tankerexp", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 60:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "dockcrane1", 32);
		*uParam0 = {889.3f, -2910.9f, 40f};
		break;

	case 61:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CanyonRvrShallow", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CanyonRvrDeep", 32);
		*uParam0 = {-1600.619f, 4443.457f, 0.725f};
		break;

	case 62:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Garage_door_locked", 32);
		*uParam0 = {966.1f, -114.8f, 75.2f};
		break;

	case 63:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ch1_02_closed", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ch1_02_open", 32);
		*uParam0 = {-3086.428f, 339.2523f, 6.3717f};
		break;

	case 64:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ferris_finale_Anim", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-1675.178f, -1143.605f, 12.0175f};
		break;

	case 65:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "railing_start", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "railing_end", 32);
		*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
		break;

	case 66:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "canyonriver01", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "canyonriver01_traincrash", 32);
		*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
		break;

	case 67:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_05_WOFFM", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "DT1_05_WOFFM", 32);
		*uParam0 = {131.29f, -631.22f, 261.85f};
		break;

	case 68:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "coronertrash", 32);
		*uParam0 = {233.9f, -1355f, 30.3f};
		break;

	case 69:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Coroner_Int_off", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Coroner_Int_on", 32);
		*uParam0 = {234.4f, -1355.6f, 40.5f};
		break;

	case 70:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "id2_14_pre_no_int", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 71:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_during1", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "id2_14_during2", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 72:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_on_fire", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "id2_14_post_no_int", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 73:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_during_door", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 74:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "burnt_switch_off", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 75:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "RC12B_Default", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "RC12B_Destroyed", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "RC12B_Fixed", 32);
		uParam0->f_33 = 0;
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 76:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 105:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 106:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
		*uParam0 = {1861.28f, 2402.11f, 58.53f};
		break;

	case 107:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FruitBB", 32);
		*uParam0 = {-1327.46f, -274.82f, 54.25f};
		break;

	case 108:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
		*uParam0 = {2697.32f, 3162.18f, 58.1f};
		break;

	case 109:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
		*uParam0 = {2119.12f, 3058.21f, 53.25f};
		break;

	case 110:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
		*uParam0 = {-804.25f, -2276.88f, 23.59f};
		break;

	case 111:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "HW1_02_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "HW1_02_NewBill", 32);
		*uParam0 = {296.5f, 173.3f, 100.4f};
		break;

	case 112:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
		*uParam0 = {296.5f, 173.3f, 100.4f};
		break;

	case 77:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {480.9554f, -1321.21f, 28.2037f};
		uParam0->f_85 = {508.3f, -1299.3f, 39.4f};
		uParam0->f_88 = {459.9f, -1363.2f, 21.4f};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		uParam0->f_91[2] = 0;
		break;

	case 78:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "TrevorsTrailer", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
		*uParam0 = {1973f, 3815f, 34f};
		uParam0->f_33 = 0;
		break;

	case 79:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "scafstartimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "scafendimap", 32);
		*uParam0 = {-1088.6f, -1650.6f, 6.4f};
		break;

	case 80:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "chop_props", 32);
		*uParam0 = {-13.83f, -1455.45f, 31.81f};
		break;

	case 113:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "AP1_04_TriAf01", 32);
		*uParam0 = {-1277.629f, -2030.913f, 1.2823f};
		break;

	case 114:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS2_06_TriAf02", 32);
		*uParam0 = {2384.969f, 4277.583f, 30.379f};
		break;

	case 115:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS4_04_TriAf03", 32);
		*uParam0 = {1577.881f, 3836.107f, 30.7717f};
		break;

	case 87:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-180.5771f, -1016.928f, 28.2893f};
		break;

	case 88:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "jewel2fake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "post_hiest_unload", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "bh1_16_refurb", 32);
		*uParam0 = {-630.4205f, -236.7843f, 37.057f};
		uParam0->f_79 = {-623.6868f - 11f, -231.935f - 11f, 40.30703f - 3.25f};
		uParam0->f_82 = {-623.6868f + 11f, -231.935f + 11f, 40.30703f + 3.25f};
		break;

	case 89:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "bh1_16_doors_shut", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "refit_unload", 32);
		*uParam0 = {-583.1606f, -282.3967f, 35.394f};
		break;

	case 90:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "v_tunnel_hole", 32);
		*uParam0 = {-14.651f, -604.3639f, 25.1823f};
		break;

	case 91:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "cs5_4_trains", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2773.61f, 2835.327f, 35.1903f};
		break;

	case 94:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "airfield", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {1743.682f, 3286.251f, 40.0875f};
		break;

	case 95:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {1222.9f, 1877.9f, 79.9f};
		uParam0->f_58 = {1206.8f, 1803f, 43.9f};
		uParam0->f_61 = {1329f, 2060.4f, 143.9f};
		uParam0->f_64[0] = 0;
		uParam0->f_64[1] = 1;
		uParam0->f_64[2] = 0;
		break;

	case 104:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_01_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SC1_01_NewBill", 32);
		*uParam0 = {-351f, -1324f, 44.02f};
		break;

	case 103:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_17_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_17_NewBill", 32);
		*uParam0 = {391.81f, -962.71f, 41.97f};
		break;

	case 102:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_14_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SC1_14_NewBill", 32);
		*uParam0 = {424.2f, -1944.31f, 33.09f};
		break;

	case 92:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ld_rail_01_track", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2626.374f, 2949.869f, 39.1409f};
		break;

	case 93:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ld_rail_02_track", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2626.374f, 2949.869f, 39.1409f};
		break;

	case 118:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_M_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_M_moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
		break;

	case 116:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_D_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_D_Moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
		break;

	case 117:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_S_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 119:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_L_Items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_L_Moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 120:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 122:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_FameShame", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
		break;

	case 121:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 123:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Michael_premier", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 124:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 170:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "burgershot_yoga", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 171:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_Scuba", 32);
		StringCopy(&uParam0->f_42, "V_Michael_Garage", 32);
		*uParam0 = {-810.5301f, 187.7868f, 71.4786f};
		break;

	case 125:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
		break;

	case 164:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Jewel_Gasmasks", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 165:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 166:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 167:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_KitBag", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 168:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_Body_Armour", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 169:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_Fireman", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 126:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 127:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 128:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 129:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 130:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 131:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 132:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 133:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 134:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 179:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "shutter_open", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "shutter_closed", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-30.8793f, -1088.336f, 25.4221f};
		uParam0->f_68 = {-29.3f, -1086.35f, 25.57f};
		uParam0->f_71 = {5.5f, 3f, 2f};
		uParam0->f_74 = -10f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		break;

	case 174:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "csr_beforeMission", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "csr_afterMissionA", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "csr_afterMissionB", 32);
		StringCopy(&uParam0->f_50, "csr_inMission", 32);
		uParam0->f_33 = 0;
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 175:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-49.21f, -1090.28f, 25.42f};
		uParam0->f_68 = {-49.21f, -1090.28f, 25.42f};
		uParam0->f_71 = {2.5f, 3f, 3f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 176:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-49.28f, -1092.66f, 25.42f};
		uParam0->f_68 = {-49.28f, -1092.66f, 25.42f};
		uParam0->f_71 = {3f, 1f, 3f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 177:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-53.07f, -1096.73f, 25.5f};
		uParam0->f_68 = {-53.07f, -1096.73f, 25.5f};
		uParam0->f_71 = {1f, 3f, 2f};
		uParam0->f_74 = -45f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 178:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "carshowroom_broken", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "carshowroom_boarded", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 173:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "shr_int", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "fakeint", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 180:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_03_Shutter", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "", 32);
		*uParam0 = {23.9346f, -669.7552f, 30.8853f};
		break;

	case 181:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "Hospitaldoorsanim", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
		StringCopy(&uParam0->f_42, "v_hospital", 32);
		uParam0->f_33 = 0;
		*uParam0 = {300.9423f, -586.1784f, 42.2919f};
		break;

	case 135:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_clean_apt", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_A", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 136:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_B", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 137:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_C", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 138:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_sextoys_a", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 139:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_wade_shit", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 140:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_wade_sofa_A", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 141:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "layer_debra_pic", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 142:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_torture", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 143:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_sofa_A", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_sofa_B", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 144:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_whiskey", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 145:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_mrJam_A", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_mrJam_B", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 146:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_mrJam_C", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 147:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "vb_30_emissive", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "vb_30_murder", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
		break;

	case 148:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "vb_30_crimetape", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
		break;

	case 149:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "sheriff_cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {1856.029f, 3682.998f, 33.2675f};
		break;

	case 150:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-440.5073f, 6018.766f, 30.49f};
		break;

	case 151:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ufo", 32);
		uParam0->f_33 = 0;
		*uParam0 = {487.31f, 5588.386f, 793.0532f};
		break;

	case 152:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ufo_eye", 32);
		uParam0->f_33 = 0;
		*uParam0 = {487.31f, 5588.386f, 793.0532f};
		break;

	case 153:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_57_FranklinStuff", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 154:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_GangBandana", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 155:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_Safari", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 172:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
		StringCopy(&uParam0->f_42, "v_strip3", 32);
		*uParam0 = {96.4811f, -1291.294f, 28.2688f};
		break;

	case 182:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {139.5795f, -3092.962f, 8.64631f};
		uParam0->f_79 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_82 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_85 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_88 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		uParam0->f_91[2] = 1;
		break;

	case 183:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {203.7784f, -3131.767f, 7.041344f};
		uParam0->f_79 = {Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f)};
		uParam0->f_82 = {Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f)};
		break;

	case 184:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {144.7706f, -2982.659f, 7.952507f};
		uParam0->f_79 = {Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f)};
		uParam0->f_82 = {Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f)};
		break;

	case 185:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1154.965f, -1520.983f, 9.132731f};
		uParam0->f_79 = {-1154.965f, -1520.983f, 9.132731f};
		uParam0->f_82 = {-1158.965f, -1524.983f, 11.63273f};
		break;

	case 187:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1052.204f, 371.9537f, 67.914f};
		uParam0->f_79 = {-1052.204f, 371.9537f, 67.914f};
		uParam0->f_82 = {-1048.064f, 368.0221f, 70.9128f};
		break;

	case 186:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {1954.984f, 3792.991f, 30.3086f};
		uParam0->f_79 = {1954.984f, 3792.991f, 30.3086f};
		uParam0->f_82 = {1983.45f, 3830.78f, 36.2726f};
		break;

	case 188:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1122.202f, 48.5724f, 51.4652f};
		uParam0->f_79 = {-1122.202f, 48.5724f, 51.4652f};
		uParam0->f_82 = {-1076.233f, 92.1041f, 60.0617f};
		break;

	case 81:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "KorizTempWalls", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-2199.138f, 223.4648f, 181.1118f};
		break;

	case 82:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "mic3_chopper_debris", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-2242.785f, 263.4779f, 173.6154f};
		break;

	case 83:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "chemgrill_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {3832.9f, 3665.5f, -23.4f};
		break;

	case 84:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Plane_crash_trench", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {2814.7f, 4758.5f, 47.9f};
		break;

	case 85:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "golfflags", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-1096.505f, 4.5754f, 49.8103f};
		break;

	case 86:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "yogagame", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-781.6566f, 186.8937f, 71.8352f};
		break;

	case 189:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Carwash_with_spinners", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Carwash_without_spinners", 32);
		uParam0->f_33 = 0;
		*uParam0 = {55.7f, -1391.3f, 30.5f};
		break;

	case 190:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "KT_CarWash", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
		uParam0->f_33 = 0;
		*uParam0 = {700.091f, -933.641f, 20.308f};
		break;

	case 191:
		uParam0->f_3 = 1;
		*uParam0 = {-1096.381f, -836.17f, 36.6755f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 192:
		uParam0->f_3 = 1;
		*uParam0 = {449.6558f, -980.1375f, 42.6918f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 193:
		uParam0->f_3 = 1;
		*uParam0 = {363.0175f, -1598.079f, 35.9502f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 194:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS3_07_MPGates", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {-1601.424f, 2808.213f, 16.2598f};
		break;

	case 97:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {23.7318f, -647.2123f, 37.9549f};
		break;

	case 98:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FINBANK", 32);
		*uParam0 = {12.9689f, -648.4698f, 9.7693f};
		break;

	case 99:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "PAPER1_RCM", 32);
		*uParam0 = {-1459.127f, 486.1281f, 115.2016f};
		break;

	case 100:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SP1_10_fake_interior", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SP1_10_real_interior", 32);
		*uParam0 = {-248.4916f, -2010.509f, 34.5743f};
		break;

	case 101:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "facelobbyfake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "facelobby", 32);
		*uParam0 = {-1081.347f, -263.1502f, 38.7152f};
		break;

	case 195:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "atriumglstatic", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "atriumglmission", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "atriumglcut", 32);
		*uParam0 = {136.1795f, -750.701f, 262.0516f};
		break;

	case 197:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "racetrack01", 32);
		*uParam0 = {2096f, 3168.7f, 42.9f};
		break;
	}
	switch (iParam1) {
	case 156:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "showhome_only", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 157:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "franklin_unpacking", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 158:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "franklin_settled", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 163:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_tshirt", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 159:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bong_and_wine", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 161:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_flyer", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 162:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_tux", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 160:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "locked", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "unlocked", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 96:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "chophillskennel", 32);
		*uParam0 = {19.0568f, 536.4818f, 169.6277f};
		break;
	}
	return 1;
}

// Position - 0x2659B
int func_219(int iParam0) {
	switch (iParam0) {
	case 46: return 42;

	case 47: return 43;

	case 49: return 44;

	case 50: return 45;

	case 8:
		if (gameplay::is_bit_set(Global_101700.f_17533.f_382, 0)) {
			return 46;
		}
		break;

	case 16: return 47;

	case 38: return 48;

	case 39: return 49;

	case 40: return 50;

	case 41: return 51;

	case 42: return 52;

	case 43:
		if (Global_101700.f_8044.f_99.f_58[101]) {
			return 53;
		}
		else {
			return 54;
		}
		break;

	case 20: return 55;
	}
	return 0;
}

// Position - 0x2668D
void func_220(int iParam0, bool bParam1) {
	switch (iParam0) {
	case 46: func_221(4, bParam1); break;

	case 16: func_221(6, bParam1); break;

	case 37: func_221(17, bParam1); break;

	case 31: func_221(16, bParam1); break;
	}
}

// Position - 0x266DE
void func_221(int iParam0, bool bParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31) {
		if (!func_228(iParam0)) {
			gameplay::set_bit(&Global_101700.f_25393, iVar0);
			if (!bParam1) {
				func_226(func_227(iParam0));
				if (!func_225(68)) {
					func_222("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

// Position - 0x26744
void func_222(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	func_223(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x26766
void func_223(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7, int iParam8, var uParam9) {
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
		func_224();
	}
}

// Position - 0x2693A
void func_224() {
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

// Position - 0x26A5A
int func_225(int iParam0) {
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

// Position - 0x26A9D
void func_226(char *sParam0) {
	ui::_set_notification_text_entry("");
	ui::_set_notification_message_3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

// Position - 0x26AC2
char *func_227(int iParam0) {
	switch (iParam0) {
	case 0: return "CM_STOMIC";

	case 1: return "CM_STOFRA";

	case 2: return "CM_STOTRE";

	case 3: return "CM_STOAMA";

	case 4: return "CM_STOBEV";

	case 5: return "CM_STOBRA";

	case 6: return "CM_STOCHR";

	case 7: return "CM_STODAV";

	case 8: return "CM_STODEV";

	case 9: return "CM_STODRF";

	case 10: return "CM_STOFAB";

	case 11: return "CM_STOFLO";

	case 12: return "CM_STOJIM";

	case 13: return "CM_STOLAM";

	case 14: return "CM_STOLAZ";

	case 15: return "CM_STOLES";

	case 16: return "CM_STOMAU";

	case 17: return "CM_STOTHO";

	case 18: return "CM_STONER";

	case 19: return "CM_STOPAT";

	case 20: return "CM_STOSIM";

	case 21: return "CM_STOSOL";

	case 22: return "CM_STOSTE";

	case 23: return "CM_STOSTR";

	case 24: return "CM_STOTAN";

	case 25: return "CM_STOTAO";

	case 26: return "CM_STOTRA";

	case 27: return "CM_STOWAD";
	}
	return "ERROR!";
}

// Position - 0x26C95
int func_228(int iParam0) {
	if (iParam0 != -1 && iParam0 != 28) {
		return gameplay::is_bit_set(Global_101700.f_25393, iParam0);
	}
	return 0;
}

// Position - 0x26CC2
void func_229(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0x26CFF
int func_230(char *sParam0) {
	int iVar0;

	iVar0 = 1424;
	if (!script::does_script_exist(sParam0)) {
		return 1;
	}
	if (gameplay::are_strings_equal(sParam0, "controller_Races")) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("controller_races")) > 0) {
			return 1;
		}
		iVar0 = 128;
	}
	script::request_script(sParam0);
	if (script::has_script_loaded(sParam0)) {
		system::start_new_script(sParam0, iVar0);
		script::set_script_as_no_longer_needed(sParam0);
		return 1;
	}
	return 0;
}

// Position - 0x26D5F
int func_231() { return func_232(script::get_this_script_name(), 0); }

// Position - 0x26D70
int func_232(char *sParam0, int iParam1) {
	int iVar0;
	char *sVar1;
	int iVar33;
	int iVar34;

	iVar33 = gameplay::get_hash_key(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63) {
		iVar0 = iVar34;
		func_192(iVar0, &sVar1);
		if (gameplay::get_hash_key(sVar1) == iVar33) {
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0) {
	}
	return -1;
}

// Position - 0x26DB9
int func_233(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar20;
	int iVar30;

	Global_69523[1 /*14*/] = {func_115(iParam0, iParam1, iParam2)};
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam3) {
			func_104(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 1, Global_69523[1 /*14*/].f_1, 1,
					 0);
			if (iParam1 == 12) {
				iVar0 = 1;
				if (iParam0 == joaat("player_zero")) {
					if (iParam2 == 31) {
						iVar0 = 0;
					}
				}
				if (iVar0 == 1) {
					uVar3 = {func_111(iParam0, iParam2)};
					iVar1 = 0;
					while (iVar1 <= 14) {
						if (uVar3[iVar1] != -99 && iVar1 != 12 && iVar1 != 14) {
							if (iVar1 != 13) {
								func_233(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_234(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else {
								uVar20 = {func_108(iParam0, uVar3[iVar1])};
								iVar2 = 0;
								while (iVar2 <= 8) {
									func_233(iParam0, 14, uVar20[iVar2], 1, 1);
									func_234(iParam0, 14, uVar20[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else {
			func_104(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 1, Global_69523[1 /*14*/].f_1, 0,
					 1);
		}
		if (iParam4 == 1 && iParam3 == 1) {
			switch (iParam0) {
			case joaat("player_zero"): break;

			case joaat("player_one"):
				switch (iParam1) {
				case 3:
					if (iParam2 >= 176 && iParam2 <= 191) {
						iVar30 = 227 + Global_69523[1 /*14*/].f_4;
						func_233(iParam0, 3, iVar30, 1, 0);
					}
					else if (iParam2 >= 227 && iParam2 <= 242) {
						iVar30 = 176 + Global_69523[1 /*14*/].f_4;
						func_233(iParam0, 3, iVar30, 1, 0);
					}
					break;

				case 11:
					if (iParam2 >= 9 && iParam2 <= 24) {
						iVar30 = 25 + Global_69523[1 /*14*/].f_4;
						func_233(iParam0, 11, iVar30, 1, 0);
					}
					else if (iParam2 >= 25 && iParam2 <= 40) {
						iVar30 = 9 + Global_69523[1 /*14*/].f_4;
						func_233(iParam0, 11, iVar30, 1, 0);
					}
					break;

				case 8:
					if (iParam2 >= 27 && iParam2 <= 42) {
						iVar30 = 43 + Global_69523[1 /*14*/].f_4;
						func_233(iParam0, 8, iVar30, 1, 0);
						iVar30 = 59 + Global_69523[1 /*14*/].f_4;
						func_233(iParam0, 8, iVar30, 1, 0);
					}
					else if (iParam2 >= 43 && iParam2 <= 58) {
						iVar30 = 27 + Global_69523[1 /*14*/].f_4;
						func_233(iParam0, 8, iVar30, 1, 0);
						iVar30 = 59 + Global_69523[1 /*14*/].f_4;
						func_233(iParam0, 8, iVar30, 1, 0);
					}
					else if (iParam2 >= 59 && iParam2 <= 74) {
						iVar30 = 27 + Global_69523[1 /*14*/].f_4;
						func_233(iParam0, 8, iVar30, 1, 0);
						iVar30 = 43 + Global_69523[1 /*14*/].f_4;
						func_233(iParam0, 8, iVar30, 1, 0);
					}
					break;

				case 14:
					if (iParam2 >= 64 && iParam2 <= 79) {
						iVar30 = 41 + Global_69523[1 /*14*/].f_4;
						func_233(iParam0, 14, iVar30, 1, 0);
					}
					break;
				}
				break;

			case joaat("player_two"):
				switch (iParam1) {
				case 4:
					if (iParam2 >= 81 && iParam2 <= 90) {
						iVar30 = 94 + Global_69523[1 /*14*/].f_4;
						func_233(iParam0, 4, iVar30, 1, 0);
					}
					break;

				case 12:
					if (iParam2 == 2) {
						func_233(iParam0, 14, 17, 1, 0);
					}
					break;
				}
				break;
			}
		}
		return 1;
	}
	return 0;
}

// Position - 0x271A0
int func_234(int iParam0, int iParam1, int iParam2, int iParam3) {
	Global_69523[1 /*14*/] = {func_115(iParam0, iParam1, iParam2)};
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam3) {
			func_104(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 0, Global_69523[1 /*14*/].f_1, 1,
					 0);
		}
		else {
			func_104(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 0, Global_69523[1 /*14*/].f_1, 0,
					 1);
		}
		return 1;
	}
	return 0;
}

// Position - 0x2723B
int func_235(int iParam0) {
	if (func_185(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x27265
void func_236(int iParam0) {
	if (iParam0 == 1) {
		ui::clear_prints();
	}
	ui::clear_help(1);
}

// Position - 0x2727C
bool func_237() {
	if (Global_15745 == 0) {
		return true;
	}
	return false;
}

// Position - 0x27293
bool func_238(var *uParam0, int iParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7, int iParam8) {
	func_247(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_239(sParam3, iParam4, iParam8);
}

// Position - 0x272F2
int func_239(char *sParam0, int iParam1, int iParam2) {
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
					func_16();
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
		if (func_246(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_245();
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
				func_243();
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
				if (func_242()) {
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
			if (func_28()) {
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
			func_241();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_240();
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
		func_16();
	}
	return 0;
}

// Position - 0x275BE
void func_240() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x275F0
void func_241() {
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

// Position - 0x27685
bool func_242() {
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

// Position - 0x2771E
void func_243() {
	if (func_123(14)) {
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
		Global_14443 = func_244();
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

// Position - 0x277C0
int func_244() {
	func_184();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x277D9
void func_245() {
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

// Position - 0x27831
bool func_246(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x2786C
void func_247(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
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

// Position - 0x278C2
void func_248() {
	int iVar0;
	int iVar1;

	if (func_485(Local_455)) {
		switch (iLocal_170) {
		case 0:
			func_285();
			if (func_266(Local_455, 1, 1116471296, 1126825984, 0, 0, 0, 0)) {
				if (!func_14()) {
					if (func_14()) {
						func_12();
					}
					entity::attach_entity_to_entity(Local_782.f_1, Local_455, ped::get_ped_bone_index(Local_455, 28422),
													0.06f, 0.04f, 0f, -90f, 180f, 0f, 0, 0, 0, 0, 2, 1);
					if (func_5(Local_749)) {
						if (func_6(Local_455)) {
							if (!ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
								ai::task_enter_vehicle(Local_455, Local_749, -1, -1, 2f, 1, 0);
							}
						}
					}
					func_497("GS_WAIT_FOR_PLAYER, player threatened Glen; "
							 "attacking...");
					func_287(&uLocal_174, 7, Local_481[0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					if (func_264()) {
						func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 0, 0);
					}
					else {
						func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_5", 7, 0, 0);
					}
					func_258();
					iLocal_170 = 3;
				}
				else {
					func_12();
				}
			}
			else if (entity::is_entity_at_entity(player::player_ped_id(), Local_455, 11f, 11f, 11f, 0, 1, 0)) {
				if (!func_180(player::player_ped_id(), 12, 4)) {
					if (func_14()) {
						func_12();
					}
					func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
					func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
					func_263(&uLocal_174, "NIG1DAU", "NIG1D_FLEE", "NIG1D_FLEE_1", 7, 0, 0);
					if (func_5(Local_749)) {
						if (func_6(Local_455)) {
							if (!ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
								ai::task_enter_vehicle(Local_455, Local_749, -1, -1, 2f, 1, 0);
							}
						}
					}
					func_497("GS_WAIT_FOR_PLAYER, player got too close to Glen "
							 "(alert_dis); attacking...");
					func_258();
					entity::attach_entity_to_entity(Local_782.f_1, Local_455, ped::get_ped_bone_index(Local_455, 28422),
													0.06f, 0.04f, 0f, -90f, 180f, 0f, 0, 0, 0, 0, 2, 1);
					iLocal_170 = 3;
				}
				else {
					iLocal_388 = gameplay::get_game_timer();
					iLocal_381 = gameplay::get_game_timer();
					iLocal_170 = 1;
				}
			}
			break;

		case 1:
			if (func_266(Local_455, 1, 1116471296, 1126825984, 0, 0, 0, 0) || iLocal_350 == 1) {
				func_497("GS_PLAYER_IN_OUTFIT, player threatened Glen or "
						 "returned a second time; attacking...");
				func_258();
			}
			else {
				if (!entity::is_entity_at_entity(player::player_ped_id(), Local_455, 11f, 11f, 11f, 0, 1, 0)) {
					entity::attach_entity_to_entity(Local_782.f_1, Local_455, ped::get_ped_bone_index(Local_455, 28422),
													0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					ai::open_sequence_task(&iLocal_776);
					ai::task_achieve_heading(0, 112f, 0);
					ai::task_play_anim(0, "rcmnigel1d", "swing_a_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
					ai::task_play_anim(0, "rcmnigel1d", "swing_b_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
					ai::set_sequence_to_repeat(iLocal_776, 1);
					ai::close_sequence_task(iLocal_776);
					ai::task_perform_sequence(Local_455, iLocal_776);
					ai::clear_sequence_task(&iLocal_776);
					if (func_485(Local_468)) {
						ai::task_clear_look_at(Local_468);
					}
					iLocal_350 = 1;
					iVar0 = 0;
					while (iVar0 <= 2) {
						iLocal_667[iVar0] = 0;
						iVar0++;
					}
					iLocal_170 = 0;
				}
				else if (gameplay::get_game_timer() - iLocal_381 >= 2500) {
					if (entity::is_entity_touching_entity(Local_455, player::player_ped_id())) {
						if (!func_14()) {
							func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
							func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
							if (func_257(&uLocal_174, "NIG1DAU", "NIG1D_BUMPF", 7, 0, 0, 0)) {
								iLocal_381 = gameplay::get_game_timer();
							}
						}
					}
				}
				if (func_5(Local_749) && func_5(Local_694[5 /*6*/]) && func_485(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), Local_749, 0) ||
						ped::is_ped_in_vehicle(player::player_ped_id(), Local_694[5 /*6*/], 0)) {
						if (func_14()) {
							func_15();
						}
						iLocal_387 = gameplay::get_game_timer();
						func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
						func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
						func_263(&uLocal_174, "NIG1DAU", "NIG1D_BANK", "NIG1D_BANK_1", 7, 0, 0);
						ai::open_sequence_task(&iLocal_776);
						ai::task_play_anim(0, "rcmnigel1d", "thanks_male_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
						ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), -1);
						ai::close_sequence_task(iLocal_776);
						ai::task_perform_sequence(Local_455, iLocal_776);
						ai::clear_sequence_task(&iLocal_776);
						iLocal_170 = 2;
					}
				}
				if (gameplay::get_game_timer() - iLocal_388 >= 15000) {
					if (entity::is_entity_at_entity(player::player_ped_id(), Local_455, 11f, 11f, 11f, 0, 1, 0)) {
						func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
						func_263(&uLocal_174, "NIG1DAU", "NIG1D_BANK", "NIG1D_BANK_2", 7, 0, 0);
						ai::open_sequence_task(&iLocal_776);
						ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), -1);
						ai::close_sequence_task(iLocal_776);
						ai::task_perform_sequence(Local_455, iLocal_776);
						ai::clear_sequence_task(&iLocal_776);
						if (func_485(Local_782.f_1)) {
							entity::attach_entity_to_entity(Local_782.f_1, Local_455,
															ped::get_ped_bone_index(Local_455, 28422), 0.06f, 0.04f, 0f,
															-90f, 180f, 0f, 0, 0, 0, 0, 2, 1);
						}
						iLocal_387 = gameplay::get_game_timer();
						iLocal_667[0] = 1;
						iLocal_170 = 2;
					}
				}
			}
			break;

		case 2:
			if (func_266(Local_455, 1, 1116471296, 1126825984, 0, 0, 0, 0)) {
				func_497("GS_ANGRY_AT_PLAYER, player threatened Glen; attacking...");
				func_258();
			}
			if (!entity::is_entity_at_entity(player::player_ped_id(), Local_455, 11f, 11f, 11f, 0, 1, 0)) {
				entity::attach_entity_to_entity(Local_782.f_1, Local_455, ped::get_ped_bone_index(Local_455, 28422), 0f,
												0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				ai::open_sequence_task(&iLocal_776);
				ai::task_turn_ped_to_face_coord(0, -1094.57f, 60.98f, 52.67f, 0);
				ai::task_play_anim(0, "mini@golf", "iron_idle_high_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::task_play_anim(0, "mini@golf", "iron_swing_intro_high", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::task_play_anim(0, "mini@golf", "iron_swing_action_high", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::task_play_anim(0, "mini@golf", "swing_outro", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::task_play_anim(0, "mini@golf", "swing_react_bad_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::set_sequence_to_repeat(iLocal_776, 1);
				ai::close_sequence_task(iLocal_776);
				ai::task_perform_sequence(Local_455, iLocal_776);
				ai::clear_sequence_task(&iLocal_776);
				if (func_485(Local_468)) {
					ai::task_clear_look_at(Local_468);
				}
				iLocal_350 = 1;
				iVar1 = 0;
				while (iVar1 <= 2) {
					iLocal_667[iVar1] = 0;
					iVar1++;
				}
				iLocal_170 = 0;
			}
			else if (gameplay::get_game_timer() - iLocal_381 >= 2500) {
				if (entity::is_entity_touching_entity(Local_455, player::player_ped_id())) {
					if (!func_14()) {
						func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
						func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
						if (func_257(&uLocal_174, "NIG1DAU", "NIG1D_BUMPF", 7, 0, 0, 0)) {
							iLocal_381 = gameplay::get_game_timer();
						}
					}
				}
			}
			break;

		case 3:
			if (func_5(Local_749) && func_256(Local_455, Local_749, 1) < 10f &&
				!ped::is_ped_in_vehicle(player::player_ped_id(), Local_749, 0) &&
				!entity::is_entity_upsidedown(Local_749)) {
				if (ped::is_ped_sitting_in_vehicle(Local_455, Local_749)) {
					func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
					func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
					func_263(&uLocal_174, "NIG1DAU", "NIG1D_FLEE", "NIG1D_FLEE_3", 7, 0, 0);
					if (func_6(Local_455)) {
						if (!func_254()) {
							ai::task_vehicle_follow_waypoint_recording(Local_455, Local_749, "NIGEL1DGOLF", 786468, 0,
																	   12, -1, -1f, 0, 1073741824);
						}
						else {
							iLocal_363 = 1;
							ai::task_vehicle_follow_waypoint_recording(Local_455, Local_749, "NIGEL1DGOLF2", 786468, 0,
																	   12, -1, -1f, 0, 1073741824);
						}
					}
					iLocal_170 = 4;
				}
			}
			else {
				func_290(Local_455, 1);
				iLocal_170 = 8;
			}
			func_253();
			break;

		case 4:
			func_251();
			func_250();
			if (func_5(Local_749)) {
				if (ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
					if (iLocal_169 != 4) {
						if (ai::get_vehicle_waypoint_progress(Local_749) >= 200) {
							func_290(Local_455, 0);
							iLocal_170 = 6;
						}
						if (func_249()) {
							iLocal_170 = 7;
						}
					}
				}
				else {
					iLocal_170 = 7;
				}
				if (ped::is_ped_in_vehicle(player::player_ped_id(), Local_749, 1)) {
					iLocal_170 = 7;
				}
			}
			break;

		case 5:
			if (func_5(Local_749)) {
				if (!ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
					iLocal_170 = 7;
				}
			}
			break;

		case 6:
			func_251();
			func_250();
			if (func_5(Local_749)) {
				if (!ped::is_ped_in_vehicle(Local_455, Local_749, 0) ||
					ped::is_ped_in_vehicle(player::player_ped_id(), Local_749, 1)) {
					iLocal_170 = 7;
				}
			}
			break;

		case 7:
			func_497("Celeb crashed or forced out - quitting chase");
			if (iLocal_169 < 6) {
				func_33("N1D_COLLECT", 7500, 5);
				func_35(6);
			}
			if (func_5(Local_749)) {
				if (ai::is_waypoint_playback_going_on_for_vehicle(Local_749)) {
					ai::remove_waypoint_recording("NIGEL1DGOLF");
					ai::remove_waypoint_recording("NIGEL1DGOLF2");
				}
			}
			func_290(Local_455, 1);
			iLocal_170 = 8;
			break;

		case 8: break;
		}
	}
	else {
		if (!iLocal_374) {
			func_497("bReplayCelebDeadCheck tripped, recording last 2 seconds");
			unk1::_0x293220DA1B46CEBC(2f, 2f, 0);
			iLocal_374 = 1;
		}
		if (!gameplay::is_bit_set(Global_101700.f_17533.f_382, 4)) {
			gameplay::set_bit(&Global_101700.f_17533.f_382, 4);
		}
	}
}

// Position - 0x28241
bool func_249() {
	if (entity::get_entity_speed(Local_749) < 0.15f && ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
		iLocal_378++;
		if (iLocal_378 > 30) {
			ai::vehicle_waypoint_playback_pause(Local_749);
			if (func_5(Local_749) && func_485(Local_455)) {
				vehicle::_set_vehicle_halt(Local_749, 2f, 3, 0);
				if (ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
					ai::clear_ped_tasks(Local_455);
					if (func_14()) {
						func_12();
					}
					func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
					func_263(&uLocal_174, "NIG1DAU", "NIG1D_GIVEUP", "NIG1D_GIVEUP_1", 7, 0, 0);
					func_497("Celeb vehicle stuck");
				}
			}
			return true;
		}
	}
	else {
		iLocal_378 = 0;
	}
	return false;
}

// Position - 0x282FA
void func_250() {
	if (gameplay::is_bullet_in_area(entity::get_entity_coords(Local_455, 1), 20f, 1)) {
		if (!ui::is_message_being_displayed()) {
			if (!func_14()) {
				if (gameplay::get_game_timer() - iLocal_385 >= 3000) {
					switch (iLocal_379) {
					case 0:
						func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
						func_263(&uLocal_174, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_7", 7, 0, 0);
						break;

					case 1:
						func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
						func_263(&uLocal_174, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_8", 7, 0, 0);
						break;

					case 2:
						func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
						func_263(&uLocal_174, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_9", 7, 0, 0);
						break;

					case 3:
						func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
						func_263(&uLocal_174, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_10", 7, 0, 0);
						break;
					}
					iLocal_379++;
					iLocal_384 = gameplay::get_game_timer();
					iLocal_385 = gameplay::get_game_timer();
				}
			}
		}
	}
}

// Position - 0x2840F
void func_251() {
	if (iLocal_169 == 4 || iLocal_169 == 5) {
		if (iLocal_380 < 5) {
			if (!ui::is_message_being_displayed()) {
				if (!func_14()) {
					if (gameplay::get_game_timer() - iLocal_386 > 15000) {
						if (func_6(Local_455)) {
							if (func_252(Local_455, player::player_ped_id()) < 40f) {
								func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
								func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
								switch (iLocal_380) {
								case 0:
									if (func_257(&uLocal_174, "NIG1DAU", "NIG1D_CHASE1", 8, 0, 0, 0)) {
										func_497("Chase conv 1 started...");
										iLocal_386 = gameplay::get_game_timer();
										iLocal_380++;
									}
									break;

								case 1:
									if (func_257(&uLocal_174, "NIG1DAU", "NIG1D_CHASE2", 8, 0, 0, 0)) {
										func_497("Chase conv 2 started...");
										iLocal_386 = gameplay::get_game_timer();
										iLocal_380++;
									}
									break;

								case 2:
									if (func_257(&uLocal_174, "NIG1DAU", "NIG1D_CHASE3", 8, 0, 0, 0)) {
										func_497("Chase conv 3 started...");
										iLocal_386 = gameplay::get_game_timer();
										iLocal_380++;
									}
									break;

								case 3:
									if (iLocal_169 == 5) {
										if (func_257(&uLocal_174, "NIG1DAU", "NIG1D_CHASE4", 8, 0, 0, 0)) {
											func_497("Chase conv 4 started...");
											iLocal_386 = gameplay::get_game_timer();
											iLocal_380++;
										}
									}
									break;

								case 4:
									if (iLocal_169 == 5) {
										if (func_257(&uLocal_174, "NIG1DAU", "NIG1D_CHASE5", 8, 0, 0, 0)) {
											func_497("Chase conv 5 started...");
											iLocal_386 = gameplay::get_game_timer();
											iLocal_380++;
										}
									}
									break;
								}
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x285AE
float func_252(int iParam0, int iParam1) { return func_256(iParam0, iParam1, 1); }

// Position - 0x285BF
void func_253() {
	int iVar0;

	func_497("RESET COURSE SECURITY");
	iLocal_353 = 1;
	iVar0 = 0;
	while (iVar0 <= 2) {
		if (func_485(Local_521[iVar0 /*13*/])) {
			iLocal_681[iVar0] = 1;
		}
		iVar0++;
	}
}

// Position - 0x285FB
int func_254() {
	if (func_485(player::player_ped_id())) {
		if (func_255(&uLocal_935, entity::get_entity_coords(player::player_ped_id(), 1))) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x28626
bool func_255(var *uParam0, struct<2> Param1, Vector3 vParam3) {
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

// Position - 0x286E2
float func_256(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x28740
bool func_257(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_247(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_239(sParam2, iParam3, 0);
}

// Position - 0x2878E
void func_258() {
	int iVar0;

	if (iLocal_357 == 0) {
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_485(Local_481[iVar0 /*13*/])) {
				ai::clear_ped_tasks(Local_481[iVar0 /*13*/]);
				ai::open_sequence_task(&iLocal_775);
				ai::task_pause(0, gameplay::get_random_int_in_range(250, 600));
				ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
				ai::close_sequence_task(iLocal_775);
				ai::task_perform_sequence(Local_481[iVar0 /*13*/], iLocal_775);
				ai::clear_sequence_task(&iLocal_775);
				ped::set_ped_combat_attributes(Local_481[iVar0 /*13*/], 25, 1);
				entity::set_entity_load_collision_flag(Local_481[iVar0 /*13*/], 1);
				ped::set_ped_keep_task(Local_481[iVar0 /*13*/], 1);
				ai::set_ped_path_prefer_to_avoid_water(Local_481[iVar0 /*13*/], 1);
				ped::set_relationship_between_groups(5, iLocal_774, 1862763509);
				iLocal_667[iVar0] = 4;
				if (!ui::does_blip_exist(Local_481[iVar0 /*13*/].f_11)) {
					Local_481[iVar0 /*13*/].f_11 = func_262(Local_481[iVar0 /*13*/], 0, 0, 5);
				}
				func_481("Attack player, security guard: ", iVar0);
			}
			iVar0++;
		}
		if (func_5(Local_749)) {
			if (!ped::is_ped_in_vehicle(player::player_ped_id(), Local_749, 0)) {
				if (func_6(Local_455)) {
					if (!ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
						ai::open_sequence_task(&iLocal_775);
						ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 500);
						ai::task_pause(0, gameplay::get_random_int_in_range(250, 500));
						ai::task_enter_vehicle(0, Local_749, -1, -1, 2f, 1, 0);
						ai::close_sequence_task(iLocal_775);
						ai::task_perform_sequence(Local_455, iLocal_775);
						ai::clear_sequence_task(&iLocal_775);
						func_497("Making Glen get into vehicle through "
								 "MAKE_SECURITY_ATTACK()");
						iLocal_170 = 3;
					}
				}
			}
			else {
				func_290(Local_455, 1);
				iLocal_170 = 8;
			}
		}
		else {
			func_290(Local_455, 1);
		}
		if (func_485(Local_468)) {
			entity::set_entity_load_collision_flag(Local_468, 1);
		}
		func_290(Local_468, 1);
		func_260();
		if (iLocal_169 <= 3 && func_485(Local_455)) {
			entity::attach_entity_to_entity(Local_782.f_1, Local_455, ped::get_ped_bone_index(Local_455, 28422), 0.06f,
											0.04f, 0f, -90f, 180f, 0f, 0, 0, 0, 0, 2, 1);
			if (func_485(Local_468)) {
				entity::attach_entity_to_entity(Local_825, Local_468, ped::get_ped_bone_index(Local_468, 28422), 0.06f,
												0.04f, 0f, -90f, 180f, 0f, 0, 0, 0, 0, 2, 1);
			}
		}
		else if (entity::is_entity_attached(Local_782.f_1)) {
			entity::detach_entity(Local_782.f_1, 1, 1);
		}
		func_259(790, 0);
		iLocal_357 = 1;
	}
}

// Position - 0x289E3
void func_259(int iParam0, int iParam1) {
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

// Position - 0x28A2D
void func_260() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5) {
		if (func_485(Local_561[iVar0 /*13*/])) {
			func_261(iVar0);
			iLocal_671[iVar0] = 3;
		}
		iVar0++;
	}
}

// Position - 0x28A63
void func_261(int iParam0) {
	if (entity::does_entity_exist(Local_788[iParam0 /*6*/])) {
		if (entity::is_entity_attached(Local_788[iParam0 /*6*/])) {
			entity::detach_entity(Local_788[iParam0 /*6*/], 1, 1);
		}
	}
	func_290(Local_561[iParam0 /*13*/], 1);
}

// Position - 0x28AA0
int func_262(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = true;
	if (bVar1) {
		if (func_485(iParam0)) {
			iVar0 = ui::add_blip_for_entity(iParam0);
			ui::set_blip_as_friendly(iVar0, iParam2);
			ui::set_blip_priority(iVar0, iParam3);
			ui::set_blip_scale(iVar0, 0.7f);
			if (!iParam1) {
				ui::set_blip_scale(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

// Position - 0x28AF2
bool func_263(var *uParam0, char *sParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6) {
	func_247(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_239(sParam2, iParam4, 0);
}

// Position - 0x28B46
bool func_264() {
	if (func_265(player::player_ped_id()) == joaat("weapon_sniperrifle") ||
		func_265(player::player_ped_id()) == joaat("weapon_heavysniper") ||
		func_265(player::player_ped_id()) == joaat("weapon_remotesniper")) {
		return true;
	}
	return false;
}

// Position - 0x28B8C
int func_265(int iParam0) {
	var uVar0;

	weapon::get_current_ped_weapon(iParam0, &uVar0, 1);
	return uVar0;
}

// Position - 0x28BA0
bool func_266(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7) {
	vector3 vVar0;

	if (func_485(player::player_ped_id()) && func_485(iParam0)) {
		if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
			return true;
		}
		if (func_280(iParam0, iParam1, iParam5, iParam6, iParam7)) {
			return true;
		}
		if (!weapon::is_ped_armed(player::player_ped_id(), 6)) {
			if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
				vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1) - entity::get_entity_coords(iParam0, 1)};
				if (vVar0.x * vVar0.x + vVar0.y * vVar0.y + vVar0.z * vVar0.z <= 5f) {
					return func_279(player::player_ped_id(), iParam0, fParam2);
				}
			}
		}
		if (iParam4) {
			return false;
		}
		else if (func_267(iParam0, fParam3)) {
			return true;
		}
	}
	return false;
}

// Position - 0x28C5B
bool func_267(int iParam0, float fParam1) {
	float fVar0;

	if (func_485(player::player_ped_id()) && func_485(iParam0)) {
		if (func_278(iParam0) || player::is_player_targetting_entity(player::player_id(), iParam0)) {
			if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
				fVar0 = 40f;
			}
			else {
				fVar0 = 3f;
			}
			if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0)) {
				if (func_268(iParam0, fParam1)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x28CD1
bool func_268(int iParam0, float fParam1) { return func_269(iParam0, player::player_ped_id(), fParam1, 1, 250, 7); }

// Position - 0x28CE9
bool func_269(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_277(iParam0, iParam1);
	if (!func_485(iParam0) || !func_485(iParam1)) {
		if (iVar4 != -1) {
			func_276(&Local_49[iVar4 /*4*/]);
		}
		return false;
	}
	if (!func_273(iParam0, iParam1, fParam2, iParam3)) {
		return false;
	}
	if (iVar4 == -1) {
		iVar4 = func_272();
		if (iVar4 == -1) {
			return false;
		}
		Local_49[iVar4 /*4*/].f_1 = iParam0;
		Local_49[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = {ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f)};
	iVar0 = func_270(&Local_49[iVar4 /*4*/], vVar1, iParam1, &Local_49[iVar4 /*4*/].f_3, iParam0, iParam5);
	return iVar0 || gameplay::get_game_timer() - Local_49[iVar4 /*4*/].f_3 < iParam4;
}

// Position - 0x28DAA
int func_270(int *iParam0, vector3 vParam1, int iParam4, var *uParam5, int iParam6, int iParam7) {
	var uVar0;
	vector3 vVar1;
	var uVar4;
	int iVar7;
	int iVar8;

	iVar7 = 0;
	if (!func_485(iParam4)) {
		*iParam0 = 0;
		return 0;
	}
	if (*iParam0 == 0) {
		vVar1 = {func_271(iParam4, iParam7)};
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
		func_485(iVar7);
		if (entity::get_ped_index_from_entity_index(iVar7) == iParam4) {
			if (bLocal_90) {
				graphics::draw_debug_line_with_two_colours(vParam1, entity::get_entity_coords(iParam4, 1), 255, 0, 0,
														   255, 0, 0, 255, 255);
			}
			*uParam5 = gameplay::get_game_timer();
			return 1;
		}
		return 0;
	}
	if (entity::is_entity_a_vehicle(iVar7)) {
		func_485(iVar7);
		if (ped::is_ped_in_any_vehicle(iParam4, 0)) {
			if (entity::get_vehicle_index_from_entity_index(iVar7) == ped::get_vehicle_ped_is_in(iParam4, 0)) {
				if (bLocal_90) {
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

// Position - 0x28ED6
Vector3 func_271(int iParam0, int iParam1) {
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

// Position - 0x28F9B
int func_272() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_49) {
		if (Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0 && Local_49[iVar0 /*4*/].f_2 == 0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x28FE5
int func_273(int iParam0, int iParam1, float fParam2, int iParam3) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_275(entity::get_entity_coords(iParam1, 1) - entity::get_entity_coords(iParam0, 1))};
	if (fParam2 < 0.1f || fParam2 > 360f) {
		return 1;
	}
	if (iParam3 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_275(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						  ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_274(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam2 / 2f)) {
		return 0;
	}
	return 1;
}

// Position - 0x29076
float func_274(vector3 vParam0, vector3 vParam3) {
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

// Position - 0x29097
Vector3 func_275(vector3 vParam0) {
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

// Position - 0x290D6
void func_276(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

// Position - 0x290F1
int func_277(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_49) {
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x29130
int func_278(int iParam0) {
	if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) &&
		weapon::is_ped_armed(player::player_ped_id(), 6)) {
		return 1;
	}
	return 0;
}

// Position - 0x29158
bool func_279(int iParam0, int iParam1, float fParam2) {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {entity::get_entity_forward_vector(iParam0)};
	vVar3 = {entity::get_entity_coords(iParam1, 1) - entity::get_entity_coords(iParam0, 1)};
	return (vVar0.x * vVar3.x + vVar0.y * vVar3.y) / system::vdist(vVar3, 0f, 0f, 0f) > system::cos(fParam2);
}

// Position - 0x2919F
bool func_280(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) {
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 8f;
	fVar1 = 15f;
	if (iParam1 == 0) {
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2) {
		fVar0 = 2f;
	}
	if (func_485(player::player_ped_id()) && func_485(iParam0)) {
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan")) {
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2) {
			if (func_284(iParam0, iParam1, fVar0, fVar1)) {
				return true;
			}
			if (func_281(iParam0, fVar1, bParam3, bParam4)) {
				return true;
			}
		}
		else {
			if (weapon::is_ped_current_weapon_silenced(player::player_ped_id())) {
				if (ped::is_ped_shooting(player::player_ped_id())) {
					if (gameplay::is_bullet_in_area(entity::get_entity_coords(iParam0, 1), fVar0, 1)) {
						return true;
					}
				}
			}
			else {
				if (iParam1) {
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_284(iParam0, iParam1, fVar0, fVar1)) {
					return true;
				}
			}
			if (func_281(iParam0, fVar1, bParam3, bParam4)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2929A
bool func_281(int iParam0, float fParam1, bool bParam2, bool bParam3) {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {entity::get_entity_coords(iParam0, 1)};
	vVar3 = {vVar0};
	vVar0.x -= fParam1;
	vVar0.y -= fParam1;
	vVar0.z -= fParam1;
	vVar3.x += fParam1;
	vVar3.y += fParam1;
	vVar3.z += fParam1;
	if (bParam2) {
		if (gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_molotov"), fParam1, 1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_smokegrenade"), fParam1,
										  1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1)) {
			if (bParam3) {
				if (func_282(iParam0, fParam1)) {
					return true;
				}
				else {
					return false;
				}
			}
			return true;
		}
	}
	else {
		if (bParam3) {
			if (func_282(iParam0, fParam1)) {
				return true;
			}
			else {
				return false;
			}
		}
		if (gameplay::is_projectile_in_area(vVar0, vVar3, 1)) {
			return true;
		}
	}
	return false;
}

// Position - 0x293A6
bool func_282(int iParam0, float fParam1) {
	var uVar0;
	vector3 vVar1;

	if (gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0)) {
		if (func_283(iParam0, vVar1, 90f, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x2943B
bool func_283(int iParam0, vector3 vParam1, float fParam4, int iParam5) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_275(vParam1 - entity::get_entity_coords(iParam0, 1))};
	if (fParam4 < 0.1f || fParam4 > 360f) {
		return true;
	}
	if (iParam5 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_275(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						  ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_274(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam4 / 2f)) {
		return false;
	}
	return true;
}

// Position - 0x294C9
bool func_284(int iParam0, int iParam1, float fParam2, float fParam3) {
	if (iParam1) {
		if (ped::is_ped_shooting(player::player_ped_id())) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0)) {
				return true;
			}
		}
	}
	if (gameplay::is_bullet_in_area(entity::get_entity_coords(iParam0, 1), fParam2, 1)) {
		return true;
	}
	return false;
}

// Position - 0x29511
void func_285() {
	switch (iLocal_693) {
	case 0:
		if (func_6(Local_455) && func_485(player::player_ped_id())) {
			if (func_286(player::player_ped_id(), Local_455, 35f, 1) && iLocal_667[0] != 5 && iLocal_667[1] != 5 &&
				iLocal_667[2] != 5) {
				if (!func_14()) {
					func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
					if (func_257(&uLocal_174, "NIG1DAU", "NIG1D_SWING", 8, 0, 0, 0)) {
						iLocal_693 = 1;
					}
				}
			}
		}
		break;

	case 1:
		if (!func_14()) {
			iLocal_381 = gameplay::get_game_timer();
			iLocal_693 = 2;
		}
		break;

	case 2:
		if (gameplay::get_game_timer() - iLocal_381 > 4500) {
			iLocal_693 = 0;
		}
		break;
	}
}

// Position - 0x295E5
bool func_286(int iParam0, int iParam1, float fParam2, int iParam3) {
	return system::vdist2(entity::get_entity_coords(iParam0, iParam3), entity::get_entity_coords(iParam1, iParam3)) <=
		   fParam2 * fParam2;
}

// Position - 0x29607
void func_287(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x296A2
void func_288(var *uParam0, int iParam1) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
		(*uParam0)[iParam1 /*10*/].f_7 = 0;
	}
}

// Position - 0x296BF
void func_289(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x296DF
void func_290(int iParam0, int iParam1) {
	if (func_6(iParam0)) {
		if (iParam1 == 0) {
			ai::clear_ped_tasks(iParam0);
			ped::set_ped_combat_attributes(iParam0, 13, 0);
			ped::set_ped_combat_attributes(iParam0, 17, 1);
			ped::set_ped_combat_attributes(iParam0, 31, 0);
			ped::set_ped_combat_attributes(iParam0, 28, 0);
			ped::set_ped_combat_attributes(iParam0, 3, 0);
			ped::set_ped_flee_attributes(iParam0, 2, 1);
			ped::set_ped_flee_attributes(iParam0, 128, 1);
			ped::set_ped_flee_attributes(iParam0, 8, 0);
			ped::set_ped_flee_attributes(iParam0, 1, 0);
			ped::set_ped_flee_attributes(iParam0, 32, 0);
			ped::set_ped_flee_attributes(iParam0, 64, 0);
			ai::task_smart_flee_ped(iParam0, player::player_ped_id(), 200f, -1, 0, 0);
			ped::set_ped_keep_task(iParam0, 1);
		}
		else {
			ai::clear_ped_tasks(iParam0);
			ped::set_ped_combat_attributes(iParam0, 13, 0);
			ped::set_ped_combat_attributes(iParam0, 17, 1);
			ped::set_ped_combat_attributes(iParam0, 31, 0);
			ped::set_ped_combat_attributes(iParam0, 28, 0);
			ped::set_ped_combat_attributes(iParam0, 3, 1);
			ped::set_ped_flee_attributes(iParam0, 2, 0);
			ped::set_ped_flee_attributes(iParam0, 65536, 1);
			ped::set_ped_flee_attributes(iParam0, 128, 1);
			ped::set_ped_flee_attributes(iParam0, 8, 1);
			ped::set_ped_flee_attributes(iParam0, 1, 0);
			ped::set_ped_flee_attributes(iParam0, 32, 1);
			ped::set_ped_flee_attributes(iParam0, 64, 0);
			ai::open_sequence_task(&iLocal_776);
			ai::task_smart_flee_ped(0, player::player_ped_id(), 200f, -1, 1, 0);
			ai::close_sequence_task(iLocal_776);
			ai::task_perform_sequence(iParam0, iLocal_776);
			ai::clear_sequence_task(&iLocal_776);
			ped::set_ped_keep_task(iParam0, 1);
		}
	}
}

// Position - 0x2981F
void func_291() {
	int iVar0;

	switch (iLocal_171) {
	case 0:
		if (iLocal_361 == 0) {
			func_33("N1D_WANTED", 7500, 5);
			iLocal_361 = 1;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			func_290(Local_481[iVar0 /*13*/], 0);
			func_289(&Local_481[iVar0 /*13*/].f_11);
			iVar0++;
		}
		func_497("ENTERING LOSE THE COPS");
		iLocal_171 = 1;
		break;

	case 1:
		func_248();
		func_302();
		func_295();
		func_292();
		if (!player::is_player_wanted_level_greater(player::player_id(), 0)) {
			iLocal_171 = 2;
		}
		break;

	case 2:
		ui::clear_prints();
		iLocal_359 = 0;
		func_35(7);
		break;
	}
}

// Position - 0x298C3
void func_292() {
	if (iLocal_368) {
		if (!func_485(Local_455) && func_294()) {
			func_497("Player achieved FOUR!");
			iLocal_368 = 0;
			func_293(792);
		}
	}
}

// Position - 0x298F8
void func_293(int iParam0) {
	int iVar0;
	int iVar1;

	Global_55823 = 0;
	if (Global_56047[iParam0 /*13*/] != 3) {
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

// Position - 0x29969
int func_294() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2) {
		if (Local_481[iVar0 /*13*/].f_9 == 0) {
			return 0;
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x29995
void func_295() {
	int iVar0;

	if (iLocal_348 == 0) {
		if (func_301(0)) {
			iVar0 = 0;
			while (iVar0 <= 1) {
				func_300(&Local_640[iVar0 /*13*/], 0);
				ped::set_blocking_of_non_temporary_events(Local_640[iVar0 /*13*/], 1);
				ped::set_ped_can_be_targetted(Local_640[iVar0 /*13*/], 0);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 1) {
				func_299(&Local_755[iVar0 /*6*/], 0);
				vehicle::set_vehicle_model_is_suppressed(Local_755[iVar0 /*6*/].f_5, 1);
				iVar0++;
			}
			iLocal_348 = 1;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 <= 1) {
			if (func_485(Local_640[iVar0 /*13*/])) {
				func_296(iVar0);
			}
			iVar0++;
		}
	}
}

// Position - 0x29A3B
void func_296(int iParam0) {
	switch (iLocal_678[iParam0]) {
	case 0:
		if (func_5(Local_749)) {
			if (func_485(Local_455)) {
				if (ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
					if (entity::is_entity_at_entity(Local_455, Local_640[iParam0 /*13*/], 62f, 62f, 62f, 0, 1, 0)) {
						if (func_6(Local_640[iParam0 /*13*/])) {
							ai::task_turn_ped_to_face_entity(Local_640[iParam0 /*13*/], Local_455, -1);
							iLocal_678[iParam0] = 1;
						}
					}
					else if (gameplay::is_bullet_in_area(entity::get_entity_coords(Local_640[iParam0 /*13*/], 1), 15f,
														 1)) {
						func_287(&uLocal_174, 8, Local_640[iParam0 /*13*/], "NIGEL1DAMBIENTGOLFER1", 0, 1);
						if (func_256(player::player_ped_id(), Local_640[iParam0 /*13*/], 1) < 45f) {
							func_297(Local_561[iParam0 /*13*/], "GENERIC_CURSE_MED", 34);
						}
						func_290(Local_640[iParam0 /*13*/], 0);
						iLocal_678[iParam0] = 3;
					}
				}
				else if (func_266(Local_640[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0) ||
						 entity::is_entity_at_entity(Local_455, Local_640[iParam0 /*13*/], 30f, 30f, 30f, 0, 1, 0)) {
					func_290(Local_640[iParam0 /*13*/], 0);
					iLocal_678[iParam0] = 3;
				}
			}
		}
		break;

	case 1:
		if (entity::is_entity_at_entity(Local_455, Local_640[iParam0 /*13*/], 38f, 38f, 38f, 0, 1, 0)) {
			if (func_6(Local_640[iParam0 /*13*/])) {
				func_287(&uLocal_174, 8, Local_640[iParam0 /*13*/], "NIGEL1DAMBIENTGOLFER1", 0, 1);
				if (func_256(player::player_ped_id(), Local_640[iParam0 /*13*/], 1) < 45f) {
					func_297(Local_561[iParam0 /*13*/], "GENERIC_CURSE_HIGH", 34);
				}
				ai::clear_ped_tasks_immediately(Local_640[iParam0 /*13*/]);
				ai::task_go_straight_to_coord(Local_640[iParam0 /*13*/], Local_640[iParam0 /*13*/].f_4, 3f, -1,
											  1193033728, 1056964608);
				ped::set_ped_keep_task(Local_640[iParam0 /*13*/], 1);
				iLocal_678[iParam0] = 2;
			}
		}
		break;

	case 2:
		if (entity::is_entity_at_coord(Local_640[iParam0 /*13*/], Local_640[iParam0 /*13*/].f_4, 2f, 2f, 2f, 0, 1, 0)) {
			func_290(Local_640[iParam0 /*13*/], 0);
			iLocal_678[iParam0] = 3;
		}
		break;

	case 3: break;
	}
}

// Position - 0x29C8A
void func_297(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_298(iParam2), 1);
}

// Position - 0x29CA1
int func_298(int iParam0) {
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

// Position - 0x29EB1
void func_299(var *uParam0, int iParam1) {
	if (streaming::has_model_loaded(uParam0->f_5)) {
		*uParam0 = vehicle::create_vehicle(uParam0->f_5, uParam0->f_1, uParam0->f_4, 1, 1);
	}
	if (iParam1 == 1) {
		streaming::set_model_as_no_longer_needed(uParam0->f_5);
	}
}

// Position - 0x29EE9
void func_300(int iParam0, int iParam1) {
	if (streaming::has_model_loaded(iParam0->f_8)) {
		*iParam0 = ped::create_ped(26, iParam0->f_8, iParam0->f_1, 0f, 1, 1);
		if (func_485(*iParam0)) {
			entity::set_entity_heading(*iParam0, iParam0->f_7);
		}
		if (iParam1 == 1) {
			streaming::set_model_as_no_longer_needed(iParam0->f_8);
		}
	}
}

// Position - 0x29F35
bool func_301(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 1) {
		streaming::request_model(Local_640[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		streaming::request_model(Local_755[iVar0 /*6*/].f_5);
		iVar0++;
	}
	if (iParam0 == 0) {
		iVar0 = 0;
		while (iVar0 <= 1) {
			if (!streaming::has_model_loaded(Local_640[iVar0 /*13*/].f_8)) {
				return false;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 1) {
			if (!streaming::has_model_loaded(Local_755[iVar0 /*6*/].f_5)) {
				return false;
			}
			iVar0++;
		}
	}
	else {
		iVar1 = 0;
		while (iVar1 == 0) {
			system::wait(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 1) {
				if (!streaming::has_model_loaded(Local_640[iVar0 /*13*/].f_8)) {
					iVar1 = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 1) {
				if (!streaming::has_model_loaded(Local_755[iVar0 /*6*/].f_5)) {
					iVar1 = 0;
				}
				iVar0++;
			}
		}
	}
	return true;
}

// Position - 0x2A033
void func_302() {
	int iVar0;

	if (iLocal_345 == 0) {
		if (func_8(0)) {
			func_497("Celeb security loaded, creating now...");
			iVar0 = 0;
			while (iVar0 <= 2) {
				func_300(&Local_481[iVar0 /*13*/], 0);
				ped::set_blocking_of_non_temporary_events(Local_481[iVar0 /*13*/], 1);
				weapon::give_weapon_to_ped(Local_481[iVar0 /*13*/], joaat("weapon_pistol"), -1, 0, 1);
				entity::set_entity_only_damaged_by_player(Local_481[iVar0 /*13*/], 1);
				ped::set_ped_can_be_targetted(Local_481[iVar0 /*13*/], 1);
				ped::set_ped_relationship_group_hash(Local_481[iVar0 /*13*/], iLocal_774);
				ped::set_ped_dies_when_injured(Local_481[iVar0 /*13*/], 1);
				ped::set_ped_model_is_suppressed(Local_481[iVar0 /*13*/].f_8, 1);
				iVar0++;
			}
			iLocal_345 = 1;
		}
	}
	else {
		func_303();
	}
}

// Position - 0x2A0DB
void func_303() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2) {
		if (func_485(Local_481[iVar0 /*13*/])) {
			if (iLocal_357 == 0 && iLocal_351 == 0) {
				if (func_312()) {
					func_497("Monitor_Security, player has 'mucked about' with "
							 "the celeb scene; attacking...");
					if (func_311(player::player_ped_id(), -1098.865f, 69.9792f, 53.6198f, 1) < 45f) {
						func_287(&uLocal_174, 7, Local_481[iVar0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
						func_258();
					}
					else {
						func_309();
					}
				}
			}
			func_304(iVar0);
		}
		else {
			if (ui::does_blip_exist(Local_481[iVar0 /*13*/].f_11)) {
				ui::remove_blip(&Local_481[iVar0 /*13*/].f_11);
			}
			if (entity::does_entity_exist(Local_481[iVar0 /*13*/])) {
				if (entity::is_entity_dead(Local_481[iVar0 /*13*/], 0)) {
					Local_481[iVar0 /*13*/].f_9 = 1;
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x2A1C9
void func_304(int iParam0) {
	int iVar0;
	int iVar1;

	if (func_485(player::player_ped_id()) && func_485(Local_481[iParam0 /*13*/])) {
		if (func_256(player::player_ped_id(), Local_481[iParam0 /*13*/], 1) < 20f) {
			if (!ped::is_ped_headtracking_ped(Local_481[iParam0 /*13*/], player::player_ped_id())) {
				ai::task_look_at_entity(Local_481[iParam0 /*13*/], player::player_ped_id(), 1000, 0, 2);
			}
		}
	}
	switch (iLocal_667[iParam0]) {
	case 0:
		if (func_266(Local_481[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0) ||
			ped::has_ped_received_event(Local_481[iParam0 /*13*/], 60)) {
			if (func_268(Local_481[iParam0 /*13*/], 110f)) {
				if (func_14()) {
					func_12();
				}
				if (func_264()) {
					func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 1, 0);
				}
				func_497("SS_GUARD_AREA, player threatened Celeb security; "
						 "attacking...");
				func_258();
			}
		}
		else if (cam::is_first_person_aim_cam_active()) {
			if (entity::is_entity_on_screen(Local_481[iParam0 /*13*/]) &&
				func_268(Local_481[iParam0 /*13*/], 1126825984) &&
				func_256(Local_481[iParam0 /*13*/], player::player_ped_id(), 1) < 50f) {
				if (func_14()) {
					func_12();
				}
				func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
				func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 1, 0);
				func_497("SS_GUARD_AREA, player tried sniping Celeb security "
						 "but was spotted; attacking...");
				func_258();
			}
		}
		else if (player::is_player_free_aiming_at_entity(player::player_id(), Local_481[iParam0 /*13*/])) {
			if (func_264()) {
				if (func_268(Local_481[iParam0 /*13*/], 1126825984)) {
					if (func_14()) {
						func_12();
					}
					func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 1, 0)) {
						func_497("SS_GUARD_AREA, player aimed Sniper Rifle "
								 "when security could see them; attacking...");
						func_258();
					}
				}
			}
		}
		else if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 25f, 25f, 25f, 0, 1,
											0)) {
				if (!func_180(player::player_ped_id(), 12, 4)) {
					if (!func_308()) {
						if (func_268(Local_481[iParam0 /*13*/], 1126825984) &&
							entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 18f, 18f,
														18f, 0, 1, 0)) {
							if (func_14()) {
								func_12();
							}
							func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
							if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_5", 7, 0, 0)) {
								func_497("SS_GUARD_AREA, player armed, not "
										 "wearing outfit, guard has LOS or "
										 "player within 18m; attacking...");
								func_258();
							}
						}
					}
					else if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 18f, 18f,
														 18f, 0, 1, 0)) {
						if (iLocal_349 == 0) {
							func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
							if (!ui::is_message_being_displayed() || gameplay::get_profile_setting(203) == 0) {
								if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_1", 7, 0, 0)) {
									ai::open_sequence_task(&iLocal_775);
									ai::task_play_anim(0, "rcmnigel1d", "thanks_male_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
									ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), -1);
									ai::close_sequence_task(iLocal_775);
									ai::task_perform_sequence(Local_481[iParam0 /*13*/], iLocal_775);
									ai::clear_sequence_task(&iLocal_775);
									iLocal_387 = gameplay::get_game_timer();
									iLocal_349 = 1;
									iLocal_667[iParam0] = 1;
								}
							}
							else if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_1", 7, 1, 0)) {
								ai::open_sequence_task(&iLocal_775);
								ai::task_play_anim(0, "rcmnigel1d", "thanks_male_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
								ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), -1);
								ai::close_sequence_task(iLocal_775);
								ai::task_perform_sequence(Local_481[iParam0 /*13*/], iLocal_775);
								ai::clear_sequence_task(&iLocal_775);
								iLocal_387 = gameplay::get_game_timer();
								iLocal_349 = 1;
								iLocal_667[iParam0] = 1;
							}
						}
						else if (iLocal_351 == 1) {
							if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 12f,
															12f, 12f, 0, 1, 0)) {
								if (func_14()) {
									func_12();
								}
								func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0)) {
									func_497("SS_GUARD_AREA, non-outfit, "
											 "player came back to area after "
											 "being warned; attacking");
									func_258();
								}
							}
						}
					}
				}
				else if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 18f, 18f, 18f,
													 0, 1, 0)) {
					if (iLocal_349 == 0) {
						if (!func_14() && iLocal_359 == 0) {
							if (func_6(Local_481[iParam0 /*13*/])) {
								ai::task_turn_ped_to_face_entity(Local_481[iParam0 /*13*/], player::player_ped_id(),
																 -1);
							}
							if (func_6(Local_468)) {
								ai::task_look_at_entity(Local_468, player::player_ped_id(), -1, 0, 2);
							}
							if (func_6(Local_455)) {
								ai::task_look_at_entity(Local_455, player::player_ped_id(), -1, 0, 2);
								ai::open_sequence_task(&iLocal_776);
								ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 1500);
								ai::task_play_anim(0, "rcmnigel1d", "idle_c", 2f, -4f, -1, 1, 0, 0, 0, 0);
								ai::close_sequence_task(iLocal_776);
								ai::task_perform_sequence(Local_455, iLocal_776);
								ai::clear_sequence_task(&iLocal_776);
							}
							func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
							func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
							func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
							if (func_257(&uLocal_174, "NIG1DAU", "NIG1D_OUTFIT", 7, 0, 0, 0)) {
								iLocal_349 = 1;
								iVar0 = 0;
								while (iVar0 <= 2) {
									iLocal_667[iVar0] = 5;
									iVar0++;
								}
							}
						}
					}
					else if (iLocal_351 == 1) {
						if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 12f, 12f,
														12f, 0, 1, 0)) {
							if (func_14()) {
								func_12();
							}
							func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
							if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 1, 0)) {
								func_497("SS_GUARD_AREA, outfit, player came "
										 "back to area after being warned; "
										 "attacking");
								func_258();
							}
						}
					}
				}
			}
		}
		else if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 50f, 50f, 50f, 0, 1,
											 0)) {
			if (!vehicle::is_vehicle_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), Local_749.f_5)) {
				if (func_268(Local_481[iParam0 /*13*/], 1126825984)) {
					if (func_14()) {
						func_12();
					}
					func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 1, 0)) {
						func_497("SS_GUARD_AREA, player 50m away from group in "
								 "non-buggy vehicle; attacking");
						func_258();
					}
				}
			}
			else if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 25f, 25f, 25f, 0,
												 1, 0)) {
				if (entity::get_entity_speed(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)) >= 15f) {
					func_307("Going too fast, going to trigger aggro: ",
							 entity::get_entity_speed(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)));
					if (ped::has_ped_received_event(Local_481[iParam0 /*13*/], 60) ||
						entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 6f, 6f, 6f, 0,
													1, 0)) {
						if (func_268(Local_481[iParam0 /*13*/], 1126825984)) {
							if (func_14()) {
								func_12();
							}
							func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
							if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 1, 0)) {
								func_497("SS_GUARD_AREA, player went too fast "
										 "too close to security; attacking");
								func_258();
							}
						}
					}
				}
				else if (func_268(Local_481[iParam0 /*13*/], 1126825984)) {
					func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					if (iLocal_356 == 0) {
						if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_7", 7, 0, 0)) {
							func_481("'You can't drive through here buddy said "
									 "by ped id: ",
									 iParam0);
							if (func_6(Local_481[iParam0 /*13*/])) {
								ai::task_turn_ped_to_face_entity(Local_481[iParam0 /*13*/], player::player_ped_id(),
																 -1);
							}
							iLocal_356 = 1;
							iLocal_387 = gameplay::get_game_timer();
							iLocal_667[iParam0] = 2;
						}
					}
					else {
						if (func_6(Local_481[iParam0 /*13*/])) {
							ai::task_turn_ped_to_face_entity(Local_481[iParam0 /*13*/], player::player_ped_id(), -1);
						}
						iLocal_356 = 1;
						iLocal_387 = gameplay::get_game_timer();
						iLocal_667[iParam0] = 2;
					}
				}
			}
		}
		break;

	case 1:
		if (!func_308()) {
			if (func_268(Local_481[iParam0 /*13*/], 1126825984)) {
				if (func_256(player::player_ped_id(), Local_481[iParam0 /*13*/], 1) < 80f) {
					func_497("SS_GO_TO_PLAYER, player armed, guard has LOS; "
							 "attacking...");
					func_258();
				}
			}
		}
		else if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 9f, 9f, 9f, 0, 1, 0) &&
				 iLocal_351 == 1) {
			func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
			if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_3", 7, 0, 0)) {
				if (func_6(Local_481[iParam0 /*13*/])) {
					ai::task_turn_ped_to_face_entity(Local_481[iParam0 /*13*/], player::player_ped_id(), -1);
				}
				iLocal_387 = gameplay::get_game_timer();
				iLocal_667[iParam0] = 3;
			}
		}
		else if (gameplay::get_game_timer() - iLocal_387 >= 8000) {
			if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 20f, 20f, 20f, 0, 1,
											0)) {
				func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
				if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_2", 7, 0, 0)) {
					ai::open_sequence_task(&iLocal_775);
					ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), -1);
					ai::task_look_at_entity(0, player::player_ped_id(), 7000, 0, 2);
					ai::task_play_anim(0, "rcmnigel1d", "thanks_male_05", 4f, -4f, -1, 0, 0, 0, 0, 0);
					ai::close_sequence_task(iLocal_775);
					ai::task_perform_sequence(Local_481[iParam0 /*13*/], iLocal_775);
					ai::clear_sequence_task(&iLocal_775);
					iLocal_387 = gameplay::get_game_timer();
					iLocal_667[iParam0] = 2;
					func_497("Guard: going into SS_WARN_PLAYER ");
				}
			}
		}
		break;

	case 2:
		if (!func_308()) {
			if (func_268(Local_481[iParam0 /*13*/], 1126825984)) {
				if (func_256(player::player_ped_id(), Local_481[iParam0 /*13*/], 1) < 80f) {
					func_497("SS_WARN_PLAYER, player armed, guard has LOS; "
							 "attacking...");
					func_258();
				}
			}
		}
		else if (!func_180(player::player_ped_id(), 12, 4)) {
			if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 4f, 4f, 4f, 0, 1, 0) ||
				entity::is_entity_at_entity(player::player_ped_id(), Local_455, 8f, 8f, 8f, 0, 1, 0) &&
					iLocal_351 == 1) {
				func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
				if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_3", 7, 0, 0)) {
					if (func_6(Local_481[iParam0 /*13*/])) {
						ai::task_turn_ped_to_face_entity(Local_481[iParam0 /*13*/], player::player_ped_id(), -1);
					}
					iLocal_387 = gameplay::get_game_timer();
					iLocal_667[iParam0] = 3;
				}
				func_497("SS_WARN_PLAYER, player got too close, going to aim...");
			}
			else {
				if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 9f, 9f, 9f, 0, 1,
												0)) {
					if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (entity::get_entity_speed(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)) >= 15f) {
							if (func_14()) {
								func_12();
							}
							func_307("SS_WARN_PLAYER, going too fast: ",
									 entity::get_entity_speed(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)));
							func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
							func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
							func_497("SS_WARN_PLAYER, player in vehicle going "
									 "too fast within 9m of guard; "
									 "attacking...");
							func_258();
						}
					}
				}
				if (gameplay::get_game_timer() - iLocal_387 >= 7000) {
					if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 20f, 20f, 20f,
													0, 1, 0)) {
						func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_3", 7, 0, 0)) {
							if (func_6(Local_481[iParam0 /*13*/])) {
								ai::task_turn_ped_to_face_entity(Local_481[iParam0 /*13*/], player::player_ped_id(),
																 -1);
							}
							iLocal_387 = gameplay::get_game_timer();
							iLocal_667[iParam0] = 3;
							func_497("SS_WARN_PLAYER, player took too long, "
									 "going to aim...");
						}
					}
					else if (func_256(player::player_ped_id(), Local_481[iParam0 /*13*/], 1) > 20f) {
						ai::task_achieve_heading(Local_481[iParam0 /*13*/], Local_481[iParam0 /*13*/].f_7, 0);
						ai::task_clear_look_at(Local_481[iParam0 /*13*/]);
						func_497("SS_WARN_PLAYER, player >20m away, returning "
								 "to SS_GUARD_AREA...");
						iLocal_667[iParam0] = 0;
					}
				}
			}
		}
		else if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 18f, 18f, 18f, 0, 1,
											 0)) {
			if (iLocal_349 == 0) {
				if (!func_14() && iLocal_359 == 0) {
					if (func_6(Local_481[iParam0 /*13*/])) {
						ai::task_turn_ped_to_face_entity(Local_481[iParam0 /*13*/], player::player_ped_id(), -1);
					}
					if (func_6(Local_455)) {
						ai::task_turn_ped_to_face_entity(Local_455, player::player_ped_id(), -1);
					}
					func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
					func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
					if (func_257(&uLocal_174, "NIG1DAU", "NIG1D_OUTFIT", 7, 0, 0, 0)) {
						iLocal_349 = 1;
						iVar1 = 0;
						while (iVar1 <= 2) {
							iLocal_667[iVar1] = 5;
							iVar1++;
						}
					}
				}
			}
			else if (iLocal_351 == 1) {
				if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 12f, 12f, 12f, 0, 1,
												0)) {
					if (func_14()) {
						func_12();
					}
					func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					if (func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 1, 0)) {
						func_497("SS_WARN_PLAYER, outfit worn, player came "
								 "back to area after being warned; attacking");
						func_258();
					}
				}
			}
		}
		break;

	case 3:
		if (!func_308()) {
			if (func_268(Local_481[iParam0 /*13*/], 1126825984)) {
				if (func_256(player::player_ped_id(), Local_481[iParam0 /*13*/], 1) < 80f) {
					if (func_14()) {
						func_12();
					}
					func_497("SS_AIM_AT_PLAYER, player armed, guard has LOS; "
							 "attacking...");
					if (iLocal_357 == 0) {
						func_258();
					}
					else {
						ai::clear_ped_tasks(Local_481[iParam0 /*13*/]);
						ai::open_sequence_task(&iLocal_775);
						ai::task_pause(0, gameplay::get_random_int_in_range(5, 200));
						ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
						ai::close_sequence_task(iLocal_775);
						ai::task_perform_sequence(Local_481[iParam0 /*13*/], iLocal_775);
						ai::clear_sequence_task(&iLocal_775);
						ped::set_ped_combat_attributes(Local_481[iParam0 /*13*/], 25, 1);
						entity::set_entity_load_collision_flag(Local_481[iParam0 /*13*/], 1);
						ped::set_ped_keep_task(Local_481[iParam0 /*13*/], 1);
						ai::set_ped_path_prefer_to_avoid_water(Local_481[iParam0 /*13*/], 1);
						ped::set_relationship_between_groups(5, iLocal_774, 1862763509);
						iLocal_667[iParam0] = 4;
						if (!ui::does_blip_exist(Local_481[iParam0 /*13*/].f_11)) {
							Local_481[iParam0 /*13*/].f_11 = func_262(Local_481[iParam0 /*13*/], 0, 0, 5);
						}
						func_481("Attack player, FORCE security guard: ", iParam0);
					}
				}
			}
		}
		else {
			if (gameplay::is_bullet_in_area(entity::get_entity_coords(Local_481[iParam0 /*13*/], 1), 20f, 0) &&
				entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 20f, 20f, 20f, 0, 1,
											0)) {
				if (func_14()) {
					func_12();
				}
				func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
				func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
				func_497("SS_AIM_AT_PLAYER, bullet detected within 20m of a "
						 "ped, attacking...");
				func_258();
			}
			if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 7f, 7f, 5f, 0, 1, 0) ||
				func_306(player::player_ped_id(), -1097.28f, 68.05f, 52.99f, 10f) && iLocal_351 == 1) {
				if (func_14()) {
					func_12();
				}
				func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
				func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
				func_497("SS_AIM_AT_PLAYER, player got too close, attacking...");
				func_258();
			}
			else {
				if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 20f, 20f, 20f, 0, 1,
												0)) {
					if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (entity::get_entity_speed(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)) >= 15f) {
							if (func_14()) {
								func_12();
							}
							func_307("SS_AIM_AT_PLAYER, going too fast: ",
									 entity::get_entity_speed(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)));
							func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
							func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
							func_497("SS_AIM_AT_PLAYER, player in vehicle "
									 "above acceptable speed, within 20m; "
									 "attacking...");
							func_258();
						}
					}
				}
				if (gameplay::get_game_timer() - iLocal_387 >= 10000) {
					if (func_485(Local_455)) {
						if (!entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 25f, 25f,
														 25f, 0, 1, 0) &&
							!entity::is_entity_at_entity(player::player_ped_id(), Local_455, 11f, 11f, 11f, 0, 1, 0)) {
							if (func_6(Local_481[iParam0 /*13*/])) {
								ai::clear_ped_tasks_immediately(Local_481[iParam0 /*13*/]);
								ai::task_go_straight_to_coord(Local_481[iParam0 /*13*/], Local_481[iParam0 /*13*/].f_1,
															  3f, -1, Local_481[iParam0 /*13*/].f_7, 1056964608);
							}
							iLocal_351 = 1;
							iLocal_667[iParam0] = 0;
						}
						else if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 20f,
															 20f, 20f, 0, 1, 0)) {
							if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iParam0 /*13*/], 9f, 9f,
															9f, 0, 1, 0) ||
								gameplay::get_game_timer() - iLocal_387 >= 12000) {
								if (func_14()) {
									func_12();
								}
								func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
								func_497("SS_AIM_AT_PLAYER, player took too "
										 "long and didn't move away, "
										 "attacking...");
								func_258();
							}
						}
					}
				}
			}
		}
		break;

	case 4:
		if (func_256(Local_481[iParam0 /*13*/], player::player_ped_id(), 1) > 120f &&
			(ped::is_ped_in_any_vehicle(Local_455, 0) || func_485(Local_455))) {
			if (ui::does_blip_exist(Local_481[iParam0 /*13*/].f_11)) {
				ui::remove_blip(&Local_481[iParam0 /*13*/].f_11);
				func_290(Local_481[iParam0 /*13*/], 1);
				iLocal_667[iParam0] = 6;
			}
		}
		else if (!func_305(Local_481[iParam0 /*13*/], 242628503)) {
			ai::open_sequence_task(&iLocal_775);
			ai::task_pause(0, gameplay::get_random_int_in_range(5, 200));
			ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
			ai::close_sequence_task(iLocal_775);
			ai::task_perform_sequence(Local_481[iParam0 /*13*/], iLocal_775);
			ai::clear_sequence_task(&iLocal_775);
			ped::set_ped_combat_attributes(Local_481[iParam0 /*13*/], 25, 1);
			entity::set_entity_load_collision_flag(Local_481[iParam0 /*13*/], 1);
			ped::set_ped_keep_task(Local_481[iParam0 /*13*/], 1);
			ai::set_ped_path_prefer_to_avoid_water(Local_481[iParam0 /*13*/], 1);
		}
		break;

	case 5:
		iLocal_351 = 0;
		if (func_266(Local_481[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0) ||
			ped::has_ped_received_event(Local_481[iParam0 /*13*/], 60)) {
			func_497("SS_STANDDOWN, player threatened Glen OR guard thought "
					 "he'd get run over; attacking...");
			func_258();
		}
		else if (player::is_player_free_aiming_at_entity(player::player_id(), Local_481[iParam0 /*13*/])) {
			if (func_264()) {
				if (func_268(Local_481[iParam0 /*13*/], 1126825984)) {
					if (func_14()) {
						func_12();
					}
					func_287(&uLocal_174, 7, Local_481[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					func_263(&uLocal_174, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 0, 0);
					func_497("SS_STANDDOWN, player aiming Sniper Rifle, guard "
							 "has LOS; attacking...");
					func_258();
				}
			}
		}
		break;

	case 6: break;
	}
}

// Position - 0x2B569
int func_305(int iParam0, int iParam1) {
	if (func_6(iParam0)) {
		if (ai::get_script_task_status(iParam0, iParam1) == 1 || ai::get_script_task_status(iParam0, iParam1) == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2B59C
bool func_306(int iParam0, vector3 vParam1, float fParam4) {
	return system::vdist2(entity::get_entity_coords(iParam0, 1), vParam1) <= fParam4 * fParam4;
}

// Position - 0x2B5B9
void func_307(char *sParam0, var uParam1) {
	sParam0 = sParam0;
	uParam1 = uParam1;
}

// Position - 0x2B5C9
int func_308() {
	if (func_265(player::player_ped_id()) != joaat("weapon_unarmed") &&
		func_265(player::player_ped_id()) != joaat("object")) {
		if (func_265(player::player_ped_id()) != joaat("weapon_golfclub")) {
			return 0;
		}
		if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			return 0;
		}
		else if (ped::is_ped_shooting(player::player_ped_id())) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x2B62D
void func_309() {
	int iVar0;

	if (entity::does_entity_exist(Local_455)) {
		if (iLocal_169 < 3 || func_256(player::player_ped_id(), Local_455, 1) > 100f) {
			iVar0 = 0;
			while (iVar0 <= 2) {
				if (func_6(Local_481[iVar0 /*13*/])) {
					entity::set_entity_load_collision_flag(Local_481[iVar0 /*13*/], 1);
					if (iVar0 == 1) {
						if (entity::does_entity_exist(Local_455)) {
							ai::task_turn_ped_to_face_entity(Local_481[iVar0 /*13*/], Local_455, 0);
							ai::task_go_to_entity(Local_481[iVar0 /*13*/], Local_455, 20000, 6f, 2f, 1073741824, 0);
						}
					}
					else {
						ai::task_look_at_entity(Local_481[iVar0 /*13*/], player::player_ped_id(), -1, 0, 2);
					}
					weapon::set_current_ped_weapon(Local_481[iVar0 /*13*/], joaat("weapon_pistol"), 1);
					ped::set_ped_using_action_mode(Local_481[iVar0 /*13*/], 1, -1, "DEFAULT_ACTION");
					func_481("Alerted, security guard: ", iVar0);
				}
				iLocal_667[iVar0] = 3;
				iVar0++;
			}
			if (func_485(Local_455)) {
				if (!func_305(Local_455, 474215631)) {
					ai::clear_ped_tasks(Local_455);
					ai::task_cower(Local_455, -1);
				}
			}
			if (func_485(Local_468)) {
				ai::clear_ped_tasks(Local_468);
				if (entity::is_entity_attached(Local_825)) {
					entity::detach_entity(Local_825, 1, 1);
				}
				ai::task_smart_flee_ped(Local_468, player::player_ped_id(), 300f, -1, 1, 0);
				func_310(&Local_468, 1, 0, 1);
				iLocal_355 = 1;
			}
			iLocal_351 = 1;
			func_259(790, 0);
		}
		else {
			func_497("Alert called, but guards need to attack instead");
			func_258();
		}
	}
}

// Position - 0x2B79B
void func_310(int iParam0, int iParam1, int iParam2, int iParam3) {
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

// Position - 0x2B7EA
float func_311(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0x2B824
bool func_312() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2) {
		if (!func_485(Local_481[iVar0 /*13*/]) || func_313(player::player_ped_id(), Local_481[iVar0 /*13*/], 1) ||
			ped::is_ped_ragdoll(Local_481[iVar0 /*13*/])) {
			func_497("HAS_PLAYER_MUCKED_ABOUT(): Player bumped celeb security "
					 "with vehicle OR celeb security dead");
			return true;
		}
		iVar0++;
	}
	if (!func_485(Local_455) || func_313(player::player_ped_id(), Local_455, 1) || ped::is_ped_ragdoll(Local_455)) {
		func_497("HAS_PLAYER_MUCKED_ABOUT(): Celeb ragdoll OR player bumped "
				 "celeb with vehicle OR celeb isn't alive");
		return true;
	}
	if (!func_485(Local_468) || func_313(player::player_ped_id(), Local_468, 1) || ped::is_ped_ragdoll(Local_468)) {
		func_497("HAS_PLAYER_MUCKED_ABOUT(): Celeb friend ragdoll OR player "
				 "bumped friend with vehicle OR friend isn't alive");
		return true;
	}
	if (func_5(Local_749) && func_485(player::player_ped_id())) {
		if (ped::is_ped_in_vehicle(player::player_ped_id(), Local_749, 0)) {
			func_497("HAS_PLAYER_MUCKED_ABOUT(): Player in celeb's golf cart");
			return true;
		}
	}
	else {
		func_497("HAS_PLAYER_MUCKED_ABOUT(): Celeb golf cart not OK, player "
				 "destroyed it?");
		return true;
	}
	if (func_5(Local_694[4 /*6*/]) && func_485(player::player_ped_id())) {
		if (ped::is_ped_in_vehicle(player::player_ped_id(), Local_694[4 /*6*/], 0)) {
			func_497("HAS_PLAYER_MUCKED_ABOUT(): Player in golf cart behind celeb");
			return true;
		}
	}
	else {
		func_497("HAS_PLAYER_MUCKED_ABOUT(): Golf cart behind celeb not OK, "
				 "player destroyed it?");
		return true;
	}
	if (func_5(Local_694[5 /*6*/]) && func_485(player::player_ped_id())) {
		if (ped::is_ped_in_vehicle(player::player_ped_id(), Local_694[5 /*6*/], 0)) {
			func_497("HAS_PLAYER_MUCKED_ABOUT(): Player in golf cart next to celeb");
			return true;
		}
	}
	else {
		func_497("HAS_PLAYER_MUCKED_ABOUT(): Golf cart next to celeb not OK, "
				 "player destroyed it?");
		return true;
	}
	return false;
}

// Position - 0x2B9C5
int func_313(int iParam0, int iParam1, int iParam2) {
	if (func_6(iParam0) && ped::is_ped_in_any_vehicle(iParam0, 0)) {
		if (func_6(iParam1)) {
			if (entity::is_entity_touching_entity(iParam1, iParam0)) {
				if (iParam2) {
					if (ped::is_ped_ragdoll(iParam1)) {
						return 1;
					}
				}
				else {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x2BA10
void func_314() {
	int iVar0;

	switch (iLocal_171) {
	case 0:
		if (iLocal_361 == 0) {
			func_33("N1D_LOSESEC", 7500, 5);
			iLocal_361 = 1;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (ui::does_blip_exist(Local_481[iVar0 /*13*/].f_11)) {
				ui::set_blip_scale(Local_481[iVar0 /*13*/].f_11, 0.7f);
			}
			iVar0++;
		}
		func_497("ENTERING LOSE THE SECURITY ");
		iLocal_171 = 1;
		break;

	case 1:
		if (!func_294() && !func_315()) {
			func_302();
		}
		else {
			iLocal_171 = 2;
		}
		func_248();
		func_295();
		func_292();
		break;

	case 2:
		iVar0 = 0;
		while (iVar0 <= 2) {
			func_290(Local_481[iVar0 /*13*/], 0);
			func_289(&Local_481[iVar0 /*13*/].f_11);
			iVar0++;
		}
		func_292();
		ui::clear_prints();
		iLocal_359 = 0;
		if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
			iLocal_361 = 0;
			func_35(10);
		}
		else {
			func_35(7);
		}
		break;
	}
}

// Position - 0x2BB0F
int func_315() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2) {
		if (func_485(Local_481[iVar0 /*13*/])) {
			if (entity::is_entity_at_entity(player::player_ped_id(), Local_481[iVar0 /*13*/], 70f, 70f, 70f, 0, 1, 0)) {
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x2BB60
void func_316() {
	switch (iLocal_171) {
	case 0:
		if (func_14()) {
			func_15();
		}
		iLocal_358 = 0;
		func_323();
		if (func_485(Local_782.f_1)) {
			if (iLocal_361 == 0) {
				if (!func_14() || gameplay::get_profile_setting(203) == 0) {
					func_33("N1D_COLLECT", 7500, 5);
					iLocal_361 = 1;
				}
			}
		}
		unk1::_0x293220DA1B46CEBC(4f, 10f, 1);
		func_321(&iLocal_36, 0, 0);
		func_497("ENTERING COLLECT GOLF CLUB ");
		iLocal_171 = 1;
		break;

	case 1:
		func_248();
		func_302();
		func_320();
		func_295();
		func_292();
		if (iLocal_367 == 0) {
			if (func_319(player::player_ped_id())) {
				func_318();
			}
		}
		player::_0x4669B3ED80F24B4E(player::player_id());
		if (func_485(Local_782.f_1)) {
			if (iLocal_361 == 0) {
				if (!func_14() || gameplay::get_profile_setting(203) == 0) {
					func_33("N1D_COLLECT", 7500, 5);
					iLocal_361 = 1;
				}
			}
		}
		if (!func_5(Local_749)) {
			if (func_485(iLocal_777)) {
				if (entity::is_entity_attached(iLocal_777)) {
					entity::detach_entity(iLocal_777, 1, 1);
				}
			}
		}
		if (func_485(Local_782.f_1)) {
			if (entity::is_entity_at_entity(player::player_ped_id(), Local_782.f_1, 0.8f, 0.8f, 2f, 0, 1, 1)) {
				if (entity::is_entity_attached_to_any_object(Local_782.f_1)) {
					func_497("Golf club attached to bag - correct?");
					audio::play_sound_from_entity(iLocal_389, "COLLECT_IN_BAG", Local_782.f_1, "NIGEL_1D_SOUNDSET", 0,
												  0);
				}
				else {
					func_497("Golf club NOT attached to bag - correct?");
					audio::play_sound_from_entity(iLocal_389, "COLLECT_OUT_BAG", Local_782.f_1, "NIGEL_1D_SOUNDSET", 0,
												  0);
				}
				controls::set_pad_shake(0, 300, 128);
				iLocal_362 = 1;
				func_317(0, -1);
				iLocal_171 = 2;
			}
		}
		else {
			iLocal_171 = 2;
		}
		break;

	case 2:
		if (iLocal_362 == 1) {
			ui::clear_prints();
			iLocal_359 = 0;
			if (entity::does_entity_exist(Local_782.f_1)) {
				object::delete_object(&Local_782.f_1);
			}
			func_289(&iLocal_339);
			if (!func_294() && !func_315()) {
				iLocal_361 = 0;
				func_35(9);
			}
			else if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
				iLocal_361 = 0;
				func_35(10);
			}
			else {
				func_35(7);
			}
		}
		else {
			ui::clear_prints();
			iLocal_359 = 0;
			if (entity::does_entity_exist(Local_782.f_1)) {
				object::delete_object(&Local_782.f_1);
			}
			func_289(&iLocal_339);
			func_34(4);
		}
		break;
	}
}

// Position - 0x2BDB4
void func_317(int iParam0, int iParam1) {
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
			if (Global_56047[Global_67918[iVar0 /*9*/] /*13*/] == 4) {
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

// Position - 0x2BE4E
void func_318() {
	if (iLocal_367 == 0) {
		if (player::get_player_wanted_level(player::player_id()) > 0) {
			audio::play_police_report("SCRIPTED_SCANNER_REPORT_NIGEL_1D_01", 0f);
			func_497("*** Played special Nigel 1D police report ***");
			iLocal_367 = 1;
		}
	}
}

// Position - 0x2BE81
bool func_319(int iParam0) {
	if (func_255(&uLocal_831, entity::get_entity_coords(iParam0, 1))) {
		return true;
	}
	return false;
}

// Position - 0x2BE9F
void func_320() {
	if (iLocal_364 == 0) {
		if (func_485(Local_782.f_1) && iLocal_169 == 6) {
			if (entity::is_entity_at_entity(player::player_ped_id(), Local_782.f_1, 25f, 25f, 25f, 0, 1, 0)) {
				iLocal_364 = 1;
			}
		}
	}
	if (func_485(player::player_ped_id())) {
		if (iLocal_358 == 0) {
			if (iLocal_170 == 7 || iLocal_169 == 6) {
				if (func_485(Local_782.f_1)) {
					if (iLocal_364 == 1) {
						if (!entity::is_entity_at_entity(player::player_ped_id(), Local_782.f_1, 65f, 65f, 65f, 0, 1,
														 0)) {
							func_33("N1D_RETPICKUP", 7500, 5);
							iLocal_358 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_170 == 7 || iLocal_169 == 6) {
			if (func_485(Local_782.f_1)) {
				if (!entity::is_entity_at_entity(player::player_ped_id(), Local_782.f_1, 140f, 140f, 140f, 0, 1, 0)) {
					func_34(3);
				}
			}
		}
		if (iLocal_169 < 6) {
			if (func_485(Local_455)) {
				if (!entity::is_entity_at_entity(player::player_ped_id(), Local_455, 140f, 140f, 140f, 0, 1, 0) &&
					!func_269(player::player_ped_id(), Local_455, 1126825984, 1, 250, 7)) {
					func_34(1);
				}
			}
		}
	}
}

// Position - 0x2BFEB
void func_321(int *iParam0, int iParam1, int iParam2) {
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
		if (func_322(iParam0->f_3)) {
			ui::clear_help(1);
		}
	}
	if (!gameplay::is_string_null(sVar0)) {
		if (func_322(sVar0)) {
			ui::clear_help(1);
		}
	}
}

// Position - 0x2C0D1
bool func_322(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x2C0E4
void func_323() {
	if (iLocal_344 == 1) {
		if (func_485(iLocal_777)) {
			if (entity::is_entity_attached(iLocal_777)) {
				entity::detach_entity(iLocal_777, 1, 1);
			}
		}
		func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
		func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
		func_263(&uLocal_174, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_11", 7, 0, 0);
	}
	if (entity::does_entity_exist(Local_455) && func_485(Local_782.f_1)) {
		if (entity::is_entity_attached_to_entity(Local_782.f_1, Local_455)) {
			entity::detach_entity(Local_782.f_1, 1, 1);
		}
	}
	func_289(&iLocal_339);
	if (entity::does_entity_exist(Local_782.f_1)) {
		iLocal_339 = ui::add_blip_for_entity(Local_782.f_1);
		ui::set_blip_colour(iLocal_339, 2);
	}
}

// Position - 0x2C1A1
void func_324() {
	switch (iLocal_171) {
	case 0:
		iLocal_170 = 6;
		func_290(Local_455, 0);
		if (func_5(Local_749)) {
			if (entity::get_entity_health(Local_749) > 600) {
				entity::set_entity_health(Local_749, 600);
			}
		}
		if (func_485(iLocal_777)) {
			if (!entity::is_entity_attached(iLocal_777)) {
				func_497("Reattaching bag to buggy!?");
				entity::attach_entity_to_entity(iLocal_777, Local_749, 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, 0, 0, 0, 0, 2,
												1);
			}
		}
		if (func_485(Local_782.f_1) && func_485(Local_455)) {
			if (!entity::is_entity_attached(Local_782.f_1)) {
				func_497("Reattaching club to bag!?");
				entity::attach_entity_to_entity(Local_782.f_1, iLocal_777, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, 0, 0, 0,
												0, 2, 1);
			}
			else if (entity::is_entity_attached_to_entity(Local_782.f_1, Local_455)) {
				func_497("Glen still holding club, reattach to bag");
				entity::detach_entity(Local_782.f_1, 1, 1);
				entity::attach_entity_to_entity(Local_782.f_1, iLocal_777, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, 0, 0, 0,
												0, 2, 1);
			}
		}
		gameplay::_set_unk_map_flag(2);
		func_497("ENTERING CHASE IN CITY ");
		func_289(&iLocal_339);
		iLocal_339 = func_351(Local_749, 0, 5);
		iLocal_171 = 1;
		break;

	case 1:
		func_248();
		func_320();
		func_350(iLocal_339, Local_749, 140f, 1061158912, 0);
		func_292();
		if (bLocal_369) {
			if (func_485(Local_782.f_1) && func_485(iLocal_777)) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					if (entity::is_entity_attached_to_entity(Local_782.f_1, iLocal_777)) {
						if (entity::is_entity_at_entity(player::player_ped_id(), Local_782.f_1, 0.8f, 0.8f, 2f, 0, 1,
														1)) {
							audio::play_sound_from_entity(iLocal_389, "COLLECT_IN_BAG", Local_782.f_1,
														  "NIGEL_1D_SOUNDSET", 0, 0);
							controls::set_pad_shake(0, 300, 128);
							iLocal_362 = 1;
							iLocal_171 = 2;
						}
					}
				}
			}
		}
		if (func_325()) {
			iLocal_171 = 2;
		}
		break;

	case 2:
		if (iLocal_362) {
			ui::clear_prints();
			iLocal_359 = 0;
			if (entity::does_entity_exist(Local_782.f_1)) {
				object::delete_object(&Local_782.f_1);
			}
			func_289(&iLocal_339);
			if (!func_294() && !func_315()) {
				iLocal_361 = 0;
				func_35(9);
			}
			else if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
				iLocal_361 = 0;
				func_35(10);
			}
			else {
				func_35(7);
			}
		}
		else {
			ui::clear_prints();
			iLocal_361 = 0;
			func_35(6);
		}
		break;
	}
}

// Position - 0x2C425
bool func_325() {
	if (func_5(Local_749)) {
		if (func_485(Local_455)) {
			func_327(&iLocal_36, Local_749, 0, 0, 1, 1, 1);
			if (ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
				func_326();
			}
			if (func_249() || vehicle::is_vehicle_tyre_burst(Local_749, 0, 0) ||
				vehicle::is_vehicle_tyre_burst(Local_749, 1, 0)) {
				func_497("Buggy stuck or front tyres burst in city - returning "
						 "true");
				if (ai::is_waypoint_playback_going_on_for_vehicle(Local_749)) {
					ai::remove_waypoint_recording("NIGEL1DGOLF");
					ai::remove_waypoint_recording("NIGEL1DGOLF2");
				}
				ai::clear_ped_tasks(Local_455);
				func_290(Local_455, 1);
				return true;
			}
			if (entity::get_entity_health(Local_749) < 500) {
				func_497("Buggy health below threshold - returning true");
				iLocal_344 = 1;
				return true;
			}
			if (!ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
				func_497("Celeb not in buggy while monitoring chase - "
						 "returning true");
				return true;
			}
		}
		else {
			func_497("Celeb dead - returning true");
			return true;
		}
	}
	else {
		func_497("Buggy somehow not ok - returning true");
		return true;
	}
	return false;
}

// Position - 0x2C517
void func_326() {
	if (func_485(Local_455)) {
		if (!entity::is_entity_at_entity(player::player_ped_id(), Local_455, 20f, 20f, 20f, 0, 1, 0)) {
			ai::set_drive_task_max_cruise_speed(Local_455, 0.3f);
		}
		else {
			ai::set_drive_task_max_cruise_speed(Local_455, 0f);
		}
	}
}

// Position - 0x2C561
void func_327(int *iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_328(iParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x2C57E
void func_328(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			  bool bParam9) {
	func_329(iParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

// Position - 0x2C59C
void func_329(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			  bool bParam9) {
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		func_321(iParam0, 0, 0);
	}
	iParam0->f_6 = 2;
	func_330(iParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

// Position - 0x2C5D4
void func_330(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
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
	if (func_322(iVar0)) {
		func_349();
	}
	if (func_348(iParam1) && entity::is_entity_visible(iParam1)) {
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
			if (func_343(iParam0, bParam7, bParam9, 0)) {
				func_339(iParam0, iParam1, vParam2, iParam6);
			}
			if (*iParam0) {
				*iParam0 = 0;
			}
			else if (iParam0->f_6 == 2) {
				if (func_335(iVar0)) {
					if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0) &&
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (iVar1 && !ui::is_help_message_being_displayed() && uParam8) {
							if (!func_322(iVar0)) {
								func_334(iVar0, -1);
								iParam0->f_3 = iVar0;
								if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
									func_333(1);
								}
							}
						}
					}
				}
			}
			else if (func_335(iVar0)) {
				if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0)) {
					if (entity::is_entity_on_screen(iParam1) && iVar1 && !ui::is_help_message_being_displayed() &&
						uParam8) {
						if (!func_322(iVar0)) {
							func_334(iVar0, -1);
							iParam0->f_3 = iVar0;
							if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
								func_333(1);
							}
						}
					}
				}
			}
		}
		else {
			if (!gameplay::is_string_null(sParam5)) {
				if (func_322(sParam5)) {
					ui::clear_help(1);
				}
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (ped::is_ped_in_any_boat(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
						func_321(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
						func_321(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
						func_321(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
						func_321(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
						func_321(iParam0, iVar0, 1);
					}
				}
				else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
					func_321(iParam0, iVar0, 1);
				}
			}
			if (!func_343(iParam0, bParam7, bParam9, 0)) {
				if (!*iParam0 && !iParam0->f_1 && !func_332(iParam0)) {
					func_331(iParam0);
				}
			}
		}
	}
	else {
		func_321(iParam0, iVar0, 0);
	}
}

// Position - 0x2C945
void func_331(int *iParam0) {
	if (func_348(player::player_ped_id())) {
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

// Position - 0x2C9B3
bool func_332(var *uParam0) {
	int iVar0;

	if (uParam0->f_2 > 0) {
		iVar0 = uParam0->f_10 / 2;
		if (uParam0->f_2 + iVar0 > gameplay::get_game_timer()) {
			return true;
		}
	}
	return false;
}

// Position - 0x2C9DE
int func_333(int iParam0) {
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

// Position - 0x2CA88
void func_334(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x2CA9F
bool func_335(char *sParam0) {
	if (!func_336(1, 1, 0)) {
		if (!gameplay::is_string_null_or_empty(sParam0) && func_322(sParam0) || func_322("CMN_HINT")) {
			ui::clear_help(1);
		}
		return false;
	}
	switch (Global_35781) {
	case 0:
	case 3:
		if (func_333(0) < 3) {
			return true;
		}
		break;

	case 4:
		if (func_333(0) < 1) {
			return true;
		}
		break;

	case 5:
	case 15:
		if (func_333(0) < 1) {
			return true;
		}
		break;

	default: break;
	}
	return false;
}

// Position - 0x2CB39
int func_336(int iParam0, int iParam1, int iParam2) {
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
	if (func_338(0)) {
		return 0;
	}
	if (func_337()) {
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

// Position - 0x2CCB5
bool func_337() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x2CCCA
bool func_338(int iParam0) {
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

// Position - 0x2CD24
void func_339(int *iParam0, int iParam1, vector3 vParam2, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (entity::is_entity_dead(iParam1, 0)) {
		func_321(iParam0, 0, 0);
	}
	if (func_342(vParam2, 0f, 0f, 0f, 0)) {
		if (entity::is_entity_a_ped(iParam1)) {
			iVar0 = entity::get_ped_index_from_entity_index(iParam1);
			if (!ped::is_ped_in_any_vehicle(iVar0, 0)) {
				if (ped::is_ped_a_player(iVar0)) {
					if (!func_340()) {
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

// Position - 0x2CE2D
int func_340() { return func_341(player::player_id()); }

// Position - 0x2CE3D
int func_341(int iParam0) {
	if (entity::get_entity_model(player::get_player_ped(iParam0)) == joaat("mp_f_freemode_01")) {
		return 1;
	}
	return 0;
}

// Position - 0x2CE5C
bool func_342(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x2CEA3
bool func_343(var *uParam0, bool bParam1, bool bParam2, int iParam3) {
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
				if (func_347(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (func_346(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (func_346(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (func_347(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		if (func_332(uParam0)) {
			uParam0->f_7 = 1;
			uParam0->f_5 = 4;
		}
		break;

	case 1:
		if (gameplay::get_game_timer() - uParam0->f_4 <= 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (!func_347(bParam1, bParam2, iParam3)) {
						uParam0->f_4 = gameplay::get_game_timer();
						uParam0->f_5 = 3;
					}
				}
				else if (!func_346(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (!func_346(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!func_347(bParam1, bParam2, iParam3)) {
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
				if (!func_347(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (!func_346(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (!func_346(bParam1, bParam2, iParam3) || ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
				ai::get_is_task_active(player::player_ped_id(), 2)) {
				uParam0->f_5 = 0;
			}
			else if (!func_347(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - uParam0->f_4 > 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (func_345(bParam1, bParam2, iParam3)) {
						uParam0->f_5 = 0;
					}
				}
				else if (func_344(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) || func_344(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
					ai::get_is_task_active(player::player_ped_id(), 2)) {
					uParam0->f_5 = 0;
				}
				else if (func_345(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
		}
		break;

	case 4:
		if (!func_332(uParam0)) {
			uParam0->f_5 = 0;
		}
		break;
	}
	if (!func_336(bParam1, bParam2, iParam3)) {
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7) {
		func_349();
		return true;
	}
	else {
		return false;
	}
	return false;
}

// Position - 0x2D20F
bool func_344(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_336(bParam0, bParam1, bParam2)) {
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

// Position - 0x2D261
bool func_345(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_336(bParam0, bParam1, bParam2)) {
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

// Position - 0x2D2AA
bool func_346(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_336(bParam0, bParam1, bParam2)) {
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

// Position - 0x2D309
bool func_347(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_336(bParam0, bParam1, bParam2)) {
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

// Position - 0x2D35F
bool func_348(int iParam0) {
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

// Position - 0x2D3BA
void func_349() { gameplay::set_bit(&Global_2314, 4); }

// Position - 0x2D3CA
void func_350(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) {
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

// Position - 0x2D523
int func_351(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	if (func_485(iParam0)) {
		iVar0 = ui::add_blip_for_entity(iParam0);
		ui::set_blip_as_friendly(iVar0, iParam1);
		ui::set_blip_priority(iVar0, iParam2);
		ui::set_blip_scale(iVar0, 1f);
	}
	return iVar0;
}

// Position - 0x2D558
void func_352() {
	switch (iLocal_171) {
	case 0:
		func_497("CHASE THE GOLFER ");
		iLocal_384 = gameplay::get_game_timer();
		iLocal_385 = gameplay::get_game_timer();
		iLocal_386 = gameplay::get_game_timer();
		ui::set_blip_scale(iLocal_339, 1f);
		func_366(&Local_694[3 /*6*/]);
		if (func_485(iLocal_777) && func_5(Local_749)) {
			if (!entity::is_entity_attached(iLocal_777)) {
				func_497("Reattaching bag to buggy!?");
				entity::attach_entity_to_entity(iLocal_777, Local_749, 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, 0, 0, 0, 0, 2,
												1);
			}
		}
		if (func_485(Local_782.f_1) && func_485(Local_455) && func_5(Local_749)) {
			if (!entity::is_entity_attached(Local_782.f_1)) {
				func_497("Reattaching club to bag!?");
				entity::attach_entity_to_entity(Local_782.f_1, iLocal_777, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, 0, 0, 0,
												0, 2, 1);
			}
			else if (entity::is_entity_attached_to_entity(Local_782.f_1, Local_455)) {
				func_497("Glen still holding club, reattach to bag");
				entity::detach_entity(Local_782.f_1, 1, 1);
				entity::attach_entity_to_entity(Local_782.f_1, iLocal_777, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, 0, 0, 0,
												0, 2, 1);
			}
		}
		iLocal_378 = 0;
		func_365();
		gameplay::_set_unk_map_flag(2);
		iLocal_171 = 1;
		break;

	case 1:
		func_364();
		func_248();
		func_302();
		func_320();
		func_356();
		func_295();
		func_292();
		func_318();
		player::_0x4669B3ED80F24B4E(player::player_id());
		func_350(iLocal_339, Local_455, 140f, 1061158912, 0);
		if (!func_485(Local_782.f_1)) {
			ui::clear_prints();
			if (func_14()) {
				func_15();
			}
			iLocal_359 = 0;
			func_289(&iLocal_339);
			func_34(4);
		}
		if (func_353() || !func_485(Local_455)) {
			func_33("N1D_COLLECT", 7500, 5);
			func_35(6);
		}
		else {
			if (bLocal_369) {
				if (func_485(Local_782.f_1) && func_485(iLocal_777)) {
					if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (entity::is_entity_attached_to_entity(Local_782.f_1, iLocal_777)) {
							if (entity::is_entity_at_entity(player::player_ped_id(), Local_782.f_1, 0.8f, 0.8f, 2f, 0,
															1, 1)) {
								audio::play_sound_from_entity(iLocal_389, "COLLECT_IN_BAG", Local_782.f_1,
															  "NIGEL_1D_SOUNDSET", 0, 0);
								controls::set_pad_shake(0, 300, 128);
								iLocal_362 = 1;
								iLocal_171 = 2;
							}
						}
					}
				}
			}
			if (ai::get_vehicle_waypoint_target_point(Local_749) >= 200) {
				iLocal_171 = 2;
			}
		}
		break;

	case 2:
		ui::clear_prints();
		if (iLocal_362) {
			iLocal_359 = 0;
			if (entity::does_entity_exist(Local_782.f_1)) {
				object::delete_object(&Local_782.f_1);
			}
			func_289(&iLocal_339);
			if (!func_294() && !func_315()) {
				iLocal_361 = 0;
				func_35(9);
			}
			else if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
				iLocal_361 = 0;
				func_35(10);
			}
			else {
				func_35(7);
			}
		}
		else {
			func_35(5);
		}
		break;
	}
}

// Position - 0x2D852
int func_353() {
	if (func_5(Local_749)) {
		if (func_485(Local_455)) {
			func_327(&iLocal_36, Local_749, 0, 0, 1, 1, 1);
			if (func_249() || vehicle::is_vehicle_tyre_burst(Local_749, 0, 0) ||
				vehicle::is_vehicle_tyre_burst(Local_749, 1, 0)) {
				if (func_5(Local_749)) {
					if (ai::is_waypoint_playback_going_on_for_vehicle(Local_749)) {
						ai::remove_waypoint_recording("NIGEL1DGOLF");
						ai::remove_waypoint_recording("NIGEL1DGOLF2");
					}
				}
				ai::clear_ped_tasks(Local_455);
				func_290(Local_455, 1);
				func_497("*** Celeb cart stuck or a front wheel is burst - "
						 "chase monitor returning True");
				return 1;
			}
			else {
				func_355();
			}
			if (entity::get_entity_health(Local_749) < 600) {
				iLocal_344 = 1;
				func_497("*** Celeb cart below drop club threshold - chase "
						 "monitor returning True");
				return 1;
			}
			if (!ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
				func_497("*** Celeb no longer in vehicle - chase monitor "
						 "returning True");
				return 1;
			}
			if (entity::has_entity_been_damaged_by_entity(Local_749, player::player_ped_id(), 1) &&
				!weapon::has_entity_been_damaged_by_weapon(Local_749, 0, 2)) {
				func_354();
				func_481("VEHICLE HEALTH IS ", entity::get_entity_health(Local_749));
				entity::clear_entity_last_damage_entity(Local_749);
			}
			else if (entity::has_entity_been_damaged_by_entity(Local_749, player::player_ped_id(), 1)) {
				func_481("VEHICLE HEALTH IS ", entity::get_entity_health(Local_749));
				entity::clear_entity_last_damage_entity(Local_749);
			}
		}
		else {
			func_497("Celeb dead - returning true");
			return 1;
		}
	}
	else {
		func_497("*** Celeb cart wrecked/not OK - chase monitor returning True");
		func_290(Local_455, 1);
		return 1;
	}
	return 0;
}

// Position - 0x2D9AD
void func_354() {
	if (!ui::is_message_being_displayed() || gameplay::get_profile_setting(203) == 0) {
		if (!func_14()) {
			if (gameplay::get_game_timer() - iLocal_384 >= 6000) {
				func_287(&uLocal_174, 6, Local_455, "FOSTENBURG", 0, 1);
				if (func_257(&uLocal_174, "NIG1DAU", "NIG1D_HIT", 7, 0, 0, 0)) {
					iLocal_384 = gameplay::get_game_timer();
					iLocal_385 = gameplay::get_game_timer();
				}
			}
		}
	}
}

// Position - 0x2DA14
void func_355() {
	if (iLocal_169 < 6) {
		if (func_6(Local_455)) {
			if (func_5(Local_749)) {
				if (ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
					if (iLocal_363 == 0) {
						if (!ai::is_waypoint_playback_going_on_for_vehicle(Local_749)) {
							ai::task_vehicle_follow_waypoint_recording(Local_455, Local_749, "NIGEL1DGOLF", 786468, 0,
																	   8, -1, -1f, 0, 1073741824);
						}
					}
					else if (!ai::is_waypoint_playback_going_on_for_vehicle(Local_749)) {
						iLocal_363 = 0;
					}
				}
			}
		}
	}
}

// Position - 0x2DA89
void func_356() {
	int iVar0;

	if (iLocal_347 == 0) {
		if (func_363(0)) {
			iVar0 = 0;
			while (iVar0 <= 5) {
				func_300(&Local_561[iVar0 /*13*/], 0);
				ped::set_blocking_of_non_temporary_events(Local_561[iVar0 /*13*/], 1);
				ped::set_ped_can_be_targetted(Local_561[iVar0 /*13*/], 1);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 5) {
				func_362(&Local_788[iVar0 /*6*/], 0);
				entity::attach_entity_to_entity(Local_788[iVar0 /*6*/], Local_561[iVar0 /*13*/],
												ped::get_ped_bone_index(Local_561[iVar0 /*13*/], 28422), 0.06f, 0.04f,
												0f, -90f, 180f, 0f, 0, 0, 0, 0, 2, 1);
				iVar0++;
			}
			entity::attach_entity_to_entity(Local_788[0 /*6*/], Local_561[0 /*13*/],
											ped::get_ped_bone_index(Local_561[0 /*13*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f,
											0, 0, 0, 0, 2, 1);
			entity::attach_entity_to_entity(Local_788[1 /*6*/], Local_561[1 /*13*/],
											ped::get_ped_bone_index(Local_561[1 /*13*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f,
											0, 0, 0, 0, 2, 1);
			entity::attach_entity_to_entity(Local_788[2 /*6*/], Local_561[2 /*13*/],
											ped::get_ped_bone_index(Local_561[2 /*13*/], 28422), 0f, 0f, 0.05f, 0f,
											-10f, -90f, 0, 0, 0, 0, 2, 1);
			entity::attach_entity_to_entity(Local_788[3 /*6*/], Local_561[3 /*13*/],
											ped::get_ped_bone_index(Local_561[3 /*13*/], 28422), -0.01f, 0f, 0f, 10f,
											0f, -90f, 0, 0, 0, 0, 2, 1);
			iVar0 = 0;
			while (iVar0 <= 1) {
				if (func_6(Local_561[iVar0 /*13*/])) {
					ai::task_play_anim(Local_561[iVar0 /*13*/], "rcmnigel1d", Local_561[iVar0 /*13*/].f_12, 8f, -8f, -1,
									   1, 0, 0, 0, 0);
				}
				iVar0++;
			}
			iVar0 = 2;
			while (iVar0 <= 3) {
				if (func_6(Local_561[iVar0 /*13*/])) {
					ai::task_play_anim(Local_561[iVar0 /*13*/], "mini@golf", Local_561[iVar0 /*13*/].f_12, 8f, -8f, -1,
									   1, 0, 0, 0, 0);
				}
				iVar0++;
			}
			iLocal_347 = 1;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 <= 5) {
			if (func_361(iVar0)) {
				if (iLocal_671[iVar0] != 4) {
					iLocal_671[iVar0] = 4;
					func_481("This Ambient Golfer is now dead: ", iVar0);
					func_359(iVar0);
				}
			}
			if (func_485(Local_561[iVar0 /*13*/])) {
				func_357(iVar0);
			}
			iVar0++;
		}
	}
}

// Position - 0x2DCD6
void func_357(int iParam0) {
	switch (iLocal_671[iParam0]) {
	case 0:
		if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (gameplay::is_bullet_in_area(entity::get_entity_coords(Local_561[iParam0 /*13*/], 1), 50f, 0)) {
				func_261(iParam0);
				if (!func_14() && !ui::is_message_being_displayed()) {
					func_297(Local_561[iParam0 /*13*/], "GENERIC_SHOCKED_HIGH", 34);
				}
				func_497("AS_PLAYGOLF, bullet in area of ambient golfer (no "
						 "vehicle); alerted...");
				func_309();
				iLocal_671[iParam0] = 1;
			}
			else if (entity::is_entity_at_entity(player::player_ped_id(), Local_561[iParam0 /*13*/], 20f, 20f, 20f, 0,
												 1, 0)) {
				if (func_266(Local_561[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0)) {
					if (!func_308()) {
						if (!func_14() && !ui::is_message_being_displayed()) {
							func_297(Local_561[iParam0 /*13*/], "GENERIC_FRIGHTENED_HIGH", 34);
						}
						func_261(iParam0);
						func_497("AS_PLAYGOLF, player threatened ambient "
								 "golfer; attacking...");
						func_309();
						iLocal_671[iParam0] = 1;
					}
					else {
						vLocal_399 = {entity::get_entity_coords(Local_561[iParam0 /*13*/], 1)};
						Local_561[iParam0 /*13*/].f_10 = 1;
						func_358();
						if (!func_14() && !ui::is_message_being_displayed()) {
							func_297(Local_561[iParam0 /*13*/], "GENERIC_FUCK_YOU", 34);
							func_497("Played aggro line from ambient golfer...");
						}
						ped::set_ped_can_be_targetted(Local_561[iParam0 /*13*/], 1);
						ai::task_combat_ped(Local_561[iParam0 /*13*/], player::player_ped_id(), 0, 16);
						if (entity::does_entity_exist(Local_788[iParam0 /*6*/])) {
							if (entity::is_entity_attached(Local_788[iParam0 /*6*/])) {
								entity::detach_entity(Local_788[iParam0 /*6*/], 1, 1);
							}
						}
						iLocal_671[iParam0] = 1;
					}
				}
				else if (func_268(Local_561[iParam0 /*13*/], 1126825984)) {
					if (!func_308()) {
						if (!func_14() && !ui::is_message_being_displayed()) {
							func_297(Local_561[iParam0 /*13*/], "GENERIC_SHOCKED_HIGH", 34);
						}
						func_261(iParam0);
						func_497("AS_PLAYGOLF, player armed and ambient golfer "
								 "has LOS; attacking...");
						func_309();
						iLocal_671[iParam0] = 1;
					}
				}
			}
		}
		else if (entity::get_entity_speed(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)) >= 10f) {
			if (entity::is_entity_at_entity(player::player_ped_id(), Local_561[iParam0 /*13*/], 11f, 11f, 11f, 0, 1,
											0) &&
					ped::has_ped_received_event(Local_561[iParam0 /*13*/], 60) ||
				entity::has_entity_been_damaged_by_any_vehicle(Local_561[iParam0 /*13*/])) {
				if (!func_14() && !ui::is_message_being_displayed()) {
					func_297(Local_561[iParam0 /*13*/], "GENERIC_CURSE_MED", 34);
				}
				func_481("This ambient golfer nearly got run over and is now "
						 "attacking player: ",
						 iParam0);
				ped::set_ped_can_be_targetted(Local_561[iParam0 /*13*/], 1);
				ai::task_combat_ped(Local_561[iParam0 /*13*/], player::player_ped_id(), 0, 16);
				func_358();
				iLocal_671[iParam0] = 1;
			}
		}
		else if (gameplay::is_bullet_in_area(entity::get_entity_coords(Local_561[iParam0 /*13*/], 1), 50f, 1)) {
			func_290(Local_561[iParam0 /*13*/], 1);
			func_359(iParam0);
			if (!func_14() && !ui::is_message_being_displayed()) {
				func_297(Local_561[iParam0 /*13*/], "GENERIC_SHOCKED_HIGH", 34);
			}
			func_497("AS_PLAYGOLF, bullet in area of ambient golfer (in "
					 "vehicle); attacking...");
			func_309();
			iLocal_671[iParam0] = 1;
		}
		else if (entity::has_entity_been_damaged_by_any_vehicle(Local_561[iParam0 /*13*/]) ||
				 entity::has_entity_been_damaged_by_entity(Local_561[iParam0 /*13*/], player::player_ped_id(), 1)) {
			func_497("Player damaged an ambient golfer with their vehicle (or "
					 "another vehicle damaged them?)");
			if (!func_14() && !ui::is_message_being_displayed()) {
				func_297(Local_561[iParam0 /*13*/], "GENERIC_FUCK_YOU", 34);
			}
			func_359(iParam0);
			func_261(iParam0);
			iLocal_671[iParam0] = 3;
		}
		break;

	case 1:
		if (func_266(Local_561[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0) && !func_308()) {
			if (!func_14() && !ui::is_message_being_displayed()) {
				func_287(&uLocal_174, 8, Local_561[iParam0 /*13*/], "NIGEL1DAMBIENTGOLFER1", 0, 1);
				func_297(Local_561[iParam0 /*13*/], "GENERIC_CURSE_MED", 34);
			}
			func_497("AS_ALERTED, player threatened ambient golfer and was "
					 "armed; attacking...");
			func_309();
			func_261(iParam0);
			iLocal_671[iParam0] = 3;
		}
		break;

	case 3:
		if (!func_305(Local_561[iParam0 /*13*/], 1805844857)) {
			func_261(iParam0);
		}
		func_310(&Local_561[iParam0 /*13*/], 1, 0, 1);
		break;

	case 4: break;
	}
}

// Position - 0x2E122
void func_358() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5) {
		if (func_485(Local_561[iVar0 /*13*/])) {
			if (Local_561[iVar0 /*13*/].f_10 == 0) {
				if (entity::is_entity_at_coord(Local_561[iVar0 /*13*/], vLocal_399, 20f, 20f, 20f, 0, 1, 0)) {
					ped::set_ped_can_be_targetted(Local_561[iVar0 /*13*/], 1);
					ai::task_combat_ped(Local_561[iVar0 /*13*/], player::player_ped_id(), 0, 16);
					if (entity::does_entity_exist(Local_788[iVar0 /*6*/])) {
						if (entity::is_entity_attached(Local_788[iVar0 /*6*/])) {
							entity::detach_entity(Local_788[iVar0 /*6*/], 1, 1);
						}
					}
					iLocal_671[iVar0] = 1;
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x2E1CB
void func_359(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(Local_561[iParam0 /*13*/])) {
		iVar0 = 0;
		while (iVar0 <= 5) {
			if (func_485(Local_561[iVar0 /*13*/])) {
				if (func_360(Local_561[iParam0 /*13*/], Local_561[iVar0 /*13*/], 20f)) {
					if (iLocal_671[iVar0] != 3) {
						func_481("Making this Ambient Golfer flee from dead ped: ", iVar0);
						func_261(iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

// Position - 0x2E237
bool func_360(int iParam0, int iParam1, float fParam2) {
	return system::vdist2(entity::get_entity_coords(iParam0, 0), entity::get_entity_coords(iParam1, 1)) <=
		   fParam2 * fParam2;
}

// Position - 0x2E257
bool func_361(int iParam0) {
	if (entity::does_entity_exist(Local_561[iParam0 /*13*/])) {
		if (entity::is_entity_dead(Local_561[iParam0 /*13*/], 0)) {
			if (entity::does_entity_exist(Local_788[iParam0 /*6*/])) {
				if (entity::is_entity_attached(Local_788[iParam0 /*6*/])) {
					entity::detach_entity(Local_788[iParam0 /*6*/], 1, 1);
				}
			}
			return true;
		}
	}
	return false;
}

// Position - 0x2E2AA
void func_362(var *uParam0, int iParam1) {
	if (streaming::has_model_loaded(uParam0->f_5)) {
		*uParam0 = object::create_object(uParam0->f_5, uParam0->f_1, 1, 1, 0);
		if (entity::does_entity_exist(*uParam0)) {
			entity::set_entity_heading(*uParam0, uParam0->f_4);
		}
	}
	if (iParam1 == 1) {
		streaming::set_model_as_no_longer_needed(uParam0->f_5);
	}
}

// Position - 0x2E2F4
bool func_363(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 5) {
		streaming::request_model(Local_561[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5) {
		streaming::request_model(Local_788[iVar0 /*6*/].f_5);
		iVar0++;
	}
	if (iParam0 == 0) {
		iVar0 = 0;
		while (iVar0 <= 5) {
			if (!streaming::has_model_loaded(Local_561[iVar0 /*13*/].f_8)) {
				return false;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 5) {
			if (!streaming::has_model_loaded(Local_788[iVar0 /*6*/].f_5)) {
				return false;
			}
			iVar0++;
		}
	}
	else {
		iVar1 = 0;
		while (iVar1 == 0) {
			system::wait(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 5) {
				if (!streaming::has_model_loaded(Local_561[iVar0 /*13*/].f_8)) {
					iVar1 = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 5) {
				if (!streaming::has_model_loaded(Local_788[iVar0 /*6*/].f_5)) {
					iVar1 = 0;
				}
				iVar0++;
			}
		}
	}
	return true;
}

// Position - 0x2E3F2
void func_364() {
	if (iLocal_355 == 0) {
		if (func_485(Local_468)) {
			if (func_266(Local_468, 1, 1116471296, 1126825984, 0, 0, 0, 0)) {
				if (func_485(Local_468)) {
					entity::set_entity_load_collision_flag(Local_468, 1);
				}
				func_290(Local_468, 1);
				iLocal_355 = 1;
			}
		}
	}
}

// Position - 0x2E442
void func_365() {
	func_289(&iLocal_340);
	iLocal_690 = 6;
}

// Position - 0x2E455
void func_366(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0x2E48D
void func_367() {
	switch (iLocal_171) {
	case 0:
		func_497("ENTERING GET THE CLUB 1 ");
		if (iLocal_361 == 0) {
			func_33("N1D_TAKE", 7500, 5);
			iLocal_361 = 1;
		}
		gameplay::_set_unk_map_flag(1);
		func_289(&iLocal_339);
		iLocal_339 = func_262(Local_455, 1, 0, 5);
		iLocal_171 = 1;
		break;

	case 1:
		func_375();
		func_364();
		func_356();
		func_302();
		func_371();
		func_248();
		func_368();
		func_292();
		func_318();
		player::_0x4669B3ED80F24B4E(player::player_id());
		if (!func_485(Local_782.f_1)) {
			ui::clear_prints();
			if (func_14()) {
				func_15();
			}
			iLocal_359 = 0;
			func_289(&iLocal_339);
			func_34(4);
		}
		if (func_32()) {
			iLocal_171 = 2;
		}
		if (func_485(Local_455)) {
			if (ped::is_ped_fleeing(Local_455)) {
				iLocal_366 = 1;
			}
			if (func_5(Local_749)) {
				if (ped::is_ped_in_vehicle(Local_455, Local_749, 0)) {
					entity::attach_entity_to_entity(Local_782.f_1, iLocal_777, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, 0, 0,
													0, 0, 2, 1);
					iLocal_171 = 2;
				}
			}
			else if (func_485(iLocal_777)) {
				if (entity::is_entity_attached(iLocal_777)) {
					entity::detach_entity(iLocal_777, 1, 1);
				}
			}
		}
		else {
			iLocal_171 = 2;
		}
		if (iLocal_366 == 1) {
			if (func_485(Local_455)) {
				if (ped::is_ped_ragdoll(Local_455)) {
					if (entity::is_entity_attached(Local_782.f_1)) {
						entity::detach_entity(Local_782.f_1, 1, 1);
						iLocal_171 = 2;
					}
				}
			}
		}
		break;

	case 2:
		ui::clear_prints();
		if (func_485(Local_455) && !iLocal_366) {
			func_35(4);
		}
		else {
			iLocal_361 = 0;
			func_35(6);
		}
		break;
	}
}

// Position - 0x2E633
void func_368() {
	switch (iLocal_690) {
	case 0:
		if (func_485(player::player_ped_id())) {
			if (entity::is_entity_at_coord(player::player_ped_id(), -1377.18f, 55.39f, 53.7f, 2f, 2f, 2f, 0, 1, 1)) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) &&
					entity::is_entity_in_angled_area(player::player_ped_id(), -1379.154f, 57.95101f, 52.19011f,
													 -1378.735f, 53.17284f, 54.94018f, 4f, 0, 1, 0)) {
					iLocal_690 = 1;
				}
			}
		}
		break;

	case 1:
		if (!cam::does_cam_exist(iLocal_343)) {
			iLocal_343 = func_370();
		}
		if (!cam::does_cam_exist(iLocal_341)) {
			iLocal_341 = cam::create_camera_with_params(180543640, -1409.452f, 53.5135f, 78.0868f, -26.7543f, 0f,
														-85.6976f, 50f, 0, 2);
			cam::set_cam_spline_duration(iLocal_341, 4500);
			cam::_0x0A9F2A468B328E74(iLocal_341, iLocal_343, 1500, 3);
			cam::add_cam_spline_node(iLocal_341, -1382.719f, 55.216f, 58.0408f, -15.6873f, 0f, -88.6059f, 1500, 3, 2);
			cam::add_cam_spline_node(iLocal_341, -1409.452f, 53.5135f, 78.0868f, -26.7543f, 0f, -85.6976f, 1500, 3, 2);
		}
		player::set_player_control(player::player_id(), 0, 0);
		ui::display_radar(0);
		if (func_485(player::player_ped_id())) {
			ai::task_follow_nav_mesh_to_coord(player::player_ped_id(), -1368.33f, 56.4194f, 52.4637f, 1f, 20000,
											  1048576000, 0, 1193033728);
		}
		iLocal_690 = 2;
		break;

	case 2:
		if (!cam::is_cam_active(iLocal_343)) {
			if (!cam::is_cam_active(iLocal_341)) {
				cam::set_cam_active(iLocal_343, 1);
				cam::render_script_cams(1, 1, 3000, 1, 0, 0);
			}
		}
		else if (!cam::is_cam_active(iLocal_341)) {
			cam::set_cam_active(iLocal_341, 1);
			cam::render_script_cams(1, 1, 3000, 1, 0, 0);
			iLocal_690 = 3;
		}
		break;

	case 3:
		if (entity::is_entity_at_coord(player::player_ped_id(), -1368.33f, 56.4194f, 52.4637f, 2f, 2f, 2f, 0, 1, 1)) {
			system::wait(2000);
			func_67(player::player_ped_id(), 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_369(2);
			iLocal_370 = 1;
			if (func_485(player::player_ped_id())) {
				ai::task_follow_nav_mesh_to_coord(player::player_ped_id(), -1373.09f, 55.61f, 52.71f, 1f, 20000,
												  1048576000, 0, 1193033728);
			}
			system::wait(500);
			iLocal_690 = 4;
		}
		break;

	case 4:
		if (!cam::does_cam_exist(iLocal_342)) {
			iLocal_342 = cam::create_camera_with_params(180543640, -1373.681f, 57.0584f, 54.9717f, -10.6657f, 0f,
														91.5916f, 50f, 0, 2);
			cam::set_cam_spline_duration(iLocal_342, 4500);
			cam::_0x0A9F2A468B328E74(iLocal_342, iLocal_341, 1500, 3);
			cam::add_cam_spline_node(iLocal_342, -1382.719f, 55.216f, 58.0408f, -15.6873f, 0f, -88.6059f, 1500, 3, 2);
			cam::add_cam_spline_node(iLocal_342, -1373.681f, 57.0584f, 54.9717f, -10.6657f, 0f, 91.5916f, 1500, 3, 2);
		}
		if (!cam::is_cam_active(iLocal_342)) {
			cam::render_script_cams(1, 1, 3000, 1, 0, 0);
			cam::set_cam_active(iLocal_342, 1);
			system::wait(3500);
			iLocal_690 = 5;
		}
		if (cam::is_cam_active(iLocal_343)) {
			cam::set_cam_active(iLocal_343, 0);
		}
		if (cam::is_cam_active(iLocal_341)) {
			cam::set_cam_active(iLocal_341, 0);
		}
		break;

	case 5:
		if (cam::does_cam_exist(iLocal_342)) {
			if (cam::is_cam_active(iLocal_342)) {
				cam::render_script_cams(0, 1, 3000, 1, 0, 0);
				cam::set_cam_active(iLocal_342, 0);
				system::wait(2000);
				player::set_player_control(player::player_id(), 1, 0);
				ui::display_radar(1);
				cam::destroy_cam(iLocal_343, 0);
				cam::destroy_cam(iLocal_341, 0);
				cam::destroy_cam(iLocal_342, 0);
			}
		}
		func_289(&iLocal_340);
		break;

	case 6: break;
	}
}

// Position - 0x2E9F9
void func_369(int iParam0) {
	if (!func_185(iParam0)) {
		return;
	}
	Global_101700.f_2095.f_539.f_1560[iParam0] = 1;
}

// Position - 0x2EA20
var func_370() {
	return cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", cam::get_gameplay_cam_coord(),
									   cam::get_gameplay_cam_rot(2), cam::get_gameplay_cam_fov(), 0, 2);
}

// Position - 0x2EA40
void func_371() {
	int iVar0;

	if (iLocal_360 == 0) {
		if (func_9(0)) {
			func_497("Concierge scene loaded, creating now...");
			iVar0 = 0;
			while (iVar0 <= 3) {
				func_300(&Local_402[iVar0 /*13*/], 0);
				ped::set_blocking_of_non_temporary_events(Local_402[iVar0 /*13*/], 1);
				iVar0++;
			}
			func_299(&Local_694[0 /*6*/], 0);
			ped::set_ped_into_vehicle(Local_402[1 /*13*/], Local_694[0 /*6*/], -1);
			ped::set_ped_can_be_dragged_out(Local_402[1 /*13*/], 0);
			iLocal_360 = 1;
			iVar0 = 0;
			while (iVar0 <= 3) {
				streaming::set_model_as_no_longer_needed(Local_402[iVar0 /*13*/].f_8);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 8) {
				streaming::set_model_as_no_longer_needed(Local_694[iVar0 /*6*/].f_5);
				iVar0++;
			}
		}
	}
	else {
		func_372();
	}
}

// Position - 0x2EAFB
void func_372() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3) {
		if (func_485(Local_402[iVar0 /*13*/])) {
			func_373(iVar0);
		}
		iVar0++;
	}
}

// Position - 0x2EB29
void func_373(int iParam0) {
	switch (iLocal_685[iParam0]) {
	case 0:
		if (entity::is_entity_at_entity(player::player_ped_id(), Local_402[iParam0 /*13*/], 6f, 6f, 6f, 0, 1, 1)) {
			if (ai::get_script_task_status(Local_402[iParam0 /*13*/], 150319005) != 1) {
				ai::task_look_at_entity(Local_402[iParam0 /*13*/], player::player_ped_id(), 500, 12, 2);
			}
		}
		if (func_266(Local_402[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0)) {
			if (!ui::is_message_being_displayed() || gameplay::get_profile_setting(203) == 0) {
				if (!func_14()) {
					if (iParam0 == 0) {
						func_287(&uLocal_174, 7, Local_402[iParam0 /*13*/], "CONCIERGE", 0, 1);
						func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
						func_263(&uLocal_174, "NIG1DAU", "NIG1D_FLEE", "NIG1D_FLEE_9", 7, 0, 0);
					}
				}
			}
			func_365();
			func_374();
			iLocal_685[iParam0] = 1;
		}
		else if (gameplay::is_bullet_in_area(entity::get_entity_coords(Local_402[iParam0 /*13*/], 1), 30f, 1)) {
			if (!ui::is_message_being_displayed() || gameplay::get_profile_setting(203) == 0) {
				if (!func_14()) {
					if (iParam0 == 0) {
						func_287(&uLocal_174, 7, Local_402[iParam0 /*13*/], "CONCIERGE", 0, 1);
						func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
						func_263(&uLocal_174, "NIG1DAU", "NIG1D_FLEE", "NIG1D_FLEE_7", 7, 0, 0);
					}
				}
			}
			func_365();
			func_374();
			iLocal_685[iParam0] = 1;
		}
		break;

	case 1: break;
	}
}

// Position - 0x2ECAB
void func_374() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3) {
		func_290(Local_402[iVar0 /*13*/], 1);
		iVar0++;
	}
}

// Position - 0x2ECD1
void func_375() {
	if (func_485(player::player_ped_id())) {
		if (!func_319(player::player_ped_id())) {
			if (!func_376(player::player_ped_id())) {
				func_34(1);
			}
			else {
				ui::set_blip_flashes(iLocal_339, 1);
			}
		}
		else if (!ui::does_blip_exist(iLocal_339)) {
			func_497("Recreated mission blip");
			iLocal_339 = func_262(Local_455, 1, 0, 5);
		}
		else {
			ui::set_blip_flashes(iLocal_339, 0);
		}
	}
}

// Position - 0x2ED3B
int func_376(int iParam0) {
	if (func_255(&uLocal_883, entity::get_entity_coords(iParam0, 0))) {
		return 1;
	}
	return 0;
}

// Position - 0x2ED59
void func_377() {
	switch (iLocal_171) {
	case 0:
		unk1::_0x293220DA1B46CEBC(2f, 8f, 1);
		func_497("ENTERING GO TO CELEBRITY ");
		if (iLocal_361 == 0) {
			func_33("N1D_TAKE", 7500, 5);
			iLocal_361 = 1;
		}
		func_289(&iLocal_339);
		if (func_485(Local_455)) {
			iLocal_339 = func_262(Local_455, 1, 0, 5);
		}
		iLocal_171 = 1;
		gameplay::_set_unk_map_flag(0);
		break;

	case 1:
		player::_0x4669B3ED80F24B4E(player::player_id());
		func_375();
		func_364();
		func_371();
		func_356();
		func_302();
		func_248();
		func_368();
		if (func_485(Local_455) && func_485(player::player_ped_id())) {
			if (func_286(player::player_ped_id(), Local_455, 50f, 1) || iLocal_170 == 3) {
				iLocal_171 = 2;
			}
			else if (func_32()) {
				iLocal_171 = 2;
			}
			else if (iLocal_173 == 0) {
				if (func_286(player::player_ped_id(), Local_455, 150f, 1)) {
					iLocal_171 = 2;
				}
			}
		}
		else {
			iLocal_171 = 2;
		}
		break;

	case 2:
		iLocal_359 = 0;
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			func_378(1, "MS_GET_THE_CLUB", 1, 0, 0, 1);
		}
		else {
			func_378(1, "MS_GET_THE_CLUB", 1, 0, 0, 0);
		}
		if (func_485(Local_455)) {
			func_35(3);
		}
		else {
			entity::detach_entity(Local_782.f_1, 1, 1);
			iLocal_361 = 0;
			func_35(6);
		}
		break;
	}
}

// Position - 0x2EEBA
void func_378(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;

	if (iParam3 == 1) {
		if (!gameplay::are_strings_equal("FinaleC2", script::get_this_script_name())) {
		}
	}
	iVar0 = 0;
	if (iParam3 == 1) {
		if (iParam0 != Global_91528) {
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91528) {
		iVar0 = 1;
	}
	if (iVar0 == 1) {
		func_439(1);
		if (iParam0 <= Global_91528) {
		}
		iVar1 = func_437(script::get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94) {
			Global_101700.f_8044.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_435(iVar1);
			cVar3 = {Global_82612[iVar1 /*34*/].f_8};
			if (iVar1 == 90) {
				switch (Global_101700.f_8044.f_99.f_205[7]) {
				case 1: StringConCat(&cVar3, "A", 8); break;

				case 2: StringConCat(&cVar3, "B", 8); break;
				}
			}
			stats::playstats_mission_checkpoint(&cVar3, iVar2, Global_91528, iParam0);
		}
		else {
			iVar5 = func_232(script::get_this_script_name(), 1);
			if (iVar5 != -1) {
				Global_101700.f_17533[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_187(iVar5)}, 4);
				stats::playstats_mission_checkpoint(&uVar6, 0, Global_91528, iParam0);
			}
			else {
				iVar10 = func_434(&Global_91491.f_3);
				if (iVar10 > -1) {
					Global_101700.f_23945.f_4[iVar10] = 0;
				}
			}
		}
		Global_86002 = iParam2;
		Global_91528 = iParam0;
		func_379(iParam0, sParam1, iParam4, iParam5);
		if (gameplay::are_strings_equal(sParam1, "")) {
		}
	}
	else if (iParam0 < Global_91528) {
	}
}

// Position - 0x2F033
void func_379(int iParam0, var uParam1, int iParam2, int iParam3) {
	func_380(&Global_96040, script::get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

// Position - 0x2F04F
void func_380(var *uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;

	*uParam0 = func_244();
	uParam0->f_1 = func_423();
	gameplay::_get_weather_type_transition(&uParam0->f_6, &uParam0->f_7, &uParam0->f_8);
	if (!ped::is_ped_injured(player::player_ped_id())) {
		func_409(&uParam0->f_2305, 0);
		func_408(player::player_ped_id());
		func_402(player::player_ped_id(), 0);
		weapon::get_current_ped_weapon(player::player_ped_id(), &uParam0->f_2, 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object")) {
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		uParam0->f_17[iVar1] = Global_101700.f_2095.f_539.f_294[iVar1];
		if (iVar1 == func_401()) {
			func_397(player::player_ped_id(), &uParam0->f_616[iVar1 /*65*/], 1);
		}
		else {
			iVar0 = 0;
			while (iVar0 < 12) {
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91281[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91281[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91281[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91281[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91281[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91281[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91281[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91281[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9) {
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91281[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91281[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = {Global_101700.f_2095.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = {
				Global_101700.f_2095.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		switch (iVar1) {
		case 0:
			stats::stat_get_int(joaat("sp0_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp0_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;

		case 1:
			stats::stat_get_int(joaat("sp1_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp1_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;

		case 2:
			stats::stat_get_int(joaat("sp2_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp2_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;
		}
		uParam0->f_9[iVar1] = Global_101700.f_19523.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52996[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = {Global_101700.f_2095.f_539.f_1635[0 /*295*/][iVar1 /*98*/]};
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = {Global_101700.f_2095.f_539.f_1635[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 <= 3) {
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101700.f_2095[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	stats::stat_get_int(joaat("sp0_special_ability"), &uParam0->f_1762[0], -1);
	stats::stat_get_int(joaat("sp1_special_ability"), &uParam0->f_1762[1], -1);
	stats::stat_get_int(joaat("sp2_special_ability"), &uParam0->f_1762[2], -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1) {
		func_382(&uParam0->f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_381(&uParam0->f_2401);
	uParam3 = uParam3;
	uParam2 = uParam2;
}

// Position - 0x2FED7
int func_381(var *uParam0) {
	*uParam0 = Global_87673;
	uParam0->f_1 = Global_87674;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

// Position - 0x2FEF9
void func_382(var *uParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (iParam2 == 0) {
		iParam2 = player::player_ped_id();
	}
	if (entity::does_entity_exist(iParam2)) {
		uParam1->f_5 = func_181(iParam2);
	}
	if (func_394(iParam2, &iVar0, iParam3, iParam5)) {
		func_383(uParam0, uParam1, iVar0, iParam4);
	}
	else if (entity::does_entity_exist(iVar0)) {
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (vehicle::is_vehicle_model(iVar0, joaat("skylift")) &&
				ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
				func_383(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

// Position - 0x2FF81
int func_383(var *uParam0, var *uParam1, int iParam2, int iParam3) {
	if (vehicle::is_vehicle_driveable(iParam2, 0)) {
		func_385(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_384(iParam2)) {
			uParam1->f_3 = 1;
		}
		else {
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

// Position - 0x2FFC1
bool func_384(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6) {
		if (Global_91491.f_22[iVar0] == iParam0) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x2FFEF
void func_385(var *uParam0, int iParam1, int iParam2) {
	func_391(iParam1, &uParam0->f_12);
	uParam0->f_7 = func_388(iParam1, 145, 0);
	uParam0->f_11 = func_387(iParam1);
	if (!uParam0->f_7) {
		if (!uParam0->f_10) {
			uParam0->f_10 = func_386(iParam1);
		}
	}
	if (iParam2 == 1) {
		*uParam0 = {entity::get_entity_coords(iParam1, 1)};
		uParam0->f_6 = entity::get_entity_heading(iParam1);
		uParam0->f_3 = {entity::get_entity_velocity(iParam1)};
		if (entity::is_entity_in_angled_area(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f,
											 6.374244f, 13f, 0, 1, 0)) {
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69436 == iParam1) {
			uParam0->f_9 = 1;
		}
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		uParam0->f_8 = 1;
	}
	else {
		uParam0->f_8 = 0;
	}
}

// Position - 0x300CD
int func_386(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iParam0 == Global_68531.f_484[iVar0]) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x3010F
int func_387(int iParam0) {
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

// Position - 0x30172
int func_388(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				if (iParam1 == 145 || iParam1 == Global_89165[iVar0]) {
					if (iParam2 == 0 || entity::get_entity_model(iParam0) == func_389(iParam1, iParam2)) {
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x30200
int func_389(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_185(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_390(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x30242
void func_390(int iParam0, var *uParam1, int iParam2) {
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

// Position - 0x304A3
void func_391(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_57(uParam1);
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
		func_393(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_392(iVar0 + 1));
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

// Position - 0x30751
int func_392(int iParam0) {
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

// Position - 0x30801
int func_393(int iParam0, var *uParam1, var *uParam2) {
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

// Position - 0x308DB
bool func_394(int iParam0, var *uParam1, int iParam2, int iParam3) {
	char *sVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			if (iParam0 == player::player_ped_id()) {
				*uParam1 = player::get_players_last_vehicle();
			}
			else {
				*uParam1 = ped::get_vehicle_ped_is_in(iParam0, 1);
			}
			if (entity::does_entity_exist(*uParam1)) {
				if (vehicle::is_vehicle_driveable(*uParam1, 0)) {
					if (iParam2 == 0 ||
						gameplay::get_distance_between_coords(entity::get_entity_coords(*uParam1, 1),
															  entity::get_entity_coords(iParam0, 1), 1) < 100f) {
						if (vehicle::is_vehicle_model(*uParam1, joaat("taxi"))) {
							if (vehicle::get_ped_in_vehicle_seat(*uParam1, -1, 0) != iParam0 &&
								vehicle::get_ped_in_vehicle_seat(*uParam1, -1, 0) != 0) {
								return false;
							}
						}
						if (func_395(*uParam1, func_244(), 1)) {
							sVar0 = script::get_this_script_name();
							if (!gameplay::are_strings_equal(sVar0, "save_anywhere")) {
								return false;
							}
							else if (!ped::is_ped_in_any_vehicle(iParam0, 1)) {
								return false;
							}
						}
						if (iParam3 == 1) {
							if (decorator::decor_exist_on(*uParam1, "IgnoredByQuickSave")) {
								if (decorator::decor_get_bool(*uParam1, "IgnoredByQuickSave")) {
									return false;
								}
							}
						}
						else if (vehicle::is_vehicle_model(*uParam1, joaat("blimp"))) {
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x30A0D
bool func_395(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_396(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x30A7E
bool func_396(int iParam0, int iParam1, char *sParam2, int *iParam3) {
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

// Position - 0x30B5E
void func_397(int iParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_181(iParam0);
		iVar1 = 0;
		while (iVar1 < 12) {
			func_400(iParam0, iVar1, &uParam1->f_13[iVar1], &(*uParam1)[iVar1], &uParam1->f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9) {
			func_399(iParam0, iVar1, &uParam1->f_39[iVar1], &uParam1->f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_185(iVar0)) {
			uParam1->f_59 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_64;
		}
		else if (network::network_is_game_in_progress() &&
				 entity::get_entity_model(iParam0) == entity::get_entity_model(player::player_ped_id())) {
			if (func_398(161, -1)) {
				uParam1->f_59 = func_102(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_102(747, Global_69521, 0);
			}
			uParam1->f_60 = func_102(748, Global_69521, 0);
			uParam1->f_61 = func_102(749, Global_69521, 0);
		}
		if (network::network_is_game_in_progress() && iParam0 == player::player_ped_id()) {
			if (func_398(161, -1)) {
				uParam1->f_59 = func_102(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_102(747, Global_69521, 0);
			}
		}
	}
}

// Position - 0x30D08
bool func_398(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_101(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return false;
}

// Position - 0x30D34
void func_399(int iParam0, int iParam1, int *iParam2, int *iParam3, int iParam4, int iParam5) {
	int iVar0;

	iVar0 = func_181(iParam0);
	if (iParam0 != 0) {
		*iParam2 = ped::get_ped_prop_index(iParam0, iParam1);
		*iParam3 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	}
	else {
		iVar0 = iParam5;
	}
	if (iParam4 == 0) {
		return;
	}
	if (iParam1 == 0) {
		if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
			if (iParam0 != 0) {
				if (ped::is_ped_wearing_helmet(iParam0) && ped::_0x451294E859ECC018(iParam0) != -1) {
					*iParam2 = ped::_0x451294E859ECC018(iParam0);
					*iParam3 = ped::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0) {
	case 0:
		if (iParam1 == 0) {
			if (*iParam2 == 7) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 11) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 16) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 23) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 27) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 28) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 14 && *iParam2 <= 20) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		else if (iParam1 == 1) {
			if (*iParam2 == 1) {
				if ((iParam4 & 2) != 0 || (iParam4 & 64) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;

	case 1:
		if (iParam1 == 0) {
			if (*iParam2 == 2) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 4) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 16) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 6) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 17) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 20) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 8 && *iParam2 <= 14) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;

	case 2:
		if (iParam1 == 0) {
			if (*iParam2 == 9) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 11) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 12) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 23) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 27) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 14 && *iParam2 <= 20 || *iParam2 == 2) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;
	}
}

// Position - 0x3127C
void func_400(int iParam0, int iParam1, int *iParam2, int *iParam3, var *uParam4, int iParam5, int iParam6) {
	int iVar0;

	iVar0 = func_181(iParam0);
	if (iParam0 != 0) {
		*iParam2 = ped::get_ped_drawable_variation(iParam0, iParam1);
		*iParam3 = ped::get_ped_texture_variation(iParam0, iParam1);
		*uParam4 = ped::get_ped_palette_variation(iParam0, iParam1);
	}
	else {
		iVar0 = iParam6;
	}
	if (iParam5 == 0) {
		return;
	}
	switch (iVar0) {
	case 0:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 15) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 64) != 0) {
				if (*iParam2 == 3 || *iParam2 == 22) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 5) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
				if (*iParam2 == 8) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;

	case 1:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 1 || *iParam2 == 10) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 64) != 0) {
				if (*iParam2 == 19) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
				if (*iParam2 == 5) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;

	case 2:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 3) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if (*iParam2 >= 5 && *iParam2 <= 7) {
				if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;
	}
}

// Position - 0x314BD
int func_401() {
	func_184();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x314D6
void func_402(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_181(iParam0);
	if (func_185(iVar0) && !ped::is_ped_injured(iParam0)) {
		if (iParam0 == player::player_ped_id()) {
			func_403(iParam0, &Global_101700.f_2095.f_539.f_298[iVar0 /*284*/]);
			iVar2 = 0;
			while (iVar2 <= 8 - 1) {
				Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] = ui::_0xA13E93403F26C812(iVar2);
				if (iParam1) {
					iVar1 = ui::_0xA48931185F0536FE();
					if (Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1) {
						Global_101700.f_2095.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			player::get_player_parachute_pack_tint_index(player::player_id(), &iVar3);
			if (iVar0 == 0) {
				stats::stat_set_int(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1) {
				stats::stat_set_int(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2) {
				stats::stat_set_int(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

// Position - 0x315C9
void func_403(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = 0;
		while (iVar0 <= 44 - 1) {
			(*uParam1)[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 44 - 1) {
			iVar3 = func_407(iVar0);
			if (iVar3 != 0) {
				vVar4.x = weapon::get_ped_weapontype_in_slot(iParam0, func_407(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed")) {
					vVar4.y = weapon::get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute")) {
						vVar4.y = 1;
					}
					gameplay::set_bit(&vVar4.f_2, 20 + weapon::get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1) {
						if (!weapon::get_max_ammo(iParam0, vVar4.x, &vVar4.f_1)) {
							vVar4.y = 0;
						}
					}
					(*uParam1)[iVar0 /*3*/].f_1 = vVar4.y;
					iVar1 = 0;
					iVar2 = func_405(vVar4.x, iVar1);
					while (iVar2 != 0) {
						if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, iVar2)) {
							gameplay::set_bit(&vVar4.f_2, iVar1);
						}
						iVar1++;
						iVar2 = func_405(vVar4.x, iVar1);
					}
				}
				(*uParam1)[iVar0 /*3*/] = {vVar4};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50 - 1) {
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = dlc1::get_num_dlc_weapons();
		iVar7 = 0;
		while (iVar7 < iVar8) {
			if (dlc1::get_dlc_weapon_data(iVar7, &Var9) && !func_404(Var9.f_1) && iVar70 < 50) {
				if (!dlc1::_is_dlc_data_empty(Var9)) {
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = weapon::get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (weapon::has_ped_got_weapon(iParam0, vVar4.x, 0)) {
						gameplay::set_bit(&vVar4.f_2, 20 + weapon::get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else {
						gameplay::set_bit(&vVar4.f_2, 20);
					}
					if (vVar4.y == -1) {
						if (!weapon::get_max_ammo(iParam0, vVar4.x, &vVar4.f_1)) {
							vVar4.y = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = vVar4.y;
					iVar1 = 0;
					while (iVar1 < dlc1::get_num_dlc_weapon_components(iVar7)) {
						if (dlc1::get_dlc_weapon_component_data(iVar7, iVar1, &Var48)) {
							if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, Var48.f_3)) {
								gameplay::set_bit(&vVar4.f_2, iVar1);
							}
						}
						iVar1++;
					}
				}
				if (vVar4.x != 0) {
					if (!weapon::has_ped_got_weapon(iParam0, vVar4.x, 0)) {
						vVar4.x = 0;
						vVar4.y = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = {vVar4};
				iVar70++;
			}
			iVar7++;
		}
	}
}

// Position - 0x3182D
int func_404(int iParam0) {
	if (network::network_is_game_in_progress()) {
	}
	else {
		switch (iParam0) {
		case joaat("weapon_pistol50"):
		case joaat("weapon_bullpupshotgun"):
		case joaat("weapon_assaultsmg"): return 0;

		case joaat("weapon_bottle"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_gusenberg"): return 0;

		case joaat("weapon_heavypistol"):
		case joaat("weapon_specialcarbine"): return 0;

		case joaat("weapon_bullpuprifle"): return 0;

		case joaat("weapon_dagger"):
		case joaat("weapon_vintagepistol"): return 0;

		case joaat("weapon_firework"):
		case joaat("weapon_musket"): return 0;

		case joaat("weapon_heavyshotgun"):
		case joaat("weapon_marksmanrifle"): return 0;

		case joaat("weapon_hominglauncher"):
		case joaat("weapon_proxmine"): return 0;

		case joaat("weapon_combatpdw"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"): return 0;

		case -947031628:
		case -572349828:
		case 392730790:
		case -1523701417:
		case -2112826155:
		case -664359727:
		case -1887867191:
		case -837150131:
		case -344484024:
		case joaat("weapon_flaregun"):
		case joaat("weapon_handcuffs"):
		case joaat("weapon_snowball"):
		case joaat("weapon_garbagebag"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_revolver"):
		case joaat("weapon_dbshotgun"):
		case joaat("weapon_compactrifle"):
		case 317205821:
		case -1121678507:
		case 125959754:
		case -853065399:
		case -1169823560:
		case -1810795771:
		case 419712736: return 1;
		}
	}
	return 0;
}

// Position - 0x3199B
int func_405(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var *uVar2;
	struct<4> Var41;

	iVar0 = 0;
	switch (iParam0) {
	case joaat("weapon_pistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpistol_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_combatpistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_appistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_appistol_clip_01"); break;

		case 1: iVar0 = joaat("component_appistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_appistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_microsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_microsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_microsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_microsmg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_smg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_smg_clip_01"); break;

		case 1: iVar0 = joaat("component_smg_clip_02"); break;

		case 2: iVar0 = joaat("component_smg_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_pi_supp"); break;

		case 5: iVar0 = joaat("component_at_scope_macro_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_smg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_assaultrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_assaultrifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_at_ar_flsh"); break;

		case 5: iVar0 = joaat("component_at_scope_macro"); break;

		case 6: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 7: iVar0 = joaat("component_assaultrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_carbinerifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_carbinerifle_clip_01"); break;

		case 1: iVar0 = joaat("component_carbinerifle_clip_02"); break;

		case 2: iVar0 = joaat("component_carbinerifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_railcover_01"); break;

		case 4: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 5: iVar0 = joaat("component_at_ar_flsh"); break;

		case 6: iVar0 = joaat("component_at_scope_medium"); break;

		case 7: iVar0 = joaat("component_at_ar_supp"); break;

		case 8: iVar0 = joaat("component_carbinerifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_advancedrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_advancedrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_advancedrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_advancedrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_mg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_mg_clip_01"); break;

		case 1: iVar0 = joaat("component_mg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_scope_small_02"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_mg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_combatmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatmg_clip_01"); break;

		case 1: iVar0 = joaat("component_combatmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_scope_medium"); break;

		case 4: iVar0 = joaat("component_combatmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_pumpshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_sr_supp"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_pumpshotgun_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_assaultshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultshotgun_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultshotgun_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;
		}
		break;

	case joaat("weapon_sniperrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sniperrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_sniperrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_heavysniper"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_heavysniper_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;
		}
		break;

	case joaat("weapon_grenadelauncher"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_scope_small"); break;
		}
		break;

	case joaat("weapon_minigun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_minigun_clip_01"); break;
		}
		break;

	case joaat("weapon_assaultsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_assaultsmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_bullpupshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_ar_supp_02"); break;
		}
		break;

	case joaat("weapon_pistol50"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol50_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol50_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol50_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpdw"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpdw_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpdw_clip_02"); break;

		case 2: iVar0 = joaat("component_combatpdw_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_small"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;
		}
		break;

	case joaat("weapon_sawnoffshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sawnoffshotgun_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_bullpuprifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_bullpuprifle_clip_01"); break;

		case 1: iVar0 = joaat("component_bullpuprifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 6: iVar0 = joaat("component_bullpuprifle_varmod_low"); break;
		}
		break;

	case joaat("weapon_snspistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_snspistol_clip_01"); break;

		case 1: iVar0 = joaat("component_snspistol_clip_02"); break;

		case 2: iVar0 = joaat("component_snspistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_specialcarbine"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_specialcarbine_clip_01"); break;

		case 1: iVar0 = joaat("component_specialcarbine_clip_02"); break;

		case 2: iVar0 = joaat("component_specialcarbine_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_medium"); break;

		case 5: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_specialcarbine_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_knuckle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_knuckle_varmod_pimp"); break;

		case 1: iVar0 = joaat("component_knuckle_varmod_ballas"); break;

		case 2: iVar0 = joaat("component_knuckle_varmod_dollar"); break;

		case 3: iVar0 = joaat("component_knuckle_varmod_diamond"); break;

		case 4: iVar0 = joaat("component_knuckle_varmod_hate"); break;

		case 5: iVar0 = joaat("component_knuckle_varmod_love"); break;

		case 6: iVar0 = joaat("component_knuckle_varmod_player"); break;

		case 7: iVar0 = joaat("component_knuckle_varmod_king"); break;

		case 8: iVar0 = joaat("component_knuckle_varmod_vagos"); break;
		}
		break;

	case joaat("weapon_machinepistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_machinepistol_clip_01"); break;

		case 1: iVar0 = joaat("component_machinepistol_clip_02"); break;

		case 2: iVar0 = joaat("component_machinepistol_clip_03"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;
		}
		break;

	case joaat("weapon_switchblade"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_switchblade_varmod_var1"); break;

		case 1: iVar0 = joaat("component_switchblade_varmod_var2"); break;
		}
		break;

	case joaat("weapon_revolver"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_revolver_clip_01"); break;

		case 1: iVar0 = joaat("component_revolver_varmod_boss"); break;

		case 2: iVar0 = joaat("component_revolver_varmod_goon"); break;
		}
		break;

	case -1121678507:
		switch (iParam1) {
		case 0: iVar0 = -2067221805; break;

		case 1: iVar0 = -1820405577; break;
		}
		break;

	default:
		if (iParam0 != 0) {
			iVar1 = func_406(iParam0, &uVar2);
			if (iVar1 != -1) {
				if (iParam1 < dlc1::get_num_dlc_weapon_components(iVar1)) {
					if (dlc1::get_dlc_weapon_component_data(iVar1, iParam1, &Var41)) {
						return Var41.f_3;
					}
				}
			}
		}
		break;
	}
	return iVar0;
}

// Position - 0x32487
int func_406(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;

	iVar1 = dlc1::get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1) {
		if (dlc1::get_dlc_weapon_data(iVar0, uParam1)) {
			if (uParam1->f_1 == iParam0) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x324C2
int func_407(int iParam0) {
	int iVar0;

	iVar0 = 0;
	switch (iParam0) {
	case 0: iVar0 = 1993361168; break;

	case 1: iVar0 = 1277010230; break;

	case 2: iVar0 = 932043479; break;

	case 3: iVar0 = -690654591; break;

	case 4: iVar0 = -1459198205; break;

	case 5: iVar0 = 195782970; break;

	case 6: iVar0 = -438797331; break;

	case 7: iVar0 = 896793492; break;

	case 8: iVar0 = 495159329; break;

	case 9: iVar0 = -1155528315; break;

	case 10: iVar0 = -515636489; break;

	case 11: iVar0 = -871913299; break;

	case 12: iVar0 = -1352759032; break;

	case 13: iVar0 = -542958961; break;

	case 14: iVar0 = 1682645887; break;

	case 15: iVar0 = -859470162; break;

	case 16: iVar0 = -2125426402; break;

	case 17: iVar0 = 2067210266; break;

	case 18: iVar0 = -538172856; break;

	case 19: iVar0 = 1783244476; break;

	case 20: iVar0 = 439844898; break;

	case 21: iVar0 = -24829327; break;

	case 22: iVar0 = 1949306232; break;

	case 23: iVar0 = -1941230881; break;

	case 24: iVar0 = -1033554448; break;

	case 25: iVar0 = 320513715; break;

	case 26: iVar0 = -695165975; break;

	case 27: iVar0 = -281028447; break;

	case 28: iVar0 = -686713772; break;

	case 29: iVar0 = 347509793; break;

	case 30: iVar0 = 1769089473; break;

	case 31: iVar0 = 189935548; break;

	case 33: iVar0 = 248801358; break;

	case 34: iVar0 = 386596758; break;

	case 35: iVar0 = -157212362; break;

	case 36: iVar0 = 436985596; break;

	case 37: iVar0 = -47957369; break;

	case 38: iVar0 = 575938238; break;
	}
	return iVar0;
}

// Position - 0x32736
void func_408(int iParam0) {
	int iVar0;

	iVar0 = func_181(iParam0);
	if (func_185(iVar0) && !ped::is_ped_injured(iParam0)) {
		Global_101700.f_2095.f_539.f_294[iVar0] = ped::get_ped_armour(iParam0);
	}
}

// Position - 0x32772
void func_409(var *uParam0, int iParam1) {
	int iVar0;
	vector3 vVar1;
	float *fVar4;
	int iVar5;

	*uParam0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	uParam0->f_3 = entity::get_entity_heading(player::player_ped_id());
	uParam0->f_5 = ped::get_ped_parachute_state(player::player_ped_id());
	if (player::is_player_playing(player::player_id())) {
		uParam0->f_4 = player::get_player_wanted_level(player::player_id());
	}
	if (system::vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f) {
		*uParam0 = {301.2162f, 202.1357f, 103.3797f};
		uParam0->f_3 = 156.5144f;
	}
	else if (system::vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f) {
		*uParam0 = {394.2567f, -713.5439f, 28.2853f};
		uParam0->f_3 = 276.6273f;
	}
	else if (system::vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f) {
		*uParam0 = {-1423.472f, -214.2539f, 45.5004f};
		uParam0->f_3 = 353.8757f;
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("finale_choice")) > 0) {
		*uParam0 = {4.2587f, 525.0214f, 173.6281f};
		uParam0->f_3 = 203.6746f;
	}
	else if (gameplay::is_bit_set(Global_69950, 4)) {
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		uParam0->f_3 = 78.9858f;
	}
	else if (gameplay::is_bit_set(Global_69950, 5)) {
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		uParam0->f_3 = 261.747f;
	}
	else if (gameplay::is_bit_set(Global_69950, 6)) {
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		uParam0->f_3 = 271.8208f;
	}
	else if (gameplay::is_bit_set(Global_69950, 7)) {
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		uParam0->f_3 = 316.8879f;
	}
	else if (interior::get_interior_from_entity(player::player_ped_id()) ==
			 interior::get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters")) {
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		uParam0->f_3 = 204.1703f;
	}
	else if (entity::is_entity_in_angled_area(player::player_ped_id(), -415.4365f, 2068.289f, 113.3002f, -564.9516f,
											  1884.703f, 134.0403f, 258.75f, 0, 1, 0) ||
			 entity::is_entity_in_angled_area(player::player_ped_id(), -596.4706f, 2089.921f, 125.4128f, -581.2134f,
											  2036.256f, 136.2836f, 9.5f, 0, 1, 0)) {
		*uParam0 = {-601.59f, 2099.197f, 128.8928f};
		uParam0->f_3 = 204.7498f;
	}
	else if (system::vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f) {
		*uParam0 = {-1018.376f, -483.9436f, 36.0964f};
		uParam0->f_3 = 114.7664f;
	}
	else if (system::vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f) {
		*uParam0 = {497.7238f, -1310.932f, 28.2372f};
		uParam0->f_3 = 289.3663f;
	}
	else if (system::vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f) {
		*uParam0 = {2316.93f, 2594.153f, 45.7199f};
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1) {
		if (func_412(&iVar0)) {
			if (func_411(iVar0, &vVar1, &fVar4)) {
				vVar1.z++;
				*uParam0 = {vVar1};
				uParam0->f_3 = fVar4;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f,
												  -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)) {
			iVar5 = func_244();
			if (iVar5 == 0) {
				*uParam0 = {-65.1234f, 81.2517f, 70.5644f};
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1) {
				*uParam0 = {-68.5531f, -1824.377f, 25.9424f};
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2) {
				*uParam0 = {-220.8189f, -1162.302f, 22.0242f};
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 483.7175f, -1326.63f, 28.2135f, 474.9644f,
												  -1307.998f, 34.49498f, 12f, 0, 1, 0)) {
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			uParam0->f_3 = 213.6273f;
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), -1146.77f, -1534.22f, 3.37f, -1158.453f,
												  -1517.75f, 6.374244f, 13f, 0, 1, 0)) {
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			uParam0->f_3 = 305.6424f;
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 439.5432f, -996.9769f, 24.88307f, 428.2935f,
												  -997.0192f, 28.57458f, 8.5f, 0, 1, 0)) {
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			uParam0->f_3 = 186.6814f;
		}
		else if (func_410(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)) {
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			uParam0->f_3 = 48.8028f;
		}
	}
}

// Position - 0x32CCE
bool func_410(vector3 vParam0, char *sParam3, vector3 vParam4) {
	int iVar0;
	int iVar1;

	if (!interior::_are_coords_colliding_with_exterior(vParam0)) {
		iVar0 = interior::get_interior_at_coords_with_type(vParam4, sParam3);
		if (!interior::is_valid_interior(iVar0)) {
			return false;
		}
		iVar1 = interior::get_interior_from_collision(vParam0);
		if (iVar1 == iVar0) {
			return true;
		}
	}
	return false;
}

// Position - 0x32D12
bool func_411(int iParam0, var *uParam1, float *fParam2) {
	*uParam1 = {0f, 0f, 0f};
	*fParam2 = 0f;
	switch (iParam0) {
	case 0:
		*uParam1 = {-829.842f, -191.7454f, 36.4386f};
		*fParam2 = 29.5061f;
		break;

	case 1:
		*uParam1 = {129.8484f, -1716.528f, 28.0702f};
		*fParam2 = 50.3483f;
		break;

	case 2:
		*uParam1 = {-1296.913f, -1120.999f, 5.3951f};
		*fParam2 = 0.9933f;
		break;

	case 3:
		*uParam1 = {1938.028f, 3718.736f, 31.3154f};
		*fParam2 = 118.2305f;
		break;

	case 4:
		*uParam1 = {1197.866f, -469.3809f, 65.0885f};
		*fParam2 = 346.4477f;
		break;

	case 5:
		*uParam1 = {-32.2161f, -135.8212f, 56.0532f};
		*fParam2 = 186.0052f;
		break;

	case 6:
		*uParam1 = {-287.7696f, 6238.081f, 30.2902f};
		*fParam2 = 316.1349f;
		break;

	case 7:
		*uParam1 = {99.2876f, -1395.16f, 28.2759f};
		*fParam2 = 320.2739f;
		break;

	case 8:
		*uParam1 = {1679.445f, 4819.056f, 41.0035f};
		*fParam2 = 4.6192f;
		break;

	case 9:
		*uParam1 = {411.3063f, -809.1863f, 28.1554f};
		*fParam2 = 1.8972f;
		break;

	case 10:
		*uParam1 = {-1088.054f, 2699.167f, 19.2748f};
		*fParam2 = 129.7382f;
		break;

	case 11:
		*uParam1 = {1194.163f, 2695.644f, 36.9225f};
		*fParam2 = 1.1454f;
		break;

	case 12:
		*uParam1 = {-821.2829f, -1088.027f, 10.0499f};
		*fParam2 = 120.5883f;
		break;

	case 13:
		*uParam1 = {-3.3416f, 6521.303f, 30.2961f};
		*fParam2 = 316.4451f;
		break;

	case 14:
		*uParam1 = {-1208.417f, -785.9635f, 16.0139f};
		*fParam2 = 36.3181f;
		break;

	case 15:
		*uParam1 = {623.1845f, 2739.191f, 40.9588f};
		*fParam2 = 3.5411f;
		break;

	case 16:
		*uParam1 = {130.9555f, -198.2084f, 53.41f};
		*fParam2 = 251.3506f;
		break;

	case 17:
		*uParam1 = {-3164.065f, 1067.317f, 19.6778f};
		*fParam2 = 101.2229f;
		break;

	case 18:
		*uParam1 = {-713.2797f, -174.2767f, 35.8962f};
		*fParam2 = 29.8138f;
		break;

	case 19:
		*uParam1 = {-147.0616f, -306.4322f, 37.7912f};
		*fParam2 = 160.4526f;
		break;

	case 20:
		*uParam1 = {-1461.355f, -230.6092f, 48.3064f};
		*fParam2 = 318.7851f;
		break;

	case 21:
		*uParam1 = {-1347.739f, -1278.573f, 3.8952f};
		*fParam2 = 17.9365f;
		break;

	case 22:
		*uParam1 = {325.6833f, 164.3263f, 102.4425f};
		*fParam2 = 68.6407f;
		break;

	case 23:
		*uParam1 = {1858.774f, 3742.393f, 32.0779f};
		*fParam2 = 301.2329f;
		break;

	case 24:
		*uParam1 = {-286.3272f, 6202.802f, 30.3323f};
		*fParam2 = 225.1334f;
		break;

	case 25:
		*uParam1 = {-1161.596f, -1417.7f, 3.712f};
		*fParam2 = 246.9161f;
		break;

	case 26:
		*uParam1 = {1308.952f, -1660.611f, 50.2362f};
		*fParam2 = 163.5456f;
		break;

	case 27:
		*uParam1 = {-3161.585f, 1074.214f, 19.6847f};
		*fParam2 = 98.6092f;
		break;

	case 28:
		*uParam1 = {28.423f, -1110.814f, 28.2848f};
		*fParam2 = 85.2495f;
		break;

	case 29:
		*uParam1 = {1704.966f, 3749.709f, 33.0188f};
		*fParam2 = 45.6778f;
		break;

	case 30:
		*uParam1 = {223.949f, -38.7894f, 68.6483f};
		*fParam2 = 159.4265f;
		break;

	case 31:
		*uParam1 = {837.7854f, -1017.963f, 26.3045f};
		*fParam2 = 181.0445f;
		break;

	case 32:
		*uParam1 = {-313.1914f, 6093.351f, 30.4625f};
		*fParam2 = 315.8405f;
		break;

	case 33:
		*uParam1 = {-663.4631f, -952.8069f, 20.3143f};
		*fParam2 = 92.6796f;
		break;

	case 34:
		*uParam1 = {-1323.06f, -392.8577f, 35.4596f};
		*fParam2 = 210.7398f;
		break;

	case 35:
		*uParam1 = {-1106.102f, 2684.35f, 18.0953f};
		*fParam2 = 127.0383f;
		break;

	case 36:
		*uParam1 = {-3157.932f, 1081.309f, 19.6953f};
		*fParam2 = 100.2942f;
		break;

	case 37:
		*uParam1 = {2562.882f, 312.8641f, 107.4612f};
		*fParam2 = 179.205f;
		break;

	case 38:
		*uParam1 = {822.48f, -2142.875f, 27.8496f};
		*fParam2 = 355.0598f;
		break;

	case 39:
		*uParam1 = {-1137.053f, -1993.916f, 12.1677f};
		*fParam2 = 43.1213f;
		break;

	case 40:
		*uParam1 = {717.8107f, -1084.081f, 21.3094f};
		*fParam2 = 93.2649f;
		break;

	case 41:
		*uParam1 = {-387.6789f, -128.2568f, 37.6796f};
		*fParam2 = 119.1085f;
		break;

	case 42:
		*uParam1 = {117.8835f, 6599.415f, 31.0134f};
		*fParam2 = 90.7225f;
		break;

	case 43:
		*uParam1 = {1201.709f, 2664.813f, 36.8102f};
		*fParam2 = 133.9002f;
		break;

	case 44:
		*uParam1 = {-200.1521f, -1297.502f, 30.296f};
		*fParam2 = 269.0687f;
		break;

	case 45:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		break;
	}
	return !func_342(*uParam1, 0f, 0f, 0f, 0);
}

// Position - 0x333A1
bool func_412(int *iParam0) {
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !ped::is_ped_injured(player::player_ped_id())) {
		if (func_422()) {
			*iParam0 = func_417(entity::get_entity_coords(player::player_ped_id(), 0), 6, -1, 0, 1, -1);
			if (func_416(*iParam0) && !func_413(*iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x333FC
int func_413(int iParam0) { return func_414(iParam0, 0, 1); }

// Position - 0x3340C
int func_414(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_42() == 0) {
			return gameplay::is_bit_set(func_102(func_415(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

// Position - 0x3346C
int func_415(int iParam0) {
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

// Position - 0x33733
int func_416(int iParam0) { return func_414(iParam0, 5, 1); }

// Position - 0x33743
int func_417(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45) {
		if (iParam3 == 6 || iParam3 == func_421(iVar0)) {
			if (!iParam5 || func_420(iVar0)) {
				fVar1 = gameplay::get_distance_between_coords(vParam0, func_418(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1) && (iParam6 || iVar0 != 21) &&
					iVar0 != iParam7) {
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

// Position - 0x337E5
Vector3 func_418(int iParam0, int iParam1) {
	switch (iParam0) {
	case -1: return 0f, 0f, 0f;

	case 0: return -821.9946f, -187.1776f, 36.5689f;

	case 1: return 133.5702f, -1710.918f, 28.2916f;

	case 2: return -1287.082f, -1116.558f, 5.9901f;

	case 3: return 1933.119f, 3726.079f, 31.8444f;

	case 4: return 1208.333f, -470.917f, 65.208f;

	case 5: return -30.7448f, -148.4921f, 56.0765f;

	case 6: return -280.8165f, 6231.771f, 30.6955f;

	case 7: return 80.665f, -1391.669f, 28.3761f;

	case 8: return 1687.881f, 4820.55f, 41.0096f;

	case 9: return 419.531f, -807.5787f, 28.4896f;

	case 10: return -1094.049f, 2704.171f, 18.0873f;

	case 11: return 1197.972f, 2704.22f, 37.1572f;

	case 12: return -818.6218f, -1077.533f, 10.3282f;

	case 13: return -0.2361f, 6516.045f, 30.8684f;

	case 14: return -1199.809f, -776.6886f, 16.3237f;

	case 15: return 618.1857f, 2752.567f, 41.0881f;

	case 16: return 126.6853f, -212.5027f, 53.5578f;

	case 17: return -3168.966f, 1055.287f, 19.8632f;

	case 18: return -715.3598f, -155.7742f, 36.4105f;

	case 19: return -158.2199f, -304.9663f, 38.735f;

	case 20: return -1455.005f, -233.1862f, 48.7936f;

	case 21: return -1335.973f, -1278.555f, 3.8598f;

	case 22: return 321.6098f, 179.4165f, 102.5865f;

	case 23: return 1861.685f, 3750.08f, 32.0318f;

	case 24: return -290.1603f, 6199.095f, 30.4871f;

	case 25: return -1153.948f, -1425.019f, 3.9544f;

	case 26: return 1322.455f, -1651.125f, 51.1885f;

	case 27: return -3169.42f, 1074.727f, 19.8343f;

	case 28: return 17.6804f, -1114.288f, 28.797f;

	case 29: return 1697.979f, 3753.2f, 33.7053f;

	case 30: return 245.2711f, -45.8126f, 68.941f;

	case 31: return 844.1248f, -1025.571f, 27.1948f;

	case 32: return -325.8904f, 6077.026f, 30.4548f;

	case 33: return -664.2178f, -943.3646f, 20.8292f;

	case 34: return -1313.948f, -390.9637f, 35.592f;

	case 35: return -1111.238f, 2688.463f, 17.6131f;

	case 36: return -3165.231f, 1082.855f, 19.8438f;

	case 37: return 2569.612f, 302.576f, 107.7349f;

	case 38: return 811.8699f, -2149.102f, 28.6363f;

	case 39: return -1147.314f, -1992.434f, 12.1803f;

	case 40: return 724.524f, -1089.081f, 21.1692f;

	case 41: return -354.5272f, -135.4011f, 38.185f;

	case 42: return 113.2615f, 6624.28f, 30.7871f;

	case 43: return 1174.707f, 2644.45f, 36.7552f;

	case 44:
		if (iParam1) {
			return -211.5f, -1324.2f, 30.296f;
		}
		else {
			return -205.6654f, -1311.113f, 30.296f;
		}
		break;

	case 45: return func_419(Global_93004);
	}
	return 1000000f, 1000000f, 1000000f;
}

// Position - 0x33CFF
Vector3 func_419(int iParam0) {
	switch (iParam0) {
	case 1: return 1060f, -2990f, -35f;

	case 2: return 1060f, -2990f, -35f;

	case 3: return 974.9542f, -3000.091f, -35f;

	case 6: return -1586.36f, -566.6f, 106.17f;

	case 7: return -1389.87f, -465.17f, 82.68f;

	case 8: return -145.81f, -590.2f, 171.13f;

	case 9: return -62.49f, -823.55f, 288.74f;

	case 4: return 1102.515f, -3158.888f, -38.5186f;

	case 5: return 1005.861f, -3156.162f, -39.907f;

	default: return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

// Position - 0x33E15
int func_420(int iParam0) { return func_414(iParam0, 0, 0); }

// Position - 0x33E25
int func_421(int iParam0) {
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

// Position - 0x3409A
bool func_422() { return Global_91543.f_303 > 0; }

// Position - 0x340AB
var func_423() {
	int *iVar0;

	func_433(&iVar0, time::get_clock_seconds());
	func_432(&iVar0, time::get_clock_minutes());
	func_431(&iVar0, time::get_clock_hours());
	func_426(&iVar0, time::get_clock_day_of_month());
	func_425(&iVar0, time::get_clock_month());
	func_424(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x340F1
void func_424(int *iParam0, int iParam1) {
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

// Position - 0x34177
void func_425(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x341AA
void func_426(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_430(*uParam0);
	iVar1 = func_428(*uParam0);
	if (iParam1 < 1 || iParam1 > func_427(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x341FB
int func_427(int iParam0, int iParam1) {
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

// Position - 0x3429D
var func_428(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_429(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x342C2
int func_429(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x342D9
int func_430(var uParam0) { return uParam0 & 15; }

// Position - 0x342E6
void func_431(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x34320
void func_432(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x3435B
void func_433(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x34397
int func_434(char *sParam0) {
	if (gameplay::are_strings_equal("BailBond1", sParam0)) {
		return 0;
	}
	else if (gameplay::are_strings_equal("BailBond2", sParam0)) {
		return 1;
	}
	else if (gameplay::are_strings_equal("BailBond3", sParam0)) {
		return 2;
	}
	else if (gameplay::are_strings_equal("BailBond4", sParam0)) {
		return 3;
	}
	return -1;
}

// Position - 0x343F1
int func_435(int iParam0) {
	switch (iParam0) {
	case 69:
	case 70: return func_436(Global_101700.f_8044.f_99.f_205[10]);

	case 74:
	case 75: return func_436(Global_101700.f_8044.f_99.f_205[8]);

	case 84:
	case 85: return func_436(Global_101700.f_8044.f_99.f_205[11]);

	case 90: return func_436(Global_101700.f_8044.f_99.f_205[7]);

	case 93: return func_436(Global_101700.f_8044.f_99.f_205[9]);
	}
	return 0;
}

// Position - 0x344AD
int func_436(int iParam0) {
	switch (iParam0) {
	case 1:
	case 3:
	case 5:
	case 6:
	case 8: return 0;

	case 2:
	case 4:
	case 7:
	case 9: return 1;
	}
	return -1;
}

// Position - 0x34501
int func_437(char *sParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = gameplay::get_hash_key(sParam0);
	iVar1 = func_438(iVar0, 1);
	if (iVar1 == -1 && !iParam1) {
	}
	return iVar1;
}

// Position - 0x3452B
int func_438(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 94) {
		if (Global_82612[iVar0 /*34*/].f_6 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	if (!iParam1) {
	}
	return -1;
}

// Position - 0x34561
void func_439(int iParam0) {
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

// Position - 0x347E3
void func_440() {
	switch (iLocal_171) {
	case 0:
		func_497("ENTERING GO TO GOLF CLUB ");
		if (iLocal_361 == 0) {
			func_33("N1D_TAKE", 7500, 5);
			iLocal_361 = 1;
		}
		func_289(&iLocal_339);
		if (func_485(Local_455)) {
			iLocal_339 = func_262(Local_455, 1, 0, 5);
		}
		else {
			func_497("Glen was not alive when trying to create the blip in "
					 "GO_TO_THE_GOLF_CLUB() init");
			func_444();
			iLocal_339 = func_262(Local_455, 1, 0, 5);
		}
		func_441(0);
		func_497("ENTERING GO TO GOLF CLUB LOOP ");
		if (func_484(0) && iLocal_173) {
			func_17(1, 1, 1);
		}
		gameplay::_set_unk_map_flag(0);
		iLocal_171 = 1;
		break;

	case 1:
		if (iLocal_354 == 0) {
			func_497("Glen created in GO_TO_THE_GOLF_CLUB() SS_UPDATE");
			func_444();
		}
		else {
			func_375();
			func_356();
			func_364();
			func_371();
			func_302();
			func_248();
			func_368();
			if (func_485(Local_455)) {
				if (func_319(player::player_ped_id())) {
					iLocal_171 = 2;
				}
			}
			else {
				iLocal_171 = 2;
			}
		}
		break;

	case 2:
		if (func_485(Local_455)) {
			func_35(2);
		}
		else {
			iLocal_361 = 0;
			func_35(6);
		}
		break;
	}
}

// Position - 0x348FF
void func_441(int iParam0) {
	if (iLocal_690 != 5 || iParam0 == 1) {
		if (!ui::does_blip_exist(iLocal_340)) {
			iLocal_340 = func_442(-1377.18f, 55.39f, 53.7f, 0);
			ui::set_blip_sprite(iLocal_340, 109);
		}
		iLocal_690 = 0;
	}
}

// Position - 0x34948
int func_442(vector3 vParam0, int iParam3) {
	int iVar0;

	iVar0 = ui::add_blip_for_coord(vParam0);
	ui::set_blip_scale(iVar0, func_443(network::network_is_game_in_progress(), 1f, 1f));
	ui::set_blip_route(iVar0, iParam3);
	return iVar0;
}

// Position - 0x34974
var func_443(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x3498B
void func_444() {
	while (iLocal_354 == 0) {
		if (func_445(0)) {
			func_300(&Local_455, 0);
			ped::set_ped_prop_index(Local_455, 0, 0, 0, 0);
			ped::set_blocking_of_non_temporary_events(Local_455, 1);
			ped::set_ped_can_be_targetted(Local_455, 0);
			entity::set_entity_only_damaged_by_player(Local_455, 1);
			entity::set_entity_load_collision_flag(Local_455, 1);
			func_455(Local_455, 0);
			func_300(&Local_468, 0);
			func_362(&Local_825, 0);
			entity::attach_entity_to_entity(Local_825, Local_468, ped::get_ped_bone_index(Local_468, 28422), 0f, 0f, 0f,
											0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			ai::task_play_anim(Local_468, "rcmnigel1d", "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
			ped::set_blocking_of_non_temporary_events(Local_468, 1);
			ped::set_ped_can_be_targetted(Local_468, 0);
			if (func_485(Local_455)) {
				Local_782.f_3 = {
					object::get_safe_pickup_coords(entity::get_entity_coords(Local_455, 1), 1067030938, 1069547520)};
			}
			iLocal_777 = object::create_object(joaat("prop_golf_bag_01"), Local_782.f_3, 1, 1, 0);
			func_299(&Local_749, 0);
			if (audio::is_audio_scene_active("NIGEL_1D_SCENE")) {
				if (func_5(Local_749)) {
					audio::_dynamic_mixer_related_fn(Local_749, "NIGEL_1D_GOLF_CART_A", 0);
				}
			}
			vehicle::set_vehicle_engine_on(Local_749, 1, 1, 0);
			entity::set_entity_health(Local_749, 1200);
			entity::attach_entity_to_entity(iLocal_777, Local_749, 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			vehicle::set_vehicle_model_is_suppressed(Local_749.f_5, 1);
			Local_782.f_1 = object::create_object(joaat("prop_golf_wood_01"), Local_782.f_3, 1, 1, 0);
			entity::attach_entity_to_entity(Local_782.f_1, Local_455, ped::get_ped_bone_index(Local_455, 28422), 0f, 0f,
											0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			streaming::set_model_as_no_longer_needed(Local_455.f_8);
			ai::open_sequence_task(&iLocal_776);
			ai::task_achieve_heading(0, 112f, 0);
			ai::task_play_anim(0, "rcmnigel1d", "swing_a_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			ai::task_play_anim(0, "rcmnigel1d", "swing_b_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			ai::set_sequence_to_repeat(iLocal_776, 1);
			ai::close_sequence_task(iLocal_776);
			ai::task_perform_sequence(Local_455, iLocal_776);
			ai::clear_sequence_task(&iLocal_776);
			func_299(&Local_694[4 /*6*/], 0);
			func_299(&Local_694[5 /*6*/], 0);
			func_497("Celeb created!");
			iLocal_354 = 1;
		}
		else {
			func_497("Waiting for celeb assets...");
		}
		system::wait(0);
	}
}

// Position - 0x34BCC
bool func_445(int iParam0) {
	int iVar0;

	streaming::request_model(iLocal_781);
	streaming::request_model(joaat("a_m_y_golfer_01"));
	streaming::request_model(Local_749.f_5);
	streaming::request_model(Local_825.f_5);
	if (iParam0 == 0) {
		if (!streaming::has_model_loaded(iLocal_781)) {
			return false;
		}
		if (!streaming::has_model_loaded(joaat("a_m_y_golfer_01"))) {
			return false;
		}
		if (!streaming::has_model_loaded(Local_749.f_5)) {
			return false;
		}
		if (!streaming::has_model_loaded(Local_825.f_5)) {
			return false;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 == 0) {
			system::wait(0);
			iVar0 = 1;
			if (!streaming::has_model_loaded(iLocal_781)) {
				iVar0 = 0;
			}
			if (!streaming::has_model_loaded(joaat("a_m_y_golfer_01"))) {
				iVar0 = 0;
			}
			if (!streaming::has_model_loaded(Local_749.f_5)) {
				iVar0 = 0;
			}
			if (!streaming::has_model_loaded(Local_825.f_5)) {
				iVar0 = 0;
			}
		}
	}
	return true;
}

// Position - 0x34C94
void func_446() {
	switch (iLocal_171) {
	case 0:
		func_497("ENTERING PHONE CALL 3 ");
		func_287(&uLocal_174, 2, player::player_ped_id(), "TREVOR", 0, 1);
		func_287(&uLocal_174, 3, 0, "NIGEL", 0, 1);
		func_287(&uLocal_174, 4, 0, "MRSTHORNHILL", 0, 1);
		if (iLocal_173 == 1) {
			func_18(500, 1);
		}
		gameplay::_set_unk_map_flag(0);
		iLocal_359 = 0;
		iLocal_171 = 1;
		break;

	case 1:
		if (!iLocal_359) {
			if (func_238(&uLocal_174, 64, "NIG1DAU", "NIG1D_INTRO", 9, 1, 0, 0, 0)) {
				unk1::_0x293220DA1B46CEBC(2f, 8f, 1);
				weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
				iLocal_359 = 1;
			}
		}
		else {
			if (iLocal_354 == 0) {
				func_444();
			}
			else {
				func_371();
				func_302();
				func_248();
				func_356();
				func_364();
			}
			if (!func_14()) {
				if (func_237()) {
					if (func_447() && iLocal_357 == 0) {
						iLocal_359 = 0;
					}
					else {
						iLocal_171 = 2;
					}
				}
			}
		}
		break;

	case 2:
		if (func_14()) {
			func_12();
			func_10();
		}
		func_288(&uLocal_174, 3);
		func_288(&uLocal_174, 4);
		iLocal_359 = 0;
		if (func_319(player::player_ped_id())) {
			if (iLocal_354 == 0) {
				func_444();
			}
			else {
				func_35(2);
			}
		}
		else {
			func_35(1);
		}
		break;
	}
}

// Position - 0x34DE2
int func_447() {
	if (Global_14428) {
		return 1;
	}
	return 0;
}

// Position - 0x34DF8
void func_448() {
	char *sVar0;

	switch (iLocal_171) {
	case 0:
		ui::clear_prints();
		ui::clear_help(1);
		func_289(&iLocal_339);
		switch (iLocal_377) {
		case 0: break;

		case 1: sVar0 = "N1D_ESCAPE"; break;

		case 2: sVar0 = "N1D_NOLOCATE"; break;

		case 4: sVar0 = "N1D_CLUBDES"; break;

		case 3: sVar0 = "N1D_CLUBLOST"; break;
		}
		if (iLocal_377 == 0) {
			func_517(1);
		}
		else {
			func_453(sVar0, 1);
		}
		iLocal_171 = 1;
		break;

	case 1:
		if (func_452()) {
			func_449();
			if (audio::is_scripted_conversation_ongoing()) {
				func_15();
			}
			func_236(1);
			func_506(0);
		}
		break;
	}
}

// Position - 0x34EB3
void func_449() {
	int iVar0;

	func_4(&Local_455);
	func_4(&Local_468);
	iVar0 = 0;
	while (iVar0 <= 3) {
		func_4(&Local_402[iVar0 /*13*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5) {
		func_4(&Local_561[iVar0 /*13*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		func_4(&Local_640[iVar0 /*13*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2) {
		func_4(&Local_481[iVar0 /*13*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2) {
		func_4(&Local_521[iVar0 /*13*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8) {
		func_3(&Local_694[iVar0 /*6*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		func_3(&Local_755[iVar0 /*6*/]);
		iVar0++;
	}
	func_3(&Local_749);
	func_451(&Local_782.f_1);
	func_451(&iLocal_777);
	func_451(&Local_825);
	iVar0 = 0;
	while (iVar0 <= 5) {
		func_451(&Local_788[iVar0 /*6*/]);
		iVar0++;
	}
	if (object::does_pickup_exist(Local_782)) {
		object::remove_pickup(Local_782);
	}
	func_289(&iLocal_339);
	iVar0 = 0;
	while (iVar0 <= 2) {
		func_289(&Local_481[iVar0 /*13*/].f_11);
		iVar0++;
	}
	ped::remove_relationship_group(iLocal_774);
	func_450(2, iLocal_365);
}

// Position - 0x35016
void func_450(int iParam0, int iParam1) {
	if (!func_185(iParam0)) {
		return;
	}
	Global_101700.f_2095.f_539.f_1560[iParam0] = iParam1;
}

// Position - 0x3503E
void func_451(int *iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		object::delete_object(iParam0);
	}
}

// Position - 0x35069
bool func_452() {
	if (Global_3) {
		return true;
	}
	if (Global_91491 == 7 || Global_91491 == 8) {
		return true;
	}
	return false;
}

// Position - 0x35096
void func_453(char *sParam0, int iParam1) {
	func_454(sParam0);
	func_517(iParam1);
}

// Position - 0x350AA
void func_454(char *sParam0) {
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

// Position - 0x350EA
void func_455(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (iParam1) {
		iVar0 = 0;
		while (iVar0 < 64) {
			if (Global_55852[iVar0 /*2*/] != 0) {
				if (Global_55852[iVar0 /*2*/] == iParam0) {
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55851) {
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64) {
		if (Global_55852[iVar2 /*2*/] == 0) {
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1) {
		return;
	}
	Global_55852[iVar1 /*2*/] = iParam0;
	Global_55852[iVar1 /*2*/].f_1 = 7;
	Global_55851++;
}

// Position - 0x35185
void func_456(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;

	if (Global_69956 != 6) {
		if (Global_69958 == -1) {
			if (func_467(1, Param0)) {
				if (Global_69959 == 3) {
					fVar0 = 1.5f;
				}
				else {
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0) {
					Global_69958 = gameplay::get_game_timer();
					vLocal_22 = {ui::get_hud_component_position(15)};
					fLocal_21 = 0f;
				}
				else {
					fLocal_21 += gameplay::get_frame_time();
				}
			}
			else {
				fLocal_21 = 0f;
			}
		}
		else {
			if (!func_467(0, Param0)) {
				Global_69958 = gameplay::get_game_timer() - 9000;
			}
			ui::hide_hud_component_this_frame(7);
			ui::hide_hud_component_this_frame(6);
			ui::hide_hud_component_this_frame(8);
			ui::hide_hud_component_this_frame(9);
			iVar1 = gameplay::get_game_timer() - Global_69958;
			if (iVar1 < 9000 && !cam::is_screen_faded_out()) {
				iVar2 = 255;
				if (iVar1 < 1000) {
					iVar2 = system::ceil(system::to_float(iVar1) / 1000f * 255f);
				}
				else {
					iVar3 = 9000 - iVar1;
					if (iVar3 < 1000) {
						iVar2 = system::ceil(system::to_float(iVar3) / 1000f * 255f);
					}
				}
				switch (Global_69956) {
				case 3:
				case 5:
					if (iParam6 == 1) {
						fVar6 = 0f;
						fVar7 = -0.07f;
					}
					else if (iParam7 == 1) {
						fVar6 = 0f;
						fVar7 = -0.077f;
					}
					else if (iParam8 == 1) {
						fVar6 = 0f;
						fVar7 = -0.05f;
					}
					else if (iParam9 == 1) {
						fVar6 = 0f;
						fVar7 = -0.035f;
					}
					else {
						fVar6 = 0f;
						fVar7 = -0.014f;
					}
					break;

				default:
					fVar6 = 0f;
					fVar7 = -0.014f;
					break;
				}
				graphics::_set_screen_draw_position(82, 66);
				ui::set_text_font(1);
				ui::set_text_justification(2);
				iVar12 = func_244();
				if (Global_69959 == 1 && Global_69957 == 62) {
					iVar12 = Global_101700.f_2095.f_539.f_3550;
				}
				switch (iVar12) {
				case 0: ui::get_hud_colour(143, &iVar8, &iVar9, &iVar10, &uVar11); break;

				case 1: ui::get_hud_colour(144, &iVar8, &iVar9, &iVar10, &uVar11); break;

				case 2: ui::get_hud_colour(145, &iVar8, &iVar9, &iVar10, &uVar11); break;

				default:
					iVar8 = 240;
					iVar9 = 200;
					iVar10 = 80;
				}
				ui::set_text_colour(iVar8, iVar9, iVar10, iVar2);
				ui::set_text_drop_shadow();
				Var4 = {func_458(Global_69957, Global_69959, iParam10)};
				if (fVar7 == -0.014f) {
				}
				graphics::_screen_draw_position_ratio(fVar6, fVar7, 0f, 0.01f);
				ui::set_text_scale(0.67f, 0.67f);
				if (!graphics::get_is_widescreen() && !graphics::get_is_hidef()) {
					fLocal_26 = 0.14f;
				}
				else {
					fLocal_26 = 0.17f;
				}
				if (fVar7 == -0.014f) {
					if (func_457(&Var4) > fLocal_26) {
						if (ui::is_hud_component_active(15)) {
							ui::set_hud_component_position(15, vLocal_22.x, vLocal_22.y + fLocal_25);
							Global_69961 = 1;
						}
					}
				}
				ui::begin_text_command_display_text(&Var4);
				ui::end_text_command_display_text(fVar6, fVar7, 0);
				graphics::_screen_draw_position_end();
				if (Global_69960 == 1) {
					func_200();
					fLocal_21 = 0f;
				}
			}
			else {
				func_200();
				fLocal_21 = 0f;
			}
		}
	}
}

// Position - 0x3546A
float func_457(char *sParam0) {
	ui::_begin_text_command_width(sParam0);
	return ui::_end_text_command_get_width(1);
}

// Position - 0x3547D
struct<2> func_458(int iParam0, int iParam1, int iParam2) {
	struct<2> Var0;
	int iVar2;

	StringCopy(&Var0, "", 8);
	switch (iParam1) {
	case 1: Var0 = {func_466(iParam0)}; break;

	case 7: Var0 = {func_186(iParam0)}; break;

	case 3:
		iVar2 = iParam0;
		switch (iVar2) {
		case 0: Var0 = {func_465(iParam2)}; break;

		case 8: Var0 = {func_464(iParam2)}; break;

		case 7: Var0 = {func_463(iParam2)}; break;

		case 10: Var0 = {func_462(iParam2)}; break;

		case 5: Var0 = {func_461(iParam2)}; break;

		case 4: Var0 = {func_460(iParam2)}; break;

		default: StringCopy(&Var0, func_459(iVar2), 8); break;
		}
		break;

	default: break;
	}
	return Var0;
}

// Position - 0x35554
char *
func_459(int iParam0) {
	switch (iParam0) {
	case 0: return "MG_BJUM";

	case 1: return "MG_DART";

	case 2: return "MG_GOLF";

	case 3: return "MG_HUNT";

	case 4: return "MG_OFFR";

	case 5: return "MG_PILO";

	case 6: return "MG_RMPG";

	case 7: return "MG_SERA";

	case 8: return "MG_SRAC";

	case 9: return "MG_STRP";

	case 10: return "MG_STNT";

	case 11: return "MG_SHTR";

	case 12: return "MG_TAXI";

	case 13: return "MG_TENN";

	case 14: return "MG_TOWI";

	case 15: return "MG_TRFA";

	case 16: return "MG_TRFG";

	case 17: return "MG_TRIA";

	case 18: return "MG_YOGA";

	case 19: return "MG_CRCE";
	}
	return "INVALID!";
}

// Position - 0x356BC
struct<2> func_460(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x356F1
struct<2>
func_461(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x35726
struct<2>
func_462(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x3575B
struct<2>
func_463(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x35790
struct<2>
func_464(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2) || iParam0 == 3) {
	}
	else {
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x357CF
struct<2>
func_465(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x35804
struct<2>
func_466(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &Global_82612[iParam0 /*34*/].f_8, 8);
	if (iParam0 == 90) {
		switch (Global_101700.f_8044.f_99.f_205[7]) {
		case 1: StringConCat(&Var0, "A", 8); break;

		case 2: StringConCat(&Var0, "B", 8); break;

		default: StringConCat(&Var0, "A", 8); break;
		}
	}
	return Var0;
}

//Position - 0x35871
bool func_467(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!func_469(0) || Global_69971 || Global_69960 == 1 || !cam::is_screen_faded_in()) {
		return false;
	}
	switch (Global_69956) {
	case 0:
		if (gameplay::are_strings_equal(&uParam1, "NONE") || gameplay::is_string_null_or_empty(&uParam1)) {
			Global_69956 = 3;
		}
		else {
			Global_69956 = 1;
		}
		break;

	case 1:
		if (cutscene::has_cutscene_loaded()) {
			Global_69956 = 2;
		}
		break;

	case 2:
		if (cutscene::is_cutscene_playing()) {
			Global_69956 = 4;
			return true;
		}
		else if (!cutscene::is_cutscene_active()) {
			Global_69956 = 3;
		}
		break;

	case 3:
		if (cutscene::is_cutscene_playing()) {
		}
		else {
			Global_69956 = 5;
			return true;
		}
		break;

	case 4:
		if (cutscene::is_cutscene_playing()) {
			return true;
		}
		else if (iParam0 == 1) {
			Global_69956 = 5;
		}
		break;

	case 5:
		if (cutscene::is_cutscene_playing() || func_338(0) || func_468(1)) {
		}
		else {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x3598A
bool func_468(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0x359B3
int func_469(int iParam0) {
	if (Global_35781 == 15) {
		return 0;
	}
	if (func_470(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x359D5
bool func_470(int iParam0) { return func_471(iParam0, Global_35781); }

// Position - 0x359E6
int func_471(int iParam0, int iParam1) {
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

// Position - 0x35BC7
void func_472(int iParam0, int iParam1) {
	func_475(1, 1);
	if (iParam1 == 1) {
		func_473();
	}
	iLocal_172 = iParam0;
	if (iLocal_172 == 3) {
		func_497("We are trying to skip to Get The Club...");
	}
	else if (iLocal_172 == 1) {
		func_497("We are trying to skip to Go to Golf Club...");
	}
	iLocal_173 = 0;
	func_1(iLocal_172);
}

// Position - 0x35C0D
void func_473() {
	ui::clear_prints();
	func_449();
	player::set_player_wanted_level(player::player_id(), 0, 0);
	iLocal_691 = 0;
	func_474();
	if (ai::get_is_waypoint_recording_loaded("NIGEL1DTRANS")) {
		ai::remove_waypoint_recording("NIGEL1DTRANS");
	}
	if (ai::get_is_waypoint_recording_loaded("NIGEL1DGOLF")) {
		ai::remove_waypoint_recording("NIGEL1DGOLF");
	}
	if (ai::get_is_waypoint_recording_loaded("NIGEL1DGOLF2")) {
		ai::remove_waypoint_recording("NIGEL1DGOLF2");
	}
	if (ai::get_is_waypoint_recording_loaded("NIGEL1DCRASH")) {
		ai::remove_waypoint_recording("NIGEL1DCRASH");
	}
	iLocal_354 = 0;
	iLocal_345 = 0;
	func_486();
	if (func_485(player::player_ped_id())) {
		entity::set_entity_coords(player::player_ped_id(), -1330.118f, -72.3159f, 48.1812f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 326f);
	}
	func_35(1);
}

// Position - 0x35CBF
void func_474() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3) {
		streaming::set_model_as_no_longer_needed(Local_402[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2) {
		streaming::set_model_as_no_longer_needed(Local_521[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2) {
		streaming::set_model_as_no_longer_needed(Local_481[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5) {
		streaming::set_model_as_no_longer_needed(Local_561[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		streaming::set_model_as_no_longer_needed(Local_640[iVar0 /*13*/].f_8);
		iVar0++;
	}
	streaming::set_model_as_no_longer_needed(iLocal_781);
	iVar0 = 0;
	while (iVar0 <= 8) {
		streaming::set_model_as_no_longer_needed(Local_694[iVar0 /*6*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		streaming::set_model_as_no_longer_needed(Local_755[iVar0 /*6*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5) {
		streaming::set_model_as_no_longer_needed(Local_788[iVar0 /*6*/].f_5);
		iVar0++;
	}
}

// Position - 0x35DC7
void func_475(int iParam0, int iParam1) {
	if (iParam0) {
		func_479(0, 1, 1);
	}
	if (!cam::is_screen_faded_out()) {
		cam::do_screen_fade_out(0);
	}
	func_476(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, iParam1, 1, 1, 1);
}

// Position - 0x35DFA
void func_476(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8,
			  bool bParam9, int iParam10, int iParam11, int iParam12) {
	int iVar0;

	iVar0 = player::get_player_index();
	if (player::is_player_playing(iVar0)) {
		func_478(0);
		if (bParam9) {
			player::remove_player_helmet(player::get_player_index(), 1);
		}
		if (iParam8) {
			switch (func_244()) {
			case 0:
				if (func_180(player::player_ped_id(), 8, 15)) {
					func_67(player::player_ped_id(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				if (func_180(player::player_ped_id(), 9, 6)) {
					func_67(player::player_ped_id(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				break;

			case 1:
				if (func_180(player::player_ped_id(), 8, 1) || func_180(player::player_ped_id(), 8, 10)) {
					func_67(player::player_ped_id(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				break;

			case 2:
				if (func_180(player::player_ped_id(), 8, 4)) {
					func_67(player::player_ped_id(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				break;
			}
		}
		if (iParam6 == 1) {
			gameplay::clear_area_of_peds(func_477(player::get_player_index()), 50f, 0);
		}
		if (iParam7 == 1) {
			gameplay::clear_area_of_objects(vParam0, 30f, 0);
		}
		if (iParam10) {
			fire::stop_fire_in_range(vParam0, 30f);
		}
		gameplay::clear_area_of_projectiles(vParam0, 30f, 0);
		player::set_player_wanted_level(iVar0, 0, 0);
		player::set_player_wanted_level_now(iVar0, 0);
		player::set_everyone_ignore_player(iVar0, 1);
		if (iParam12) {
			ui::display_radar(0);
			ui::display_hud(0);
		}
		ui::clear_prints();
		if (iParam11 == 1) {
			ui::clear_help(1);
		}
		if (iParam3 == 1) {
			cam::set_widescreen_borders(1, 0);
		}
		if (iParam4 == 1) {
			iLocal_48 = 0;
			if (func_485(player::player_ped_id())) {
				iLocal_48 = weapon::get_selected_ped_weapon(player::player_ped_id());
				weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1) {
			func_18(500, 0);
		}
	}
}

// Position - 0x35FB8
Vector3 func_477(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0x35FCB
void func_478(int iParam0) {
	int iVar0;

	iVar0 = player::get_player_index();
	if (!player::is_player_dead(iVar0)) {
		if (iParam0) {
		}
		player::set_player_control(iVar0, iParam0, 16);
		player::set_player_control(iVar0, iParam0, 32);
	}
	func_20(1, 1, 0, 0);
}

// Position - 0x36007
void func_479(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 1;
	if (cutscene::is_cutscene_active()) {
		while (iVar0) {
			iVar0 = cutscene::is_cutscene_active();
			if (cutscene::is_cutscene_playing()) {
				cutscene::stop_cutscene(0);
			}
			if (cutscene::has_cutscene_loaded()) {
				cutscene::remove_cutscene();
			}
			if (cutscene::is_cutscene_active() && !cutscene::is_cutscene_playing()) {
				iVar0 = 0;
			}
			system::wait(0);
		}
		if (iParam0) {
			func_19(iParam1, iParam2, 1, 1);
		}
	}
}

// Position - 0x36066
void func_480(vector3 vParam0, float fParam3, int iParam4, int iParam5) {
	if (func_505()) {
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
		func_31(1);
	}
}

// Position - 0x360FB
void func_481(char *sParam0, int iParam1) {
	sParam0 = sParam0;
	iParam1 = iParam1;
}

// Position - 0x3610B
int func_482() {
	if (Global_91491 != 10 && Global_91491 != 9) {
		return 0;
	}
	return Global_91491.f_2;
}

// Position - 0x36135
int func_483(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6) {
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (func_485(iParam0)) {
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

// Position - 0x36190
bool func_484(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x361BB
bool func_485(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x361DC
void func_486() {
	int iVar0;

	func_496();
	iLocal_170 = 0;
	iLocal_691 = 0;
	iVar0 = 0;
	while (iVar0 <= 2) {
		iLocal_681[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2) {
		iLocal_667[iVar0] = 0;
		iVar0++;
	}
	iLocal_379 = 0;
	iLocal_380 = 0;
	iLocal_389 = audio::get_sound_id();
	if (!audio::is_audio_scene_active("NIGEL_1D_SCENE")) {
		audio::start_audio_scene("NIGEL_1D_SCENE");
	}
	if (audio::is_audio_scene_active("NIGEL_1D_SCENE")) {
		if (func_5(Local_749)) {
			audio::_dynamic_mixer_related_fn(Local_749, "NIGEL_1D_GOLF_CART_A", 0);
		}
	}
	iLocal_344 = 0;
	iLocal_346 = 0;
	iLocal_347 = 0;
	iLocal_349 = 0;
	iLocal_356 = 0;
	iLocal_351 = 0;
	iLocal_352 = 0;
	iLocal_353 = 0;
	iLocal_355 = 0;
	iLocal_358 = 0;
	iLocal_359 = 0;
	iLocal_360 = 0;
	iLocal_361 = 0;
	iLocal_348 = 0;
	iLocal_357 = 0;
	iLocal_365 = func_495(2);
	ped::add_relationship_group("SecurityGroup", &iLocal_774);
	ped::set_relationship_between_groups(1, iLocal_774, -1533126372);
	ped::set_relationship_between_groups(1, -1533126372, iLocal_774);
	ai::request_waypoint_recording("NIGEL1DTRANS");
	ai::request_waypoint_recording("NIGEL1DGOLF");
	ai::request_waypoint_recording("NIGEL1DGOLF2");
	ai::request_waypoint_recording("NIGEL1DCRASH");
	streaming::request_anim_dict("rcmnigel1d");
	streaming::request_anim_dict("mini@golf");
	ui::request_additional_text("NIGEL1D", 0);
	streaming::request_model(joaat("caddy"));
	while (!ui::has_additional_text_loaded(0) || !streaming::has_anim_dict_loaded("rcmnigel1d") ||
		   !streaming::has_anim_dict_loaded("mini@golf") || !ai::get_is_waypoint_recording_loaded("NIGEL1DTRANS") ||
		   !ai::get_is_waypoint_recording_loaded("NIGEL1DGOLF") ||
		   !ai::get_is_waypoint_recording_loaded("NIGEL1DGOLF2") ||
		   !ai::get_is_waypoint_recording_loaded("NIGEL1DCRASH") || !streaming::has_model_loaded(joaat("caddy"))) {
		system::wait(0);
	}
	vehicle::set_random_vehicle_density_multiplier_this_frame(0.75f);
	player::set_player_control(player::player_id(), 1, 256);
	iLocal_778 =
		ped::add_scenario_blocking_area(-1122.202f, 48.5724f, 51.4652f, -1076.233f, 92.1041f, 60.0617f, 0, 1, 1, 1);
	ped::set_ped_non_creation_area(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f);
	iLocal_779 = ped::add_scenario_blocking_area(-1379.33f, 45.13f, 50.68f, -1368.01f, 69.83f, 55.9f, 0, 1, 1, 1);
	if (iLocal_780 == -1) {
		iLocal_780 = pathfind::add_navmesh_blocking_object(-1375.08f, 55.55f, 52.93f, 4f, 6f, 4f, 355f, 0, 7);
	}
	func_493(64, 2, 0);
	if (func_338(0)) {
		func_491(0);
	}
	func_490(&uLocal_831);
	func_489(&uLocal_831, -1313.714f, -27.2202f, 48.0314f);
	func_489(&uLocal_831, -1294.066f, -27.0136f, 47.5724f);
	func_489(&uLocal_831, -1069.844f, -143.769f, 39.7493f);
	func_489(&uLocal_831, -925.2529f, -89.9079f, 38.3457f);
	func_489(&uLocal_831, -1010.948f, 40.0643f, 49.9277f);
	func_489(&uLocal_831, -1122.838f, 233.7037f, 64.7587f);
	func_489(&uLocal_831, -1282.578f, 188.8798f, 59.2769f);
	func_489(&uLocal_831, -1328.153f, 192.0178f, 57.8136f);
	func_489(&uLocal_831, -1386.75f, 167.32f, 57.11f);
	func_489(&uLocal_831, -1411.5f, 109.64f, 51.49f);
	func_489(&uLocal_831, -1399.63f, -10.83f, 51.93f);
	func_489(&uLocal_831, -1359.54f, 18.93f, 52.52f);
	func_489(&uLocal_831, -1342.27f, 16.92f, 52.16f);
	func_488(&uLocal_831);
	func_487(&uLocal_883, &uLocal_831, 100f);
	func_490(&uLocal_935);
	func_489(&uLocal_935, -1100.2f, 77.1233f, 53.2703f);
	func_489(&uLocal_935, -1040.69f, 97.3963f, 51.9067f);
	func_489(&uLocal_935, -977.9333f, -5.5166f, 45.6548f);
	func_489(&uLocal_935, -1039.687f, -35.872f, 45.4867f);
	func_489(&uLocal_935, -1062.19f, -2.8635f, 49.6013f);
	func_488(&uLocal_935);
	iLocal_173 = 1;
}

// Position - 0x36614
void func_487(var *uParam0, var *uParam1, float fParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	if (uParam1->f_46 < 3) {
	}
	iVar0 = uParam1->f_46 - 1;
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_46 = uParam1->f_46;
	while (iVar1 < uParam1->f_46) {
		vVar3 = {(*uParam1)[iVar1 /*3*/] - (*uParam1)[iVar0 /*3*/]};
		vVar6 = {(*uParam1)[iVar2 /*3*/] - (*uParam1)[iVar1 /*3*/]};
		vVar3 = {vVar3 / FtoV(system::sqrt(vVar3.x * vVar3.x + vVar3.y * vVar3.y))};
		vVar6 = {vVar6 / FtoV(system::sqrt(vVar6.x * vVar6.x + vVar6.y * vVar6.y))};
		vVar9 = {vVar3 - vVar6};
		vVar9 = {vVar9 / FtoV(system::sqrt(vVar9.x * vVar9.x + vVar9.y * vVar9.y))};
		if (func_255(uParam1, (*uParam1)[iVar1 /*3*/] + vVar9)) {
			vVar9 = {-vVar9};
		}
		(*uParam0)[iVar1 /*3*/] = {(*uParam1)[iVar1 /*3*/] + vVar9 * FtoV(fParam2)};
		iVar0 = iVar1;
		iVar1++;
		iVar2 += 1 % uParam1->f_46;
	}
}

// Position - 0x36721
void func_488(var *uParam0) {
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

// Position - 0x367C1
void func_489(var *uParam0, vector3 vParam1) {
	if (uParam0->f_51 == 0) {
	}
	if (uParam0->f_46 >= 15) {
	}
	(*uParam0)[uParam0->f_46 /*3*/] = {vParam1};
	uParam0->f_46++;
}

// Position - 0x367F2
void func_490(var *uParam0) {
	if (uParam0->f_51) {
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = {0f, 0f, 0f};
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

// Position - 0x36819
void func_491(int iParam0) {
	if (Global_14604) {
		func_492(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&Global_2314, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 30);
	}
	else {
		gameplay::clear_bit(&Global_2313, 30);
	}
	if (!func_28()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x36889
void func_492(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_338(0)) {
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

// Position - 0x368FD
void func_493(int iParam0, int iParam1, int iParam2) {
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		func_243();
		if (iParam1 == 4) {
			Global_101700.f_27009[iParam0 /*29*/].f_12[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[2] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[2] = 1;
		}
		else {
			if (Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] == 1 &&
				Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] == 1) {
				iParam2 = 0;
			}
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (iParam2) {
			if (!Global_69702) {
				if (iParam1 != 4) {
					if (Global_14443 != iParam1) {
						Global_2972[iParam1 /*4*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443) {
					}
					else {
						Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_494();
					}
				}
				else {
					Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_494();
				}
			}
			else {
				Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_494();
			}
		}
	}
}

// Position - 0x36AA7
void func_494() {
	char cVar0[64];
	char cVar16[64];
	char *sVar32;

	StringCopy(&cVar0, ui::_get_label_text(&Global_101700.f_27009[Global_2999 /*29*/].f_7), 64);
	if (Global_3018 == 0) {
		ui::_set_notification_text_entry("");
		StringCopy(&cVar16, ui::_get_label_text(&Global_2923[1 /*6*/]), 64);
		sVar32 = ui::_get_label_text("CELL_253");
		ui::_set_notification_message(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else {
		ui::_set_notification_text_entry("CELL_255");
		ui::add_text_component_substring_text_label(&Global_2923[1 /*6*/]);
		ui::_set_notification_message(&cVar0, &cVar0, 0, 3, "", 0);
	}
	gameplay::clear_bit(&Global_2313, 0);
}

// Position - 0x36B2A
int func_495(int iParam0) {
	if (!func_185(iParam0)) {
		return 0;
	}
	return Global_101700.f_2095.f_539.f_1560[iParam0];
}

// Position - 0x36B51
void func_496() {
	Local_455.f_1 = {-1096.855f, 67.6858f, 52.952f};
	Local_455.f_7 = 112f;
	Local_455.f_8 = iLocal_781;
	Local_749.f_1 = {-1099.91f, 61.2608f, 52.8124f};
	Local_749.f_4 = 243f;
	Local_749.f_5 = joaat("caddy");
	Local_468.f_1 = {-1096.258f, 69.723f, 53.0107f};
	Local_468.f_7 = 163f;
	Local_468.f_8 = joaat("a_m_y_golfer_01");
	Local_825.f_1 = {Local_468.f_1};
	Local_825.f_5 = joaat("prop_golf_wood_01");
	Local_694[0 /*6*/].f_1 = {-1370.192f, 61.6015f, 52.4847f};
	Local_694[0 /*6*/].f_4 = 206f;
	Local_694[0 /*6*/].f_5 = joaat("caddy");
	Local_694[1 /*6*/].f_1 = {-1373.868f, 65.9104f, 52.5826f};
	Local_694[1 /*6*/].f_4 = 224f;
	Local_694[1 /*6*/].f_5 = joaat("caddy");
	Local_694[2 /*6*/].f_1 = {-1302.413f, -6.6432f, 48.8636f};
	Local_694[2 /*6*/].f_4 = 20f;
	Local_694[2 /*6*/].f_5 = joaat("caddy");
	Local_694[3 /*6*/].f_1 = {-1328.512f, 26.7404f, 52.4943f};
	Local_694[3 /*6*/].f_4 = 272f;
	Local_694[3 /*6*/].f_5 = joaat("caddy");
	Local_694[4 /*6*/].f_1 = {-1102.335f, 75.7757f, 53.2591f};
	Local_694[4 /*6*/].f_4 = 293f;
	Local_694[4 /*6*/].f_5 = joaat("caddy");
	Local_694[5 /*6*/].f_1 = {-1103.023f, 65.6267f, 53.056f};
	Local_694[5 /*6*/].f_4 = 203f;
	Local_694[5 /*6*/].f_5 = joaat("caddy");
	Local_694[6 /*6*/].f_1 = {-1356.7f, 145.34f, 55.67f};
	Local_694[6 /*6*/].f_4 = 187f;
	Local_694[6 /*6*/].f_5 = joaat("caddy");
	Local_694[7 /*6*/].f_1 = {-1158.52f, 68.38f, 55.97f};
	Local_694[7 /*6*/].f_4 = 226.84f;
	Local_694[7 /*6*/].f_5 = joaat("caddy");
	Local_694[8 /*6*/].f_1 = {-1165.397f, 72.9072f, 55.6258f};
	Local_694[8 /*6*/].f_4 = 238f;
	Local_694[8 /*6*/].f_5 = joaat("caddy");
	Local_768.f_1 = {-1191.22f, 36.83f, 52.03f};
	Local_768.f_4 = -77.1337f;
	Local_768.f_5 = joaat("caddy");
	Local_481[0 /*13*/].f_1 = {-1105.622f, 66.4609f, 53.07f};
	Local_481[0 /*13*/].f_7 = 118f;
	Local_481[0 /*13*/].f_8 = joaat("s_m_m_highsec_01");
	Local_481[1 /*13*/].f_1 = {-1090.09f, 64.3905f, 52.5607f};
	Local_481[1 /*13*/].f_7 = 238f;
	Local_481[1 /*13*/].f_8 = joaat("s_m_m_highsec_01");
	Local_481[2 /*13*/].f_1 = {-1093.736f, 73.8568f, 53.0388f};
	Local_481[2 /*13*/].f_7 = 319f;
	Local_481[2 /*13*/].f_8 = joaat("s_m_m_highsec_01");
	Local_521[0 /*13*/].f_1 = {-1298.49f, -23.89f, 47.99f};
	Local_521[0 /*13*/].f_7 = 126.55f;
	Local_521[0 /*13*/].f_4 = {-1314.059f, -35.6361f, 48.1836f};
	Local_521[0 /*13*/].f_8 = joaat("s_m_m_security_01");
	Local_521[1 /*13*/].f_1 = {-1344.505f, 18.8674f, 51.9921f};
	Local_521[1 /*13*/].f_7 = 205f;
	Local_521[1 /*13*/].f_4 = {-1344.4f, 18.11f, 52.19f};
	Local_521[1 /*13*/].f_8 = joaat("s_m_m_security_01");
	Local_521[2 /*13*/].f_1 = {-1376.71f, 140.2f, 55.25f};
	Local_521[2 /*13*/].f_7 = 99f;
	Local_521[2 /*13*/].f_4 = {-1375.577f, 131.1931f, 55.3238f};
	Local_521[2 /*13*/].f_8 = joaat("s_m_m_security_01");
	Local_402[0 /*13*/].f_1 = {-1377.18f, 55.39f, 53.7f};
	Local_402[0 /*13*/].f_7 = 101f;
	Local_402[0 /*13*/].f_8 = joaat("s_m_y_valet_01");
	Local_402[1 /*13*/].f_1 = {-1369.305f, 52.1333f, 52.4768f};
	Local_402[1 /*13*/].f_7 = 20f;
	Local_402[1 /*13*/].f_8 = joaat("s_m_y_valet_01");
	Local_402[2 /*13*/].f_1 = {-1366.581f, 54.04f, 52.4633f};
	Local_402[2 /*13*/].f_7 = 94f;
	Local_402[2 /*13*/].f_8 = joaat("s_m_y_valet_01");
	Local_402[3 /*13*/].f_1 = {-1367.691f, 60.2214f, 52.4635f};
	Local_402[3 /*13*/].f_7 = 126f;
	Local_402[3 /*13*/].f_8 = joaat("s_m_y_valet_01");
	Local_561[0 /*13*/].f_1 = {-1161.109f, 72.2742f, 55.6518f};
	Local_561[0 /*13*/].f_7 = 328.424f;
	Local_561[0 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_561[0 /*13*/].f_12 = "idle_b";
	Local_561[1 /*13*/].f_1 = {-1159.803f, 71.7432f, 55.6988f};
	Local_561[1 /*13*/].f_7 = 344.2791f;
	Local_561[1 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_561[1 /*13*/].f_12 = "idle_c";
	Local_561[2 /*13*/].f_1 = {-1143.173f, 112.0022f, 58.1151f};
	Local_561[2 /*13*/].f_7 = 109f;
	Local_561[2 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_561[2 /*13*/].f_12 = "wood_idle_low_b";
	Local_561[3 /*13*/].f_1 = {-1157.17f, 79.4863f, 56.7109f};
	Local_561[3 /*13*/].f_7 = 159f;
	Local_561[3 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_561[3 /*13*/].f_12 = "wedge_idle_high_c";
	Local_561[4 /*13*/].f_1 = {-1060.173f, 79.7097f, 51.0781f};
	Local_561[4 /*13*/].f_7 = 222f;
	Local_561[4 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_561[4 /*13*/].f_12 = "wedge_idle_high_b";
	Local_561[5 /*13*/].f_1 = {-1025.151f, 8.619f, 48.7672f};
	Local_561[5 /*13*/].f_7 = 133f;
	Local_561[5 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_561[5 /*13*/].f_12 = "putt_idle_high_b";
	Local_788[0 /*6*/].f_1 = {Local_561[0 /*13*/].f_1};
	Local_788[0 /*6*/].f_5 = joaat("prop_golf_putter_01");
	Local_788[1 /*6*/].f_1 = {Local_561[1 /*13*/].f_1};
	Local_788[1 /*6*/].f_5 = joaat("prop_golf_putter_01");
	Local_788[2 /*6*/].f_1 = {Local_561[2 /*13*/].f_1};
	Local_788[2 /*6*/].f_5 = joaat("prop_golf_wood_01");
	Local_788[3 /*6*/].f_1 = {Local_561[3 /*13*/].f_1};
	Local_788[3 /*6*/].f_5 = joaat("prop_golf_wood_01");
	Local_788[4 /*6*/].f_1 = {Local_561[4 /*13*/].f_1};
	Local_788[4 /*6*/].f_5 = joaat("prop_golf_iron_01");
	Local_788[5 /*6*/].f_1 = {Local_561[5 /*13*/].f_1};
	Local_788[5 /*6*/].f_5 = joaat("prop_golf_putter_01");
	Local_640[0 /*13*/].f_1 = {-1096.278f, -117.3159f, 40.537f};
	Local_640[0 /*13*/].f_4 = {-1095.01f, -56.45f, 43.83f};
	Local_640[0 /*13*/].f_7 = 343f;
	Local_640[0 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_640[1 /*13*/].f_1 = {-1115.548f, -104.4307f, 40.8407f};
	Local_640[1 /*13*/].f_4 = {-1139.619f, -114.8868f, 40.0996f};
	Local_640[1 /*13*/].f_7 = 45f;
	Local_640[1 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_755[0 /*6*/].f_1 = {-1100.818f, -103.591f, 40.874f};
	Local_755[0 /*6*/].f_4 = 99f;
	Local_755[0 /*6*/].f_5 = joaat("caddy");
	Local_755[1 /*6*/].f_1 = {-1114.088f, -97.6378f, 41.0175f};
	Local_755[1 /*6*/].f_4 = 233f;
	Local_755[1 /*6*/].f_5 = joaat("caddy");
}

// Position - 0x37372
void func_497(char *sParam0) { sParam0 = sParam0; }

// Position - 0x3737E
void func_498(var *uParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6) {
		if (func_485(uParam0->f_28[iVar0])) {
			entity::set_entity_proofs(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		if (func_485(uParam0->f_35[iVar0])) {
			entity::set_entity_proofs(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6) {
		if (func_485(uParam0->f_41[iVar0])) {
			entity::set_entity_proofs(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		entity::set_entity_proofs(player::player_ped_id(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		entity::set_entity_invincible(player::player_ped_id(), iParam1);
		if (iParam2) {
			weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
		}
	}
}

// Position - 0x37473
int func_499(var *uParam0, var *uParam1) {
	int iVar0[7];
	char *sVar8;
	int iVar9;
	int iVar10;

	sVar8 = "mini@golf";
	iVar0[0] = joaat("s_m_m_highsec_01");
	iVar0[1] = joaat("prop_golf_wood_01");
	iVar0[2] = joaat("prop_golf_wood_01");
	iVar0[3] = joaat("u_m_m_markfost");
	iVar0[4] = joaat("a_m_y_golfer_01");
	iVar0[5] = joaat("caddy");
	iVar0[6] = joaat("prop_golf_bag_01");
	switch (iLocal_91) {
	case 0:
		uParam0->f_27 = 1;
		uParam0->f_48 = "rcmnigel1d";
		func_490(uParam1);
		func_489(uParam1, -1313.714f, -27.2202f, 48.0314f);
		func_489(uParam1, -1294.066f, -27.0136f, 47.5724f);
		func_489(uParam1, -1069.844f, -143.769f, 39.7493f);
		func_489(uParam1, -925.2529f, -89.9079f, 38.3457f);
		func_489(uParam1, -1010.948f, 40.0643f, 49.9277f);
		func_489(uParam1, -1122.838f, 233.7037f, 64.7587f);
		func_489(uParam1, -1282.578f, 188.8798f, 59.2769f);
		func_489(uParam1, -1328.153f, 192.0178f, 57.8136f);
		func_489(uParam1, -1386.75f, 167.32f, 57.11f);
		func_489(uParam1, -1411.5f, 109.64f, 51.49f);
		func_489(uParam1, -1379.52f, 111.05f, 54.28f);
		func_489(uParam1, -1371.77f, 24.07f, 52.88f);
		func_489(uParam1, -1342.27f, 16.92f, 52.16f);
		func_488(uParam1);
		iVar9 = 0;
		while (iVar9 <= iVar0 - 1) {
			streaming::request_model(iVar0[iVar9]);
			iVar9++;
		}
		streaming::request_anim_dict(uParam0->f_48);
		streaming::request_anim_dict(sVar8);
		iLocal_91 = 1;
		break;

	case 1:
		if (!func_504(&iVar0) || !streaming::has_anim_dict_loaded(uParam0->f_48) ||
			!streaming::has_anim_dict_loaded(sVar8)) {
			return 0;
		}
		iLocal_91 = 2;
		break;

	case 2:
		func_500(41, 1);
		uParam0->f_28[0] = ped::create_ped(26, iVar0[3], -1096.855f, 67.6858f, 52.952f, 112f, 1, 1);
		ped::set_ped_prop_index(uParam0->f_28[0], 0, 0, 0, 0);
		ped::set_blocking_of_non_temporary_events(uParam0->f_28[0], 1);
		entity::set_entity_only_damaged_by_player(uParam0->f_28[0], 1);
		entity::set_entity_load_collision_flag(uParam0->f_28[0], 1);
		ped::set_ped_can_be_targetted(uParam0->f_28[0], 1);
		uParam0->f_41[0] = object::create_object(iVar0[1], -1096.855f, 67.6858f, 52.952f, 1, 1, 0);
		entity::attach_entity_to_entity(uParam0->f_41[0], uParam0->f_28[0],
										ped::get_ped_bone_index(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0,
										0, 0, 2, 1);
		ai::open_sequence_task(&iVar10);
		ai::task_play_anim(0, uParam0->f_48, "swing_a_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
		ai::task_play_anim(0, uParam0->f_48, "swing_b_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
		ai::set_sequence_to_repeat(iVar10, 1);
		ai::close_sequence_task(iVar10);
		ai::task_perform_sequence(uParam0->f_28[0], iVar10);
		ai::clear_sequence_task(&iVar10);
		uParam0->f_28[1] = ped::create_ped(26, iVar0[4], -1096.258f, 69.723f, 53.0107f, 163f, 1, 1);
		ai::task_play_anim(uParam0->f_28[1], uParam0->f_48, "idle_a_friend_watching", 8f, -8f, -1, 1, 0, 0, 0, 0);
		ped::set_blocking_of_non_temporary_events(uParam0->f_28[1], 1);
		uParam0->f_41[1] = object::create_object(iVar0[2], -1096.258f, 69.723f, 53.0107f, 1, 1, 0);
		entity::attach_entity_to_entity(uParam0->f_41[1], uParam0->f_28[1],
										ped::get_ped_bone_index(uParam0->f_28[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0,
										0, 0, 2, 1);
		uParam0->f_28[2] = ped::create_ped(26, iVar0[0], -1105.622f, 66.4609f, 53.07f, 118f, 1, 1);
		uParam0->f_28[3] = ped::create_ped(26, iVar0[0], -1090.09f, 64.3905f, 52.5607f, 238f, 1, 1);
		uParam0->f_28[4] = ped::create_ped(26, iVar0[0], -1093.736f, 73.8568f, 53.0388f, 319f, 1, 1);
		iVar9 = 2;
		while (iVar9 <= 4) {
			ped::set_blocking_of_non_temporary_events(uParam0->f_28[iVar9], 1);
			weapon::give_weapon_to_ped(uParam0->f_28[iVar9], joaat("weapon_pistol"), -1, 0, 1);
			entity::set_entity_only_damaged_by_player(uParam0->f_28[iVar9], 1);
			ped::set_ped_can_be_targetted(uParam0->f_28[iVar9], 1);
			ped::set_ped_dies_when_injured(uParam0->f_28[iVar9], 1);
			ai::set_ped_path_prefer_to_avoid_water(uParam0->f_28[iVar9], 1);
			ped::set_ped_model_is_suppressed(iVar0[0], 1);
			iVar9++;
		}
		uParam0->f_35[0] = vehicle::create_vehicle(iVar0[5], -1099.91f, 61.2608f, 52.8124f, 243f, 1, 1);
		vehicle::set_vehicle_on_ground_properly(uParam0->f_35[0], 1084227584);
		vehicle::set_vehicle_engine_on(uParam0->f_35[0], 1, 1, 0);
		entity::set_entity_health(uParam0->f_35[0], 1200);
		vehicle::set_vehicle_model_is_suppressed(iVar0[5], 1);
		uParam0->f_41[2] = object::create_object(iVar0[6], -1099.91f, 63.2608f, 52.8124f, 1, 1, 0);
		entity::attach_entity_to_entity(uParam0->f_41[2], uParam0->f_35[0], 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, 0, 0, 0,
										0, 2, 1);
		uParam0->f_35[1] = vehicle::create_vehicle(iVar0[5], -1102.335f, 75.7757f, 53.2591f, 293f, 1, 1);
		uParam0->f_35[2] = vehicle::create_vehicle(iVar0[5], -1103.023f, 65.6267f, 53.056f, 203f, 1, 1);
		iVar9 = 1;
		while (iVar9 <= 2) {
			vehicle::set_vehicle_on_ground_properly(uParam0->f_35[iVar9], 1084227584);
			iVar9++;
		}
		iVar9 = 0;
		while (iVar9 <= iVar0 - 1) {
			streaming::set_model_as_no_longer_needed(iVar0[iVar9]);
			iVar9++;
		}
		return 1;
	}
	return 0;
}

// Position - 0x37A5E
void func_500(int iParam0, int iParam1) {
	switch (iParam0) {
	case 37:
		if (iParam1) {
			iLocal_107 = func_503();
			ai::set_scenario_type_enabled("WORLD_HUMAN_GUARD_STAND", 0);
			ai::set_scenario_type_enabled("WORLD_HUMAN_CLIPBOARD", 0);
			ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", 0);
			func_502();
			gameplay::clear_area_of_peds(-1100.5f, 789.8f, 164.34f, 20f, 0);
			func_501(0);
		}
		else {
			ped::remove_scenario_blocking_area(iLocal_107, 0);
			ped::clear_ped_non_creation_area();
			func_501(1);
		}
		break;

	case 38:
		if (iParam1) {
			iLocal_107 =
				ped::add_scenario_blocking_area(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 0, 1, 1, 1);
			ai::set_scenario_type_enabled("WORLD_HUMAN_GUARD_STAND", 0);
			ai::set_scenario_type_enabled("WORLD_HUMAN_CLIPBOARD", 0);
			ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", 0);
			ped::set_ped_non_creation_area(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f);
			ped::set_ped_model_is_suppressed(joaat("s_m_y_doorman_01"), 1);
			ped::set_ped_model_is_suppressed(joaat("s_m_m_bouncer_01"), 1);
			gameplay::clear_area_of_peds(-558.2858f, 284.4073f, 81.1764f, 15f, 0);
			gameplay::clear_area_of_peds(-573.394f, 289.3696f, 79.06918f, 15f, 0);
			gameplay::clear_area(-554.17f, 307.68f, 82.84f, 2f, 1, 0, 0, 0);
			vehicle::set_all_vehicle_generators_active_in_area(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 0,
															   1);
			vehicle::remove_vehicles_from_generators_in_area(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 0);
			vehicle::set_vehicle_model_is_suppressed(joaat("gauntlet"), 1);
		}
		else {
			ped::remove_scenario_blocking_area(iLocal_107, 0);
			ai::set_scenario_type_enabled("WORLD_HUMAN_GUARD_STAND", 1);
			ai::set_scenario_type_enabled("WORLD_HUMAN_CLIPBOARD", 1);
			ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", 1);
			ped::clear_ped_non_creation_area();
			ped::set_ped_model_is_suppressed(joaat("s_m_y_doorman_01"), 0);
			ped::set_ped_model_is_suppressed(joaat("s_m_m_bouncer_01"), 0);
			vehicle::set_all_vehicle_generators_active_in_area(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 1,
															   1);
			vehicle::set_vehicle_model_is_suppressed(joaat("gauntlet"), 0);
		}
		break;

	case 39:
		if (iParam1) {
			iLocal_107 = ped::add_scenario_blocking_area(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 0,
														 1, 1, 1);
			ped::set_ped_non_creation_area(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f);
			vehicle::set_all_vehicle_generators_active_in_area(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f,
															   84.82043f, 0, 1);
			vehicle::remove_vehicles_from_generators_in_area(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f,
															 84.82043f, 0);
			gameplay::clear_area(-1035.73f, 365.44f, 68.91f, 35f, 1, 0, 0, 0);
			gameplay::clear_area_of_vehicles(-1035.73f, 365.44f, 68.91f, 27f, 0, 0, 0, 0, 0);
			gameplay::clear_area_of_peds(-1035.73f, 365.44f, 68.91f, 27f, 0);
		}
		else {
			ped::remove_scenario_blocking_area(iLocal_107, 0);
			ped::clear_ped_non_creation_area();
			vehicle::set_all_vehicle_generators_active_in_area(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f,
															   84.82043f, 1, 1);
		}
		break;

	case 40: break;

	case 41:
		if (iParam1) {
			iLocal_107 = ped::add_scenario_blocking_area(-1122.202f, 48.5724f, 51.4652f, -1076.233f, 92.1041f, 60.0617f,
														 0, 1, 1, 1);
			ped::set_ped_non_creation_area(-1122.202f, 48.5724f, 51.4652f, -1076.233f, 92.1041f, 60.0617f);
			gameplay::clear_area(-1096.855f, 67.6858f, 52.952f, 15f, 1, 0, 0, 0);
		}
		else {
			ped::remove_scenario_blocking_area(iLocal_107, 0);
			ped::clear_ped_non_creation_area();
		}
		break;

	case 42:
		if (iParam1) {
			iLocal_107 = ped::add_scenario_blocking_area(-1319.566f, -650.077f, 23.53715f, -1301.789f, -634.0721f,
														 38.18122f, 0, 1, 1, 1);
			ped::set_ped_non_creation_area(-1319.566f, -650.077f, 23.53715f, -1301.789f, -634.0721f, 38.18122f);
		}
		else {
			ped::remove_scenario_blocking_area(iLocal_107, 0);
			ped::clear_ped_non_creation_area();
		}
		break;
	}
}

// Position - 0x37E7B
void func_501(int iParam0) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar0 = {-1212.164f, 634.8231f, 100.5055f};
	vVar3 = {-1010.083f, 830.9487f, 250.4705f};
	vVar6 = {vVar0};
	vVar9 = {vVar3};
	pathfind::set_roads_in_angled_area(vVar6, vVar9, 25f, 0, iParam0, 1);
	vehicle::set_all_vehicle_generators_active_in_area(vVar0, vVar3, iParam0, 1);
	if (!iParam0) {
		vehicle::remove_vehicles_from_generators_in_area(vVar0, vVar3, 0);
		gameplay::clear_area(-1100.5f, 789.8f, 164.34f, 40f, 1, 0, 0, 0);
	}
}

// Position - 0x37F0C
void func_502() { ped::set_ped_non_creation_area(-1112.99f, 774.12f, 151.77f, -1077.99f, 853.65f, 187.66f); }

// Position - 0x37F36
var func_503() {
	return ped::add_scenario_blocking_area(-1212.16f, 634.82f, 138.5f, -1010.08f, 830.94f, 180.47f, 0, 1, 1, 1);
}

// Position - 0x37F64
int func_504(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= *iParam0 - 1) {
		if (!streaming::has_model_loaded((*iParam0)[iVar0])) {
			return 0;
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x37F95
bool func_505() {
	if (Global_91491 == 10 || Global_91491 == 9) {
		return true;
	}
	return false;
}

// Position - 0x37FB9
void func_506(int iParam0) {
	int iVar0;

	if (func_516()) {
	}
	func_236(iParam0);
	func_474();
	func_515();
	if (audio::is_audio_scene_active("NIGEL_1D_SCENE")) {
		audio::stop_audio_scene("NIGEL_1D_SCENE");
	}
	gameplay::clear_weather_type_persist();
	iVar0 = 0;
	while (iVar0 <= 3) {
		func_310(&Local_402[iVar0 /*13*/], 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2) {
		func_310(&Local_521[iVar0 /*13*/], 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2) {
		func_310(&Local_481[iVar0 /*13*/], 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5) {
		func_310(&Local_561[iVar0 /*13*/], 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		func_310(&Local_640[iVar0 /*13*/], 1, 0, 1);
		iVar0++;
	}
	func_310(&Local_468, 1, 0, 1);
	func_310(&Local_455, 1, 0, 1);
	iVar0 = 0;
	while (iVar0 <= 8) {
		func_366(&Local_694[iVar0 /*6*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		func_366(&Local_755[iVar0 /*6*/]);
		iVar0++;
	}
	func_366(&Local_749);
	iVar0 = 0;
	while (iVar0 <= 5) {
		func_514(&Local_788[iVar0 /*6*/], 0);
		iVar0++;
	}
	func_212(188, 1, 0, 1, 0);
	Global_33944 = 1;
	system::wait(0);
	ped::remove_scenario_blocking_area(iLocal_778, 0);
	ped::remove_scenario_blocking_area(iLocal_779, 0);
	if (iLocal_780 > -1) {
		pathfind::remove_navmesh_blocking_object(iLocal_780);
	}
	streaming::remove_anim_dict("rcmnigel1d");
	streaming::remove_anim_dict("mini@golf");
	gameplay::_set_unk_map_flag(0);
	func_507(&Local_108, 0, 0, 0);
	script::terminate_this_thread();
}

// Position - 0x38157
void func_507(var *uParam0, int iParam1, int iParam2, int iParam3) {
	func_512(uParam0, iParam1);
	func_510(uParam0, iParam2);
	func_508(uParam0, iParam3);
}

// Position - 0x38177
void func_508(var *uParam0, bool bParam1) { func_509(&uParam0->f_41, bParam1); }

// Position - 0x38189
void func_509(var *uParam0, bool bParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (bParam1) {
			func_451(&(*uParam0)[iVar0]);
		}
		else {
			func_514(&(*uParam0)[iVar0], 0);
		}
		iVar0++;
	}
}

// Position - 0x381C7
void func_510(var *uParam0, bool bParam1) { func_511(&uParam0->f_35, bParam1); }

// Position - 0x381D9
void func_511(var *uParam0, bool bParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (bParam1) {
			func_3(&(*uParam0)[iVar0]);
		}
		else {
			func_366(&(*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x38216
void func_512(var *uParam0, int iParam1) { func_513(&uParam0->f_28, iParam1); }

// Position - 0x38228
void func_513(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (iParam1 == 1) {
			func_4(&(*uParam0)[iVar0]);
		}
		else {
			func_310(&(*uParam0)[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

// Position - 0x38269
void func_514(int *iParam0, int iParam1) {
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

// Position - 0x382A4
void func_515() {
	int iVar0;

	Global_55851 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64) {
		Global_55852[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

// Position - 0x382CE
bool func_516() {
	int iVar0;

	iVar0 = func_231();
	if (iVar0 == -1) {
		return false;
	}
	if (!Global_100787[iVar0 /*10*/].f_4) {
		return false;
	}
	Global_100787[iVar0 /*10*/].f_4 = 0;
	ui::clear_additional_text(0, 1);
	ui::clear_additional_text(3, 1);
	ui::clear_additional_text(2, 1);
	if (!func_484(0)) {
		if (Global_100787[iVar0 /*10*/].f_5 && Global_100787[iVar0 /*10*/].f_6) {
			Global_100787[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_100787[iVar0 /*10*/].f_6 && !Global_100787[iVar0 /*10*/].f_5) {
			Global_100787[iVar0 /*10*/].f_6 = 1;
		}
	}
	return true;
}

// Position - 0x3836F
void func_517(int iParam0) {
	int iVar0;

	func_532();
	if (!func_531()) {
		iVar0 = func_231();
		if (iVar0 == -1) {
			return;
		}
		if (!Global_100787[iVar0 /*10*/].f_4) {
			return;
		}
		if (Global_100787[iVar0 /*10*/].f_5) {
			return;
		}
		if (Global_100787[iVar0 /*10*/].f_6) {
			return;
		}
		if (Global_85999 == Global_91528) {
			Global_101700.f_17533[iVar0 /*6*/].f_4++;
		}
		Global_85999 = Global_91528;
		if (iParam0) {
			func_190(iVar0, 1, 0);
			func_518(script::get_this_script_name(), iVar0);
		}
		else {
			if (Global_100787[iVar0 /*10*/].f_9 == -1) {
			}
			else {
				func_201(&Global_100787[iVar0 /*10*/].f_9);
			}
			func_189(iVar0, 1, 1, 0);
		}
		Global_100787[iVar0 /*10*/].f_6 = 1;
	}
}

// Position - 0x3843F
void func_518(char *sParam0, int iParam1) {
	if (Global_91491 != 12) {
		if (func_519(sParam0, 6, iParam1)) {
			Global_91491.f_1 = iParam1;
		}
	}
}

// Position - 0x38467
bool func_519(char *sParam0, int iParam1, int iParam2) {
	int iVar0;
	struct<32> Var1;
	int iVar33;

	func_49();
	func_530();
	Global_91491 = 0;
	StringCopy(&Global_91491.f_3, sParam0, 32);
	Global_91491.f_11 = iParam1;
	gameplay::_disable_automatic_respawn(1);
	gameplay::set_fade_out_after_arrest(0);
	gameplay::set_fade_out_after_death(0);
	func_491(1);
	func_528(1);
	func_525(0);
	func_524(1);
	gameplay::clear_bit(&Global_91491.f_20, 9);
	gameplay::clear_bit(&Global_91491.f_20, 6);
	gameplay::clear_bit(&Global_91491.f_20, 20);
	gameplay::clear_bit(&Global_91491.f_20, 21);
	gameplay::clear_bit(&Global_91491.f_20, 5);
	if (entity::does_entity_exist(player::player_ped_id())) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (entity::is_entity_upsidedown(iVar0)) {
					gameplay::set_bit(&Global_91491.f_20, 5);
				}
			}
		}
	}
	ui::clear_help(1);
	ui::clear_prints();
	func_523(0);
	func_52(1);
	Global_91491.f_2 = Global_91528;
	if (func_522()) {
		if (func_521()) {
			if (Global_91528 >= func_520()) {
				if (!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 16)) {
					if (Global_101700.f_8044.f_330[iParam2 /*6*/].f_1 >= 2) {
						Global_86000 = 1;
					}
				}
			}
		}
		else if (Global_91491.f_11 == 6) {
			func_192(iParam2, &Var1);
			if (Var1.f_31 == 1) {
				if (Global_101700.f_17533[iParam2 /*6*/].f_4 >= 2) {
					Global_86000 = 1;
				}
			}
		}
		else {
			iVar33 = func_434(script::get_this_script_name());
			if (iVar33 > -1) {
				if (Global_101700.f_23945.f_4[iVar33] >= 2) {
					Global_86000 = 1;
				}
			}
		}
	}
	return true;
}

// Position - 0x385F9
int func_520() {
	int iVar0;
	int iVar1;

	iVar0 = func_437(&Global_91491.f_3, 0);
	iVar1 = 0;
	if (iVar0 == 53) {
		iVar1 = 1;
	}
	return iVar1;
}

// Position - 0x3861D
bool func_521() {
	if (Global_91491.f_11 == 0 || Global_91491.f_11 == 1 || Global_91491.f_11 == 2 || Global_91491.f_11 == 3 ||
		Global_91491.f_11 == 4) {
		return true;
	}
	return false;
}

// Position - 0x3866D
bool func_522() {
	if (Global_91491.f_11 == 0 || Global_91491.f_11 == 1 || Global_91491.f_11 == 2 || Global_91491.f_11 == 6 ||
		Global_91491.f_11 == 3) {
		return true;
	}
	if (Global_91491.f_11 == 5) {
		if (func_434(&Global_91491.f_3) > -1) {
			return true;
		}
	}
	return false;
}

// Position - 0x386D9
void func_523(int iParam0) {
	ui::display_hud(iParam0);
	ui::display_radar(iParam0);
}

// Position - 0x386ED
void func_524(int iParam0) {
	if (iParam0 == 1) {
		ui::_0xFDB423997FA30340();
		gameplay::set_bit(&Global_91491.f_20, 3);
	}
	else if (gameplay::is_bit_set(Global_91491.f_20, 3)) {
		ui::_0xE1CD1E48E025E661();
		gameplay::clear_bit(&Global_91491.f_20, 3);
	}
}

// Position - 0x3872A
void func_525(int iParam0) {
	if (iParam0 == 1) {
		if (gameplay::is_bit_set(Global_91491.f_20, 4)) {
			func_527();
			gameplay::clear_bit(&Global_91491.f_20, 4);
		}
	}
	else {
		func_526();
		gameplay::set_bit(&Global_91491.f_20, 4);
	}
}

// Position - 0x38767
void func_526() { Global_17151.f_5 = 1; }

// Position - 0x38775
void func_527() { Global_17151.f_5 = 0; }

// Position - 0x38783
void func_528(int iParam0) {
	if (iParam0) {
		func_529();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_338(0)) {
			func_491(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x387E6
void func_529() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

// Position - 0x3880F
void func_530() {
	Global_86000 = 0;
	Global_86001 = 0;
}

// Position - 0x38821
int func_531() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}

// Position - 0x3885F
void func_532() {
	Global_91526 = 1;
	if (player::is_player_being_arrested(player::player_id(), 1)) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_244()) {
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
			switch (func_244()) {
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

// Position - 0x38954
void func_533(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
	}
}

// Position - 0x38966
void func_534() {
	int iVar0;

	iVar0 = func_231();
	if (iVar0 == -1) {
		return;
	}
	Global_100787[iVar0 /*10*/] = 1;
}

// Position - 0x38986
void func_535(var *uParam0) {
	func_536(&uParam0->f_28);
	func_536(&uParam0->f_35);
	func_536(&uParam0->f_41);
}

// Position - 0x389A6
void func_536(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (entity::does_entity_exist((*uParam0)[iVar0])) {
			entity::set_entity_as_mission_entity((*uParam0)[iVar0], 0, 1);
		}
		iVar0++;
	}
}

// Position - 0x389E0
int func_537(int iParam0) {
	if (!func_185(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}
