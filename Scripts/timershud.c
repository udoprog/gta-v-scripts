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
float fLocal_12 = 0f;
float fLocal_13 = 0f;
float fLocal_14 = 0f;
var uLocal_15 = 0;
var uLocal_16 = 0;
int iLocal_17 = 0;
char *sLocal_18 = NULL;
var uLocal_19 = 0;
var uLocal_20 = 0;
var uLocal_21 = 0;
var uLocal_22 = 0;
float fLocal_23 = 0f;
float fLocal_24 = 0f;
float fLocal_25 = 0f;
var uLocal_26 = 0;
var uLocal_27 = 0;
int iLocal_28 = 0;
float fLocal_29 = 0f;
var uLocal_30 = 0;
var uLocal_31 = 0;
var uLocal_32 = 0;
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
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
var uLocal_47 = 0;
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 0;
var uLocal_57 = 10;
var uLocal_58 = 0;
var uLocal_59 = 0;
var uLocal_60 = 0;
var uLocal_61 = 0;
var uLocal_62 = 0;
var uLocal_63 = 0;
var uLocal_64 = 0;
var uLocal_65 = 0;
var uLocal_66 = 0;
var uLocal_67 = 0;
var uLocal_68 = 2;
var uLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 8;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 0;
var uLocal_77 = 0;
var uLocal_78 = 0;
var uLocal_79 = 0;
var uLocal_80 = 8;
var uLocal_81 = 0;
var uLocal_82 = 0;
var uLocal_83 = 0;
var uLocal_84 = 0;
var uLocal_85 = 0;
var uLocal_86 = 0;
var uLocal_87 = 0;
var uLocal_88 = 0;
var uLocal_89 = 0;
float fLocal_90 = 0f;
var uLocal_91 = 0;
float fLocal_92 = 0f;
float fLocal_93 = 0f;
float fLocal_94 = 0f;
float fLocal_95 = 0f;
#pragma endregion //}

void __EntryFunction__() {
	var *uVar0;
	bool bVar2;

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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_90 = 0.05f + 0.275f - 0.01f;
	fLocal_94 = 0.952f;
	fLocal_95 = 0.949f;
	if (player::has_force_cleanup_occurred(32)) {
		script::terminate_this_thread();
	}
	gameplay::network_set_script_is_safe_for_network_game();
	while (true) {
		if (func_221(&uVar0, 5, 0)) {
			func_39();
		}
		if (Global_1354542.f_1 == 0) {
			bVar2 = true;
		}
		func_38();
		func_37();
		func_11();
		if (bVar2) {
			graphics::set_streamed_texture_dict_as_no_longer_needed("timerbar_lines");
			func_1();
			script::terminate_this_thread();
		}
		system::wait(0);
	}
}

// Position - 0xEA
void func_1() {
	int iVar0;
	struct<2> Var1;

	func_10();
	func_9();
	func_8();
	func_7();
	func_6();
	func_5();
	func_4();
	func_3();
	func_2();
	Global_1354542 = 0;
	Global_1354542.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 10) {
		Global_1354542.f_2[iVar0 /*2*/] = {Var1};
		Global_1354542.f_23[iVar0 /*2*/] = {Var1};
		Global_1354542.f_44[iVar0 /*2*/] = {Var1};
		Global_1354542.f_65[iVar0 /*2*/] = {Var1};
		Global_1354542.f_86[iVar0 /*2*/] = {Var1};
		Global_1354542.f_107[iVar0 /*2*/] = {Var1};
		Global_1354542.f_128[iVar0 /*2*/] = {Var1};
		Global_1354542.f_149[iVar0 /*2*/] = {Var1};
		Global_1354542.f_170[iVar0 /*2*/] = {Var1};
		Global_1354542.f_191[iVar0 /*2*/] = {Var1};
		Global_1354542.f_212[iVar0 /*2*/] = {Var1};
		Global_1354542.f_233[iVar0 /*2*/] = {Var1};
		Global_1354542.f_254[iVar0 /*2*/] = {Var1};
		Global_1354542.f_275[iVar0 /*2*/] = {Var1};
		Global_1354542.f_296[iVar0 /*2*/] = {Var1};
		Global_1354542.f_317[iVar0 /*2*/] = {Var1};
		Global_1354542.f_338[iVar0 /*2*/] = {Var1};
		Global_1354542.f_359[iVar0 /*2*/] = {Var1};
		Global_1354542.f_380[iVar0 /*2*/] = {Var1};
		Global_1354542.f_401[iVar0 /*2*/] = {Var1};
		Global_1354542.f_422[iVar0 /*2*/] = {Var1};
		Global_1354542.f_443[iVar0 /*2*/] = {Var1};
		Global_1354542.f_464[iVar0 /*2*/] = {Var1};
		Global_1354542.f_485[iVar0 /*2*/] = {Var1};
		Global_1354542.f_506[iVar0 /*2*/] = {Var1};
		Global_1354542.f_527[iVar0 /*2*/] = {Var1};
		Global_1354542.f_548[iVar0 /*2*/] = {Var1};
		Global_1354542.f_569[iVar0 /*2*/] = {Var1};
		Global_1354542.f_590[iVar0 /*2*/] = {Var1};
		Global_1354542.f_611[iVar0 /*2*/] = {Var1};
		Global_1354542.f_632[iVar0 /*2*/] = {Var1};
		Global_1354542.f_653[iVar0 /*2*/] = {Var1};
		Global_1354542.f_674[iVar0 /*2*/] = {Var1};
		Global_1354542.f_695[iVar0 /*2*/] = {Var1};
		Global_1354542.f_737[iVar0 /*2*/] = {Var1};
		Global_1354542.f_961[iVar0 /*2*/] = {Var1};
		Global_1354542.f_769[iVar0 /*2*/] = {Var1};
		Global_1354542.f_801[iVar0 /*2*/] = {Var1};
		Global_1354542.f_833[iVar0 /*2*/] = {Var1};
		Global_1354542.f_865[iVar0 /*2*/] = {Var1};
		Global_1354542.f_897[iVar0 /*2*/] = {Var1};
		Global_1354542.f_929[iVar0 /*2*/] = {Var1};
		Global_1354542.f_758[iVar0] = 0;
		Global_1354542.f_790[iVar0] = 0;
		Global_1354542.f_822[iVar0] = 0;
		Global_1354542.f_854[iVar0] = 0;
		Global_1354542.f_886[iVar0] = 0;
		Global_1354542.f_918[iVar0] = 0;
		Global_1354542.f_950[iVar0] = 0;
		Global_1354542.f_982[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 13) {
		Global_1354542.f_5703[iVar0] = 0;
		Global_1354542.f_5717[iVar0] = 0;
		Global_1354542.f_5731[iVar0] = 0;
		Global_1354542.f_5745[iVar0] = 0;
		iVar0++;
	}
	Global_1354542.f_5759 = 0;
	Global_1354542.f_5760 = 0f;
}

// Position - 0x4A5
void func_2() {
	struct<227> Var0;

	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	if (Global_2433124) {
		gameplay::_memmove(&Global_1354542.f_4683, &Var0, 227);
	}
	else {
		Global_1354542.f_4683 = {Var0};
	}
}

// Position - 0x507
void func_3() {
	struct<401> Var0;

	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	if (Global_2433124) {
		gameplay::_memmove(&Global_1354542.f_4282, &Var0, 401);
	}
	else {
		Global_1354542.f_4282 = {Var0};
	}
}

// Position - 0x5D9
void func_4() {
	struct<596> Var0;

	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_443 = 10;
	Var0.f_454 = 10;
	Var0.f_465 = 10;
	Var0.f_486 = 10;
	Var0.f_497 = 10;
	Var0.f_508 = 10;
	Var0.f_519 = 10;
	Var0.f_530 = 10;
	Var0.f_541 = 10;
	Var0.f_552 = 10;
	Var0.f_563 = 10;
	Var0.f_574 = 10;
	Var0.f_585 = 10;
	if (Global_2433124) {
		gameplay::_memmove(&Global_1354542.f_3686, &Var0, 596);
	}
	else {
		Global_1354542.f_3686 = {Var0};
	}
}

// Position - 0x6D3
void func_5() {
	struct<314> Var0;

	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	if (Global_2433124) {
		gameplay::_memmove(&Global_1354542.f_3372, &Var0, 314);
	}
	else {
		Global_1354542.f_3372 = {Var0};
	}
}

// Position - 0x76E
void func_6() {
	struct<358> Var0;

	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_347 = 10;
	if (Global_2433124) {
		gameplay::_memmove(&Global_1354542.f_3014, &Var0, 358);
	}
	else {
		Global_1354542.f_3014 = {Var0};
	}
}

// Position - 0x829
void func_7() {
	struct<475> Var0;

	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_248 = 10;
	Var0.f_259 = 10;
	Var0.f_420 = 10;
	Var0.f_431 = 10;
	Var0.f_442 = 10;
	Var0.f_453 = 10;
	Var0.f_464 = 10;
	if (Global_2433124) {
		gameplay::_memmove(&Global_1354542.f_2539, &Var0, 475);
	}
	else {
		Global_1354542.f_2539 = {Var0};
	}
}

// Position - 0x8CC
void func_8() {
	struct<719> Var0;

	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_33 = 10;
	Var0.f_44 = 10;
	Var0.f_55 = 10;
	Var0.f_66 = 10;
	Var0.f_77 = 10;
	Var0.f_88 = 10;
	Var0.f_99 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_293 = 10;
	Var0.f_304 = 10;
	Var0.f_315 = 10;
	Var0.f_326 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	Var0.f_401 = 10;
	Var0.f_412 = 10;
	Var0.f_423 = 10;
	Var0.f_434 = 10;
	Var0.f_445 = 10;
	Var0.f_456 = 10;
	Var0.f_467 = 10;
	Var0.f_478 = 10;
	Var0.f_489 = 10;
	Var0.f_500 = 10;
	Var0.f_511 = 10;
	Var0.f_522 = 10;
	Var0.f_533 = 10;
	Var0.f_544 = 10;
	Var0.f_555 = 10;
	Var0.f_576 = 10;
	Var0.f_587 = 10;
	Var0.f_598 = 10;
	Var0.f_609 = 10;
	Var0.f_620 = 10;
	Var0.f_631 = 10;
	Var0.f_642 = 10;
	Var0.f_653 = 10;
	Var0.f_664 = 10;
	Var0.f_675 = 10;
	Var0.f_686 = 10;
	Var0.f_697 = 10;
	Var0.f_708 = 10;
	if (Global_2433124) {
		gameplay::_memmove(&Global_1354542.f_1820, &Var0, 719);
	}
	else {
		Global_1354542.f_1820 = {Var0};
	}
}

// Position - 0xA7E
void func_9() {
	struct<345> Var0;

	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	if (Global_2433124) {
		gameplay::_memmove(&Global_1354542.f_1475, &Var0, 345);
	}
	else {
		Global_1354542.f_1475 = {Var0};
	}
}

// Position - 0xB22
void func_10() {
	struct<466> Var0;

	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	Var0.f_345 = 10;
	Var0.f_356 = 10;
	Var0.f_367 = 10;
	Var0.f_378 = 10;
	Var0.f_389 = 10;
	Var0.f_400 = 10;
	Var0.f_411 = 10;
	Var0.f_422 = 10;
	Var0.f_433 = 10;
	Var0.f_444 = 10;
	Var0.f_455 = 10;
	if (Global_2433124) {
		gameplay::_memmove(&Global_1354542.f_1009, &Var0, 466);
	}
	else {
		Global_1354542.f_1009 = {Var0};
	}
}

