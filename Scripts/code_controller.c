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
var uLocal_44 = 10;
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
var uLocal_55 = 2;
var uLocal_56 = 0;
var uLocal_57 = 0;
var uLocal_58 = 8;
var uLocal_59 = 0;
var uLocal_60 = 0;
var uLocal_61 = 0;
var uLocal_62 = 0;
var uLocal_63 = 0;
var uLocal_64 = 0;
var uLocal_65 = 0;
var uLocal_66 = 0;
var uLocal_67 = 8;
var uLocal_68 = 0;
var uLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 0;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 0;
var uLocal_77 = 0;
var uLocal_78 = 0;
var uLocal_79 = 0;
var uLocal_80 = 0;
var uLocal_81 = 0;
var uLocal_82 = 0;
var uLocal_83 = 0;
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;

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
	uLocal_82 = ui::_0x4A9923385BDB9DAD();
	uLocal_83 = ui::_get_blip_info_id_iterator();
	if (player::has_force_cleanup_occurred(50)) {
		script::terminate_this_thread();
	}
	while (true) {
		if (!func_530(0)) {
			if (Global_36329 == -1) {
				script::terminate_this_thread();
			}
		}
		iVar0 = 0;
		while (iVar0 < 235) {
			if (Global_101700.f_7572[iVar0]) {
				if (gameplay::get_game_timer() >= Global_101700.f_7572.f_236[iVar0]) {
					switch (iVar0) {
					case 1: func_529(); break;

					case 4: func_527(); break;

					case 5: func_526(); break;

					case 19: func_525(); break;

					case 6: func_524(); break;

					case 7: func_523(); break;

					case 8: func_522(); break;

					case 9: func_521(); break;

					case 11: func_520(); break;

					case 12: func_519(); break;

					case 13: func_518(); break;

					case 14: func_517(); break;

					case 15: func_516(); break;

					case 16: func_515(); break;

					case 17: func_514(); break;

					case 18: func_513(); break;

					case 20: func_512(); break;

					case 21: func_511(); break;

					case 23: func_510(); break;

					case 39: func_509(); break;

					case 22: func_508(); break;

					case 24: func_507(); break;

					case 25: func_506(); break;

					case 27: func_505(); break;

					case 28: func_504(); break;

					case 29: func_503(); break;

					case 30: func_501(); break;

					case 31: func_500(); break;

					case 33: func_498(); break;

					case 32: func_487(0, 1); break;

					case 160: func_487(1, 1); break;

					case 161: func_487(2, 1); break;

					case 162: func_487(3, 1); break;

					case 34: func_467(); break;

					case 35: func_466(); break;

					case 36: func_464(0); break;

					case 37: func_464(1); break;

					case 38: func_464(2); break;

					case 40: func_463(); break;

					case 41: func_462(); break;

					case 42: func_461(); break;

					case 43: func_460(); break;

					case 44: func_459(); break;

					case 45: func_424(); break;

					case 46:
						func_423(6, 140);
						func_423(7, 140);
						break;

					case 47:
						func_423(6, 141);
						func_423(7, 141);
						break;

					case 54: func_422(); break;

					case 48: func_421(); break;

					case 49: func_420(); break;

					case 50: func_419(); break;

					case 51: func_406(); break;

					case 52: func_405(); break;

					case 53: func_404(); break;

					case 55: func_403(); break;

					case 56: func_402(); break;

					case 57: func_401(1); break;

					case 58: func_401(0); break;

					case 59:
						func_399(18, 1);
						func_399(19, 1);
						break;

					case 60:
						func_399(15, 1);
						func_399(16, 1);
						func_399(17, 1);
						break;

					case 61:
						func_399(12, 1);
						func_399(13, 1);
						break;

					case 62:
						func_397("AM_H_GARAGEP", 1, 0, -1, 10000, 7, 0, 0, 0);
						func_399(21, 1);
						func_399(22, 1);
						func_399(23, 1);
						break;

					case 63: func_395(); break;

					case 64: func_394(); break;

					case 65: func_391(); break;

					case 66: func_376(); break;

					case 67: func_375(); break;

					case 68: func_374(); break;

					case 69: func_373(); break;

					case 70: func_372(); break;

					case 71: func_371(); break;

					case 72: func_369(); break;

					case 73: func_368(); break;

					case 74: func_367(); break;

					case 75: func_366(); break;

					case 76: func_365(); break;

					case 77: func_364(); break;

					case 78: func_363(); break;

					case 79: func_362(); break;

					case 80: func_348(); break;

					case 81:
						func_347();
						audio::_0x031ACB6ABA18C729("RADIO_16_SILVERLAKE", "MIRRORPARK_LOCKED");
						gameplay::set_bit(&Global_101700.f_8975.f_25, 5);
						break;

					case 82: func_346(); break;

					case 83: func_345(); break;

					case 84: func_343(); break;

					case 86: func_339(); break;

					case 87: func_338(); break;

					case 88:
						func_337();
						func_501();
						break;

					case 89: func_336(); break;

					case 90: func_335(1); break;

					case 91: func_334(); break;

					case 92: func_333(); break;

					case 93: func_332(); break;

					case 94: func_329(); break;

					case 95: func_327(); break;

					case 96: func_326(); break;

					case 97: func_325(); break;

					case 98: func_320(); break;

					case 99:
						func_399(20, 1);
						func_319(20, 5, 1);
						func_399(14, 1);
						func_319(14, 5, 1);
						break;

					case 100: func_318(); break;

					case 101: func_317(); break;

					case 102: func_311(); break;

					case 103: func_310(); break;

					case 104: func_309(); break;

					case 105: func_308(); break;

					case 106: func_306(); break;

					case 107: func_305(); break;

					case 108: func_303(); break;

					case 109: func_302(); break;

					case 110: func_301(); break;

					case 111: func_300(); break;

					case 112: func_294(); break;

					case 113: func_293(); break;

					case 114: func_287(); break;

					case 115: func_271(); break;

					case 117: func_270(); break;

					case 118: func_269(); break;

					case 116: func_268(); break;

					case 120: func_267(); break;

					case 121: func_265(); break;

					case 122: func_262(); break;

					case 123: func_261(); break;

					case 124: func_259(); break;

					case 125: func_258(); break;

					case 126: func_257(); break;

					case 127: func_256(); break;

					case 128: func_255(); break;

					case 129: func_254(); break;

					case 130: func_253(); break;

					case 131: func_252(45); break;

					case 133: func_251(0); break;

					case 134: func_251(1); break;

					case 135: func_250(0); break;

					case 136: func_250(1); break;

					case 137: func_252(50); break;

					case 138: func_252(51); break;

					case 139: func_252(54); break;

					case 140: func_249(0); break;

					case 141: func_249(1); break;

					case 142: func_248(); break;

					case 143: func_246(); break;

					case 144: func_244(); break;

					case 145: func_243(); break;

					case 146: func_242(); break;

					case 147: func_240(); break;

					case 148: func_239(10, 1); break;

					case 149: func_238(); break;

					case 150: func_237(); break;

					case 151: func_236(); break;

					case 152: func_235(); break;

					case 153: func_223(); break;

					case 157: func_220(); break;

					case 163: func_219(); break;

					case 164: func_218(); break;

					case 165: func_217(); break;

					case 166: func_215(); break;

					case 167: func_214(); break;

					case 168: func_204(); break;

					case 173: func_203(); break;

					case 169: func_202(); break;

					case 170: func_201(); break;

					case 171: func_200(); break;

					case 172: func_199(); break;

					case 174: func_198(); break;

					case 175: func_197(); break;

					case 176: func_196(); break;

					case 177: func_195(); break;

					case 178: func_194(); break;

					case 179: func_189(); break;

					case 181: func_187(); break;

					case 182: func_186(); break;

					case 183: func_185(); break;

					case 184: func_184(); break;

					case 185: func_183(); break;

					case 186: func_182(); break;

					case 187: func_180(); break;

					case 188: func_176(); break;

					case 189: func_172(); break;

					case 190: func_171(); break;

					case 191: func_169(); break;

					case 192: func_168(); break;

					case 193: func_167(); break;

					case 194: func_166(); break;

					case 195: func_165(); break;

					case 196: func_164(); break;

					case 197: func_163(); break;

					case 198: func_158(); break;

					case 199: func_74(); break;

					case 200: func_73(); break;

					case 201: func_62(); break;

					default:
						switch (iVar0) {
						case 202: func_61(); break;

						case 203: func_60(); break;

						case 204: func_59(); break;

						case 205: func_58(); break;

						case 206: func_24(); break;

						case 207: func_23(); break;

						case 154:
							func_13(-655205392);
							func_13(1266526796);
							break;

						case 155:
							func_13(1023767);
							func_13(190444893);
							break;

						case 156:
							func_12(58, 0);
							func_12(59, 0);
							break;

						case 159: func_1(); break;

						case 208: func_252(68); break;

						case 209: func_252(69); break;

						case 210: func_252(70); break;

						case 211: func_252(71); break;
						}
						break;
					}
					Global_101700.f_7572[iVar0] = 0;
				}
			}
			iVar0++;
		}
		system::wait(0);
	}
}

// Position - 0xC1E
void func_1() {
	if (!gameplay::is_bit_set(Global_101700.f_17533.f_382, 6)) {
		func_2(-1067764575, 6, 2, 144, 1000, 5000, -1, 0, -1, 0);
		gameplay::set_bit(&Global_101700.f_17533.f_382, 6);
	}
}

// Position - 0xC60
int func_2(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
		   int iParam8, int iParam9) {
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;

	if (func_11(0)) {
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
	if (G_SomeGlobalState.MessageCallStates.f_866 < 10) {
		Var0 = iParam0;
		Var0.f_3 = func_10(iParam1);
		Var0.f_4 = gameplay::get_game_timer() + iParam4;
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		gameplay::clear_bit(&Var0.f_1, 0);
		G_SomeGlobalState.MessageCallStates.f_765[G_SomeGlobalState.MessageCallStates.f_866 /*10*/] = {Var0};
		G_SomeGlobalState.MessageCallStates.f_866++;
		return 1;
	}
	else {
		Var10 = {func_9(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9)};
		iVar20 = 0;
		func_8(&iVar20);
		iVar21 = func_7(Var10, G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/]);
		if (iVar21 == 2) {
			func_5(G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/]);
			G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/] = {Var10};
			func_4(&Var10);
			return 1;
		}
		else if (iVar21 == 1) {
			if (func_3(Var10)) {
				func_5(G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/]);
				G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/] = {Var10};
				func_4(&Var10);
				return 1;
			}
			else {
				if (!func_3(G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/])) {
					G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/] = {Var10};
					func_4(&Var10);
					return 1;
				}
				func_4(&Var10);
				return 1;
			}
		}
		else {
			func_5(Var10);
			func_4(&Var10);
			return 1;
		}
	}
	return 0;
}

// Position - 0xE82
bool func_3(struct<9> Param0, var uParam9) {
	if (Param0.f_8 == 0) {
		return false;
	}
	return true;
}

// Position - 0xE9A
void func_4(var *uParam0) {
	struct<10> Var0;

	*uParam0 = {Var0};
}

// Position - 0xEAC
void func_5(struct<10> Param0) {
	if (func_3(Param0)) {
		func_6(Param0.f_8, 0);
	}
}