// Position - 0xC1E
void func_11() {
	int iVar0;

	Global_1354542 = 0;
	Global_1354542.f_994 = 0.725f;
	Global_1354542.f_993 = func_30();
	Global_1354542.f_1 = 0;
	Global_1354542.f_995 = 0;
	Global_1354542.f_996 = 0;
	Global_1354542.f_997 = 0;
	Global_1354542.f_998 = 0;
	Global_1354542.f_999 = 0;
	Global_1354542.f_1000 = 0;
	Global_1354542.f_1001 = 0;
	Global_1354542.f_1002 = 0;
	Global_1354542.f_1003 = 0;
	Global_1354542.f_1004 = 0;
	Global_1354542.f_1005 = 0;
	Global_1354542.f_1006 = 0;
	Global_1354542.f_1007 = 0;
	Global_1354542.f_1008 = 0;
	Global_2454051 = 0;
	Global_2452539 = 0;
	Global_2452540 = 0;
	Global_2454026 = 1;
	Global_2454745 = 0;
	if (func_29(3)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(3, iVar0) && func_27(3, iVar0)) {
				func_26(iVar0);
				func_25(3, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(6)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(6, iVar0) && func_27(6, iVar0)) {
				func_24(iVar0);
				func_25(6, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(7)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(7, iVar0) && func_27(7, iVar0)) {
				func_23(iVar0);
				func_25(7, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(4)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(4, iVar0) && func_27(4, iVar0)) {
				func_22(iVar0);
				func_25(4, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(5)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(5, iVar0) && func_27(5, iVar0)) {
				func_21(iVar0);
				func_25(5, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(1)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(1, iVar0) && func_27(1, iVar0)) {
				func_20(iVar0);
				func_25(1, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(0)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(0, iVar0) && func_27(0, iVar0)) {
				func_19(iVar0);
				func_25(0, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(2)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(2, iVar0) && func_27(2, iVar0) == 0) {
				func_18(iVar0);
				func_25(2, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(8)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(8, iVar0) && func_27(8, iVar0) == 0) {
				func_17(iVar0);
				func_25(8, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(9)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(9, iVar0) && func_27(9, iVar0) == 0) {
				func_16(iVar0);
				func_25(9, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(10)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(10, iVar0) && func_27(10, iVar0) == 0) {
				func_14(iVar0);
				func_25(10, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(11)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(11, iVar0) && func_27(11, iVar0) == 0) {
				func_13(iVar0);
				func_25(11, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(12)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(12, iVar0) && func_27(12, iVar0) == 0) {
				func_12(iVar0);
				func_25(12, iVar0);
			}
			iVar0++;
		}
	}
}

// Position - 0x1018
void func_12(int iParam0) {
	Global_1354542.f_5455[iParam0] = 0;
	Global_1354542.f_5455.f_11[iParam0] = 0;
	Global_1354542.f_5455.f_22[iParam0] = 0f;
	StringCopy(&Global_1354542.f_5455.f_33[iParam0 /*6*/], "", 24);
	Global_1354542.f_5455.f_94[iParam0] = 0;
	Global_1354542.f_5455.f_105[iParam0] = 0;
	Global_1354542.f_5455.f_116[iParam0] = 0;
	Global_1354542.f_5455.f_127[iParam0] = 0;
	Global_1354542.f_5455.f_138[iParam0] = 0;
	Global_1354542.f_5455.f_149[iParam0] = 0;
	Global_1354542.f_5455.f_160[iParam0] = 0;
	Global_1354542.f_5455.f_171[iParam0] = 0;
	Global_1354542.f_5455.f_182[iParam0] = 0;
	Global_1354542.f_5455.f_193[iParam0] = 0;
	Global_1354542.f_5455.f_204[iParam0] = 0;
	Global_1354542.f_5455.f_215[iParam0] = 0;
	Global_1354542.f_5455.f_226[iParam0] = 0;
	Global_1354542.f_5455.f_237[iParam0] = 2;
}

// Position - 0x111E
void func_13(int iParam0) {
	Global_1354542.f_5290[iParam0] = 0;
	Global_1354542.f_5290.f_11[iParam0] = 0;
	Global_1354542.f_5290.f_22[iParam0] = 0;
	Global_1354542.f_5290.f_33[iParam0] = 0;
	Global_1354542.f_5290.f_44[iParam0] = 0;
	Global_1354542.f_5290.f_55[iParam0] = 0;
	Global_1354542.f_5290.f_66[iParam0] = 0;
	Global_1354542.f_5290.f_77[iParam0] = 0;
	Global_1354542.f_5290.f_88[iParam0] = 0;
	Global_1354542.f_5290.f_99[iParam0] = 2;
	Global_1354542.f_5290.f_110[iParam0] = 0;
	Global_1354542.f_5290.f_121[iParam0] = 0;
	Global_1354542.f_5290.f_132[iParam0] = 0;
	Global_1354542.f_5290.f_143[iParam0] = 0;
	Global_1354542.f_5290.f_154[iParam0] = -1;
}

// Position - 0x11F6
void func_14(int iParam0) {
	Global_1354542.f_4943[iParam0] = 0;
	Global_1354542.f_4943.f_11[iParam0] = 0;
	StringCopy(&Global_1354542.f_4943.f_22[iParam0 /*16*/], "", 64);
	Global_1354542.f_4943.f_183[iParam0] = -1;
	Global_1354542.f_4943.f_194[iParam0] = 1;
	Global_1354542.f_4943.f_205[iParam0] = -1;
	Global_1354542.f_4943.f_216[iParam0] = 2;
	Global_1354542.f_4943.f_227[iParam0] = 0;
	Global_1354542.f_4943.f_238[iParam0] = 0;
	func_15(&Global_1354542.f_4943.f_249[iParam0 /*2*/]);
	Global_1354542.f_4943.f_270[iParam0] = -1;
	Global_1354542.f_4943.f_314[iParam0] = 0;
}

// Position - 0x12AD
void func_15(var *uParam0) { uParam0->f_1 = 0; }

// Position - 0x12BA
void func_16(int iParam0) {
	Global_1354542.f_4910[iParam0] = 0;
	Global_1354542.f_4910.f_11[iParam0] = 1;
	Global_1354542.f_4910.f_22[iParam0] = 2;
}

// Position - 0x12EA
void func_17(int iParam0) {
	Global_1354542.f_4683[iParam0] = 0f;
	StringCopy(&Global_1354542.f_4683.f_11[iParam0 /*16*/], "", 64);
	Global_1354542.f_4683.f_172[iParam0] = 0;
	Global_1354542.f_4683[iParam0] = 0f;
	Global_1354542.f_4683.f_183[iParam0] = 0;
	Global_1354542.f_4683.f_194[iParam0] = 0;
	Global_1354542.f_4683.f_205[iParam0] = 0;
	Global_1354542.f_4683.f_216[iParam0] = 2;
}

// Position - 0x1362
void func_18(int iParam0) {
	Global_1354542.f_1820[iParam0] = 0;
	Global_1354542.f_1820.f_11[iParam0] = 0;
	Global_1354542.f_1820.f_22[iParam0] = 0;
	Global_1354542.f_1820.f_33[iParam0] = 0;
	Global_1354542.f_1820.f_44[iParam0] = 0;
	Global_1354542.f_1820.f_55[iParam0] = 0;
	Global_1354542.f_1820.f_66[iParam0] = 0;
	Global_1354542.f_1820.f_77[iParam0] = 0;
	Global_1354542.f_1820.f_88[iParam0] = 0;
	StringCopy(&Global_1354542.f_1820.f_99[iParam0 /*16*/], "", 64);
	Global_1354542.f_1820.f_260[iParam0] = -1;
	Global_1354542.f_1820.f_271[iParam0] = -1;
	Global_1354542.f_1820.f_282[iParam0] = 18;
	Global_1354542.f_1820.f_293[iParam0] = 6;
	Global_1354542.f_1820.f_304[iParam0] = -1;
	Global_1354542.f_1820.f_315[iParam0] = 2;
	Global_1354542.f_1820.f_326[iParam0 /*3*/] = {0.5f, 0.5f, 0f};
	Global_1354542.f_1820.f_357[iParam0] = 0;
	Global_1354542.f_1820.f_368[iParam0] = 1;
	Global_1354542.f_1820.f_379[iParam0] = 1;
	Global_1354542.f_1820.f_390[iParam0] = 1;
	Global_1354542.f_1820.f_401[iParam0] = 1;
	Global_1354542.f_1820.f_412[iParam0] = 1;
	Global_1354542.f_1820.f_423[iParam0] = 1;
	Global_1354542.f_1820.f_434[iParam0] = 1;
	Global_1354542.f_1820.f_445[iParam0] = 1;
	Global_1354542.f_1820.f_456[iParam0] = 1;
	Global_1354542.f_1820.f_467[iParam0] = 1;
	Global_1354542.f_1820.f_478[iParam0] = 1;
	Global_1354542.f_1820.f_489[iParam0] = 1;
	Global_1354542.f_1820.f_500[iParam0] = 1;
	Global_1354542.f_1820.f_511[iParam0] = 1;
	Global_1354542.f_1820.f_522[iParam0] = 1;
	Global_1354542.f_1820.f_533[iParam0] = 1;
	func_15(&Global_1354542.f_1820.f_555[iParam0 /*2*/]);
	Global_1354542.f_1820.f_576[iParam0] = -1;
	Global_1354542.f_1820.f_609[iParam0] = 0;
}

// Position - 0x159D
void func_19(int iParam0) {
	Global_1354542.f_1009[iParam0] = 0;
	Global_1354542.f_1009.f_11[iParam0] = 0;
	StringCopy(&Global_1354542.f_1009.f_22[iParam0 /*16*/], "", 64);
	Global_1354542.f_1009.f_183[iParam0] = -1;
	Global_1354542.f_1009.f_194[iParam0] = 1;
	Global_1354542.f_1009.f_205[iParam0] = -1;
	Global_1354542.f_1009.f_216[iParam0] = 2;
	Global_1354542.f_1009.f_227[iParam0 /*3*/] = {0.5f, 0.5f, 0f};
	Global_1354542.f_1009.f_258[iParam0] = 0;
	Global_1354542.f_1009.f_269[iParam0] = 0;
	func_15(&Global_1354542.f_1009.f_280[iParam0 /*2*/]);
	Global_1354542.f_1009.f_301[iParam0] = -1;
	Global_1354542.f_1009.f_334[iParam0] = 0;
	Global_1354542.f_1009.f_345[iParam0] = 0;
	Global_1354542.f_1009.f_356[iParam0] = 0;
	Global_1354542.f_1009.f_444[iParam0] = 1;
	Global_1354542.f_1009.f_455[iParam0] = -1;
}

// Position - 0x16AD
void func_20(int iParam0) {
	Global_1354542.f_1475[iParam0] = 0;
	Global_1354542.f_1475.f_11[iParam0] = 0;
	StringCopy(&Global_1354542.f_1475.f_22[iParam0 /*16*/], "", 64);
	Global_1354542.f_1475.f_183[iParam0] = -1;
	Global_1354542.f_1475.f_194[iParam0] = 1;
	Global_1354542.f_1475.f_205[iParam0] = -1;
	Global_1354542.f_1475.f_216[iParam0] = 2;
	Global_1354542.f_1475.f_227[iParam0 /*3*/] = {0.5f, 0.5f, 0f};
	Global_1354542.f_1475.f_258[iParam0] = 0;
	Global_2501972[iParam0] = 0;
	Global_2501983[iParam0] = 0;
	Global_2501994[iParam0] = 0;
	Global_2502005[iParam0] = 0;
	Global_2502016[iParam0] = 0;
	Global_2502027[iParam0] = 0;
	Global_2502038[iParam0] = 0;
	Global_2502049[iParam0] = 0;
	Global_2502060[iParam0] = 0;
	Global_2502071[iParam0] = 0;
	Global_2502082[iParam0] = 0;
	Global_2502093[iParam0] = 0;
	Global_2502104[iParam0] = 0;
	Global_2502115[iParam0] = 0;
	Global_2502126[iParam0] = 0;
	Global_2502137[iParam0] = 0;
	func_15(&Global_1354542.f_1475.f_280[iParam0 /*2*/]);
	Global_1354542.f_1475.f_301[iParam0] = -1;
}

// Position - 0x17F3
void func_21(int iParam0) {
	Global_1354542.f_3372[iParam0] = 0;
	StringCopy(&Global_1354542.f_3372.f_11[iParam0 /*16*/], "", 64);
	Global_1354542.f_3372.f_172[iParam0] = -1;
	Global_1354542.f_3372.f_183[iParam0] = -1;
	Global_1354542.f_3372.f_194[iParam0] = 1;
	Global_1354542.f_3372.f_205[iParam0] = -1;
	Global_1354542.f_3372.f_216[iParam0] = 2;
	Global_1354542.f_3372.f_227[iParam0] = 0;
	func_15(&Global_1354542.f_3372.f_238[iParam0 /*2*/]);
	Global_1354542.f_3372.f_259[iParam0] = -1;
}

// Position - 0x188D
void func_22(int iParam0) {
	Global_1354542.f_3014[iParam0] = -1;
	StringCopy(&Global_1354542.f_3014.f_11[iParam0 /*16*/], "", 64);
	Global_1354542.f_3014.f_172[iParam0] = -1;
	Global_1354542.f_3014.f_183[iParam0] = -1;
	Global_1354542.f_3014.f_194[iParam0] = 1;
	Global_1354542.f_3014.f_205[iParam0] = -1;
	Global_1354542.f_3014.f_216[iParam0] = 2;
	Global_1354542.f_3014.f_227[iParam0] = 0;
	func_15(&Global_1354542.f_3014.f_238[iParam0 /*2*/]);
	Global_1354542.f_3014.f_259[iParam0] = -1;
}

// Position - 0x1927
void func_23(int iParam0) {
	Global_1354542.f_4282[iParam0] = 0;
	StringCopy(&Global_1354542.f_4282.f_11[iParam0 /*16*/], "", 64);
	Global_1354542.f_4282.f_172[iParam0] = -1;
	Global_1354542.f_4282.f_183[iParam0] = -1;
	Global_1354542.f_4282.f_194[iParam0] = 0;
	Global_1354542.f_4282.f_205[iParam0] = 1;
	Global_1354542.f_4282.f_216[iParam0] = 0;
	Global_1354542.f_4282.f_227[iParam0] = -1;
	Global_1354542.f_4282.f_249[iParam0] = 2;
	Global_1354542.f_4282.f_260[iParam0] = 0;
	func_15(&Global_1354542.f_4282.f_282[iParam0 /*2*/]);
	Global_1354542.f_4282.f_303[iParam0] = -1;
}

// Position - 0x19DF
void func_24(int iParam0) {
	Global_1354542.f_3686[iParam0] = 0;
	StringCopy(&Global_1354542.f_3686.f_11[iParam0 /*16*/], "", 64);
	Global_1354542.f_3686.f_172[iParam0] = -1;
	Global_1354542.f_3686.f_183[iParam0] = 1;
	Global_1354542.f_3686.f_194[iParam0] = -1;
	Global_1354542.f_3686.f_260[iParam0] = 2;
	Global_1354542.f_3686.f_271[iParam0] = 0;
	StringCopy(&Global_1354542.f_3686.f_282[iParam0 /*16*/], "", 64);
	Global_1354542.f_3686.f_443[iParam0] = 0;
	Global_1354542.f_3686.f_454[iParam0] = -1f;
	func_15(&Global_1354542.f_3686.f_465[iParam0 /*2*/]);
	Global_1354542.f_3686.f_486[iParam0] = -1;
	Global_1354542.f_3686.f_519[iParam0] = 0;
}

// Position - 0x1AAE
void func_25(int iParam0, int iParam1) { gameplay::clear_bit(&Global_1354542.f_5731[iParam0], iParam1); }

// Position - 0x1AC7
void func_26(int iParam0) {
	Global_1354542.f_2539[iParam0] = 0;
	StringCopy(&Global_1354542.f_2539.f_11[iParam0 /*16*/], "", 64);
	Global_1354542.f_2539.f_172[iParam0] = -1;
	Global_1354542.f_2539.f_183[iParam0] = 1;
	Global_1354542.f_2539.f_194[iParam0] = -1;
	Global_1354542.f_2539.f_205[iParam0] = 2;
	Global_1354542.f_2539.f_216[iParam0] = 0;
	func_15(&Global_1354542.f_2539.f_227[iParam0 /*2*/]);
	Global_1354542.f_2539.f_248[iParam0] = -1;
}

// Position - 0x1B52
int func_27(int iParam0, int iParam1) { return gameplay::is_bit_set(Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x1B6B
var func_28(int iParam0, int iParam1) { return gameplay::is_bit_set(Global_1354542.f_5731[iParam0], iParam1); }

// Position - 0x1B84
bool func_29(int iParam0) {
	if (Global_1354542.f_5703[iParam0] > 0) {
		return true;
	}
	return false;
}

// Position - 0x1BA0
float func_30() {
	float fVar0;

	fVar0 = 0.925f - 0.002f;
	fVar0 += -0.036f * IntToFloat(Global_1354542.f_995);
	if (Global_1354542.f_996 == 1) {
		fVar0 += -0.15f;
	}
	else if (Global_1354542.f_997 == 1) {
		fVar0 += -0.048f - 0.753f;
	}
	if (Global_1354542.f_1000 == 1) {
		fVar0 += -0.919f;
	}
	if (Global_1354542.f_1001 == 1) {
		fVar0 += -0.184f;
	}
	if (Global_1354542.f_1002 == 1) {
		fVar0 += -0.522f;
	}
	if (Global_1354542.f_998 == 1 && Global_1354542.f_999 == 0) {
		switch (func_31()) {
		case 0: fVar0 += -0.405f; break;

		case 2: fVar0 += -0.405f; break;

		case 1: fVar0 += -0.414f; break;

		default: fVar0 += -0.405f; break;
		}
	}
	return fVar0;
}

// Position - 0x1CA5
int func_31() {
	func_32();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x1CBE
void func_32() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_36(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_35(player::player_ped_id());
			if (func_34(iVar0) && (!func_33(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_34(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x1DBB
bool func_33(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x1DC9
bool func_34(int iParam0) { return iParam0 < 3; }

// Position - 0x1DD5
int func_35(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_36(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x1E12
int func_36(int iParam0) {
	if (func_34(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x1E3C
void func_37() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 12) {
		Global_1354542.f_5703[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x1E63
void func_38() { Global_2453939 = 0; }

// Position - 0x1E70
void func_39() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[12];
	int iVar16;
	int iVar17;

	if (ui::_0xB2A592B04648A9CB()) {
		if (Global_1354542.f_995 == 0) {
			func_220(1);
		}
	}
	func_216();
	if (func_211()) {
		if (func_210()) {
			Global_1353070.f_1146 = 1;
		}
		iVar0 = 0;
		while (iVar0 <= 9) {
			iVar16 = 0;
			if (func_27(7, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_3686.f_260[iVar0];
			}
			iVar16 = 1;
			if (func_27(3, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_2539.f_205[iVar0];
			}
			iVar16 = 2;
			if (func_27(4, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_3014.f_216[iVar0];
			}
			iVar16 = 3;
			if (func_27(5, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_3372.f_216[iVar0];
			}
			iVar16 = 4;
			if (func_27(1, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_1475.f_216[iVar0];
			}
			iVar16 = 5;
			if (func_27(0, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_1009.f_216[iVar0];
			}
			iVar16 = 6;
			if (func_27(6, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_3686.f_260[iVar0];
			}
			iVar16 = 7;
			if (func_27(2, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_1820.f_315[iVar0];
			}
			iVar16 = 8;
			if (func_27(8, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_4683.f_216[iVar0];
			}
			iVar16 = 9;
			if (func_27(9, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_4910.f_22[iVar0];
			}
			iVar16 = 10;
			if (func_27(10, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_4943.f_216[iVar0];
			}
			iVar16 = 11;
			if (func_27(11, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_5290.f_99[iVar0];
			}
			iVar16 = 12;
			if (func_27(12, iVar0)) {
				Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_5455.f_237[iVar0];
			}
			iVar0++;
		}
		iVar16 = 0;
		if (Global_1353070.f_1146 == 1) {
			iVar0 = 0;
			while (iVar0 <= 9) {
				iVar16 = 0;
				if (func_27(7, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_4282.f_249[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_4282.f_249[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_4282.f_249[iVar0] == 2 ||
							 Global_1354542.f_4282.f_249[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_4282.f_249[iVar0] == 13 ||
							 Global_1354542.f_4282.f_249[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_4282.f_249[iVar0];
						}
					}
				}
				iVar16 = 1;
				if (func_27(3, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_2539.f_205[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_2539.f_205[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_2539.f_205[iVar0] == 2 ||
							 Global_1354542.f_2539.f_205[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_2539.f_205[iVar0] == 13 ||
							 Global_1354542.f_2539.f_205[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_2539.f_205[iVar0];
						}
					}
				}
				iVar16 = 2;
				if (func_27(4, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_3014.f_216[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_3014.f_216[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_3014.f_216[iVar0] == 2 ||
							 Global_1354542.f_3014.f_216[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_3014.f_216[iVar0] == 13 ||
							 Global_1354542.f_3014.f_216[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_3014.f_216[iVar0];
						}
					}
				}
				iVar16 = 3;
				if (func_27(5, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_3372.f_216[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_3372.f_216[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_3372.f_216[iVar0] == 2 ||
							 Global_1354542.f_3372.f_216[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_3372.f_216[iVar0] == 13 ||
							 Global_1354542.f_3372.f_216[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_3372.f_216[iVar0];
						}
					}
				}
				iVar16 = 4;
				if (func_27(1, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_1475.f_216[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_1475.f_216[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_1475.f_216[iVar0] == 2 ||
							 Global_1354542.f_1475.f_216[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_1475.f_216[iVar0] == 13 ||
							 Global_1354542.f_1475.f_216[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_1475.f_216[iVar0];
						}
					}
				}
				iVar16 = 5;
				if (func_27(0, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_1009.f_216[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_1009.f_216[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_1009.f_216[iVar0] == 2 ||
							 Global_1354542.f_1009.f_216[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_1009.f_216[iVar0] == 13 ||
							 Global_1354542.f_1009.f_216[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_1009.f_216[iVar0];
						}
					}
				}
				iVar16 = 6;
				if (func_27(6, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_3686.f_260[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_3686.f_260[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_3686.f_260[iVar0] == 2 ||
							 Global_1354542.f_3686.f_260[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_3686.f_260[iVar0] == 13 ||
							 Global_1354542.f_3686.f_260[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_3686.f_260[iVar0];
						}
					}
				}
				iVar16 = 7;
				if (func_27(2, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_1820.f_315[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_1820.f_315[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_1820.f_315[iVar0] == 2 ||
							 Global_1354542.f_1820.f_315[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_1820.f_315[iVar0] == 13 ||
							 Global_1354542.f_1820.f_315[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_1820.f_315[iVar0];
						}
					}
				}
				iVar16 = 8;
				if (func_27(8, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_4683.f_216[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_4683.f_216[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_4683.f_216[iVar0] == 2 ||
							 Global_1354542.f_4683.f_216[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_4683.f_216[iVar0] == 13 ||
							 Global_1354542.f_4683.f_216[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_4683.f_216[iVar0];
						}
					}
				}
				iVar16 = 9;
				if (func_27(9, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_4910.f_22[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_4910.f_22[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_4910.f_22[iVar0] == 2 ||
							 Global_1354542.f_4910.f_22[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_4910.f_22[iVar0] == 13 ||
							 Global_1354542.f_4910.f_22[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_4910.f_22[iVar0];
						}
					}
				}
				iVar16 = 10;
				if (func_27(10, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_4943.f_216[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_4943.f_216[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_4943.f_216[iVar0] == 2 ||
							 Global_1354542.f_4943.f_216[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_4943.f_216[iVar0] == 13 ||
							 Global_1354542.f_4943.f_216[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_4943.f_216[iVar0];
						}
					}
				}
				iVar16 = 11;
				if (func_27(11, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_5290.f_99[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_5290.f_99[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_5290.f_99[iVar0] == 2 ||
							 Global_1354542.f_5290.f_99[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_5290.f_99[iVar0] == 13 ||
							 Global_1354542.f_5290.f_99[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_5290.f_99[iVar0];
						}
					}
				}
				iVar16 = 12;
				if (func_27(12, iVar0)) {
					Global_1353070.f_1147[iVar16 /*11*/][iVar0] = Global_1354542.f_5455.f_237[iVar0];
					if (Global_1353070.f_1147[iVar16 /*11*/][iVar0] != 1) {
						if (Global_1353070.f_1291[iVar16 /*11*/][iVar0] != Global_1354542.f_5455.f_237[iVar0] &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_5455.f_237[iVar0] == 2 ||
							 Global_1354542.f_5455.f_237[iVar0] != 2) &&
							(Global_1353070.f_1291[iVar16 /*11*/][iVar0] == 0 &&
								 Global_1354542.f_5455.f_237[iVar0] == 13 ||
							 Global_1354542.f_5455.f_237[iVar0] != 13)) {
							Global_1353070.f_1291[iVar16 /*11*/][iVar0] = Global_1354542.f_5455.f_237[iVar0];
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9) {
				iVar1 = 0;
				while (iVar1 <= 12) {
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] != Global_1353070.f_1291[iVar1 /*11*/][iVar0]) {
						Global_1353070.f_1291[iVar1 /*11*/][iVar0] = 0;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar2 = 0;
			while (iVar2 <= 11) {
				iVar3[iVar2] = 0;
				iVar2++;
			}
			iVar0 = 0;
			while (iVar0 <= 9) {
				iVar1 = 0;
				while (iVar1 <= 12) {
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] == 3) {
						iVar3[0] = 1;
					}
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] == 4) {
						iVar3[1] = 1;
					}
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] == 5) {
						iVar3[2] = 1;
					}
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] == 6) {
						iVar3[3] = 1;
					}
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] == 7) {
						iVar3[4] = 1;
					}
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] == 8) {
						iVar3[5] = 1;
					}
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] == 9) {
						iVar3[6] = 1;
					}
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] == 10) {
						iVar3[7] = 1;
					}
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] == 11) {
						iVar3[8] = 1;
					}
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] == 12) {
						iVar3[9] = 1;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9) {
				iVar1 = 0;
				while (iVar1 <= 12) {
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] == 2) {
						iVar2 = 0;
						while (iVar2 <= 11) {
							if (iVar3[iVar2] == 0) {
								Global_1353070.f_1147[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1353070.f_1291[iVar1 /*11*/][iVar0] = Global_1353070.f_1147[iVar1 /*11*/][iVar0];
								iVar2 = 12;
							}
							iVar2++;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9) {
				iVar1 = 0;
				while (iVar1 <= 12) {
					if (Global_1353070.f_1147[iVar1 /*11*/][iVar0] == 13) {
						iVar2 = 11;
						while (iVar2 >= 1) {
							if (iVar3[iVar2] == 0 && iVar3[iVar2 - 1] == 1) {
								Global_1353070.f_1147[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1353070.f_1291[iVar1 /*11*/][iVar0] = Global_1353070.f_1147[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							else if (iVar2 == 1 && iVar3[0] == 0) {
								Global_1353070.f_1147[iVar1 /*11*/][iVar0] = 3;
								iVar3[0] = 1;
								Global_1353070.f_1291[iVar1 /*11*/][iVar0] = Global_1353070.f_1147[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							iVar2 += -1;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			Global_1353070.f_1146 = 0;
		}
		if (Global_1354542.f_1000) {
			iVar17 = 84;
		}
		else {
			iVar17 = 66;
		}
		if (func_211()) {
			iVar1 = 0;
			while (iVar1 <= 10) {
				if (func_29(7)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[0 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[0 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[0 /*11*/][iVar0])) {
								func_202(1);
								if (Global_1354542.f_997 == 0) {
									graphics::_set_screen_draw_position(82, iVar17);
									graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								}
								func_186(iVar0, Global_1354542.f_4282[iVar0], &Global_1354542.f_4282.f_11[iVar0 /*16*/],
										 Global_1354542.f_4282.f_172[iVar0], Global_1354542.f_4282.f_194[iVar0],
										 Global_1354542.f_4282.f_216[iVar0], Global_1354542.f_4282.f_205[iVar0],
										 Global_1354542.f_4282.f_183[iVar0], Global_1354542.f_4282.f_227[iVar0],
										 Global_1354542.f_4282.f_260[iVar0], Global_1354542.f_4282.f_314[iVar0],
										 Global_1354542.f_4282.f_325[iVar0], Global_1354542.f_4282.f_357[iVar0],
										 Global_1354542.f_4282.f_238[iVar0], Global_1354542.f_4282.f_271[iVar0],
										 Global_1354542.f_4282.f_368[iVar0], Global_1354542.f_4282.f_379[iVar0],
										 Global_1354542.f_4282.f_390[iVar0]);
								if (Global_1354542.f_997 == 0) {
									graphics::_screen_draw_position_end();
								}
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(3)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[1 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[1 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[1 /*11*/][iVar0])) {
								func_202(1);
								graphics::_set_screen_draw_position(82, iVar17);
								graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								func_185(iVar0, Global_1354542.f_2539[iVar0], &Global_1354542.f_2539.f_11[iVar0 /*16*/],
										 Global_1354542.f_2539.f_183[iVar0], Global_1354542.f_2539.f_172[iVar0],
										 Global_1354542.f_2539.f_194[iVar0], Global_1354542.f_2539.f_216[iVar0],
										 &Global_1354542.f_2539.f_259[iVar0 /*16*/], Global_1354542.f_2539.f_420[iVar0],
										 Global_1354542.f_2539.f_453[iVar0], Global_1354542.f_2539.f_431[iVar0],
										 Global_1354542.f_2539.f_442[iVar0], Global_1354542.f_2539.f_464[iVar0]);
								graphics::_screen_draw_position_end();
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(4)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[2 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[2 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[2 /*11*/][iVar0])) {
								func_202(1);
								graphics::_set_screen_draw_position(82, iVar17);
								graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								func_184(iVar0, Global_1354542.f_3014[iVar0], Global_1354542.f_3014.f_172[iVar0],
										 &Global_1354542.f_3014.f_11[iVar0 /*16*/], Global_1354542.f_3014.f_194[iVar0],
										 Global_1354542.f_3014.f_183[iVar0], Global_1354542.f_3014.f_205[iVar0],
										 Global_1354542.f_3014.f_227[iVar0], Global_1354542.f_3014.f_270[iVar0],
										 Global_1354542.f_3014.f_281[iVar0], Global_1354542.f_3014.f_292[iVar0],
										 Global_1354542.f_3014.f_303[iVar0], Global_1354542.f_3014.f_314[iVar0],
										 Global_1354542.f_3014.f_325[iVar0], Global_1354542.f_3014.f_336[iVar0],
										 Global_1354542.f_3014.f_347[iVar0]);
								graphics::_screen_draw_position_end();
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(5)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[3 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[3 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[3 /*11*/][iVar0])) {
								func_202(1);
								graphics::_set_screen_draw_position(82, iVar17);
								graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								func_183(iVar0, Global_1354542.f_3372[iVar0], Global_1354542.f_3372.f_172[iVar0],
										 &Global_1354542.f_3372.f_11[iVar0 /*16*/], Global_1354542.f_3372.f_194[iVar0],
										 Global_1354542.f_3372.f_183[iVar0], Global_1354542.f_3372.f_205[iVar0],
										 Global_1354542.f_3372.f_227[iVar0], Global_1354542.f_3372.f_270[iVar0],
										 Global_1354542.f_3372.f_281[iVar0], Global_1354542.f_3372.f_292[iVar0],
										 Global_1354542.f_3372.f_303[iVar0]);
								graphics::_screen_draw_position_end();
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(1)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[4 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[4 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[4 /*11*/][iVar0])) {
								func_202(1);
								graphics::_set_screen_draw_position(82, iVar17);
								graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								func_173(iVar0, Global_1354542.f_1475[iVar0], Global_1354542.f_1475.f_11[iVar0],
										 &Global_1354542.f_1475.f_22[iVar0 /*16*/], Global_1354542.f_1475.f_194[iVar0],
										 Global_1354542.f_1475.f_205[iVar0], Global_1354542.f_1475.f_258[iVar0],
										 Global_1354542.f_1475.f_183[iVar0], Global_1354542.f_1475.f_227[iVar0 /*3*/],
										 Global_1354542.f_1475.f_227[iVar0 /*3*/].f_1,
										 Global_1354542.f_1475.f_312[iVar0], Global_1354542.f_1475.f_323[iVar0],
										 Global_1354542.f_1475.f_269[iVar0], Global_2501972[iVar0],
										 Global_2501983[iVar0], Global_2501994[iVar0], Global_2502005[iVar0],
										 Global_2502016[iVar0], Global_2502027[iVar0], Global_2502038[iVar0],
										 Global_2502049[iVar0], Global_1354542.f_1475.f_334[iVar0]);
								graphics::_screen_draw_position_end();
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(0)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[5 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[5 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[5 /*11*/][iVar0])) {
								func_202(1);
								graphics::_set_screen_draw_position(82, iVar17);
								graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								func_161(iVar0, Global_1354542.f_1009[iVar0], Global_1354542.f_1009.f_11[iVar0],
										 &Global_1354542.f_1009.f_22[iVar0 /*16*/], Global_1354542.f_1009.f_194[iVar0],
										 Global_1354542.f_1009.f_183[iVar0], Global_1354542.f_1009.f_227[iVar0 /*3*/],
										 Global_1354542.f_1009.f_227[iVar0 /*3*/].f_1,
										 Global_1354542.f_1009.f_258[iVar0], Global_1354542.f_1009.f_205[iVar0],
										 Global_1354542.f_1009.f_269[iVar0], Global_1354542.f_1009.f_312[iVar0],
										 Global_1354542.f_1009.f_323[iVar0], Global_1354542.f_1009.f_334[iVar0],
										 Global_1354542.f_1009.f_345[iVar0], Global_1354542.f_1009.f_356[iVar0],
										 Global_1354542.f_1009.f_367[iVar0], Global_1354542.f_1009.f_378[iVar0],
										 Global_1354542.f_1009.f_389[iVar0], Global_1354542.f_1009.f_400[iVar0],
										 Global_1354542.f_1009.f_411[iVar0], Global_1354542.f_1009.f_422[iVar0],
										 Global_1354542.f_1009.f_433[iVar0], Global_1354542.f_1009.f_444[iVar0],
										 Global_1354542.f_1009.f_455[iVar0]);
								graphics::_screen_draw_position_end();
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(6)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[6 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[6 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[6 /*11*/][iVar0])) {
								func_202(1);
								graphics::_set_screen_draw_position(82, iVar17);
								graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								func_154(iVar0, Global_1354542.f_3686[iVar0], &Global_1354542.f_3686.f_11[iVar0 /*16*/],
										 Global_1354542.f_3686.f_183[iVar0], Global_1354542.f_3686.f_172[iVar0],
										 Global_1354542.f_3686.f_194[iVar0], Global_1354542.f_3686.f_271[iVar0],
										 &Global_1354542.f_3686.f_282[iVar0 /*16*/], Global_1354542.f_3686.f_443[iVar0],
										 Global_1354542.f_3686.f_454[iVar0], Global_1354542.f_3686.f_497[iVar0],
										 Global_1354542.f_3686.f_508[iVar0], Global_1354542.f_3686.f_205[iVar0],
										 Global_1354542.f_3686.f_216[iVar0], Global_1354542.f_3686.f_227[iVar0],
										 Global_1354542.f_3686.f_238[iVar0], Global_1354542.f_3686.f_249[iVar0],
										 Global_1354542.f_3686.f_519[iVar0], Global_1354542.f_3686.f_530[iVar0],
										 Global_1354542.f_3686.f_541[iVar0], Global_1354542.f_3686.f_552[iVar0],
										 Global_1354542.f_3686.f_563[iVar0], Global_1354542.f_3686.f_574[iVar0],
										 Global_1354542.f_3686.f_585[iVar0]);
								graphics::_screen_draw_position_end();
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(2)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[7 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[7 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[7 /*11*/][iVar0])) {
								func_202(1);
								graphics::_set_screen_draw_position(82, iVar17);
								graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								func_142(iVar0, Global_1354542.f_1820[iVar0], &Global_1354542.f_1820.f_99[iVar0 /*16*/],
										 Global_1354542.f_1820.f_282[iVar0], Global_1354542.f_1820.f_293[iVar0],
										 Global_1354542.f_1820.f_260[iVar0], Global_1354542.f_1820.f_11[iVar0],
										 Global_1354542.f_1820.f_22[iVar0], Global_1354542.f_1820.f_33[iVar0],
										 Global_1354542.f_1820.f_44[iVar0], Global_1354542.f_1820.f_55[iVar0],
										 Global_1354542.f_1820.f_66[iVar0], Global_1354542.f_1820.f_77[iVar0],
										 Global_1354542.f_1820.f_88[iVar0], Global_1354542.f_1820.f_271[iVar0],
										 Global_1354542.f_1820.f_304[iVar0], Global_1354542.f_1820.f_357[iVar0],
										 Global_1354542.f_1820.f_326[iVar0 /*3*/],
										 Global_1354542.f_1820.f_326[iVar0 /*3*/].f_1,
										 Global_1354542.f_1820.f_368[iVar0], Global_1354542.f_1820.f_379[iVar0],
										 Global_1354542.f_1820.f_390[iVar0], Global_1354542.f_1820.f_401[iVar0],
										 Global_1354542.f_1820.f_412[iVar0], Global_1354542.f_1820.f_423[iVar0],
										 Global_1354542.f_1820.f_434[iVar0], Global_1354542.f_1820.f_445[iVar0],
										 Global_1354542.f_1820.f_456[iVar0], Global_1354542.f_1820.f_467[iVar0],
										 Global_1354542.f_1820.f_478[iVar0], Global_1354542.f_1820.f_489[iVar0],
										 Global_1354542.f_1820.f_500[iVar0], Global_1354542.f_1820.f_511[iVar0],
										 Global_1354542.f_1820.f_522[iVar0], Global_1354542.f_1820.f_533[iVar0],
										 Global_1354542.f_1820.f_587[iVar0], Global_1354542.f_1820.f_598[iVar0],
										 Global_1354542.f_1820.f_544[iVar0], Global_2502060[iVar0],
										 Global_2502071[iVar0], Global_2502082[iVar0], Global_2502093[iVar0],
										 Global_2502104[iVar0], Global_2502115[iVar0], Global_2502126[iVar0],
										 Global_2502137[iVar0], Global_1354542.f_1820.f_609[iVar0],
										 Global_1354542.f_1820.f_620[iVar0], Global_1354542.f_1820.f_631[iVar0],
										 Global_1354542.f_1820.f_642[iVar0], Global_1354542.f_1820.f_653[iVar0],
										 Global_1354542.f_1820.f_664[iVar0], Global_1354542.f_1820.f_675[iVar0],
										 Global_1354542.f_1820.f_686[iVar0], Global_1354542.f_1820.f_697[iVar0],
										 Global_1354542.f_1820.f_708[iVar0]);
								graphics::_screen_draw_position_end();
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(8)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[8 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[8 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[8 /*11*/][iVar0])) {
								func_202(1);
								graphics::_set_screen_draw_position(82, iVar17);
								graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								func_139(iVar0, &Global_1354542.f_4683.f_11[iVar0 /*16*/], Global_1354542.f_4683[iVar0],
										 Global_1354542.f_4683.f_172[iVar0], Global_1354542.f_4683.f_183[iVar0],
										 Global_1354542.f_4683.f_194[iVar0], Global_1354542.f_4683.f_205[iVar0]);
								graphics::_screen_draw_position_end();
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(9)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[9 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[9 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[9 /*11*/][iVar0])) {
								func_202(1);
								graphics::_set_screen_draw_position(82, iVar17);
								graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								func_133(iVar0, Global_1354542.f_4910[iVar0], Global_1354542.f_4910.f_11[iVar0]);
								graphics::_screen_draw_position_end();
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(10)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[10 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[10 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[10 /*11*/][iVar0])) {
								func_202(1);
								graphics::_set_screen_draw_position(82, iVar17);
								graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								func_101(iVar0, Global_1354542.f_4943[iVar0], Global_1354542.f_4943.f_11[iVar0],
										 &Global_1354542.f_4943.f_22[iVar0 /*16*/], Global_1354542.f_4943.f_194[iVar0],
										 Global_1354542.f_4943.f_183[iVar0], Global_1354542.f_4943.f_227[iVar0],
										 Global_1354542.f_4943.f_205[iVar0], Global_1354542.f_4943.f_238[iVar0],
										 Global_1354542.f_4943.f_281[iVar0], Global_1354542.f_4943.f_292[iVar0],
										 Global_1354542.f_4943.f_303[iVar0], Global_1354542.f_4943.f_314[iVar0],
										 Global_1354542.f_4943.f_325[iVar0], Global_1354542.f_4943.f_336[iVar0]);
								graphics::_screen_draw_position_end();
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(11)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[11 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[11 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[11 /*11*/][iVar0])) {
								func_202(1);
								graphics::_set_screen_draw_position(82, iVar17);
								graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								func_97(iVar0, Global_1354542.f_5290[iVar0], Global_1354542.f_5290.f_11[iVar0],
										Global_1354542.f_5290.f_22[iVar0], Global_1354542.f_5290.f_33[iVar0],
										Global_1354542.f_5290.f_44[iVar0], Global_1354542.f_5290.f_55[iVar0],
										Global_1354542.f_5290.f_66[iVar0], Global_1354542.f_5290.f_77[iVar0],
										Global_1354542.f_5290.f_88[iVar0], Global_1354542.f_5290.f_110[iVar0],
										Global_1354542.f_5290.f_121[iVar0], Global_1354542.f_5290.f_132[iVar0],
										Global_1354542.f_5290.f_143[iVar0], Global_1354542.f_5290.f_154[iVar0]);
								graphics::_screen_draw_position_end();
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(12)) {
					iVar0 = 0;
					while (iVar0 <= 9) {
						if (Global_1353070.f_1291[12 /*11*/][iVar0] == iVar1 + 3 ||
							Global_1353070.f_1147[12 /*11*/][iVar0] == 1) {
							if (func_206(Global_1353070.f_1147[12 /*11*/][iVar0])) {
								func_202(1);
								graphics::_set_screen_draw_position(82, iVar17);
								graphics::_screen_draw_position_ratio(fLocal_92, fLocal_93, fLocal_94, fLocal_95);
								func_41(iVar0, Global_1354542.f_5455[iVar0], Global_1354542.f_5455.f_22[iVar0],
										&Global_1354542.f_5455.f_33[iVar0 /*6*/], Global_1354542.f_5455.f_94[iVar0],
										Global_1354542.f_5455.f_11[iVar0], Global_1354542.f_5455.f_105[iVar0],
										Global_1354542.f_5455.f_116[iVar0], Global_1354542.f_5455.f_127[iVar0],
										Global_1354542.f_5455.f_138[iVar0], Global_1354542.f_5455.f_149[iVar0],
										Global_1354542.f_5455.f_160[iVar0], Global_1354542.f_5455.f_171[iVar0],
										Global_1354542.f_5455.f_182[iVar0], Global_1354542.f_5455.f_193[iVar0],
										Global_1354542.f_5455.f_204[iVar0], Global_1354542.f_5455.f_215[iVar0],
										Global_1354542.f_5455.f_226[iVar0]);
								graphics::_screen_draw_position_end();
								func_202(0);
							}
						}
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		func_40();
	}
}

// Position - 0x43A8
void func_40() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 12) {
		Global_1354542.f_5717[iVar0] = Global_1354542.f_5703[iVar0];
		iVar0++;
	}
}

// Position - 0x43D9
void func_41(int iParam0, int iParam1, float fParam2, char *sParam3, int iParam4, int iParam5, bool bParam6,
			 int iParam7, var *uParam8, var *uParam9, var *uParam10, var *uParam11, var *uParam12, int iParam13,
			 int iParam14, int iParam15, int iParam16, int iParam17) {
	int *iVar0;
	int *iVar11;
	var *uVar22;
	float *fVar24;

	if (func_27(12, iParam0)) {
		func_42(iParam0, &iVar0, &iVar11, &uVar22, &fVar24, iParam1, fParam2, sParam3, iParam4, iParam5, bParam6,
				iParam7, 1, uParam8, uParam9, uParam10, uParam11, uParam12, iParam13, iParam14, iParam15, iParam16,
				iParam17);
	}
}

// Position - 0x441D
void func_42(int iParam0, int *iParam1, int *iParam2, var *uParam3, float *fParam4, int iParam5, float fParam6,
			 char *sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, var *uParam13,
			 var *uParam14, var *uParam15, var *uParam16, var *uParam17, int iParam18, int iParam19, int iParam20,
			 int iParam21, int iParam22) {
	struct<8> Var0;
	int iVar9;
	struct<8> Var10;
	struct<8> Var19;
	struct<8> Var28;
	struct<8> Var37;
	struct<8> Var46;
	struct<8> Var55;
	struct<8> Var64;
	struct<8> Var73;
	struct<8> Var82;
	struct<8> Var91;
	int *iVar100;
	int *iVar101;
	int *iVar102;
	int *iVar103;
	int *iVar104;
	vector3 vVar105[24];
	vector3 vVar111;
	vector3 vVar117[24];
	vector3 vVar123;
	vector3 vVar129[24];
	vector3 vVar135;
	vector3 vVar141[24];
	vector3 vVar147;
	vector3 vVar153[24];
	vector3 vVar159;
	char[] cVar165[8];
	char[] cVar171[8];
	char[] cVar177[8];
	char[] cVar183[8];
	char[] cVar189[8];
	char[] cVar195[8];
	char[] cVar201[8];
	char[] cVar207[8];
	char[] cVar213[8];
	char[] cVar219[8];
	int iVar225;
	int iVar226;
	int iVar227;
	int iVar228;
	int iVar229;
	int iVar230;
	int iVar231;
	int iVar232;
	int iVar233;
	int iVar234;

	Global_1354542++;
	if (func_96()) {
		func_95(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_94(iParam1, 3);
		if (iParam5 < 1000000) {
			if (unk::_get_current_language_id() == 8 && fParam6 >= 100f &&
				gameplay::are_strings_equal("AMCH_KMHN", sParam7)) {
				func_93(iParam2, 0, 0);
			}
			else if (unk::_get_current_language_id() == 8 || unk::_get_current_language_id() == 9)
				&&(iParam5 > 999 || iParam9 > 999 || fParam6 > 1000f) { func_93(iParam2, 0, 0); }
			else if (iParam9 > 99) {
				func_92(iParam2, 0, 0);
			}
			else {
				func_91(iParam2, 0, 0);
			}
		}
		else if (unk::_get_current_language_id() == 8 && (gameplay::are_strings_equal("HUD_CASH", sParam7) ||
														  gameplay::are_strings_equal("HUD_CASH_NEG", sParam7))) {
			func_93(iParam2, 0, 0);
		}
		else {
			func_92(iParam2, 0, 0);
		}
		func_89(iParam1);
		func_88(iParam2);
		func_87(12, iParam0);
		if (Global_1354542 == 1) {
			func_86(iParam12);
		}
		func_80(iParam2, uParam3, fParam4, iParam12, iParam1);
		func_79(iParam2, iParam11);
		iParam2->f_6 = 255;
		graphics::request_streamed_texture_dict("TimerBars", 0);
		if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
			iVar9 = func_78();
			graphics::_set_2d_layer(iVar9);
			Var0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			if (iParam5 < 1000000) {
				Var0 += 0.079f;
				Var0.f_1 += 0.008f;
				Var0.f_2 += 0.157f;
				Var0.f_3 += 0.036f;
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			else {
				Var0 += 0.079f;
				Var0.f_1 += 0.01f;
				Var0.f_2 += 0.157f;
				Var0.f_3 += 0.033f;
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			if (func_77()) {
				Var0 += -0.025f;
				Var0.f_2 += 0.05f;
			}
			Global_1354542.f_5760 += Var0.f_3;
			func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_68(iParam1, 0);
			Var10 = *fParam4 + 0.095f;
			Var19 = *fParam4 + 0.095f;
			Var28 = *fParam4 + 0.072f;
			Var37 = *fParam4 + 0.072f;
			Var46 = *fParam4 + 0.049f;
			Var55 = *fParam4 + 0.049f;
			Var64 = *fParam4 + 0.026f;
			Var73 = *fParam4 + 0.026f;
			Var82 = *fParam4 + 0.003f;
			Var91 = *fParam4 + 0.003f;
			if (func_77()) {
				Var10.f_1 = fParam4->f_1 + 0.016f - 0.0005f;
				Var19.f_1 = fParam4->f_1 + 0.016f;
				Var28.f_1 = fParam4->f_1 + 0.016f - 0.0005f;
				Var37.f_1 = fParam4->f_1 + 0.016f;
				Var46.f_1 = fParam4->f_1 + 0.016f - 0.0005f;
				Var55.f_1 = fParam4->f_1 + 0.016f;
				Var64.f_1 = fParam4->f_1 + 0.016f - 0.0005f;
				Var73.f_1 = fParam4->f_1 + 0.016f;
				Var82.f_1 = fParam4->f_1 + 0.016f - 0.0005f;
				Var91.f_1 = fParam4->f_1 + 0.016f;
			}
			else {
				Var10.f_1 = fParam4->f_1 + 0.0185f;
				Var19.f_1 = fParam4->f_1 + 0.019f;
				Var28.f_1 = fParam4->f_1 + 0.0185f;
				Var37.f_1 = fParam4->f_1 + 0.019f;
				Var46.f_1 = fParam4->f_1 + 0.0185f;
				Var55.f_1 = fParam4->f_1 + 0.019f;
				Var64.f_1 = fParam4->f_1 + 0.0185f;
				Var73.f_1 = fParam4->f_1 + 0.019f;
				Var82.f_1 = fParam4->f_1 + 0.0185f;
				Var91.f_1 = fParam4->f_1 + 0.019f;
			}
			Var10.f_2 = 0.016f + 0.003f;
			Var19.f_2 = 0.016f + 0.003f;
			Var28.f_2 = 0.016f + 0.003f;
			Var37.f_2 = 0.016f + 0.003f;
			Var46.f_2 = 0.016f + 0.003f;
			Var55.f_2 = 0.016f + 0.003f;
			Var64.f_2 = 0.016f + 0.003f;
			Var73.f_2 = 0.016f + 0.003f;
			Var82.f_2 = 0.016f + 0.003f;
			Var91.f_2 = 0.016f + 0.003f;
			Var10.f_3 = 0.032f + 0.004f;
			Var19.f_3 = 0.032f + 0.004f;
			Var28.f_3 = 0.032f + 0.004f;
			Var37.f_3 = 0.032f + 0.004f;
			Var46.f_3 = 0.032f + 0.004f;
			Var55.f_3 = 0.032f + 0.004f;
			Var64.f_3 = 0.032f + 0.004f;
			Var73.f_3 = 0.032f + 0.004f;
			Var82.f_3 = 0.032f + 0.004f;
			Var91.f_3 = 0.032f + 0.004f;
			Var10.f_7 = 255;
			Var19.f_7 = 255;
			Var28.f_7 = 255;
			Var37.f_7 = 255;
			Var46.f_7 = 255;
			Var55.f_7 = 255;
			Var64.f_7 = 255;
			Var73.f_7 = 255;
			Var82.f_7 = 255;
			Var91.f_7 = 255;
			func_67(&Var10, 1);
			func_67(&Var19, 1);
			func_67(&Var28, 1);
			func_67(&Var37, 1);
			func_67(&Var46, 1);
			func_67(&Var55, 1);
			func_67(&Var64, 1);
			func_67(&Var73, 1);
			func_67(&Var82, 1);
			func_67(&Var91, 1);
			StringCopy(&cVar105, "", 24);
			StringCopy(&vVar111, "", 24);
			StringCopy(&cVar117, "", 24);
			StringCopy(&vVar123, "", 24);
			StringCopy(&cVar129, "", 24);
			StringCopy(&vVar135, "", 24);
			StringCopy(&cVar141, "", 24);
			StringCopy(&vVar147, "", 24);
			StringCopy(&cVar153, "", 24);
			StringCopy(&vVar159, "", 24);
			iVar225 = 1;
			iVar226 = 1;
			iVar227 = 1;
			iVar228 = 1;
			iVar229 = 1;
			iVar230 = 1;
			iVar231 = 1;
			iVar232 = 1;
			iVar233 = 1;
			iVar234 = 1;
			func_58(&iParam18, &Var10, &cVar105, &cVar165, &iVar225, &uParam13, &iVar100, &Var19, &vVar111, &cVar171,
					&iVar226, iParam11);
			func_58(&iParam19, &Var28, &cVar117, &cVar177, &iVar227, &uParam14, &iVar101, &Var37, &vVar123, &cVar183,
					&iVar228, iParam11);
			func_58(&iParam20, &Var46, &cVar129, &cVar189, &iVar229, &uParam15, &iVar102, &Var55, &vVar135, &cVar195,
					&iVar230, iParam11);
			func_58(&iParam21, &Var64, &cVar141, &cVar201, &iVar231, &uParam16, &iVar103, &Var73, &vVar147, &cVar207,
					&iVar232, iParam11);
			func_58(&iParam22, &Var82, &cVar153, &cVar213, &iVar233, &uParam17, &iVar104, &Var91, &vVar159, &cVar219,
					&iVar234, iParam11);
			func_57(iParam18, &Var10, &Var19, &cVar105, &cVar165, iVar225, &vVar111, &cVar171, iVar226);
			func_57(iParam19, &Var28, &Var37, &cVar117, &cVar177, iVar227, &vVar123, &cVar183, iVar228);
			func_57(iParam20, &Var46, &Var55, &cVar129, &cVar189, iVar229, &vVar135, &cVar195, iVar230);
			func_57(iParam21, &Var64, &Var73, &cVar141, &cVar201, iVar231, &vVar147, &cVar207, iVar232);
			func_57(iParam22, &Var82, &Var91, &cVar153, &cVar213, iVar233, &vVar159, &cVar219, iVar234);
			func_68(iParam2, 0);
			if (bParam10) {
				func_56(fParam4, iParam2, "???", "", 1, 2);
			}
			else if (func_55(sParam7)) {
				if (iParam9 == 0) {
					if (iParam8 == 0) {
						func_53(fParam4, iParam2, "NUMBER", iParam5, 2);
					}
					else {
						func_51(fParam4, iParam2, "NUMBER", fParam6, Global_2454026, 2);
					}
				}
				else {
					func_49(fParam4, iParam2, "TIMER_DASHES", iParam5, iParam9, 2, 0);
				}
			}
			else if (gameplay::are_strings_equal("HUD_CASH", sParam7) ||
					 gameplay::are_strings_equal("HUD_CASH_S", sParam7)) {
				sParam7 = "HUD_CASH_S";
				*iParam2 = 5;
				func_68(iParam2, 0);
				func_44(fParam4, iParam2, sParam7, iParam5, 2);
			}
			else if (gameplay::are_strings_equal("HUD_CASH_NEG", sParam7) ||
					 gameplay::are_strings_equal("HUD_CASH_NEG_S", sParam7)) {
				*iParam2 = 5;
				func_68(iParam2, 0);
				sParam7 = "HUD_CASH_NEG_S";
				func_44(fParam4, iParam2, sParam7, iParam5, 2);
			}
			else if (iParam8 == 0) {
				func_53(fParam4, iParam2, sParam7, iParam5, 2);
			}
			else {
				func_51(fParam4, iParam2, sParam7, fParam6, Global_2454026, 2);
			}
			func_43();
		}
	}
}

// Position - 0x4C67
void func_43() { graphics::_set_2d_layer(4); }

// Position - 0x4C74
void func_44(float *fParam0, int *iParam1, char *sParam2, int iParam3, int iParam4) {
	char *sVar0;

	sVar0 = sParam2;
	if (!func_55(sVar0)) {
		if (func_47()) {
			func_68(iParam1, 0);
			ui::set_text_justification(iParam4);
			ui::begin_text_command_display_text(sVar0);
			ui::add_text_component_integer(iParam3);
			ui::add_text_component_formatted_integer(iParam3, 1);
			ui::end_text_command_display_text(func_46(*fParam0), func_45(fParam0->f_1), 0);
		}
	}
}

// Position - 0x4CC5
float func_45(float fParam0) { return fParam0 + fLocal_13; }

// Position - 0x4CD2
float func_46(float fParam0) { return fParam0 + fLocal_12; }

// Position - 0x4CDF
bool func_47() {
	if (func_48()) {
		return true;
	}
	if (cam::is_screen_faded_out()) {
		return false;
	}
	if (cam::is_screen_fading_out() || cam::is_screen_fading_in()) {
		return false;
	}
	if (gameplay::is_frontend_fading()) {
		return false;
	}
	return true;
}

// Position - 0x4D1E
bool func_48() { return Global_1312438; }

// Position - 0x4D2A
void func_49(float *fParam0, int *iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	char *sVar0;

	sVar0 = sParam2;
	if (!func_55(sVar0)) {
		if (func_47()) {
			func_68(iParam1, 0);
			ui::set_text_centre(iParam6);
			ui::set_text_justification(iParam5);
			func_50(func_46(*fParam0), func_45(fParam0->f_1), sVar0, iParam3, iParam4);
		}
	}
}

// Position - 0x4D73
void func_50(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::add_text_component_integer(iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x4D96
void func_51(float *fParam0, int *iParam1, char *sParam2, float fParam3, int iParam4, int iParam5) {
	if (!func_55(sParam2)) {
		if (func_47()) {
			func_68(iParam1, 0);
			ui::set_text_justification(iParam5);
			func_52(func_46(*fParam0), func_45(fParam0->f_1), sParam2, fParam3, iParam4);
		}
	}
}

// Position - 0x4DD5
void func_52(float fParam0, float fParam1, char *sParam2, float fParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_float(fParam3, iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x4DF4
void func_53(float *fParam0, int *iParam1, char *sParam2, int iParam3, int iParam4) {
	char *sVar0;

	sVar0 = sParam2;
	if (!func_55(sVar0)) {
		if (func_47()) {
			func_68(iParam1, 0);
			ui::set_text_justification(iParam4);
			func_54(func_46(*fParam0), func_45(fParam0->f_1), sVar0, iParam3, 0);
		}
	}
}

// Position - 0x4E36
void func_54(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::end_text_command_display_text(fParam0, fParam1, iParam4);
}

// Position - 0x4E54
bool func_55(char *sParam0) {
	if (gameplay::is_string_null(sParam0)) {
		return true;
	}
	else if (gameplay::are_strings_equal(sParam0, "") || gameplay::are_strings_equal(sParam0, "0")) {
		return true;
	}
	return false;
}

// Position - 0x4E8C
void func_56(float *fParam0, int *iParam1, char *sParam2, char *sParam3, int iParam4, int iParam5) {
	char *sVar0;

	if (!func_55(sParam2)) {
		if (func_47()) {
			func_68(iParam1, 0);
			ui::set_text_justification(iParam5);
			if (func_55(sParam3)) {
				sVar0 = "STRING";
			}
			else {
				sVar0 = sParam3;
			}
			ui::begin_text_command_display_text(sVar0);
			ui::_set_notification_color_next(iParam4);
			ui::add_text_component_substring_player_name(sParam2);
			ui::end_text_command_display_text(func_46(*fParam0), func_45(fParam0->f_1), 0);
		}
	}
}

// Position - 0x4EED
void func_57(int iParam0, var *uParam1, var *uParam2, char *sParam3, char *sParam4, int iParam5, char *sParam6,
			 char *sParam7, int iParam8) {
	if (!gameplay::is_string_null_or_empty(sParam3)) {
		graphics::request_streamed_texture_dict(sParam3, 0);
		if (graphics::has_streamed_texture_dict_loaded(sParam3)) {
			func_67(uParam1, iParam5);
			func_69(sParam3, sParam4, uParam1, 1, 0, 4, 0);
		}
	}
	if (iParam0 == 18 || iParam0 == 19 || iParam0 == 20 || iParam0 == 21 || iParam0 == 22 || iParam0 == 23 ||
		iParam0 == 24 || iParam0 == 25 || iParam0 == 26) {
		if (!gameplay::is_string_null_or_empty(sParam6)) {
			graphics::request_streamed_texture_dict(sParam6, 0);
			if (graphics::has_streamed_texture_dict_loaded(sParam6)) {
				func_67(uParam2, iParam8);
				func_69(sParam6, sParam7, uParam2, 1, 0, 4, 0);
			}
		}
	}
}

// Position - 0x4FBB
void func_58(var *uParam0, var *uParam1, char *sParam2, char *sParam3, int *iParam4, var *uParam5, int *iParam6,
			 var *uParam7, char *sParam8, char *sParam9, int iParam10, int iParam11) {
	switch (*uParam0) {
	case 5:
		uParam1->f_3 += -0.009f;
		uParam1->f_2 += -0.002f;
		if (func_77()) {
			uParam1->f_1 += 0.0055f;
		}
		else {
			uParam1->f_1 += 0.0025f;
		}
		StringCopy(sParam2, "MPRPSymbol", 24);
		StringCopy(sParam3, "RP", 24);
		break;

	case 2:
		StringCopy(sParam2, "TimerBars", 24);
		StringCopy(sParam3, "Rockets", 24);
		break;

	case 3:
		StringCopy(sParam2, "MpSpecialRace", 24);
		StringCopy(sParam3, "HOMING_ROCKET", 24);
		break;

	case 1:
		StringCopy(sParam2, "TimerBars", 24);
		StringCopy(sParam3, "Spikes", 24);
		break;

	case 4:
		StringCopy(sParam2, "TimerBars", 24);
		StringCopy(sParam3, "Boost", 24);
		break;

	case 6:
		StringCopy(sParam2, "CrossTheLine", 24);
		StringCopy(sParam3, "Timer_LargeTick_32", 24);
		break;

	case 7:
		StringCopy(sParam2, "CrossTheLine", 24);
		StringCopy(sParam3, "Timer_LargeCross_32", 24);
		break;

	case 8:
		StringCopy(sParam2, "TimerBar_Icons", 24);
		StringCopy(sParam3, "Pickup_Beast", 24);
		*iParam4 = 118;
		break;

	case 9:
		StringCopy(sParam2, "MPSpecialRace", 24);
		StringCopy(sParam3, "MACHINE_GUN", 24);
		break;

	case 10:
		StringCopy(sParam2, "TimerBar_Icons", 24);
		StringCopy(sParam3, "Pickup_Random", 24);
		*iParam4 = 118;
		break;

	case 11:
		StringCopy(sParam2, "TimerBar_Icons", 24);
		StringCopy(sParam3, "Pickup_Slow_Time", 24);
		break;

	case 12:
		StringCopy(sParam2, "TimerBar_Icons", 24);
		StringCopy(sParam3, "Pickup_Swap", 24);
		*iParam4 = 118;
		break;

	case 13:
		StringCopy(sParam2, "TimerBar_Icons", 24);
		StringCopy(sParam3, "Pickup_Testosterone", 24);
		*iParam4 = 118;
		break;

	case 14:
		StringCopy(sParam2, "TimerBar_Icons", 24);
		StringCopy(sParam3, "Pickup_Thermal", 24);
		*iParam4 = 118;
		break;

	case 15:
		StringCopy(sParam2, "TimerBar_Icons", 24);
		StringCopy(sParam3, "Pickup_Weed", 24);
		*iParam4 = 118;
		break;

	case 16:
		StringCopy(sParam2, "TimerBar_Icons", 24);
		StringCopy(sParam3, "Pickup_Hidden", 24);
		*iParam4 = 118;
		break;

	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
		if (*uParam5 != func_66()) {
			*iParam6 = func_59(*uParam5);
			if (*iParam6 != 0) {
				StringCopy(sParam2, ped::get_pedheadshot_txd_string(*iParam6), 24);
				StringCopy(sParam3, ped::get_pedheadshot_txd_string(*iParam6), 24);
			}
		}
		uParam1->f_2 = 0.016f + 0.004f;
		uParam1->f_3 = 0.034f;
		if (*uParam0 == 18) {
			StringCopy(sParam8, "timerbar_sr", 24);
			StringCopy(sParam9, "timer_cross", 24);
			*iParam10 = iParam11;
			uParam1->f_7 = 127;
		}
		if (*uParam0 == 19) {
			StringCopy(sParam8, "timerbar_sr", 24);
			StringCopy(sParam9, "timer_tick", 24);
			*iParam10 = iParam11;
			uParam1->f_7 = 127;
		}
		if (*uParam0 == 20) {
			StringCopy(sParam8, "timerbar_sr", 24);
			StringCopy(sParam9, "timer_0", 24);
			*iParam10 = iParam11;
			uParam1->f_7 = 127;
		}
		if (*uParam0 == 21) {
			StringCopy(sParam8, "timerbar_sr", 24);
			StringCopy(sParam9, "timer_1", 24);
			*iParam10 = iParam11;
			uParam1->f_7 = 127;
		}
		if (*uParam0 == 22) {
			StringCopy(sParam8, "timerbar_sr", 24);
			StringCopy(sParam9, "timer_2", 24);
			*iParam10 = iParam11;
			uParam1->f_7 = 127;
		}
		if (*uParam0 == 23) {
			StringCopy(sParam8, "timerbar_sr", 24);
			StringCopy(sParam9, "timer_3", 24);
			*iParam10 = iParam11;
			uParam1->f_7 = 127;
		}
		if (*uParam0 == 24) {
			StringCopy(sParam8, "timerbar_sr", 24);
			StringCopy(sParam9, "timer_4", 24);
			*iParam10 = iParam11;
			uParam1->f_7 = 127;
		}
		if (*uParam0 == 25) {
			StringCopy(sParam8, "timerbar_sr", 24);
			StringCopy(sParam9, "timer_5", 24);
			*iParam10 = iParam11;
			uParam1->f_7 = 127;
		}
		if (*uParam0 == 26) {
			*iParam10 = iParam11;
			uParam1->f_7 = 127;
		}
		break;

	case 0:
		uParam1->f_7 = 0;
		uParam7->f_7 = 0;
		break;
	}
}

// Position - 0x5370
int func_59(int iParam0) {
	int iVar0;

	iVar0 = func_63(iParam0);
	if (iVar0 == -1) {
		func_60(iParam0, 1);
		return 0;
	}
	Global_1364072[iVar0 /*5*/].f_4 = 1;
	return Global_1364072[iVar0 /*5*/].f_2;
}

// Position - 0x53A6
void func_60(int iParam0, int iParam1) {
	if (!func_62(iParam0, 0, 1)) {
		return;
	}
	if (func_63(iParam0) != -1) {
		return;
	}
	if (Global_1364235) {
		if (iParam0 == Global_1364235.f_1) {
			return;
		}
	}
	if (func_61(iParam0)) {
		return;
	}
	if (Global_1364273 >= 32) {
		return;
	}
	Global_1364240[Global_1364273] = iParam0;
	Global_1364273++;
	if (iParam1) {
	}
}

// Position - 0x5412
bool func_61(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1364273) {
		if (Global_1364240[iVar0] == iParam0) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x5444
int func_62(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1) {
		if (network::network_is_player_active(iParam0)) {
			if (iParam1) {
				if (!player::is_player_playing(iParam0)) {
					return 0;
				}
			}
			if (iParam2) {
				if (!Global_2433125.f_3[iVar0]) {
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

// Position - 0x548E
int func_63(int iParam0) {
	int iVar0;

	if (!func_62(iParam0, 0, 1)) {
		return -1;
	}
	if (Global_1364233 == 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1364233) {
		if (Global_1364072[iVar0 /*5*/].f_1 == iParam0) {
			if (ped::is_pedheadshot_valid(Global_1364072[iVar0 /*5*/].f_2) &&
				ped::is_pedheadshot_ready(Global_1364072[iVar0 /*5*/].f_2)) {
				return iVar0;
			}
			func_64(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x550D
void func_64(int iParam0) {
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1364233) {
		return;
	}
	if (ped::is_pedheadshot_valid(Global_1364072[iParam0 /*5*/].f_2)) {
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1364072[iParam0 /*5*/].f_2 != 0) {
			StringCopy(&cVar16, ped::get_pedheadshot_txd_string(Global_1364072[iParam0 /*5*/].f_2), 64);
			ui::_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		ped::unregister_pedheadshot(Global_1364072[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1364233) {
		Global_1364072[iVar32 /*5*/] = {Global_1364072[iVar33 /*5*/]};
		iVar32++;
		iVar33++;
	}
	func_65(&Global_1364072[iVar32 /*5*/]);
	Global_1364233--;
}

// Position - 0x55C3
void func_65(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = func_66();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (network::network_is_game_in_progress()) {
		uParam0->f_3 = network::get_network_time();
	}
}

// Position - 0x55F0
int func_66() { return -1; }

// Position - 0x55F9
void func_67(var *uParam0, int iParam1) {
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	ui::get_hud_colour(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

// Position - 0x5621
void func_68(int *iParam0, int iParam1) {
	ui::set_text_font(*iParam0);
	if (iParam0->f_8 != 0f || iParam0->f_9 != 0f) {
		ui::set_text_wrap(iParam0->f_8, iParam0->f_9);
	}
	ui::set_text_scale(iParam0->f_1, iParam0->f_2);
	ui::set_text_colour(iParam0->f_3, iParam0->f_4, iParam0->f_5, iParam0->f_6);
	switch (iParam0->f_7) {
	case 0: break;

	case 1:
		ui::set_text_outline();
		ui::set_text_drop_shadow();
		break;

	case 3: ui::set_text_drop_shadow(); break;

	case 2: ui::set_text_outline(); break;
	}
	if (iParam1) {
		graphics::_set_2d_layer(4);
	}
}

// Position - 0x56BA
void func_69(char *sParam0, char *sParam1, var *uParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	struct<9> Var0;

	Var0 = {*uParam2};
	switch (iParam4) {
	case 0: func_76(&Var0); break;

	case 1: func_75(&Var0); break;

	case 5: func_74(&Var0); break;

	case 6: func_73(&Var0); break;

	case 7: func_72(&Var0); break;

	case 8: func_71(&Var0); break;

	case 9: func_70(&Var0); break;
	}
	if (func_47()) {
		graphics::_set_2d_layer(iParam5);
		if (iParam3 == 1) {
			graphics::draw_sprite(sParam0, sParam1, func_46(Var0), func_45(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8,
								  Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else {
			graphics::draw_sprite(sParam0, sParam1, func_46(Var0), func_45(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8,
								  Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		graphics::_set_2d_layer(4);
	}
}

// Position - 0x57BF
void func_70(var *uParam0) {
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

// Position - 0x57D9
void func_71(var *uParam0) { uParam0->f_7 = 2; }

// Position - 0x57E6
void func_72(var *uParam0) { uParam0->f_7 = 5; }

// Position - 0x57F3
void func_73(var *uParam0) {
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

// Position - 0x5810
void func_74(var *uParam0) {
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

// Position - 0x582D
void func_75(var *uParam0) {
	uParam0->f_4 -= 50;
	uParam0->f_5 -= 50;
	uParam0->f_6 -= 50;
}

// Position - 0x5856
void func_76(var *uParam0) {
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

// Position - 0x587E
bool func_77() {
	if (unk::_get_current_language_id() == 8 || unk::_get_current_language_id() == 9 ||
		unk::_get_current_language_id() == 10) {
		return true;
	}
	return false;
}

// Position - 0x58AF
int func_78() {
	int iVar0;

	iVar0 = 1;
	if (Global_1354542.f_1003) {
		iVar0 = 7;
	}
	return iVar0;
}

// Position - 0x58C9
void func_79(var *uParam0, int iParam1) {
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	ui::get_hud_colour(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
	uParam0->f_6 = uVar3;
}

// Position - 0x58F7
void func_80(var *uParam0, var *uParam1, var *uParam2, int iParam3, var *uParam4) {
	float fVar0;

	fVar0 = func_85(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_84(iParam3);
	uParam1->f_1 += func_83(uParam4);
	*uParam2 = 0.795f;
	uParam2->f_1 = uParam1->f_1 + func_82(uParam0);
	func_81(iParam3, -fVar0);
}

// Position - 0x5948
void func_81(int iParam0, float fParam1) {
	switch (iParam0) {
	case 1: Global_1354542.f_993 += fParam1; break;

	case 2: Global_1354542.f_994 += fParam1; break;
	}
}

// Position - 0x598B
float func_82(var *uParam0) {
	float fVar0;

	switch (uParam0->f_10) {
	case 9: fVar0 = -0.01f - 0.005f + 0.004f - 0.0005f - 0.002f + 0.002f + 0.0005f; break;

	case 10: fVar0 = -0.025f - 0.003f + 0.002f - 0.006f + 0.001f; break;

	case 11: fVar0 = -0.047f - 0.004f + 0.012f + 0.001f + 0.007f; break;

	case 12: fVar0 = -0.019f + 0.011f + 0.004f; break;

	case 13: fVar0 = -0.012f + 0.001f; break;

	case 14: fVar0 = -0.012f + 0.001f + 0.001f; break;

	case 15: fVar0 = -0.035f - 0.008f + 0.006f + 0.013f + 0.0005f; break;

	case 16: fVar0 = -0.01f - 0.005f + 0.004f - 0.001f + 0.001f; break;

	case 17: fVar0 = -0.01f - 0.005f + 0.004f + 0.005f + 0.0007f; break;

	case 18: fVar0 = -0.01f - 0.005f + 0.004f + 0.005f + 0.003f; break;

	case 6: fVar0 = -0.01f - 0.005f + 0.004f + 0.005f; break;

	case 19: fVar0 = -0.01f - 0.005f + 0.004f + 0.005f; break;
	}
	if (func_77()) {
		fVar0 += 0.003f;
	}
	return fVar0;
}

// Position - 0x5B65
float func_83(var *uParam0) {
	float fVar0;

	switch (uParam0->f_10) {
	case 6: fVar0 = 0f; break;
	}
	return fVar0;
}

// Position - 0x5B84
float func_84(int iParam0) {
	switch (iParam0) {
	case 1: return Global_1354542.f_993;

	case 2: return Global_1354542.f_994;
	}
	return Global_1354542.f_993;
}

// Position - 0x5BC0
float func_85(var *uParam0) {
	float fVar0;

	switch (uParam0->f_10) {
	case 9: fVar0 = 0.035f + 0.023f - 0.003f + 0.001f - 0.007f - 0.012f + 0.001f + 0.0018f + 0.0005f - 0.0005f; break;

	case 10: fVar0 = 0.035f + 0.023f - 0.003f + 0.001f - 0.007f + 0.003f + 0.002f - 0.004f; break;

	case 11: fVar0 = 0.065f + 0.009f - 0.006f - 0.009f + 0.001f - 0.009f; break;

	case 12: fVar0 = 0f; break;

	case 13: fVar0 = 0.065f + 0.009f; break;

	case 14: fVar0 = 0.065f + 0.009f - 0.015f - 0.022f; break;

	case 15: fVar0 = 0f; break;

	case 16: fVar0 = 0.035f + 0.023f - 0.003f + 0.001f - 0.007f - 0.012f + 0.001f + 0.002f + 0.0003f; break;

	case 17: fVar0 = 0.035f + 0.023f - 0.003f + 0.001f - 0.007f - 0.012f - 0.0005f; break;

	case 18: fVar0 = 0.035f + 0.023f - 0.003f + 0.001f - 0.007f - 0.012f; break;

	case 19: fVar0 = 0.035f + 0.023f - 0.003f + 0.001f - 0.007f - 0.012f; break;
	}
	return fVar0;
}

// Position - 0x5DA1
void func_86(int iParam0) {
	switch (iParam0) {
	case 1: Global_1354542.f_993 = func_30(); break;

	case 2: Global_1354542.f_994 = func_30(); break;
	}
}

// Position - 0x5DD8
void func_87(int iParam0, int iParam1) { gameplay::set_bit(&Global_1354542.f_5731[iParam0], iParam1); }

// Position - 0x5DF1
void func_88(var *uParam0) {
	float fVar0;

	fVar0 = 0.95f - 0.047f + 0.001f + 0.047f - 0.002f + 0.001f;
	uParam0->f_9 = fVar0;
	if (Global_1354542.f_997 == 0) {
		switch (uParam0->f_10) {
		case 11: uParam0->f_9 += 0.001f; break;

		case 10: uParam0->f_9 += 0.001f; break;

		default: break;
		}
	}
	if (Global_1354542.f_997 == 1) {
		uParam0->f_9 = fVar0;
		uParam0->f_9 += -0.113f;
	}
}

// Position - 0x5E88
void func_89(var *uParam0) {
	float fVar0;

	fVar0 = 0.88f - 0.062f + 0.026f + 0.027f + 0.03f;
	if (Global_1354542.f_1004) {
		fVar0 += -0.034f;
		if (graphics::get_is_widescreen() == 0) {
			fVar0 += -0.02f;
		}
	}
	if (Global_1354542.f_1005 && Global_1354542.f_1004 == 0) {
		fVar0 += -0.015f - 0.003f;
		if (graphics::get_is_widescreen() == 0) {
			fVar0 += -0.017f;
		}
	}
	if (Global_1354542.f_1006 && Global_1354542.f_1005 == 0 && Global_1354542.f_1004 == 0) {
		fVar0 += -0.038f;
	}
	if (Global_1354542.f_997 == 1) {
		fVar0 += -0.113f;
	}
	if (unk::_get_current_language_id() == 7 && unk::_get_current_language_id() == 1 &&
		!graphics::get_is_widescreen() && Global_1354542.f_1006) {
		fVar0 += -0.007f;
	}
	if (Global_1354542.f_1007) {
		if (unk::_get_current_language_id() != 0 && unk::_get_current_language_id() != 5 &&
			unk::_get_current_language_id() != 6 && unk::_get_current_language_id() != 9 &&
			unk::_get_current_language_id() != 11) {
			fVar0 += -0.009f;
		}
		else {
			fVar0 += -0.009f;
		}
	}
	if (Global_1354542.f_1008) {
		if (func_90()) {
			fVar0 += -0.03f;
		}
		else if (unk::_get_current_language_id() != 0 && unk::_get_current_language_id() != 5 &&
				 unk::_get_current_language_id() != 6 && unk::_get_current_language_id() != 9 &&
				 unk::_get_current_language_id() != 11) {
			fVar0 += -0.024f;
		}
		else {
			fVar0 += -0.019f;
		}
	}
	if (unk::_get_current_language_id() == 8 || unk::_get_current_language_id() == 7 ||
		unk::_get_current_language_id() == 1)
		&&Global_1354542.f_1005 == 0 && Global_1354542.f_1004 == 0 && Global_1354542.f_997 == 0 &&
			Global_1354542.f_1006 == 0 && Global_1354542.f_1007 == 0 && Global_1354542.f_1008 == 0 &&
			gameplay::is_pc_version() {
			fVar0 += -0.005f;
		}
	uParam0->f_9 = fVar0;
}

// Position - 0x60DB
bool func_90() {
	int iVar0;
	var uVar1;

	if (gameplay::is_pc_version()) {
		graphics::_get_active_screen_resolution(&iVar0, &uVar1);
		if (iVar0 <= 1024) {
			return true;
		}
	}
	return false;
}

// Position - 0x60FF
void func_91(var *uParam0, int iParam1, int iParam2) {
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.469f + 0.096f - 0.017f + 0.022f - 0.062f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 16;
}

// Position - 0x6164
void func_92(var *uParam0, int iParam1, int iParam2) {
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.469f + 0.096f - 0.017f + 0.022f - 0.062f - 0.095f - 0.008f - 0.012f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 17;
}

// Position - 0x61DB
void func_93(var *uParam0, int iParam1, int iParam2) {
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.469f + 0.096f - 0.017f + 0.022f - 0.062f - 0.095f - 0.008f - 0.012f - 0.06f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 18;
}

// Position - 0x6258
void func_94(var *uParam0, int iParam1) {
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

// Position - 0x62A4
void func_95(var *uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6,
			 int iParam7, int iParam8, float fParam9) {
	*uParam0 = fParam1;
	uParam0->f_1 = fParam2 + fParam9;
	uParam0->f_2 = fParam3;
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
}

// Position - 0x62DE
bool func_96() { return true; }

// Position - 0x62E7
void func_97(int iParam0, var uParam1, var *uParam2, var *uParam3, var *uParam4, var *uParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14) {
	int *iVar0;
	var *uVar11;
	var *uVar22;
	var *uVar24;

	if (func_27(11, iParam0)) {
		func_98(iParam0, &iVar0, &uVar11, &uVar22, &uVar24, uParam1, 1, uParam2, uParam3, uParam4, uParam5, iParam6,
				iParam7, iParam8, iParam9, bParam10, bParam11, bParam12, bParam13, iParam14);
	}
}

// Position - 0x6325
void func_98(int iParam0, int *iParam1, var *uParam2, var *uParam3, var *uParam4, var uParam5, int iParam6,
			 var *uParam7, var *uParam8, var *uParam9, var *uParam10, int iParam11, int iParam12, int iParam13,
			 int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19) {
	struct<8> Var0;
	bool bVar9;
	int iVar10;
	struct<8> Var11;
	struct<8> Var20;
	struct<8> Var29;
	struct<8> Var38;
	struct<8> Var47;
	struct<8> Var56;
	struct<8> Var65;
	struct<8> Var74;
	int *iVar83;
	int *iVar84;
	int *iVar85;
	int *iVar86;
	vector3 vVar87[24];
	vector3 vVar93;
	vector3 vVar99[24];
	vector3 vVar105;
	vector3 vVar111[24];
	vector3 vVar117;
	vector3 vVar123[24];
	vector3 vVar129;
	char[] cVar135[8];
	char[] cVar141[8];
	char[] cVar147[8];
	char[] cVar153[8];
	char[] cVar159[8];
	char[] cVar165[8];
	char[] cVar171[8];
	char[] cVar177[8];
	int iVar183;
	int iVar184;
	int iVar185;
	int iVar186;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;

	Global_1354542++;
	if (func_96()) {
		func_87(11, iParam0);
		func_94(iParam1, 0);
		func_89(iParam1);
		if (Global_1354542 == 1) {
			func_86(iParam6);
		}
		func_91(uParam2, 0, 0);
		func_88(uParam2);
		func_80(uParam2, uParam3, uParam4, iParam6, iParam1);
		func_95(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (iParam19 == 0) {
			func_100(iParam0);
		}
		if (func_99(iParam19, &Global_1354542.f_338[iParam0 /*2*/], &Global_1354542.f_359[iParam0 /*2*/])) {
			bVar9 = true;
		}
		else {
			bVar9 = false;
		}
		graphics::request_streamed_texture_dict("TimerBars", 0);
		if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
			iVar10 = func_78();
			graphics::_set_2d_layer(iVar10);
			Var0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			Var0 += 0.079f;
			Var0.f_1 += 0.008f;
			Var0.f_2 += 0.157f;
			Var0.f_3 += 0.036f;
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_77()) {
				Var0 += -0.025f;
				Var0.f_2 += 0.05f;
			}
			Global_1354542.f_5760 += Var0.f_3;
			func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_68(iParam1, 0);
			Var11 = *uParam4 + 0.145f + 0.001f;
			Var20 = *uParam4 + 0.145f + 0.001f;
			Var29 = *uParam4 + 0.123f;
			Var38 = *uParam4 + 0.123f;
			Var47 = *uParam4 + 0.101f;
			Var56 = *uParam4 + 0.101f;
			Var65 = *uParam4 + 0.078f;
			Var74 = *uParam4 + 0.078f;
			if (func_77()) {
				Var11.f_1 = uParam4->f_1 + 0.016f - 0f;
				Var20.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				Var29.f_1 = uParam4->f_1 + 0.016f - 0f;
				Var38.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				Var47.f_1 = uParam4->f_1 + 0.016f - 0f;
				Var56.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				Var65.f_1 = uParam4->f_1 + 0.016f - 0f;
				Var74.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
			}
			else {
				Var11.f_1 = uParam4->f_1 + 0.0185f;
				Var20.f_1 = uParam4->f_1 + 0.019f;
				Var29.f_1 = uParam4->f_1 + 0.0185f;
				Var38.f_1 = uParam4->f_1 + 0.019f;
				Var47.f_1 = uParam4->f_1 + 0.0185f;
				Var56.f_1 = uParam4->f_1 + 0.019f;
				Var65.f_1 = uParam4->f_1 + 0.0185f;
				Var74.f_1 = uParam4->f_1 + 0.019f;
			}
			Var11.f_2 = 0.016f + 0.003f;
			Var20.f_2 = 0.016f + 0.003f;
			Var29.f_2 = 0.016f + 0.003f;
			Var38.f_2 = 0.016f + 0.003f;
			Var47.f_2 = 0.016f + 0.003f;
			Var56.f_2 = 0.016f + 0.003f;
			Var65.f_2 = 0.016f + 0.003f;
			Var74.f_2 = 0.016f + 0.003f;
			Var11.f_3 = 0.032f + 0.004f;
			Var20.f_3 = 0.032f + 0.004f;
			Var29.f_3 = 0.032f + 0.004f;
			Var38.f_3 = 0.032f + 0.004f;
			Var47.f_3 = 0.032f + 0.004f;
			Var56.f_3 = 0.032f + 0.004f;
			Var65.f_3 = 0.032f + 0.004f;
			Var74.f_3 = 0.032f + 0.004f;
			Var11.f_7 = 255;
			Var20.f_7 = 255;
			Var29.f_7 = 255;
			Var38.f_7 = 255;
			Var47.f_7 = 255;
			Var56.f_7 = 255;
			Var65.f_7 = 255;
			Var74.f_7 = 255;
			func_67(&Var11, 1);
			func_67(&Var20, 1);
			func_67(&Var29, 1);
			func_67(&Var38, 1);
			func_67(&Var47, 1);
			func_67(&Var56, 1);
			func_67(&Var65, 1);
			func_67(&Var74, 1);
			StringCopy(&cVar87, "", 24);
			StringCopy(&vVar93, "", 24);
			StringCopy(&cVar99, "", 24);
			StringCopy(&vVar105, "", 24);
			StringCopy(&cVar111, "", 24);
			StringCopy(&vVar117, "", 24);
			StringCopy(&cVar123, "", 24);
			StringCopy(&vVar129, "", 24);
			iVar183 = 1;
			iVar184 = 1;
			iVar185 = 1;
			iVar186 = 1;
			iVar187 = 1;
			iVar188 = 1;
			iVar189 = 1;
			iVar190 = 1;
			func_58(&iParam11, &Var11, &cVar87, &cVar135, &iVar183, &uParam7, &iVar83, &Var20, &vVar93, &cVar141,
					&iVar184, uParam5);
			func_58(&iParam12, &Var29, &cVar99, &cVar147, &iVar185, &uParam8, &iVar84, &Var38, &vVar105, &cVar153,
					&iVar186, uParam5);
			func_58(&iParam13, &Var47, &cVar111, &cVar159, &iVar187, &uParam9, &iVar85, &Var56, &vVar117, &cVar165,
					&iVar188, uParam5);
			func_58(&iParam14, &Var65, &cVar123, &cVar171, &iVar189, &uParam10, &iVar86, &Var74, &vVar129, &cVar177,
					&iVar190, uParam5);
			if (bParam15) {
				if (bVar9) {
					func_57(iParam11, &Var11, &Var20, &cVar87, &cVar135, iVar183, &vVar93, &cVar141, iVar184);
				}
			}
			else {
				func_57(iParam11, &Var11, &Var20, &cVar87, &cVar135, iVar183, &vVar93, &cVar141, iVar184);
			}
			if (bParam16) {
				if (bVar9) {
					func_57(iParam12, &Var29, &Var38, &cVar99, &cVar147, iVar185, &vVar105, &cVar153, iVar186);
				}
			}
			else {
				func_57(iParam12, &Var29, &Var38, &cVar99, &cVar147, iVar185, &vVar105, &cVar153, iVar186);
			}
			if (bParam17) {
				if (bVar9) {
					func_57(iParam13, &Var47, &Var56, &cVar111, &cVar159, iVar187, &vVar117, &cVar165, iVar188);
				}
			}
			else {
				func_57(iParam13, &Var47, &Var56, &cVar111, &cVar159, iVar187, &vVar117, &cVar165, iVar188);
			}
			if (bParam18) {
				if (bVar9) {
					func_57(iParam14, &Var65, &Var74, &cVar123, &cVar171, iVar189, &vVar129, &cVar177, iVar190);
				}
			}
			else {
				func_57(iParam14, &Var65, &Var74, &cVar123, &cVar171, iVar189, &vVar129, &cVar177, iVar190);
			}
		}
		func_43();
	}
}

// Position - 0x68FB
bool func_99(int iParam0, var *uParam1, var *uParam2) {
	if (func_221(uParam1, iParam0, 0)) {
		return true;
	}
	if (func_221(uParam2, 300, 0)) {
		if (func_221(uParam2, 800, 0)) {
			func_15(uParam2);
			return true;
		}
		else {
			return true;
		}
	}
	else {
		return false;
	}
	return true;
}

// Position - 0x6946
void func_100(int iParam0) {
	func_15(&Global_1354542.f_338[iParam0 /*2*/]);
	func_15(&Global_1354542.f_359[iParam0 /*2*/]);
}

// Position - 0x696C
void func_101(int iParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  var uParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14) {
	int *iVar0;
	float *fVar11;
	var *uVar13;

	if (func_27(10, iParam0)) {
		uVar13 = 4;
		func_102(iParam0, &iVar0, &fVar11, &uVar13, iParam1, iParam2, 1, sParam3, iParam4, iParam7, iParam6, iParam5,
				 uParam8, iParam9, iParam10, iParam11, bParam12, iParam13, iParam14);
	}
}

// Position - 0x69AD
void func_102(int iParam0, int *iParam1, float *fParam2, var *uParam3, int iParam4, int iParam5, int iParam6,
			  char *sParam7, int iParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13,
			  int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18) {
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;

	Global_1354542++;
	if (func_96()) {
		if (iParam13 == 2) {
		}
		func_87(10, iParam0);
		if (func_77()) {
			func_132(iParam1, 0);
		}
		else if (bParam16) {
			func_94(iParam1, 0);
		}
		else if (iParam10) {
			func_131(iParam1, 3);
		}
		else {
			func_94(iParam1, 0);
		}
		if (Global_1354542 == 1) {
			func_86(iParam6);
		}
		func_125(fParam2, uParam3, &Var0, iParam6, iParam1);
		func_89(iParam1);
		iParam1->f_9 += 0.03f * (1f - func_123());
		if (iParam11 == 0) {
			func_122(iParam0);
		}
		if (iParam14 == 0) {
			func_121(iParam0);
		}
		if (func_99(iParam11, &Global_1354542.f_296[iParam0 /*2*/], &Global_1354542.f_317[iParam0 /*2*/])) {
			bVar9 = true;
		}
		else {
			bVar9 = false;
		}
		graphics::request_streamed_texture_dict("TimerBars", 0);
		if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
			iVar10 = func_78();
			graphics::_set_2d_layer(iVar10);
			Var0 = *fParam2;
			Var0.f_1 = fParam2->f_1;
			Var0 += 0.079f;
			Var0.f_1 += 0.008f;
			Var0.f_2 += 0.157f;
			Var0.f_3 += 0.036f;
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_77()) {
				Var0 += -0.025f;
				Var0.f_2 += 0.05f;
			}
			Global_1354542.f_5760 += Var0.f_3;
			if (iParam14 > 0) {
				Var11 = {Var0};
				if (func_221(&Global_1354542.f_737[iParam0 /*2*/], 2000, 0) == 0) {
					if (func_120(Global_1354542.f_737[iParam0 /*2*/], 1250, 0)) {
						Global_1354542.f_758[iParam0] -= 17;
					}
					Var11.f_7 = Global_1354542.f_758[iParam0];
					func_67(&Var11, iParam8);
					func_69("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
				}
			}
			else {
				Global_1354542.f_758[iParam0] = 255;
				func_119(&Global_1354542.f_737[iParam0 /*2*/], 0, 0);
			}
			func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			func_113(&Var0, iParam17);
			if (func_77()) {
				if (iParam10) {
					if (unk::_get_current_language_id() == 9) {
						fParam2->f_1 += -0.009f;
					}
					else {
						fParam2->f_1 += -0.003f;
					}
				}
				else if (unk::_get_current_language_id() == 9) {
					fParam2->f_1 += -0.012f;
				}
				else {
					fParam2->f_1 += -0.008f;
				}
			}
			else if (iParam10) {
				fParam2->f_1 += -0.005f + 0.001f;
			}
			iVar10 = func_78();
			graphics::_set_2d_layer(iVar10);
			if (bParam16) {
				func_112(iParam1, iParam8);
				func_68(iParam1, 0);
				func_56(fParam2, iParam1, sParam7, "", iParam18, 2);
			}
			else if (iParam10 == 1) {
				func_112(iParam1, iParam8);
				func_68(iParam1, 0);
				func_56(fParam2, iParam1, sParam7, "", iParam18, 2);
			}
			else {
				func_68(iParam1, 0);
				if (iParam9 == -1) {
					func_110(fParam2, iParam1, sParam7, 0, 1);
				}
				else {
					func_53(fParam2, iParam1, sParam7, iParam9, 2);
				}
			}
			iVar10 = func_78();
			graphics::_set_2d_layer(iVar10);
			if (bVar9) {
				func_106(iParam4, iParam5, uParam3, iParam8, uParam12, iVar10);
				func_103(iParam15, uParam3, iVar10);
			}
			func_43();
		}
	}
}

// Position - 0x6D1F
void func_103(int iParam0, var *uParam1, int iParam2) {
	struct<9> Var0[1];

	if (iParam0 == joaat("weapon_advancedrifle")) {
	}
	Var0[0 /*9*/] = 0f;
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = -0.015f;
	Var0[0 /*9*/].f_3 = -0.025f;
	graphics::request_streamed_texture_dict("MPKillQuota", 0);
	if (graphics::has_streamed_texture_dict_loaded("MPKillQuota")) {
		func_105(&(*uParam1)[0 /*9*/], &Var0[0 /*9*/]);
		func_67(&(*uParam1)[0 /*9*/], 1);
		graphics::_set_2d_layer(iParam2);
		(*uParam1)[0 /*9*/].f_7 = 255;
		func_69("MPKillQuota", func_104(iParam0), &(*uParam1)[0 /*9*/], 0, 0, iParam2, 0);
		graphics::_set_2d_layer(iParam2);
	}
}

// Position - 0x6DB8
char *func_104(int iParam0) {
	switch (iParam0) {
	case -572349828: return "WEAPON_ASSAULT_MG";

	case joaat("weapon_ball"): return "WEAPON_BALL";

	case joaat("weapon_bat"): return "WEAPON_BAT";

	case joaat("weapon_bottle"): return "WEAPON_BOTTLE";

	case joaat("weapon_bullpuprifle"): return "WEAPON_BULLPUPRIFLE";

	case joaat("weapon_combatpdw"): return "WEAPON_COMBATPDW";

	case joaat("weapon_compactrifle"): return "WEAPON_COMPACTRIFLE";

	case joaat("weapon_crowbar"): return "WEAPON_CROWBAR";

	case joaat("weapon_dagger"): return "WEAPON_DAGGER";

	case joaat("weapon_dbshotgun"): return "WEAPON_DBSHOTGUN";

	case joaat("weapon_firework"): return "WEAPON_FIREWORK";

	case joaat("weapon_flare"): return "WEAPON_FLARE";

	case joaat("weapon_flaregun"): return "WEAPON_FLARE_GUN";

	case joaat("weapon_flashlight"): return "WEAPON_FLASHLIGHT";

	case joaat("weapon_golfclub"): return "WEAPON_GOLFCLUB";

	case joaat("weapon_gusenberg"): return "WEAPON_GUSENBERG";

	case joaat("weapon_hammer"): return "WEAPON_HAMMER";

	case joaat("weapon_hatchet"): return "WEAPON_HATCHET";

	case joaat("weapon_grenadelauncher"): return "WEAPON_HEAVY_GRENADE_LAUNCHER";

	case joaat("weapon_minigun"): return "WEAPON_HEAVY_MINIGUN";

	case -947031628: return "WEAPON_HEAVY_RIFLE";

	case joaat("weapon_rpg"): return "WEAPON_HEAVY_RPG";

	case joaat("weapon_heavypistol"): return "WEAPON_HEAVYPISTOL";

	case joaat("weapon_heavyshotgun"): return "WEAPON_HEAVYSHOTGUN";

	case joaat("weapon_hominglauncher"): return "WEAPON_HOMINGLAUNCHER";

	case joaat("weapon_petrolcan"): return "WEAPON_JERRY_CAN";

	case joaat("weapon_knife"): return "WEAPON_KNIFE";

	case joaat("weapon_knuckle"): return "WEAPON_KNUCKLE";

	case joaat("weapon_mg"): return "WEAPON_LMG";

	case joaat("weapon_combatmg"): return "WEAPON_LMG_COMBAT";

	case joaat("weapon_machete"): return "WEAPON_MACHETE";

	case joaat("weapon_machinepistol"): return "WEAPON_MACHINEPISTOL";

	case joaat("weapon_marksmanpistol"): return "WEAPON_MARKSMANPISTOL";

	case joaat("weapon_marksmanrifle"): return "WEAPON_MARKSMANRIFLE";

	case joaat("weapon_molotov"): return "WEAPON_MOLOTOV";

	case joaat("weapon_musket"): return "WEAPON_MUSKET";

	case joaat("weapon_nightstick"): return "WEAPON_NIGHTSTICK";

	case joaat("weapon_pistol"): return "WEAPON_PISTOL";

	case joaat("weapon_pistol50"): return "WEAPON_PISTOL_50";

	case joaat("weapon_appistol"): return "WEAPON_PISTOL_AP";

	case joaat("weapon_combatpistol"): return "WEAPON_PISTOL_COMBAT";

	case -1887867191: return "WEAPON_PROGRAMMABLE_AR";

	case joaat("weapon_proxmine"): return "WEAPON_PROXIMINE";

	case joaat("weapon_railgun"): return "WEAPON_RAILGUN";

	case joaat("weapon_revolver"): return "WEAPON_REVOLVER";

	case joaat("weapon_advancedrifle"): return "WEAPON_RIFLE_ADVANCED";

	case joaat("weapon_assaultrifle"): return "WEAPON_RIFLE_ASSAULT";

	case joaat("weapon_carbinerifle"): return "WEAPON_RIFLE_CARBINE";

	case joaat("weapon_assaultshotgun"): return "WEAPON_SHOTGUN_ASSAULT";

	case joaat("weapon_bullpupshotgun"): return "WEAPON_SHOTGUN_BULLPUP";

	case joaat("weapon_pumpshotgun"): return "WEAPON_SHOTGUN_PUMP";

	case joaat("weapon_sawnoffshotgun"): return "WEAPON_SHOTGUN_SAWNOFF";

	case joaat("weapon_smg"): return "WEAPON_SMG";

	case joaat("weapon_assaultsmg"): return "WEAPON_SMG_ASSAULT";

	case joaat("weapon_microsmg"): return "WEAPON_SMG_MICRO";

	case joaat("weapon_sniperrifle"): return "WEAPON_SNIPER";

	case 392730790: return "WEAPON_SNIPER_ASSAULT";

	case joaat("weapon_heavysniper"): return "WEAPON_SNIPER_HEAVY";

	case joaat("weapon_snowball"): return "WEAPON_SNOWBALL";

	case joaat("weapon_snspistol"): return "WEAPON_SNSPISTOL";

	case joaat("weapon_specialcarbine"): return "WEAPON_SPECIALCARBINE";

	case joaat("weapon_stungun"): return "WEAPON_STUNGUN";

	case joaat("weapon_switchblade"): return "WEAPON_SWITCHBLADE";

	case joaat("weapon_bzgas"): return "WEAPON_THROWN_BZ_GAS";

	case joaat("weapon_grenade"): return "WEAPON_THROWN_GRENADE";

	case joaat("weapon_stickybomb"): return "WEAPON_THROWN_STICKY";

	case joaat("weapon_unarmed"): return "WEAPON_UNARMED";

	case joaat("weapon_vintagepistol"): return "WEAPON_VINTAGEPISTOL";

	case 317205821: return "WEAPON_AUTOMATIC_SHOTGUN";

	case -853065399: return "WEAPON_BATTLE_AXE";

	case 125959754: return "WEAPON_COMPACT_GRENADE_LAUNCHER";

	case -1121678507: return "WEAPON_MINI_SMG";

	case -1169823560: return "WEAPON_PIPEBOMB";

	case -1810795771: return "WEAPON_POOL_CUE";

	case 419712736: return "WEAPON_WRENCH";

	default:
	}
	return "";
}

// Position - 0x7199
void func_105(var *uParam0, var *uParam1) {
	*uParam0 += *uParam1;
	uParam0->f_1 += uParam1->f_1;
	uParam0->f_2 += uParam1->f_2;
	uParam0->f_3 += uParam1->f_3;
	uParam0->f_4 += uParam1->f_4;
	uParam0->f_5 += uParam1->f_5;
	uParam0->f_6 += uParam1->f_6;
	uParam0->f_7 += uParam1->f_7;
}

// Position - 0x7206
void func_106(int iParam0, int iParam1, var *uParam2, int iParam3, var uParam4, int iParam5) {
	struct<9> Var0[2];
	float fVar19;

	Var0[0 /*9*/] = 0.003f;
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.011f;
	Var0[0 /*9*/].f_3 = 0.059f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.011f;
	Var0[1 /*9*/].f_3 = 0.059f;
	graphics::request_streamed_texture_dict("TimerBars", 0);
	if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
		func_105(&(*uParam2)[0 /*9*/], &Var0[0 /*9*/]);
		func_105(&(*uParam2)[1 /*9*/], &Var0[1 /*9*/]);
		(*uParam2)[3 /*9*/] = {(*uParam2)[0 /*9*/]};
		func_67(&(*uParam2)[1 /*9*/], iParam3);
		func_67(&(*uParam2)[3 /*9*/], iParam3);
		fVar19 = system::to_float(iParam0) / system::to_float(iParam1) * 100f;
		graphics::_set_2d_layer(iParam5);
		(*uParam2)[3 /*9*/].f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", &(*uParam2)[3 /*9*/], 0, 0, iParam5, 0);
		func_67(&(*uParam2)[3 /*9*/], iParam3);
		(*uParam2)[3 /*9*/].f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", &(*uParam2)[3 /*9*/], 0, 0, iParam5, 0);
		(*uParam2)[3 /*9*/].f_7 = 255;
		func_107((*uParam2)[0 /*9*/], fVar19, &(*uParam2)[1 /*9*/], 1, 1, uParam4);
		graphics::_set_2d_layer(iParam5);
		func_69("TimerBars", "DamageBarFill_128", &(*uParam2)[1 /*9*/], 0, 0, iParam5, 0);
		graphics::_set_2d_layer(iParam5);
	}
}

// Position - 0x7359
void func_107(struct<9> Param0, float fParam9, var *uParam10, int iParam11, int iParam12, var uParam13) {
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;

	fVar0 = Param0.f_2;
	fVar1 = 0f;
	fVar2 = func_109(Param0);
	fVar3 = fParam9;
	if (fParam9 < 0f) {
		fVar3 = 0f;
	}
	if (fParam9 > 100f) {
		fVar3 = 100f;
	}
	if (fParam9 > 95f && fParam9 < 100f) {
		fVar3 = 96f;
	}
	if (iParam12 == 0) {
		fVar4 = (fVar1 - fVar0) / 100f;
		fVar5 = fVar3;
		fVar6 = fVar0;
		fVar7 = fVar4 * fVar5 + fVar6;
		fVar2 = Param0;
		fVar8 = func_108(Param0);
		fVar9 = fVar8 - fVar7 / 2f;
	}
	else {
		fVar4 = (fVar0 - fVar1) / 100f;
		fVar5 = fVar3;
		fVar6 = 0f;
		fVar7 = fVar4 * fVar5 + fVar6;
		if (fParam9 >= 100f) {
			fVar7 = Param0.f_2;
		}
		fVar8 = Param0;
		fVar4 = (fVar8 - fVar2) / 100f;
		fVar5 = fVar3;
		fVar6 = fVar2;
		fVar9 = fVar4 * fVar5 + fVar6;
	}
	*uParam10 = fVar9;
	uParam10->f_1 = Param0.f_1;
	uParam10->f_2 = fVar7;
	if (iParam11 == 1) {
		uParam10->f_3 = Param0.f_3;
	}
	uParam10->f_8 = Param0.f_8;
}

// Position - 0x746F
float func_108(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) {
	float fVar0;
	float fVar1;

	fVar0 = vParam0.z / 2f;
	fVar1 = vParam0.x;
	fVar1 += fVar0;
	fVar1 -= 0.002f;
	return fVar1;
}

// Position - 0x7496
float func_109(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) {
	float fVar0;
	float fVar1;

	fVar0 = vParam0.z / 2f;
	fVar1 = vParam0.x;
	fVar1 -= fVar0;
	return fVar1;
}

// Position - 0x74B3
void func_110(float *fParam0, int *iParam1, char *sParam2, int iParam3, int iParam4) {
	char *sVar0;

	sVar0 = sParam2;
	if (!func_55(sVar0)) {
		if (func_47()) {
			func_68(iParam1, 0);
			ui::set_text_right_justify(iParam4);
			ui::set_text_centre(iParam3);
			func_111(func_46(*fParam0), func_45(fParam0->f_1), sVar0, 0);
		}
	}
}

// Position - 0x74F9
void func_111(float fParam0, float fParam1, char *sParam2, int iParam3) {
	ui::begin_text_command_display_text(sParam2);
	ui::end_text_command_display_text(fParam0, fParam1, iParam3);
}

// Position - 0x7511
void func_112(int *iParam0, int iParam1) {
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	ui::get_hud_colour(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	iParam0->f_3 = uVar0;
	iParam0->f_4 = uVar1;
	iParam0->f_5 = uVar2;
}

// Position - 0x7539
void func_113(var *uParam0, int iParam1) {
	struct<8> Var0;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (iParam1 == 0) {
		return;
	}
	Var0 = 0.951f;
	Var0.f_1 = uParam0->f_1;
	Var0.f_2 = 0.002f;
	Var0.f_3 = uParam0->f_3;
	ui::get_hud_colour(iParam1, &uVar8, &uVar9, &uVar10, &uVar11);
	Var0.f_4 = uVar8;
	Var0.f_5 = uVar9;
	Var0.f_6 = uVar10;
	Var0.f_7 = uVar11;
	func_114(Var0, 0, 0);
}

// Position - 0x759B
void func_114(struct<8> Param0, int iParam8, int iParam9) {
	struct<8> Var0;

	Var0 = {Param0};
	switch (iParam8) {
	case 2: func_118(&Var0); break;

	case 1: func_117(&Var0); break;

	case 3: func_116(&Var0); break;

	case 4: func_115(&Var0); break;
	}
	if (func_47()) {
		if (iParam9 == 1) {
			graphics::draw_rect(func_46(Var0), func_45(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6,
								Var0.f_7, 0);
		}
		else {
			graphics::draw_rect(func_46(Var0), func_45(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6,
								Var0.f_7, 0);
		}
	}
}

// Position - 0x7656
void func_115(var *uParam0) {
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

// Position - 0x7676
void func_116(var *uParam0) {
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

// Position - 0x7696
void func_117(var *uParam0) {
	uParam0->f_4 -= 50;
	uParam0->f_5 -= 50;
	uParam0->f_6 -= 50;
}

// Position - 0x76BF
void func_118(var *uParam0) {
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

// Position - 0x76DC
void func_119(var *uParam0, int iParam1, int iParam2) {
	if (network::network_is_game_in_progress() && !iParam1) {
		if (!iParam2) {
			*uParam0 = network::get_network_time();
		}
		else {
			*uParam0 = network::_0x89023FBBF9200E9F();
		}
	}
	else {
		*uParam0 = gameplay::get_game_timer();
	}
	uParam0->f_1 = 1;
}

// Position - 0x7719
bool func_120(int iParam0, var uParam1, int iParam2, int iParam3) {
	if (iParam2 == -1) {
		return true;
	}
	if (network::network_is_game_in_progress() && !iParam3) {
		if (gameplay::absi(network::get_time_difference(network::get_network_time(), iParam0)) >= iParam2) {
			return true;
		}
	}
	else if (gameplay::absi(network::get_time_difference(gameplay::get_game_timer(), iParam0)) >= iParam2) {
		return true;
	}
	return false;
}

// Position - 0x776C
void func_121(int iParam0) {
	func_15(&Global_1354542.f_674[iParam0 /*2*/]);
	func_15(&Global_1354542.f_695[iParam0 /*2*/]);
}

// Position - 0x7792
void func_122(int iParam0) {
	func_15(&Global_1354542.f_296[iParam0 /*2*/]);
	func_15(&Global_1354542.f_317[iParam0 /*2*/]);
	Global_1354542.f_1009.f_205[iParam0] = -1;
}

// Position - 0x77C6
float func_123() {
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	fVar0 = graphics::_get_aspect_ratio(0);
	graphics::_get_active_screen_resolution(&iVar1, &iVar2);
	fVar3 = system::to_float(iVar1) / system::to_float(iVar2);
	fVar0 = func_124(fVar0, fVar3);
	if (fVar3 > 3.5f && fVar0 > 1.7f) {
		return 1.4f;
	}
	if (fVar0 > 1.7f) {
		return 1f;
	}
	else if (fVar0 > 1.5f) {
		return 1.2f;
	}
	else if (fVar0 > 1.3f) {
		return 1.3f;
	}
	return 1.4f;
}

// Position - 0x7856
float func_124(float fParam0, float fParam1) {
	if (fParam0 > fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x786D
void func_125(var *uParam0, var *uParam1, var *uParam2, int iParam3, var *uParam4) {
	float fVar0;

	fVar0 = func_130(0, 1);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_84(iParam3);
	uParam0->f_1 += func_83(uParam4);
	func_126(uParam1, iParam3, -1f, -1f);
	func_81(iParam3, -fVar0);
	func_95(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

// Position - 0x78C1
void func_126(var *uParam0, int iParam1, float fParam2, float fParam3) {
	float fVar0;
	float fVar1;

	if (!func_129(fParam2, fParam3)) {
		fVar0 = func_128() + func_84(iParam1);
		fVar1 = func_127();
	}
	else {
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(*uParam0)[0 /*9*/].f_1 = fVar0;
	(*uParam0)[0 /*9*/].f_2 = 0.062f;
	(*uParam0)[0 /*9*/].f_3 = 0.016f;
	(*uParam0)[0 /*9*/].f_4 = 255;
	(*uParam0)[0 /*9*/].f_5 = 255;
	(*uParam0)[0 /*9*/].f_6 = 0;
	(*uParam0)[0 /*9*/].f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(*uParam0)[1 /*9*/].f_1 = fVar0;
	(*uParam0)[1 /*9*/].f_2 = 0.069f;
	(*uParam0)[1 /*9*/].f_3 = 0.011f;
	(*uParam0)[1 /*9*/].f_4 = 255;
	(*uParam0)[1 /*9*/].f_5 = 255;
	(*uParam0)[1 /*9*/].f_6 = 0;
	(*uParam0)[1 /*9*/].f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(*uParam0)[2 /*9*/].f_1 = fVar0;
	(*uParam0)[2 /*9*/].f_2 = 0.069f;
	(*uParam0)[2 /*9*/].f_3 = 0.009f;
	(*uParam0)[2 /*9*/].f_4 = 0;
	(*uParam0)[2 /*9*/].f_5 = 0;
	(*uParam0)[2 /*9*/].f_6 = 0;
	(*uParam0)[2 /*9*/].f_7 = 120;
	(*uParam0)[3 /*9*/] = fVar1;
	(*uParam0)[3 /*9*/].f_1 = fVar0;
	(*uParam0)[3 /*9*/].f_2 = 0.069f;
	(*uParam0)[3 /*9*/].f_3 = 0.008f;
	(*uParam0)[3 /*9*/].f_4 = 0;
	(*uParam0)[3 /*9*/].f_5 = 0;
	(*uParam0)[3 /*9*/].f_6 = 0;
	(*uParam0)[3 /*9*/].f_7 = 90;
}

// Position - 0x7A1B
float func_127() {
	float fVar0;

	fVar0 = 0.919f - 0.081f + 0.028f + 0.05f - 0.001f - 0.002f;
	return fVar0;
}

// Position - 0x7A4A
float func_128() {
	float fVar0;

	fVar0 = 0.013f - 0.002f + 0.001f + 0.001f - 0.001f;
	return fVar0;
}

// Position - 0x7A73
int func_129(float fParam0, float fParam1) {
	if (fParam0 == -1f && fParam1 == -1f) {
		return 0;
	}
	return 1;
}

// Position - 0x7A90
float func_130(int iParam0, int iParam1) {
	float fVar0;

	fVar0 = 0.025f + 0.006f + 0.0009f;
	if (iParam0 == 1) {
		fVar0 += 0.008f;
	}
	if (iParam1) {
		fVar0 += 0.008f;
	}
	return fVar0;
}

// Position - 0x7ACC
void func_131(var *uParam0, int iParam1) {
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.355f + 0.092f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 6;
}

// Position - 0x7B1D
void func_132(var *uParam0, int iParam1) {
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.508f - 0.03f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

// Position - 0x7B6F
void func_133(int iParam0, int iParam1, int iParam2) {
	int *iVar0;
	float *fVar11;

	if (func_27(9, iParam0)) {
		func_134(iParam0, &iVar0, &fVar11, 1, iParam1, iParam2);
	}
}

// Position - 0x7B91
void func_134(int iParam0, int *iParam1, float *fParam2, int iParam3, int iParam4, int iParam5) {
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	var *uVar5;

	Global_1354542++;
	if (func_96()) {
		func_138();
		ui::get_hud_colour(iParam5, &uVar0, &uVar1, &uVar2, &uVar3);
		func_137(iParam1, 3, uVar0, uVar1, uVar2);
		if (func_77()) {
			iParam1->f_1 = 2f;
			iParam1->f_2 = 2.7f;
		}
		if (Global_1354542 == 1) {
			func_86(iParam3);
		}
		fVar4 = 0.131f;
		if (unk::_get_current_language_id() == 8) {
			fVar4 = 0.0872f;
		}
		else if (unk::_get_current_language_id() == 10) {
			fVar4 = 0.095f;
		}
		*fParam2 = 0.795f;
		fParam2->f_1 = func_84(iParam3) + func_82(iParam1) - fVar4;
		func_88(iParam1);
		func_68(iParam1, 0);
		func_87(9, iParam0);
		func_136(&uVar5, iParam4);
		func_110(fParam2, iParam1, func_135(&uVar5), 0, 1);
		func_43();
	}
}

// Position - 0x7C63
char *func_135(var *uParam0) { return uParam0; }

// Position - 0x7C6D
void func_136(var *uParam0, int iParam1) {
	struct<4> Var0;

	StringCopy(&Var0, "RACE_POS_", 16);
	StringIntConCat(&Var0, iParam1, 16);
	*uParam0 = {Var0};
}

// Position - 0x7C8B
void func_137(var *uParam0, int iParam1, var uParam2, var uParam3, var uParam4) {
	*uParam0 = 6;
	uParam0->f_1 = 3f;
	uParam0->f_2 = 3.7f;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	uParam0->f_5 = uParam4;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 11;
}

// Position - 0x7CD3
void func_138() {
	ui::hide_hud_component_this_frame(7);
	ui::hide_hud_component_this_frame(6);
	ui::hide_hud_component_this_frame(8);
	ui::hide_hud_component_this_frame(9);
}

// Position - 0x7CF1
void func_139(int iParam0, char *sParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6) {
	int *iVar0;
	float *fVar11;
	var *uVar13;

	if (func_27(8, iParam0)) {
		uVar13 = 2;
		func_140(iParam0, &iVar0, &fVar11, &uVar13, 1, sParam1, iParam3, uParam2, uParam4, uParam5, uParam6);
	}
}

// Position - 0x7D22
void func_140(int iParam0, int *iParam1, float *fParam2, var *uParam3, int iParam4, char *sParam5, int iParam6,
			  var uParam7, var uParam8, var uParam9, var uParam10) {
	struct<9> Var0;
	struct<8> Var9;

	Global_1354542++;
	if (func_96()) {
		func_95(&Var9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_94(iParam1, 0);
		func_89(iParam1);
		func_87(8, iParam0);
		if (Global_1354542 == 1) {
			func_86(iParam4);
		}
		func_141(fParam2, iParam4, iParam1, &Var0);
		graphics::request_streamed_texture_dict("TimerBars", 0);
		graphics::request_streamed_texture_dict("Hunting", 0);
		if (graphics::has_streamed_texture_dict_loaded("TimerBars") &&
			graphics::has_streamed_texture_dict_loaded("Hunting")) {
			Var9 = *fParam2;
			Var9.f_1 = fParam2->f_1;
			Var9 += 0.079f;
			Var9.f_1 += 0.008f;
			Var9.f_2 += 0.157f;
			Var9.f_3 += 0.036f;
			Var9.f_4 += 255;
			Var9.f_5 += 255;
			Var9.f_6 += 255;
			Var9.f_7 = 140;
			if (func_77()) {
				Var9 += -0.025f;
				Var9.f_2 += 0.05f;
			}
			Global_1354542.f_5760 += Var9.f_3;
			func_69("TimerBars", "ALL_BLACK_bg", &Var9, 1, 0, 4, 0);
			Var0.f_4 = uParam8;
			Var0.f_5 = uParam9;
			Var0.f_6 = uParam10;
			Var0.f_7 = 255;
			Var0.f_8 = uParam7;
			func_69("Hunting", "HuntingWindArrow_32", &Var0, 1, 0, 4, 0);
			iParam1->f_3 = uParam8;
			iParam1->f_4 = uParam9;
			iParam1->f_5 = uParam10;
			iParam1->f_6 = 255;
			func_68(iParam1, 0);
			uParam7 = uParam7;
			(*uParam3)[0 /*9*/] = (*uParam3)[0 /*9*/];
			func_53(fParam2, iParam1, sParam5, iParam6, 2);
			func_43();
		}
	}
}

// Position - 0x7EB7
void func_141(var *uParam0, int iParam1, var *uParam2, var *uParam3) {
	float fVar0;

	fVar0 = func_130(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_84(iParam1);
	uParam0->f_1 += func_83(uParam2);
	func_81(iParam1, -fVar0);
	uParam0->f_1 += func_83(uParam2);
	*uParam3 = 0.9375f;
	uParam3->f_1 = uParam0->f_1 + 0.009f;
	uParam3->f_2 = 0.02f;
	uParam3->f_3 = 0.02f;
}

// Position - 0x7F28
void func_142(int iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7,
			  var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14,
			  int iParam15, int iParam16, float fParam17, float fParam18, var uParam19, var uParam20, var uParam21,
			  var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28,
			  var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, int iParam35,
			  int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42,
			  int iParam43, int iParam44, int iParam45, bool bParam46, int iParam47, int iParam48, int iParam49,
			  int iParam50, int iParam51, int iParam52, int iParam53, int iParam54, int iParam55) {
	int *iVar0;
	float *fVar11;
	var *uVar13;
	var *uVar95;

	if (func_27(2, iParam0)) {
		uVar13 = 9;
		if (iParam1 < 9) {
			func_143(iParam0, &iVar0, &fVar11, &uVar13, &uVar95, iParam1, 1, iParam3, iParam4, sParam2, iParam5,
					 uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, iParam14, iParam15,
					 iParam16, fParam17, fParam18, uParam19, uParam20, uParam21, uParam22, uParam23, uParam24, uParam25,
					 uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, iParam35,
					 iParam36, iParam37, iParam38, iParam39, iParam40, iParam41, iParam42, iParam43, iParam44, iParam45,
					 bParam46, iParam47, iParam48, iParam49, iParam50, iParam51, iParam52, iParam53, iParam54,
					 iParam55);
		}
	}
}

// Position - 0x7FC7
void func_143(int iParam0, int *iParam1, float *fParam2, var *uParam3, var *uParam4, int iParam5, int iParam6,
			  int iParam7, int iParam8, char *sParam9, int iParam10, var uParam11, var uParam12, var uParam13,
			  var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, int iParam20,
			  int iParam21, float fParam22, float fParam23, var uParam24, var uParam25, var uParam26, var uParam27,
			  var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34,
			  var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, int iParam40, int iParam41,
			  int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48,
			  int iParam49, int iParam50, bool bParam51, int iParam52, int iParam53, int iParam54, int iParam55,
			  int iParam56, int iParam57, int iParam58, int iParam59, int iParam60) {
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;

	Global_1354542++;
	if (func_96()) {
		if (iParam40 == 2) {
		}
		func_87(2, iParam0);
		if (Global_1354542 == 1) {
			func_86(iParam6);
		}
		func_150(fParam2, uParam3, &Var0, uParam4, iParam6, fParam22, fParam23, iParam1);
		if (func_77()) {
			func_132(iParam1, 0);
		}
		else if (bParam51) {
			func_94(iParam1, 0);
		}
		else if (iParam21) {
			func_131(iParam1, 3);
		}
		else {
			func_94(iParam1, 0);
		}
		func_89(iParam1);
		iParam1->f_9 += 0.03f * (1f - func_123());
		if (iParam19 == 0) {
			func_149(iParam0);
		}
		if (iParam41 == 0) {
			func_148(iParam0);
		}
		iVar10 = func_78();
		graphics::_set_2d_layer(iVar10);
		graphics::request_streamed_texture_dict("TimerBars", 0);
		if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
			if (func_99(iParam19, &Global_1354542.f_212[iParam0 /*2*/], &Global_1354542.f_233[iParam0 /*2*/])) {
				bVar9 = true;
			}
			else {
				bVar9 = false;
			}
			if (!func_129(fParam22, fParam23)) {
				Var0 = *fParam2;
				Var0.f_1 = fParam2->f_1;
				Var0 += 0.079f;
				Var0.f_1 += 0.012f;
				Var0.f_2 += 0.157f;
				Var0.f_3 += 0.028f;
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
				if (func_77()) {
					Var0 += -0.025f;
					Var0.f_2 += 0.05f;
				}
				Global_1354542.f_5760 += Var0.f_3;
				if (iParam41 > 0) {
					Var11 = {Var0};
					if (func_221(&Global_1354542.f_897[iParam0 /*2*/], 2000, 0) == 0) {
						if (func_120(Global_1354542.f_897[iParam0 /*2*/], 1250, 0)) {
							Global_1354542.f_918[iParam0] -= 17;
						}
						Var11.f_7 = Global_1354542.f_918[iParam0];
						func_67(&Var11, iParam7);
						func_69("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
					}
				}
				else {
					Global_1354542.f_918[iParam0] = 255;
					func_119(&Global_1354542.f_897[iParam0 /*2*/], 0, 0);
				}
				func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			}
			func_113(&Var0, iParam52);
			iVar10 = func_78();
			graphics::_set_2d_layer(iVar10);
			func_112(iParam1, iParam42);
			if (unk::_get_current_language_id() == 9) {
				fParam2->f_1 += -0.009f;
			}
			else {
				fParam2->f_1 += -0.003f;
			}
			if (func_77()) {
				if (unk::_get_current_language_id() == 9) {
					fParam2->f_1 += -0.009f;
				}
				else {
					fParam2->f_1 += -0.007f;
				}
			}
			if (func_77() == 0) {
				if (bParam51) {
					fParam2->f_1 += 0.003f;
				}
				else if (iParam21) {
					fParam2->f_1 += -0.002f;
				}
			}
			else if (iParam21) {
				fParam2->f_1 += 0.007f;
			}
			else {
				fParam2->f_1 += 0.007f;
			}
			if (!func_129(fParam22, fParam23)) {
				func_68(iParam1, 0);
				if (bParam51) {
					func_56(fParam2, iParam1, sParam9, "", iParam42, 2);
				}
				else if (iParam21 == 1) {
					func_56(fParam2, iParam1, sParam9, "", iParam42, 2);
				}
				else if (iParam20 == -1) {
					func_110(fParam2, iParam1, sParam9, 0, 1);
				}
				else {
					fParam2->f_1 -= -0.003f;
					func_53(fParam2, iParam1, sParam9, iParam20, 2);
				}
			}
			if (bVar9) {
				func_144(iParam5, uParam3, iParam7, iParam8, iParam10, uParam11, uParam12, uParam13, uParam14, uParam15,
						 uParam16, uParam17, uParam18, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29,
						 uParam30, uParam31, uParam32, uParam33, uParam34, uParam35, uParam36, uParam37, uParam38,
						 uParam39, iVar10, iParam43, iParam44, iParam45, iParam46, iParam47, iParam48, iParam49,
						 iParam50, iParam53, iParam54, iParam55, iParam56, iParam57, iParam58, iParam59, iParam60);
			}
			func_43();
		}
	}
}

// Position - 0x83BC
void func_144(int iParam0, var *uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7,
			  var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14,
			  var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21,
			  var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28,
			  int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35,
			  int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42,
			  int iParam43, int iParam44, int iParam45) {
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<9> Var5;
	bool bVar14;

	graphics::request_streamed_texture_dict("TimerBars", 0);
	graphics::request_streamed_texture_dict("Cross", 0);
	if (graphics::has_streamed_texture_dict_loaded("TimerBars") &&
		graphics::has_streamed_texture_dict_loaded("Cross")) {
		fVar3 = -0.0094f;
		iVar4 = 0;
		while (iVar4 <= iParam0 - 1) {
			(*uParam1)[iVar4 /*9*/] += fVar3 * IntToFloat(iVar4);
			if (func_147(iVar4, iParam4)) {
				switch (iVar4) {
				case 0:
					iVar0 = uParam5;
					iVar1 = uParam13;
					iVar2 = uParam21;
					break;

				case 1:
					iVar0 = uParam6;
					iVar1 = uParam14;
					iVar2 = uParam22;
					break;

				case 2:
					iVar0 = uParam7;
					iVar1 = uParam15;
					iVar2 = uParam23;
					break;

				case 3:
					iVar0 = uParam8;
					iVar1 = uParam16;
					iVar2 = uParam24;
					break;

				case 4:
					iVar0 = uParam9;
					iVar1 = uParam17;
					iVar2 = uParam25;
					break;

				case 5:
					iVar0 = uParam10;
					iVar1 = uParam18;
					iVar2 = uParam26;
					break;

				case 6:
					iVar0 = uParam11;
					iVar1 = uParam19;
					iVar2 = uParam27;
					break;

				case 7:
					iVar0 = uParam12;
					iVar1 = uParam20;
					iVar2 = uParam28;
					break;
				}
				bVar14 = false;
				if (iVar2 == 2) {
					bVar14 = true;
					iVar2 = 1;
				}
				Var5 = {func_146((*uParam1)[iVar4 /*9*/], iVar0, iParam2, iParam3, iVar1, iVar2)};
				if (bVar14) {
					Var5.f_7 = 51;
				}
				func_69("TimerBars", "Circle_checkpoints", &Var5, 0, 0, iParam29, 0);
				if (func_145(iVar4, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37)) {
					switch (iVar4) {
					case 0: func_67(&(*uParam1)[iVar4 /*9*/], iParam38); break;

					case 1: func_67(&(*uParam1)[iVar4 /*9*/], iParam39); break;

					case 2: func_67(&(*uParam1)[iVar4 /*9*/], iParam40); break;

					case 3: func_67(&(*uParam1)[iVar4 /*9*/], iParam41); break;

					case 4: func_67(&(*uParam1)[iVar4 /*9*/], iParam42); break;

					case 5: func_67(&(*uParam1)[iVar4 /*9*/], iParam43); break;

					case 6: func_67(&(*uParam1)[iVar4 /*9*/], iParam44); break;

					case 7: func_67(&(*uParam1)[iVar4 /*9*/], iParam45); break;
					}
					func_69("Cross", "Circle_checkpoints_Cross", &(*uParam1)[iVar4 /*9*/], 0, 0, iParam29, 0);
				}
			}
			iVar4++;
		}
	}
}

// Position - 0x85FC
bool func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	if (iParam0 == 0 && iParam1 == 1) {
		return true;
	}
	if (iParam0 == 1 && iParam2 == 1) {
		return true;
	}
	if (iParam0 == 2 && iParam3 == 1) {
		return true;
	}
	if (iParam0 == 3 && iParam4 == 1) {
		return true;
	}
	if (iParam0 == 4 && iParam5 == 1) {
		return true;
	}
	if (iParam0 == 5 && iParam6 == 1) {
		return true;
	}
	if (iParam0 == 6 && iParam7 == 1) {
		return true;
	}
	if (iParam0 == 7 && iParam8 == 1) {
		return true;
	}
	return false;
}

// Position - 0x86A5
struct<9> func_146(struct<9> Param0, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	struct<9> Var0;

	Var0 = {Param0};
	if (iParam12 == 0) {
		if (iParam9) {
			func_67(&Var0, iParam10);
		}
		else {
			func_67(&Var0, iParam11);
		}
	}
	else if (iParam9) {
		func_67(&Var0, iParam12);
	}
	else {
		func_67(&Var0, iParam13);
	}
	if (iParam9 == 0) {
	}
	return Var0;
}

//Position - 0x86FB
bool func_147(int iParam0, int iParam1)
{
	if (iParam1 == -1) {
		return true;
	}
	if (iParam0 > iParam1) {
		return false;
	}
	return true;
}

// Position - 0x8719
void func_148(int iParam0) {
	func_15(&Global_1354542.f_590[iParam0 /*2*/]);
	func_15(&Global_1354542.f_611[iParam0 /*2*/]);
}

// Position - 0x873F
void func_149(int iParam0) {
	func_15(&Global_1354542.f_212[iParam0 /*2*/]);
	func_15(&Global_1354542.f_233[iParam0 /*2*/]);
}

// Position - 0x8763
void func_150(var *uParam0, var *uParam1, var *uParam2, var *uParam3, int iParam4, float fParam5, float fParam6,
			  var *uParam7) {
	float fVar0;

	fVar0 = func_130(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_84(iParam4);
	uParam0->f_1 += func_83(uParam7);
	func_152(uParam1, iParam4, fParam5, fParam6);
	func_151(uParam3);
	if (!func_129(fParam5, fParam6)) {
		func_81(iParam4, -fVar0);
	}
	func_95(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

// Position - 0x87CB
void func_151(var *uParam0) {
	*uParam0 = 0.851f;
	uParam0->f_1 = 0.075f;
	uParam0->f_2 = 0.001f;
	uParam0->f_3 = 0.009f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 250;
}

// Position - 0x880B
void func_152(var *uParam0, int iParam1, float fParam2, float fParam3) {
	float fVar0;
	float fVar1;

	if (!func_129(fParam2, fParam3)) {
		fVar0 = func_128() + func_84(iParam1);
		fVar1 = func_153();
	}
	else {
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(*uParam0)[0 /*9*/].f_1 = fVar0;
	(*uParam0)[0 /*9*/].f_2 = 0.012f;
	(*uParam0)[0 /*9*/].f_3 = 0.023f;
	(*uParam0)[0 /*9*/].f_4 = 0;
	(*uParam0)[0 /*9*/].f_5 = 0;
	(*uParam0)[0 /*9*/].f_6 = 0;
	(*uParam0)[0 /*9*/].f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(*uParam0)[1 /*9*/].f_1 = fVar0;
	(*uParam0)[1 /*9*/].f_2 = 0.012f;
	(*uParam0)[1 /*9*/].f_3 = 0.023f;
	(*uParam0)[1 /*9*/].f_4 = 0;
	(*uParam0)[1 /*9*/].f_5 = 0;
	(*uParam0)[1 /*9*/].f_6 = 0;
	(*uParam0)[1 /*9*/].f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(*uParam0)[2 /*9*/].f_1 = fVar0;
	(*uParam0)[2 /*9*/].f_2 = 0.012f;
	(*uParam0)[2 /*9*/].f_3 = 0.023f;
	(*uParam0)[2 /*9*/].f_4 = 0;
	(*uParam0)[2 /*9*/].f_5 = 0;
	(*uParam0)[2 /*9*/].f_6 = 0;
	(*uParam0)[2 /*9*/].f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(*uParam0)[3 /*9*/].f_1 = fVar0;
	(*uParam0)[3 /*9*/].f_2 = 0.012f;
	(*uParam0)[3 /*9*/].f_3 = 0.023f;
	(*uParam0)[3 /*9*/].f_4 = 0;
	(*uParam0)[3 /*9*/].f_5 = 0;
	(*uParam0)[3 /*9*/].f_6 = 0;
	(*uParam0)[3 /*9*/].f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(*uParam0)[4 /*9*/].f_1 = fVar0;
	(*uParam0)[4 /*9*/].f_2 = 0.012f;
	(*uParam0)[4 /*9*/].f_3 = 0.023f;
	(*uParam0)[4 /*9*/].f_4 = 0;
	(*uParam0)[4 /*9*/].f_5 = 0;
	(*uParam0)[4 /*9*/].f_6 = 0;
	(*uParam0)[4 /*9*/].f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(*uParam0)[5 /*9*/].f_1 = fVar0;
	(*uParam0)[5 /*9*/].f_2 = 0.012f;
	(*uParam0)[5 /*9*/].f_3 = 0.023f;
	(*uParam0)[5 /*9*/].f_4 = 0;
	(*uParam0)[5 /*9*/].f_5 = 0;
	(*uParam0)[5 /*9*/].f_6 = 0;
	(*uParam0)[5 /*9*/].f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(*uParam0)[6 /*9*/].f_1 = fVar0;
	(*uParam0)[6 /*9*/].f_2 = 0.012f;
	(*uParam0)[6 /*9*/].f_3 = 0.023f;
	(*uParam0)[6 /*9*/].f_4 = 0;
	(*uParam0)[6 /*9*/].f_5 = 0;
	(*uParam0)[6 /*9*/].f_6 = 0;
	(*uParam0)[6 /*9*/].f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(*uParam0)[7 /*9*/].f_1 = fVar0;
	(*uParam0)[7 /*9*/].f_2 = 0.012f;
	(*uParam0)[7 /*9*/].f_3 = 0.023f;
	(*uParam0)[7 /*9*/].f_4 = 0;
	(*uParam0)[7 /*9*/].f_5 = 0;
	(*uParam0)[7 /*9*/].f_6 = 0;
	(*uParam0)[7 /*9*/].f_7 = 250;
}

// Position - 0x8A85
float func_153() {
	float fVar0;

	fVar0 = 0.919f - 0.081f + 0.004f - 0.006f + 0.05f - 0.001f - 0.005f + 0.065f - 0.0005f;
	return fVar0;
}

// Position - 0x8AC6
void func_154(int iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6,
			  char *sParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13,
			  int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20,
			  int iParam21, int iParam22, int iParam23) {
	int *iVar0;
	int *iVar11;
	var *uVar22;
	float *fVar24;

	if (func_27(6, iParam0)) {
		func_155(iParam0, &iVar0, &iVar11, &uVar22, &fVar24, iParam1, 1, sParam2, iParam3, iParam4, iParam5, iParam6,
				 sParam7, iParam8, fParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16,
				 iParam17, iParam18, iParam19, iParam20, iParam21, iParam22, iParam23);
	}
}

// Position - 0x8B15
void func_155(int iParam0, int *iParam1, int *iParam2, var *uParam3, float *fParam4, int iParam5, int iParam6,
			  char *sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char *sParam12, int iParam13,
			  float fParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20,
			  int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27,
			  int iParam28) {
	struct<8> Var0;
	struct<9> Var9;
	struct<9> Var18;
	struct<9> Var27;
	bool bVar36;
	int iVar37;
	struct<9> Var38;
	int iVar47;
	float fVar48;
	float fVar49;
	float fVar50;
	float fVar51;
	struct<8> Var52;
	struct<8> Var61;
	int iVar70;
	char *sVar71;
	char *sVar72;
	int iVar73;
	char *sVar74;
	char *sVar75;
	int iVar76;

	Global_1354542++;
	if (func_96()) {
		func_95(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_95(&Var9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_95(&Var18, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_95(&Var27, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (func_77()) {
			if (iParam23) {
				func_160(iParam1, 0);
			}
			else if (iParam11) {
				func_131(iParam1, 3);
			}
			else {
				func_160(iParam1, 0);
			}
		}
		else if (iParam23) {
			func_94(iParam1, 0);
		}
		else if (iParam11) {
			func_131(iParam1, 3);
		}
		else {
			func_94(iParam1, 0);
		}
		if (Global_2452539 && iParam11) {
			if (func_77()) {
				func_160(iParam1, 0);
			}
			else {
				func_94(iParam1, 0);
			}
		}
		if (iParam5 < 1000000) {
			if (unk::_get_current_language_id() == 8 && fParam14 >= 100f &&
				gameplay::are_strings_equal("AMCH_KMHN", sParam12)) {
				func_93(iParam2, 0, 0);
			}
			else if (unk::_get_current_language_id() == 8 || unk::_get_current_language_id() == 9)
				&&(iParam5 > 999 || iParam19 > 999 || fParam14 > 1000f) { func_93(iParam2, 0, 0); }
			else if (iParam19 > 99) {
				func_92(iParam2, 0, 0);
			}
			else {
				func_91(iParam2, 0, 0);
			}
		}
		else if (unk::_get_current_language_id() == 8 && (gameplay::are_strings_equal("HUD_CASH", sParam12) ||
														  gameplay::are_strings_equal("HUD_CASH_NEG", sParam12))) {
			func_93(iParam2, 0, 0);
		}
		else {
			func_92(iParam2, 0, 0);
		}
		func_89(iParam1);
		func_88(iParam2);
		iParam1->f_9 += 0.03f * (1f - func_123());
		func_87(6, iParam0);
		if (Global_1354542 == 1) {
			func_86(iParam6);
		}
		func_80(iParam2, uParam3, fParam4, iParam6, iParam1);
		if (iParam22 == 1) {
			iParam17 = 2;
			iParam8 = 2;
		}
		func_79(iParam2, iParam8);
		if (iParam9 == 0) {
			func_159(iParam0);
		}
		if (iParam16 == 0) {
			func_158(iParam0);
		}
		graphics::request_streamed_texture_dict("TimerBars", 0);
		if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
			iVar37 = func_78();
			graphics::_set_2d_layer(iVar37);
			if (func_99(iParam9, &Global_1354542.f_86[iParam0 /*2*/], &Global_1354542.f_107[iParam0 /*2*/])) {
				bVar36 = true;
			}
			else {
				bVar36 = false;
			}
			Var27 = *uParam3;
			Var27.f_1 = uParam3->f_1;
			Var0 = *uParam3;
			Var0.f_1 = uParam3->f_1 + 0.001f;
			if (iParam22 == 1) {
				Var27 += 0.079f;
				Var27.f_1 += 0.002f;
				Var27.f_2 += 0.157f;
				Var27.f_3 += 0.049f;
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			else if (iParam5 < 1000000) {
				Var27 += 0.079f;
				Var27.f_1 += 0.008f;
				Var27.f_2 += 0.157f;
				Var27.f_3 += 0.036f;
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			else {
				Var27 += 0.079f;
				Var27.f_1 += 0.01f;
				Var27.f_2 += 0.157f;
				Var27.f_3 += 0.033f;
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			if (func_77()) {
				Var27 += -0.025f;
				Var27.f_2 += 0.05f;
			}
			Global_1354542.f_5760 += Var27.f_3;
			if (iParam16 > 0) {
				Var38 = {Var27};
				if (func_221(&Global_1354542.f_961[iParam0 /*2*/], 2000, 0) == 0) {
					if (func_120(Global_1354542.f_961[iParam0 /*2*/], 1250, 0)) {
						Global_1354542.f_982[iParam0] -= 17;
					}
					Var38.f_7 = Global_1354542.f_982[iParam0];
					if (iParam15 == 2) {
						func_67(&Var38, 6);
					}
					else if (iParam15 == 3) {
						func_67(&Var38, 18);
					}
					else {
						func_67(&Var38, iParam8);
					}
					func_69("TimerBars", "ALL_WHITE_bg", &Var38, 1, 0, iVar37, 0);
				}
			}
			else {
				Global_1354542.f_982[iParam0] = 255;
				func_119(&Global_1354542.f_961[iParam0 /*2*/], 0, 0);
			}
			if (iParam22 == 1) {
				func_69("TimerBars", "ALL_WHITE_bg", &Var27, 1, 0, iVar37, 0);
			}
			else {
				func_69("TimerBars", "ALL_BLACK_bg", &Var27, 1, 0, iVar37, 0);
			}
			func_113(&Var27, iParam24);
			iVar37 = func_78();
			graphics::_set_2d_layer(iVar37);
			func_112(iParam1, iParam17);
			iVar47 = 1;
			if (Global_2452539) {
				iVar47 = 0;
			}
			if (Global_2452540 == 1) {
				iVar47 = 1;
			}
			func_68(iParam1, 0);
			if (func_77()) {
				if (iParam11) {
					if (unk::_get_current_language_id() == 9) {
						uParam3->f_1 += -0.012f;
						fParam4->f_1 += -0.004f;
					}
					else {
						uParam3->f_1 += -0.004f;
					}
				}
				else if (func_77()) {
					if (unk::_get_current_language_id() == 9) {
						uParam3->f_1 += -0.012f;
						fParam4->f_1 += -0.004f;
					}
					else {
						uParam3->f_1 += -0.008f;
					}
				}
			}
			else if (iParam23) {
				uParam3->f_1 += 0f;
			}
			else if (iParam11 && Global_2452539 == 0) {
				uParam3->f_1 += -0.002f - 0.004f;
			}
			if (iParam22 == 1) {
				uParam3->f_1 -= 0.007f;
				fParam4->f_1 -= 0.007f;
			}
			if (iParam21 == 2 && gameplay::is_string_null_or_empty(sParam7)) {
				sParam7 = "HUD_ROCKET";
			}
			else if (iParam21 == 4) {
				sParam7 = "HUD_BOOST";
			}
			else if (iParam21 == 1) {
				sParam7 = "HUD_SPIKES";
			}
			iParam1->f_6 = iParam25;
			iParam2->f_6 = iParam25;
			if (iParam26) {
				iParam2->f_6 = 0;
			}
			if (iParam28) {
				if (bVar36) {
					func_157(iParam1, uParam3, sParam7, iParam17, iParam8, iParam10, iParam11, iVar47);
				}
			}
			else {
				func_157(iParam1, uParam3, sParam7, iParam17, iParam8, iParam10, iParam11, iVar47);
			}
			if (iParam22 == 1) {
				Var9 = iParam2->f_9;
				Var9.f_1 = fParam4->f_1 - 0.0175f;
				Var18 = iParam2->f_9;
				Var18.f_1 = fParam4->f_1 + 0.0175f;
				graphics::request_streamed_texture_dict("MPArrow", 0);
				if (graphics::has_streamed_texture_dict_loaded("MPArrow")) {
					Var9 += 0.0095f;
					Var9 -= 0.015f;
					Var9.f_1 += 0.019f;
					Var9.f_2 += 0.01f;
					Var9.f_3 += 0.01f;
					Var9.f_4 = Var9.f_4;
					Var9.f_5 = Var9.f_5;
					Var9.f_6 = Var9.f_6;
					Var9.f_7 -= 50;
					Var9.f_8 = -90f;
					func_69("MPArrow", "MP_ArrowXLarge", &Var9, 1, 0, iVar37, 0);
					Var18 += 0.0095f;
					Var18 -= 0.015f;
					Var18.f_1 += 0.019f;
					Var18.f_2 += 0.01f;
					Var18.f_3 += 0.01f;
					Var18.f_4 = Var18.f_4;
					Var18.f_5 = Var18.f_5;
					Var18.f_6 = Var18.f_6;
					Var18.f_7 -= 50;
					Var18.f_8 = 90f;
					func_69("MPArrow", "MP_ArrowXLarge", &Var18, 1, 0, iVar37, 0);
				}
			}
			if (iParam18) {
				graphics::request_streamed_texture_dict("CommonMenu", 0);
				if (graphics::has_streamed_texture_dict_loaded("CommonMenu")) {
					fVar48 = 0f;
					if (iParam11 == 1) {
						ui::_begin_text_command_width("STRING");
						ui::add_text_component_substring_player_name(sParam7);
						fVar49 = ui::_end_text_command_get_width(1);
					}
					else {
						ui::_begin_text_command_width(sParam7);
						fVar49 = ui::_end_text_command_get_width(1);
					}
					if (unk::_get_current_language_id() == 8 && iParam11 == 0) {
						fVar50 = 0.153f - 0.072f;
						fVar51 = -0.457f;
					}
					else if (unk::_get_current_language_id() == 10 && iParam11 == 0) {
						fVar50 = 0.153f - 0.01f - 0.06f;
						fVar51 = -0.457f;
					}
					else if (unk::_get_current_language_id() == 9 && iParam11 == 0) {
						fVar50 = 0.153f - 0.012f - 0.06f;
						fVar51 = -0.457f;
					}
					else {
						fVar50 = 0.153f - 0.037f - 0.036f;
						fVar51 = -0.457f + 0.194f;
					}
					fVar50 += 0.03f;
					if (Global_1354542.f_1004) {
						fVar50 += -0.03f;
					}
					if (gameplay::is_pc_version() && !graphics::get_is_widescreen()) {
						fVar50 += -0.015f;
					}
					if (Global_1354542.f_1005 && Global_1354542.f_1004 == 0) {
						fVar50 += -0.015f - 0.003f;
					}
					fVar48 = fVar51 * fVar49 + fVar50;
					Var0 += fVar48;
					Var0 -= 0.015f;
					Var0.f_1 += 0.008f;
					Var0.f_2 += 0.022f;
					Var0.f_3 += 0.04f;
					Var0.f_4 += 194;
					Var0.f_5 += 80;
					Var0.f_6 += 80;
					Var0.f_7 -= 50;
					func_69("CommonMenu", "MP_AlertTriangle", &Var0, 1, 0, iVar37, 0);
				}
			}
			if (bVar36) {
				if (iParam21 != 0) {
					func_156(iParam2);
					Var52 = *fParam4 + 0.145f + 0.001f;
					if (func_77()) {
						Var52.f_1 = fParam4->f_1 + 0.016f - 0.006f;
					}
					else {
						Var52.f_1 = fParam4->f_1 + 0.016f;
					}
					Var52.f_2 = 0.016f + 0.003f;
					Var52.f_3 = 0.032f + 0.004f;
					Var52.f_7 = iParam25;
					func_67(&Var52, 1);
					Var61 = *fParam4 + 0.145f + 0.001f;
					if (func_77()) {
						Var61.f_1 = fParam4->f_1 + 0.016f - 0.006f;
					}
					else {
						Var61.f_1 = fParam4->f_1 + 0.016f;
					}
					Var61.f_2 = 0.016f + 0.003f;
					Var61.f_3 = 0.032f + 0.004f;
					Var61.f_7 = 255;
					func_67(&Var61, 1);
					if (iParam26) {
						Var52.f_7 = 0;
					}
					sVar71 = "";
					iVar73 = 1;
					sVar74 = "";
					iVar76 = 1;
					switch (iParam21) {
					case 5:
						Var52.f_3 += -0.009f;
						Var52.f_2 += -0.002f;
						if (func_77()) {
							Var52.f_1 += 0.0055f;
						}
						else {
							Var52.f_1 += 0.0025f;
						}
						sVar74 = "MPRPSymbol";
						sVar75 = "RP";
						break;

					case 2:
						sVar74 = "TimerBars";
						sVar75 = "Rockets";
						break;

					case 3:
						sVar74 = "MpSpecialRace";
						sVar75 = "HOMING_ROCKET";
						break;

					case 1:
						sVar74 = "TimerBars";
						sVar75 = "Spikes";
						break;

					case 4:
						sVar74 = "TimerBars";
						sVar75 = "Boost";
						break;

					case 6:
						sVar74 = "CrossTheLine";
						sVar75 = "Timer_LargeTick_32";
						iVar76 = 18;
						break;

					case 7:
						sVar74 = "CrossTheLine";
						sVar75 = "Timer_LargeCross_32";
						iVar76 = 6;
						break;

					case 8:
						sVar74 = "TimerBar_Icons";
						sVar75 = "Pickup_Beast";
						iVar76 = 118;
						break;

					case 9:
						sVar74 = "MPSpecialRace";
						sVar75 = "MACHINE_GUN";
						break;

					case 10:
						sVar74 = "TimerBar_Icons";
						sVar75 = "Pickup_Random";
						iVar76 = 118;
						break;

					case 11:
						sVar74 = "TimerBar_Icons";
						sVar75 = "Pickup_Slow_Time";
						break;

					case 12:
						sVar74 = "TimerBar_Icons";
						sVar75 = "Pickup_Swap";
						iVar76 = 118;
						break;

					case 13:
						sVar74 = "TimerBar_Icons";
						sVar75 = "Pickup_Testosterone";
						iVar76 = 118;
						break;

					case 14:
						sVar74 = "TimerBar_Icons";
						sVar75 = "Pickup_Thermal";
						iVar76 = 118;
						break;

					case 15:
						sVar74 = "TimerBar_Icons";
						sVar75 = "Pickup_Weed";
						iVar76 = 118;
						break;

					case 16:
						sVar74 = "TimerBar_Icons";
						sVar75 = "Pickup_Hidden";
						iVar76 = 118;
						break;

					case 17:
					case 18:
						if (iParam27 != func_66()) {
							iVar70 = func_59(iParam27);
							if (iVar70 != 0) {
								sVar74 = ped::get_pedheadshot_txd_string(iVar70);
								sVar75 = ped::get_pedheadshot_txd_string(iVar70);
							}
						}
						if (func_77()) {
							Var52.f_1 = fParam4->f_1 + 0.016f - 0.0005f;
						}
						else {
							Var52.f_1 = fParam4->f_1 + 0.0185f;
						}
						Var52.f_2 = 0.016f + 0.004f;
						Var52.f_3 = 0.032f + 0.002f;
						if (iParam21 == 18) {
							if (func_77()) {
								Var61.f_1 = fParam4->f_1 + 0.016f;
							}
							else {
								Var61.f_1 = fParam4->f_1 + 0.019f;
							}
							Var61.f_2 = 0.016f + 0.004f;
							Var61.f_3 = 0.032f + 0.002f;
							sVar71 = "timerbar_sr";
							sVar72 = "timer_cross";
							iVar73 = iParam17;
							Var52.f_7 = 127;
						}
						break;
					}
					if (!gameplay::is_string_null_or_empty(sVar74)) {
						graphics::request_streamed_texture_dict(sVar74, 0);
						if (graphics::has_streamed_texture_dict_loaded(sVar74)) {
							func_67(&Var52, iVar76);
							func_69(sVar74, sVar75, &Var52, 1, 0, 4, 0);
						}
					}
					if (iParam21 == 18) {
						if (!gameplay::is_string_null_or_empty(sVar71)) {
							graphics::request_streamed_texture_dict(sVar71, 0);
							if (graphics::has_streamed_texture_dict_loaded(sVar71)) {
								func_67(&Var61, iVar73);
								func_69(sVar71, sVar72, &Var61, 1, 0, 4, 0);
							}
						}
					}
				}
				func_68(iParam2, 0);
				iVar37 = func_78();
				graphics::_set_2d_layer(iVar37);
				if (iParam21 == 0 || iParam21 == 5 || iParam21 == 9) {
					if (iParam20) {
						func_56(fParam4, iParam2, "???", "", 1, 2);
					}
					else if (iParam21 == 5) {
						if (iParam13 == 0) {
							func_53(fParam4, iParam2, "HUD_KSMULTI", iParam5, 2);
						}
						else {
							func_51(fParam4, iParam2, "HUD_KSMULTI", fParam14, Global_2454026, 2);
						}
					}
					else if (func_55(sParam12)) {
						if (iParam19 == 0) {
							if (iParam13 == 0) {
								func_53(fParam4, iParam2, "NUMBER", iParam5, 2);
							}
							else {
								func_51(fParam4, iParam2, "NUMBER", fParam14, Global_2454026, 2);
							}
						}
						else {
							func_49(fParam4, iParam2, "TIMER_DASHES", iParam5, iParam19, 2, 0);
						}
					}
					else if (gameplay::are_strings_equal("HUD_CASH", sParam12) ||
							 gameplay::are_strings_equal("HUD_CASH_S", sParam12)) {
						sParam12 = "HUD_CASH_S";
						*iParam2 = 5;
						func_68(iParam2, 0);
						func_44(fParam4, iParam2, sParam12, iParam5, 2);
					}
					else if (gameplay::are_strings_equal("HUD_CASH_NEG", sParam12) ||
							 gameplay::are_strings_equal("HUD_CASH_NEG_S", sParam12)) {
						*iParam2 = 5;
						func_68(iParam2, 0);
						sParam12 = "HUD_CASH_NEG_S";
						func_44(fParam4, iParam2, sParam12, iParam5, 2);
					}
					else if (iParam13 == 0) {
						func_53(fParam4, iParam2, sParam12, iParam5, 2);
					}
					else {
						func_51(fParam4, iParam2, sParam12, fParam14, Global_2454026, 2);
					}
				}
			}
			func_43();
		}
	}
}

// Position - 0x99DE
void func_156(var *uParam0) { uParam0->f_9 = 0.95f - 0.047f + 0.001f + 0.047f - 0.002f - 0.013f - 0.002f - 0.001f; }

// Position - 0x9A19
void func_157(int *iParam0, var *uParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7) {
	if (iParam6 == 1) {
		if (iParam7) {
			func_56(uParam1, iParam0, sParam2, "", iParam3, 2);
		}
		else {
			func_56(uParam1, iParam0, sParam2, "", iParam4, 2);
		}
	}
	else if (iParam5 == -1) {
		func_110(uParam1, iParam0, sParam2, 0, 1);
	}
	else {
		uParam1->f_1 += -0.003f - 0.001f;
		func_53(uParam1, iParam0, sParam2, iParam5, 2);
	}
}

// Position - 0x9A88
void func_158(int iParam0) {
	func_15(&Global_1354542.f_464[iParam0 /*2*/]);
	func_15(&Global_1354542.f_485[iParam0 /*2*/]);
}

// Position - 0x9AAE
void func_159(int iParam0) {
	func_15(&Global_1354542.f_86[iParam0 /*2*/]);
	func_15(&Global_1354542.f_107[iParam0 /*2*/]);
}

// Position - 0x9AD2
void func_160(var *uParam0, int iParam1) {
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.416f + 0.089f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

// Position - 0x9B24
void func_161(int iParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, float fParam6,
			  float fParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, bool bParam13,
			  int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20,
			  bool bParam21, int iParam22, int iParam23, int iParam24) {
	int *iVar0;
	float *fVar11;
	var *uVar13;

	if (func_27(0, iParam0)) {
		uVar13 = 4;
		func_162(iParam0, &iVar0, &fVar11, &uVar13, iParam1, iParam2, 1, sParam3, iParam4, iParam9, iParam8, iParam5,
				 fParam6, fParam7, uParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17,
				 iParam18, bParam19, iParam20, bParam21, iParam22, iParam23, iParam24);
	}
}

// Position - 0x9B78
void func_162(int iParam0, int *iParam1, float *fParam2, var *uParam3, int iParam4, int iParam5, int iParam6,
			  char *sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13,
			  var uParam14, int iParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, int iParam20,
			  int iParam21, int iParam22, bool bParam23, int iParam24, bool bParam25, int iParam26, int iParam27,
			  int iParam28) {
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	float fVar20;
	float fVar21;
	struct<8> Var22;

	Global_1354542++;
	if (func_96()) {
		if (iParam15 == 2) {
		}
		func_87(0, iParam0);
		if (func_77()) {
			if (bParam17) {
				func_172(iParam1, 0);
			}
			else {
				func_132(iParam1, 0);
			}
		}
		else if (bParam19) {
			func_94(iParam1, 0);
		}
		else if (iParam10) {
			func_131(iParam1, 3);
		}
		else if (bParam17) {
			func_171(iParam1, 0);
		}
		else {
			func_94(iParam1, 0);
		}
		if (Global_1354542 == 1) {
			func_86(iParam6);
		}
		func_170(fParam2, uParam3, &Var0, iParam6, fParam12, fParam13, iParam1, bParam17);
		func_89(iParam1);
		iParam1->f_9 += 0.03f * (1f - func_123());
		if (iParam11 == 0) {
			func_122(iParam0);
		}
		if (iParam16 == 0) {
			func_121(iParam0);
		}
		if (func_99(iParam11, &Global_1354542.f_296[iParam0 /*2*/], &Global_1354542.f_317[iParam0 /*2*/])) {
			bVar9 = true;
		}
		else {
			bVar9 = false;
		}
		graphics::request_streamed_texture_dict("TimerBars", 0);
		if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
			iVar10 = func_78();
			graphics::_set_2d_layer(iVar10);
			if (!func_129(fParam12, fParam13)) {
				Var0 = *fParam2;
				Var0.f_1 = fParam2->f_1;
				if (bParam17) {
					Var0 += 0.079f;
					Var0.f_1 += 0.008f;
					Var0.f_2 += 0.157f;
					Var0.f_3 += 0.036f;
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else {
					Var0 += 0.079f;
					Var0.f_1 += 0.012f;
					Var0.f_2 += 0.157f;
					Var0.f_3 += 0.028f;
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_77()) {
					Var0 += -0.025f;
					Var0.f_2 += 0.05f;
				}
				Global_1354542.f_5760 += Var0.f_3;
				if (iParam16 > 0) {
					Var11 = {Var0};
					if (func_221(&Global_1354542.f_737[iParam0 /*2*/], 2000, 0) == 0) {
						if (func_120(Global_1354542.f_737[iParam0 /*2*/], 1250, 0)) {
							Global_1354542.f_758[iParam0] -= 17;
						}
						Var11.f_7 = Global_1354542.f_758[iParam0];
						func_67(&Var11, iParam8);
						func_69("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
					}
				}
				else {
					Global_1354542.f_758[iParam0] = 255;
					func_119(&Global_1354542.f_737[iParam0 /*2*/], 0, 0);
				}
				func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			}
			func_113(&Var0, iParam21);
			if (func_77()) {
				if (bParam17) {
					fParam2->f_1 += -0.01f;
				}
				else if (iParam10) {
					if (unk::_get_current_language_id() == 9) {
						fParam2->f_1 += -0.009f;
					}
					else {
						fParam2->f_1 += -0.003f;
					}
				}
				else if (bParam17 == 0) {
					if (unk::_get_current_language_id() == 9) {
						fParam2->f_1 += -0.009f;
					}
					else {
						fParam2->f_1 += -0.003f;
					}
				}
				else if (unk::_get_current_language_id() == 9) {
					fParam2->f_1 += -0.012f;
				}
				else {
					fParam2->f_1 += -0.008f;
				}
			}
			else if (bParam17) {
				fParam2->f_1 += -0.01f + 0.0022f + 0.001f;
			}
			else if (iParam10) {
				fParam2->f_1 += -0.005f + 0.001f;
				fParam2->f_1 += -0.002f;
			}
			iVar10 = func_78();
			graphics::_set_2d_layer(iVar10);
			if (!func_129(fParam12, fParam13)) {
				if (bParam19) {
					func_112(iParam1, iParam8);
					func_68(iParam1, 0);
					func_56(fParam2, iParam1, sParam7, "", iParam22, 2);
				}
				else if (iParam10 == 1) {
					func_112(iParam1, iParam8);
					func_68(iParam1, 0);
					func_56(fParam2, iParam1, sParam7, "", iParam22, 2);
				}
				else {
					func_68(iParam1, 0);
					if (iParam9 == -1) {
						func_110(fParam2, iParam1, sParam7, 0, 1);
					}
					else {
						func_53(fParam2, iParam1, sParam7, iParam9, 2);
					}
				}
			}
			if (bParam23) {
				if (!func_129(fParam12, fParam13)) {
					fVar20 = func_128() + func_84(iParam6);
					fVar21 = func_127();
				}
				else {
					fVar20 = fParam13;
					fVar21 = fParam12;
				}
				Var22.f_1 = fVar20 + 0.0486f;
				Var22 = fVar21 - 0.0505f;
				Var22.f_2 = 0.18f;
				Var22.f_3 = 0.01f;
				Var22.f_4 = 255;
				Var22.f_5 = 255;
				Var22.f_6 = 255;
				Var22.f_7 = 255;
				func_67(&Var22, iParam24);
				func_69("TimerBars", "TPBar", &Var22, 0, 0, iVar10, 0);
			}
			iVar10 = func_78();
			graphics::_set_2d_layer(iVar10);
			if (bVar9) {
				if (bParam17) {
					func_169(iParam4, iParam5, uParam3, iParam8, uParam14, iVar10, iParam20);
				}
				else {
					func_163(iParam4, iParam5, uParam3, iParam8, uParam14, iVar10, &Global_1354542.f_716[iParam0 /*2*/],
							 iParam18, iParam20, bParam25, iParam26, iParam27, iParam28);
				}
			}
			func_43();
		}
	}
}

// Position - 0xA0AC
void func_163(int iParam0, int iParam1, var *uParam2, int iParam3, var uParam4, int iParam5, var *uParam6, int iParam7,
			  int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12) {
	struct<9> Var0[2];
	float fVar19;
	char *sVar20;

	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.004f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.004f;
	graphics::request_streamed_texture_dict("TimerBars", 0);
	if (iParam8 != 0) {
		graphics::request_streamed_texture_dict("timerbar_lines", 0);
	}
	if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
		func_105(&(*uParam2)[0 /*9*/], &Var0[0 /*9*/]);
		func_105(&(*uParam2)[1 /*9*/], &Var0[1 /*9*/]);
		(*uParam2)[3 /*9*/] = {(*uParam2)[0 /*9*/]};
		func_67(&(*uParam2)[1 /*9*/], iParam3);
		if (bParam9) {
			func_67(&(*uParam2)[3 /*9*/], 3);
		}
		else {
			func_67(&(*uParam2)[3 /*9*/], iParam3);
		}
		if (iParam10 != 0 && iParam0 < iParam10) {
			func_67(&(*uParam2)[1 /*9*/], 6);
		}
		if (iParam12 > 0) {
			if (!func_168(uParam6)) {
				func_167(uParam6, 0, 0);
			}
			else if (func_221(uParam6, iParam12, 0)) {
				func_119(uParam6, 0, 0);
			}
			func_164(&(*uParam2)[1 /*9*/], iParam3, iParam11, iParam12, *uParam6);
		}
		fVar19 = system::to_float(iParam0) / system::to_float(iParam1) * 100f;
		graphics::_set_2d_layer(iParam5);
		(*uParam2)[3 /*9*/].f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", &(*uParam2)[3 /*9*/], 0, 0, iParam5, 0);
		if (bParam9) {
			func_67(&(*uParam2)[3 /*9*/], 3);
		}
		else {
			func_67(&(*uParam2)[3 /*9*/], iParam3);
		}
		(*uParam2)[3 /*9*/].f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", &(*uParam2)[3 /*9*/], 0, 0, iParam5, 0);
		(*uParam2)[3 /*9*/].f_7 = 255;
		func_107((*uParam2)[0 /*9*/], fVar19, &(*uParam2)[1 /*9*/], 1, 1, uParam4);
		graphics::_set_2d_layer(iParam5);
		func_69("TimerBars", "DamageBarFill_128", &(*uParam2)[1 /*9*/], 0, 0, iParam5, 0);
		if (iParam8 != 0) {
			graphics::request_streamed_texture_dict("timerbar_lines", 0);
			if (graphics::has_streamed_texture_dict_loaded("timerbar_lines")) {
				if (iParam8 != 10) {
					sVar20 = "LineMarker90_128";
					switch (iParam8) {
					case 1: sVar20 = "LineMarker10_128"; break;

					case 2: sVar20 = "LineMarker20_128"; break;

					case 3: sVar20 = "LineMarker30_128"; break;

					case 4: sVar20 = "LineMarker40_128"; break;

					case 5: sVar20 = "LineMarker50_128"; break;

					case 6: sVar20 = "LineMarker60_128"; break;

					case 7: sVar20 = "LineMarker70_128"; break;

					case 8: sVar20 = "LineMarker80_128"; break;

					case 9: sVar20 = "LineMarker90_128"; break;
					}
					(*uParam2)[3 /*9*/].f_7 = 255;
					func_67(&(*uParam2)[3 /*9*/], 2);
					func_69("timerbar_lines", sVar20, &(*uParam2)[3 /*9*/], 0, 0, iParam5, 0);
				}
				else {
					(*uParam2)[3 /*9*/].f_7 = 255;
					func_67(&(*uParam2)[3 /*9*/], 2);
					func_69("timerbar_lines", "LineMarker20_128", &(*uParam2)[3 /*9*/], 0, 0, iParam5, 0);
					func_69("timerbar_lines", "LineMarker40_128", &(*uParam2)[3 /*9*/], 0, 0, iParam5, 0);
					func_69("timerbar_lines", "LineMarker60_128", &(*uParam2)[3 /*9*/], 0, 0, iParam5, 0);
					func_69("timerbar_lines", "LineMarker80_128", &(*uParam2)[3 /*9*/], 0, 0, iParam5, 0);
				}
			}
		}
		graphics::_set_2d_layer(iParam5);
		if (iParam7 > 0 && fVar19 >= IntToFloat(iParam7)) {
			func_67(&(*uParam2)[1 /*9*/], 6);
			func_107((*uParam2)[0 /*9*/], system::to_float(iParam7), &(*uParam2)[1 /*9*/], 1, 1, uParam4);
			graphics::_set_2d_layer(iParam5);
			func_69("TimerBars", "DamageBarFill_128", &(*uParam2)[1 /*9*/], 0, 0, iParam5, 0);
			graphics::_set_2d_layer(iParam5);
		}
		graphics::_set_2d_layer(iParam5);
	}
}

// Position - 0xA41C
void func_164(var *uParam0, int iParam1, int iParam2, int iParam3, var *uParam4, var uParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;

	iVar8 = func_166(&uParam4, 0, 0);
	if (iParam3 / 2 > iVar8) {
		fVar9 = system::to_float(iVar8 / 2) / system::to_float(iParam3 / 2);
		ui::get_hud_colour(iParam1, &iVar0, &iVar1, &iVar2, &iVar3);
		ui::get_hud_colour(iParam2, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	else {
		fVar9 = system::to_float(iVar8) / system::to_float(iParam3);
		ui::get_hud_colour(iParam2, &iVar0, &iVar1, &iVar2, &iVar3);
		ui::get_hud_colour(iParam1, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	uParam0->f_4 = system::floor(func_165(system::to_float(iVar0), system::to_float(iVar4), fVar9));
	uParam0->f_5 = system::floor(func_165(system::to_float(iVar1), system::to_float(iVar5), fVar9));
	uParam0->f_6 = system::floor(func_165(system::to_float(iVar2), system::to_float(iVar6), fVar9));
	uParam0->f_7 = system::floor(func_165(system::to_float(iVar3), system::to_float(iVar7), fVar9));
}

// Position - 0xA4FC
float func_165(float fParam0, float fParam1, float fParam2) { return (1f - fParam2) * fParam0 + fParam2 * fParam1; }

// Position - 0xA511
var func_166(var *uParam0, int iParam1, int iParam2) {
	if (network::network_is_game_in_progress() && !iParam1) {
		if (!iParam2) {
			return network::get_time_difference(network::get_network_time(), *uParam0);
		}
		else {
			return network::get_time_difference(network::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return network::get_time_difference(gameplay::get_game_timer(), *uParam0);
}

// Position - 0xA558
void func_167(var *uParam0, int iParam1, int iParam2) {
	if (uParam0->f_1 == 0) {
		if (network::network_is_game_in_progress() && !iParam1) {
			if (!iParam2) {
				*uParam0 = network::get_network_time();
			}
			else {
				*uParam0 = network::_0x89023FBBF9200E9F();
			}
		}
		else {
			*uParam0 = gameplay::get_game_timer();
		}
		uParam0->f_1 = 1;
	}
}

// Position - 0xA59D
bool func_168(var *uParam0) { return uParam0->f_1; }

// Position - 0xA5A9
void func_169(int iParam0, int iParam1, var *uParam2, int iParam3, var uParam4, int iParam5, int iParam6) {
	struct<9> Var0[2];
	float fVar19;
	char *sVar20;

	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.016f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.016f;
	graphics::request_streamed_texture_dict("TimerBars", 0);
	if (iParam6 != 0) {
		graphics::request_streamed_texture_dict("timerbar_lines", 0);
	}
	if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
		func_105(&(*uParam2)[0 /*9*/], &Var0[0 /*9*/]);
		func_105(&(*uParam2)[1 /*9*/], &Var0[1 /*9*/]);
		(*uParam2)[3 /*9*/] = {(*uParam2)[0 /*9*/]};
		func_67(&(*uParam2)[1 /*9*/], iParam3);
		func_67(&(*uParam2)[3 /*9*/], iParam3);
		fVar19 = system::to_float(iParam0) / system::to_float(iParam1) * 100f;
		graphics::_set_2d_layer(iParam5);
		(*uParam2)[3 /*9*/].f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", &(*uParam2)[3 /*9*/], 0, 0, iParam5, 0);
		func_67(&(*uParam2)[3 /*9*/], iParam3);
		(*uParam2)[3 /*9*/].f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", &(*uParam2)[3 /*9*/], 0, 0, iParam5, 0);
		(*uParam2)[3 /*9*/].f_7 = 255;
		func_107((*uParam2)[0 /*9*/], fVar19, &(*uParam2)[1 /*9*/], 1, 1, uParam4);
		graphics::_set_2d_layer(iParam5);
		func_69("TimerBars", "DamageBarFill_128", &(*uParam2)[1 /*9*/], 0, 0, iParam5, 0);
		if (iParam6 != 0) {
			graphics::request_streamed_texture_dict("timerbar_lines", 0);
			if (graphics::has_streamed_texture_dict_loaded("timerbar_lines")) {
				sVar20 = "LineMarker90_128";
				switch (iParam6) {
				case 1: sVar20 = "LineMarker10_128"; break;

				case 2: sVar20 = "LineMarker20_128"; break;

				case 3: sVar20 = "LineMarker30_128"; break;

				case 4: sVar20 = "LineMarker40_128"; break;

				case 5: sVar20 = "LineMarker50_128"; break;

				case 6: sVar20 = "LineMarker60_128"; break;

				case 7: sVar20 = "LineMarker70_128"; break;

				case 8: sVar20 = "LineMarker80_128"; break;

				case 9: sVar20 = "LineMarker90_128"; break;
				}
				(*uParam2)[1 /*9*/].f_7 = 255;
				func_67(&(*uParam2)[1 /*9*/], 2);
				func_69("timerbar_lines", sVar20, &(*uParam2)[1 /*9*/], 0, 0, iParam5, 0);
			}
		}
		graphics::_set_2d_layer(iParam5);
		graphics::_set_2d_layer(iParam5);
	}
}

// Position - 0xA7D1
void func_170(var *uParam0, var *uParam1, var *uParam2, int iParam3, float fParam4, float fParam5, var *uParam6,
			  int iParam7) {
	float fVar0;

	fVar0 = func_130(iParam7, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_84(iParam3);
	uParam0->f_1 += func_83(uParam6);
	func_126(uParam1, iParam3, fParam4, fParam5);
	if (!func_129(fParam4, fParam5)) {
		func_81(iParam3, -fVar0);
	}
	func_95(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

// Position - 0xA834
void func_171(var *uParam0, int iParam1) {
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.508f - 0.03f - 0.106f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 21;
}

// Position - 0xA88C
void func_172(var *uParam0, int iParam1) {
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.508f - 0.03f + 0.086f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

// Position - 0xA8E4
void func_173(int iParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14,
			  int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21) {
	int *iVar0;
	float *fVar11;
	var *uVar13;
	int *iVar113;
	float *fVar124;
	var *uVar126;

	if (func_27(1, iParam0)) {
		uVar13 = 11;
		func_174(iParam0, &iVar0, &fVar11, &uVar13, &uVar126, &iVar113, &fVar124, iParam1, iParam2, 1, sParam3, iParam4,
				 iParam5, iParam6, iParam7, fParam8, fParam9, iParam10, iParam11, 1, iParam12, iParam13, iParam14,
				 iParam15, iParam16, iParam17, iParam18, iParam19, iParam20, iParam21);
	}
}

// Position - 0xA93A
void func_174(int iParam0, int *iParam1, float *fParam2, var *uParam3, var *uParam4, int *iParam5, float *fParam6,
			  int iParam7, int iParam8, int iParam9, char *sParam10, int iParam11, int iParam12, int iParam13,
			  int iParam14, float fParam15, float fParam16, int iParam17, int iParam18, int iParam19, int iParam20,
			  int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27,
			  int iParam28, int iParam29) {
	struct<9> Var0;
	struct<2> Var9;
	vector3 vVar11;
	bool bVar22;
	int iVar23;
	int iVar24;
	struct<9> Var25;

	Global_1354542++;
	if (func_96()) {
		if (iParam17 == 2) {
		}
		func_87(1, iParam0);
		if (func_77()) {
			func_132(iParam1, 0);
		}
		else if (iParam13) {
			func_131(iParam1, 3);
		}
		else {
			func_94(iParam1, 0);
		}
		func_94(&vVar11, 0);
		vVar11.z += 0.166f + 0.095f;
		if (Global_1354542 == 1) {
			func_86(iParam9);
		}
		func_182(iParam5, 0, 0);
		func_88(iParam5);
		func_68(iParam5, 0);
		iVar23 = 0;
		if (iParam20 > 0) {
			iVar23 = 1;
		}
		func_180(iParam8, fParam2, uParam3, &Var0, fParam6, iParam5, uParam4, iParam9, fParam15, fParam16, iParam1,
				 iVar23);
		Var9 = *fParam2;
		Var9.f_1 = fParam2->f_1;
		Var9.f_1 += -0.006f - 0.007f;
		func_89(iParam1);
		iParam1->f_9 += 0.03f * (1f - func_123());
		func_179(&vVar11);
		if (iParam14 == 0) {
			func_178(iParam0);
		}
		if (iParam18 == 0) {
			func_177(iParam0);
		}
		graphics::request_streamed_texture_dict("TimerBars", 0);
		if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
			iVar24 = func_78();
			graphics::_set_2d_layer(iVar24);
			if (func_99(iParam14, &Global_1354542.f_254[iParam0 /*2*/], &Global_1354542.f_275[iParam0 /*2*/])) {
				bVar22 = true;
			}
			else {
				bVar22 = false;
			}
			if (!func_129(fParam15, fParam16)) {
				Var0 = *fParam2;
				Var0.f_1 = fParam2->f_1;
				if (iParam8 < 9 && iParam20 == 0) {
					Var0 += 0.079f;
					Var0.f_1 += 0.012f;
					Var0.f_2 += 0.157f;
					Var0.f_3 += 0.028f;
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else {
					Var0 += 0.079f;
					Var0.f_1 += 0.008f;
					Var0.f_2 += 0.157f;
					Var0.f_3 += 0.036f;
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_77()) {
					Var0 += -0.025f;
					Var0.f_2 += 0.05f;
				}
				Global_1354542.f_5760 += Var0.f_3;
				if (iParam7 == iParam8 && iParam7 > 0 || iParam18 > 0) {
					Var25 = {Var0};
					if (func_221(&Global_1354542.f_929[iParam0 /*2*/], 2000, 0) == 0) {
						if (func_120(Global_1354542.f_929[iParam0 /*2*/], 1250, 0)) {
							Global_1354542.f_950[iParam0] -= 17;
						}
						Var25.f_7 = Global_1354542.f_950[iParam0];
						func_67(&Var25, iParam11);
						func_69("TimerBars", "ALL_WHITE_bg", &Var25, 1, 0, iVar24, 0);
					}
				}
				else {
					Global_1354542.f_950[iParam0] = 255;
					func_119(&Global_1354542.f_929[iParam0 /*2*/], 0, 0);
				}
				func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar24, 0);
			}
			func_113(&Var0, iParam29);
			if (iParam13) {
				if (unk::_get_current_language_id() == 9) {
					fParam2->f_1 += -0.009f;
				}
				else {
					fParam2->f_1 += -0.003f;
					if (func_77() == 0) {
						fParam2->f_1 += -0.002f;
					}
				}
			}
			else if (func_77()) {
				if (unk::_get_current_language_id() == 9) {
					fParam2->f_1 += -0.009f;
				}
				else {
					fParam2->f_1 += -0.003f;
				}
			}
			iVar24 = func_78();
			graphics::_set_2d_layer(iVar24);
			if (!func_129(fParam15, fParam16)) {
				func_68(iParam1, 0);
				if (iParam13 == 1) {
					func_56(fParam2, iParam1, sParam10, "", 1, 2);
				}
				else if (iParam12 == -1) {
					func_110(fParam2, iParam1, sParam10, 0, 1);
				}
				else {
					func_53(fParam2, iParam1, sParam10, iParam12, 2);
				}
			}
			if (iParam20 > 0) {
				func_53(&Var9, &vVar11, "HUD_MULTSMAL", iParam20, 2);
			}
			if (bVar22) {
				func_175(iParam7, iParam8, uParam3, iParam5, fParam6, iParam11, iVar24, iParam19, iParam21, iParam22,
						 iParam23, iParam24, iParam25, iParam26, iParam27, iParam28);
			}
			func_43();
		}
	}
}

// Position - 0xAD7B
void func_175(int iParam0, int iParam1, var *uParam2, int *iParam3, float *fParam4, int iParam5, int iParam6,
			  int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13,
			  int iParam14, int iParam15) {
	float fVar0;
	int iVar1;
	char *sVar2;

	if (iParam1 < 9) {
		fVar0 = -0.0094f;
		graphics::request_streamed_texture_dict("TimerBars", 0);
		if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
			iVar1 = 0;
			while (iVar1 <= iParam1 - 1) {
				(*uParam2)[iVar1 /*9*/] += fVar0 * IntToFloat(iVar1);
				if (iParam1 - iVar1 > iParam0) {
					func_67(&(*uParam2)[iVar1 /*9*/], iParam5);
					(*uParam2)[iVar1 /*9*/].f_7 = 51;
					func_69("TimerBars", "Circle_checkpoints_Outline", &(*uParam2)[iVar1 /*9*/], 0, 0, iParam6, 0);
				}
				else {
					func_67(&(*uParam2)[iVar1 /*9*/], iParam5);
					func_69("TimerBars", "Circle_checkpoints", &(*uParam2)[iVar1 /*9*/], 0, 0, iParam6, 0);
					if (func_145(iVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15)) {
						func_67(&(*uParam2)[iVar1 /*9*/], 2);
						func_69("Cross", "Circle_checkpoints_Cross", &(*uParam2)[iVar1 /*9*/], 0, 0, iParam6, 0);
					}
				}
				iVar1++;
			}
		}
	}
	else if (iParam5 == 1) {
		func_49(fParam4, iParam3, "TIMER_DASHES", iParam0, iParam1, 2, 0);
	}
	else {
		func_176(iParam3);
		if (iParam7) {
			graphics::request_streamed_texture_dict("TimerBars", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
				(*uParam2)[0 /*9*/] += 0.058f - 0.06f;
				(*uParam2)[0 /*9*/].f_1 += -0.005f;
				(*uParam2)[0 /*9*/].f_2 += 0.003f - 0.005f + 0.002f;
				(*uParam2)[0 /*9*/].f_3 += 0.009f - 0.01f;
				func_67(&(*uParam2)[0 /*9*/], iParam5);
				func_69("TimerBars", "Circle_checkpoints_Big", &(*uParam2)[0 /*9*/], 0, 0, iParam6, 0);
			}
		}
		sVar2 = "TIMER_DASHES";
		if (iParam7 == 1 && iParam0 > 99 && iParam1 > 99) {
			sVar2 = "TIMER_DASHES";
		}
		func_49(fParam4, iParam3, sVar2, iParam0, iParam1, 2, 0);
	}
}

// Position - 0xAF57
void func_176(int *iParam0) { iParam0->f_9 = 0.95f - 0.047f + 0.001f + 0.047f - 0.002f - 0.013f; }

// Position - 0xAF86
void func_177(int iParam0) {
	func_15(&Global_1354542.f_632[iParam0 /*2*/]);
	func_15(&Global_1354542.f_653[iParam0 /*2*/]);
}

// Position - 0xAFAC
void func_178(int iParam0) {
	func_15(&Global_1354542.f_254[iParam0 /*2*/]);
	func_15(&Global_1354542.f_275[iParam0 /*2*/]);
	Global_1354542.f_1475.f_205[iParam0] = -1;
}

// Position - 0xAFDF
void func_179(var *uParam0) {
	float fVar0;

	fVar0 = 0.88f - 0.062f + 0.026f + 0.027f + 0.037f + 0.003f;
	uParam0->f_9 = fVar0;
}

// Position - 0xB012
void func_180(int iParam0, var *uParam1, var *uParam2, var *uParam3, var *uParam4, int *iParam5, var *uParam6,
			  int iParam7, float fParam8, float fParam9, var *uParam10, int iParam11) {
	float fVar0;

	fVar0 = func_85(iParam5);
	if (iParam0 < 9) {
		fVar0 = func_130(iParam11, 0);
	}
	*uParam1 = 0.795f;
	uParam1->f_1 = func_84(iParam7);
	uParam1->f_1 += func_83(uParam10);
	*uParam4 = 0.795f;
	uParam4->f_1 = uParam1->f_1 + func_82(iParam5);
	func_181(uParam2, iParam7, fParam8, fParam9);
	func_151(uParam6);
	if (!func_129(fParam8, fParam9)) {
		func_81(iParam7, -fVar0);
	}
	func_95(uParam3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

// Position - 0xB0A1
void func_181(var *uParam0, int iParam1, float fParam2, float fParam3) {
	float fVar0;
	float fVar1;

	if (!func_129(fParam2, fParam3)) {
		fVar0 = func_128() + func_84(iParam1);
		fVar1 = func_153();
	}
	else {
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(*uParam0)[0 /*9*/].f_1 = fVar0;
	(*uParam0)[0 /*9*/].f_2 = 0.012f;
	(*uParam0)[0 /*9*/].f_3 = 0.023f;
	(*uParam0)[0 /*9*/].f_4 = 0;
	(*uParam0)[0 /*9*/].f_5 = 0;
	(*uParam0)[0 /*9*/].f_6 = 0;
	(*uParam0)[0 /*9*/].f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(*uParam0)[1 /*9*/].f_1 = fVar0;
	(*uParam0)[1 /*9*/].f_2 = 0.012f;
	(*uParam0)[1 /*9*/].f_3 = 0.023f;
	(*uParam0)[1 /*9*/].f_4 = 0;
	(*uParam0)[1 /*9*/].f_5 = 0;
	(*uParam0)[1 /*9*/].f_6 = 0;
	(*uParam0)[1 /*9*/].f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(*uParam0)[2 /*9*/].f_1 = fVar0;
	(*uParam0)[2 /*9*/].f_2 = 0.012f;
	(*uParam0)[2 /*9*/].f_3 = 0.023f;
	(*uParam0)[2 /*9*/].f_4 = 0;
	(*uParam0)[2 /*9*/].f_5 = 0;
	(*uParam0)[2 /*9*/].f_6 = 0;
	(*uParam0)[2 /*9*/].f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(*uParam0)[3 /*9*/].f_1 = fVar0;
	(*uParam0)[3 /*9*/].f_2 = 0.012f;
	(*uParam0)[3 /*9*/].f_3 = 0.023f;
	(*uParam0)[3 /*9*/].f_4 = 0;
	(*uParam0)[3 /*9*/].f_5 = 0;
	(*uParam0)[3 /*9*/].f_6 = 0;
	(*uParam0)[3 /*9*/].f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(*uParam0)[4 /*9*/].f_1 = fVar0;
	(*uParam0)[4 /*9*/].f_2 = 0.012f;
	(*uParam0)[4 /*9*/].f_3 = 0.023f;
	(*uParam0)[4 /*9*/].f_4 = 0;
	(*uParam0)[4 /*9*/].f_5 = 0;
	(*uParam0)[4 /*9*/].f_6 = 0;
	(*uParam0)[4 /*9*/].f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(*uParam0)[5 /*9*/].f_1 = fVar0;
	(*uParam0)[5 /*9*/].f_2 = 0.012f;
	(*uParam0)[5 /*9*/].f_3 = 0.023f;
	(*uParam0)[5 /*9*/].f_4 = 0;
	(*uParam0)[5 /*9*/].f_5 = 0;
	(*uParam0)[5 /*9*/].f_6 = 0;
	(*uParam0)[5 /*9*/].f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(*uParam0)[6 /*9*/].f_1 = fVar0;
	(*uParam0)[6 /*9*/].f_2 = 0.012f;
	(*uParam0)[6 /*9*/].f_3 = 0.023f;
	(*uParam0)[6 /*9*/].f_4 = 0;
	(*uParam0)[6 /*9*/].f_5 = 0;
	(*uParam0)[6 /*9*/].f_6 = 0;
	(*uParam0)[6 /*9*/].f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(*uParam0)[7 /*9*/].f_1 = fVar0;
	(*uParam0)[7 /*9*/].f_2 = 0.012f;
	(*uParam0)[7 /*9*/].f_3 = 0.023f;
	(*uParam0)[7 /*9*/].f_4 = 0;
	(*uParam0)[7 /*9*/].f_5 = 0;
	(*uParam0)[7 /*9*/].f_6 = 0;
	(*uParam0)[7 /*9*/].f_7 = 250;
	(*uParam0)[8 /*9*/] = fVar1;
	(*uParam0)[8 /*9*/].f_1 = fVar0;
	(*uParam0)[8 /*9*/].f_2 = 0.012f;
	(*uParam0)[8 /*9*/].f_3 = 0.023f;
	(*uParam0)[8 /*9*/].f_4 = 0;
	(*uParam0)[8 /*9*/].f_5 = 0;
	(*uParam0)[8 /*9*/].f_6 = 0;
	(*uParam0)[8 /*9*/].f_7 = 250;
	(*uParam0)[9 /*9*/] = fVar1;
	(*uParam0)[9 /*9*/].f_1 = fVar0;
	(*uParam0)[9 /*9*/].f_2 = 0.012f;
	(*uParam0)[9 /*9*/].f_3 = 0.023f;
	(*uParam0)[9 /*9*/].f_4 = 0;
	(*uParam0)[9 /*9*/].f_5 = 0;
	(*uParam0)[9 /*9*/].f_6 = 0;
	(*uParam0)[9 /*9*/].f_7 = 250;
}

// Position - 0xB3BB
void func_182(var *uParam0, int iParam1, int iParam2) {
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.469f + 0.096f - 0.017f + 0.022f - 0.062f - 0.001f - 0.013f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

// Position - 0xB42C
void func_183(int iParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9, int iParam10, int iParam11) {
	int *iVar0;
	int *iVar11;
	var *uVar22;
	float *fVar24;

	if (func_27(5, iParam0)) {
		func_155(iParam0, &iVar0, &iVar11, &uVar22, &fVar24, iParam1, 1, sParam3, iParam4, iParam5, iParam6, iParam7,
				 "", 0, 0f, iParam8, iParam9, iParam10, 0, iParam2, 0, 0, 0, 0, iParam11, 255, 0, 0, 0);
	}
}

// Position - 0xB472
void func_184(int iParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14,
			  int iParam15) {
	int *iVar0;
	int *iVar11;
	var *uVar22;
	float *fVar24;

	if (func_27(4, iParam0)) {
		func_155(iParam0, &iVar0, &iVar11, &uVar22, &fVar24, iParam1, 1, sParam3, iParam4, iParam5, iParam6, iParam7,
				 "", 0, 0f, iParam8, iParam9, iParam12, iParam10, iParam2, 0, 0, 0, iParam11, iParam13, iParam14, 0, 0,
				 iParam15);
	}
}

// Position - 0xB4BB
void func_185(int iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6,
			  char *sParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12) {
	int *iVar0;
	int *iVar11;
	var *uVar22;
	float *fVar24;

	if (func_27(3, iParam0)) {
		func_155(iParam0, &iVar0, &iVar11, &uVar22, &fVar24, iParam1, 1, sParam2, iParam3, iParam4, iParam5, iParam6,
				 sParam7, 0, 0f, iParam10, iParam11, iParam8, 0, 0, bParam9, 0, 0, 0, iParam12, 255, 0, 0, 0);
	}
}

// Position - 0xB500
void func_186(int iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14,
			  int iParam15, int iParam16, bool bParam17) {
	int *iVar0;
	int *iVar11;
	var *uVar22;
	var *uVar33;
	float *fVar35;
	var *uVar37;

	if (func_27(7, iParam0)) {
		func_187(iParam0, &iVar0, &iVar11, &uVar22, &uVar33, &fVar35, &uVar37, iParam1, 1, iParam3, iParam4, sParam2,
				 iParam6, iParam5, iParam7, iParam8, iParam9, iParam10, iParam11, bParam12, iParam13, iParam14,
				 iParam15, iParam16, bParam17);
	}
}

// Position - 0xB547
void func_187(int iParam0, int *iParam1, int *iParam2, var *uParam3, var *uParam4, float *fParam5, var *uParam6,
			  int iParam7, int iParam8, int iParam9, int iParam10, char *sParam11, int iParam12, int iParam13,
			  int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20,
			  int iParam21, int iParam22, int iParam23, bool bParam24) {
	int *iVar0;
	var *uVar11;
	struct<9> Var13;
	bool bVar22;
	int iVar23;
	struct<8> Var24;
	struct<9> Var33;

	Global_1354542++;
	if (iParam17 == 2) {
	}
	func_95(&Var13, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	func_87(7, iParam0);
	if (iParam21) {
		func_94(iParam1, 0);
	}
	else if (iParam16) {
		func_131(iParam1, 3);
	}
	else if (func_77()) {
		func_160(iParam1, 0);
	}
	else {
		func_94(iParam1, 0);
	}
	func_201(&iVar0, 0);
	switch (iParam13) {
	case 1:
	case 0:
	case 5:
		if (bParam19) {
			func_200(uParam3, 0);
			func_182(iParam2, 0, 0);
		}
		else {
			func_200(uParam3, 0);
			func_182(iParam2, 0, 5);
		}
		func_88(iParam2);
		func_88(uParam3);
		break;

	case 2:
		func_182(iParam2, 0, 0);
		func_88(&iVar0);
		func_88(uParam3);
		func_199(iParam2);
		break;

	case 3:
		func_182(iParam2, 0, 0);
		func_88(&iVar0);
		func_88(uParam3);
		func_199(iParam2);
		break;

	case 4:
		func_182(uParam3, 0, 0);
		if (bParam19) {
			func_182(iParam2, 0, 0);
		}
		else {
			func_182(iParam2, 0, 5);
		}
		func_88(iParam2);
		func_88(uParam3);
		break;
	}
	func_89(iParam1);
	if (Global_1354542.f_1004 == 0 && Global_1354542.f_1005 == 0) {
		if (iParam13 == 1) {
			iParam1->f_9 += -0.016f;
			if (func_77()) {
				iParam1->f_9 += -0.008f;
			}
		}
	}
	else if (Global_1354542.f_1004 == 0 && Global_1354542.f_1005 == 1) {
		if (iParam13 == 1) {
			iParam1->f_9 += 0f;
			if (func_77()) {
				iParam1->f_9 += -0.009f;
			}
		}
	}
	if (Global_1354542 == 1) {
		func_86(iParam8);
	}
	func_198(iParam2, uParam4, fParam5, uParam6, iParam8, iParam1, &iVar0, &uVar11);
	iParam1->f_9 += 0.03f * (1f - func_123());
	func_79(iParam2, iParam12);
	if (iParam14 == 0) {
		func_197(iParam0);
	}
	if (iParam18 == 0) {
		func_196(iParam0);
	}
	graphics::request_streamed_texture_dict("TimerBars", 0);
	if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
		iVar23 = func_78();
		graphics::_set_2d_layer(iVar23);
		if (func_99(iParam14, &Global_1354542.f_170[iParam0 /*2*/], &Global_1354542.f_191[iParam0 /*2*/])) {
			bVar22 = true;
		}
		else {
			bVar22 = false;
		}
		Var13 = *uParam4;
		Var13.f_1 = uParam4->f_1;
		if (Global_1354542.f_997 == 1) {
			Var13 += -0.113f;
		}
		switch (iParam13) {
		case 1:
		case 0:
		case 5:
			Var13 += 0.079f;
			Var13.f_1 += 0.008f;
			Var13.f_2 += 0.157f;
			Var13.f_3 += 0.036f;
			Var13.f_4 += 255;
			Var13.f_5 += 255;
			Var13.f_6 += 255;
			Var13.f_7 = 140;
			break;

		case 2:
			Var13 += 0.079f;
			Var13.f_1 += 0.008f;
			Var13.f_2 += 0.157f;
			Var13.f_3 += 0.036f;
			Var13.f_4 += 255;
			Var13.f_5 += 255;
			Var13.f_6 += 255;
			Var13.f_7 = 140;
			break;

		case 3:
			Var13 += 0.079f;
			Var13.f_1 += 0.008f;
			Var13.f_2 += 0.157f;
			Var13.f_3 += 0.036f;
			Var13.f_4 += 255;
			Var13.f_5 += 255;
			Var13.f_6 += 255;
			Var13.f_7 = 140;
			break;

		case 4:
			Var13 += 0.079f;
			Var13.f_1 += 0.008f;
			Var13.f_2 += 0.157f;
			Var13.f_3 += 0.036f;
			Var13.f_4 += 255;
			Var13.f_5 += 255;
			Var13.f_6 += 255;
			Var13.f_7 = 140;
			break;
		}
		Var24 = *fParam5 + 0.145f + 0.001f;
		if (func_77()) {
			Var24.f_1 = fParam5->f_1 + 0.019f - 0.006f;
		}
		else {
			Var24.f_1 = fParam5->f_1 + 0.019f;
		}
		Var24.f_2 = 0.016f + 0.003f;
		Var24.f_3 = 0.032f + 0.004f;
		Var24.f_7 = 255;
		func_67(&Var24, 1);
		Var24 = iParam1->f_9 - (iParam2->f_9 - iParam1->f_9) / 8f;
		if (func_77()) {
			Var24 -= 0.003f;
		}
		switch (iParam23) {
		case 5:
			Var24.f_3 += -0.009f;
			Var24.f_2 += -0.002f;
			if (func_77()) {
				Var24.f_1 += 0.0055f;
			}
			else {
				Var24.f_1 += 0.0025f;
			}
			graphics::request_streamed_texture_dict("MPRPSymbol", 0);
			if (graphics::has_streamed_texture_dict_loaded("MPRPSymbol")) {
				func_69("MPRPSymbol", "RP", &Var24, 1, 0, 4, 0);
			}
			break;

		case 2:
			graphics::request_streamed_texture_dict("TimerBars", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
				func_69("TimerBars", "Rockets", &Var24, 1, 0, 4, 0);
			}
			break;

		case 1:
			graphics::request_streamed_texture_dict("TimerBars", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
				func_69("TimerBars", "Spikes", &Var24, 1, 0, 4, 0);
			}
			break;

		case 4:
			graphics::request_streamed_texture_dict("TimerBars", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBars")) {
				func_69("TimerBars", "Boost", &Var24, 1, 0, 4, 0);
			}
			break;

		case 6:
			graphics::request_streamed_texture_dict("CrossTheLine", 0);
			if (graphics::has_streamed_texture_dict_loaded("CrossTheLine")) {
				func_67(&Var24, 18);
				func_69("CrossTheLine", "Timer_LargeTick_32", &Var24, 1, 0, 4, 0);
			}
			break;

		case 7:
			graphics::request_streamed_texture_dict("CrossTheLine", 0);
			if (graphics::has_streamed_texture_dict_loaded("CrossTheLine")) {
				func_67(&Var24, 6);
				func_69("CrossTheLine", "Timer_LargeCross_32", &Var24, 1, 0, 4, 0);
			}
			break;

		case 8:
			graphics::request_streamed_texture_dict("TimerBar_Icons", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBar_Icons")) {
				func_67(&Var24, 118);
				func_69("TimerBar_Icons", "Pickup_Beast", &Var24, 1, 0, 4, 0);
			}
			break;

		case 9:
			graphics::request_streamed_texture_dict("TimerBar_Icons", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBar_Icons")) {
				func_67(&Var24, 118);
				func_69("TimerBar_Icons", "Pickup_B_Time", &Var24, 1, 0, 4, 0);
			}
			break;

		case 10:
			graphics::request_streamed_texture_dict("TimerBar_Icons", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBar_Icons")) {
				func_67(&Var24, 118);
				func_69("TimerBar_Icons", "Pickup_Random", &Var24, 1, 0, 4, 0);
			}
			break;

		case 11:
			graphics::request_streamed_texture_dict("TimerBar_Icons", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBar_Icons")) {
				func_67(&Var24, 118);
				func_69("TimerBar_Icons", "Pickup_Slow_Time", &Var24, 1, 0, 4, 0);
			}
			break;

		case 12:
			graphics::request_streamed_texture_dict("TimerBar_Icons", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBar_Icons")) {
				func_67(&Var24, 118);
				func_69("TimerBar_Icons", "Pickup_Swap", &Var24, 1, 0, 4, 0);
			}
			break;

		case 13:
			graphics::request_streamed_texture_dict("TimerBar_Icons", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBar_Icons")) {
				func_67(&Var24, 118);
				func_69("TimerBar_Icons", "Pickup_Testosterone", &Var24, 1, 0, 4, 0);
			}
			break;

		case 14:
			graphics::request_streamed_texture_dict("TimerBar_Icons", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBar_Icons")) {
				func_67(&Var24, 118);
				func_69("TimerBar_Icons", "Pickup_Thermal", &Var24, 1, 0, 4, 0);
			}
			break;

		case 15:
			graphics::request_streamed_texture_dict("TimerBar_Icons", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBar_Icons")) {
				func_67(&Var24, 118);
				func_69("TimerBar_Icons", "Pickup_Weed", &Var24, 1, 0, 4, 0);
			}
			break;

		case 16:
			graphics::request_streamed_texture_dict("TimerBar_Icons", 0);
			if (graphics::has_streamed_texture_dict_loaded("TimerBar_Icons")) {
				func_67(&Var24, 118);
				func_69("TimerBar_Icons", "Pickup_Hidden", &Var24, 1, 0, 4, 0);
			}
			break;
		}
		if (func_77()) {
			Var13 += -0.025f;
			Var13.f_2 += 0.05f;
		}
		Global_1354542.f_5760 += Var13.f_3;
		if (Global_1354542.f_997 == 0) {
			if (iParam18 > 0) {
				Var33 = {Var13};
				if (func_221(&Global_1354542.f_865[iParam0 /*2*/], 2000, 0) == 0) {
					if (func_120(Global_1354542.f_865[iParam0 /*2*/], 1250, 0)) {
						Global_1354542.f_886[iParam0] -= 17;
					}
					Var33.f_7 = Global_1354542.f_886[iParam0];
					if (iParam17 == 2) {
						func_67(&Var33, 6);
					}
					else if (iParam17 == 3) {
						func_67(&Var33, 18);
					}
					else {
						func_67(&Var33, iParam12);
					}
					func_69("TimerBars", "ALL_WHITE_bg", &Var33, 1, 0, iVar23, 0);
				}
			}
			else {
				Global_1354542.f_886[iParam0] = 255;
				func_119(&Global_1354542.f_865[iParam0 /*2*/], 0, 0);
			}
			func_69("TimerBars", "ALL_BLACK_bg", &Var13, 1, 0, iVar23, 0);
		}
		func_113(&Var13, iParam22);
		if (iParam16) {
			if (unk::_get_current_language_id() == 9) {
				uParam4->f_1 += -0.012f;
			}
			else {
				uParam4->f_1 += -0.004f;
			}
		}
		else if (func_77()) {
			if (unk::_get_current_language_id() == 9) {
				uParam4->f_1 += -0.012f;
			}
			else {
				uParam4->f_1 += -0.008f;
			}
		}
		iVar23 = func_78();
		graphics::_set_2d_layer(iVar23);
		func_79(iParam1, iParam20);
		if (Global_1354542.f_997 == 0) {
			func_68(iParam1, 0);
			if (func_55(sParam11) == 0) {
				if (iParam21 == 1) {
					func_56(uParam4, iParam1, sParam11, "", iParam20, 2);
				}
				else if (iParam16 == 1) {
					*iParam1 = 4;
					func_56(uParam4, iParam1, sParam11, "", iParam20, 2);
				}
				else if (iParam15 == -1) {
					func_110(uParam4, iParam1, sParam11, 0, 1);
				}
				else {
					func_53(uParam4, iParam1, sParam11, iParam15, 2);
				}
			}
		}
		if (bVar22) {
			if (iParam9 == 0) {
				func_195(iParam0);
			}
			if (iParam9 != 0 && func_221(&Global_1354542.f_4282.f_336[iParam0 /*2*/], 4000, 0) == 0) {
				if (iParam13 != 4) {
					if (iParam9 > 0) {
						func_194(uParam3);
						func_193(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
						func_192(uParam3);
					}
					else {
						func_191(uParam3);
						func_193(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
						func_192(uParam3);
					}
				}
				else if (iParam9 > 0) {
					func_191(uParam3);
					func_193(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
					func_192(uParam3);
				}
				else {
					func_194(uParam3);
					func_193(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
					func_192(uParam3);
				}
			}
			else {
				if (iParam10 != 0) {
					if (iParam10 == 1) {
						func_190(iParam2);
					}
					else if (iParam10 == 2) {
						func_189(iParam2);
					}
					else if (iParam10 == 3) {
						func_188(iParam2);
					}
				}
				if (Global_1354542.f_997 == 1) {
					iParam2->f_7 = 0;
					graphics::_set_2d_layer(7);
				}
				func_68(iParam2, 0);
				switch (iParam13) {
				case 1:
					if (bParam19) {
						func_56(fParam5, iParam2, "--:--:--", "", 1, 2);
					}
					else {
						*fParam5 += 0.117f;
						if (bParam24) {
							func_193(fParam5, iParam2, iParam7, 2627, "", 0, 1);
						}
						else {
							func_193(fParam5, iParam2, iParam7, 2567, "", 0, 1);
						}
					}
					break;

				case 0:
					if (bParam19) {
						func_56(fParam5, iParam2, "--:--", "", 1, 2);
					}
					else {
						*fParam5 += 0.117f;
						func_193(fParam5, iParam2, iParam7, 6, "", 0, 1);
					}
					break;

				case 2:
					*fParam5 += 0.12f;
					func_193(fParam5, iParam2, iParam7, 6, "", 0, 1);
					func_110(&uVar11, &iVar0, "TIMER_AM_O", 0, 1);
					break;

				case 3:
					*fParam5 += 0.12f;
					func_193(fParam5, iParam2, iParam7, 6, "", 0, 1);
					func_110(&uVar11, &iVar0, "TIMER_PM_O", 0, 1);
					break;

				case 4:
					*fParam5 += 0.12f;
					if (bParam19) {
						func_56(fParam5, iParam2, "--:--:--", "", 1, 2);
					}
					else {
						func_193(fParam5, iParam2, iParam7, 2567, "", 0, 1);
					}
					break;

				case 5:
					*fParam5 += 0.117f;
					func_193(fParam5, iParam2, iParam7, 2, "", 0, 1);
					break;
				}
			}
		}
		func_43();
	}
}

// Position - 0xC1BB
void func_188(var *uParam0) { func_112(uParam0, 109); }

// Position - 0xC1CB
void func_189(var *uParam0) { func_112(uParam0, 108); }

// Position - 0xC1DB
void func_190(var *uParam0) { func_112(uParam0, 107); }

// Position - 0xC1EB
void func_191(var *uParam0) { func_112(uParam0, 6); }

// Position - 0xC1FA
void func_192(var *uParam0) { func_112(uParam0, 1); }

// Position - 0xC209
void func_193(float *fParam0, int *iParam1, int iParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	char *sVar0;

	if (func_47()) {
		func_68(iParam1, 0);
		ui::set_text_right_justify(iParam6);
		ui::set_text_centre(iParam5);
		if (func_55(sParam4)) {
			sVar0 = "STRING";
		}
		else {
			sVar0 = sParam4;
		}
		ui::begin_text_command_display_text(sVar0);
		ui::add_text_component_substring_time(iParam2, iParam3);
		ui::end_text_command_display_text(func_46(*fParam0), func_45(fParam0->f_1), 0);
	}
}

// Position - 0xC262
void func_194(var *uParam0) { func_112(uParam0, 18); }

// Position - 0xC272
void func_195(int iParam0) { func_15(&Global_1354542.f_4282.f_336[iParam0 /*2*/]); }

// Position - 0xC28C
void func_196(int iParam0) {
	func_15(&Global_1354542.f_548[iParam0 /*2*/]);
	func_15(&Global_1354542.f_569[iParam0 /*2*/]);
}

// Position - 0xC2B2
void func_197(int iParam0) {
	func_15(&Global_1354542.f_170[iParam0 /*2*/]);
	func_15(&Global_1354542.f_191[iParam0 /*2*/]);
}

// Position - 0xC2D6
void func_198(var *uParam0, var *uParam1, var *uParam2, var *uParam3, int iParam4, var *uParam5, var *uParam6,
			  var *uParam7) {
	float fVar0;

	fVar0 = func_85(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_84(iParam4);
	uParam1->f_1 += func_83(uParam5);
	*uParam2 = 0.795f;
	uParam2->f_1 = uParam1->f_1 + func_82(uParam0);
	*uParam7 = 0.795f;
	uParam7->f_1 = uParam1->f_1 + func_82(uParam6);
	*uParam3 = *uParam2;
	uParam3->f_1 = uParam2->f_1;
	func_81(iParam4, -fVar0);
}

// Position - 0xC34C
void func_199(var *uParam0) {
	uParam0->f_9 = 0.95f - 0.047f + 0.001f + 0.047f - 0.002f - 0.013f + 0.014f - 0.024f + 0.005f;
}

// Position - 0xC38D
void func_200(var *uParam0, int iParam1) {
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.315f + 0.183f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

// Position - 0xC3DF
void func_201(var *uParam0, int iParam1) {
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.5f + 0.004f - 0.01f - 0.11f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
}

// Position - 0xC43D
void func_202(int iParam0) {
	if (func_203()) {
		if (iParam0) {
			graphics::_0xC6372ECD45D73BCD(1);
		}
		else {
			graphics::_0xC6372ECD45D73BCD(0);
		}
	}
}

// Position - 0xC45E
bool func_203() {
	if (func_204(player::player_id())) {
		return true;
	}
	return false;
}

// Position - 0xC476
bool func_204(int iParam0) {
	switch (func_205(iParam0)) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 6:
	case 5:
	case 7:
	case 38:
	case 33:
	case 36:
	case 39: return false;

	default:
	}
	return true;
}

// Position - 0xC4D6
int func_205(int iParam0) { return Global_1591201[iParam0 /*602*/].f_188; }

// Position - 0xC4E9
bool func_206(int iParam0) {
	if (Global_2454051 == 1) {
		return false;
	}
	if (func_209() == 0) {
		if (ui::is_pause_menu_active()) {
			return false;
		}
	}
	if (iParam0 != 1 && Global_1354542.f_998 == 0 && Global_1354542.f_999 == 0) {
		if (func_207()) {
			return false;
		}
	}
	return true;
}

// Position - 0xC53F
bool func_207() {
	vector3 vVar0;

	if (Global_14443.f_1 > 3) {
		return true;
	}
	if (func_208()) {
		vVar0 = {0f, -500f, 0f};
		mobile::get_mobile_phone_position(&vVar0);
		if (Global_14388 == 0) {
			if (vVar0.y > -119f) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (vVar0.y > -101f) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

// Position - 0xC5AD
bool func_208() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return true;
	}
	return false;
}

// Position - 0xC5C7
int func_209() { return Global_25190; }

// Position - 0xC5D2
bool func_210() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 12) {
		if (Global_1354542.f_5717[iVar0] != Global_1354542.f_5703[iVar0]) {
			return true;
		}
		iVar0++;
	}
	if (Global_1354542.f_5759) {
		Global_1354542.f_5759 = 0;
		return true;
	}
	return false;
}

// Position - 0xC621
bool func_211() {
	if (Global_1312367) {
		return false;
	}
	if (G_DisableMessagesAndCalls2) {
		return false;
	}
	if (ui::_is_text_chat_active()) {
		return false;
	}
	if (Global_1759864.f_4) {
		return false;
	}
	if (Global_1354542.f_1001 || Global_1354542.f_1002) {
		if (Global_1354542.f_1003 == 0) {
			if (func_215(player::player_ped_id())) {
				func_214();
			}
		}
		return true;
	}
	if (func_48()) {
		if (Global_1354542.f_1003 == 0) {
			if (func_215(player::player_ped_id())) {
				func_214();
			}
		}
		return true;
	}
	if (Global_2454745) {
		return false;
	}
	if (Global_1318045) {
		return false;
	}
	if (func_213()) {
		if (Global_1354542.f_1003 == 0) {
			if (func_215(player::player_ped_id())) {
				func_214();
			}
		}
		return true;
	}
	if (Global_17151.f_4 && func_204(player::player_id()) == 0) {
		return false;
	}
	if (streaming::is_player_switch_in_progress()) {
		return false;
	}
	if (Global_1354542.f_1003 == 0) {
		if (func_215(player::player_ped_id())) {
			func_214();
		}
	}
	if (func_212(8, -1)) {
		return false;
	}
	if (ui::is_hud_preference_switched_on() == 0) {
		return false;
	}
	if (func_209() == 0 || func_209() == 2) {
		if (Global_2421664[player::player_id() /*358*/].f_225 != 99) {
			if (network::network_is_in_spectator_mode() == 0 && Global_1574279 == 0 &&
				!gameplay::is_bit_set(Global_2433125.f_1385.f_743, 11) &&
				Global_1591201[player::player_id() /*602*/] != 0) {
				return false;
			}
		}
	}
	if (gameplay::is_bit_set(Global_2359301, 11)) {
		return false;
	}
	return true;
}

// Position - 0xC7BF
bool func_212(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0xC7FA
bool func_213() {
	if (Global_1741468) {
		return true;
	}
	return false;
}

// Position - 0xC80E
void func_214() { Global_1354542.f_1003 = 1; }

// Position - 0xC81E
bool func_215(int iParam0) {
	int iVar0;

	if (cam::is_first_person_aim_cam_active()) {
		if (!ped::is_ped_injured(iParam0)) {
			weapon::get_current_ped_weapon(iParam0, &iVar0, 1);
			if (iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper") ||
				iVar0 == joaat("weapon_marksmanrifle")) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xC86D
void func_216() {
	int iVar0;

	if (func_219(2)) {
		iVar0 = 0;
		while (iVar0 <= 9) {
			if (func_28(2, iVar0) && func_27(2, iVar0)) {
				func_15(&Global_1354542.f_1820.f_555[iVar0 /*2*/]);
			}
			else if (func_221(&Global_1354542.f_1820.f_555[iVar0 /*2*/], Global_1354542.f_1820.f_576[iVar0], 0) == 0) {
				Global_1354542.f_1 = 1;
				func_218(2, iVar0);
			}
			else {
				func_217(2, iVar0);
			}
			iVar0++;
		}
	}
}

// Position - 0xC8F8
void func_217(int iParam0, int iParam1) { gameplay::clear_bit(&Global_1354542.f_5745[iParam0], iParam1); }

// Position - 0xC911
void func_218(int iParam0, int iParam1) { gameplay::set_bit(&Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0xC92A
bool func_219(int iParam0) {
	if (Global_1354542.f_5745[iParam0] > 0) {
		return true;
	}
	return false;
}

// Position - 0xC946
void func_220(int iParam0) { Global_1354542.f_995 = iParam0; }

// Position - 0xC957
int func_221(var *uParam0, int iParam1, int iParam2) {
	if (iParam1 == -1) {
		return 1;
	}
	func_167(uParam0, iParam2, 0);
	if (network::network_is_game_in_progress() && !iParam2) {
		if (gameplay::absi(network::get_time_difference(network::get_network_time(), *uParam0)) >= iParam1) {
			return 1;
		}
	}
	else if (gameplay::absi(network::get_time_difference(gameplay::get_game_timer(), *uParam0)) >= iParam1) {
		return 1;
	}
	return 0;
}