// Position - 0xEC9
void func_6(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0xF06
int func_7(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9,
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

// Position - 0xF37
void func_8(int *iParam0) {
	int iVar0;

	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_866) {
		if (func_7(G_SomeGlobalState.MessageCallStates.f_765[iVar0 /*10*/], G_SomeGlobalState.MessageCallStates.f_765[*iParam0 /*10*/]) == 0) {
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

// Position - 0xF8E
struct<10> func_9(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6,
				  int iParam7, var uParam8, var uParam9) {
	struct<10> Var0;

	Var0 = uParam0;
	Var0.f_3 = func_10(iParam1);
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

//Position - 0xFE7
int func_10(int iParam0)
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

// Position - 0x1051
bool func_11(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x107C
void func_12(int iParam0, int iParam1) {
	iParam1 = iParam1;
	Global_36916 = 1;
	if (Global_40250[iParam0 /*46*/] && !Global_40250[iParam0 /*46*/].f_1) {
		Global_40250[iParam0 /*46*/].f_1 = 1;
		Global_40250[iParam0 /*46*/] = 0;
	}
}

// Position - 0x10BA
int func_13(int iParam0) {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_136) {
		if (G_SomeGlobalState.MessageCallStates[iVar0 /*15*/] == iParam0) {
			if (LastDispatchedMessageOrCall != iVar0) {
				func_22(iVar0);
				func_19(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_198) {
		if (G_SomeGlobalState.MessageCallStates.f_137[iVar0 /*15*/] == iParam0) {
			func_19(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_650) {
		if (G_SomeGlobalState.MessageCallStates.f_199[iVar0 /*15*/] == iParam0) {
			func_18(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_764) {
		if (G_SomeGlobalState.MessageCallStates.f_651[iVar0 /*14*/] == iParam0) {
			func_15(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_866) {
		if (G_SomeGlobalState.MessageCallStates.f_765[iVar0 /*10*/] == iParam0) {
			func_14(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

// Position - 0x11E1
void func_14(int iParam0) {
	int iVar0;
	struct<10> Var1;

	if (iParam0 < 0 || iParam0 >= G_SomeGlobalState.MessageCallStates.f_866) {
		return;
	}
	if (G_SomeGlobalState.MessageCallStates.f_866 > 1) {
		iVar0 = iParam0;
		while (iVar0 <= G_SomeGlobalState.MessageCallStates.f_866 - 2) {
			G_SomeGlobalState.MessageCallStates.f_765[iVar0 /*10*/] = {G_SomeGlobalState.MessageCallStates.f_765[iVar0 + 1 /*10*/]};
			iVar0++;
		}
	}
	if (G_SomeGlobalState.MessageCallStates.f_866 > 0) {
		G_SomeGlobalState.MessageCallStates.f_765[G_SomeGlobalState.MessageCallStates.f_866 - 1 /*10*/] = {Var1};
		G_SomeGlobalState.MessageCallStates.f_866--;
	}
}

// Position - 0x129A
void func_15(int iParam0) {
	int iVar0;
	struct<14> Var1;

	if (iParam0 < 0 || iParam0 >= G_SomeGlobalState.MessageCallStates.f_764) {
		return;
	}
	if (G_SomeGlobalState.MessageCallStates.f_764 > 1) {
		iVar0 = iParam0;
		while (iVar0 <= G_SomeGlobalState.MessageCallStates.f_764 - 2) {
			G_SomeGlobalState.MessageCallStates.f_651[iVar0 /*14*/] = {G_SomeGlobalState.MessageCallStates.f_651[iVar0 + 1 /*14*/]};
			iVar0++;
		}
	}
	if (G_SomeGlobalState.MessageCallStates.f_764 > 0) {
		G_SomeGlobalState.MessageCallStates.f_651[G_SomeGlobalState.MessageCallStates.f_764 - 1 /*14*/] = {Var1};
		G_SomeGlobalState.MessageCallStates.f_764--;
	}
	func_16(0);
	func_16(1);
	func_16(2);
}

// Position - 0x1362
void func_16(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_17(iParam0)) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_136) {
		if (gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates[iVar0 /*15*/].f_2, iParam0)) {
			if (G_SomeGlobalState.MessageCallStates[iVar0 /*15*/].f_3 > iVar1) {
				iVar1 = G_SomeGlobalState.MessageCallStates[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < G_SomeGlobalState.MessageCallStates.f_764) {
		if (gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates.f_651[iVar2 /*14*/].f_2, iParam0)) {
			if (G_SomeGlobalState.MessageCallStates.f_651[iVar2 /*14*/].f_3 == 5) {
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	G_SomeGlobalState.MessageCallStates.f_919[iParam0] = iVar1;
}

// Position - 0x1426
bool func_17(int iParam0) { return iParam0 < 3; }

// Position - 0x1432
void func_18(int iParam0) {
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < G_SomeGlobalState.MessageCallStates.f_650) {
		if (G_SomeGlobalState.MessageCallStates.f_199[iVar15 /*15*/] == iParam0) {
			iVar16 = iVar15;
			while (iVar16 <= G_SomeGlobalState.MessageCallStates.f_650 - 2) {
				G_SomeGlobalState.MessageCallStates.f_199[iVar16 /*15*/] = {G_SomeGlobalState.MessageCallStates.f_199[iVar16 + 1 /*15*/]};
				iVar16++;
			}
			G_SomeGlobalState.MessageCallStates.f_199[G_SomeGlobalState.MessageCallStates.f_650 - 1 /*15*/] = {Var0};
			G_SomeGlobalState.MessageCallStates.f_650--;
			return;
		}
		iVar15++;
	}
}

// Position - 0x14DF
void func_19(int iParam0) {
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < G_SomeGlobalState.MessageCallStates.f_198) {
		if (G_SomeGlobalState.MessageCallStates.f_137[iVar15 /*15*/] == iParam0) {
			func_20(G_SomeGlobalState.MessageCallStates.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= G_SomeGlobalState.MessageCallStates.f_198 - 2) {
				G_SomeGlobalState.MessageCallStates.f_137[iVar16 /*15*/] = {G_SomeGlobalState.MessageCallStates.f_137[iVar16 + 1 /*15*/]};
				iVar16++;
			}
			G_SomeGlobalState.MessageCallStates.f_137[G_SomeGlobalState.MessageCallStates.f_198 - 1 /*15*/] = {Var0};
			G_SomeGlobalState.MessageCallStates.f_198--;
			return;
		}
		iVar15++;
	}
}

// Position - 0x159B
int func_20(int iParam0) {
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		if (Global_101700.f_27009[iParam0 /*29*/].f_19[Global_14443] == 1) {
			Global_101700.f_27009[iParam0 /*29*/].f_19[Global_14443] = 0;
			if (Global_101700.f_27009[iParam0 /*29*/].f_24[Global_14443] == 0) {
				iVar0 = Global_14443;
				func_21(iParam0, iVar0);
			}
			return 1;
		}
		else {
			return 0;
		}
	}
	return 0;
}

// Position - 0x160C
void func_21(int iParam0, int iParam1) {
	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		if (iParam1 > 3) {
		}
		else {
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

// Position - 0x164F
void func_22(int iParam0) {
	int iVar0;
	int iVar1;
	struct<15> Var2;

	if (iParam0 < 0 || iParam0 >= G_SomeGlobalState.MessageCallStates.f_136) {
		return;
	}
	iVar1 = G_SomeGlobalState.MessageCallStates[iParam0 /*15*/].f_2;
	if (G_SomeGlobalState.MessageCallStates.f_136 > 1) {
		iVar0 = iParam0;
		while (iVar0 <= G_SomeGlobalState.MessageCallStates.f_136 - 2) {
			G_SomeGlobalState.MessageCallStates[iVar0 /*15*/] = {G_SomeGlobalState.MessageCallStates[iVar0 + 1 /*15*/]};
			iVar0++;
		}
	}
	if (G_SomeGlobalState.MessageCallStates.f_136 > 0) {
		G_SomeGlobalState.MessageCallStates[G_SomeGlobalState.MessageCallStates.f_136 - 1 /*15*/] = {Var2};
		G_SomeGlobalState.MessageCallStates.f_136--;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (gameplay::is_bit_set(iVar1, iVar0)) {
			func_16(iVar0);
		}
		iVar0++;
	}
}

// Position - 0x172A
void func_23() { func_399(62, 1); }

// Position - 0x1739
void func_24() {
	int iVar0;
	int iVar1;

	iVar0 = func_54();
	iVar1 = func_53(iVar0);
	if (iVar1 > 10000) {
		func_25(iVar0, 128, 5000);
	}
	else if (iVar1 >= 10) {
		func_25(iVar0, 128, iVar1 / 10);
	}
}

// Position - 0x177B
int func_25(int iParam0, int iParam1, int iParam2) {
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return 0;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return 0;
	}
	return func_26(Global_101700.f_27009[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

// Position - 0x17C4
int func_26(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_52();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_51(99, 1);
			func_50(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_50(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_50(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_34(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_33(5)) {
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
			case 0: func_50(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_50(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_50(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_33(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_50(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_50(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_50(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_50(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_50(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_50(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
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
			case 0: func_50(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_50(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_50(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_50(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_50(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_50(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_50(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_50(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_50(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_33(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_50(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_50(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_50(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_50(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_50(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_50(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_32(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_51(95, iParam3); break;

		case 1: func_51(97, iParam3); break;

		case 2: func_51(96, iParam3); break;
		}
		func_51(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_29(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_29(iVar1);
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
		case 0: func_50(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_50(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_50(joaat("sp2_total_cash_earned"), iParam3); break;
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
	func_28(iParam0);
	if (Global_35781 == 15) {
		func_27(0);
	}
	return 1;
}

// Position - 0x1DC3
void func_27(int iParam0) {
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

// Position - 0x2045
void func_28(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x209F
void func_29(int iParam0) {
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
			 gameplay::is_bit_set(Global_2097152[func_31() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_31() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_30(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x215F
char *func_30(int iParam0) {
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

// Position - 0x21D1
int func_31() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x21DE
void func_32(int iParam0) {
	func_51(93, iParam0);
	func_51(29, iParam0);
	func_51(30, iParam0);
}

// Position - 0x21FE
bool func_33(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_31() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x223A
int func_34(int iParam0) {
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
		func_49(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_35(27, 1);
	return 1;
}

// Position - 0x22F1
int func_35(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_36(iParam0, iParam1);
}

// Position - 0x230C
int func_36(int iParam0, int iParam1) {
	if (func_48(14) && !func_47(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_46(&Global_2595550)) {
		if (func_44(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_37(&Global_2595550, iParam0)) {
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

// Position - 0x23A9
bool func_37(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_48(14) && !func_47(iParam1)) {
		return false;
	}
	if (func_44(uParam0, iParam1)) {
		return false;
	}
	if (func_43(uParam0) < 0f) {
		func_42(uParam0, 0);
	}
	func_40(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_38(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x245A
int func_38(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_48(14) && !func_47(iParam1)) {
		return 0;
	}
	if (func_44(uParam0, iParam1)) {
		return 0;
	}
	if (func_43(uParam0) < 0f) {
		func_42(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_39(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x24D5
bool func_39(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x24E6
void func_40(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_41(uParam0, iVar0);
		iVar0++;
	}
	func_42(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x251A
void func_41(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x252A
void func_42(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x2547
float func_43(var *uParam0) { return uParam0->f_72; }

// Position - 0x2553
bool func_44(var *uParam0, int iParam1) { return func_45(uParam0, iParam1) != -1; }

// Position - 0x2565
int func_45(var *uParam0, int iParam1) {
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

// Position - 0x2592
bool func_46(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x25A0
int func_47(int iParam0) {
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

// Position - 0x25F0
bool func_48(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x25FE
int func_49(int iParam0, int iParam1) {
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

// Position - 0x264F
void func_50(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x2672
void func_51(int iParam0, int iParam1) {
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

// Position - 0x26CF
void func_52() {
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

// Position - 0x2744
int func_53(int iParam0) {
	var uVar0;

	switch (iParam0) {
	case 0: stats::stat_get_int(joaat("sp0_total_cash"), &uVar0, -1); return uVar0;

	case 1: stats::stat_get_int(joaat("sp1_total_cash"), &uVar0, -1); return uVar0;

	case 2: stats::stat_get_int(joaat("sp2_total_cash"), &uVar0, -1); return uVar0;

	default:
	}
	return 0;
}

// Position - 0x279C
int func_54() {
	func_55();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x27B5
void func_55() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_57(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_56(player::player_ped_id());
			if (func_17(iVar0) && (!func_48(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_17(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x28B2
int func_56(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_57(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x28EF
int func_57(int iParam0) {
	if (func_17(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x2919
void func_58() {
	int iVar0;
	int iVar1;

	iVar0 = func_54();
	iVar1 = func_53(iVar0);
	if (iVar1 > 10000) {
		func_25(iVar0, 127, 5000);
	}
	else if (iVar1 >= 10) {
		func_25(iVar0, 127, iVar1 / 10);
	}
}

// Position - 0x295B
void func_59() {
	int iVar0;
	int iVar1;

	iVar0 = func_54();
	iVar1 = func_53(iVar0);
	if (iVar1 > 10000) {
		func_25(iVar0, 126, 5000);
	}
	else if (iVar1 >= 10) {
		func_25(iVar0, 126, iVar1 / 10);
	}
}

// Position - 0x299D
void func_60() {
	int iVar0;
	int iVar1;

	iVar0 = func_54();
	iVar1 = func_53(iVar0);
	if (iVar1 > 10000) {
		func_25(iVar0, 125, 5000);
	}
	else if (iVar1 >= 10) {
		func_25(iVar0, 125, iVar1 / 10);
	}
}

// Position - 0x29DF
void func_61() {
	int iVar0;
	int iVar1;

	iVar0 = func_54();
	iVar1 = func_53(iVar0);
	if (iVar1 > 10000) {
		func_25(iVar0, 124, 5000);
	}
	else if (iVar1 >= 10) {
		func_25(iVar0, 124, iVar1 / 10);
	}
}

// Position - 0x2A21
void func_62() {
	int iVar0;

	iVar0 = func_54();
	switch (iVar0) {
	case 0: func_63(0, 26, 100000); break;

	case 1: func_63(1, 26, 100000); break;

	case 2: func_63(2, 26, 100000); break;
	}
}

// Position - 0x2A72
void func_63(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	float fVar1;
	int iVar2;

	iVar0 = func_71(iParam0, iParam1);
	if (iVar0 == -1) {
		return;
	}
	fVar1 = func_66(iParam1);
	if (Global_48121[iParam1 /*36*/].f_8) {
		return;
	}
	iVar2 = system::ceil(system::to_float(iParam2) / fVar1);
	func_65(iParam0, iVar0, iParam1);
	func_64(iParam0, iVar0, iVar2, 1);
}

// Position - 0x2AC8
void func_64(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 < 0 || iParam1 > 9) {
		return;
	}
	switch (iParam0) {
	case 0: iVar0 = Global_101700.f_19523[iParam1]; break;

	case 1: iVar0 = Global_101700.f_19523.f_33[iParam1]; break;

	case 2: iVar0 = Global_101700.f_19523.f_66[iParam1]; break;
	}
	if (Global_48121[iVar0 /*36*/].f_9 <= 0f) {
		return;
	}
	iVar1 = 0;
	if (iParam3) {
		switch (iParam0) {
		case 0:
			Global_101700.f_19523.f_22[iParam1] += iParam2;
			iVar1 = Global_101700.f_19523.f_22[iParam1];
			break;

		case 1:
			Global_101700.f_19523.f_55[iParam1] += iParam2;
			iVar1 = Global_101700.f_19523.f_55[iParam1];
			break;

		case 2:
			Global_101700.f_19523.f_88[iParam1] += iParam2;
			iVar1 = Global_101700.f_19523.f_88[iParam1];
			break;
		}
	}
	else {
		switch (iParam0) {
		case 0:
			Global_101700.f_19523.f_22[iParam1] = iParam2;
			iVar1 = Global_101700.f_19523.f_22[iParam1];
			break;

		case 1:
			Global_101700.f_19523.f_55[iParam1] = iParam2;
			iVar1 = Global_101700.f_19523.f_55[iParam1];
			break;

		case 2:
			Global_101700.f_19523.f_88[iParam1] = iParam2;
			iVar1 = Global_101700.f_19523.f_88[iParam1];
			break;
		}
	}
	if (Global_48121[iVar0 /*36*/].f_8) {
		iVar2 = Global_48121[iVar0 /*36*/].f_35;
		if (iVar2 > -1) {
			stats::stat_set_int(Global_51002[iVar2 /*7*/].f_3[iParam0], iVar1, 1);
		}
	}
	return;
}

// Position - 0x2CA5
void func_65(int iParam0, int iParam1, int iParam2) {
	if (iParam1 < 0 || iParam1 > 9) {
		return;
	}
	switch (iParam0) {
	case 0: Global_101700.f_19523[iParam1] = iParam2; break;

	case 1: Global_101700.f_19523.f_33[iParam1] = iParam2; break;

	case 2: Global_101700.f_19523.f_66[iParam1] = iParam2; break;
	}
	return;
}

// Position - 0x2D12
float func_66(int iParam0) {
	int iVar0;
	float fVar1;

	iVar0 = iParam0;
	fVar1 = Global_48121[iParam0 /*36*/].f_9 * func_67(iVar0);
	return system::to_float(system::floor(fVar1 * 100f)) / 100f;
}

// Position - 0x2D46
float func_67(int iParam0) {
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;

	fVar0 = 1f;
	switch (iParam0) {
	case 61:
		if (Global_101700.f_8044.f_99.f_58[131]) {
			fVar0 = 0.5f;
		}
		break;

	case 73:
		if (func_70(25)) {
			fVar0 *= 3f;
		}
		else {
			if (func_70(74) || func_70(75)) {
				fVar0 *= 0.95f;
			}
			if (func_70(14)) {
				fVar0 *= 0.98f;
			}
			if (func_70(16)) {
				fVar0 *= 0.98f;
			}
			if (func_70(48)) {
				fVar0 *= 0.98f;
			}
			if (func_70(24)) {
				fVar0 *= 0.98f;
			}
			if (func_70(27)) {
				fVar0 *= 0.5f;
			}
		}
		break;

	case 66:
		if (func_70(49)) {
			fVar0 *= 0.5f;
		}
		if (func_70(10)) {
			fVar0 *= 0.95f;
		}
		break;

	case 59:
		if (func_70(93)) {
			if (!func_70(47)) {
				fVar0 *= 0.9f;
			}
		}
		if (func_70(38)) {
			if (!func_70(28)) {
				fVar0 *= 0.9f;
			}
		}
		if (func_70(84)) {
			if (!func_70(28)) {
				fVar0 *= 0.9f;
			}
		}
		break;

	case 69:
		if (func_70(90)) {
			if (!func_70(14)) {
				fVar0 *= 0.7f;
			}
		}
		break;

	case 16:
		if (func_70(28)) {
			fVar0 *= 2f;
		}
		break;

	case 52:
		if (func_70(93)) {
			if (!func_70(28)) {
				fVar0 *= 0.6f;
			}
		}
		break;

	case 56:
		if (func_70(61)) {
			if (!func_70(49)) {
				fVar0 *= 0.5f;
			}
		}
		break;
	}
	if (Global_101700.f_19523.f_442 < 1) {
		return fVar0;
	}
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8) {
		if (Global_101700.f_19523.f_443[iVar2] == iParam0) {
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 > -1) {
		fVar0 = func_69(Global_101700.f_19523.f_452[iVar1], Global_101700.f_19523.f_461[iVar1]);
	}
	if (fVar0 > 1f) {
		fVar3 = fVar0 - 1f;
		iVar4 = iParam0;
		iVar5 = func_68(0, iVar4);
		iVar6 = func_68(1, iVar4);
		iVar7 = func_68(2, iVar4);
		if (iVar5 + iVar6 + iVar7 > 0) {
			iVar8 = Global_52996[0] + Global_52996[1] + Global_52996[2];
			iVar2 = 0;
			while (iVar2 < 10) {
				if (Global_101700.f_19523.f_22[iVar2] > 0) {
					iVar8 += system::floor(Global_101700.f_19523.f_11[iVar2]);
				}
				if (Global_101700.f_19523.f_55[iVar2] > 0) {
					iVar8 += system::floor(Global_101700.f_19523.f_44[iVar2]);
				}
				if (Global_101700.f_19523.f_88[iVar2] > 0) {
					iVar8 += system::floor(Global_101700.f_19523.f_77[iVar2]);
				}
				iVar2++;
			}
			iVar9 = 700000000;
			iVar10 = 1000000000;
			if (iVar8 > iVar10) {
				fVar3 = 0f;
			}
			else if (iVar8 < iVar9) {
				fVar3 = 1f;
			}
			else {
				fVar11 = system::to_float(iVar8 - iVar9);
				fVar12 = system::to_float(iVar10 - iVar9);
				fVar3 *= (1f - fVar11 / fVar12);
			}
		}
		fVar0 = 1f + fVar3;
	}
	return fVar0;
}

// Position - 0x30BF
int func_68(int iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 9) {
		return 0;
	}
	switch (iParam0) {
	case 0: return Global_101700.f_19523.f_22[iParam1];

	case 1: return Global_101700.f_19523.f_55[iParam1];

	case 2: return Global_101700.f_19523.f_88[iParam1];
	}
	return 0;
}

// Position - 0x3130
float func_69(int iParam0, int iParam1) {
	float fVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;

	fVar0 = 0f;
	if (iParam0 < 1) {
		return 1f;
	}
	bVar1 = gameplay::is_bit_set(iParam1, 0);
	fVar2 = system::to_float(iParam0);
	iVar3 = 0;
	if (gameplay::is_bit_set(iParam1, 3)) {
		iVar3++;
	}
	if (gameplay::is_bit_set(iParam1, 4)) {
		iVar3 += 2;
	}
	if (gameplay::is_bit_set(iParam1, 5)) {
		iVar3 += 4;
	}
	if (gameplay::is_bit_set(iParam1, 20)) {
		iVar3 += 8;
	}
	fVar4 = system::to_float(3 * iVar3);
	if (gameplay::is_bit_set(iParam1, 2)) {
		fVar4 *= 7f;
	}
	if (gameplay::is_bit_set(iParam1, 1)) {
		if (func_70(21)) {
			return 1f;
		}
	}
	else if (fVar4 < 1f) {
		return 1f;
	}
	fVar5 = 1f - fVar2 / fVar4;
	if (gameplay::is_bit_set(iParam1, 16)) {
		fVar0 -= 0.5f;
	}
	if (gameplay::is_bit_set(iParam1, 17)) {
		fVar0 -= 0.25f;
	}
	if (gameplay::is_bit_set(iParam1, 18)) {
		fVar0 -= 0.1f;
	}
	if (gameplay::is_bit_set(iParam1, 19)) {
		fVar0 -= 0.33f;
	}
	if (bVar1) {
		fVar0 = -fVar0;
	}
	if (!gameplay::is_bit_set(iParam1, 1)) {
		if (gameplay::is_bit_set(iParam1, 6)) {
			fVar6 = 0f;
			if (gameplay::is_bit_set(iParam1, 8)) {
				fVar6 += 0.5f;
			}
			if (gameplay::is_bit_set(iParam1, 9)) {
				fVar6 += 0.25f;
			}
			if (gameplay::is_bit_set(iParam1, 10)) {
				fVar6 += 0.125f;
			}
			if (fVar5 < fVar6) {
				fVar7 = fVar5 / fVar6;
				if (gameplay::is_bit_set(iParam1, 7)) {
					fVar7 = 1f - fVar7;
					fVar7 *= fVar7;
					fVar7 = 1f - fVar7;
				}
				fVar0 *= fVar7;
			}
		}
		if (gameplay::is_bit_set(iParam1, 11)) {
			fVar8 = 0f;
			if (gameplay::is_bit_set(iParam1, 13)) {
				fVar8 += 0.5f;
			}
			if (gameplay::is_bit_set(iParam1, 14)) {
				fVar8 += 0.25f;
			}
			if (gameplay::is_bit_set(iParam1, 15)) {
				fVar8 += 0.125f;
			}
			fVar9 = 1f - fVar8;
			if (fVar5 > fVar9) {
				fVar10 = (fVar5 - fVar9) / fVar8;
				if (gameplay::is_bit_set(iParam1, 12)) {
					fVar10 *= fVar10;
				}
				fVar0 *= (1f - fVar10);
			}
		}
	}
	fVar0 = 1f + fVar0;
	return fVar0;
}

// Position - 0x3352
bool func_70(int iParam0) { return Global_101700.f_8044.f_330[iParam0 /*6*/]; }

// Position - 0x3368
int func_71(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 10) {
		if (func_68(iParam0, iVar2) == 0 && !iVar1) {
			iVar0 = iVar2;
		}
		if (func_72(iParam0, iVar2) == iParam1 && func_68(iParam0, iVar2) > 0) {
			iVar1 = 1;
			iVar0 = iVar2;
		}
		iVar2++;
	}
	return iVar0;
}

// Position - 0x33C8
int func_72(int iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 9) {
		return 31;
	}
	switch (iParam0) {
	case 0: return Global_101700.f_19523[iParam1];

	case 1: return Global_101700.f_19523.f_33[iParam1];

	case 2: return Global_101700.f_19523.f_66[iParam1];

	default:
	}
	return 31;
}

// Position - 0x3430
void func_73() {
	int iVar0;

	iVar0 = func_54();
	switch (iVar0) {
	case 0: func_63(0, 48, 100000); break;

	case 1: func_63(1, 48, 100000); break;

	case 2: func_63(2, 48, 100000); break;
	}
}

// Position - 0x3481
void func_74() {
	int iVar0;

	iVar0 = func_54();
	switch (iVar0) {
	case 0:
		if (!func_157(func_57(0), 12, 37)) {
			func_156(func_57(0), 12, 37, 1);
			func_75(func_57(0), 12, 37, 1, 1);
		}
		else {
			func_156(func_57(0), 12, 36, 1);
			func_75(func_57(0), 12, 36, 1, 1);
		}
		break;

	case 1:
		if (!func_157(func_57(1), 12, 33)) {
			func_156(func_57(1), 12, 33, 1);
			func_75(func_57(1), 12, 33, 1, 1);
		}
		else {
			func_156(func_57(1), 12, 25, 1);
			func_75(func_57(1), 12, 25, 1, 1);
		}
		break;

	case 2:
		if (!func_157(func_57(2), 12, 40)) {
			func_156(func_57(2), 12, 40, 1);
			func_75(func_57(2), 12, 40, 1, 1);
		}
		else {
			func_156(func_57(2), 12, 37, 1);
			func_75(func_57(2), 12, 37, 1, 1);
		}
		break;
	}
}

// Position - 0x3598
int func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar20;
	int iVar30;

	Global_69523[1 /*14*/] = {func_88(iParam0, iParam1, iParam2)};
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam3) {
			func_87(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 1, Global_69523[1 /*14*/].f_1, 1,
					0);
			if (iParam1 == 12) {
				iVar0 = 1;
				if (iParam0 == joaat("player_zero")) {
					if (iParam2 == 31) {
						iVar0 = 0;
					}
				}
				if (iVar0 == 1) {
					uVar3 = {func_83(iParam0, iParam2)};
					iVar1 = 0;
					while (iVar1 <= 14) {
						if (uVar3[iVar1] != -99 && iVar1 != 12 && iVar1 != 14) {
							if (iVar1 != 13) {
								func_75(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_156(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else {
								uVar20 = {func_76(iParam0, uVar3[iVar1])};
								iVar2 = 0;
								while (iVar2 <= 8) {
									func_75(iParam0, 14, uVar20[iVar2], 1, 1);
									func_156(iParam0, 14, uVar20[iVar2], 1);
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
			func_87(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 1, Global_69523[1 /*14*/].f_1, 0,
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
						func_75(iParam0, 3, iVar30, 1, 0);
					}
					else if (iParam2 >= 227 && iParam2 <= 242) {
						iVar30 = 176 + Global_69523[1 /*14*/].f_4;
						func_75(iParam0, 3, iVar30, 1, 0);
					}
					break;

				case 11:
					if (iParam2 >= 9 && iParam2 <= 24) {
						iVar30 = 25 + Global_69523[1 /*14*/].f_4;
						func_75(iParam0, 11, iVar30, 1, 0);
					}
					else if (iParam2 >= 25 && iParam2 <= 40) {
						iVar30 = 9 + Global_69523[1 /*14*/].f_4;
						func_75(iParam0, 11, iVar30, 1, 0);
					}
					break;

				case 8:
					if (iParam2 >= 27 && iParam2 <= 42) {
						iVar30 = 43 + Global_69523[1 /*14*/].f_4;
						func_75(iParam0, 8, iVar30, 1, 0);
						iVar30 = 59 + Global_69523[1 /*14*/].f_4;
						func_75(iParam0, 8, iVar30, 1, 0);
					}
					else if (iParam2 >= 43 && iParam2 <= 58) {
						iVar30 = 27 + Global_69523[1 /*14*/].f_4;
						func_75(iParam0, 8, iVar30, 1, 0);
						iVar30 = 59 + Global_69523[1 /*14*/].f_4;
						func_75(iParam0, 8, iVar30, 1, 0);
					}
					else if (iParam2 >= 59 && iParam2 <= 74) {
						iVar30 = 27 + Global_69523[1 /*14*/].f_4;
						func_75(iParam0, 8, iVar30, 1, 0);
						iVar30 = 43 + Global_69523[1 /*14*/].f_4;
						func_75(iParam0, 8, iVar30, 1, 0);
					}
					break;

				case 14:
					if (iParam2 >= 64 && iParam2 <= 79) {
						iVar30 = 41 + Global_69523[1 /*14*/].f_4;
						func_75(iParam0, 14, iVar30, 1, 0);
					}
					break;
				}
				break;

			case joaat("player_two"):
				switch (iParam1) {
				case 4:
					if (iParam2 >= 81 && iParam2 <= 90) {
						iVar30 = 94 + Global_69523[1 /*14*/].f_4;
						func_75(iParam0, 4, iVar30, 1, 0);
					}
					break;

				case 12:
					if (iParam2 == 2) {
						func_75(iParam0, 14, 17, 1, 0);
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

// Position - 0x397F
struct<10> func_76(int iParam0, int iParam1) {
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
		case 31: func_82(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_82(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_82(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_82(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_82(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_82(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8); break;

		case 5: func_82(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8); break;

		case 6: func_82(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_82(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_82(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_82(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8); break;

		default: func_77(&Var1, iParam0, iParam1, 10); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 31: func_82(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_82(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_82(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8); break;

		case 2: func_82(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8); break;

		case 3: func_82(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_82(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_82(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_82(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_82(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_82(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_77(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 31: func_82(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_82(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_82(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_82(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_82(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8); break;

		case 4: func_82(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8); break;

		case 5: func_82(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_82(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_82(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_82(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_77(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 31: func_82(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_82(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_82(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_82(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_82(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_82(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_82(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_82(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_82(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_82(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_82(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_82(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_82(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_82(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_82(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 14: func_82(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_82(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_82(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_82(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_82(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_82(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_82(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_82(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_82(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_82(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 24: func_82(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_77(&Var1, iParam0, iParam1, 25); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 31: func_82(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_82(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_82(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_82(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_82(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_82(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_82(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_82(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_82(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_82(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_82(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_82(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_82(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_82(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_82(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8); break;

		case 14: func_82(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_82(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_82(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_82(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_82(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_82(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_82(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_82(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_82(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_82(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_77(&Var1, iParam0, iParam1, 25); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x42AF
void func_77(int iParam0, int iParam1, int iParam2, int iParam3)
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
						(*iParam0)[vVar16.z] = func_78(iParam1, vVar16.x, 14, iVar0);
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

// Position - 0x43D9
int func_78(int iParam0, int iParam1, int iParam2, int iParam3) {
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
					return func_81(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_80(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39) {
			dlc1::get_shop_ped_query_component(iVar37, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iParam1 == Var20.f_1) {
					return func_79(iParam0, func_80(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

// Position - 0x44B9
int func_79(int iParam0, int iParam1) {
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

// Position - 0x4860
int func_80(int iParam0) {
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

// Position - 0x4910
int func_81(int iParam0) {
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

// Position - 0x4971
void func_82(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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

// Position - 0x49B9
struct<17> func_83(int iParam0, int iParam1) {
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
				func_86(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			else {
				func_86(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			break;

		case 1: func_86(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0); break;

		case 2: func_86(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8); break;

		case 3: func_86(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31); break;

		case 4: func_86(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2); break;

		case 5:
			func_86(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[0], Global_101700.f_2095.f_539.f_200[0], 6, 3, 0,
					0, 0, -99, 0, 0, 3);
			break;

		case 6: func_86(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_86(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 8: func_86(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 9: func_86(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 10: func_86(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4); break;

		case 11: func_86(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5); break;

		case 12: func_86(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31); break;

		case 13: func_86(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 14: func_86(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6); break;

		case 15: func_86(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31); break;

		case 16: func_86(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31); break;

		case 17: func_86(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 18: func_86(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7); break;

		case 19: func_86(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 20: func_86(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 21: func_86(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_86(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 23: func_86(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31); break;

		case 24: func_86(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31); break;

		case 25: func_86(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 26: func_86(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 27: func_86(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 28: func_86(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 29: func_86(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 30: func_86(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 31: func_86(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31); break;

		case 32: func_86(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 33: func_86(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 34: func_86(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31); break;

		case 35: func_86(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 36: func_86(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 37: func_86(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 38: func_86(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 39: func_86(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 40: func_86(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 41: func_86(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_86(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_86(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_86(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 45: func_86(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 46: func_86(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_86(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 48: func_86(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31); break;

		case 49: func_86(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 50: func_86(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9); break;

		case 51: func_86(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 52: func_86(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		default: func_84(&Var1, iParam0, iParam1, 53); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: func_86(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 1: func_86(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 2:
			func_86(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[1], Global_101700.f_2095.f_539.f_200[1], 17, 2,
					26, 0, 0, -99, 0, 45, 31);
			break;

		case 3: func_86(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1); break;

		case 4: func_86(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2); break;

		case 5: func_86(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 6: func_86(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_86(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3); break;

		case 8: func_86(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5); break;

		case 9: func_86(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 10: func_86(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 11: func_86(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 12: func_86(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 13: func_86(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 14: func_86(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 15: func_86(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 16: func_86(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 17: func_86(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 18: func_86(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31); break;

		case 19: func_86(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 20: func_86(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 21: func_86(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4); break;

		case 22: func_86(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31); break;

		case 23: func_86(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31); break;

		case 24: func_86(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31); break;

		case 25: func_86(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31); break;

		case 26: func_86(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31); break;

		case 27: func_86(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31); break;

		case 28: func_86(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31); break;

		case 29: func_86(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31); break;

		case 30: func_86(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31); break;

		case 31: func_86(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31); break;

		case 32: func_86(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31); break;

		case 33: func_86(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31); break;

		case 34: func_86(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31); break;

		case 35: func_86(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31); break;

		case 36: func_86(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31); break;

		case 37: func_86(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31); break;

		case 38: func_86(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 39: func_86(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 40: func_86(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 41: func_86(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 42: func_86(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31); break;

		case 43: func_86(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6); break;

		case 44: func_86(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 45: func_86(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8); break;

		case 46: func_86(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31); break;

		default: func_84(&Var1, iParam0, iParam1, 47); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: func_86(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 1: func_86(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8); break;

		case 2: func_86(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1); break;

		case 3: func_86(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2); break;

		case 4:
			func_86(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[2], Global_101700.f_2095.f_539.f_200[2], 8, 0, 0,
					0, 0, -99, 0, 0, 31);
			break;

		case 5: func_86(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6); break;

		case 6: func_86(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3); break;

		case 7: func_86(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4); break;

		case 8: func_86(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31); break;

		case 9: func_86(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 10: func_86(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 11: func_86(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5); break;

		case 12: func_86(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 13: func_86(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31); break;

		case 14: func_86(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31); break;

		case 15: func_86(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 16: func_86(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 17: func_86(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 18: func_86(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 19: func_86(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 20: func_86(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 21: func_86(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_86(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 23: func_86(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 24: func_86(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 25: func_86(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 26: func_86(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 27: func_86(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 28: func_86(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 29: func_86(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 30: func_86(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 31: func_86(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 32: func_86(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 33: func_86(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 34: func_86(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 35: func_86(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 36: func_86(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 37: func_86(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 38: func_86(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 39: func_86(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 40: func_86(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 41: func_86(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_86(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_86(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_86(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31); break;

		case 45: func_86(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 46: func_86(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_86(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31); break;

		default: func_84(&Var1, iParam0, iParam1, 48); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: func_86(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31); break;

		case 1: func_86(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0); break;

		case 2: func_86(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1); break;

		case 3: func_86(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2); break;

		case 4: func_86(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3); break;

		case 5: func_86(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4); break;

		case 6: func_86(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5); break;

		case 7: func_86(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6); break;

		case 8: func_86(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7); break;

		case 9: func_86(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8); break;

		case 10: func_86(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9); break;

		case 11: func_86(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10); break;

		case 12: func_86(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11); break;

		case 13: func_86(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12); break;

		case 14: func_86(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13); break;

		case 15: func_86(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14); break;

		case 16: func_86(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15); break;

		case 17: func_86(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16); break;

		case 18: func_86(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17); break;

		case 19: func_86(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18); break;

		case 20: func_86(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19); break;

		case 21: func_86(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20); break;

		case 22: func_86(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21); break;

		case 23: func_86(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22); break;

		case 24: func_86(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23); break;

		case 25: func_86(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24); break;

		default: func_84(&Var1, iParam0, iParam1, 26); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: func_86(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31); break;

		case 1: func_86(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31); break;

		case 2: func_86(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0); break;

		case 3: func_86(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1); break;

		case 4: func_86(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2); break;

		case 5: func_86(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3); break;

		case 6: func_86(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4); break;

		case 7: func_86(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5); break;

		case 8: func_86(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6); break;

		case 9: func_86(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7); break;

		case 10: func_86(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8); break;

		case 11: func_86(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9); break;

		case 12: func_86(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10); break;

		case 13: func_86(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31); break;

		case 14: func_86(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11); break;

		case 15: func_86(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12); break;

		case 16: func_86(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13); break;

		case 17: func_86(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14); break;

		case 18: func_86(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15); break;

		case 19: func_86(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16); break;

		case 20: func_86(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17); break;

		case 21: func_86(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31); break;

		case 22: func_86(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18); break;

		case 23: func_86(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19); break;

		case 24: func_86(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20); break;

		case 25: func_86(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21); break;

		case 26: func_86(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22); break;

		case 27: func_86(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23); break;

		default: func_84(&Var1, iParam0, iParam1, 28); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x6801
void func_84(var* uParam0, int iParam1, int iParam2, int iParam3)
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
						(*uParam0)[func_85(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else {
						(*uParam0)[func_85(vVar16.z)] = func_78(iParam1, vVar16.x, func_85(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1) {
					(*uParam0)[func_85(vVar16.z)] = vVar16.y;
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

// Position - 0x69EB
int func_85(int iParam0) {
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

// Position - 0x6A9B
void func_86(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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

// Position - 0x6B0C
bool func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
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

// Position - 0x7A2A
struct<14> func_88(int iParam0, int iParam1, int iParam2) {
	func_155();
	if (iParam0 == joaat("player_zero")) {
		func_137(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one")) {
		func_118(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two")) {
		func_89(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

//Position - 0x7A7C
void func_89(int iParam0, int iParam1)
{
	switch (iParam0) {
	case 0: func_117(iParam1); break;

	case 2: func_116(iParam1); break;

	case 3: func_113(iParam1); break;

	case 4: func_112(iParam1); break;

	case 6: func_111(iParam1); break;

	case 5: func_110(iParam1); break;

	case 8: func_109(iParam1); break;

	case 9: func_108(iParam1); break;

	case 10: func_107(iParam1); break;

	case 1: func_106(iParam1); break;

	case 7: func_105(iParam1); break;

	case 11: func_104(iParam1); break;

	case 12: func_103(iParam1); break;

	case 13: func_102(iParam1); break;

	case 14: func_90(iParam1); break;
	}
}

// Position - 0x7B6C
void func_90(int iParam0) {
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

	default: func_101(iVar10, iParam0, 155); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x8DA2
void func_91(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
	uParam0->f_12 = func_100(iParam8);
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
		if (func_48(14)) {
			return;
		}
		if (iParam1 == 1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0)) {
				gameplay::set_bit(&uParam0->f_6, 7);
			}
		}
		if (iParam1 == 12) {
			if (!func_98(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_98(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else if (iParam1 == 13) {
		}
		else if (iParam1 == 14) {
			if (!func_98(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_98(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else {
			if (!func_98(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_98(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		gameplay::set_bit(&uParam0->f_6, 0);
		gameplay::set_bit(&uParam0->f_6, 5);
		if (func_87(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 1);
		}
		if (func_87(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 2);
		}
		if (!func_87(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 4);
		}
	}
	else {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 ||
			iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12) {
			if (func_48(14)) {
				return;
			}
			iVar0 = func_94(func_97(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 1);
			}
			iVar0 = func_94(func_93(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 2);
			}
			if (func_92(iParam1, uParam0->f_2, &iVar1)) {
				iVar0 = func_94(iVar1, Global_69521, 0);
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

// Position - 0x9132
bool func_92(int iParam0, int iParam1, int *iParam2) {
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

// Position - 0x9537
int func_93(int iParam0, int iParam1) {
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

// Position - 0x9932
int func_94(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_95(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x9964
int func_95(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_96();
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

// Position - 0x9998
var func_96() { return Global_1312735; }

// Position - 0x99A4
int func_97(int iParam0, int iParam1) {
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

// Position - 0x9D9F
int func_98(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_99(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_94(iVar2, iVar0, 0);
		return gameplay::is_bit_set(iVar3, iVar1);
	}
	return 0;
}

// Position - 0x9DE1
bool func_99(int iParam0, int iParam1, int *iParam2, int *iParam3, bool bParam4, bool bParam5) {
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

// Position - 0xAFD0
int func_100(int iParam0) {
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

// Position - 0xB0A4
void func_101(int iParam0, int iParam1, int iParam2) {
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
					func_91(&Global_69523[0 /*14*/], iParam0, iParam1, &Var2.f_7, 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13) {
		func_91(&Global_69523[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_91(&Global_69523[0 /*14*/], iParam0, iParam1, &Var20.f_9, Var20.f_3, Var20.f_4, Var20.f_5,
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
		iVar60 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_80(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60) {
			dlc1::get_shop_ped_query_component(iVar58, &Var41);
			if (!dlc1::_is_dlc_data_empty(Var41)) {
				if (iVar59 == iParam1 - iParam2) {
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_91(&Global_69523[0 /*14*/], iParam0, iParam1, &Var41.f_9, Var41.f_3, Var41.f_4, Var41.f_5,
							dlc1::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

// Position - 0xB31E
void func_102(int iParam0) {
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

	default: func_101(iVar10, iParam0, 9); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xB46A
void func_103(int iParam0) {
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

	default: func_101(iVar10, iParam0, 48); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xB976
void func_104(int iParam0) {
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

	default: func_101(iVar10, iParam0, 1); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xB9E9
void func_105(int iParam0) {
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

	default: func_101(iVar10, iParam0, 1); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xBA5B
void func_106(int iParam0) {
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

	default: func_101(iVar10, iParam0, 6); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xBB41
void func_107(int iParam0) {
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

	default: func_101(iVar10, iParam0, 33); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xBE82
void func_108(int iParam0) {
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

	default: func_101(iVar10, iParam0, 17); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xC08A
void func_109(int iParam0) {
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

	default: func_101(iVar10, iParam0, 18); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xC2A9
void func_110(int iParam0) {
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

	default: func_101(iVar10, iParam0, 7); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xC3B1
void func_111(int iParam0) {
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

	default: func_101(iVar10, iParam0, 84); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xCD42
void func_112(int iParam0) {
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

	default: func_101(iVar10, iParam0, 104); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xD899
void func_113(int iParam0) {
	if (iParam0 < 136) {
		func_115(iParam0);
	}
	else {
		func_114(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_101(3, iParam0, 242);
	}
}

// Position - 0xD8CD
void func_114(int iParam0) {
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
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xE4D1
void func_115(int iParam0) {
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
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF3D1
void func_116(int iParam0) {
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

	default: func_101(iVar10, iParam0, 9); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF4FD
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

	default: func_101(iVar10, iParam0, 7); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF5F3
void func_118(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_136(iParam1); break;

	case 2: func_135(iParam1); break;

	case 3: func_131(iParam1); break;

	case 4: func_130(iParam1); break;

	case 6: func_129(iParam1); break;

	case 5: func_128(iParam1); break;

	case 8: func_127(iParam1); break;

	case 9: func_126(iParam1); break;

	case 10: func_125(iParam1); break;

	case 1: func_124(iParam1); break;

	case 7: func_123(iParam1); break;

	case 11: func_122(iParam1); break;

	case 12: func_121(iParam1); break;

	case 13: func_120(iParam1); break;

	case 14: func_119(iParam1); break;
	}
}

// Position - 0xF6E3
void func_119(int iParam0) {
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

	default: func_101(iVar10, iParam0, 175); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x10BB1
void func_120(int iParam0) {
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

	default: func_101(iVar10, iParam0, 9); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x10CF7
void func_121(int iParam0) {
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

	default: func_101(iVar10, iParam0, 47); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x11200
void func_122(int iParam0) {
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

	default: func_101(iVar10, iParam0, 63); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x11868
void func_123(int iParam0) {
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

	default: func_101(iVar10, iParam0, 1); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x118DA
void func_124(int iParam0) {
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

	default: func_101(iVar10, iParam0, 5); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x119A9
void func_125(int iParam0) {
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

	default: func_101(iVar10, iParam0, 53); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x11EA3
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

	default: func_101(iVar10, iParam0, 12); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12033
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

	default: func_101(iVar10, iParam0, 77); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12821
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

	default: func_101(iVar10, iParam0, 7); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12929
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

	default: func_101(iVar10, iParam0, 134); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1384B
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

	default: func_101(iVar10, iParam0, 117); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x144F9
void func_131(int iParam0) {
	if (iParam0 < 107) {
		func_134(iParam0);
	}
	else if (iParam0 < 227) {
		func_133(iParam0);
	}
	else {
		func_132(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_101(3, iParam0, 318);
	}
}

// Position - 0x1453E
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
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14FE2
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
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15DD0
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
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16A0F
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

	default: func_101(iVar10, iParam0, 21); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16C86
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

	default: func_101(iVar10, iParam0, 10); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16DC1
void func_137(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_154(iParam1); break;

	case 2: func_153(iParam1); break;

	case 3: func_150(iParam1); break;

	case 4: func_149(iParam1); break;

	case 6: func_148(iParam1); break;

	case 5: func_147(iParam1); break;

	case 8: func_146(iParam1); break;

	case 9: func_145(iParam1); break;

	case 10: func_144(iParam1); break;

	case 1: func_143(iParam1); break;

	case 7: func_142(iParam1); break;

	case 11: func_141(iParam1); break;

	case 12: func_140(iParam1); break;

	case 13: func_139(iParam1); break;

	case 14: func_138(iParam1); break;
	}
}

// Position - 0x16EB1
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

	default: func_101(iVar10, iParam0, 113); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x17C0E
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

	default: func_101(iVar10, iParam0, 10); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x17D7C
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

	default: func_101(iVar10, iParam0, 53); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x182ED
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

	default: func_101(iVar10, iParam0, 45); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18814
void func_142(int iParam0) {
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

	default: func_101(iVar10, iParam0, 1); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18886
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

	default: func_101(iVar10, iParam0, 5); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18955
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

	default: func_101(iVar10, iParam0, 48); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18E04
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

	default: func_101(iVar10, iParam0, 20); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1905E
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

	default: func_101(iVar10, iParam0, 24); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1931D
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

	default: func_101(iVar10, iParam0, 14); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x194D7
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

	default: func_101(iVar10, iParam0, 99); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1A01C
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

	default: func_101(iVar10, iParam0, 113); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1AC4D
void func_150(int iParam0) {
	if (iParam0 < 60) {
		func_152(iParam0);
	}
	else {
		func_151(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_101(3, iParam0, 181);
	}
}

// Position - 0x1AC81
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
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1BA14
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
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1C097
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

	default: func_101(iVar10, iParam0, 6); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1C17C
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

	default: func_101(iVar10, iParam0, 7); return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1C272
void func_155() {
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

// Position - 0x1C2EA
int func_156(int iParam0, int iParam1, int iParam2, int iParam3) {
	Global_69523[1 /*14*/] = {func_88(iParam0, iParam1, iParam2)};
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam3) {
			func_87(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 0, Global_69523[1 /*14*/].f_1, 1,
					0);
		}
		else {
			func_87(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 0, Global_69523[1 /*14*/].f_1, 0,
					1);
		}
		return 1;
	}
	return 0;
}

// Position - 0x1C385
bool func_157(int iParam0, int iParam1, int iParam2) {
	Global_69523[1 /*14*/] = {func_88(iParam0, iParam1, iParam2)};
	return gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2);
}

// Position - 0x1C3AF
void func_158() {
	int iVar0;

	iVar0 = 0;
	gameplay::set_bit(&iVar0, 0);
	gameplay::set_bit(&iVar0, 19);
	gameplay::set_bit(&iVar0, 20);
	gameplay::set_bit(&iVar0, 6);
	gameplay::set_bit(&iVar0, 10);
	gameplay::set_bit(&iVar0, 7);
	gameplay::set_bit(&iVar0, 11);
	gameplay::set_bit(&iVar0, 12);
	gameplay::set_bit(&iVar0, 13);
	gameplay::set_bit(&iVar0, 14);
	gameplay::set_bit(&iVar0, 15);
	func_160(33, iVar0, 0);
	func_159(2);
}

// Position - 0x1C41D
void func_159(int iParam0) { Global_52993 = iParam0; }

// Position - 0x1C42A
void func_160(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < 8) {
		if (Global_101700.f_19523.f_452[iVar1] > 0) {
			if (Global_101700.f_19523.f_443[iVar1] == iParam0) {
				iVar0 = iVar1;
			}
		}
		else {
			iVar2 = iVar1;
		}
		iVar1++;
	}
	if (iVar0 != -1 || iVar2 == -1) {
		return;
	}
	iVar3 = 0;
	if (gameplay::is_bit_set(iParam1, 3)) {
		iVar3++;
	}
	if (gameplay::is_bit_set(iParam1, 4)) {
		iVar3 += 2;
	}
	if (gameplay::is_bit_set(iParam1, 5)) {
		iVar3 += 4;
	}
	if (gameplay::is_bit_set(iParam1, 20)) {
		iVar3 += 8;
	}
	if (iVar3 == 0 && !gameplay::is_bit_set(iParam1, 1)) {
		return;
	}
	iVar3 *= 3;
	if (gameplay::is_bit_set(iParam1, 2)) {
		iVar3 *= 7;
	}
	Global_101700.f_19523.f_442++;
	Global_101700.f_19523.f_461[iVar2] = iParam1;
	Global_101700.f_19523.f_443[iVar2] = iParam0;
	Global_101700.f_19523.f_452[iVar2] = iVar3;
	if (!iParam2) {
		if (!func_162(54)) {
			func_397("AM_H_STOCKS", 1, 0, 40000, 10000, 7, 0, 139, 0);
		}
	}
	func_161(iParam0, 0);
}

// Position - 0x1C576
void func_161(int iParam0, int iParam1) {
	float fVar0;
	float fVar1;
	int iVar2;

	if (Global_48121[iParam0 /*36*/].f_8) {
		return;
	}
	fVar0 = Global_48121[iParam0 /*36*/].f_9;
	if (!iParam1) {
		fVar0 = func_66(iParam0);
	}
	if (fVar0 == 0f) {
		return;
	}
	Global_48121[iParam0 /*36*/].f_14[Global_48121[iParam0 /*36*/].f_13] = fVar0;
	if (fVar0 > Global_48121[iParam0 /*36*/].f_31) {
		Global_48121[iParam0 /*36*/].f_31 = fVar0;
	}
	if (fVar0 < Global_48121[iParam0 /*36*/].f_32) {
		Global_48121[iParam0 /*36*/].f_32 = fVar0;
	}
	Global_48121[iParam0 /*36*/].f_13++;
	if (Global_48121[iParam0 /*36*/].f_13 >= 16) {
		Global_48121[iParam0 /*36*/].f_13 = 0;
	}
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < 16) {
		fVar1 += Global_48121[iParam0 /*36*/].f_14[iVar2];
		iVar2++;
	}
	fVar1 /= system::to_float(16);
	Global_48121[iParam0 /*36*/].f_33 = fVar0 - fVar1;
	Global_48121[iParam0 /*36*/].f_34 = Global_48121[iParam0 /*36*/].f_33 / fVar1 * 100f;
}

// Position - 0x1C682
int func_162(int iParam0) {
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

// Position - 0x1C6C5
void func_163() {
	int iVar0;

	iVar0 = 0;
	gameplay::set_bit(&iVar0, 0);
	gameplay::set_bit(&iVar0, 16);
	gameplay::set_bit(&iVar0, 3);
	gameplay::set_bit(&iVar0, 5);
	gameplay::set_bit(&iVar0, 6);
	gameplay::set_bit(&iVar0, 9);
	gameplay::set_bit(&iVar0, 11);
	gameplay::set_bit(&iVar0, 13);
	func_160(49, iVar0, 0);
	func_159(2);
}

// Position - 0x1C71A
void func_164() {
	int iVar0;

	iVar0 = 0;
	gameplay::set_bit(&iVar0, 16);
	gameplay::set_bit(&iVar0, 20);
	gameplay::set_bit(&iVar0, 11);
	gameplay::set_bit(&iVar0, 12);
	gameplay::set_bit(&iVar0, 13);
	gameplay::set_bit(&iVar0, 14);
	gameplay::set_bit(&iVar0, 15);
	func_160(36, iVar0, 0);
	func_159(2);
}

// Position - 0x1C76B
void func_165() {
	int iVar0;

	iVar0 = 0;
	gameplay::set_bit(&iVar0, 17);
	gameplay::set_bit(&iVar0, 3);
	gameplay::set_bit(&iVar0, 4);
	gameplay::set_bit(&iVar0, 5);
	gameplay::set_bit(&iVar0, 11);
	gameplay::set_bit(&iVar0, 13);
	gameplay::set_bit(&iVar0, 14);
	gameplay::set_bit(&iVar0, 12);
	func_160(12, iVar0, 0);
	iVar0 = 0;
	gameplay::set_bit(&iVar0, 0);
	gameplay::set_bit(&iVar0, 17);
	gameplay::set_bit(&iVar0, 4);
	gameplay::set_bit(&iVar0, 5);
	gameplay::set_bit(&iVar0, 6);
	gameplay::set_bit(&iVar0, 7);
	gameplay::set_bit(&iVar0, 9);
	gameplay::set_bit(&iVar0, 11);
	gameplay::set_bit(&iVar0, 13);
	gameplay::set_bit(&iVar0, 12);
	func_160(15, iVar0, 0);
	func_159(2);
}

// Position - 0x1C818
void func_166() {
	int iVar0;

	iVar0 = 0;
	gameplay::set_bit(&iVar0, 16);
	gameplay::set_bit(&iVar0, 17);
	gameplay::set_bit(&iVar0, 3);
	gameplay::set_bit(&iVar0, 4);
	gameplay::set_bit(&iVar0, 5);
	gameplay::set_bit(&iVar0, 6);
	gameplay::set_bit(&iVar0, 10);
	gameplay::set_bit(&iVar0, 11);
	gameplay::set_bit(&iVar0, 15);
	gameplay::set_bit(&iVar0, 12);
	func_160(65, iVar0, 0);
	iVar0 = 0;
	gameplay::set_bit(&iVar0, 0);
	gameplay::set_bit(&iVar0, 16);
	gameplay::set_bit(&iVar0, 3);
	gameplay::set_bit(&iVar0, 5);
	gameplay::set_bit(&iVar0, 6);
	gameplay::set_bit(&iVar0, 10);
	gameplay::set_bit(&iVar0, 11);
	gameplay::set_bit(&iVar0, 13);
	func_160(40, iVar0, 0);
	func_159(2);
}

// Position - 0x1C8C5
void func_167() {
	int iVar0;

	iVar0 = 0;
	gameplay::set_bit(&iVar0, 16);
	gameplay::set_bit(&iVar0, 20);
	gameplay::set_bit(&iVar0, 6);
	gameplay::set_bit(&iVar0, 10);
	gameplay::set_bit(&iVar0, 7);
	gameplay::set_bit(&iVar0, 11);
	gameplay::set_bit(&iVar0, 12);
	gameplay::set_bit(&iVar0, 13);
	func_160(79, iVar0, 0);
	iVar0 = 0;
	gameplay::set_bit(&iVar0, 0);
	gameplay::set_bit(&iVar0, 16);
	gameplay::set_bit(&iVar0, 3);
	gameplay::set_bit(&iVar0, 4);
	gameplay::set_bit(&iVar0, 5);
	gameplay::set_bit(&iVar0, 6);
	gameplay::set_bit(&iVar0, 10);
	gameplay::set_bit(&iVar0, 7);
	gameplay::set_bit(&iVar0, 11);
	gameplay::set_bit(&iVar0, 12);
	gameplay::set_bit(&iVar0, 13);
	func_160(43, iVar0, 0);
	func_159(2);
}

// Position - 0x1C97A
void func_168() {
	int iVar0;

	iVar0 = 0;
	gameplay::set_bit(&iVar0, 1);
	gameplay::set_bit(&iVar0, 16);
	gameplay::set_bit(&iVar0, 17);
	func_160(61, iVar0, 1);
	Global_48121[61 /*36*/].f_9 *= 0.544f;
	func_159(1);
}

// Position - 0x1C9C2
void func_169() {
	func_170(3);
	func_170(22);
	func_170(25);
	func_170(26);
	func_170(27);
	func_170(28);
	func_170(29);
	func_170(30);
	func_170(31);
	func_170(32);
	func_170(33);
	func_170(34);
	func_170(35);
	func_170(36);
	func_170(37);
	func_170(38);
	func_170(39);
	func_170(40);
	func_170(41);
	func_170(42);
	func_170(43);
	func_170(52);
	func_170(53);
	func_170(54);
	func_170(55);
	func_170(56);
}

// Position - 0x1CA65
void func_170(int iParam0) {
	gameplay::clear_bit(&Global_101700.f_17533[iParam0 /*6*/], 0);
	gameplay::clear_bit(&Global_101700.f_17533[iParam0 /*6*/], 1);
	gameplay::clear_bit(&Global_101700.f_17533[iParam0 /*6*/], 2);
}

// Position - 0x1CA9D
void func_171() {
	func_170(0);
	func_170(1);
	func_170(2);
	func_170(9);
	func_170(10);
	func_170(11);
	func_170(12);
	func_170(13);
	func_170(14);
	func_170(15);
	func_170(16);
	func_170(21);
}

// Position - 0x1CAEA
void func_172() {
	player::is_player_playing(player::player_id());
	switch (Global_101700.f_23938) {
	case 2:
		gameplay::set_bit(&Global_101700.f_23938.f_1, 2);
		if (system::vdist2(func_175(player::player_id()), func_174(88, 0)) < 43681f) {
			gameplay::set_bit(&Global_101700.f_23938.f_3, 2);
		}
		break;

	case 3:
		gameplay::set_bit(&Global_101700.f_23938.f_1, 3);
		if (system::vdist2(func_175(player::player_id()), func_174(89, 0)) < 43681f) {
			gameplay::set_bit(&Global_101700.f_23938.f_3, 3);
		}
		break;

	case 4:
		gameplay::set_bit(&Global_101700.f_23938.f_1, 4);
		if (system::vdist2(func_175(player::player_id()), func_174(90, 0)) < 43681f) {
			gameplay::set_bit(&Global_101700.f_23938.f_3, 4);
		}
		break;
	}
	func_173();
}

// Position - 0x1CBCF
int func_173() {
	if (func_11(0)) {
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

// Position - 0x1CC1A
Vector3 func_174(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0f, 0f, 0f;
	}
	return Global_25501[iVar0 /*23*/][iParam1 /*3*/];
}

// Position - 0x1CC58
Vector3 func_175(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0x1CC6B
void func_176() {
	func_239(104, 1);
	func_177(103, 1, 1);
}

// Position - 0x1CC82
void func_177(int iParam0, int iParam1, int iParam2) {
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		func_179();
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
						func_178();
					}
				}
				else {
					Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_178();
				}
			}
			else {
				Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_178();
			}
		}
	}
}

// Position - 0x1CE2C
void func_178() {
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
	gameplay::clear_bit(&G_SleepModeOnOn25, 0);
}

// Position - 0x1CEAB
void func_179() {
	if (func_48(14)) {
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
		Global_14443 = func_54();
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

// Position - 0x1CF4D
void func_180() { func_181(1794975438, 1, 2, 103, 360000, 10000, -1, 188, -1, 0, 1); }

// Position - 0x1CF70
int func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10) {
	struct<14> Var0;

	if (func_11(0)) {
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
	if (G_SomeGlobalState.MessageCallStates.f_764 < 8) {
		Var0 = iParam0;
		Var0.f_3 = func_10(iParam1);
		Var0.f_4 = gameplay::get_game_timer() + iParam4;
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		gameplay::clear_bit(&Var0.f_1, 0);
		G_SomeGlobalState.MessageCallStates.f_651[G_SomeGlobalState.MessageCallStates.f_764 /*14*/] = {Var0};
		G_SomeGlobalState.MessageCallStates.f_764++;
		func_16(0);
		func_16(1);
		func_16(2);
		return 1;
	}
	return 0;
}

// Position - 0x1D08B
void func_182() {
	func_239(103, 1);
	func_177(103, 1, 1);
}

// Position - 0x1D0A2
void func_183() { func_181(969002696, 1, 2, 103, 360000, 10000, 66, 186, -1, 0, 1); }

// Position - 0x1D0C5
void func_184() { func_239(102, 1); }

// Position - 0x1D0D4
void func_185() { func_181(-1444331296, 1, 2, 50, 120000, 10000, -1, 184, -1, 0, 1); }

// Position - 0x1D0F7
void func_186() {
	func_239(83, 1);
	func_177(99, 1, 1);
}

// Position - 0x1D10E
void func_187() {
	if (func_188()) {
		func_2(-1871231456, 6, 2, 99, 30000, 10000, -1, 182, -1, 0);
	}
}

// Position - 0x1D136
bool func_188() {
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
				return true;
			}
		}
	}
	if (Global_139179 == 2) {
		return true;
	}
	else if (Global_139179 == 3) {
		return false;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x1D1F1
void func_189() {
	func_239(107, 1);
	func_190(286, 0, 0);
}

// Position - 0x1D209
void func_190(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_193(891 + iParam0, 1, -1, 1);
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
		func_191();
	}
}

// Position - 0x1D2F1
void func_191() {
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
		func_49(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_192() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_173();
				}
			}
		}
	}
}

// Position - 0x1D7B2
int func_192() { return Global_25190; }

// Position - 0x1D7BD
int func_193(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_96();
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

// Position - 0x1DB51
void func_194() { func_239(100, 1); }

// Position - 0x1DB60
void func_195() { func_2(-1674789340, 1, 4, 64, 60000, 10000, -1, 178, -1, 0); }

// Position - 0x1DB82
void func_196() { func_239(105, 1); }

// Position - 0x1DB91
void func_197() { func_239(99, 1); }

// Position - 0x1DBA0
void func_198() { func_181(-1134717682, 1, 4, 54, 1920000, 10000, -1, 175, -1, 0, 1); }

// Position - 0x1DBC3
void func_199() { func_239(97, 1); }

// Position - 0x1DBD2
void func_200() {
	func_181(-1159983966, 1, 2, 52, 200000, 10000, -1, 172, -1, 0, 1);
	func_202();
}

// Position - 0x1DBF9
void func_201() { func_239(96, 1); }

// Position - 0x1DC08
void func_202() { func_75(func_57(1), 12, 10, 1, 1); }

// Position - 0x1DC1F
void func_203() {
	func_239(92, 1);
	func_239(93, 1);
	func_399(37, 1);
}

// Position - 0x1DC3C
void func_204() {
	func_205(8);
	func_190(287, 0, 0);
	func_239(106, 1);
}

// Position - 0x1DC5A
void func_205(int iParam0) {
	if (iParam0 == 63 || iParam0 == -1) {
		return;
	}
	func_206(iParam0);
	gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 0);
}

// Position - 0x1DC8D
void func_206(int iParam0) {
	switch (iParam0) {
	case 30: func_207(22, 1, 0, 1, 0); break;

	case 15: func_399(37, 0); break;

	default: break;
	}
}

// Position - 0x1DCC2
void func_207(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (iParam0 != 198) {
		if (Global_69702) {
			Global_2433125.f_74.f_227[iParam0] = iParam1;
		}
		else {
			Global_101700.f_6220.f_227[iParam0] = iParam1;
		}
		Global_32749[iParam0] = iParam2;
		Global_32948[iParam0] = 1;
		func_210(iParam0, iParam3, iParam4, 0);
		func_208(iParam0, iParam1);
	}
}

// Position - 0x1DD1D
void func_208(int iParam0, int iParam1) {
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
			func_209(0, 0);
		}
		else {
			func_209(0, 1);
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

// Position - 0x1DE06
void func_209(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&Global_100340, iParam0);
	}
	else {
		gameplay::clear_bit(&Global_100340, iParam0);
	}
	Global_100339 = 1;
}

// Position - 0x1DE2F
bool func_210(int iParam0, bool bParam1, int iParam2, int iParam3) {
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
	func_213(&Var3, iParam0);
	if (func_211()) {
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
				if (!func_211()) {
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

// Position - 0x1E754
bool func_211() {
	if ((func_192() == -1 || func_192() == 999) && func_212() != 0) {
		return true;
	}
	return false;
}

// Position - 0x1E784
int func_212() { return Global_25191; }

// Position - 0x1E78F
int func_213(var *uParam0, int iParam1) {
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

// Position - 0x21F2B
void func_214() { func_239(85, 1); }

// Position - 0x21F3A
void func_215() {
	if (func_216(5) && func_216(6)) {
		func_181(1800466587, 1, 2, 49, 1920000, 10000, -1, 167, -1, 0, 1);
	}
}

// Position - 0x21F6F
int func_216(int iParam0) {
	if (iParam0 == 63 || iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3);
}

// Position - 0x21F9D
void func_217() { func_239(84, 1); }

// Position - 0x21FAC
void func_218() { func_181(483349085, 1, 2, 49, 120000, 10000, -1, 165, -1, 0, 1); }

// Position - 0x21FCF
void func_219() { func_239(110, 1); }

// Position - 0x21FDE
void func_220() {
	if (func_222()) {
		func_221(1, 96, 500000, 0, 0);
	}
}

// Position - 0x21FFA
void func_221(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return;
	}
	func_26(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

// Position - 0x220E1
bool func_222() {
	if (dlc2::is_dlc_present(-65181770)) {
		return true;
	}
	return false;
}

// Position - 0x220FA
void func_223() {
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_234(43)) {
		Global_101700.f_8044.f_99.f_58[81] = 1;
		uVar0 = G_TextMessageConfig.f_12526[22 /*2*/];
		iVar1 = G_TextMessageConfig.f_12526[22 /*2*/].f_1;
		iVar2 = uVar0;
		iVar3 = -1;
		iVar4 = 0;
		while (iVar2 <= iVar1 && !iVar4) {
			if (G_TextMessageConfig.f_6825[iVar2 /*3*/] == 531432813) {
				iVar3 = G_TextMessageConfig.f_6825[iVar2 /*3*/].f_2;
				iVar5 = G_TextMessageConfig.f_109[iVar3 /*4*/];
				if (iVar5 == 128) {
					Global_101700.f_8044.f_2[22 /*3*/].f_1 = iVar2;
					iVar4 = 1;
				}
			}
			iVar2++;
		}
		iVar6 = func_233(43);
		iVar7 = func_232(43);
		func_227(iVar6);
		func_224(Global_82576[iVar7 /*5*/]);
	}
}

// Position - 0x221C5
void func_224(int iParam0) {
	int iVar0;

	if (iParam0 == -1) {
		return;
	}
	iVar0 = func_226(iParam0);
	if (iVar0 == -1) {
		return;
	}
	func_225(iVar0);
}

// Position - 0x221ED
void func_225(int iParam0) {
	Global_82576[iParam0 /*5*/] = -1;
	Global_82576[iParam0 /*5*/].f_1 = 0;
	Global_82576[iParam0 /*5*/].f_2 = -1;
	Global_82576[iParam0 /*5*/].f_3 = -1;
	Global_82576[iParam0 /*5*/].f_4 = 0;
}

// Position - 0x2222A
int func_226(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (Global_82576[iVar0 /*5*/] == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x2225A
void func_227(int iParam0) {
	if ((Global_88754 || func_231(0)) && Global_88755 == iParam0) {
		return;
	}
	if (iParam0 < 0 || iParam0 > 7) {
		return;
	}
	if (!Global_88757[iParam0 /*17*/]) {
		return;
	}
	if (Global_88757[iParam0 /*17*/].f_9 != 263) {
		func_230(Global_88757[iParam0 /*17*/].f_9, 0, 0);
	}
	func_228(iParam0);
}

// Position - 0x222CC
void func_228(int iParam0) {
	if (gameplay::is_bit_set(Global_88757[iParam0 /*17*/].f_10.f_1, 6)) {
		if (Global_87670 != 4 && Global_87670 != 5) {
			func_229(Global_88757[iParam0 /*17*/].f_5);
		}
	}
	if (gameplay::is_bit_set(Global_88757[iParam0 /*17*/].f_10.f_1, 7)) {
		if (Global_87670 != 4 && Global_87670 != 5) {
			func_229(Global_88757[iParam0 /*17*/].f_5);
		}
	}
	Global_88757[iParam0 /*17*/].f_1 = 0;
	Global_88757[iParam0 /*17*/].f_3 = -1;
	Global_88757[iParam0 /*17*/].f_4 = 6;
	Global_88757[iParam0 /*17*/].f_5 = -1;
	Global_88757[iParam0 /*17*/].f_6 = -1;
	Global_88757[iParam0 /*17*/].f_7 = -1;
	if (Global_88757[iParam0 /*17*/]) {
		if (Global_88757[iParam0 /*17*/].f_9 != 263) {
			if (Global_88757[iParam0 /*17*/].f_9 < 0 || Global_88757[iParam0 /*17*/].f_9 >= 263) {
			}
			func_230(Global_88757[iParam0 /*17*/].f_9, 0, 0);
		}
		Global_88757[iParam0 /*17*/].f_9 = 263;
	}
	Global_88757[iParam0 /*17*/] = 0;
	Global_88757[iParam0 /*17*/].f_8 = -1;
	gameplay::clear_bit(&Global_88757[iParam0 /*17*/].f_10.f_1, 0);
	gameplay::clear_bit(&Global_88757[iParam0 /*17*/].f_10.f_1, 1);
	gameplay::clear_bit(&Global_88757[iParam0 /*17*/].f_10.f_1, 2);
	gameplay::clear_bit(&Global_88757[iParam0 /*17*/].f_10.f_1, 3);
	gameplay::clear_bit(&Global_88757[iParam0 /*17*/].f_10.f_1, 6);
	gameplay::clear_bit(&Global_88757[iParam0 /*17*/].f_10.f_1, 7);
	gameplay::clear_bit(&Global_88757[iParam0 /*17*/].f_10.f_1, 8);
	gameplay::clear_bit(&Global_88757[iParam0 /*17*/].f_10.f_1, 9);
	gameplay::clear_bit(&Global_88757[iParam0 /*17*/].f_10.f_1, 10);
	gameplay::clear_bit(&Global_88757[iParam0 /*17*/].f_10.f_1, 11);
	gameplay::clear_bit(&Global_88757[iParam0 /*17*/].f_10.f_1, 12);
}

// Position - 0x224B4
void func_229(int iParam0) {
	if (iParam0 >= 94) {
		return;
	}
	if (Global_87671 != -1) {
		if (Global_87671 != iParam0) {
			return;
		}
		Global_87671 = -1;
		Global_87670 = 0;
		Global_87672 = 0;
	}
}

// Position - 0x224E9
void func_230(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x225F2
bool func_231(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_530(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x22614
int func_232(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7) {
		if (Global_82576[iVar0 /*5*/] != -1) {
			if (G_TextMessageConfig.f_109[Global_82576[iVar0 /*5*/] /*4*/] == iParam0) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x22655
int func_233(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8) {
		if (Global_88757[iVar0 /*17*/].f_5 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x22685
bool func_234(int iParam0) {
	int iVar0;

	if (iParam0 == 94 || iParam0 == -1) {
		return false;
	}
	if (Global_85809[iParam0 /*2*/]) {
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_82576) {
		if (Global_82576[iVar0 /*5*/] != -1) {
			if (G_TextMessageConfig.f_109[Global_82576[iVar0 /*5*/] /*4*/] == iParam0) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x226ED
void func_235() {
	entity::remove_model_hide(-18.3539f, -1438.784f, 31.305f, 3f, joaat("v_ilev_frnkwarddr1"), 0);
	entity::remove_model_hide(-18.3594f, -1438.133f, 31.305f, 3f, joaat("v_ilev_frnkwarddr2"), 0);
}

// Position - 0x22729
void func_236() {
	if (!gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates.f_923, 3)) {
		gameplay::set_bit(&G_SomeGlobalState.MessageCallStates.f_923, 3);
	}
	else if (!gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates.f_923, 4)) {
		gameplay::set_bit(&G_SomeGlobalState.MessageCallStates.f_923, 4);
	}
	else if (!gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates.f_923, 5)) {
		gameplay::set_bit(&G_SomeGlobalState.MessageCallStates.f_923, 5);
	}
}

// Position - 0x2279D
void func_237() {
	if (!gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates.f_923, 0)) {
		gameplay::set_bit(&G_SomeGlobalState.MessageCallStates.f_923, 0);
	}
	else if (!gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates.f_923, 1)) {
		gameplay::set_bit(&G_SomeGlobalState.MessageCallStates.f_923, 1);
	}
	else if (!gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates.f_923, 2)) {
		gameplay::set_bit(&G_SomeGlobalState.MessageCallStates.f_923, 2);
	}
}

// Position - 0x22811
void func_238() {
	int iVar0;

	iVar0 = func_54();
	if (func_17(iVar0)) {
		switch (iVar0) {
		case 0:
			func_26(0, 1, 38, 60000, 0);
			func_177(95, 0, 0);
			break;

		case 1:
			func_26(1, 1, 38, 60000, 0);
			func_177(95, 1, 0);
			break;

		case 2:
			func_26(2, 1, 38, 60000, 0);
			func_177(95, 2, 0);
			break;
		}
	}
	func_13(-1199050901);
	func_13(1082655975);
	func_13(-2100435596);
}

// Position - 0x228AA
void func_239(int iParam0, int iParam1) {
	if (iParam0 == 146 || iParam0 == -1) {
		return;
	}
	if (Global_101700.f_8044.f_99.f_58[iParam0] == iParam1) {
		return;
	}
	Global_101700.f_8044.f_99.f_58[iParam0] = iParam1;
}

// Position - 0x228EF
void func_240() {
	int iVar0;

	iVar0 = func_241(1801771084);
	if (iVar0 != -1) {
		G_SomeGlobalState.MessageCallStates[iVar0 /*15*/].f_4 = gameplay::get_game_timer() + 100000;
	}
	iVar0 = func_241(-1716308760);
	if (iVar0 != -1) {
		G_SomeGlobalState.MessageCallStates[iVar0 /*15*/].f_4 = gameplay::get_game_timer() + 100000;
	}
	func_373();
}

// Position - 0x22949
int func_241(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_136) {
		if (G_SomeGlobalState.MessageCallStates[iVar0 /*15*/] == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x22981
void func_242() { func_181(341684477, 1, 7, 45, 30000, 5000, -1, 0, -1, 0, 1); }

// Position - 0x229A2
void func_243() {
	int iVar0;

	iVar0 = func_241(1635046052);
	if (iVar0 != -1) {
		G_SomeGlobalState.MessageCallStates.f_913 = 1;
		G_SomeGlobalState.MessageCallStates.f_914 = 0;
		G_SomeGlobalState.MessageCallStates.f_911 = 1635046052;
		func_239(79, 1);
	}
	func_13(1635046052);
}

// Position - 0x229F1
void func_244() {
	if (func_245(59)) {
		func_181(1328556918, 0, 2, 0, 6000, 6000, -1, 142, -1, 262148, 1);
	}
}

// Position - 0x22A1E
bool func_245(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x22A4A
void func_246() {
	if (func_245(9)) {
		func_247(-1074970768, 0, 1, 31, 3, 6000, 6000, -1, -1, 142, -1, 1060);
	}
}

// Position - 0x22A78
int func_247(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11) {
	struct<15> Var0;
	int iVar15;

	if (func_11(0)) {
		return 0;
	}
	if (iParam5 < 0) {
		return 0;
	}
	if (iParam6 < 0) {
		return 0;
	}
	if (iParam8 == 76) {
		return 0;
	}
	if (iParam9 == 235) {
		return 0;
	}
	if (iParam3 < 3) {
		if (gameplay::is_bit_set(iParam2, iParam3)) {
			return 0;
		}
	}
	if (iParam4 < 3) {
		if (iParam4 != iParam3) {
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7) {
		return 0;
	}
	if (G_SomeGlobalState.MessageCallStates.f_136 < 9) {
		Var0 = iParam0;
		if (G_SomeGlobalState.MessageCallStates.f_911 == Var0) {
			G_SomeGlobalState.MessageCallStates.f_911 = -1;
		}
		Var0.f_3 = func_10(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = gameplay::get_game_timer() + iParam5;
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		gameplay::clear_bit(&Var0.f_1, 1);
		gameplay::clear_bit(&Var0.f_1, 0);
		if (iParam7 != -1) {
			gameplay::set_bit(&Var0.f_1, 11);
		}
		else if (iParam1 == 0) {
			gameplay::set_bit(&Var0.f_1, 10);
		}
		G_SomeGlobalState.MessageCallStates[G_SomeGlobalState.MessageCallStates.f_136 /*15*/] = {Var0};
		G_SomeGlobalState.MessageCallStates.f_136++;
		iVar15 = 0;
		while (iVar15 < 3) {
			if (gameplay::is_bit_set(iParam2, iVar15)) {
				func_16(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

// Position - 0x22BF8
void func_248() { func_239(51, 1); }

// Position - 0x22C07
void func_249(int iParam0) {
	ai::set_scenario_group_enabled("LOST_BIKERS", iParam0);
	if (iParam0) {
		gameplay::set_bit(&Global_101700.f_8975.f_25, 2);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_8975.f_25, 2);
	}
}

// Position - 0x22C3D
void func_250(int iParam0) { func_230(109, iParam0, 0); }

// Position - 0x22C4E
void func_251(int iParam0) { func_230(97, iParam0, 0); }

// Position - 0x22C5F
void func_252(int iParam0) {
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

// Position - 0x22CA1
void func_253() {
	func_75(func_57(0), 12, 3, 1, 1);
	func_75(func_57(0), 12, 12, 1, 1);
	func_75(func_57(0), 12, 4, 1, 1);
	func_75(func_57(0), 12, 11, 1, 1);
	func_75(func_57(0), 12, 14, 1, 1);
	func_75(func_57(0), 12, 15, 1, 1);
	func_75(func_57(0), 12, 17, 1, 1);
	func_75(func_57(0), 12, 23, 1, 1);
	func_75(func_57(0), 12, 24, 1, 1);
	func_75(func_57(1), 12, 5, 1, 1);
	func_75(func_57(1), 12, 1, 1, 1);
	func_75(func_57(1), 12, 4, 1, 1);
	func_75(func_57(1), 12, 8, 1, 1);
	func_75(func_57(1), 12, 10, 1, 1);
	func_75(func_57(1), 8, 9, 1, 1);
	func_75(func_57(2), 12, 3, 1, 1);
	func_75(func_57(2), 12, 2, 1, 1);
	func_75(func_57(2), 12, 7, 1, 1);
	func_75(func_57(2), 12, 11, 1, 1);
	func_75(func_57(2), 12, 13, 1, 1);
	func_75(func_57(2), 12, 8, 1, 1);
}

// Position - 0x22DE4
void func_254() {
	func_247(466185907, 1, 2, 14, 3, 200000, 180000, -1, -1, 0, -1, 0);
	func_247(185453884, 1, 4, 14, 3, 350000, 180000, -1, -1, 0, -1, 0);
}

// Position - 0x22E24
void func_255() { Global_36333[12] = gameplay::get_game_timer() + 120000; }

// Position - 0x22E3C
void func_256() { Global_36333[15] = gameplay::get_game_timer() + 120000; }

// Position - 0x22E54
void func_257() { Global_36333[14] = gameplay::get_game_timer() + 120000; }

// Position - 0x22E6C
void func_258() { Global_36333[17] = gameplay::get_game_timer() + 120000; }

// Position - 0x22E84
void func_259() {
	if (!func_260(42)) {
		if (func_245(44)) {
			func_239(42, 1);
		}
		else if (func_245(40)) {
			func_239(42, 1);
		}
	}
}

// Position - 0x22EB9
bool func_260(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0x22EE6
void func_261() { func_239(75, 1); }

// Position - 0x22EF5
void func_262() {
	if (func_54() == 1) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			func_263(4, player::player_ped_id());
		}
	}
}

// Position - 0x22F1A
void func_263(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!entity::does_entity_exist(iParam1)) {
		return;
	}
	if (func_264(iParam0, iParam1)) {
		return;
	}
	if (Global_34904[iParam0 /*31*/].f_24 < 5) {
		Global_34904[iParam0 /*31*/].f_25[Global_34904[iParam0 /*31*/].f_24] = iParam1;
		Global_34904[iParam0 /*31*/].f_24++;
	}
	else {
		iVar2 = 0;
		iVar0 = 0;
		while (iVar0 < 5) {
			iVar1 = Global_34904[iParam0 /*31*/].f_25[iVar0];
			if (!entity::does_entity_exist(iVar1) || ped::is_ped_injured(iVar1)) {
				Global_34904[iParam0 /*31*/].f_25[iVar0] = iParam1;
				iVar2 = 1;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!iVar2) {
		}
	}
}

// Position - 0x22FCC
bool func_264(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_34904[iParam0 /*31*/].f_24) {
		if (iParam1 == Global_34904[iParam0 /*31*/].f_25[iVar0]) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x23005
void func_265() {
	int iVar0;
	int iVar1;

	if (!func_245(74) || !func_245(75)) {
		if (func_245(60)) {
			iVar0 = func_241(-749738207);
			if (iVar0 != -1) {
				iVar1 = gameplay::get_game_timer() + 20000;
				if (G_SomeGlobalState.MessageCallStates[iVar0 /*15*/].f_4 > iVar1) {
					G_SomeGlobalState.MessageCallStates[iVar0 /*15*/].f_4 = iVar1;
				}
			}
			iVar0 = func_266(1269300253);
			if (iVar0 != -1) {
				iVar1 = gameplay::get_game_timer() + 20000;
				if (G_SomeGlobalState.MessageCallStates.f_651[iVar0 /*14*/].f_4 > iVar1) {
					G_SomeGlobalState.MessageCallStates.f_651[iVar0 /*14*/].f_4 = iVar1;
				}
			}
		}
	}
}

// Position - 0x230A9
int func_266(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_764) {
		if (G_SomeGlobalState.MessageCallStates.f_651[iVar0 /*14*/] == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x230E5
void func_267() {
	int iVar0;
	int iVar1;

	if (!func_245(83)) {
		if (func_245(79)) {
			iVar0 = func_266(2073240496);
			if (iVar0 != -1) {
				iVar1 = gameplay::get_game_timer() + 25000;
				if (G_SomeGlobalState.MessageCallStates.f_651[iVar0 /*14*/].f_4 > iVar1) {
					G_SomeGlobalState.MessageCallStates.f_651[iVar0 /*14*/].f_4 = iVar1;
				}
			}
		}
	}
}

// Position - 0x23141
void func_268() {
	int iVar0;
	int iVar1;

	if (!func_245(51)) {
		if (func_245(22)) {
			if (func_245(60)) {
				iVar0 = func_241(-464957327);
				if (iVar0 != -1) {
					iVar1 = gameplay::get_game_timer() + 25000;
					if (G_SomeGlobalState.MessageCallStates[iVar0 /*15*/].f_4 > iVar1) {
						G_SomeGlobalState.MessageCallStates[iVar0 /*15*/].f_4 = iVar1;
					}
				}
			}
		}
	}
}

// Position - 0x231A0
void func_269() { func_239(15, 1); }

// Position - 0x231AF
void func_270() {
	int iVar0;

	gameplay::clear_area(689.6588f, -962.4214f, 22.4975f, 25f, 1, 0, 0, 0);
	if (!func_245(88)) {
		if (!func_234(88)) {
			iVar0 = func_266(-270587643);
			if (iVar0 != -1) {
				func_13(-270587643);
				func_239(15, 1);
			}
		}
	}
}

// Position - 0x23209
void func_271() {
	if (!func_162(22)) {
		func_277(22, 1, 0);
		func_277(23, 1, 0);
		func_277(24, 1, 0);
		func_277(25, 1, 0);
		func_277(26, 1, 0);
		func_277(27, 1, 0);
		func_276(43);
		func_272(43);
		func_397("AM_H_TATTOO", 1, 3000, -1, 10000, 7, 0, 0, 0);
		func_397("AM_H_SHOUT", 0, 20000, -1, 10000, 7, 0, 0, 0);
		func_252(22);
	}
}

// Position - 0x23285
void func_272(int iParam0) {
	func_275(iParam0, 1, 0);
	func_274(iParam0, 1);
	func_273(iParam0, 1);
}

// Position - 0x232A3
void func_273(int iParam0, int iParam1) {
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

// Position - 0x23329
void func_274(int iParam0, int iParam1) {
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

// Position - 0x233AF
void func_275(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x2345B
void func_276(int iParam0) {
	int iVar0;

	if (func_11(0)) {
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 9)) {
		return;
	}
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 9);
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x234D6
void func_277(int iParam0, int iParam1, int iParam2) {
	if (iParam1) {
		if (!func_286(iParam0, 0, 0)) {
			if (iParam2 && Global_91543.f_18[iParam0]) {
				if (func_285(iParam0) == 3 && !func_284(iParam0)) {
					func_283(iParam0);
					func_282(iParam0, 0, 0);
					func_279(iParam0, 1, 0);
					func_278(iParam0);
				}
				else {
					func_282(iParam0, 1, 0);
					func_278(iParam0);
				}
			}
			else {
				func_282(iParam0, 0, 0);
				func_279(iParam0, 1, 0);
				func_278(iParam0);
			}
		}
		else {
			func_279(iParam0, 1, 0);
			func_278(iParam0);
		}
	}
	else if (func_286(iParam0, 0, 0)) {
		func_279(iParam0, 0, 0);
		func_279(iParam0, 1, 0);
		func_278(iParam0);
	}
}

// Position - 0x23595
void func_278(int iParam0) {
	Global_91543.f_160[iParam0] = 1;
	Global_91543.f_159 = 1;
}

// Position - 0x235AF
void func_279(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::clear_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_192() == 0) {
			iVar0 = func_94(func_281(iParam0), -1, 0);
			gameplay::clear_bit(&iVar0, iParam1);
			func_280(func_281(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::clear_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x23618
void func_280(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_95(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x23648
int func_281(int iParam0) {
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

// Position - 0x2390F
void func_282(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::set_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_192() == 0) {
			iVar0 = func_94(func_281(iParam0), -1, 0);
			gameplay::set_bit(&iVar0, iParam1);
			func_280(func_281(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::set_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x23978
void func_283(int iParam0) {
	if (Global_91543.f_18[iParam0]) {
		func_282(iParam0, 10, 1);
		func_282(iParam0, 19, 1);
	}
}

// Position - 0x2399F
int func_284(int iParam0) { return func_286(iParam0, 5, 1); }

// Position - 0x239AF
int func_285(int iParam0) {
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

// Position - 0x23C22
bool func_286(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_192() == 0) {
			return gameplay::is_bit_set(func_94(func_281(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return false;
}

// Position - 0x23C82
void func_287() {
	func_289(1);
	func_288(0);
	func_239(60, 1);
}

// Position - 0x23C9B
void func_288(int iParam0) {
	int iVar0;
	var uVar1;

	if (iParam0 != Global_31552) {
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 263) {
			gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
			iVar0++;
		}
		if (Global_25498 == 1) {
			Global_25499 = 1;
		}
		Global_25498 = 1;
	}
	Global_31552 = iParam0;
	ui::_set_north_yankton_map(iParam0);
	uVar1 = zone::get_zone_from_name_id("PrLog");
	zone::set_zone_enabled(uVar1, iParam0);
}

// Position - 0x23CFF
void func_289(int iParam0) {
	vector3 vVar0;
	int iVar3;
	float fVar4;
	int iVar5;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		func_291(1);
		player::remove_player_helmet(player::get_player_index(), 1);
		if (iParam0 == 1) {
			vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			iVar5 = 0;
			vVar0.z += 1.5f;
			iVar3 = water::test_vertical_probe_against_all_water(vVar0, 1, &fVar4);
			if (iVar3 == 1) {
				iVar5 = 1;
			}
			else if (entity::is_entity_in_water(player::player_ped_id())) {
				iVar5 = 1;
			}
			if (iVar5 == 1) {
				vVar0.z = fVar4 + 10f;
				entity::set_entity_coords(player::player_ped_id(), vVar0, 1, 0, 0, 1);
			}
			else if (iVar3 == 2) {
			}
		}
		func_290(1);
	}
}

// Position - 0x23D9F
void func_290(int iParam0) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (iParam0 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 15);
			ai::clear_ped_tasks(player::player_ped_id());
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				entity::freeze_entity_position(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 1);
			}
			else {
				if (!ped::is_ped_getting_into_a_vehicle(player::player_ped_id())) {
					if (entity::is_entity_attached(player::player_ped_id())) {
						entity::detach_entity(player::player_ped_id(), 1, 1);
					}
				}
				if (!entity::is_entity_attached(player::player_ped_id())) {
					entity::freeze_entity_position(player::player_ped_id(), 1);
				}
			}
		}
		else if (gameplay::is_bit_set(Global_91491.f_20, 15)) {
			iVar0 = 0;
			if (entity::is_entity_attached(player::player_ped_id())) {
				iVar1 = entity::get_entity_attached_to(player::player_ped_id());
				if (entity::does_entity_exist(iVar1)) {
					if (!vehicle::is_this_model_a_boat(entity::get_entity_model(iVar1))) {
						entity::freeze_entity_position(iVar1, 0);
						iVar0 = 1;
					}
				}
			}
			if (!iVar0) {
				entity::freeze_entity_position(player::player_ped_id(), 0);
			}
			gameplay::clear_bit(&Global_91491.f_20, 15);
		}
	}
}

// Position - 0x23E86
void func_291(int iParam0) {
	vector3 vVar0;

	if (iParam0 == 1) {
		if (!gameplay::is_bit_set(Global_91491.f_20, 19)) {
			entity::set_entity_invincible(player::player_ped_id(), 1);
			if (!network::network_is_game_in_progress()) {
				ped::set_ped_can_be_shot_in_vehicle(player::player_ped_id(), 0);
			}
			entity::set_entity_can_be_damaged(player::player_ped_id(), 0);
			entity::set_entity_only_damaged_by_player(player::player_ped_id(), 1);
			entity::set_entity_proofs(player::player_ped_id(), 1, 1, 1, 1, 1, 0, 0, 0);
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				entity::set_entity_collision(player::player_ped_id(), 0, 0);
			}
			entity::clear_entity_last_damage_entity(player::player_ped_id());
			weapon::clear_entity_last_weapon_damage(player::player_ped_id());
			vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			gameplay::clear_area(vVar0, 100f, 1, 0, 0, 0);
			gameplay::set_bit(&Global_91491.f_20, 19);
		}
	}
	else if (gameplay::is_bit_set(Global_91491.f_20, 19)) {
		func_292();
		gameplay::clear_bit(&Global_91491.f_20, 19);
	}
}

// Position - 0x23F53
void func_292() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			entity::set_entity_collision(player::player_ped_id(), 1, 0);
		}
		if (!network::network_is_game_in_progress()) {
			ped::set_ped_can_be_shot_in_vehicle(player::player_ped_id(), 1);
			ped::set_ped_gravity(player::player_ped_id(), 1);
		}
		entity::set_entity_can_be_damaged(player::player_ped_id(), 1);
		entity::set_entity_invincible(player::player_ped_id(), 0);
		entity::set_entity_only_damaged_by_player(player::player_ped_id(), 0);
		entity::set_entity_proofs(player::player_ped_id(), 0, 0, 0, 0, 0, 0, 0, 0);
		entity::set_entity_only_damaged_by_player(player::player_ped_id(), 0);
		entity::set_entity_visible(player::player_ped_id(), 1, 0);
	}
}

// Position - 0x23FD7
void func_293() {
	func_13(-128912482);
	func_13(-131238069);
	func_13(-330732224);
	if (func_260(28) && func_260(29)) {
		func_239(36, 1);
	}
}

// Position - 0x24018
void func_294() {
	func_13(2095586439);
	func_13(1608868018);
	func_13(1134611425);
	func_13(187813079);
	func_13(-39544602);
	func_13(-997367701);
	func_295("AM_H_GAUNT_R", 1);
	func_239(29, 1);
	if (func_260(28)) {
		func_239(36, 1);
	}
}

// Position - 0x2407C
void func_295(char *sParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (Global_100342 && iParam1) {
		if (func_299(sParam0) && !ui::is_help_message_fading_out()) {
			ui::clear_help(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::are_strings_equal(sParam0, &Global_101700.f_19369[iVar0 /*16*/])) {
			iVar1 = iVar0;
			while (iVar1 <= Global_101700.f_19369.f_145 - 2) {
				func_298(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_297(Global_101700.f_19369.f_145 - 1);
			Global_101700.f_19369.f_145--;
			func_296();
			return;
		}
		iVar0++;
	}
}

// Position - 0x24129
void func_296() {
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

// Position - 0x24249
void func_297(int iParam0) {
	StringCopy(&Global_101700.f_19369[iParam0 /*16*/], "", 16);
	StringCopy(&Global_101700.f_19369[iParam0 /*16*/].f_4, "", 16);
	Global_101700.f_19369[iParam0 /*16*/].f_8 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_9 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_11 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_10 = -1;
	Global_101700.f_19369[iParam0 /*16*/].f_12 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_13 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_14 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_15 = 0;
}

// Position - 0x242E3
void func_298(int iParam0, int iParam1) {
	Global_101700.f_19369[iParam0 /*16*/] = {Global_101700.f_19369[iParam1 /*16*/]};
	Global_101700.f_19369[iParam0 /*16*/].f_4 = {Global_101700.f_19369[iParam1 /*16*/].f_4};
	Global_101700.f_19369[iParam0 /*16*/].f_8 = Global_101700.f_19369[iParam1 /*16*/].f_8;
	Global_101700.f_19369[iParam0 /*16*/].f_10 = Global_101700.f_19369[iParam1 /*16*/].f_10;
	Global_101700.f_19369[iParam0 /*16*/].f_9 = Global_101700.f_19369[iParam1 /*16*/].f_9;
	Global_101700.f_19369[iParam0 /*16*/].f_11 = Global_101700.f_19369[iParam1 /*16*/].f_11;
	Global_101700.f_19369[iParam0 /*16*/].f_12 = Global_101700.f_19369[iParam1 /*16*/].f_12;
	Global_101700.f_19369[iParam0 /*16*/].f_13 = Global_101700.f_19369[iParam1 /*16*/].f_13;
	Global_101700.f_19369[iParam0 /*16*/].f_14 = Global_101700.f_19369[iParam1 /*16*/].f_14;
	Global_101700.f_19369[iParam0 /*16*/].f_15 = Global_101700.f_19369[iParam1 /*16*/].f_15;
}

// Position - 0x243F3
var func_299(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x24406
void func_300() {
	func_13(-1631047976);
	func_13(962970051);
	func_13(-1323797481);
	func_295("AM_H_GAUNT_R", 1);
}

// Position - 0x24435
void func_301() {
	func_13(-1980743701);
	func_13(1567521709);
	func_13(-1687842043);
	func_295("AM_H_GAUNT_R", 1);
}

// Position - 0x24464
void func_302() {
	func_13(-553769964);
	func_13(-1434443191);
	func_13(-2032593637);
	func_13(-458789713);
	func_13(321648831);
	func_13(312697495);
	func_239(28, 1);
	if (func_260(29)) {
		func_239(36, 1);
	}
}

// Position - 0x244BF
void func_303() {
	if (func_245(79)) {
		if (func_245(83)) {
			func_304(-128912482, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1028);
			func_304(-131238069, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1028);
			func_304(-330732224, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1028);
		}
		else {
			func_304(-128912482, -1106471007, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1024);
			func_304(-131238069, -1106471007, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1024);
			func_304(-330732224, -1106471007, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1024);
		}
	}
	else if (func_245(83)) {
		func_304(-128912482, 94848458, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1024);
		func_304(-131238069, 94848458, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1024);
		func_304(-330732224, 94848458, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1024);
	}
	else {
		func_304(-128912482, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1024);
		func_304(-131238069, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1024);
		func_304(-330732224, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1024);
	}
}

// Position - 0x24683
int func_304(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) {
	struct<15> Var0;
	int iVar15;

	if (func_11(0)) {
		return 0;
	}
	if (iParam8 < 0) {
		return 0;
	}
	if (iParam9 < 0) {
		return 0;
	}
	if (iParam10 == 76) {
		return 0;
	}
	if (iParam11 == 235) {
		return 0;
	}
	if (iParam6 == iParam5) {
		return 0;
	}
	if (iParam5 != 144 && iParam5 != 0 && iParam5 != 1 && iParam5 != 2) {
		return 0;
	}
	if (G_SomeGlobalState.MessageCallStates.f_136 < 9) {
		Var0 = iParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (G_SomeGlobalState.MessageCallStates.f_911 == Var0) {
			G_SomeGlobalState.MessageCallStates.f_911 = -1;
		}
		Var0.f_3 = func_10(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = gameplay::get_game_timer() + iParam8;
		Var0.f_1 = iParam12;
		iVar15 = 0;
		gameplay::set_bit(&iVar15, iParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		gameplay::set_bit(&Var0.f_1, 0);
		gameplay::set_bit(&Var0.f_1, 13);
		gameplay::clear_bit(&Var0.f_1, 1);
		if (iParam4 == 0) {
			gameplay::set_bit(&Var0.f_1, 10);
		}
		G_SomeGlobalState.MessageCallStates[G_SomeGlobalState.MessageCallStates.f_136 /*15*/] = {Var0};
		G_SomeGlobalState.MessageCallStates.f_136++;
		func_16(iParam5);
		return 1;
	}
	return 0;
}

// Position - 0x247E0
void func_305() {
	if (func_245(79)) {
		if (Global_101700.f_8044.f_99.f_58[34]) {
			func_304(187813079, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1028);
			func_304(-39544602, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1028);
			func_304(-997367701, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1028);
		}
		else {
			func_304(187813079, -1394105734, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
			func_304(-39544602, -1394105734, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
			func_304(-997367701, -1394105734, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
		}
	}
	else if (Global_101700.f_8044.f_99.f_58[34]) {
		func_304(187813079, 94848458, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
		func_304(-39544602, 94848458, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
		func_304(-997367701, 94848458, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
	}
	else {
		func_304(187813079, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
		func_304(-39544602, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
		func_304(-997367701, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
	}
}

// Position - 0x249B6
void func_306() {
	int iVar0;

	iVar0 = 0;
	if (func_245(80)) {
		iVar0++;
	}
	if (func_245(81)) {
		iVar0++;
	}
	if (func_245(82)) {
		iVar0++;
	}
	if (iVar0 == 1) {
		func_307(-1980743701, 0, 0, 12, 3, 6000, 6000, -1, 110, 0, 1024);
		func_307(1567521709, 0, 1, 12, 3, 6000, 6000, -1, 110, 0, 1024);
		func_307(-1687842043, 0, 2, 12, 3, 6000, 6000, -1, 110, 0, 1024);
	}
	else if (iVar0 == 2) {
		func_307(-1631047976, 0, 0, 12, 3, 6000, 6000, -1, 111, 0, 1024);
		func_307(962970051, 0, 1, 12, 3, 6000, 6000, -1, 111, 0, 1024);
		func_307(-1323797481, 0, 2, 12, 3, 6000, 6000, -1, 111, 0, 1024);
	}
	else if (iVar0 == 3) {
		if (func_245(78)) {
			func_304(2095586439, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1028);
			func_304(1608868018, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1028);
			func_304(1134611425, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1028);
		}
		else {
			func_304(2095586439, 1679209251, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
			func_304(1608868018, 1679209251, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
			func_304(1134611425, 1679209251, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
		}
		func_13(1694883968);
	}
}

// Position - 0x24B90
int func_307(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10) {
	struct<15> Var0;
	int iVar15;

	if (func_11(0)) {
		return 0;
	}
	if (iParam5 < 0) {
		return 0;
	}
	if (iParam6 < 0) {
		return 0;
	}
	if (iParam7 == 76) {
		return 0;
	}
	if (iParam8 == 235) {
		return 0;
	}
	if (iParam3 == iParam2) {
		return 0;
	}
	if (iParam2 != 144 && iParam2 != 0 && iParam2 != 1 && iParam2 != 2) {
		return 0;
	}
	if (G_SomeGlobalState.MessageCallStates.f_136 < 9) {
		Var0 = iParam0;
		if (G_SomeGlobalState.MessageCallStates.f_911 == Var0) {
			G_SomeGlobalState.MessageCallStates.f_911 = -1;
		}
		Var0.f_3 = func_10(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = gameplay::get_game_timer() + iParam5;
		Var0.f_1 = iParam10;
		iVar15 = 0;
		gameplay::set_bit(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		gameplay::set_bit(&Var0.f_1, 0);
		gameplay::clear_bit(&Var0.f_1, 1);
		if (iParam1 == 0) {
			gameplay::set_bit(&Var0.f_1, 10);
		}
		G_SomeGlobalState.MessageCallStates[G_SomeGlobalState.MessageCallStates.f_136 /*15*/] = {Var0};
		G_SomeGlobalState.MessageCallStates.f_136++;
		func_16(iParam2);
		return 1;
	}
	return 0;
}

// Position - 0x24CE1
void func_308() {
	if (func_245(83)) {
		if (Global_101700.f_8044.f_99.f_58[34]) {
			func_304(-458789713, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1028);
			func_304(321648831, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1028);
			func_304(312697495, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1028);
		}
		else {
			func_304(-458789713, -1394105734, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
			func_304(321648831, -1394105734, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
			func_304(312697495, -1394105734, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
		}
	}
	else if (Global_101700.f_8044.f_99.f_58[34]) {
		func_304(-458789713, -1106471007, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
		func_304(321648831, -1106471007, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
		func_304(312697495, -1106471007, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
	}
	else {
		func_304(-458789713, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
		func_304(321648831, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
		func_304(312697495, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
	}
}

// Position - 0x24EB7
void func_309() {
	if (func_245(80) && func_245(81) && func_245(82)) {
		func_304(-553769964, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1028);
		func_304(-1434443191, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1028);
		func_304(-2032593637, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1028);
	}
	else {
		func_304(-553769964, -268883259, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
		func_304(-1434443191, -268883259, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
		func_304(-2032593637, -268883259, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
	}
}

// Position - 0x24FAD
void func_310() {
	func_239(30, 1);
	Global_88741 = 1;
}

// Position - 0x24FC1
void func_311() {
	int iVar0;
	int iVar1;

	iVar0 = func_314(4, 4);
	if (iVar0 != 0 && iVar0 != 15 && func_313(iVar0) == 2) {
		iVar1 = 60000;
		switch (func_312(iVar0)) {
		case 2: func_2(692693384, 1, 7, 12, iVar1, 10000, -1, 103, -1, 4); break;

		case 1: func_2(1209844154, 1, 7, 12, iVar1, 10000, -1, 103, -1, 4); break;

		case 0: func_2(-1144971313, 1, 7, 12, iVar1, 10000, -1, 103, -1, 4); break;
		}
	}
	else if (!func_11(0)) {
	}
}

// Position - 0x2506F
int func_312(int iParam0) { return Global_101700.f_1.f_73[iParam0 /*3*/]; }

// Position - 0x25083
int func_313(int iParam0) { return Global_87699[iParam0 /*5*/]; }

// Position - 0x25093
int func_314(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_315(func_316(iParam0));
	if (iVar0 < 0) {
		return 15;
	}
	if (iVar0 >= 10) {
		return 15;
	}
	return Global_101700.f_1.f_12[iVar0 /*6*/][iParam1];
}

// Position - 0x250D4
int func_315(int iParam0) {
	if (iParam0 == 13 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_99.f_205[iParam0];
}

// Position - 0x25101
int func_316(int iParam0) {
	switch (iParam0) {
	case 0: return 7;

	case 1: return 8;

	case 2: return 9;

	case 3: return 10;

	case 4: return 11;
	}
	return -1;
}

// Position - 0x25156
void func_317() {
	switch (func_315(7)) {
	case 1: break;

	case 2:
		func_75(func_57(0), 12, 31, 1, 1);
		func_75(func_57(1), 12, 22, 1, 1);
		break;
	}
}

// Position - 0x25198
void func_318() {
	if (ui::does_blip_exist(Global_68531.f_208[14])) {
		ui::set_blip_flashes(Global_68531.f_208[14], 1);
		ui::set_blip_flash_timer(Global_68531.f_208[14], 10000);
	}
	func_397("AM_H_LHNGR", 2, 1000, -1, 10000, 7, 0, 0, 0);
}

// Position - 0x251E5
void func_319(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x25220
void func_320() { func_321(2, 1); }

// Position - 0x2522E
void func_321(int iParam0, int iParam1) {
	int iVar0;
	char *sVar1;

	gameplay::set_bit(&Global_101700.f_1.f_116, iParam0);
	switch (iParam0) {
	case 10: gameplay::set_bit(&Global_101700.f_1.f_119, 14); break;

	case 13: gameplay::set_bit(&Global_101700.f_1.f_119, 16); break;

	case 12: gameplay::set_bit(&Global_101700.f_1.f_119, 15); break;

	case 11: gameplay::set_bit(&Global_101700.f_1.f_119, 17); break;
	}
	if (!iParam1) {
		iVar0 = 0;
		switch (func_313(iParam0)) {
		case 1: iVar0 = 6; break;

		case 3: iVar0 = 4; break;

		case 2: iVar0 = 5; break;
		}
		sVar1 = func_323(iParam0);
		ui::_set_notification_text_entry("FEED_CREW_U");
		ui::add_text_component_substring_text_label(func_323(iParam0));
		ui::_set_notification_message(sVar1, sVar1, 0, iVar0, "", 0);
		if (!func_162(45)) {
			func_397("AM_H_CREWU", 2, 0, 20000, 10000, func_322(), 0, 131, 0);
		}
	}
}

// Position - 0x2532B
int func_322() {
	func_55();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x25371
char *func_323(int iParam0) { return func_324(iParam0); }

// Position - 0x2537F
char *func_324(int iParam0) {
	switch (iParam0) {
	case 1: return "HC_N_GUS";

	case 2: return "HC_N_KAR";

	case 10: return "HC_N_PAC";

	case 11: return "HC_N_CHE";

	case 3: return "HC_N_HUG";

	case 4: return "HC_N_NOR";

	case 5: return "HC_N_DAR";

	case 6: return "HC_N_PAI";

	case 7: return "HC_N_CHR";

	case 12: return "HC_N_RIC";

	case 8: return "HC_N_EDD";

	case 13: return "HC_N_TAL";

	case 9: return "HC_N_KRM";
	}
	return "ERROR!";
}

// Position - 0x25462
void func_325() { func_321(3, 1); }

// Position - 0x25470
void func_326() { func_321(5, 1); }

// Position - 0x2547E
void func_327() {
	func_399(57, 1);
	func_328(57);
	func_239(109, 1);
}

// Position - 0x2549A
void func_328(int iParam0) {
	if (iParam0 == -1) {
		return;
	}
	Global_68531[iParam0] = 0;
	Global_68531.f_69[iParam0] = 0;
}

// Position - 0x254BF
void func_329() {
	func_276(158);
	func_276(159);
	func_230(158, 1, 0);
	func_230(159, 1, 0);
	func_331(158, 5);
	func_331(159, 5);
	func_330(158);
	func_330(159);
}

// Position - 0x254FD
void func_330(int iParam0) {
	func_275(iParam0, 0, 0);
	func_274(iParam0, 1);
	func_273(iParam0, 1);
}

// Position - 0x2551B
void func_331(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (Global_25501[iVar0 /*23*/].f_16 == iParam1) {
		return;
	}
	Global_25501[iVar0 /*23*/].f_16 = iParam1;
	switch (iParam1) {
	case 1: Global_25501[iVar0 /*23*/].f_12[0] = 40; break;

	case 3: Global_25501[iVar0 /*23*/].f_12[0] = 60; break;
	}
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
}

// Position - 0x255B8
void func_332() {
	func_276(156);
	func_276(157);
	func_230(156, 1, 0);
	func_230(157, 1, 0);
	func_331(156, 5);
	func_331(157, 5);
}

// Position - 0x255EA
void func_333() {
	func_276(161);
	func_276(160);
	func_230(161, 1, 0);
	func_230(160, 1, 0);
}

// Position - 0x2560E
void func_334() {
	int iVar0;
	var uVar1;

	if (!func_11(0)) {
		stats::stat_get_float(joaat("sp0_dist_running"), &uVar1, -1);
		Global_101700.f_2095.f_539.f_1583[0] = uVar1;
		stats::stat_get_int(joaat("sp0_unarmed_hits"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1587[0] = iVar0;
		stats::stat_get_int(joaat("sp0_number_near_miss"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1591[0] = iVar0;
		stats::stat_get_float(joaat("sp0_dist_walk_st"), &uVar1, -1);
		Global_101700.f_2095.f_539.f_1595[0] = uVar1;
		stats::stat_get_int(joaat("sp0_kills_stealth"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1599[0] = iVar0;
		stats::stat_get_int(joaat("sp0_hits_mission"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1603[0] = iVar0;
		stats::stat_get_int(joaat("sp0_hits_peds_vehicles"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1607[0] = iVar0 - Global_101700.f_2095.f_539.f_1603[0];
		stats::stat_get_float(joaat("sp1_dist_running"), &uVar1, -1);
		Global_101700.f_2095.f_539.f_1583[1] = uVar1;
		stats::stat_get_int(joaat("sp1_unarmed_hits"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1587[1] = iVar0;
		stats::stat_get_int(joaat("sp1_number_near_miss"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1591[1] = iVar0;
		stats::stat_get_float(joaat("sp1_dist_walk_st"), &uVar1, -1);
		Global_101700.f_2095.f_539.f_1595[1] = uVar1;
		stats::stat_get_int(joaat("sp1_kills_stealth"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1599[1] = iVar0;
		stats::stat_get_int(joaat("sp1_hits_mission"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1603[1] = iVar0;
		stats::stat_get_int(joaat("sp0_hits_peds_vehicles"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1607[1] = iVar0 - Global_101700.f_2095.f_539.f_1603[1];
		stats::stat_get_float(joaat("sp2_dist_running"), &uVar1, -1);
		Global_101700.f_2095.f_539.f_1583[2] = uVar1;
		stats::stat_get_int(joaat("sp2_unarmed_hits"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1587[2] = iVar0;
		stats::stat_get_int(joaat("sp2_number_near_miss"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1591[2] = iVar0;
		stats::stat_get_float(joaat("sp2_dist_walk_st"), &uVar1, -1);
		Global_101700.f_2095.f_539.f_1595[2] = uVar1;
		stats::stat_get_int(joaat("sp2_kills_stealth"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1599[2] = iVar0;
		stats::stat_get_int(joaat("sp2_hits_mission"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1603[2] = iVar0;
		stats::stat_get_int(joaat("sp2_hits_peds_vehicles"), &iVar0, -1);
		Global_101700.f_2095.f_539.f_1607[2] = iVar0 - Global_101700.f_2095.f_539.f_1603[2];
	}
}

// Position - 0x258DD
void func_335(int iParam0) {
	func_52();
	if (!Global_101700.f_19523.f_232 && func_70(53)) {
		Global_52996[0] = 4000;
		Global_101700.f_19523.f_233[0 /*69*/] = 0;
		Global_101700.f_19523.f_233[0 /*69*/].f_1 = 0;
		Global_52996[1] = 4000;
		Global_101700.f_19523.f_233[1 /*69*/] = 0;
		Global_101700.f_19523.f_233[1 /*69*/].f_1 = 0;
		Global_52996[2] = 4000;
		Global_101700.f_19523.f_233[2 /*69*/] = 0;
		Global_101700.f_19523.f_233[2 /*69*/].f_1 = 0;
		func_28(2);
		func_28(0);
		func_28(1);
		func_26(2, 1, 36, 22300, 0);
		func_26(2, 0, 13, 678, 0);
		func_26(2, 1, 36, 45200, 0);
		func_26(2, 0, 6, 200, 0);
		func_26(2, 0, 4, 12, 0);
		func_26(2, 0, 4, 14, 0);
		func_26(2, 0, 8, 280, 0);
		func_26(2, 1, 36, 30200, 0);
		func_26(2, 0, 13, 185, 0);
		func_26(1, 0, 5, 45, 0);
		func_26(1, 0, 10, 400, 0);
		func_26(1, 0, 11, 19, 0);
		func_26(1, 0, 7, 149, 0);
		func_26(1, 0, 4, 19, 0);
		func_26(0, 0, 4, 19, 0);
		func_26(0, 0, 7, 2313, 0);
		func_26(0, 0, 5, 20, 0);
		func_26(0, 0, 9, 5633, 0);
		func_26(0, 0, 12, 700, 0);
		stats::stat_set_int(joaat("sp0_money_total_spent"), 0, 1);
		stats::stat_set_int(joaat("sp1_money_total_spent"), 0, 1);
		stats::stat_set_int(joaat("sp2_money_total_spent"), 0, 1);
		Global_52996[2] = 10666;
		Global_52996[0] = 3085;
		Global_52996[1] = 1178;
		Global_101700.f_19523.f_232 = 1;
	}
	if (iParam0) {
		Global_52996[2] = 108654;
		Global_52996[0] = 7860;
		Global_52996[1] = 78;
	}
	func_28(2);
	func_28(0);
	func_28(1);
}

// Position - 0x25ADA
void func_336() {
	func_13(-2116452823);
	func_13(1880611494);
	func_239(41, 1);
}

// Position - 0x25AFD
void func_337() {
	func_277(7, 1, 0);
	func_277(8, 1, 0);
	func_277(9, 1, 0);
	func_277(10, 1, 0);
	func_277(11, 1, 0);
	func_277(12, 1, 0);
	func_277(13, 1, 0);
	func_277(14, 1, 0);
	func_277(15, 1, 0);
	func_277(16, 1, 0);
	func_277(17, 1, 0);
	func_277(18, 1, 0);
	func_277(19, 1, 0);
	func_277(20, 1, 0);
	func_272(26);
}

// Position - 0x25B7A
void func_338() { func_221(2, 36, 62680, 0, 0); }

// Position - 0x25B8F
void func_339() {
	func_340(1, 1);
	func_239(11, 1);
}

// Position - 0x25BA5
int func_340(int iParam0, int iParam1) {
	if (!func_342() && func_17(iParam0)) {
		if (!func_341(iParam0) || network::network_is_game_in_progress()) {
			Global_89302.f_45 = iParam0;
			Global_89302.f_46 = 0;
			Global_89302.f_44 = 1;
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (iParam1) {
					player::set_player_invincible(player::player_id(), 1);
				}
				gameplay::clear_area_of_projectiles(entity::get_entity_coords(player::player_ped_id(), 1), 5f, 0);
			}
			return 1;
		}
	}
	return 0;
}

// Position - 0x25C18
bool func_341(int iParam0) {
	func_55();
	return iParam0 == Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x25C34
int func_342() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x25C50
void func_343() {
	if (func_344(0) >= 22000) {
		func_25(0, 35, 22000);
	}
	else {
		func_25(0, 35, func_344(0));
	}
}

// Position - 0x25C7E
int func_344(int iParam0) { return Global_52996[iParam0]; }

// Position - 0x25C8D
void func_345() {
	if (func_344(0) >= 9500) {
		func_25(0, 34, 9500);
	}
	else {
		func_25(0, 34, func_344(0));
	}
}

// Position - 0x25CBB
void func_346() {
	int iVar0;

	if (func_344(0) >= 7500) {
		func_25(0, 33, 5000);
	}
	else {
		iVar0 = system::round(IntToFloat(func_344(0)) * 0.8f);
		if (iVar0 > 5000) {
			iVar0 = 5000;
		}
		func_25(0, 33, iVar0);
	}
}

// Position - 0x25D05
void func_347() {
	int iVar0;

	if (func_344(0) >= 5500) {
		func_25(0, 34, 3000);
	}
	else {
		iVar0 = system::round(IntToFloat(func_344(0)) * 0.8f);
		if (iVar0 > 3000) {
			iVar0 = 3000;
		}
		func_25(0, 34, iVar0);
	}
}

// Position - 0x25D4F
void func_348() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_101700.f_1.f_126[4 /*23*/].f_2[0];
	if (iVar0 == 0) {
		iVar0 = 12000000;
	}
	iVar1 = Global_101700.f_1.f_126[4 /*23*/].f_2[1];
	if (iVar1 == 0) {
		iVar1 = 12000000;
	}
	iVar2 = Global_101700.f_1.f_126[4 /*23*/].f_2[2];
	if (iVar2 == 0) {
		iVar2 = 12000000;
	}
	if (func_361(7)) {
		func_353(7, 0);
	}
	else if (!func_352(7)) {
		func_349(7, 0);
	}
	if (func_361(8)) {
		func_353(8, 0);
	}
	else if (!func_352(8)) {
		func_349(8, 0);
	}
	if (func_260(136)) {
		func_26(0, 1, 32, system::round(IntToFloat(iVar0) + IntToFloat(iVar2) / 2f), 0);
		func_26(1, 1, 32, system::round(IntToFloat(iVar1) + IntToFloat(iVar2) / 2f), 0);
	}
	else if (func_260(135)) {
		func_26(1, 1, 32, iVar1, 0);
		func_26(2, 1, 32, iVar2, 0);
	}
	else {
		func_26(0, 1, 32, iVar0, 0);
		func_26(1, 1, 32, iVar1, 0);
		func_26(2, 1, 32, iVar2, 0);
	}
}

// Position - 0x25E77
void func_349(int iParam0, int iParam1) { func_350(iParam0, iParam1); }

// Position - 0x25E87
void func_350(int iParam0, bool bParam1) {
	Global_36916 = 1;
	if (!Global_40250[iParam0 /*46*/] && !Global_40250[iParam0 /*46*/].f_1) {
		Global_40250[iParam0 /*46*/] = 1;
		func_353(iParam0, bParam1);
	}
	else {
		func_351(iParam0);
		func_350(iParam0, bParam1);
	}
}

// Position - 0x25ECE
void func_351(int iParam0) {
	Global_40250[iParam0 /*46*/] = 0;
	Global_40250[iParam0 /*46*/].f_31 = 0;
	Global_40250[iParam0 /*46*/].f_42 = 0;
	Global_40250[iParam0 /*46*/].f_45 = 0;
	Global_40250[iParam0 /*46*/].f_43 = 0;
	Global_40250[iParam0 /*46*/].f_1 = 0;
}

// Position - 0x25F10
bool func_352(int iParam0) { return Global_40250[iParam0 /*46*/].f_1; }

// Position - 0x25F21
void func_353(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!Global_40250[iParam0 /*46*/] && !Global_40250[iParam0 /*46*/].f_1) {
		return;
	}
	if (Global_40250[iParam0 /*46*/].f_31 == Global_40250[iParam0 /*46*/].f_30) {
		iVar0 = Global_40250[iParam0 /*46*/].f_42 - 1;
		if (iVar0 < 0) {
			return;
		}
		if (Global_36925[Global_40250[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0) {
			Global_40250[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_40250[iParam0 /*46*/].f_1) {
		return;
	}
	iVar1 = Global_40250[iParam0 /*46*/].f_8[Global_40250[iParam0 /*46*/].f_31];
	Global_40250[iParam0 /*46*/].f_31++;
	func_360(iParam0, iVar1);
	Global_40250[iParam0 /*46*/].f_45 = Global_36925[iVar1 /*12*/].f_10;
	Global_40250[iParam0 /*46*/].f_43 = Global_36925[iVar1 /*12*/].f_11;
	iVar2 = Global_40250[iParam0 /*46*/].f_2;
	func_354(Global_36925[iVar1 /*12*/].f_3, iParam0, 0, 0, iParam1);
	iVar3 = 0;
	while (iVar3 < iVar2) {
		if (Global_40250[iParam0 /*46*/].f_3[iVar3] != Global_36925[iVar1 /*12*/].f_2 &&
			Global_40250[iParam0 /*46*/].f_3[iVar3] != Global_36925[iVar1 /*12*/].f_3) {
			func_354(Global_40250[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, iParam1);
		}
		iVar3++;
	}
	if (Global_40250[iParam0 /*46*/].f_31 == Global_40250[iParam0 /*46*/].f_30) {
		if (Global_36925[Global_40250[iParam0 /*46*/].f_32[Global_40250[iParam0 /*46*/].f_42 - 1] /*12*/].f_4 == 0) {
			Global_40250[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

// Position - 0x260BD
void func_354(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) {
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
		Var3 = {func_359(Global_36925[iVar20 /*12*/].f_1)};
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
			Var3 = {func_359(Global_36925[iVar26 /*12*/].f_1)};
		}
	}
	if (!bParam4) {
		if (!Global_45863[iParam0 /*120*/].f_69[iVar0] && !iParam3) {
			switch (iParam0) {
			case 0: func_355(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); break;

			case 1:
				if (iVar2 == 249) {
					func_355(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else {
					func_355(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				break;

			case 2: func_355(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); break;
			}
		}
	}
}

// Position - 0x26492
void func_355(int iParam0, int iParam1, int iParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6,
			  char *sParam7, char *sParam8, char *sParam9, char *sParam10, char *sParam11, char *sParam12,
			  char *sParam13) {
	int iVar0;
	bool bVar1;
	char cVar2[64];

	if (cutscene::is_cutscene_playing()) {
		return;
	}
	iVar0 = func_54();
	bVar1 = false;
	StringCopy(&cVar2, func_358(iParam1, &bVar1), 64);
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
			func_356(ui::_set_notification_message(&cVar2, &cVar2, 0, 2, ui::_get_label_text(func_357(iParam1)), 0));
		}
		else {
			func_356(ui::_set_notification_message("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2,
												   ui::_get_label_text(func_357(iParam1)), 0));
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

// Position - 0x2667A
void func_356(var uParam0) {
	Global_36920[Global_36924] = uParam0;
	Global_16803 = 1;
	Global_16802 = uParam0;
	Global_36924++;
	if (Global_36924 == 3) {
		Global_36924 = 0;
	}
}

// Position - 0x266A8
char *func_357(int iParam0) {
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

// Position - 0x26A13
char *func_358(int iParam0, int *iParam1) {
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

// Position - 0x26E66
struct<16> func_359(int iParam0) {
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

//Position - 0x26E97
int func_360(int iParam0, var uParam1)
{
	if (Global_40250[iParam0 /*46*/].f_42 >= 9) {
		return 0;
	}
	Global_40250[iParam0 /*46*/].f_32[Global_40250[iParam0 /*46*/].f_42] = uParam1;
	Global_40250[iParam0 /*46*/].f_42++;
	return 1;
}

// Position - 0x26EDC
bool func_361(int iParam0) { return Global_40250[iParam0 /*46*/]; }

// Position - 0x26EEB
void func_362() { func_2(801347631, 1, 7, 12, 1000, 1000, -1, 80, -1, 0); }

// Position - 0x26F0C
void func_363() {
	int iVar0;

	iVar0 = Global_101700.f_1.f_126[3 /*23*/].f_2[1];
	if (iVar0 == 0) {
		iVar0 = 200000;
	}
	func_26(1, 1, 95, iVar0, 0);
}

// Position - 0x26F3E
void func_364() {
	if (func_361(7)) {
		func_353(7, 0);
	}
	else if (!func_352(7)) {
		func_349(7, 0);
	}
	func_6(78, 0);
}

// Position - 0x26F6D
void func_365() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_101700.f_1.f_126[2 /*23*/].f_2[0];
	if (iVar0 == 0) {
		iVar0 = 325000;
	}
	iVar1 = Global_101700.f_1.f_126[2 /*23*/].f_2[1];
	if (iVar1 == 0) {
		iVar1 = 325000;
	}
	iVar2 = Global_101700.f_1.f_126[2 /*23*/].f_2[2];
	if (iVar2 == 0) {
		iVar2 = 325000;
	}
	func_26(0, 1, 95, iVar0, 0);
	func_26(1, 1, 95, iVar1, 0);
	func_26(2, 1, 95, iVar2, 0);
}

// Position - 0x26FF3
void func_366() {
	int iVar0;
	int iVar1;

	iVar0 = Global_101700.f_1.f_126[0 /*23*/].f_2[0];
	if (iVar0 == 0) {
		iVar0 = 83100;
	}
	iVar1 = Global_101700.f_1.f_126[0 /*23*/].f_2[1];
	if (iVar1 == 0) {
		iVar1 = 28000;
	}
	func_26(0, 1, 32, iVar0, 0);
	func_26(1, 1, 32, iVar1, 0);
	func_6(74, 60000);
	func_13(1595158098);
	func_13(-420969532);
	func_6(128, 0);
}

// Position - 0x27073
void func_367() {
	if (func_361(7)) {
		func_353(7, 0);
	}
	else if (!func_352(7)) {
		func_349(7, 0);
	}
	if (func_361(6)) {
		func_353(6, 0);
	}
	else if (!func_352(6)) {
		func_349(6, 0);
	}
}

// Position - 0x270BB
void func_368() { func_321(11, 0); }

// Position - 0x270CA
void func_369() {
	if (!func_370(12)) {
		func_177(46, 0, 0);
		func_321(12, 0);
	}
}

// Position - 0x270EB
bool func_370(int iParam0) { return gameplay::is_bit_set(Global_101700.f_1.f_116, iParam0); }

// Position - 0x27101
void func_371() {
	if (player::is_player_playing(player::player_id())) {
		player::_0xD2B315B6689D537D(player::player_id(), 1);
	}
	func_239(68, 1);
}

// Position - 0x27124
void func_372() {
	if (player::is_player_playing(player::player_id())) {
		player::set_auto_give_parachute_when_enter_plane(player::player_id(), 1);
	}
	func_239(67, 1);
}

// Position - 0x27147
void func_373() { func_177(40, 2, 1); }

// Position - 0x27157
void func_374() { func_177(31, 2, 1); }

// Position - 0x27167
void func_375() { func_177(31, 0, 1); }

// Position - 0x27177
void func_376() {
	func_377(19, 2, 1);
	func_177(19, 2, 1);
}

// Position - 0x2718F
void func_377(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (func_390(iParam1, iParam0, &iVar0)) {
		func_388(iParam1, iParam0, 1);
		func_387(iParam1, iParam0, 50);
		if (iParam2) {
			func_379(iParam0, iParam1, 5f * 60f);
		}
		func_378(iVar0, 0);
		gameplay::set_bit(&Global_101700.f_17062.f_175[iVar0 /*19*/].f_18, 1);
		Global_87559++;
	}
}

// Position - 0x271F3
void func_378(int iParam0, int iParam1) {
	if (iParam0 < 9) {
		Global_87680[iParam0 /*2*/] = iParam1;
		if (iParam1 == 0) {
			Global_87680[iParam0 /*2*/].f_1 = 0;
		}
	}
}

// Position - 0x27220
void func_379(int iParam0, int iParam1, float fParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar0 = func_386(iParam0);
	iVar1 = func_386(iParam1);
	iVar2 = func_385(iVar0, iVar1);
	if (iVar2 < 9) {
		fVar3 = 0f;
		if (func_384(&Global_101700.f_17062.f_175[iVar2 /*19*/].f_5)) {
			fVar3 = func_382(&Global_101700.f_17062.f_175[iVar2 /*19*/].f_5);
		}
		func_380(&Global_101700.f_17062.f_175[iVar2 /*19*/].f_5, fVar3 + fParam2);
	}
}

// Position - 0x27292
void func_380(int *iParam0, float fParam1) {
	uParam0->f_1 = func_381(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x272C0
float func_381(bool bParam0) {
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

// Position - 0x27318
float func_382(var *uParam0) {
	if (func_384(uParam0)) {
		if (func_383(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_381(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x27357
bool func_383(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x27367
bool func_384(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x27377
int func_385(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 != 0 && iParam0 != 1 && iParam0 != 2) {
		if (iParam1 == 0 || iParam1 == 1 || iParam1 == 2) {
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 0: return 10;

		case 1: return 0;

		case 2: return 2;

		case 3: return 10;

		case 4: return 5;

		case 5: return 8;

		default: return 10;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0: return 0;

		case 1: return 10;

		case 2: return 1;

		case 3: return 3;

		case 4: return 6;

		case 5: return 10;

		default: return 10;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0: return 2;

		case 1: return 1;

		case 2: return 10;

		case 3: return 4;

		case 4: return 7;

		case 5: return 10;

		default: return 10;
		}
		break;
	}
	return 10;
}

// Position - 0x27501
int func_386(int iParam0) {
	if (iParam0 == 145) {
		return 7;
	}
	if (iParam0 < 150) {
		return Global_101700.f_27009[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144) {
		return 7;
	}
	if (iParam0 == 150) {
		return 6;
	}
	if (iParam0 == 151) {
		return 6;
	}
	return 6;
}

// Position - 0x2755C
void func_387(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_386(iParam0);
	iVar1 = func_386(iParam1);
	iVar2 = func_385(iVar0, iVar1);
	Global_101700.f_17062.f_175[iVar2 /*19*/].f_17 = iParam2;
	if (Global_101700.f_17062.f_175[iVar2 /*19*/].f_17 < 0) {
		Global_101700.f_17062.f_175[iVar2 /*19*/].f_17 = 0;
	}
	if (Global_101700.f_17062.f_175[iVar2 /*19*/].f_17 > 100) {
		Global_101700.f_17062.f_175[iVar2 /*19*/].f_17 = 100;
	}
}

// Position - 0x275D7
void func_388(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_386(iParam0);
	iVar1 = func_386(iParam1);
	iVar2 = func_385(iVar0, iVar1);
	if (iVar2 != 10) {
		func_389(&Global_101700.f_17062.f_175[iVar2 /*19*/].f_5);
		Global_101700.f_17062.f_175[iVar2 /*19*/].f_8 = iParam2;
	}
}

// Position - 0x27624
void func_389(var *uParam0) { func_380(uParam0, 0f); }

// Position - 0x27633
bool func_390(int iParam0, int iParam1, int *iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = func_386(iParam0);
	iVar1 = func_386(iParam1);
	if (iVar0 != 7 && iVar1 != 7) {
		*iParam2 = func_385(iVar0, iVar1);
		if (*iParam2 != 10) {
			return true;
		}
	}
	*iParam2 = 10;
	return false;
}

// Position - 0x27678
void func_391() {
	int iVar0;

	iVar0 = 82;
	if (func_393(82) && func_392(82)) {
		ui::set_blip_flashes(Global_25501[iVar0 /*23*/].f_19, 1);
		ui::set_blip_flash_timer(Global_25501[iVar0 /*23*/].f_19, 10000);
	}
}

// Position - 0x276B6
int func_392(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0;
	}
	return ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19);
}

// Position - 0x276F2
int func_393(int iParam0) {
	int iVar0;
	var uVar1;
	var uVar2;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0;
	}
	uVar1 = gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 0);
	uVar2 = gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 15);
	if (uVar1 && uVar2) {
		return 1;
	}
	return 0;
}

// Position - 0x27753
void func_394() {
	int iVar0;

	iVar0 = ui::get_first_blip_info_id(66);
	if (ui::does_blip_exist(iVar0)) {
		ui::set_blip_flashes(iVar0, 1);
		ui::set_blip_flash_timer(iVar0, 10000);
	}
}

// Position - 0x2777C
void func_395() {
	int iVar0;

	iVar0 = 243;
	while (iVar0 <= 262) {
		if (func_396(iVar0) && !ui::is_radar_hidden() && !gameplay::is_frontend_fading()) {
			ui::set_blip_flashes(Global_25501[iVar0 /*23*/].f_19, 1);
			ui::set_blip_flash_timer(Global_25501[iVar0 /*23*/].f_19, 10000);
		}
		iVar0++;
	}
}

// Position - 0x277D4
int func_396(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0;
	}
	if (ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19)) {
		if (ui::is_blip_on_minimap(Global_25501[iVar0 /*23*/].f_19)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x27828
void func_397(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	func_398(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x27849
void func_398(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6,
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
		func_296();
	}
}

// Position - 0x27A1C
void func_399(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_400(iParam0, 0)) {
			func_319(iParam0, 1, 0);
			func_319(iParam0, 2, 0);
			func_319(iParam0, 3, 0);
			func_319(iParam0, 4, 0);
			func_319(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_319(iParam0, 0, 0);
	}
}

// Position - 0x27A79
int func_400(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x27A9C
void func_401(int iParam0) {
	if (iParam0) {
		StringCopy(&Global_100756, script::get_this_script_name(), 24);
		Global_100750 = 1;
	}
	else {
		StringCopy(&Global_100756, "NULL", 24);
		Global_100750 = 0;
	}
}

// Position - 0x27AC8
void func_402() {
	func_13(-375893868);
	func_13(-658009473);
	func_239(50, 1);
}

// Position - 0x27AEB
void func_403() {
	func_13(546458037);
	if (!func_11(0)) {
		func_397("AM_H_CHOP", 0, 3000, -1, 10000, 2, 0, 0, 0);
	}
	func_239(63, 1);
	if (!func_260(126)) {
		func_230(138, 1, 0);
		func_276(138);
		func_272(138);
		func_207(80, 1, 0, 1, 0);
	}
	else {
		func_230(139, 1, 0);
		func_330(139);
		func_276(139);
	}
}

// Position - 0x27B60
void func_404() {
	func_13(-651018670);
	func_13(-236506853);
	func_239(14, 1);
}

// Position - 0x27B83
void func_405() {
	if (!func_260(48)) {
		func_239(48, 1);
	}
}

// Position - 0x27B9C
void func_406() {
	if (!func_260(48)) {
		func_239(48, 1);
		if (func_54() != 1) {
			func_407(12, 1, "ASS1_MIS", 1, 0, 0, 0, 0, 0, 0, 1);
		}
	}
	func_13(1323596299);
	func_13(-1205448796);
}

// Position - 0x27BE5
int func_407(int iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10) {
	int iVar0;
	char *sVar1;
	int iVar2;
	char *sVar3;
	int iVar4;
	char *sVar5;
	char *sVar6;

	gameplay::clear_bit(&G_SleepModeOnOn25, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	if (func_408(iParam0, sParam2, iParam3, iVar0, sVar1, sVar3, iVar2, iParam4, iParam5, iParam6, iParam8, iParam9,
				 iParam10, iVar4, sVar5, sVar6, iParam1) == 1) {
		if (iParam8 == 1) {
			Global_3020 = iParam7;
			Global_2923[3 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
			Global_3000 = iParam0;
			gameplay::set_bit(&G_SleepModeOnOn25, 1);
			gameplay::set_bit(&G_SleepModeOnOn25, 7);
		}
		return 1;
	}
	return 0;
}

// Position - 0x27C7A
int func_408(var uParam0, char *sParam1, int iParam2, int iParam3, char *sParam4, char *sParam5, int iParam6,
			 int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13,
			 char *sParam14, char *sParam15, int iParam16) {
	int iVar0;

	if (iParam13 > 99) {
	}
	if (gameplay::are_strings_equal(sParam14, sParam15)) {
	}
	func_179();
	iVar0 = 0;
	switch (iParam16) {
	case 0:
		if (Global_14443 == 0) {
			iVar0 = 0;
		}
		else {
			iVar0 = 1;
		}
		break;

	case 2:
		if (Global_14443 == 2) {
			iVar0 = 0;
		}
		else {
			iVar0 = 1;
		}
		break;

	case 1:
		if (Global_14443 == 1) {
			iVar0 = 0;
		}
		else {
			iVar0 = 1;
		}
		break;

	default: iVar0 = 0; break;
	}
	if (iVar0 == 0) {
		if (player::is_player_playing(player::player_id())) {
			if (ped::is_ped_swimming_under_water(player::player_ped_id())) {
				return 0;
			}
		}
		if (Global_101700.f_13010[Global_14443 /*20*/].f_17 == 1) {
			return 0;
		}
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("apptextmessage")) > 0) {
			return 0;
		}
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("apptextmessage")) > 0) {
			return 0;
		}
	}
	if (func_418() == 0) {
		func_416();
		return 0;
	}
	func_415(Global_16812);
	StringCopy(&Global_101700.f_13100[Global_16812 /*104*/], sParam1, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0) {
	}
	else {
		Global_101700.f_13100[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_25 = iParam7;
	Global_101700.f_13100[Global_16812 /*104*/].f_26 = uParam8;
	Global_101700.f_13100[Global_16812 /*104*/].f_29 = uParam9;
	Global_101700.f_13100[Global_16812 /*104*/].f_30 = uParam12;
	Global_101700.f_13100[Global_16812 /*104*/].f_31 = uParam11;
	Global_101700.f_13100[Global_16812 /*104*/].f_28 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&Global_101700.f_13100[Global_16812 /*104*/].f_33, sParam4, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&Global_101700.f_13100[Global_16812 /*104*/].f_50, sParam5, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&Global_101700.f_13100[Global_16812 /*104*/].f_67, sParam14, 64);
	StringCopy(&Global_101700.f_13100[Global_16812 /*104*/].f_83, sParam15, 64);
	if (gameplay::is_bit_set(G_SleepModeOnOn25, 10)) {
		Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 1;
		Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 1;
		Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_414(0);
		func_414(2);
		func_414(1);
	}
	else {
		func_179();
		switch (iParam16) {
		case 3: Global_101700.f_13100[Global_16812 /*104*/].f_99[Global_14443] = 1; break;

		case 0: Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 1; break;

		case 2: Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 1; break;

		case 1: Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 1; break;
		}
		if (iParam16 == 3) {
			switch (Global_14443) {
			case 0:
				func_414(0);
				Global_3019 = 0;
				break;

			case 1:
				func_414(1);
				Global_3019 = 1;
				break;

			case 2:
				func_414(2);
				Global_3019 = 2;
				break;

			case 3:
				func_414(3);
				Global_3019 = 3;
				break;

			default: Global_3019 = 4; break;
			}
		}
	}
	if (iParam7 == 1) {
		if (gameplay::is_bit_set(G_SleepModeOnOn25, 10)) {
			Global_101700.f_13010[0 /*20*/].f_17 = 1;
			Global_101700.f_13010[1 /*20*/].f_17 = 1;
			Global_101700.f_13010[2 /*20*/].f_17 = 1;
		}
		else {
			switch (iParam16) {
			case 3: Global_101700.f_13010[Global_14443 /*20*/].f_17 = 1; break;

			case 0: Global_101700.f_13010[0 /*20*/].f_17 = 1; break;

			case 2: Global_101700.f_13010[2 /*20*/].f_17 = 1; break;

			case 1: Global_101700.f_13010[1 /*20*/].f_17 = 1; break;
			}
		}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10) {
		func_179();
		if (Global_14386) {
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else {
			switch (Global_14443) {
			case 0: StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24); break;

			case 2: StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24); break;

			case 1: StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24); break;

			default: StringCopy(&Global_14432, "Phone_SoundSet_Default", 24); break;
			}
		}
		if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 != 1) {
			if (!func_413()) {
				audio::play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605) {
		if (Global_14443.f_1 == 6) {
			func_412(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_409(1);
			func_412(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14423), -1082130432, -1082130432,
					 -1082130432);
		}
	}
	return 1;
}

// Position - 0x28132
void func_409(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9) {
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		iVar1 = 0;
		if (func_48(14)) {
			while (iVar1 < 34) {
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11) {
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4) {
						if (Global_2882[iVar0] == 0) {
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3) {
								if (gameplay::is_bit_set(G_SleepModeOffOn11, 3)) {
									iVar2 = 42;
									Global_14608 = 1;
								}
								else {
									iVar2 = 255;
									Global_14608 = 0;
								}
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_411(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar2);
								graphics::_pop_scaleform_movie_function_void();
							}
							if (Global_2452520) {
								if (iVar1 == 14) {
									func_410(Global_14424, "SET_DATA_SLOT", system::to_float(1),
											 system::to_float(iVar0), system::to_float(Global_2320[iVar1 /*15*/].f_10),
											 system::to_float(Global_16808), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0,
											 0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else {
			while (iVar1 < 34) {
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11) {
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4) {
						if (Global_2882[iVar0] == 0) {
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1) {
								iVar3 = 0;
								while (iVar3 < 35) {
									if (Global_101700.f_13100[iVar3 /*104*/].f_24 != 0) {
										if (Global_101700.f_13100[iVar3 /*104*/].f_28 == 0) {
											if (Global_101700.f_13100[iVar3 /*104*/].f_99[Global_14443] == 1) {
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_410(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										 system::to_float(Global_2320[iVar1 /*15*/].f_10),
										 system::to_float(Global_16813), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 7) {
								if (Global_69702) {
									iVar4 = 0;
									iVar4 = Global_2594052;
									iVar5 = 0;
									while (iVar5 < 12) {
										if (Global_2594053[iVar5 /*104*/].f_24 != 0) {
											if (Global_2594053[iVar5 /*104*/].f_28 == 0) {
												if (Global_2594053[iVar5 /*104*/
												]
														.f_99[Global_14443] == 1) {
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_410(Global_14424, "SET_DATA_SLOT", system::to_float(1),
											 system::to_float(iVar0), system::to_float(Global_2320[iVar1 /*15*/].f_10),
											 system::to_float(iVar4), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
								}
								else {
									switch (Global_14443) {
									case 0: iVar6 = Global_36917; break;

									case 1: iVar6 = Global_36918; break;

									case 2: iVar6 = Global_36919; break;

									default: break;
									}
									func_410(Global_14424, "SET_DATA_SLOT", system::to_float(1),
											 system::to_float(iVar0), system::to_float(Global_2320[iVar1 /*15*/].f_10),
											 system::to_float(iVar6), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14) {
								func_410(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										 system::to_float(Global_2320[iVar1 /*15*/].f_10),
										 system::to_float(Global_16808), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 20) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_411(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2319);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2) {
								if (gameplay::is_bit_set(G_SleepModeOffOn11, 6)) {
									iVar7 = 42;
								}
								else {
									iVar7 = 255;
								}
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_411(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar7);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3) {
								if (gameplay::is_bit_set(G_SleepModeOffOn11, 3)) {
									iVar8 = 42;
									Global_14608 = 1;
								}
								else {
									iVar8 = 255;
									Global_14608 = 0;
								}
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_411(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar8);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 8) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_411(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(42);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 23 &&
									 gameplay::are_strings_equal(&Global_2320[iVar1 /*15*/], "CELL_BENWEB") &&
									 gameplay::is_bit_set(G_SleepModeOffOn11, 6)) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_411(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(42);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23) {
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
								func_410(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										 system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f,
										 &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else {
								func_410(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										 system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(0), -1f,
										 &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

// Position - 0x286D8
void func_410(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
			  char *sParam7, char *sParam8, char *sParam9, char *sParam10, char *sParam11) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam2));
	if (fParam3 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam3));
	}
	if (fParam4 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam4));
	}
	if (fParam5 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam5));
	}
	if (fParam6 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam6));
	}
	if (!gameplay::is_string_null_or_empty(sParam7)) {
		func_411(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_411(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_411(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_411(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_411(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x2878B
void func_411(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x2879D
void func_412(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam2));
	if (fParam3 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam3));
	}
	if (fParam4 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam4));
	}
	if (fParam5 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam5));
	}
	if (fParam6 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam6));
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x28800
bool func_413() { return Global_1315233; }

// Position - 0x2880C
void func_414(int iParam0) {
	var uVar0;
	var uVar1;

	uVar0 = Global_101700.f_13010[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

// Position - 0x2882B
void func_415(int iParam0) {
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	uVar0 = time::get_clock_seconds();
	uVar1 = time::get_clock_minutes();
	uVar2 = time::get_clock_hours();
	uVar3 = time::get_clock_day_of_month();
	uVar4 = time::get_clock_month() + 1;
	uVar5 = time::get_clock_year();
	Global_101700.f_13100[iParam0 /*104*/].f_18 = uVar0;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_5 = uVar5;
}

// Position - 0x288BD
void func_416() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_69702) {
		iVar0 = 24;
		iVar1 = 33;
	}
	else {
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101700.f_13100[Global_16812 /*104*/].f_18 = -1;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1) {
		if (!func_417(Global_101700.f_13100[iVar2 /*104*/].f_18, Global_101700.f_13100[Global_16812 /*104*/].f_18)) {
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_24 = 1;
}

// Position - 0x28988
int func_417(struct<6> Param0, struct<6> Param6) {
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;

	if (Param0.f_5 < Param6.f_5) {
		return 0;
	}
	if (Param0.f_5 > Param6.f_5) {
		return 1;
	}
	if (Param0.f_5 == Param6.f_5) {
		if (Param0.f_4 < Param6.f_4) {
			return 0;
		}
		if (Param0.f_4 > Param6.f_4) {
			return 1;
		}
		if (Param0.f_4 == Param6.f_4) {
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = Param0.f_3 * 86400;
			iVar12 = Var0 + Var0.f_1 + Var0.f_2 + Var0.f_3;
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = Param6.f_3 * 86400;
			iVar13 = Var6 + Var6.f_1 + Var6.f_2 + Var6.f_3;
			if (iVar12 > iVar13 || iVar12 == iVar13) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
	return 0;
}

// Position - 0x28A73
int func_418() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_69702) {
		iVar0 = 24;
		iVar1 = 33;
	}
	else {
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1) {
		if (Global_101700.f_13100[iVar2 /*104*/].f_24 == 0) {
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101700.f_13100[Global_16812 /*104*/].f_18 = -1;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1) {
		if (Global_101700.f_13100[iVar2 /*104*/].f_24 == 0 || Global_101700.f_13100[iVar2 /*104*/].f_24 == 1) {
			if (!func_417(Global_101700.f_13100[iVar2 /*104*/].f_18,
						  Global_101700.f_13100[Global_16812 /*104*/].f_18)) {
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34) {
		return 0;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

// Position - 0x28BCA
void func_419() {
	func_181(1323596299, 1, 2, 12, 15000, 5000, -1, 51, -1, 0, 1);
	func_181(-1205448796, 1, 5, 1, 15000, 5000, -1, 51, -1, 0, 1);
	func_13(/* Assassination 1 Text */1635608802);
}

// Position - 0x28C0F
void func_420() {
	func_13(-2014002000);
	func_13(-314546970);
	func_13(-1306479777);
	func_13(-1652588035);
	func_13(-125167689);
	func_239(47, 1);
}

// Position - 0x28C50
void func_421() {
	func_13(-444489072);
	func_13(154402960);
	func_21(23, 2);
	func_20(23);
	func_239(44, 1);
}

// Position - 0x28C81
void func_422() {
	func_13(1269300253);
	func_13(-749738207);
	func_239(23, 1);
}

// Position - 0x28CA4
void func_423(int iParam0, int iParam1) { Global_86830[iParam0] = iParam1; }

// Position - 0x28CB6
void func_424() {
	int iVar0;
	int iVar1;

	func_239(126, 1);
	func_427(6, 1);
	func_426(6, 1);
	func_427(5, 0);
	func_399(4, 1);
	func_399(5, 1);
	if (func_425(157) != 1) {
		func_207(156, 1, 0, 1, 0);
	}
	func_207(159, 1, 0, 1, 0);
	func_207(160, 1, 0, 1, 0);
	func_207(96, 1, 0, 1, 0);
	iVar0 = func_54();
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (func_17(iVar0)) {
			if (iVar0 == 1) {
				func_263(12, player::player_ped_id());
			}
		}
	}
	func_426(5, 0);
	func_399(2, 0);
	func_399(3, 0);
	func_207(153, 1, 0, 1, 0);
	func_207(155, 0, 0, 1, 0);
	func_207(154, 0, 0, 1, 0);
	func_207(80, 0, 0, 1, 0);
	if (!func_260(63)) {
		func_13(546458037);
		func_13(1674644829);
		if (!func_11(0)) {
			func_397("AM_H_CHOP", 0, 3000, -1, 10000, 2, 0, 0, 0);
			func_181(1674644829, 1, 2, 19, 10000, 10000, -1, 0, -1, 524288, 1);
		}
		func_239(63, 1);
	}
	func_230(138, 0, 0);
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("chop")) == 0) {
		func_230(139, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < 4) {
		Global_101700.f_17492.f_24[1 /*5*/][iVar1] = 1;
		iVar1++;
	}
	Global_101700.f_19077.f_264 = 1;
	if (!func_11(0)) {
		func_397("AM_H_HILLS", 2, 3000, -1, 10000, 2, 0, 0, 0);
	}
}

// Position - 0x28E40
int func_425(int iParam0) {
	if (iParam0 != 198) {
		if (Global_69702) {
			return Global_2433125.f_74.f_227[iParam0];
		}
		else {
			return Global_101700.f_6220.f_227[iParam0];
		}
	}
	return 0;
}

// Position - 0x28E79
void func_426(int iParam0, int iParam1) {
	if (iParam0 == 10) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_101700.f_6188[iParam0], 1);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_6188[iParam0], 1);
	}
	if (Global_86862[iParam0 /*10*/].f_7 != 263) {
		func_275(Global_86862[iParam0 /*10*/].f_7, gameplay::is_bit_set(Global_101700.f_6188[iParam0], 1), 0);
	}
}

// Position - 0x28EE2
void func_427(int iParam0, int iParam1) {
	if (iParam0 == 10) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_101700.f_6188[iParam0], 0);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_6188[iParam0], 0);
	}
	gameplay::set_save_house(Global_86862[iParam0 /*10*/].f_8, iParam1, 1);
	func_455(iParam0);
	func_453(iParam0, 0);
	func_451(iParam0);
	func_428(iParam0);
}

// Position - 0x28F46
void func_428(int iParam0) {
	if (iParam0 == 10) {
		return;
	}
	switch (iParam0) {
	case 0:
		gameplay::set_bit(&Global_31569[38 / 32], 38 % 32);
		func_429(38, 0);
		gameplay::set_bit(&Global_31569[41 / 32], 41 % 32);
		func_429(41, 0);
		gameplay::set_bit(&Global_31569[43 / 32], 43 % 32);
		func_429(43, 0);
		gameplay::set_bit(&Global_31569[42 / 32], 42 % 32);
		func_429(42, 0);
		gameplay::set_bit(&Global_31569[44 / 32], 44 % 32);
		func_429(44, 0);
		break;

	case 1:
		gameplay::set_bit(&Global_31569[51 / 32], 51 % 32);
		func_429(51, 0);
		break;

	case 2:
		gameplay::set_bit(&Global_31569[51 / 32], 51 % 32);
		func_429(51, 0);
		break;

	case 3:
		gameplay::set_bit(&Global_31569[53 / 32], 53 % 32);
		func_429(53, 0);
		break;

	case 4:
		gameplay::set_bit(&Global_31569[81 / 32], 81 % 32);
		func_429(81, 0);
		gameplay::set_bit(&Global_31569[82 / 32], 82 % 32);
		func_429(82, 0);
		break;

	case 5:
		gameplay::set_bit(&Global_31569[47 / 32], 47 % 32);
		func_429(47, 0);
		gameplay::set_bit(&Global_31569[50 / 32], 50 % 32);
		func_429(50, 0);
		break;

	case 6:
		gameplay::set_bit(&Global_31569[50 / 32], 50 % 32);
		func_429(50, 0);
		break;
	}
}

// Position - 0x290D6
void func_429(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 != 226) {
		if (Global_69702) {
			iVar0 = Global_2433125.f_74[iParam0];
		}
		else {
			iVar0 = Global_101700.f_6220[iParam0];
		}
		if (iVar0 != iParam1 || gameplay::is_bit_set(Global_31569[iParam0 / 32], iParam0 % 32)) {
			if (iParam1 == 4 || iParam1 == 3 || iParam1 == 5 || iParam1 == 6 || iParam1 == 2) {
				gameplay::set_bit(&Global_31578[iParam0 / 32], iParam0 % 32);
				Global_32041[iParam0] = iParam1;
			}
			else if (Global_69702) {
				Global_2433125.f_74[iParam0] = iParam1;
			}
			else {
				Global_101700.f_6220[iParam0] = iParam1;
			}
			gameplay::set_bit(&Global_31569[iParam0 / 32], iParam0 % 32);
			func_431(iParam0);
			if (gameplay::is_bit_set(Global_31569[iParam0 / 32], iParam0 % 32)) {
				func_430(iParam0);
			}
		}
	}
}

// Position - 0x291CF
void func_430(int iParam0) {
	if (!gameplay::is_bit_set(Global_32512.f_228[iParam0 / 32], iParam0 % 23)) {
		gameplay::set_bit(&Global_32512.f_228[iParam0 / 32], iParam0 % 23);
		Global_32512[Global_32512.f_227] = iParam0;
		Global_32512.f_227++;
	}
}

// Position - 0x2921D
void func_431(int iParam0) {
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (!func_211()) {
		return;
	}
	if (ped::is_ped_injured(player::player_ped_id())) {
		return;
	}
	Var0 = {func_450(iParam0)};
	if (gameplay::is_bit_set(Var0.f_4, 2)) {
		func_436(iParam0, &Var0);
	}
	if (!object::_does_door_exist(Var0.f_5)) {
		if (cutscene::is_cutscene_playing()) {
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = gameplay::get_distance_between_coords(Var0, entity::get_entity_coords(player::player_ped_id(), 1), 1);
	if (gameplay::is_bit_set(Global_31578[iParam0 / 32], iParam0 % 32) && Global_32041[iParam0] == 2 && fVar10 > 210f) {
		gameplay::clear_bit(&Global_31578[iParam0 / 32], iParam0 % 32);
		Global_31587[iParam0] = 0;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("startup_positioning")) == 0) {
		if (gameplay::is_bit_set(Global_31814[iParam0 / 32], iParam0 % 32)) {
			if (fVar10 < 25f) {
				if (Global_91543.f_301 == 0) {
					if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
						Global_91543.f_301 = interior::get_interior_from_entity(player::player_ped_id());
					}
				}
				iVar11 = Global_91543.f_301;
				iVar12 = interior::get_interior_at_coords(Var0);
				if (iVar11 == iVar12 && iVar11 != 0) {
					gameplay::set_bit(&Global_31578[iParam0 / 32], iParam0 % 32);
					Global_32041[iParam0] = 3;
					gameplay::set_bit(&Global_31569[iParam0 / 32], iParam0 % 32);
				}
			}
			gameplay::clear_bit(&Global_31814[iParam0 / 32], iParam0 % 32);
		}
	}
	if (gameplay::is_bit_set(Global_31578[iParam0 / 32], iParam0 % 32)) {
		iVar9 = Global_32041[iParam0];
	}
	else if (gameplay::is_bit_set(Var0.f_4, 0)) {
		if (Global_101700.f_8044) {
			iVar9 = func_433(iParam0);
		}
		else {
			iVar9 = 0;
		}
		if (func_48(14)) {
			iVar9 = 0;
		}
	}
	else if (gameplay::is_bit_set(Var0.f_4, 1) &&
			 script::_get_number_of_instances_of_script_with_name_hash(joaat("ambient_solomon")) == 0) {
		if (func_432()) {
			iVar9 = 0;
		}
		else {
			iVar9 = 1;
		}
	}
	else {
		iVar9 = Global_101700.f_6220[iParam0];
	}
	if (Global_32268[iParam0] != iVar9) {
		bVar7 = true;
	}
	if (gameplay::is_bit_set(Global_31569[iParam0 / 32], iParam0 % 32)) {
		if (!gameplay::is_bit_set(Global_31578[iParam0 / 32], iParam0 % 32) ||
			Global_31587[iParam0] == 0 && Global_32041[iParam0] != 2) {
			bVar7 = true;
		}
	}
	if (bVar7) {
		if (!Global_31568) {
		}
		else {
			if (!object::_does_door_exist(Var0.f_5)) {
				object::add_door_to_system(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9) {
			case 1:
				if (gameplay::is_bit_set(Var0.f_4, 3)) {
					bVar13 = true;
				}
				else if (fVar10 > 3f || gameplay::absf(object::_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f) {
					iVar14 = interior::get_interior_from_entity(player::player_ped_id());
					iVar15 = interior::get_interior_at_coords(Var0);
					if (iVar14 != iVar15 || iVar14 == 0) {
						bVar13 = true;
					}
				}
				if (bVar13) {
					if (Var0.f_6 != 0f) {
						object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
				}
				break;

			case 4:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			case 2:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			case 0:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 1);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			case 3:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, 0, 0, 1);
				bVar8 = true;
				break;

			case 5:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			case 6:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			default:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;
			}
		}
		if (bVar8) {
			gameplay::clear_bit(&Global_31569[iParam0 / 32], iParam0 % 32);
			Global_32268[iParam0] = iVar9;
		}
	}
	if (gameplay::is_bit_set(Global_31578[iParam0 / 32], iParam0 % 32) && Global_32041[iParam0] != 2) {
		gameplay::set_bit(&Global_31569[iParam0 / 32], iParam0 % 32);
		func_430(iParam0);
		if (Global_31587[iParam0] < 2) {
			Global_31587[iParam0]++;
		}
	}
}

// Position - 0x29700
bool func_432() {
	if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
		return false;
	}
	switch (func_54()) {
	case 0:
		if (Global_101700.f_8044.f_99.f_58[65]) {
			return true;
		}
		break;

	case 1:
		if (Global_101700.f_8044.f_99.f_58[66]) {
			return true;
		}
		break;

	case 2:
		if (Global_101700.f_8044.f_99.f_58[65]) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x2977F
int func_433(int iParam0) {
	int iVar0;

	iVar0 = func_54();
	if (func_434(iParam0)) {
		return 1;
	}
	if (iParam0 == 49) {
		if (iVar0 == 1) {
			if (gameplay::is_bit_set(Global_101700.f_6188[5], 0) || gameplay::is_bit_set(Global_101700.f_6188[6], 0)) {
				return 0;
			}
		}
		if (func_17(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[5], iVar0)) {
				return 0;
			}
		}
	}
	switch (iParam0) {
	case 38:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
		if (iVar0 == 0) {
			if (gameplay::is_bit_set(Global_101700.f_6188[0], 0)) {
				return 0;
			}
		}
		if (func_17(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[0], iVar0)) {
				if (iParam0 != 40) {
					return 0;
				}
				else {
					return 1;
				}
			}
		}
		break;

	case 47:
	case 48:
	case 49:
		if (iVar0 == 1) {
			if (gameplay::is_bit_set(Global_101700.f_6188[5], 0)) {
				return 0;
			}
		}
		if (func_17(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[5], iVar0)) {
				return 0;
			}
		}
		break;

	case 50:
		if (iVar0 == 1) {
			if (gameplay::is_bit_set(Global_101700.f_6188[6], 0)) {
				return 0;
			}
		}
		if (func_17(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[6], iVar0)) {
				return 0;
			}
		}
		break;

	case 51:
	case 52:
		if (iVar0 == 2) {
			if (gameplay::is_bit_set(Global_101700.f_6188[2], 0)) {
				return 0;
			}
			if (func_17(iVar0)) {
				if (gameplay::is_bit_set(Global_86851[2], iVar0)) {
					return 0;
				}
			}
		}
		else if (iVar0 == 0) {
			if (gameplay::is_bit_set(Global_101700.f_6188[1], 0)) {
				return 0;
			}
			if (func_17(iVar0)) {
				if (gameplay::is_bit_set(Global_86851[1], iVar0)) {
					return 0;
				}
			}
		}
		break;

	case 53:
		if (iVar0 == 2) {
			if (gameplay::is_bit_set(Global_101700.f_6188[3], 0)) {
				return 0;
			}
		}
		if (func_17(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[3], iVar0)) {
				return 0;
			}
		}
		break;

	default: return 0;
	}
	return 1;
}

// Position - 0x299D4
bool func_434(int iParam0) {
	int iVar0;

	if (iParam0 == 40 || iParam0 == 49 || iParam0 == 52) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				iVar0 = entity::get_entity_model(func_435(ped::get_vehicle_ped_is_in(player::player_ped_id(), 1)));
				switch (iVar0) {
				case joaat("utillitruck"):
				case joaat("monster"): return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x29A40
var func_435(var uParam0) { return uParam0; }

// Position - 0x29A4A
void func_436(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;

	if (!gameplay::is_bit_set(uParam1->f_4, 2)) {
		return;
	}
	iVar0 = func_439();
	iVar1 = func_438(iVar0);
	switch (iParam0) {
	case 133:
	case 134:
	case 201:
	case 202:
		if (func_437(iParam0)) {
			if (iVar1 < 19) {
				if (iVar1 >= 7) {
					Global_101700.f_6220[iParam0] = 0;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
			else {
				return;
			}
		}
		else if (iVar1 >= 19) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 12f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (iVar1 < 7) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 12f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 199:
	case 200:
	case 203:
	case 204:
		if (func_437(iParam0)) {
			if (iVar1 < 18) {
				if (iVar1 >= 7) {
					Global_101700.f_6220[iParam0] = 0;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
			else {
				return;
			}
		}
		else if (iVar1 >= 18) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 12f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (iVar1 < 7) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 12f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 141:
	case 142:
		if (func_437(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("jewelry_heist")) == 0 &&
				script::_get_number_of_instances_of_script_with_name_hash(joaat("jewelry_setup1")) == 0 &&
				!Global_101700.f_8044.f_99.f_58[4]) {
				if (iVar1 < 21) {
					if (iVar1 >= 7) {
						Global_101700.f_6220[iParam0] = 0;
						object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
					}
				}
				else {
					return;
				}
			}
			else if (!Global_101700.f_8044.f_99.f_58[4]) {
				Global_101700.f_6220[iParam0] = 0;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (Global_101700.f_8044.f_99.f_58[4]) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("jewelry_heist")) == 0 &&
				 script::_get_number_of_instances_of_script_with_name_hash(joaat("jewelry_setup1")) == 0) {
			if (iVar1 >= 21) {
				if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 18f) {
					Global_101700.f_6220[iParam0] = 1;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7) {
				if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 18f) {
					Global_101700.f_6220[iParam0] = 1;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
		}
		break;

	case 145:
	case 146:
	case 143:
	case 144:
		if (func_437(iParam0)) {
			if (iVar1 < 20) {
				if (iVar1 >= 9) {
					Global_101700.f_6220[iParam0] = 0;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
			else {
				return;
			}
		}
		else if (iVar1 >= 20) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 40f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (iVar1 < 9) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 40f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 147:
	case 148:
		if (!func_437(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 152:
	case 153:
	case 154:
	case 155:
	case 156:
	case 157:
		if (!func_437(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("assassin_valet")) == 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("assassin_valet")) > 0) {
			Global_101700.f_6220[iParam0] = 0;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 158:
	case 159:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[70 /*34*/].f_6) == 0) {
			if (!func_437(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 160:
	case 161:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("omega2")) == 0) {
			if (!func_437(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 70:
	case 71:
	case 72:
		if (!func_437(iParam0) &&
			script::_get_number_of_instances_of_script_with_name_hash(Global_82612[26 /*34*/].f_6) == 0) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		else {
			return;
		}
		break;

	case 101:
	case 102:
	case 103:
	case 104:
		if (!func_437(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[43 /*34*/].f_6) == 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else {
			return;
		}
		break;

	case 190:
	case 191:
		if (!func_437(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 193:
		if (!func_437(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[93 /*34*/].f_6) > 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else {
			return;
		}
		break;

	case 198:
		if (!func_437(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 80:
		if (!func_437(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[8 /*34*/].f_6) == 0 &&
				script::_get_number_of_instances_of_script_with_name_hash(Global_82612[10 /*34*/].f_6) == 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else {
			return;
		}
		break;

	case 205:
	case 206:
		if (!func_437(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[47 /*34*/].f_6) == 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else {
			return;
		}
		break;

	case 207:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[70 /*34*/].f_6) == 0) {
			if (!func_437(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 208:
	case 209:
	case 211:
	case 210:
	case 212:
	case 213:
	case 214:
	case 215:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[48 /*34*/].f_6) == 0) {
			if (!func_437(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 99:
	case 100:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[39 /*34*/].f_6) == 0) {
			if (!func_437(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 216:
		if (!func_437(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 217:
	case 218:
		if (!func_437(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 219:
	case 220:
	case 221:
	case 222:
		if (func_437(iParam0)) {
			Global_101700.f_6220[iParam0] = 0;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;
	}
}

// Position - 0x2A3E5
bool func_437(int iParam0) {
	struct<7> Var0;
	int iVar7;

	Var0 = {func_450(iParam0)};
	iVar7 = object::_0x160AA1B32F6139B8(Var0.f_5);
	return iVar7 == 1 || iVar7 == 4 || iVar7 == 2;
}

// Position - 0x2A419
int func_438(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x2A42C
var func_439() {
	int *iVar0;

	func_449(&iVar0, time::get_clock_seconds());
	func_448(&iVar0, time::get_clock_minutes());
	func_447(&iVar0, time::get_clock_hours());
	func_442(&iVar0, time::get_clock_day_of_month());
	func_441(&iVar0, time::get_clock_month());
	func_440(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x2A472
void func_440(int *iParam0, int iParam1) {
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

// Position - 0x2A4F8
void func_441(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x2A52B
void func_442(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_446(*uParam0);
	iVar1 = func_444(*uParam0);
	if (iParam1 < 1 || iParam1 > func_443(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x2A57C
int func_443(int iParam0, int iParam1) {
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

// Position - 0x2A61E
var func_444(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_445(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x2A643
int func_445(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x2A65A
int func_446(var uParam0) { return uParam0 & 15; }

// Position - 0x2A667
void func_447(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x2A6A1
void func_448(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x2A6DC
void func_449(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x2A718
struct<7> func_450(int iParam0) {
	struct<7> Var0;

	switch (iParam0) {
	case 0:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {133f, -1711f, 29f};
		Var0.f_5 = 1804701345;
		break;

	case 1:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {-1287.857f, -1115.742f, 7.1401f};
		Var0.f_5 = 1403601067;
		break;

	case 2:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {1932.952f, 3725.154f, 32.9944f};
		Var0.f_5 = -2031139496;
		break;

	case 3:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {1207.873f, -470.063f, 66.358f};
		Var0.f_5 = 1796834809;
		break;

	case 4:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {-29.8692f, -148.1571f, 57.2265f};
		Var0.f_5 = 96153298;
		break;

	case 5:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {-280.7851f, 6232.782f, 31.8455f};
		Var0.f_5 = -281080954;
		break;

	case 6:
		Var0.f_3 = joaat("v_ilev_hd_door_l");
		Var0 = {-824f, -187f, 38f};
		Var0 = {-823.2001f, -187.0831f, 37.819f};
		Var0.f_5 = 183249434;
		break;

	case 7:
		Var0.f_3 = joaat("v_ilev_hd_door_r");
		Var0 = {-823f, -188f, 38f};
		Var0 = {-822.4442f, -188.3924f, 37.819f};
		Var0.f_5 = 758345384;
		break;

	case 8:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {82.3186f, -1392.752f, 29.5261f};
		Var0.f_5 = -1069262641;
		break;

	case 9:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {82.3186f, -1390.476f, 29.5261f};
		Var0.f_5 = 1968521986;
		break;

	case 10:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {1686.983f, 4821.741f, 42.2131f};
		Var0.f_5 = -2143706301;
		break;

	case 11:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {1687.282f, 4819.484f, 42.2131f};
		Var0.f_5 = -1403421822;
		break;

	case 12:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {418.637f, -806.457f, 29.6396f};
		Var0.f_5 = -1950137670;
		break;

	case 13:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {418.637f, -808.733f, 29.6396f};
		Var0.f_5 = 1226259807;
		break;

	case 14:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {-1096.661f, 2705.446f, 19.2578f};
		Var0.f_5 = 1090833557;
		break;

	case 15:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {-1094.965f, 2706.964f, 19.2578f};
		Var0.f_5 = 897332612;
		break;

	case 16:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {1196.825f, 2703.221f, 38.3726f};
		Var0.f_5 = 1095946640;
		break;

	case 17:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {1199.101f, 2703.221f, 38.3726f};
		Var0.f_5 = 801975945;
		break;

	case 18:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {-818.7642f, -1079.544f, 11.4781f};
		Var0.f_5 = -167996547;
		break;

	case 19:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {-816.7932f, -1078.406f, 11.4781f};
		Var0.f_5 = -1935818563;
		break;

	case 20:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {-0.0564f, 6517.461f, 32.0278f};
		Var0.f_5 = 1891185217;
		break;

	case 21:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {-1.7253f, 6515.914f, 32.0278f};
		Var0.f_5 = 1236591681;
		break;

	case 22:
		Var0.f_3 = joaat("v_ilev_clothmiddoor");
		Var0 = {-1201.435f, -776.8566f, 17.9918f};
		Var0.f_5 = 1980808685;
		break;

	case 23:
		Var0.f_3 = joaat("v_ilev_clothmiddoor");
		Var0 = {617.2458f, 2751.022f, 42.7578f};
		Var0.f_5 = 1352749757;
		break;

	case 24:
		Var0.f_3 = joaat("v_ilev_clothmiddoor");
		Var0 = {127.8201f, -211.8274f, 55.2275f};
		Var0.f_5 = -566554453;
		break;

	case 25:
		Var0.f_3 = joaat("v_ilev_clothmiddoor");
		Var0 = {-3167.75f, 1055.536f, 21.5329f};
		Var0.f_5 = 1284749450;
		break;

	case 26:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-716.6754f, -155.42f, 37.6749f};
		Var0.f_5 = 261851994;
		break;

	case 27:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-715.6154f, -157.2561f, 37.6749f};
		Var0.f_5 = 217646625;
		break;

	case 28:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-157.0924f, -306.4413f, 39.994f};
		Var0.f_5 = 1801139578;
		break;

	case 29:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-156.4022f, -304.4366f, 39.994f};
		Var0.f_5 = -2123275866;
		break;

	case 30:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-1454.782f, -231.7927f, 50.0565f};
		Var0.f_5 = 1312689981;
		break;

	case 31:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-1456.201f, -233.3682f, 50.0565f};
		Var0.f_5 = -595055661;
		break;

	case 32:
		Var0.f_3 = joaat("v_ilev_ta_door");
		Var0 = {321.81f, 178.36f, 103.68f};
		Var0.f_5 = -265260897;
		break;

	case 33:
		Var0.f_3 = -1212951353;
		Var0 = {1859.89f, 3749.79f, 33.18f};
		Var0.f_5 = -1284867488;
		break;

	case 34:
		Var0.f_3 = -1212951353;
		Var0 = {-289.1752f, 6199.112f, 31.637f};
		Var0.f_5 = 302307081;
		break;

	case 35:
		Var0.f_3 = joaat("v_ilev_ta_door");
		Var0 = {-1155.454f, -1424.008f, 5.0461f};
		Var0.f_5 = -681886015;
		break;

	case 36:
		Var0.f_3 = joaat("v_ilev_ta_door");
		Var0 = {1321.286f, -1650.597f, 52.3663f};
		Var0.f_5 = -2086556500;
		break;

	case 37:
		Var0.f_3 = joaat("v_ilev_ta_door");
		Var0 = {-3167.789f, 1074.767f, 20.9209f};
		Var0.f_5 = -1496386696;
		break;

	case 38:
		Var0.f_3 = joaat("v_ilev_mm_doorm_l");
		Var0 = {-817f, 179f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -2097039789;
		break;

	case 39:
		Var0.f_3 = joaat("v_ilev_mm_doorm_r");
		Var0 = {-816f, 178f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -2127416656;
		break;

	case 40:
		Var0.f_3 = joaat("prop_ld_garaged_01");
		Var0 = {-815f, 186f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1986583853;
		Var0.f_6 = 6.5f;
		break;

	case 41:
		Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
		Var0 = {-797f, 177f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 776026812;
		break;

	case 42:
		Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
		Var0 = {-795f, 178f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 698422331;
		break;

	case 43:
		Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
		Var0 = {-793f, 181f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 535076355;
		break;

	case 44:
		Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
		Var0 = {-794f, 183f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 474675599;
		break;

	case 45:
		Var0.f_3 = joaat("prop_bh1_48_gate_1");
		Var0 = {-849f, 179f, 70f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1978427516;
		break;

	case 46:
		Var0.f_3 = joaat("v_ilev_mm_windowwc");
		Var0 = {-802.7333f, 167.5041f, 77.5824f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1700375831;
		break;

	case 47:
		Var0.f_3 = joaat("v_ilev_fa_frontdoor");
		Var0 = {-14f, -1441f, 31f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 613961892;
		break;

	case 48:
		Var0.f_3 = joaat("v_ilev_fh_frntdoor");
		Var0 = {-15f, -1427f, 31f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -272570634;
		break;

	case 49:
		Var0.f_3 = joaat("prop_sc1_21_g_door_01");
		Var0 = {-25.28f, -1431.06f, 30.84f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1040675994;
		break;

	case 50:
		Var0.f_3 = joaat("v_ilev_fh_frontdoor");
		Var0 = {7.52f, 539.53f, 176.18f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 1201219326;
		break;

	case 51:
		Var0.f_3 = joaat("v_ilev_trevtraildr");
		Var0 = {1973f, 3815f, 34f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 1736361794;
		break;

	case 52:
		Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
		Var0 = {1972.787f, 3824.554f, 32.5831f};
		Var0.f_5 = 1113956670;
		Var0.f_6 = 12f;
		break;

	case 53:
		Var0.f_3 = joaat("v_ilev_trev_doorfront");
		Var0 = {-1150f, -1521f, 11f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1361617046;
		break;
	}
	switch (iParam0) {
	case 54:
		Var0.f_3 = joaat("prop_com_ls_door_01");
		Var0 = {-1145.9f, -1991.14f, 14.18f};
		Var0.f_5 = -1871080926;
		Var0.f_6 = 25f;
		break;

	case 55:
		Var0.f_3 = joaat("prop_id2_11_gdoor");
		Var0 = {723.12f, -1088.83f, 23.28f};
		Var0.f_5 = 1168079979;
		Var0.f_6 = 25f;
		break;

	case 56:
		Var0.f_3 = joaat("prop_com_ls_door_01");
		Var0 = {-356.09f, -134.77f, 40.01f};
		Var0.f_5 = 1206354175;
		Var0.f_6 = 25f;
		break;

	case 57:
		Var0.f_3 = joaat("v_ilev_carmod3door");
		Var0 = {108.8502f, 6617.876f, 32.673f};
		Var0.f_5 = -1038180727;
		Var0.f_6 = 25f;
		break;

	case 58:
		Var0.f_3 = joaat("v_ilev_carmod3door");
		Var0 = {114.3206f, 6623.226f, 32.7161f};
		Var0.f_5 = 1200466273;
		Var0.f_6 = 25f;
		break;

	case 59:
		Var0.f_3 = joaat("v_ilev_carmod3door");
		Var0 = {1182.305f, 2645.242f, 38.807f};
		Var0.f_5 = 1391004277;
		Var0.f_6 = 25f;
		break;

	case 60:
		Var0.f_3 = joaat("v_ilev_carmod3door");
		Var0 = {1174.654f, 2645.242f, 38.6826f};
		Var0.f_5 = -459199009;
		Var0.f_6 = 25f;
		break;

	case 225:
		Var0.f_3 = -427498890;
		Var0 = {-205.7007f, -1310.692f, 30.2957f};
		Var0.f_5 = -288764223;
		Var0.f_6 = 25f;
		break;

	case 61:
		Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
		Var0 = {-107.5401f, -9.0258f, 70.6696f};
		Var0.f_5 = -252283844;
		break;

	case 62:
		Var0.f_3 = joaat("v_ilev_ss_door8");
		Var0 = {717f, -975f, 25f};
		Var0.f_5 = -826072862;
		break;

	case 63:
		Var0.f_3 = joaat("v_ilev_ss_door7");
		Var0 = {719f, -975f, 25f};
		Var0.f_5 = 763780711;
		break;

	case 64:
		Var0.f_3 = joaat("v_ilev_ss_door02");
		Var0 = {709.9813f, -963.5311f, 30.5453f};
		Var0.f_5 = -874851305;
		break;

	case 65:
		Var0.f_3 = joaat("v_ilev_ss_door03");
		Var0 = {709.9894f, -960.6675f, 30.5453f};
		Var0.f_5 = -1480820165;
		break;

	case 66:
		Var0.f_3 = joaat("v_ilev_store_door");
		Var0 = {707.8046f, -962.4564f, 30.5453f};
		Var0.f_5 = 949391213;
		break;

	case 67:
		Var0.f_3 = -1212951353;
		Var0 = {1393f, 3599f, 35f};
		Var0.f_5 = 212192855;
		break;

	case 68:
		Var0.f_3 = -1212951353;
		Var0 = {1395f, 3600f, 35f};
		Var0.f_5 = -126474752;
		break;

	case 69:
		Var0.f_3 = joaat("v_ilev_ss_door04");
		Var0 = {1387f, 3614f, 39f};
		Var0.f_5 = 1765671336;
		break;

	case 70:
		Var0.f_3 = joaat("prop_ron_door_01");
		Var0 = {1083.547f, -1975.435f, 31.6222f};
		Var0.f_5 = 792295685;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 71:
		Var0.f_3 = joaat("prop_ron_door_01");
		Var0 = {1065.237f, -2006.079f, 32.2329f};
		Var0.f_5 = 563273144;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 72:
		Var0.f_3 = joaat("prop_ron_door_01");
		Var0 = {1085.307f, -2018.561f, 41.6289f};
		Var0.f_5 = -726993043;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 73:
		Var0.f_3 = joaat("v_ilev_bank4door02");
		Var0 = {-111f, 6464f, 32f};
		Var0.f_5 = 178228075;
		break;

	case 74:
		Var0.f_3 = joaat("v_ilev_bank4door01");
		Var0 = {-110f, 6462f, 32f};
		Var0.f_5 = 1852297978;
		break;

	case 75:
		Var0.f_3 = joaat("v_ilev_lester_doorfront");
		Var0 = {1274f, -1721f, 55f};
		Var0.f_5 = -565026078;
		break;

	case 76:
		Var0.f_3 = joaat("v_ilev_lester_doorveranda");
		Var0 = {1271.89f, -1707.57f, 53.79f};
		Var0.f_5 = 1646172266;
		break;

	case 77:
		Var0.f_3 = joaat("v_ilev_lester_doorveranda");
		Var0 = {1270.77f, -1708.1f, 53.75f};
		Var0.f_5 = 204467342;
		break;

	case 78:
		Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
		Var0 = {-127.5f, -1456.18f, 37.94f};
		Var0.f_5 = 2047070410;
		break;

	case 79:
		Var0.f_3 = joaat("prop_com_gar_door_01");
		Var0 = {483.56f, -1316.08f, 32.18f};
		Var0.f_5 = 1417775309;
		break;

	case 80:
		Var0.f_3 = joaat("v_ilev_cs_door");
		Var0 = {483f, -1312f, 29f};
		Var0.f_5 = -106474626;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 81:
		Var0.f_3 = joaat("prop_strip_door_01");
		Var0 = {128f, -1299f, 29f};
		Var0.f_5 = 1840510598;
		break;

	case 82:
		Var0.f_3 = joaat("prop_magenta_door");
		Var0 = {96f, -1285f, 29f};
		Var0.f_5 = 1382825971;
		break;

	case 83:
		Var0.f_3 = joaat("prop_motel_door_09");
		Var0 = {549f, -1773f, 34f};
		Var0.f_5 = 232536303;
		break;

	case 84:
		Var0.f_3 = joaat("v_ilev_gangsafedoor");
		Var0 = {974f, -1839f, 36f};
		Var0.f_5 = 1267246609;
		gameplay::set_bit(&Var0.f_4, 3);
		break;

	case 85:
		Var0.f_3 = joaat("v_ilev_gangsafedoor");
		Var0 = {977f, -105f, 75f};
		Var0.f_5 = -1900237971;
		gameplay::set_bit(&Var0.f_4, 3);
		break;

	case 86:
		Var0.f_3 = joaat("v_ilev_ra_door1_l");
		Var0 = {1391f, 1163f, 114f};
		Var0.f_5 = 2077901353;
		break;

	case 87:
		Var0.f_3 = joaat("v_ilev_ra_door1_r");
		Var0 = {1391f, 1161f, 114f};
		Var0.f_5 = -2102079126;
		break;

	case 88:
		Var0.f_3 = joaat("prop_cs6_03_door_l");
		Var0 = {1396f, 1143f, 115f};
		Var0.f_5 = -1905793212;
		break;

	case 89:
		Var0.f_3 = joaat("prop_cs6_03_door_r");
		Var0 = {1396f, 1141f, 115f};
		Var0.f_5 = -1797032505;
		break;

	case 90:
		Var0.f_3 = joaat("v_ilev_ra_door1_l");
		Var0 = {1409f, 1146f, 114f};
		Var0.f_5 = -62235167;
		break;

	case 91:
		Var0.f_3 = joaat("v_ilev_ra_door1_r");
		Var0 = {1409f, 1148f, 114f};
		Var0.f_5 = -1727188163;
		break;

	case 92:
		Var0.f_3 = joaat("v_ilev_ra_door1_l");
		Var0 = {1408f, 1159f, 114f};
		Var0.f_5 = -562748873;
		break;

	case 93:
		Var0.f_3 = joaat("v_ilev_ra_door1_r");
		Var0 = {1408f, 1161f, 114f};
		Var0.f_5 = 1976429759;
		break;

	case 94:
		Var0.f_3 = joaat("prop_gar_door_01");
		Var0 = {-1067f, -1666f, 5f};
		Var0.f_5 = 1341041543;
		break;

	case 95:
		Var0.f_3 = joaat("prop_gar_door_02");
		Var0 = {-1065f, -1669f, 5f};
		Var0.f_5 = -1631467220;
		break;

	case 96:
		Var0.f_3 = joaat("prop_map_door_01");
		Var0 = {-1104.66f, -1638.48f, 4.68f};
		Var0.f_5 = -1788473129;
		break;

	case 97:
		Var0.f_3 = joaat("v_ilev_fib_door1");
		Var0 = {-31.72f, -1101.85f, 26.57f};
		Var0.f_5 = -1831288286;
		break;

	case 98:
		Var0.f_3 = joaat("v_ilev_tort_door");
		Var0 = {134.4f, -2204.1f, 7.52f};
		Var0.f_5 = 963876966;
		break;

	case 99:
		Var0.f_3 = joaat("v_ilev_bl_shutter2");
		Var0 = {3628f, 3747f, 28f};
		Var0.f_5 = 1773088812;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 100:
		Var0.f_3 = joaat("v_ilev_bl_shutter2");
		Var0 = {3621f, 3752f, 28f};
		Var0.f_5 = -1332101528;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 101:
		Var0.f_3 = joaat("v_ilev_rc_door3_l");
		Var0 = {-608.73f, -1610.32f, 27.16f};
		Var0.f_5 = -1811763714;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 102:
		Var0.f_3 = joaat("v_ilev_rc_door3_r");
		Var0 = {-611.32f, -1610.09f, 27.16f};
		Var0.f_5 = 1608500665;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 103:
		Var0.f_3 = joaat("v_ilev_rc_door3_l");
		Var0 = {-592.94f, -1631.58f, 27.16f};
		Var0.f_5 = -1456048340;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 104:
		Var0.f_3 = joaat("v_ilev_rc_door3_r");
		Var0 = {-592.71f, -1628.99f, 27.16f};
		Var0.f_5 = 943854909;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 105:
		Var0.f_3 = joaat("v_ilev_ss_door04");
		Var0 = {1991f, 3053f, 47f};
		Var0.f_5 = -89065356;
		break;

	case 106:
		Var0.f_3 = 479144380;
		Var0 = {1988.353f, 3054.411f, 47.3204f};
		Var0.f_5 = -925491840;
		break;

	case 107:
		Var0.f_3 = joaat("prop_epsilon_door_l");
		Var0 = {-700.17f, 47.31f, 44.3f};
		Var0.f_5 = 1999872275;
		break;

	case 108:
		Var0.f_3 = joaat("prop_epsilon_door_r");
		Var0 = {-697.94f, 48.35f, 44.3f};
		Var0.f_5 = 1999872275;
		break;

	case 109:
		Var0.f_3 = -1230442770;
		Var0 = {241.3574f, 361.0488f, 105.8963f};
		Var0.f_5 = 1538555582;
		break;

	case 110:
		Var0.f_3 = joaat("prop_ch2_09c_garage_door");
		Var0 = {-689.11f, 506.97f, 110.64f};
		Var0.f_5 = -961994186;
		break;

	case 111:
		Var0.f_3 = joaat("v_ilev_door_orangesolid");
		Var0 = {-1055.96f, -236.43f, 44.17f};
		Var0.f_5 = -1772472848;
		break;

	case 112:
		Var0.f_3 = joaat("prop_magenta_door");
		Var0 = {29f, 3661f, 41f};
		Var0.f_5 = -46374650;
		break;

	case 113:
		Var0.f_3 = joaat("prop_cs4_05_tdoor");
		Var0 = {32f, 3667f, 41f};
		Var0.f_5 = -358302761;
		break;

	case 114:
		Var0.f_3 = joaat("v_ilev_housedoor1");
		Var0 = {87f, -1959f, 21f};
		Var0.f_5 = -1237936041;
		break;

	case 115:
		Var0.f_3 = joaat("v_ilev_fh_frntdoor");
		Var0 = {0f, -1823f, 30f};
		Var0.f_5 = 1487374207;
		break;

	case 116:
		Var0.f_3 = joaat("p_cut_door_03");
		Var0 = {23.34f, -1897.6f, 23.05f};
		Var0.f_5 = -199126299;
		break;

	case 117:
		Var0.f_3 = joaat("p_cut_door_02");
		Var0 = {524.2f, 3081.14f, 41.16f};
		Var0.f_5 = -897071863;
		break;

	case 118:
		Var0.f_3 = joaat("v_ilev_po_door");
		Var0 = {-1910.58f, -576.01f, 19.25f};
		Var0.f_5 = -864465775;
		break;

	case 119:
		Var0.f_3 = joaat("prop_ss1_10_door_l");
		Var0 = {-720.39f, 256.86f, 80.29f};
		Var0.f_5 = -208439480;
		break;

	case 120:
		Var0.f_3 = joaat("prop_ss1_10_door_r");
		Var0 = {-718.42f, 257.79f, 80.29f};
		Var0.f_5 = -1001088805;
		break;

	case 121:
		Var0.f_3 = joaat("v_ilev_fibl_door02");
		Var0 = {106.38f, -742.7f, 46.18f};
		Var0.f_5 = 756894459;
		break;

	case 122:
		Var0.f_3 = joaat("v_ilev_fibl_door01");
		Var0 = {105.76f, -746.65f, 46.18f};
		Var0.f_5 = 476981677;
		break;

	case 123:
		Var0.f_3 = joaat("v_ilev_ct_door01");
		Var0 = {-2343.53f, 3265.37f, 32.96f};
		Var0.f_5 = 2081647379;
		break;

	case 124:
		Var0.f_3 = joaat("v_ilev_ct_door01");
		Var0 = {-2342.23f, 3267.62f, 32.96f};
		Var0.f_5 = 2081647379;
		break;

	case 125:
		Var0.f_3 = joaat("ap1_02_door_l");
		Var0 = {-1041.933f, -2748.167f, 22.0308f};
		Var0.f_5 = 169965357;
		break;

	case 126:
		Var0.f_3 = joaat("ap1_02_door_r");
		Var0 = {-1044.841f, -2746.489f, 22.0308f};
		Var0.f_5 = 311232516;
		break;

	case 128:
		Var0.f_3 = joaat("v_ilev_fb_doorshortl");
		Var0 = {-1045.12f, -232.004f, 39.4379f};
		Var0.f_5 = -1563127729;
		break;

	case 129:
		Var0.f_3 = joaat("v_ilev_fb_doorshortr");
		Var0 = {-1046.516f, -229.3581f, 39.4379f};
		Var0.f_5 = 759145763;
		break;

	case 130:
		Var0.f_3 = joaat("v_ilev_fb_door01");
		Var0 = {-1083.62f, -260.4167f, 38.1867f};
		Var0.f_5 = -84399179;
		break;

	case 131:
		Var0.f_3 = joaat("v_ilev_fb_door02");
		Var0 = {-1080.974f, -259.0204f, 38.1867f};
		Var0.f_5 = -461898059;
		break;

	case 127:
		Var0.f_3 = joaat("v_ilev_gtdoor");
		Var0 = {-1042.57f, -240.6f, 38.11f};
		Var0.f_5 = 1259065971;
		break;

	case 132:
		Var0.f_3 = joaat("prop_damdoor_01");
		Var0 = {1385.258f, -2079.949f, 52.7638f};
		Var0.f_5 = -884051216;
		break;

	case 133:
		Var0.f_3 = joaat("v_ilev_genbankdoor2");
		Var0 = {1656.57f, 4849.66f, 42.35f};
		Var0.f_5 = 243782214;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 134:
		Var0.f_3 = joaat("v_ilev_genbankdoor1");
		Var0 = {1656.25f, 4852.24f, 42.35f};
		Var0.f_5 = 714115627;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 135:
		Var0.f_3 = -1184516519;
		Var0 = {-1051.402f, -474.6847f, 36.6199f};
		Var0.f_5 = 1668106976;
		gameplay::set_bit(&Var0.f_4, 1);
		break;

	case 136:
		Var0.f_3 = -1184516519;
		Var0 = {-1049.285f, -476.6376f, 36.7584f};
		Var0.f_5 = 1382347031;
		gameplay::set_bit(&Var0.f_4, 1);
		break;

	case 137:
		Var0.f_3 = 1230099731;
		Var0 = {-1210.957f, -580.8765f, 27.2373f};
		Var0.f_5 = -966790948;
		gameplay::set_bit(&Var0.f_4, 1);
		break;

	case 138:
		Var0.f_3 = 1230099731;
		Var0 = {-1212.445f, -578.4401f, 27.2373f};
		Var0.f_5 = -2068750132;
		gameplay::set_bit(&Var0.f_4, 1);
		break;

	case 139:
		Var0.f_3 = joaat("v_ilev_roc_door4");
		Var0 = {-565.1712f, 276.6259f, 83.2863f};
		Var0.f_5 = -1716533184;
		break;

	case 140:
		Var0.f_3 = joaat("v_ilev_roc_door4");
		Var0 = {-561.2863f, 293.5043f, 87.7771f};
		Var0.f_5 = 2146505927;
		break;

	case 141:
		Var0.f_3 = joaat("p_jewel_door_l");
		Var0 = {-631.96f, -236.33f, 38.21f};
		Var0.f_5 = 1874948872;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 142:
		Var0.f_3 = joaat("p_jewel_door_r1");
		Var0 = {-630.43f, -238.44f, 38.21f};
		Var0.f_5 = -1965020851;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 145:
		Var0.f_3 = -1743257725;
		Var0 = {231.62f, 216.23f, 106.4f};
		Var0.f_5 = 1951546856;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 146:
		Var0.f_3 = -1743257725;
		Var0 = {232.72f, 213.88f, 106.4f};
		Var0.f_5 = -431382051;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 143:
		Var0.f_3 = 110411286;
		Var0 = {258.32f, 203.84f, 106.43f};
		Var0.f_5 = -293975210;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 144:
		Var0.f_3 = 110411286;
		Var0 = {260.76f, 202.95f, 106.43f};
		Var0.f_5 = -785215289;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 148:
		Var0.f_3 = -222270721;
		Var0 = {256.31f, 220.66f, 106.43f};
		Var0.f_5 = -366143778;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 147:
		Var0.f_3 = joaat("v_ilev_bk_door");
		Var0 = {266.36f, 217.57f, 110.43f};
		Var0.f_5 = 440819155;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 149:
		Var0.f_3 = joaat("v_ilev_shrf2door");
		Var0 = {-442.66f, 6015.222f, 31.8663f};
		Var0.f_5 = -588495243;
		break;

	case 150:
		Var0.f_3 = joaat("v_ilev_shrf2door");
		Var0 = {-444.4985f, 6017.06f, 31.8663f};
		Var0.f_5 = 1815504139;
		break;

	case 151:
		Var0.f_3 = joaat("v_ilev_shrfdoor");
		Var0 = {1855.685f, 3683.93f, 34.5928f};
		Var0.f_5 = 1344911780;
		break;

	case 152:
		Var0.f_3 = joaat("prop_bhhotel_door_l");
		Var0 = {-1223.35f, -172.41f, 39.98f};
		Var0.f_5 = -320891223;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 153:
		Var0.f_3 = joaat("prop_bhhotel_door_r");
		Var0 = {-1220.93f, -173.68f, 39.98f};
		Var0.f_5 = 1511747875;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 154:
		Var0.f_3 = joaat("prop_bhhotel_door_l");
		Var0 = {-1211.99f, -190.57f, 39.98f};
		Var0.f_5 = -1517722103;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 155:
		Var0.f_3 = joaat("prop_bhhotel_door_r");
		Var0 = {-1213.26f, -192.98f, 39.98f};
		Var0.f_5 = -1093199712;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 156:
		Var0.f_3 = joaat("prop_bhhotel_door_l");
		Var0 = {-1217.77f, -201.54f, 39.98f};
		Var0.f_5 = 1902048492;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 157:
		Var0.f_3 = joaat("prop_bhhotel_door_r");
		Var0 = {-1219.04f, -203.95f, 39.98f};
		Var0.f_5 = -444768985;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 158:
		Var0.f_3 = joaat("prop_ch3_04_door_01l");
		Var0 = {2514.32f, -317.34f, 93.32f};
		Var0.f_5 = 404057594;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 159:
		Var0.f_3 = joaat("prop_ch3_04_door_01r");
		Var0 = {2512.42f, -319.26f, 93.32f};
		Var0.f_5 = -1417472813;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 160:
		Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
		Var0 = {2333.23f, 2574.97f, 47.03f};
		Var0.f_5 = -1376084479;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 161:
		Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
		Var0 = {2329.65f, 2576.64f, 47.03f};
		Var0.f_5 = 457472151;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 162:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {16.1279f, -1114.605f, 29.9469f};
		Var0.f_5 = 1071759151;
		break;

	case 163:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {18.572f, -1115.495f, 29.9469f};
		Var0.f_5 = -2119023917;
		break;

	case 165:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {1698.176f, 3751.506f, 34.8553f};
		Var0.f_5 = -1488490473;
		break;

	case 166:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {1699.937f, 3753.42f, 34.8553f};
		Var0.f_5 = -511187813;
		break;

	case 167:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {244.7274f, -44.0791f, 70.91f};
		Var0.f_5 = -248569395;
		break;

	case 168:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {243.8379f, -46.5232f, 70.91f};
		Var0.f_5 = 989443413;
		break;

	case 169:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {845.3624f, -1024.539f, 28.3448f};
		Var0.f_5 = 2022251829;
		break;

	case 170:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {842.7684f, -1024.539f, 23.3448f};
		Var0.f_5 = 649820567;
		break;

	case 171:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-326.1122f, 6075.27f, 31.6047f};
		Var0.f_5 = 537455378;
		break;

	case 172:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-324.273f, 6077.109f, 31.6047f};
		Var0.f_5 = 1121431731;
		break;

	case 173:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-665.2424f, -944.3256f, 21.9792f};
		Var0.f_5 = -1437380438;
		break;

	case 174:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-662.6414f, -944.3256f, 21.9792f};
		Var0.f_5 = -946336965;
		break;

	case 175:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-1313.826f, -389.1259f, 36.8457f};
		Var0.f_5 = 1893144650;
		break;

	case 176:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-1314.465f, -391.6472f, 36.8457f};
		Var0.f_5 = 435841678;
		break;

	case 177:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-1114.009f, 2689.77f, 18.7041f};
		Var0.f_5 = 948508314;
		break;

	case 178:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-1112.071f, 2691.505f, 18.7041f};
		Var0.f_5 = -1796714665;
		break;

	case 179:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-3164.845f, 1081.392f, 20.9887f};
		Var0.f_5 = -1155247245;
		break;

	case 180:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-3163.812f, 1083.778f, 20.9887f};
		Var0.f_5 = 782482084;
		break;

	case 181:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {2570.905f, 303.3556f, 108.8848f};
		Var0.f_5 = -1194470801;
		break;

	case 182:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {2568.304f, 303.3556f, 108.8848f};
		Var0.f_5 = -2129698061;
		break;

	case 183:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {813.1779f, -2148.27f, 29.7689f};
		Var0.f_5 = 1071759151;
		break;

	case 184:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {810.5769f, -2148.27f, 29.7689f};
		Var0.f_5 = -2119023917;
		break;

	case 164:
		Var0.f_3 = joaat("v_ilev_gc_door01");
		Var0 = {6.8179f, -1098.209f, 29.9469f};
		Var0.f_5 = 1487704245;
		gameplay::set_bit(&Var0.f_4, 3);
		break;

	case 185:
		Var0.f_3 = joaat("v_ilev_gc_door01");
		Var0 = {827.5342f, -2160.493f, 29.7688f};
		Var0.f_5 = 1529812051;
		gameplay::set_bit(&Var0.f_4, 3);
		break;

	case 186:
		Var0.f_3 = joaat("prop_lrggate_01c_l");
		Var0 = {-1107.01f, 289.38f, 64.76f};
		Var0.f_5 = 904342475;
		break;

	case 187:
		Var0.f_3 = joaat("prop_lrggate_01c_r");
		Var0 = {-1101.62f, 290.36f, 64.76f};
		Var0.f_5 = -795418380;
		break;

	case 188:
		Var0.f_3 = joaat("prop_lrggate_01c_l");
		Var0 = {-1138.64f, 300.82f, 67.18f};
		Var0.f_5 = -1502457334;
		break;

	case 189:
		Var0.f_3 = joaat("prop_lrggate_01c_r");
		Var0 = {-1137.05f, 295.59f, 67.18f};
		Var0.f_5 = -1994188940;
		break;

	case 190:
		Var0.f_3 = joaat("v_ilev_bl_doorel_l");
		Var0 = {-2053.16f, 3239.49f, 30.5f};
		Var0.f_5 = -621770121;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 191:
		Var0.f_3 = joaat("v_ilev_bl_doorel_r");
		Var0 = {-2054.39f, 3237.23f, 30.5f};
		Var0.f_5 = 1018580481;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 192:
		Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
		Var0 = {-108.91f, 6469.11f, 31.91f};
		Var0.f_5 = 421926217;
		break;

	case 193:
		Var0.f_3 = joaat("prop_fnclink_03gate5");
		Var0 = {-182.91f, 6168.37f, 32.14f};
		Var0.f_5 = -1331552374;
		gameplay::set_bit(&Var0.f_4, 2);
		break;
	}
	switch (iParam0) {
	case 196:
		Var0.f_3 = joaat("v_ilev_csr_door_l");
		Var0 = {-59.89f, -1092.95f, 26.88f};
		Var0.f_5 = -293141277;
		break;

	case 197:
		Var0.f_3 = joaat("v_ilev_csr_door_r");
		Var0 = {-60.55f, -1094.75f, 26.89f};
		Var0.f_5 = 506750037;
		break;

	case 194:
		Var0.f_3 = joaat("v_ilev_csr_door_l");
		Var0 = {-39.13f, -1108.22f, 26.72f};
		Var0.f_5 = 1496005418;
		break;

	case 195:
		Var0.f_3 = joaat("v_ilev_csr_door_r");
		Var0 = {-37.33f, -1108.87f, 26.72f};
		Var0.f_5 = -1863079210;
		break;

	case 198:
		Var0.f_3 = joaat("prop_ron_door_01");
		Var0 = {1943.73f, 3803.63f, 32.31f};
		Var0.f_5 = -2018911784;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 199:
		Var0.f_3 = joaat("v_ilev_genbankdoor2");
		Var0 = {316.39f, -276.49f, 54.52f};
		Var0.f_5 = -93934272;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 200:
		Var0.f_3 = joaat("v_ilev_genbankdoor1");
		Var0 = {313.96f, -275.6f, 54.52f};
		Var0.f_5 = 667682830;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 201:
		Var0.f_3 = joaat("v_ilev_genbankdoor2");
		Var0 = {-2965.71f, 484.22f, 16.05f};
		Var0.f_5 = 1876735830;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 202:
		Var0.f_3 = joaat("v_ilev_genbankdoor1");
		Var0 = {-2965.82f, 481.63f, 16.05f};
		Var0.f_5 = -2112857171;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 205:
		Var0.f_3 = joaat("v_ilev_abbmaindoor");
		Var0 = {962.1f, -2183.83f, 31.06f};
		Var0.f_5 = 2046930518;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 206:
		Var0.f_3 = joaat("v_ilev_abbmaindoor2");
		Var0 = {961.79f, -2187.08f, 31.06f};
		Var0.f_5 = 1208502884;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 207:
		Var0.f_3 = joaat("prop_ch3_04_door_02");
		Var0 = {2508.43f, -336.63f, 115.76f};
		Var0.f_5 = 1986432421;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 208:
		Var0.f_3 = joaat("prop_ch1_07_door_01l");
		Var0 = {-2255.19f, 322.26f, 184.93f};
		Var0.f_5 = -722798986;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 209:
		Var0.f_3 = joaat("prop_ch1_07_door_01r");
		Var0 = {-2254.06f, 319.7f, 184.93f};
		Var0.f_5 = 204301578;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 210:
		Var0.f_3 = joaat("prop_ch1_07_door_01l");
		Var0 = {-2301.13f, 336.91f, 184.93f};
		Var0.f_5 = -320140460;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 211:
		Var0.f_3 = joaat("prop_ch1_07_door_01r");
		Var0 = {-2298.57f, 338.05f, 184.93f};
		Var0.f_5 = 65222916;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 212:
		Var0.f_3 = joaat("prop_ch1_07_door_01l");
		Var0 = {-2222.32f, 305.86f, 184.93f};
		Var0.f_5 = -920027322;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 213:
		Var0.f_3 = joaat("prop_ch1_07_door_01r");
		Var0 = {-2221.19f, 303.3f, 184.93f};
		Var0.f_5 = -58432001;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 214:
		Var0.f_3 = joaat("prop_ch1_07_door_01l");
		Var0 = {-2280.6f, 265.43f, 184.93f};
		Var0.f_5 = -2007378629;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 215:
		Var0.f_3 = joaat("prop_ch1_07_door_01r");
		Var0 = {-2278.04f, 266.57f, 184.93f};
		Var0.f_5 = 418772613;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 216:
		Var0.f_3 = joaat("prop_gar_door_04");
		Var0 = {778.31f, -1867.49f, 30.66f};
		Var0.f_5 = 1679064921;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 217:
		Var0.f_3 = joaat("prop_gate_tep_01_l");
		Var0 = {-721.35f, 91.01f, 56.68f};
		Var0.f_5 = 412198396;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 218:
		Var0.f_3 = joaat("prop_gate_tep_01_r");
		Var0 = {-728.84f, 88.64f, 56.68f};
		Var0.f_5 = -1053755588;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 219:
		Var0.f_3 = joaat("prop_artgallery_02_dr");
		Var0 = {-2287.62f, 363.9f, 174.93f};
		Var0.f_5 = -53446139;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 220:
		Var0.f_3 = joaat("prop_artgallery_02_dl");
		Var0 = {-2289.78f, 362.91f, 174.93f};
		Var0.f_5 = 1333960556;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 221:
		Var0.f_3 = joaat("prop_artgallery_02_dr");
		Var0 = {-2289.86f, 362.88f, 174.93f};
		Var0.f_5 = -41786493;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 222:
		Var0.f_3 = joaat("prop_artgallery_02_dl");
		Var0 = {-2292.01f, 361.89f, 174.93f};
		Var0.f_5 = 1750120734;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 223:
		Var0.f_3 = joaat("prop_fnclink_07gate1");
		Var0 = {1803.94f, 3929.01f, 33.72f};
		Var0.f_5 = 1661506222;
		break;

	case 203:
		Var0.f_3 = joaat("v_ilev_genbankdoor2");
		Var0 = {-348.81f, -47.26f, 49.39f};
		Var0.f_5 = -2116116146;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 204:
		Var0.f_3 = joaat("v_ilev_genbankdoor1");
		Var0 = {-351.26f, -46.41f, 49.39f};
		Var0.f_5 = -74083138;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 224:
		Var0.f_3 = joaat("prop_abat_slide");
		Var0 = {962.9084f, -2105.814f, 34.6432f};
		Var0.f_5 = -1670085357;
		break;
	}
	return Var0;
}

//Position - 0x2D322
void func_451(int iParam0)
{
	if (iParam0 == 10) {
		return;
	}
	switch (iParam0) {
	case 0:
	case 1:
		if (func_452(1)) {
			gameplay::set_save_house(Global_86862[1 /*10*/].f_8, 1, 1);
			gameplay::set_save_house(Global_86862[0 /*10*/].f_8, func_452(0), 0);
		}
		else if (func_452(0)) {
			gameplay::set_save_house(Global_86862[0 /*10*/].f_8, 1, 1);
			gameplay::set_save_house(Global_86862[1 /*10*/].f_8, func_452(1), 0);
		}
		break;

	case 2:
	case 3:
	case 4:
		if (func_452(3)) {
			gameplay::set_save_house(Global_86862[3 /*10*/].f_8, 1, 1);
			gameplay::set_save_house(Global_86862[4 /*10*/].f_8, func_452(4), 0);
			gameplay::set_save_house(Global_86862[2 /*10*/].f_8, func_452(2), 0);
		}
		else if (func_452(4)) {
			gameplay::set_save_house(Global_86862[4 /*10*/].f_8, 1, 1);
			gameplay::set_save_house(Global_86862[3 /*10*/].f_8, func_452(3), 0);
			gameplay::set_save_house(Global_86862[2 /*10*/].f_8, func_452(2), 0);
		}
		else if (func_452(2)) {
			gameplay::set_save_house(Global_86862[2 /*10*/].f_8, 1, 1);
			gameplay::set_save_house(Global_86862[3 /*10*/].f_8, func_452(3), 0);
			gameplay::set_save_house(Global_86862[4 /*10*/].f_8, func_452(4), 0);
		}
		break;

	case 5:
	case 6:
		if (func_452(6)) {
			gameplay::set_save_house(Global_86862[6 /*10*/].f_8, 1, 1);
			gameplay::set_save_house(Global_86862[5 /*10*/].f_8, func_452(5), 0);
		}
		else if (func_452(5)) {
			gameplay::set_save_house(Global_86862[5 /*10*/].f_8, 1, 1);
			gameplay::set_save_house(Global_86862[6 /*10*/].f_8, func_452(6), 0);
		}
		break;
	}
}

// Position - 0x2D4D9
bool func_452(int iParam0) { return gameplay::is_bit_set(Global_101700.f_6188[iParam0], 0); }

// Position - 0x2D4F1
void func_453(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar11;

	if (iParam0 == 10) {
		return;
	}
	iVar11 = gameplay::is_bit_set(Global_101700.f_6188[iParam0], 0);
	if (iParam0 == 5 && gameplay::is_bit_set(Global_101700.f_6188[6], 0)) {
		iVar11 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = 0;
		StringCopy(&Var3, "", 32);
		iVar2 = 10;
		while (func_454(iVar0, iVar1, &Var3, &iVar2)) {
			if (iVar2 == iParam0) {
				if (iVar11) {
					if (iParam1) {
						unk_0xDA05194260CDCDF9(gameplay::get_hash_key(&Var3), 0);
					}
				}
				object::_0xF2E1A7133DD356A6(gameplay::get_hash_key(&Var3), iVar11);
			}
			iVar1++;
		}
		iVar0++;
	}
}

// Position - 0x2D596
bool func_454(int iParam0, int iParam1, char *sParam2, int *iParam3) {
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

// Position - 0x2D66E
void func_455(int iParam0) {
	int iVar0;

	if (iParam0 == 10) {
		return;
	}
	if (Global_86862[iParam0 /*10*/].f_7 == 263) {
		return;
	}
	iVar0 = 0;
	if (gameplay::is_bit_set(Global_101700.f_6188[iParam0], 0)) {
		if (Global_86862[iParam0 /*10*/].f_9 != func_458()) {
			iVar0 = 1;
		}
		else if (!func_456(iParam0)) {
			iVar0 = 1;
		}
	}
	if (iParam0 == 5) {
		if (func_452(6)) {
			iVar0 = 0;
		}
	}
	if (func_231(14)) {
		iVar0 = 0;
	}
	func_230(Global_86862[iParam0 /*10*/].f_7, iVar0, 0);
}

// Position - 0x2D6FB
int func_456(int iParam0) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (Global_91543.f_301 == 0) {
		return 0;
	}
	if (iParam0 == 10) {
		iVar0 = 0;
		while (iVar0 < 10) {
			if (func_456(iVar0)) {
				return 1;
			}
			iVar0++;
		}
	}
	else if (!ped::is_ped_injured(player::player_ped_id())) {
		func_457(iParam0, &sVar1);
		iVar9 = interior::get_interior_at_coords_with_type(Global_86862[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_91543.f_301 == iVar9) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2D780
bool func_457(int iParam0, char *sParam1) {
	StringCopy(sParam1, "", 32);
	switch (iParam0) {
	case 0: StringCopy(sParam1, "v_michael", 32); break;

	case 5: StringCopy(sParam1, "v_franklins", 32); break;

	case 6: StringCopy(sParam1, "v_franklinshouse", 32); break;

	case 2:
	case 1:
		if (streaming::is_ipl_active("TrevorsTrailer")) {
			StringCopy(sParam1, "v_trailer", 32);
		}
		else if (streaming::is_ipl_active("TrevorsTrailerTidy")) {
			StringCopy(sParam1, "V_TrailerTIDY", 32);
		}
		else if (streaming::is_ipl_active("TrevorsTrailerTrash")) {
			StringCopy(sParam1, "V_TrailerTRASH", 32);
		}
		break;

	case 3: StringCopy(sParam1, "v_trevors", 32); break;

	case 4: StringCopy(sParam1, "v_strip3", 32); break;

	case 8:
	case 7:
	case 9: StringCopy(sParam1, "v_psycheoffice", 32); break;
	}
	return !gameplay::are_strings_equal(sParam1, "");
}

// Position - 0x2D860
int func_458() {
	func_55();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x2D879
void func_459() {
	func_239(118, 1);
	func_399(3, 1);
}

// Position - 0x2D88E
void func_460() { func_239(9, 1); }

// Position - 0x2D89D
void func_461() { func_181(866793964, 1, 2, 19, 60000, 10000, 2, 44, -1, 262144, 1); }

// Position - 0x2D8C3
void func_462() {
	func_13(-1982006572);
	func_13(-1501908698);
	func_239(62, 1);
	func_181(-899711929, 1, 2, 19, 800000, 20000, -1, 0, -1, 0, 1);
}

// Position - 0x2D900
void func_463() {
	func_349(40, 1);
	func_349(48, 1);
	func_349(58, 1);
	func_349(71, 1);
}

// Position - 0x2D924
void func_464(int iParam0) { func_465(iParam0); }

// Position - 0x2D932
void func_465(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12) {
		Global_101700.f_2095.f_539[iParam0 /*65*/].f_13[iVar0] = 0;
		Global_101700.f_2095.f_539[iParam0 /*65*/][iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		Global_101700.f_2095.f_539[iParam0 /*65*/].f_39[iVar0] = -1;
		Global_101700.f_2095.f_539[iParam0 /*65*/].f_49[iVar0] = -1;
		iVar0++;
	}
	switch (iParam0) {
	case 0: Global_101700.f_2095.f_539[iParam0 /*65*/].f_59 = 0; break;

	case 1:
		Global_101700.f_2095.f_539[1 /*65*/].f_13[3] = 8;
		Global_101700.f_2095.f_539[1 /*65*/].f_13[4] = 8;
		Global_101700.f_2095.f_539[1 /*65*/].f_13[6] = 6;
		Global_101700.f_2095.f_539[1 /*65*/].f_13[8] = 14;
		Global_101700.f_2095.f_539[1 /*65*/].f_13[2] = 0;
		Global_101700.f_2095.f_539[1 /*65*/][2] = 0;
		Global_101700.f_2095.f_539[iParam0 /*65*/].f_59 = 0;
		break;

	case 2:
		Global_101700.f_2095.f_539[2 /*65*/].f_13[3] = 0;
		Global_101700.f_2095.f_539[2 /*65*/].f_13[4] = 23;
		Global_101700.f_2095.f_539[2 /*65*/].f_13[6] = 10;
		Global_101700.f_2095.f_539[iParam0 /*65*/].f_59 = 0;
		break;
	}
	Global_101700.f_2095.f_539[iParam0 /*65*/].f_60 = -99;
	Global_101700.f_2095.f_539[iParam0 /*65*/].f_61 = 2;
	Global_101700.f_2095.f_539[iParam0 /*65*/].f_62 = 0;
	Global_101700.f_2095.f_539[iParam0 /*65*/].f_63 = -99;
	Global_101700.f_2095.f_539[iParam0 /*65*/].f_64 = 1;
	Global_91281[0 /*65*/] = {Global_101700.f_2095.f_539[0 /*65*/]};
	Global_91281[1 /*65*/] = {Global_101700.f_2095.f_539[1 /*65*/]};
	Global_91281[2 /*65*/] = {Global_101700.f_2095.f_539[2 /*65*/]};
}

// Position - 0x2DB5C
void func_466() { func_397("AM_H_SHOOT", 2, 3000, 60000, 10000, 7, 0, 0, 0); }

// Position - 0x2DB7B
void func_467() {
	int iVar0;

	func_276(48);
	func_486(48, 1);
	func_485(0, 11, 1);
	func_277(28, 1, 0);
	func_277(29, 1, 0);
	func_277(30, 1, 0);
	func_277(31, 1, 0);
	func_277(32, 1, 0);
	func_277(33, 1, 0);
	func_277(34, 1, 0);
	func_277(35, 1, 0);
	func_277(36, 1, 0);
	func_277(37, 1, 0);
	func_277(38, 1, 0);
	iVar0 = 0;
	while (iVar0 < 3) {
		func_468(iVar0, joaat("weapon_assaultrifle"), 1, 1);
		func_468(iVar0, joaat("weapon_grenade"), 1, 1);
		func_468(iVar0, joaat("weapon_pistol"), 1, 1);
		func_468(iVar0, joaat("weapon_microsmg"), 1, 1);
		func_468(iVar0, joaat("weapon_smg"), 1, 1);
		func_468(iVar0, joaat("weapon_knife"), 1, 1);
		iVar0++;
	}
}

// Position - 0x2DC50
void func_468(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_17(iParam0)) {
		iVar0 = func_484(iParam0, iParam1);
		iVar1 = func_482(iParam1);
		iVar2 = func_481(iVar1);
		if (iParam2) {
			gameplay::set_bit(&iVar0, iVar2);
		}
		else {
			gameplay::clear_bit(&iVar0, iVar2);
		}
		func_479(iParam0, iParam1, iVar0);
		if (iParam3) {
			func_469(iParam0, iParam1);
		}
	}
}

// Position - 0x2DCAA
void func_469(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_477(iParam1, iVar0);
	while (iVar1 != 0) {
		func_470(iParam0, iParam1, iVar1, 1);
		iVar0++;
		iVar1 = func_477(iParam1, iVar0);
	}
}

// Position - 0x2DCE3
void func_470(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_17(iParam0)) {
		iVar0 = func_476(iParam0, iParam1, iParam2);
		iVar1 = func_474(iParam2, iParam1);
		iVar2 = func_473(iVar1);
		if (iParam3) {
			gameplay::set_bit(&iVar0, iVar2);
		}
		else {
			gameplay::clear_bit(&iVar0, iVar2);
		}
		func_471(iParam0, iParam1, iParam2, iVar0);
	}
}

// Position - 0x2DD36
void func_471(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;

	iVar0 = func_474(iParam2, iParam1);
	iVar1 = func_472(iVar0);
	switch (iVar1) {
	case 0:
		switch (iParam0) {
		case 0: stats::stat_set_int(joaat("sp0_weap_addon_unlock_0"), iParam3, 1); break;

		case 1: stats::stat_set_int(joaat("sp1_weap_addon_unlock_0"), iParam3, 1); break;

		case 2: stats::stat_set_int(joaat("sp2_weap_addon_unlock_0"), iParam3, 1); break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: stats::stat_set_int(joaat("sp0_weap_addon_unlock_1"), iParam3, 1); break;

		case 1: stats::stat_set_int(joaat("sp1_weap_addon_unlock_1"), iParam3, 1); break;

		case 2: stats::stat_set_int(joaat("sp2_weap_addon_unlock_1"), iParam3, 1); break;
		}
		break;

	case 2:
		switch (iParam0) {
		case 0: stats::stat_set_int(joaat("sp0_weap_addon_unlock_2"), iParam3, 1); break;

		case 1: stats::stat_set_int(joaat("sp1_weap_addon_unlock_2"), iParam3, 1); break;

		case 2: stats::stat_set_int(joaat("sp2_weap_addon_unlock_2"), iParam3, 1); break;
		}
		break;

	case 3:
		switch (iParam0) {
		case 0: stats::stat_set_int(joaat("sp0_weap_addon_unlock_3"), iParam3, 1); break;

		case 1: stats::stat_set_int(joaat("sp1_weap_addon_unlock_3"), iParam3, 1); break;

		case 2: stats::stat_set_int(joaat("sp2_weap_addon_unlock_3"), iParam3, 1); break;
		}
		break;

	case 4:
		switch (iParam0) {
		case 0: stats::stat_set_int(joaat("sp0_weap_addon_unlock_4"), iParam3, 1); break;

		case 1: stats::stat_set_int(joaat("sp1_weap_addon_unlock_4"), iParam3, 1); break;

		case 2: stats::stat_set_int(joaat("sp2_weap_addon_unlock_4"), iParam3, 1); break;
		}
		break;

	case 5:
		switch (iParam0) {
		case 0: stats::stat_set_int(joaat("sp0_weap_addon_unlock_5"), iParam3, 1); break;

		case 1: stats::stat_set_int(joaat("sp1_weap_addon_unlock_5"), iParam3, 1); break;

		case 2: stats::stat_set_int(joaat("sp2_weap_addon_unlock_5"), iParam3, 1); break;
		}
		break;

	case 6:
		switch (iParam0) {
		case 0: stats::stat_set_int(joaat("sp0_weap_addon_unlock_6"), iParam3, 1); break;

		case 1: stats::stat_set_int(joaat("sp1_weap_addon_unlock_6"), iParam3, 1); break;

		case 2: stats::stat_set_int(joaat("sp2_weap_addon_unlock_6"), iParam3, 1); break;
		}
		break;

	default: break;
	}
}

// Position - 0x2DF98
int func_472(int iParam0) { return iParam0 / 32; }

// Position - 0x2DFA5
int func_473(int iParam0) { return iParam0 % 32; }

// Position - 0x2DFB2
int func_474(int iParam0, int iParam1) { return func_475(iParam0, iParam1); }

// Position - 0x2DFC2
int func_475(int iParam0, int iParam1) {
	switch (iParam1) {
	case joaat("weapon_pistol"):
		switch (iParam0) {
		case joaat("component_pistol_clip_01"): return 1;

		case joaat("component_pistol_clip_02"): return 2;

		case joaat("component_at_pi_flsh"): return 3;

		case joaat("component_at_pi_supp_02"): return 4;

		case joaat("component_pistol_varmod_luxe"): return 175;
		}
		break;

	case joaat("weapon_combatpistol"):
		switch (iParam0) {
		case joaat("component_combatpistol_clip_01"): return 5;

		case joaat("component_combatpistol_clip_02"): return 6;

		case joaat("component_at_pi_flsh"): return 7;

		case joaat("component_at_pi_supp"): return 8;

		case joaat("component_combatpistol_varmod_lowrider"): return 186;
		}
		break;

	case joaat("weapon_appistol"):
		switch (iParam0) {
		case joaat("component_appistol_clip_01"): return 11;

		case joaat("component_appistol_clip_02"): return 12;

		case joaat("component_at_pi_flsh"): return 13;

		case joaat("component_at_pi_supp"): return 14;

		case joaat("component_appistol_varmod_luxe"): return 164;
		}
		break;

	case joaat("weapon_microsmg"):
		switch (iParam0) {
		case joaat("component_microsmg_clip_01"): return 15;

		case joaat("component_microsmg_clip_02"): return 16;

		case joaat("component_at_pi_flsh"): return 17;

		case joaat("component_at_scope_macro"): return 18;

		case joaat("component_at_ar_supp_02"): return 19;

		case joaat("component_microsmg_varmod_luxe"): return 174;
		}
		break;

	case joaat("weapon_smg"):
		switch (iParam0) {
		case joaat("component_smg_clip_01"): return 22;

		case joaat("component_smg_clip_02"): return 23;

		case joaat("component_smg_clip_03"): return 207;

		case joaat("component_at_ar_flsh"): return 24;

		case joaat("component_at_scope_macro_02"): return 25;

		case joaat("component_at_pi_supp"): return 26;

		case joaat("component_smg_varmod_luxe"): return 179;
		}
		break;

	case joaat("weapon_assaultrifle"):
		switch (iParam0) {
		case joaat("component_assaultrifle_clip_01"): return 27;

		case joaat("component_assaultrifle_clip_02"): return 28;

		case joaat("component_assaultrifle_clip_03"): return 201;

		case joaat("component_at_ar_afgrip"): return 29;

		case joaat("component_at_ar_flsh"): return 30;

		case joaat("component_at_scope_macro"): return 31;

		case joaat("component_at_ar_supp_02"): return 32;

		case joaat("component_assaultrifle_varmod_luxe"): return 165;
		}
		break;

	case joaat("weapon_carbinerifle"):
		switch (iParam0) {
		case joaat("component_carbinerifle_clip_01"): return 33;

		case joaat("component_carbinerifle_clip_02"): return 34;

		case joaat("component_carbinerifle_clip_03"): return 202;

		case joaat("component_at_railcover_01"): return 35;

		case joaat("component_at_ar_afgrip"): return 36;

		case joaat("component_at_ar_flsh"): return 37;

		case joaat("component_at_scope_medium"): return 38;

		case joaat("component_at_ar_supp"): return 39;

		case joaat("component_carbinerifle_varmod_luxe"): return 168;
		}
		break;

	case joaat("weapon_advancedrifle"):
		switch (iParam0) {
		case joaat("component_advancedrifle_clip_01"): return 44;

		case joaat("component_advancedrifle_clip_02"): return 45;

		case joaat("component_at_ar_flsh"): return 47;

		case joaat("component_at_scope_small"): return 48;

		case joaat("component_at_ar_supp"): return 49;

		case joaat("component_advancedrifle_varmod_luxe"): return 163;
		}
		break;

	case joaat("weapon_mg"):
		switch (iParam0) {
		case joaat("component_mg_clip_01"): return 50;

		case joaat("component_mg_clip_02"): return 51;

		case joaat("component_at_scope_small_02"): return 52;

		case joaat("component_mg_varmod_lowrider"): return 187;
		}
		break;

	case joaat("weapon_combatmg"):
		switch (iParam0) {
		case joaat("component_combatmg_clip_01"): return 53;

		case joaat("component_combatmg_clip_02"): return 54;

		case joaat("component_at_ar_afgrip"): return 55;

		case joaat("component_at_scope_medium"): return 56;

		case joaat("component_combatmg_varmod_lowrider"): return 188;
		}
		break;

	case joaat("weapon_pumpshotgun"):
		switch (iParam0) {
		case joaat("component_at_sr_supp"): return 59;

		case joaat("component_at_ar_flsh"): return 60;

		case joaat("component_pumpshotgun_varmod_lowrider"): return 193;
		}
		break;

	case joaat("weapon_assaultshotgun"):
		switch (iParam0) {
		case joaat("component_assaultshotgun_clip_01"): return 64;

		case joaat("component_assaultshotgun_clip_02"): return 65;

		case joaat("component_at_ar_afgrip"): return 66;

		case joaat("component_at_ar_flsh"): return 67;

		case joaat("component_at_ar_supp"): return 68;
		}
		break;

	case joaat("weapon_sniperrifle"):
		switch (iParam0) {
		case joaat("component_sniperrifle_clip_01"): return 69;

		case joaat("component_at_scope_large"): return 70;

		case joaat("component_at_scope_max"): return 71;

		case joaat("component_at_ar_supp_02"): return 72;

		case joaat("component_sniperrifle_varmod_luxe"): return 180;
		}
		break;

	case joaat("weapon_heavysniper"):
		switch (iParam0) {
		case joaat("component_heavysniper_clip_01"): return 76;

		case joaat("component_at_scope_max"): return 77;

		case joaat("component_at_scope_large"): return 82;
		}
		break;

	case joaat("weapon_grenadelauncher"):
		switch (iParam0) {
		case joaat("component_at_ar_afgrip"): return 78;

		case joaat("component_at_ar_flsh"): return 79;

		case joaat("component_at_scope_small"): return 80;
		}
		break;

	case joaat("weapon_minigun"):
		switch (iParam0) {
		case joaat("component_minigun_clip_01"): return 81;
		}
		break;

	case joaat("weapon_assaultsmg"):
		switch (iParam0) {
		case joaat("component_assaultsmg_clip_01"): return 83;

		case joaat("component_assaultsmg_clip_02"): return 84;

		case joaat("component_at_ar_flsh"): return 85;

		case joaat("component_at_scope_macro"): return 86;

		case joaat("component_at_ar_supp_02"): return 87;

		case joaat("component_assaultsmg_varmod_lowrider"): return 189;
		}
		break;

	case joaat("weapon_bullpupshotgun"):
		switch (iParam0) {
		case joaat("component_at_ar_afgrip"): return 88;

		case joaat("component_at_ar_flsh"): return 89;

		case joaat("component_at_ar_supp_02"): return 90;
		}
		break;

	case joaat("weapon_pistol50"):
		switch (iParam0) {
		case joaat("component_pistol50_clip_01"): return 91;

		case joaat("component_pistol50_clip_02"): return 92;

		case joaat("component_at_pi_flsh"): return 93;

		case joaat("component_at_ar_supp_02"): return 94;

		case joaat("component_pistol50_varmod_luxe"): return 176;
		}
		break;

	case 392730790:
		switch (iParam0) {
		case 195735895: return 95;

		case joaat("component_at_scope_large"): return 96;

		case joaat("component_at_scope_max"): return 97;

		case joaat("component_at_ar_supp"): return 98;
		}
		break;

	case -947031628:
		switch (iParam0) {
		case 1525977990: return 99;

		case 1824470811: return 100;

		case joaat("component_at_ar_afgrip"): return 101;

		case joaat("component_at_ar_flsh"): return 102;

		case joaat("component_at_scope_medium"): return 103;

		case joaat("component_at_ar_supp"): return 104;
		}
		break;

	case -572349828:
		switch (iParam0) {
		case -890514874: return 105;

		case -507117574: return 106;

		case joaat("component_at_ar_afgrip"): return 107;

		case joaat("component_at_scope_medium"): return 108;
		}
		break;

	case -1887867191:
		switch (iParam0) {
		case -124428919: return 109;

		case 1048471894: return 110;
		}
		break;

	case joaat("weapon_specialcarbine"):
		switch (iParam0) {
		case joaat("component_specialcarbine_clip_01"): return 111;

		case joaat("component_specialcarbine_clip_02"): return 112;

		case joaat("component_specialcarbine_clip_03"): return 208;

		case joaat("component_at_ar_afgrip"): return 113;

		case joaat("component_at_ar_flsh"): return 114;

		case joaat("component_at_scope_medium"): return 115;

		case joaat("component_at_ar_supp_02"): return 116;

		case joaat("component_specialcarbine_varmod_lowrider"): return 190;
		}
		break;

	case joaat("weapon_snspistol"):
		switch (iParam0) {
		case joaat("component_snspistol_clip_01"): return 117;

		case joaat("component_snspistol_clip_02"): return 118;

		case joaat("component_at_pi_flsh"): return 119;

		case joaat("component_at_pi_supp"): return 120;

		case joaat("component_snspistol_varmod_lowrider"): return 191;
		}
		break;

	case joaat("weapon_heavypistol"):
		switch (iParam0) {
		case joaat("component_heavypistol_clip_01"): return 121;

		case joaat("component_heavypistol_clip_02"): return 122;

		case joaat("component_at_pi_flsh"): return 123;

		case joaat("component_at_pi_supp"): return 124;

		case joaat("component_heavypistol_varmod_luxe"): return 171;
		}
		break;

	case joaat("weapon_bullpuprifle"):
		switch (iParam0) {
		case joaat("component_bullpuprifle_clip_01"): return 131;

		case joaat("component_bullpuprifle_clip_02"): return 132;

		case joaat("component_at_ar_flsh"): return 127;

		case joaat("component_at_ar_supp"): return 128;

		case joaat("component_at_scope_small"): return 129;

		case joaat("component_at_ar_afgrip"): return 130;

		case joaat("component_bullpuprifle_varmod_low"): return 192;
		}
		break;

	case joaat("weapon_gusenberg"):
		switch (iParam0) {
		case joaat("component_gusenberg_clip_01"): return 125;

		case joaat("component_gusenberg_clip_02"): return 126;
		}
		break;

	case joaat("weapon_vintagepistol"):
		switch (iParam0) {
		case joaat("component_vintagepistol_clip_01"): return 133;

		case joaat("component_vintagepistol_clip_02"): return 134;

		case joaat("component_at_pi_supp"): return 136;
		}
		break;

	case joaat("weapon_heavyshotgun"):
		switch (iParam0) {
		case joaat("component_heavyshotgun_clip_01"): return 137;

		case joaat("component_heavyshotgun_clip_02"): return 140;

		case joaat("component_heavyshotgun_clip_03"): return 205;

		case joaat("component_at_ar_flsh"): return 145;

		case joaat("component_at_ar_supp_02"): return 146;

		case joaat("component_at_ar_afgrip"): return 147;
		}
		break;

	case joaat("weapon_marksmanrifle"):
		switch (iParam0) {
		case joaat("component_marksmanrifle_clip_01"): return 138;

		case joaat("component_marksmanrifle_clip_02"): return 139;

		case joaat("component_at_scope_large_fixed_zoom"): return 141;

		case joaat("component_at_ar_flsh"): return 142;

		case joaat("component_at_ar_supp"): return 143;

		case joaat("component_at_ar_afgrip"): return 144;

		case joaat("component_marksmanrifle_varmod_luxe"): return 172;
		}
		break;

	case joaat("weapon_combatpdw"):
		switch (iParam0) {
		case joaat("component_combatpdw_clip_01"): return 149;

		case joaat("component_combatpdw_clip_02"): return 150;

		case joaat("component_combatpdw_clip_03"): return 203;

		case joaat("component_at_ar_flsh"): return 151;

		case joaat("component_at_scope_small"): return 152;

		case joaat("component_at_ar_afgrip"): return 153;
		}
		break;

	case joaat("weapon_sawnoffshotgun"):
		switch (iParam0) {
		case joaat("component_sawnoffshotgun_varmod_luxe"): return 178;
		}
		break;

	case joaat("weapon_marksmanpistol"):
		switch (iParam0) {
		case joaat("component_marksmanpistol_clip_01"): return 148;
		}
		break;

	case joaat("weapon_knuckle"):
		switch (iParam0) {
		case joaat("component_knuckle_varmod_pimp"): return 154;

		case joaat("component_knuckle_varmod_ballas"): return 155;

		case joaat("component_knuckle_varmod_dollar"): return 156;

		case joaat("component_knuckle_varmod_diamond"): return 157;

		case joaat("component_knuckle_varmod_hate"): return 158;

		case joaat("component_knuckle_varmod_love"): return 159;

		case joaat("component_knuckle_varmod_player"): return 160;

		case joaat("component_knuckle_varmod_king"): return 161;

		case joaat("component_knuckle_varmod_vagos"): return 162;
		}
		break;

	case joaat("weapon_machinepistol"):
		switch (iParam0) {
		case joaat("component_machinepistol_clip_01"): return 184;

		case joaat("component_machinepistol_clip_02"): return 185;

		case joaat("component_machinepistol_clip_03"): return 206;

		case joaat("component_at_pi_supp"): return 183;
		}
		break;

	case joaat("weapon_switchblade"):
		switch (iParam0) {
		case joaat("component_switchblade_varmod_var1"): return 194;

		case joaat("component_switchblade_varmod_var2"): return 195;
		}
		break;

	case joaat("weapon_revolver"):
		switch (iParam0) {
		case joaat("component_revolver_clip_01"): return 196;

		case joaat("component_revolver_varmod_boss"): return 197;

		case joaat("component_revolver_varmod_goon"): return 198;
		}
		break;

	case joaat("weapon_compactrifle"):
		switch (iParam0) {
		case joaat("component_compactrifle_clip_01"): return 199;

		case joaat("component_compactrifle_clip_02"): return 200;

		case joaat("component_compactrifle_clip_03"): return 204;
		}
		break;

	case -1121678507:
		switch (iParam0) {
		case -2067221805: return 209;

		case -1820405577: return 210;
		}
		break;
	}
	return 0;
}

// Position - 0x2EC5B
var func_476(int iParam0, int iParam1, int iParam2) {
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_474(iParam2, iParam1);
	iVar2 = func_472(iVar1);
	switch (iVar2) {
	case 0:
		switch (iParam0) {
		case 0: stats::stat_get_int(joaat("sp0_weap_addon_unlock_0"), &uVar0, -1); break;

		case 1: stats::stat_get_int(joaat("sp1_weap_addon_unlock_0"), &uVar0, -1); break;

		case 2: stats::stat_get_int(joaat("sp2_weap_addon_unlock_0"), &uVar0, -1); break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: stats::stat_get_int(joaat("sp0_weap_addon_unlock_1"), &uVar0, -1); break;

		case 1: stats::stat_get_int(joaat("sp1_weap_addon_unlock_1"), &uVar0, -1); break;

		case 2: stats::stat_get_int(joaat("sp2_weap_addon_unlock_1"), &uVar0, -1); break;
		}
		break;

	case 2:
		switch (iParam0) {
		case 0: stats::stat_get_int(joaat("sp0_weap_addon_unlock_2"), &uVar0, -1); break;

		case 1: stats::stat_get_int(joaat("sp1_weap_addon_unlock_2"), &uVar0, -1); break;

		case 2: stats::stat_get_int(joaat("sp2_weap_addon_unlock_2"), &uVar0, -1); break;
		}
		break;

	case 3:
		switch (iParam0) {
		case 0: stats::stat_get_int(joaat("sp0_weap_addon_unlock_3"), &uVar0, -1); break;

		case 1: stats::stat_get_int(joaat("sp1_weap_addon_unlock_3"), &uVar0, -1); break;

		case 2: stats::stat_get_int(joaat("sp2_weap_addon_unlock_3"), &uVar0, -1); break;
		}
		break;

	case 4:
		switch (iParam0) {
		case 0: stats::stat_get_int(joaat("sp0_weap_addon_unlock_4"), &uVar0, -1); break;

		case 1: stats::stat_get_int(joaat("sp1_weap_addon_unlock_4"), &uVar0, -1); break;

		case 2: stats::stat_get_int(joaat("sp2_weap_addon_unlock_4"), &uVar0, -1); break;
		}
		break;

	case 5:
		switch (iParam0) {
		case 0: stats::stat_get_int(joaat("sp0_weap_addon_unlock_5"), &uVar0, -1); break;

		case 1: stats::stat_get_int(joaat("sp1_weap_addon_unlock_5"), &uVar0, -1); break;

		case 2: stats::stat_get_int(joaat("sp2_weap_addon_unlock_5"), &uVar0, -1); break;
		}
		break;

	case 6:
		switch (iParam0) {
		case 0: stats::stat_get_int(joaat("sp0_weap_addon_unlock_6"), &uVar0, -1); break;

		case 1: stats::stat_get_int(joaat("sp1_weap_addon_unlock_6"), &uVar0, -1); break;

		case 2: stats::stat_get_int(joaat("sp2_weap_addon_unlock_6"), &uVar0, -1); break;
		}
		break;

	default: break;
	}
	return uVar0;
}

// Position - 0x2EEBF
int func_477(int iParam0, int iParam1) {
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
			iVar1 = func_478(iParam0, &uVar2);
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

// Position - 0x2F9AB
int func_478(int iParam0, var *uParam1) {
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

// Position - 0x2F9E6
void func_479(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = func_482(iParam1);
	iVar1 = func_480(iVar0);
	switch (iVar1) {
	case 0:
		switch (iParam0) {
		case 0: stats::stat_set_int(joaat("sp0_weap_unlock_0"), iParam2, 1); break;

		case 1: stats::stat_set_int(joaat("sp1_weap_unlock_0"), iParam2, 1); break;

		case 2: stats::stat_set_int(joaat("sp2_weap_unlock_0"), iParam2, 1); break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: stats::stat_set_int(joaat("sp0_weap_unlock_1"), iParam2, 1); break;

		case 1: stats::stat_set_int(joaat("sp1_weap_unlock_1"), iParam2, 1); break;

		case 2: stats::stat_set_int(joaat("sp2_weap_unlock_1"), iParam2, 1); break;
		}
		break;

	case 2:
		switch (iParam0) {
		case 0: stats::stat_set_int(joaat("sp0_weap_unlock_2"), iParam2, 1); break;

		case 1: stats::stat_set_int(joaat("sp1_weap_unlock_2"), iParam2, 1); break;

		case 2: stats::stat_set_int(joaat("sp2_weap_unlock_2"), iParam2, 1); break;
		}
		break;

	default: break;
	}
}

// Position - 0x2FAFE
int func_480(int iParam0) { return iParam0 / 32; }

// Position - 0x2FB0B
int func_481(int iParam0) { return iParam0 % 32; }

// Position - 0x2FB18
int func_482(int iParam0) { return func_483(iParam0); }

// Position - 0x2FB26
int func_483(int iParam0) {
	switch (iParam0) {
	case joaat("weapon_unarmed"): return 0;

	case joaat("weapon_pistol"): return 1;

	case joaat("weapon_combatpistol"): return 2;

	case joaat("weapon_appistol"): return 3;

	case joaat("weapon_pistol50"): return 4;

	case joaat("weapon_smg"): return 5;

	case joaat("weapon_assaultsmg"): return 6;

	case joaat("weapon_microsmg"): return 7;

	case joaat("weapon_assaultrifle"): return 8;

	case joaat("weapon_carbinerifle"): return 9;

	case -947031628: return 10;

	case joaat("weapon_advancedrifle"): return 11;

	case joaat("weapon_mg"): return 12;

	case joaat("weapon_combatmg"): return 13;

	case -572349828: return 14;

	case joaat("weapon_stickybomb"): return 15;

	case joaat("weapon_grenade"): return 16;

	case joaat("weapon_smokegrenade"): return 17;

	case joaat("weapon_remotesniper"): return 18;

	case 392730790: return 19;

	case joaat("weapon_sniperrifle"): return 20;

	case joaat("weapon_heavysniper"): return 21;

	case joaat("weapon_pumpshotgun"): return 22;

	case joaat("weapon_bullpupshotgun"): return 23;

	case joaat("weapon_assaultshotgun"): return 24;

	case joaat("weapon_sawnoffshotgun"): return 25;

	case joaat("weapon_grenadelauncher"): return 26;

	case joaat("weapon_rpg"): return 27;

	case joaat("weapon_minigun"): return 28;

	case -344484024: return 29;

	case -1887867191: return 30;

	case joaat("weapon_stungun"): return 31;

	case -837150131: return 32;

	case joaat("gadget_parachute"): return 33;

	case joaat("weapon_knife"): return 34;

	case joaat("weapon_nightstick"): return 35;

	case joaat("weapon_hammer"): return 36;

	case joaat("weapon_bat"): return 37;

	case joaat("weapon_crowbar"): return 38;

	case joaat("weapon_golfclub"): return 39;

	case joaat("weapon_grenadelauncher_smoke"): return 40;

	case joaat("weapon_molotov"): return 41;

	case joaat("weapon_fireextinguisher"): return 42;

	case joaat("weapon_petrolcan"): return 43;

	case joaat("weapon_digiscanner"): return 44;

	case joaat("weapon_bottle"): return 45;

	case joaat("weapon_specialcarbine"): return 46;

	case joaat("weapon_snspistol"): return 47;

	case joaat("weapon_heavypistol"): return 49;

	case joaat("weapon_bullpuprifle"): return 48;

	case joaat("weapon_gusenberg"): return 50;

	case joaat("weapon_dagger"): return 51;

	case joaat("weapon_vintagepistol"): return 52;

	case joaat("weapon_flaregun"): return 57;

	case joaat("weapon_musket"): return 53;

	case joaat("weapon_firework"): return 54;

	case joaat("weapon_marksmanrifle"): return 56;

	case joaat("weapon_heavyshotgun"): return 55;

	case joaat("weapon_proxmine"): return 60;

	case joaat("weapon_hominglauncher"): return 61;

	case joaat("weapon_hatchet"): return 58;

	case joaat("weapon_railgun"): return 59;

	case joaat("weapon_combatpdw"): return 64;

	case joaat("weapon_knuckle"): return 62;

	case joaat("weapon_marksmanpistol"): return 63;

	case joaat("weapon_machete"): return 65;

	case joaat("weapon_machinepistol"): return 68;

	case joaat("weapon_dbshotgun"): return 66;

	case joaat("weapon_compactrifle"): return 67;

	case joaat("weapon_flashlight"): return 69;

	case joaat("weapon_revolver"): return 70;

	case joaat("weapon_switchblade"): return 71;

	case 317205821: return 72;

	case -1121678507: return 73;

	case 125959754: return 74;

	case -853065399: return 75;

	case -1169823560: return 76;

	case -1810795771: return 77;

	case 419712736: return 78;
	}
	return 0;
}

// Position - 0x2FF80
var func_484(int iParam0, int iParam1) {
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_482(iParam1);
	iVar2 = func_480(iVar1);
	switch (iVar2) {
	case 0:
		switch (iParam0) {
		case 0: stats::stat_get_int(joaat("sp0_weap_unlock_0"), &uVar0, -1); break;

		case 1: stats::stat_get_int(joaat("sp1_weap_unlock_0"), &uVar0, -1); break;

		case 2: stats::stat_get_int(joaat("sp2_weap_unlock_0"), &uVar0, -1); break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: stats::stat_get_int(joaat("sp0_weap_unlock_1"), &uVar0, -1); break;

		case 1: stats::stat_get_int(joaat("sp1_weap_unlock_1"), &uVar0, -1); break;

		case 2: stats::stat_get_int(joaat("sp2_weap_unlock_1"), &uVar0, -1); break;
		}
		break;

	case 2:
		switch (iParam0) {
		case 0: stats::stat_get_int(joaat("sp0_weap_unlock_2"), &uVar0, -1); break;

		case 1: stats::stat_get_int(joaat("sp1_weap_unlock_2"), &uVar0, -1); break;

		case 2: stats::stat_get_int(joaat("sp2_weap_unlock_2"), &uVar0, -1); break;
		}
		break;

	default: break;
	}
	return uVar0;
}

// Position - 0x3009E
void func_485(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam0 == 11 || iParam0 == -1) {
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32) {
		return;
	}
	iVar0 = gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iParam0], iParam1);
	if (iVar0 == iParam2) {
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&Global_101700.f_8044.f_99.f_219[iParam0], iParam1);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_8044.f_99.f_219[iParam0], iParam1);
	}
}

// Position - 0x30123
void func_486(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 != gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 13)) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 13);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 13);
	}
}

// Position - 0x3019A
void func_487(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1) {
		func_277(39, 1, 0);
		func_277(40, 1, 0);
		func_277(41, 1, 0);
		func_277(42, 1, 0);
		func_277(43, 1, 0);
	}
	func_488(1, iParam0, 0);
	func_488(2, iParam0, 1);
	func_488(3, iParam0, 2);
	func_488(4, iParam0, 3);
	func_488(103, iParam0, 3);
	func_488(5, iParam0, 0);
	func_488(6, iParam0, 0);
	func_488(7, iParam0, 0);
	func_488(8, iParam0, 0);
	func_488(9, iParam0, 0);
	func_488(10, iParam0, 0);
	func_488(11, iParam0, 0);
	func_488(12, iParam0, 0);
	func_488(13, iParam0, 0);
	func_488(14, iParam0, 2);
	func_488(15, iParam0, 3);
	func_488(16, iParam0, 3);
	func_488(17, iParam0, 0);
	func_488(18, iParam0, 1);
	func_488(19, iParam0, 2);
	func_488(20, iParam0, 2);
	func_488(101, iParam0, 3);
	func_488(102, iParam0, 3);
	func_488(21, iParam0, 0);
	func_488(22, iParam0, 1);
	func_488(23, iParam0, 2);
	func_488(24, iParam0, 3);
	func_488(25, iParam0, 0);
	func_488(26, iParam0, 1);
	func_488(27, iParam0, 2);
	func_488(28, iParam0, 3);
	func_488(29, iParam0, 0);
	func_488(30, iParam0, 0);
	func_488(31, iParam0, 1);
	func_488(32, iParam0, 2);
	func_488(33, iParam0, 3);
	func_488(34, iParam0, 0);
	func_488(35, iParam0, 0);
	func_488(36, iParam0, 0);
	func_488(37, iParam0, 0);
	func_488(38, iParam0, 0);
	func_488(39, iParam0, 0);
	func_488(40, iParam0, 0);
	func_488(41, iParam0, 0);
	func_488(42, iParam0, 0);
	func_488(43, iParam0, 0);
	func_488(44, iParam0, 2);
	func_488(45, iParam0, 3);
	func_488(99, iParam0, 1);
	func_488(46, iParam0, 1);
	func_488(55, iParam0, 0);
	func_488(60, iParam0, 0);
	func_488(59, iParam0, 1);
	func_488(58, iParam0, 1);
	func_488(56, iParam0, 2);
	func_488(57, iParam0, 3);
	func_488(47, iParam0, 0);
	func_488(48, iParam0, 1);
	func_488(49, iParam0, 2);
	func_488(50, iParam0, 3);
	func_488(51, iParam0, 0);
	func_488(52, iParam0, 1);
	func_488(53, iParam0, 2);
	func_488(54, iParam0, 3);
	func_488(106, iParam0, 3);
	func_488(61, iParam0, 0);
	func_488(62, iParam0, 1);
	func_488(63, iParam0, 1);
	func_488(64, iParam0, 2);
	func_488(65, iParam0, 2);
	func_488(66, iParam0, 0);
	func_488(67, iParam0, 1);
	func_488(68, iParam0, 2);
	func_488(69, iParam0, 3);
	func_488(70, iParam0, 3);
	func_488(71, iParam0, 3);
	func_488(72, iParam0, 0);
	func_488(73, iParam0, 0);
	func_488(74, iParam0, 1);
	func_488(75, iParam0, 2);
	func_488(76, iParam0, 3);
	func_488(77, iParam0, 0);
	func_488(78, iParam0, 1);
	func_488(79, iParam0, 2);
	func_488(80, iParam0, 3);
	func_488(100, iParam0, 3);
	func_488(81, iParam0, 0);
	func_488(82, iParam0, 1);
	func_488(83, iParam0, 2);
	func_488(84, iParam0, 3);
	func_488(105, iParam0, 3);
	func_488(85, iParam0, 0);
	func_488(86, iParam0, 0);
	func_488(87, iParam0, 0);
	func_488(88, iParam0, 0);
	func_488(104, iParam0, 0);
	func_488(91, iParam0, 0);
	func_488(92, iParam0, 1);
	func_488(93, iParam0, 2);
	func_488(94, iParam0, 3);
	func_488(95, iParam0, 0);
	func_488(96, iParam0, 1);
	func_488(97, iParam0, 2);
	func_488(98, iParam0, 3);
	if (iParam0 >= 3) {
		iVar0 = 0;
		while (iVar0 < 90) {
			func_488(iVar0, iParam0, 3);
			iVar0++;
		}
	}
}

// Position - 0x30592
void func_488(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam1 >= iParam2) {
		if (!gameplay::is_bit_set(Global_101700.f_2095.f_539.f_1469[iParam0 / 32], iParam0 % 32)) {
			iVar0 = 0;
			while (iVar0 < Global_101700.f_19077) {
				Global_101700.f_19077[iVar0 /*43*/].f_42 = 1;
				iVar0++;
			}
			gameplay::set_bit(&Global_101700.f_2095.f_539.f_1469[iParam0 / 32], iParam0 % 32);
			if (iParam2 == 0) {
				func_489(0, iParam0, "", 0, 0, 2);
			}
		}
	}
}

// Position - 0x30618
void func_489(int iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (iParam1 == -1) {
		if (network::network_is_game_in_progress()) {
			if (iParam0 == 0) {
				iVar0 = 0;
				while (iVar0 < 242) {
					iVar1 = iVar0 * 3;
					iVar2 = func_497(gameplay::get_hash_key(sParam2));
					if (iVar2 != -1) {
						gameplay::set_bit(&Global_2097152[func_31() /*10758*/].f_7546.f_1794[iVar1 + iVar2 / 32],
										  iVar2 % 32);
					}
					iVar0++;
				}
			}
			else {
				iVar3 = func_496(iParam0);
				if (iVar3 != -1) {
					iVar4 = iVar3 * 3;
					iVar5 = func_497(gameplay::get_hash_key(sParam2));
					if (iVar5 != -1) {
						gameplay::set_bit(&Global_2097152[func_31() /*10758*/].f_7546.f_1794[iVar4 + iVar5 / 32],
										  iVar5 % 32);
					}
				}
				iVar6 = func_495(iParam0, iParam3, iParam4, iParam5);
				if (iVar6 > 0) {
					gameplay::set_bit(&Global_2097152[func_31() /*10758*/].f_7546.f_2521[iVar6 / 32], iVar6 % 32);
				}
			}
		}
		return;
	}
	if (iParam0 == 0) {
		iVar7 = 0;
		while (iVar7 < 242) {
			if (func_490(iParam1, -1, -1)) {
				iVar8 = iVar7 * 4 + iParam1 / 32;
				if (network::network_is_game_in_progress()) {
					gameplay::set_bit(&Global_2097152[func_31() /*10758*/].f_7546.f_45[iVar8], iParam1 % 32);
				}
				else {
					gameplay::set_bit(&Global_101700.f_668.f_75[iVar8], iParam1 % 32);
				}
			}
			iVar7++;
		}
	}
	else if (func_490(iParam1, -1, -1)) {
		iVar9 = func_496(iParam0);
		if (iVar9 != -1) {
			iVar10 = iVar9 * 4 + iParam1 / 32;
			iVar11 = iParam1 % 32;
			if (network::network_is_game_in_progress()) {
				if (iParam0 == joaat("avarus") || iParam0 == joaat("chimera") || iParam0 == joaat("esskey"))
					&&iParam1 == 1 || (iParam1 == 72 || iParam1 == 66) && iParam0 == joaat("esskey") { iVar11--; }
				if (iParam0 == joaat("specter2") && (iParam1 == 21 || iParam1 == 72)) {
					iVar11--;
				}
				if (iVar11 >= 0) {
					gameplay::set_bit(&Global_2097152[func_31() /*10758*/].f_7546.f_45[iVar10], iVar11);
				}
			}
			else {
				gameplay::set_bit(&Global_101700.f_668.f_75[iVar10], iVar11);
			}
		}
	}
}

// Position - 0x3085E
bool func_490(int iParam0, int iParam1, int iParam2) {
	if (func_494(iParam1, iParam2)) {
		return true;
	}
	if (iParam0 == -1) {
		return true;
	}
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_2095.f_539.f_1469[iParam0 / 32], iParam0 % 32);
	}
	if (func_192() == 0) {
		return func_491(iParam0, -1);
	}
	return true;
}

// Position - 0x308BA
var func_491(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_492(iParam0, iParam1);
	iVar1 = iParam0;
	return gameplay::is_bit_set(iVar0, func_481(iVar1));
}

// Position - 0x308DC
int func_492(var uParam0, int iParam1) {
	int iVar0;

	iVar0 = func_94(func_493(uParam0), iParam1, 0);
	return iVar0;
}

// Position - 0x308F5
int func_493(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	iVar1 = func_480(iVar0);
	if (func_192() == 0 || func_212() == 0 || func_192() == 999 && func_212() == 999) {
		switch (iVar1) {
		case 0: return 724;

		case 1: return 725;

		case 2: return 726;

		case 3: return 727;

		case 4: return 728;

		case 5: return 729;

		case 6: return 730;
		}
	}
	return 6022;
}

// Position - 0x309AC
bool func_494(int iParam0, int iParam1) {
	if (iParam0 == 45) {
		if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3) {
			return true;
		}
	}
	return false;
}

// Position - 0x309DB
int func_495(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = 0;
	if (iParam0 == joaat("btype2")) {
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
	}
	else {
		iVar0 += 51;
	}
	if (iParam0 == joaat("lurcher")) {
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
	}
	else {
		iVar0 += 49;
	}
	if (iParam0 == joaat("faction2")) {
		if (iParam3 == 70 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 71 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 72 && iParam1 >= 1 && iParam1 <= 22) {
			return iVar0 + iParam1;
		}
		iVar0 += 23;
		if (iParam3 == 73 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 91 && (iParam2 == 0 || iParam2 == 1) && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 91 && (iParam2 == 0 || iParam2 == 2) && iParam1 >= 0 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (iParam3 == 90 && (iParam2 == 0 || iParam2 == 1) && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 92 && iParam1 >= 0 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 75 && iParam1 >= 2 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 74 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 76 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 77 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
	}
	else {
		iVar0 += 268;
	}
	if (iParam0 == joaat("buccaneer2")) {
		if (iParam3 == 82 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 76 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 77 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 75 && iParam1 >= 2 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 91 && (iParam2 == 0 || iParam2 == 1) && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
		if (iParam3 == 91 && (iParam2 == 0 || iParam2 == 2) && iParam1 >= 1 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 90 && (iParam2 == 0 || iParam2 == 1) && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 92 && iParam1 >= 0 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 70 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 71 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 72 && iParam1 >= 1 && iParam1 <= 22) {
			return iVar0 + iParam1;
		}
		iVar0 += 23;
		if (iParam3 == 73 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 11;
		if (iParam3 == 62 && iParam1 >= 1 && iParam1 <= 13) {
			return iVar0 + iParam1;
		}
		iVar0 += 14;
		if (iParam3 == 63 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 74 && iParam1 >= 1 && iParam1 <= 7) {
			return iVar0 + iParam1;
		}
		iVar0 += 8;
	}
	else {
		iVar0 += 319;
	}
	if (iParam0 == joaat("chino2")) {
		if (iParam3 == 82 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 76 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 77 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 75 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 91 && (iParam2 == 0 || iParam2 == 1) && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
		if (iParam3 == 91 && (iParam2 == 0 || iParam2 == 2) && iParam1 >= 1 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 90 && (iParam2 == 0 || iParam2 == 1) && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 92 && iParam1 >= 0 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 70 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 71 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 72 && iParam1 >= 1 && iParam1 <= 22) {
			return iVar0 + iParam1;
		}
		iVar0 += 23;
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 62 && iParam1 >= 1 && iParam1 <= 13) {
			return iVar0 + iParam1;
		}
		iVar0 += 14;
		if (iParam3 == 63 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 74 && iParam1 >= 1 && iParam1 <= 8) {
			return iVar0 + iParam1;
		}
		iVar0 += 9;
	}
	else {
		iVar0 += 315;
	}
	if (iParam0 == joaat("moonbeam2")) {
		if (iParam3 == 6 && iParam1 >= 1 && iParam1 <= 1) {
			return iVar0 + iParam1;
		}
		iVar0 += 2;
		if (iParam3 == 76 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 77 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 75 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 91 && (iParam2 == 0 || iParam2 == 1) && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 91 && (iParam2 == 0 || iParam2 == 2) && iParam1 >= 1 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 90 && (iParam2 == 0 || iParam2 == 1) && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 92 && iParam1 >= 0 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 68 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 69 && iParam1 >= 1 && iParam1 <= 1) {
			return iVar0 + iParam1;
		}
		iVar0 += 2;
		if (iParam3 == 70 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 71 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 72 && iParam1 >= 1 && iParam1 <= 22) {
			return iVar0 + iParam1;
		}
		iVar0 += 23;
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 62 && iParam1 >= 1 && iParam1 <= 13) {
			return iVar0 + iParam1;
		}
		iVar0 += 14;
		if (iParam3 == 63 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 74 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
	}
	else {
		iVar0 += 308;
	}
	if (iParam0 == joaat("primo2")) {
		if (iParam3 == 80 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 81 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 82 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 76 && iParam1 >= 1 && iParam1 <= 6) {
			return iVar0 + iParam1;
		}
		iVar0 += 7;
		if (iParam3 == 77 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 75 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 91 && (iParam2 == 0 || iParam2 == 1) && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 91 && (iParam2 == 0 || iParam2 == 2) && iParam1 >= 1 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 92 && iParam1 >= 0 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 70 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 71 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 72 && iParam1 >= 1 && iParam1 <= 22) {
			return iVar0 + iParam1;
		}
		iVar0 += 23;
		if (iParam3 == 73 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 62 && iParam1 >= 1 && iParam1 <= 13) {
			return iVar0 + iParam1;
		}
		iVar0 += 14;
		if (iParam3 == 63 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 74 && iParam1 >= 1 && iParam1 <= 7) {
			return iVar0 + iParam1;
		}
		iVar0 += 8;
	}
	else {
		iVar0 += 309;
	}
	if (iParam0 == joaat("voodoo")) {
		if (iParam3 == 79 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 80 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 81 && iParam1 >= 1 && iParam1 <= 8) {
			return iVar0 + iParam1;
		}
		iVar0 += 9;
		if (iParam3 == 82 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 6 && iParam1 >= 1 && iParam1 <= 1) {
			return iVar0 + iParam1;
		}
		iVar0 += 2;
		if (iParam3 == 76 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 77 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 75 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 91 && (iParam2 == 0 || iParam2 == 1) && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
		if (iParam3 == 91 && (iParam2 == 0 || iParam2 == 2) && iParam1 >= 1 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 90 && (iParam2 == 0 || iParam2 == 1) && iParam1 >= 1 && iParam1 <= 8) {
			return iVar0 + iParam1;
		}
		iVar0 += 9;
		if (iParam3 == 92 && iParam1 >= 0 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 70 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 71 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 72 && iParam1 >= 1 && iParam1 <= 22) {
			return iVar0 + iParam1;
		}
		iVar0 += 23;
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 62 && iParam1 >= 1 && iParam1 <= 13) {
			return iVar0 + iParam1;
		}
		iVar0 += 14;
		if (iParam3 == 63 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 74 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
	}
	else {
		iVar0 += 326;
	}
	if (iParam0 == joaat("faction")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("buccaneer")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("chino")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("moonbeam")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("primo")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("voodoo2")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("sultan")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("banshee")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("banshee2")) {
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11) {
			return iVar0 + iParam1;
		}
		iVar0 += 12;
		if (iParam3 == 65) {
			if (Global_262145.f_10196) {
				if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
					return iVar0 + iParam1;
				}
				iVar0 += 46;
			}
			else {
				if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
					return iVar0 + iParam1;
				}
				iVar0 += 46;
			}
		}
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8) {
			return iVar0 + iParam1;
		}
		iVar0 += 8;
	}
	else {
		iVar0 += 114;
	}
	if (iParam0 == joaat("sultanrs")) {
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6) {
			return iVar0 + iParam1;
		}
		iVar0 += 7;
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 83 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8) {
			return iVar0 + iParam1;
		}
		iVar0 += 9;
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1) {
			return iVar0 + iParam1;
		}
		iVar0 += 2;
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (iParam3 == 65) {
			if (Global_262145.f_10196) {
				if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
					return iVar0 + iParam1;
				}
				iVar0 += 46;
			}
			else {
				if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
					return iVar0 + iParam1;
				}
				iVar0 += 46;
			}
		}
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6) {
			return iVar0 + iParam1;
		}
		iVar0 += 7;
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7) {
			return iVar0 + iParam1;
		}
		iVar0 += 8;
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 14;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8) {
			return iVar0 + iParam1;
		}
		iVar0 += 9;
	}
	else {
		iVar0 += 221;
	}
	if (iParam0 == joaat("btype3")) {
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1) {
			return iVar0 + iParam1;
		}
		iVar0 += 2;
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1) {
			return iVar0 + iParam1;
		}
		iVar0 += 2;
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 83 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 93 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 94 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1) {
			return iVar0 + iParam1;
		}
		iVar0 += 2;
	}
	else {
		iVar0 += 16;
	}
	if (iParam0 == joaat("faction")) {
		if (iParam3 == 61 && iParam1 == 1) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("sabregt")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("tornado")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("tornado2")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("tornado3")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("virgo3")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("minivan")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("slamvan")) {
		if (iParam3 == 61 && iParam1 == 0) {
			return iVar0 + iParam1;
		}
		iVar0++;
	}
	else {
		iVar0++;
	}
	if (iParam0 == joaat("faction3")) {
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (iParam3 == 65) {
			if (Global_262145.f_10196) {
				if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
					return iVar0 + iParam1;
				}
				iVar0 += 46;
			}
			else {
				if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
					return iVar0 + iParam1;
				}
				iVar0 += 46;
			}
		}
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22) {
			return iVar0 + iParam1;
		}
		iVar0 += 23;
		if (iParam3 == 73 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7) {
			return iVar0 + iParam1;
		}
		iVar0 += 8;
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 0 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
	}
	else {
		iVar0 += 272;
	}
	if (iParam0 == joaat("minivan2")) {
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1) {
			return iVar0 + iParam1;
		}
		iVar0 += 2;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22) {
			return iVar0 + iParam1;
		}
		iVar0 += 23;
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 0 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
	}
	else {
		iVar0 += 281;
	}
	if (iParam0 == joaat("sabregt2")) {
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7) {
			return iVar0 + iParam1;
		}
		iVar0 += 8;
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 90 && (iParam2 == 0 || iParam2 == 1) && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22) {
			return iVar0 + iParam1;
		}
		iVar0 += 23;
		if (iParam3 == 73 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 0 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 62 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13) {
			return iVar0 + iParam1;
		}
		iVar0 += 14;
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
	}
	else {
		iVar0 += 234;
	}
	if (iParam0 == joaat("slamvan3")) {
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 83 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1) {
			return iVar0 + iParam1;
		}
		iVar0 += 2;
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11) {
			return iVar0 + iParam1;
		}
		iVar0 += 12;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22) {
			return iVar0 + iParam1;
		}
		iVar0 += 23;
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 0 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 62 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13) {
			return iVar0 + iParam1;
		}
		iVar0 += 14;
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
	}
	else {
		iVar0 += 315;
	}
	if (iParam0 == joaat("tornado5")) {
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6) {
			return iVar0 + iParam1;
		}
		iVar0 += 7;
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8) {
			return iVar0 + iParam1;
		}
		iVar0 += 9;
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6) {
			return iVar0 + iParam1;
		}
		iVar0 += 7;
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (iParam3 == 91 && iParam2 == 3 && iParam1 >= 0 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8) {
			return iVar0 + iParam1;
		}
		iVar0 += 9;
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22) {
			return iVar0 + iParam1;
		}
		iVar0 += 23;
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 0 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
	}
	else {
		iVar0 += 382;
	}
	if (iParam0 == joaat("virgo2")) {
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (Global_262145.f_10196) {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		else {
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21) {
				return iVar0 + iParam1;
			}
			iVar0 += 46;
		}
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22) {
			return iVar0 + iParam1;
		}
		iVar0 += 23;
		if (iParam3 == 73 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6) {
			return iVar0 + iParam1;
		}
		iVar0 += 7;
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 0 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
	}
	else {
		iVar0 += 290;
	}
	if (iParam0 == joaat("avarus")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18) {
			return iVar0 + iParam1;
		}
		iVar0 += 19;
	}
	else {
		iVar0 += 19;
	}
	if (iParam0 == joaat("chimera")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18) {
			return iVar0 + iParam1;
		}
		iVar0 += 19;
	}
	else {
		iVar0 += 19;
	}
	if (iParam0 == joaat("daemon2")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18) {
			return iVar0 + iParam1;
		}
		iVar0 += 19;
	}
	else {
		iVar0 += 19;
	}
	if (iParam0 == joaat("zombiea")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18) {
			return iVar0 + iParam1;
		}
		iVar0 += 19;
	}
	else {
		iVar0 += 19;
	}
	if (iParam0 == joaat("zombieb")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18) {
			return iVar0 + iParam1;
		}
		iVar0 += 19;
	}
	else {
		iVar0 += 19;
	}
	if (iParam0 == joaat("sanctus")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18) {
			return iVar0 + iParam1;
		}
		iVar0 += 19;
	}
	else {
		iVar0 += 19;
	}
	if (iParam0 == joaat("wolfsbane")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18) {
			return iVar0 + iParam1;
		}
		iVar0 += 19;
	}
	else {
		iVar0 += 19;
	}
	if (iParam0 == joaat("blazer4")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18) {
			return iVar0 + iParam1;
		}
		iVar0 += 19;
	}
	else {
		iVar0 += 19;
	}
	if (iParam0 == joaat("youga2")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18) {
			return iVar0 + iParam1;
		}
		iVar0 += 19;
	}
	else {
		iVar0 += 19;
	}
	if (iParam0 == joaat("fcr2")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18) {
			return iVar0 + iParam1;
		}
		iVar0 += 19;
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
	}
	else {
		iVar0 += 59;
	}
	if (iParam0 == joaat("diablous2")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18) {
			return iVar0 + iParam1;
		}
		iVar0 += 19;
	}
	else {
		iVar0 += 19;
	}
	if (iParam0 == joaat("nightblade")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
	}
	else {
		iVar0 += 13;
	}
	if (iParam0 == joaat("faggio3")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
	}
	else {
		iVar0 += 13;
	}
	if (iParam0 == joaat("faggio")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
	}
	else {
		iVar0 += 13;
	}
	if (iParam0 == joaat("defiler")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
	}
	else {
		iVar0 += 13;
	}
	if (iParam0 == joaat("esskey")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
	}
	else {
		iVar0 += 13;
	}
	if (iParam0 == joaat("hakuchou2")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
	}
	else {
		iVar0 += 13;
	}
	if (iParam0 == joaat("manchez")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
	}
	else {
		iVar0 += 13;
	}
	if (iParam0 == joaat("vortex")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
	}
	else {
		iVar0 += 13;
	}
	if (iParam0 == joaat("specter2")) {
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 67 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8) {
			return iVar0 + iParam1;
		}
		iVar0 += 9;
		if (iParam3 == 68 && iParam2 == 0 && iParam1 == 1) {
			return iVar0 + iParam1;
		}
		iVar0 += 2;
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8) {
			return iVar0 + iParam1;
		}
		iVar0 += 9;
	}
	else {
		iVar0 += 116;
	}
	if (iParam0 == joaat("comet3")) {
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 7) {
			return iVar0 + iParam1;
		}
		iVar0 += 8;
		if (iParam3 == 68 && iParam2 == 0 && iParam1 == 6) {
			return iVar0 + iParam1;
		}
		iVar0 += 7;
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
	}
	else {
		iVar0 += 200;
	}
	if (iParam0 == joaat("elegy")) {
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11) {
			return iVar0 + iParam1;
		}
		iVar0 += 12;
		if (iParam3 == 91 && iParam2 == 1 && iParam1 == 1) {
			return iVar0 + iParam1;
		}
		iVar0 += 2;
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67) {
			return iVar0 + iParam1;
		}
		iVar0 += 68;
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 15) {
			return iVar0 + iParam1;
		}
		iVar0 += 16;
		if (iParam3 == 68 && iParam2 == 0 && iParam1 == 7) {
			return iVar0 + iParam1;
		}
		iVar0 += 8;
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14) {
			return iVar0 + iParam1;
		}
		iVar0 += 15;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6) {
			return iVar0 + iParam1;
		}
		iVar0 += 7;
		if (iParam3 == 83 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4) {
			return iVar0 + iParam1;
		}
		iVar0 += 5;
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8) {
			return iVar0 + iParam1;
		}
		iVar0 += 9;
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12) {
			return iVar0 + iParam1;
		}
		iVar0 += 13;
	}
	else {
		iVar0 += 252;
	}
	if (iParam0 == joaat("italigtb2")) {
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5) {
			return iVar0 + iParam1;
		}
		iVar0 += 6;
		if (iParam3 == 67 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7) {
			return iVar0 + iParam1;
		}
		iVar0 += 8;
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6) {
			return iVar0 + iParam1;
		}
		iVar0 += 7;
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13) {
			return iVar0 + iParam1;
		}
		iVar0 += 14;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6) {
			return iVar0 + iParam1;
		}
		iVar0 += 7;
	}
	else {
		iVar0 += 122;
	}
	if (iParam0 == joaat("nero2")) {
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 67 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16) {
			return iVar0 + iParam1;
		}
		iVar0 += 17;
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 48) {
			return iVar0 + iParam1;
		}
		iVar0 += 49;
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9) {
			return iVar0 + iParam1;
		}
		iVar0 += 10;
		if (iParam3 == 81 && iParam2 == 0 && iParam1 == 1) {
			return iVar0 + iParam1;
		}
		iVar0 += 2;
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2) {
			return iVar0 + iParam1;
		}
		iVar0 += 3;
		if (iParam3 == 83 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3) {
			return iVar0 + iParam1;
		}
		iVar0 += 4;
	}
	else {
		iVar0 += 105;
	}
	if (iVar0 > 5438) {
	}
	return 0;
}

// Position - 0x34CE8
int func_496(int iParam0) {
	switch (iParam0) {
	case joaat("adder"): return 0;

	case joaat("akuma"): return 1;

	case joaat("asea"): return 2;

	case joaat("asterope"): return 3;

	case joaat("bagger"): return 4;

	case joaat("baller"): return 5;

	case joaat("banshee"):
	case joaat("banshee2"): return 6;

	case joaat("bati"): return 7;

	case joaat("bati2"): return 8;

	case joaat("bfinjection"): return 9;

	case joaat("bison"): return 10;

	case joaat("bison2"): return 11;

	case joaat("bison3"): return 12;

	case joaat("bjxl"): return 13;

	case joaat("btype"): return 14;

	case joaat("blazer"): return 15;

	case joaat("blazer2"): return 15;

	case joaat("blazer3"): return 15;

	case joaat("blista"): return 16;

	case joaat("bobcatxl"): return 17;

	case joaat("bodhi2"): return 18;

	case joaat("boxville"): return 19;

	case joaat("boxville2"): return 20;

	case joaat("boxville3"): return 21;

	case joaat("buccaneer"):
	case joaat("buccaneer2"): return 22;

	case joaat("buffalo"): return 23;

	case joaat("buffalo2"): return 24;

	case joaat("bullet"): return 25;

	case joaat("burrito"): return 26;

	case joaat("paradise"): return 27;

	case joaat("bifta"): return 28;

	case joaat("kalahari"): return 29;

	case joaat("carbonizzare"): return 30;

	case joaat("carbonrs"): return 31;

	case joaat("cavalcade"): return 32;

	case joaat("cavalcade2"): return 33;

	case joaat("cheetah"): return 34;

	case joaat("cogcabrio"): return 35;

	case joaat("comet2"): return 36;

	case joaat("coquette"):
	case joaat("coquette2"): return 37;

	case joaat("daemon"): return 38;

	case joaat("dilettante"): return 39;

	case joaat("dominator"): return 40;

	case joaat("double"): return 41;

	case joaat("dubsta"): return 42;

	case joaat("dubsta2"): return 43;

	case joaat("elegy2"): return 44;

	case joaat("emperor"): return 45;

	case joaat("emperor2"): return 46;

	case joaat("emperor3"): return 47;

	case joaat("entityxf"): return 48;

	case joaat("exemplar"): return 49;

	case joaat("f620"): return 50;

	case joaat("faggio2"): return 51;

	case joaat("felon"): return 52;

	case joaat("felon2"): return 53;

	case joaat("feltzer2"): return 54;

	case joaat("fq2"): return 55;

	case joaat("fugitive"): return 56;

	case joaat("fusilade"): return 57;

	case joaat("futo"): return 58;

	case joaat("gauntlet"): return 59;

	case joaat("gburrito"): return 60;

	case joaat("granger"): return 61;

	case joaat("gresley"): return 62;

	case joaat("habanero"): return 63;

	case joaat("hexer"): return 64;

	case joaat("hotknife"): return 65;

	case joaat("infernus"): return 66;

	case joaat("ingot"): return 67;

	case joaat("intruder"): return 68;

	case joaat("issi2"): return 69;

	case joaat("jackal"): return 70;

	case joaat("jb700"): return 71;

	case joaat("khamelion"): return 72;

	case joaat("landstalker"): return 73;

	case joaat("lguard"): return 74;

	case joaat("manana"): return 75;

	case joaat("mesa"): return 76;

	case joaat("minivan"):
	case joaat("minivan2"): return 77;

	case joaat("monroe"): return 78;

	case joaat("nemesis"): return 79;

	case joaat("ninef"): return 80;

	case joaat("ninef2"): return 81;

	case joaat("oracle"): return 82;

	case joaat("oracle2"): return 83;

	case joaat("patriot"): return 84;

	case joaat("pcj"): return 85;

	case joaat("penumbra"): return 86;

	case joaat("peyote"): return 87;

	case joaat("phoenix"): return 88;

	case joaat("prairie"): return 89;

	case joaat("pranger"): return 90;

	case joaat("premier"): return 91;

	case joaat("primo"):
	case joaat("primo2"): return 92;

	case joaat("radi"): return 93;

	case joaat("rancherxl"): return 94;

	case joaat("rancherxl2"): return 95;

	case joaat("rapidgt"): return 96;

	case joaat("rapidgt2"): return 97;

	case joaat("ratloader"): return 98;

	case joaat("rebel"): return 99;

	case joaat("rebel2"): return 100;

	case joaat("regina"): return 101;

	case joaat("rocoto"): return 102;

	case joaat("ruffian"): return 103;

	case joaat("ruiner"): return 104;

	case joaat("rumpo"): return 105;

	case joaat("sabregt"):
	case joaat("sabregt2"): return 106;

	case joaat("sadler"): return 107;

	case joaat("sanchez"): return 108;

	case joaat("sandking"): return 109;

	case joaat("sandking2"): return 110;

	case joaat("schafter2"): return 111;

	case joaat("schwarzer"): return 112;

	case joaat("seminole"): return 113;

	case joaat("sentinel"): return 114;

	case joaat("sentinel2"): return 115;

	case joaat("serrano"): return 116;

	case joaat("speedo"): return 117;

	case joaat("speedo2"): return 118;

	case joaat("stanier"): return 119;

	case joaat("stinger"): return 120;

	case joaat("stingergt"): return 121;

	case joaat("stratum"): return 122;

	case joaat("stretch"): return 123;

	case joaat("sultan"):
	case joaat("sultanrs"): return 124;

	case joaat("superd"): return 125;

	case joaat("surano"): return 126;

	case joaat("surge"): return 127;

	case joaat("tailgater"): return 128;

	case joaat("jester"): return 129;

	case joaat("tornado"):
	case joaat("tornado2"):
	case joaat("tornado3"):
	case joaat("tornado4"):
	case joaat("tornado5"): return 133;

	case joaat("vacca"): return 134;

	case joaat("vader"): return 135;

	case joaat("vigero"): return 136;

	case joaat("voltic"): return 137;

	case joaat("voodoo2"):
	case joaat("voodoo"): return 138;

	case joaat("washington"): return 139;

	case joaat("youga"): return 140;

	case joaat("zion"): return 141;

	case joaat("zion2"): return 142;

	case joaat("ztype"): return 143;

	case joaat("massacro"): return 144;

	case joaat("turismor"): return 145;

	case joaat("zentorno"): return 146;

	case joaat("huntley"): return 147;

	case joaat("alpha"): return 148;

	case joaat("cruiser"): return 149;

	case joaat("surfer"): return 150;

	case joaat("faction"):
	case joaat("faction2"): return 151;

	case joaat("chino"):
	case joaat("chino2"): return 152;

	case joaat("moonbeam"):
	case joaat("moonbeam2"): return 153;

	case joaat("btype2"): return 154;

	case joaat("lurcher"): return 155;

	case joaat("btype3"): return 156;

	case joaat("faction3"): return 157;

	case joaat("slamvan"):
	case joaat("slamvan2"):
	case joaat("slamvan3"): return 158;

	case joaat("virgo2"): return 159;

	case joaat("virgo3"): return 160;

	case joaat("bestiagts"): return 161;

	case joaat("brickade"): return 162;

	case joaat("fmj"): return 163;

	case joaat("nimbus"): return 164;

	case joaat("pfister811"): return 165;

	case joaat("prototipo"): return 166;

	case joaat("rumpo3"): return 167;

	case joaat("seven70"): return 168;

	case joaat("tug"): return 169;

	case joaat("volatus"): return 170;

	case joaat("windsor2"): return 171;

	case joaat("xls"): return 172;

	case joaat("xls2"): return 173;

	case joaat("reaper"): return 174;

	case joaat("le7b"): return 175;
	}
	switch (iParam0) {
	case joaat("buffalo3"): return 176;

	case joaat("dominator2"): return 177;

	case joaat("gauntlet2"): return 178;

	case joaat("stalion2"): return 179;

	case joaat("omnis"): return 180;

	case joaat("tropos"): return 181;

	case joaat("brioso"): return 182;

	case joaat("trophytruck"): return 183;

	case joaat("trophytruck2"): return 184;

	case joaat("contender"): return 185;

	case joaat("cliffhanger"): return 186;

	case joaat("bf400"): return 187;

	case joaat("tyrus"): return 188;

	case joaat("rallytruck"): return 189;

	case joaat("tampa2"): return 190;

	case joaat("gargoyle"): return 191;

	case joaat("lynx"): return 192;

	case joaat("sheava"): return 193;

	case joaat("avarus"): return 194;

	case joaat("chimera"): return 195;

	case joaat("daemon2"): return 196;

	case joaat("defiler"): return 197;

	case joaat("esskey"): return 198;

	case joaat("nightblade"): return 199;

	case joaat("ratbike"): return 200;

	case joaat("zombiea"): return 202;

	case joaat("zombieb"): return 203;

	case joaat("shotaro"): return 204;

	case joaat("raptor"): return 205;

	case joaat("hakuchou2"): return 206;

	case joaat("blazer4"): return 207;

	case joaat("sanctus"): return 208;

	case joaat("vortex"): return 209;

	case joaat("manchez"): return 210;

	case joaat("tornado6"): return 211;

	case joaat("youga2"): return 212;

	case joaat("wolfsbane"): return 213;

	case joaat("faggio3"): return 214;

	case joaat("faggio"): return 215;

	case joaat("dune5"): return 216;

	case joaat("phantom2"): return 217;

	case joaat("technical2"): return 218;

	case joaat("blazer5"): return 219;

	case joaat("boxville5"): return 220;

	case joaat("wastelander"): return 221;

	case joaat("ruiner2"): return 222;

	case joaat("voltic2"): return 223;

	case joaat("penetrator"): return 224;

	case joaat("tempesta"): return 225;

	case joaat("italigtb2"): return 226;

	case joaat("nero2"): return 227;

	case joaat("diablous2"): return 228;

	case joaat("fcr2"): return 229;

	case joaat("elegy"): return 230;

	case joaat("comet3"): return 232;

	case joaat("specter2"): return 232;

	case joaat("nero"): return 233;

	case joaat("italigtb"): return 234;

	case joaat("fcr"): return 235;

	case joaat("specter"): return 236;

	case joaat("diablous"): return 237;

	case joaat("infernus2"): return 238;

	case joaat("gp1"): return 239;

	case joaat("ruston"): return 240;

	case joaat("turismo2"): return 241;
	}
	return -1;
}

// Position - 0x35A7D
int func_497(int iParam0) {
	switch (iParam0) {
	case -1392019810: return 0;

	case -1598824969: return 1;

	case 232975537: return 2;

	case 462718996: return 3;

	case -444556307: return 4;

	case -213731471: return 5;

	case -968041086: return 6;

	case -694977009: return 7;

	case 1523877515: return 8;

	case -1518694851: return 9;

	case 685937731: return 10;

	case 1107182854: return 11;

	case 1795528252: return 12;

	case 963431690: return 13;

	case 7683469: return 14;

	case -1485567420: return 15;

	case joaat("HORN_CNOTE_C1"): return 16;

	case 830480310: return 17;

	case -835077886: return 18;

	case 1888648625: return 19;

	case 1708257079: return 20;

	case -1440188433: return 22;

	case -1813427343: return 22;

	case -1940603832: return 23;

	case -665245345: return 24;

	case 1049163197: return 25;

	case -177872008: return 26;

	case -366752524: return 27;

	case -952091823: return 28;

	case -994541731: return 29;

	case 2039769366: return 30;

	case 1197540528: return 31;

	case 321431759: return 32;

	case -453129094: return 33;

	case 1548219456: return 34;

	case 1207356318: return 35;

	case 2061273084: return 36;

	case 1076531893: return 37;

	case 1388066776: return 38;
	}
	return -1;
}

// Position - 0x35CA7
void func_498() {
	func_277(21, 1, 0);
	func_278(21);
	func_499();
}

// Position - 0x35CC1
void func_499() {
	func_156(joaat("player_zero"), 14, 31, 1);
	func_156(joaat("player_zero"), 14, 32, 1);
	func_156(joaat("player_zero"), 14, 33, 1);
	func_156(joaat("player_zero"), 14, 34, 1);
	func_156(joaat("player_zero"), 14, 35, 1);
	func_156(joaat("player_zero"), 14, 36, 1);
	func_156(joaat("player_zero"), 14, 37, 1);
	func_156(joaat("player_zero"), 14, 38, 1);
	func_156(joaat("player_zero"), 14, 39, 1);
	func_156(joaat("player_zero"), 14, 40, 1);
	func_156(joaat("player_zero"), 14, 41, 1);
	func_156(joaat("player_zero"), 14, 42, 1);
	func_156(joaat("player_zero"), 14, 43, 1);
	func_156(joaat("player_zero"), 14, 44, 1);
	func_156(joaat("player_zero"), 9, 9, 1);
	func_156(joaat("player_zero"), 9, 10, 1);
	func_156(joaat("player_zero"), 9, 11, 1);
	func_156(joaat("player_zero"), 9, 12, 1);
	func_156(joaat("player_zero"), 9, 13, 1);
	func_156(joaat("player_zero"), 9, 14, 1);
	func_156(joaat("player_one"), 14, 26, 1);
	func_156(joaat("player_one"), 14, 27, 1);
	func_156(joaat("player_one"), 14, 28, 1);
	func_156(joaat("player_one"), 14, 29, 1);
	func_156(joaat("player_one"), 14, 30, 1);
	func_156(joaat("player_one"), 14, 31, 1);
	func_156(joaat("player_one"), 14, 32, 1);
	func_156(joaat("player_one"), 14, 33, 1);
	func_156(joaat("player_one"), 14, 34, 1);
	func_156(joaat("player_one"), 14, 35, 1);
	func_156(joaat("player_one"), 14, 36, 1);
	func_156(joaat("player_one"), 14, 37, 1);
	func_156(joaat("player_one"), 14, 38, 1);
	func_156(joaat("player_one"), 14, 39, 1);
	func_156(joaat("player_one"), 9, 5, 1);
	func_156(joaat("player_one"), 9, 6, 1);
	func_156(joaat("player_one"), 9, 7, 1);
	func_156(joaat("player_one"), 9, 8, 1);
	func_156(joaat("player_one"), 9, 9, 1);
	func_156(joaat("player_one"), 9, 10, 1);
	func_156(joaat("player_two"), 14, 49, 1);
	func_156(joaat("player_two"), 14, 50, 1);
	func_156(joaat("player_two"), 14, 51, 1);
	func_156(joaat("player_two"), 14, 52, 1);
	func_156(joaat("player_two"), 14, 53, 1);
	func_156(joaat("player_two"), 14, 54, 1);
	func_156(joaat("player_two"), 14, 55, 1);
	func_156(joaat("player_two"), 14, 56, 1);
	func_156(joaat("player_two"), 14, 57, 1);
	func_156(joaat("player_two"), 14, 58, 1);
	func_156(joaat("player_two"), 14, 59, 1);
	func_156(joaat("player_two"), 14, 60, 1);
	func_156(joaat("player_two"), 9, 9, 1);
	func_156(joaat("player_two"), 9, 10, 1);
	func_156(joaat("player_two"), 9, 11, 1);
	func_156(joaat("player_two"), 9, 12, 1);
	func_156(joaat("player_two"), 9, 13, 1);
	func_156(joaat("player_two"), 9, 14, 1);
	func_156(joaat("player_two"), 9, 15, 1);
	func_156(joaat("player_two"), 9, 16, 1);
}

// Position - 0x36011
void func_500() {
	func_277(0, 1, 0);
	func_277(1, 1, 0);
	func_277(2, 1, 0);
	func_277(3, 1, 0);
	func_277(4, 1, 0);
	func_277(5, 1, 0);
	func_277(6, 1, 0);
}

// Position - 0x3604A
void func_501() { func_502(30, 1); }

// Position - 0x36059
void func_502(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 31) {
		if (iParam1) {
			gameplay::set_bit(&Global_101700.f_23954, iVar0);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_23954, iVar0);
		}
	}
	else {
		iVar0 -= 31;
		if (iParam1) {
			gameplay::set_bit(&Global_101700.f_23954.f_1, iVar0);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_23954.f_1, iVar0);
		}
	}
}

// Position - 0x360BE
void func_503() { func_502(13, 1); }

// Position - 0x360CD
void func_504() { func_502(32, 1); }

// Position - 0x360DC
void func_505() {
	func_502(23, 1);
	func_502(15, 1);
	func_502(29, 1);
	func_502(24, 1);
	func_502(17, 1);
	func_502(11, 1);
	func_502(16, 1);
	func_502(18, 1);
	func_502(12, 1);
	func_502(27, 1);
	func_502(19, 1);
	func_502(28, 1);
	func_502(22, 1);
	func_502(21, 1);
	func_502(14, 1);
	func_502(7, 1);
	func_502(3, 1);
	func_502(30, 0);
}

// Position - 0x36160
void func_506() {}

// Position - 0x36168
void func_507() {
	func_239(74, 1);
	func_502(0, 1);
	func_502(1, 1);
	func_502(26, 1);
	func_502(2, 1);
	func_502(4, 1);
	func_502(9, 1);
	func_502(5, 1);
	func_502(6, 1);
	func_502(10, 1);
	func_502(8, 1);
	func_502(20, 1);
	func_502(25, 1);
	func_502(31, 1);
}

// Position - 0x361CC
void func_508() {
	func_230(68, 1, 0);
	func_230(96, 1, 0);
	func_230(97, 1, 0);
	func_230(98, 1, 0);
	func_230(99, 1, 0);
	func_230(100, 1, 0);
	func_230(101, 1, 0);
	func_230(102, 1, 0);
	func_230(103, 1, 0);
	func_485(0, 2, 1);
	func_485(0, 13, 1);
	func_397("AM_H_SWTCH5", 2, 3000, -1, 10000, 7, 0, 0, 0);
	func_276(68);
	func_276(96);
	func_13(-1900821691);
	func_13(-1845612607);
}

// Position - 0x3625F
void func_509() {
	func_397("AM_H_CRCE", 0, 3000, -1, 10000, 7, 0, 0, 0);
	func_485(0, 19, 1);
	func_276(65);
	func_230(65, 1, 0);
	func_272(65);
}

// Position - 0x36297
void func_510() {
	if (func_188()) {
		if (func_260(136)) {
			func_509();
		}
		else {
			func_181(1139718847, 6, 4, 20, 120000, 30000, -1, 39, -1, 0, 1);
		}
		Global_101700.f_24032.f_10 = 1;
	}
}

// Position - 0x362DB
void func_511() {
	func_276(110);
	func_276(111);
	func_230(110, 1, 0);
	func_230(111, 1, 0);
	func_485(0, 18, 1);
	func_272(110);
}

// Position - 0x3630D
void func_512() {
	func_276(107);
	func_230(107, 1, 0);
	func_485(0, 17, 1);
	func_207(113, 1, 0, 1, 0);
	func_272(107);
	func_397("AM_H_FOU", 0, 3000, -1, 10000, 7, 0, 0, 0);
}

// Position - 0x3634F
void func_513() { func_485(0, 14, 1); }

// Position - 0x3635F
void func_514() {
	func_485(0, 12, 1);
	func_239(56, 1);
}

// Position - 0x36376
void func_515() {
	func_485(0, 10, 1);
	func_276(95);
	func_230(95, 1, 0);
	brain::_0x6D6840CEE8845831("launcher_stunts");
	func_272(95);
	func_397("AM_H_STNTP", 1, 3000, -1, 10000, 7, 0, 0, 0);
}

// Position - 0x363B6
void func_516() {
	func_276(94);
	func_230(94, 1, 0);
	func_485(0, 9, 1);
}

// Position - 0x363D4
void func_517() { func_397("AM_H_SRAC", 0, 3000, -1, 10000, 2, 0, 0, 0); }

// Position - 0x363F0
void func_518() {
	func_485(0, 8, 1);
	gameplay::set_bit(&Global_101700.f_23938.f_1, 0);
	gameplay::set_bit(&Global_101700.f_23938.f_1, 1);
	if (system::vdist2(func_175(player::player_id()), func_174(87, 0)) < 43681f) {
		gameplay::set_bit(&Global_101700.f_23938.f_3, 1);
	}
	if (system::vdist2(func_175(player::player_id()), func_174(86, 0)) < 43681f) {
		gameplay::set_bit(&Global_101700.f_23938.f_3, 0);
	}
}

// Position - 0x36470
void func_519() {
	func_485(0, 7, 1);
	Global_101700.f_23935 = 0;
	gameplay::set_bit(&Global_101700.f_23935.f_2, 0);
	gameplay::set_bit(&Global_101700.f_23935.f_2, 1);
	gameplay::set_bit(&Global_101700.f_23935.f_2, 2);
	gameplay::set_bit(&Global_101700.f_23935.f_2, 3);
}

// Position - 0x364BF
void func_520() {
	func_13(1440910066);
	func_13(2063740346);
	func_13(957098437);
	func_519();
	func_397("AM_H_SEAR", 0, 3000, -1, 10000, 7, 0, 0, 0);
}

// Position - 0x364FD
void func_521() {
	func_276(76);
	func_485(0, 5, 1);
	func_230(76, 1, 0);
	func_272(76);
	func_397("AM_H_PLTSC", 0, 3000, -1, 10000, 7, 0, 0, 0);
}

// Position - 0x36534
void func_522() {
	func_276(70);
	func_485(0, 4, 1);
	func_239(69, 1);
	func_230(70, 1, 0);
	func_272(70);
	func_397("AM_H_OFFRR", 0, 3000, -1, 10000, 4, 0, 0, 0);
}

// Position - 0x36572
void func_523() {
	func_230(69, 1, 0);
	func_75(func_57(2), 12, 20, 1, 1);
	func_485(0, 3, 1);
	func_272(69);
	func_276(69);
	func_397("AM_H_HUNT", 0, 3000, -1, 10000, 4, 0, 0, 0);
}

// Position - 0x365B8
void func_524() {
	func_230(68, 1, 0);
	func_485(0, 2, 1);
	func_272(68);
	func_276(68);
	func_397("AM_H_GOLF", 0, 3000, -1, 10000, 7, 0, 0, 0);
}

// Position - 0x365EF
void func_525() {
	func_485(0, 15, 1);
	func_485(0, 16, 1);
	func_272(105);
	func_272(106);
	func_276(105);
	func_276(106);
}

// Position - 0x3661F
void func_526() {
	func_276(67);
	func_230(67, 1, 0);
	func_485(0, 1, 1);
	func_239(73, 1);
	func_272(67);
	func_276(67);
}

// Position - 0x3664F
void func_527() {
	int iVar0;

	func_230(125, 1, 0);
	func_230(126, 1, 0);
	func_230(127, 1, 0);
	func_230(128, 1, 0);
	func_230(129, 1, 0);
	func_230(130, 1, 0);
	func_230(131, 1, 0);
	func_230(132, 1, 0);
	func_230(133, 1, 0);
	func_230(134, 1, 0);
	func_230(135, 1, 0);
	func_230(136, 1, 0);
	func_230(137, 1, 0);
	iVar0 = 125;
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 125 - iVar0)) {
		func_528(125, 1);
	}
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 126 - iVar0)) {
		func_528(126, 1);
	}
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 127 - iVar0)) {
		func_528(127, 1);
	}
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 128 - iVar0)) {
		func_528(128, 1);
	}
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 129 - iVar0)) {
		func_528(129, 1);
	}
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 130 - iVar0)) {
		func_528(130, 1);
	}
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 131 - iVar0)) {
		func_528(131, 1);
	}
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 132 - iVar0)) {
		func_528(132, 1);
	}
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 133 - iVar0)) {
		func_528(133, 1);
	}
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 134 - iVar0)) {
		func_528(134, 1);
	}
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 135 - iVar0)) {
		func_528(135, 1);
	}
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 136 - iVar0)) {
		func_528(136, 1);
	}
	if (gameplay::is_bit_set(Global_101700.f_17926.f_1, 137 - iVar0)) {
		func_528(137, 1);
	}
	func_485(0, 0, 1);
	func_272(125);
	func_276(125);
	func_397("AM_H_BASEJ", 0, 3000, -1, 10000, 7, 0, 0, 0);
	func_181(-1783809705, 1, 2, 52, 200000, 10000, 64, 170, -1, 0, 1);
}

// Position - 0x36871
void func_528(int iParam0, int iParam1) {
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

// Position - 0x368FA
void func_529() {
	func_276(112);
	func_276(113);
	func_276(114);
	func_230(112, 1, 0);
	func_230(113, 1, 0);
	func_230(114, 1, 0);
	func_239(53, 1);
}

// Position - 0x36933
bool func_530(int iParam0) { return func_531(iParam0, Global_35781); }

// Position - 0x36944
int func_531(int iParam0, int iParam1) {
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
