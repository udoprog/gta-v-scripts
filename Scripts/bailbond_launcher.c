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
struct<7> Local_43 = {
	0, 0, 0, 0, 0, 0, -1
};
var uLocal_50 = 0;
int iLocal_51 = 0;
int iLocal_52 = 0;
var *uLocal_53 = NULL;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 0;
var uLocal_57 = 0;
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
var uLocal_84 = 0;
var uLocal_85 = 0;
var uLocal_86 = 0;
var uLocal_87 = 0;
var uLocal_88 = 0;
var uLocal_89 = 0;
var uLocal_90 = 0;
var uLocal_91 = 0;
var uLocal_92 = 0;
var uLocal_93 = 0;
var uLocal_94 = 0;
var uLocal_95 = 0;
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
var uLocal_107 = 0;
var uLocal_108 = 0;
var uLocal_109 = 0;
var uLocal_110 = 0;
var uLocal_111 = 0;
var uLocal_112 = 0;
var uLocal_113 = 0;
var uLocal_114 = 0;
var uLocal_115 = 0;
var uLocal_116 = 0;
var uLocal_117 = 0;
var uLocal_118 = 0;
var uLocal_119 = 0;
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
int *iLocal_218 = NULL;
int iLocal_219 = 0;
int iLocal_220 = 0;
int iLocal_221 = 0;
bool bLocal_222 = 0;
int iLocal_223 = 0;
char *sLocal_224 = NULL;
int iLocal_225 = 0;
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
	sLocal_224 = "";
	if (script::_get_number_of_instances_of_script_with_name_hash(script::get_hash_of_this_script_name()) > 1) {
		script::terminate_this_thread();
	}
	func_232(22);
	if (player::has_force_cleanup_occurred(18)) {
		func_229();
	}
	func_226();
	while (true) {
		func_223();
		switch (Global_101700.f_23945.f_2) {
		case 0:
			if (func_222()) {
				if (!func_220()) {
					if (func_200(4, 62, 2, -1, 0)) {
						if (func_197(Local_43.f_4, Local_43.f_5)) {
							if (Local_43.f_5) {
								func_183(2, 94, 5000, 0, 0);
							}
							iLocal_218 = func_182();
							func_174(&iLocal_218, 0, 0, 0, 10, 0, 0);
							Global_101700.f_23945.f_3 = iLocal_218;
							gameplay::clear_bit(&Global_101700.f_23945, 9);
							Global_101700.f_23945.f_2 = 1;
						}
					}
					else {
						system::wait(2000);
					}
				}
				else {
					system::wait(2000);
				}
			}
			else {
				system::wait(2000);
			}
			break;

		case 1:
			if (func_173() == 2) {
				func_158(&Local_43, &uLocal_53);
				func_150(Local_43.f_4);
				if (!gameplay::is_bit_set(Global_101700.f_23945, 8)) {
					if (!func_220()) {
						gameplay::set_bit(&Global_101700.f_23945, 8);
					}
					else {
						system::wait(2000);
					}
				}
				else if (func_220()) {
					if (func_140(0)) {
						if (func_134(&Local_43.f_6)) {
							func_132(Local_43.f_4);
							if (!func_131()) {
								func_76(script::get_this_script_name(), 1);
							}
							Global_101700.f_23945.f_2 = 2;
						}
					}
					else {
						if (gameplay::is_bit_set(Global_101700.f_23945, 8)) {
							gameplay::clear_bit(&Global_101700.f_23945, 8);
						}
						system::wait(2000);
					}
				}
				else {
					func_74(Local_43.f_4);
					system::wait(2000);
				}
			}
			else {
				if (gameplay::is_bit_set(Global_101700.f_23945, 8)) {
					gameplay::clear_bit(&Global_101700.f_23945, 8);
				}
				system::wait(4000);
			}
			break;

		case 2:
			if (!script::is_thread_active(iLocal_219)) {
				func_28(Global_100411);
			}
			break;

		case 3:
			if (func_17(Global_101700.f_23945.f_3)) {
				Global_101700.f_23945.f_2 = 1;
			}
			break;

		case 4:
			if (iLocal_225 == 0) {
				if (func_17(Global_101700.f_23945.f_3)) {
					Global_101700.f_23945.f_2 = 0;
				}
			}
			break;

		case 5:
			if (iLocal_225 == 0) {
				if (func_17(Global_101700.f_23945.f_3)) {
					if (func_222()) {
						if (func_200(4, 62, 2, -1, 0)) {
							if (func_4()) {
								func_183(2, 94, 5000, 0, 0);
								func_3(22);
								func_1();
								func_229();
							}
						}
						else {
							system::wait(2000);
						}
					}
					else {
						system::wait(2000);
					}
				}
				else {
					system::wait(2000);
				}
			}
			break;

		case 6:
			if (iLocal_225 == 0) {
				func_3(22);
				func_229();
			}
			break;
		}
		system::wait(0);
	}
}

// Position - 0x33B
int func_1() {
	if (func_2(0)) {
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

// Position - 0x386
bool func_2(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x3B1
int func_3(int iParam0) {
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

// Position - 0x40B
bool func_4() {
	int iVar0;
	char *sVar1;
	char *sVar2;

	iVar0 = 79;
	sVar1 = "BBONDS_DMAIL_K5";
	sVar2 = "BBONDS_DMAIL_C5";
	if (func_14(26, iVar0, 1)) {
		func_13(26, sVar1, 0);
		func_12(26, sVar2);
		func_5(26);
		return true;
	}
	return false;
}

// Position - 0x448
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

// Position - 0x7B5
void func_6(int iParam0, int iParam1, int iParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6,
			char *sParam7, char *sParam8, char *sParam9, char *sParam10, char *sParam11, char *sParam12,
			char *sParam13) {
	int iVar0;
	bool bVar1;
	char cVar2[64];

	if (cutscene::is_cutscene_playing()) {
		return;
	}
	iVar0 = func_173();
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

// Position - 0x993
void func_7(var uParam0) {
	Global_36920[Global_36924] = uParam0;
	Global_16803 = 1;
	Global_16802 = uParam0;
	Global_36924++;
	if (Global_36924 == 3) {
		Global_36924 = 0;
	}
}

// Position - 0x9C1
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

// Position - 0xD2A
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

// Position - 0x117D
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

//Position - 0x11AE
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

// Position - 0x1212
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

// Position - 0x12C7
void func_13(int iParam0, char *sParam1, int iParam2) {
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

// Position - 0x13E4
bool func_14(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_16(iParam0, 1);
	if (iVar0 == -1) {
		return false;
	}
	if (Global_46225[iVar0 /*203*/].f_9 == 4) {
		return false;
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
			return false;
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
			return false;
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
			func_15(Global_46225[iVar0 /*203*/].f_4[iVar1], Global_46225[iVar0 /*203*/].f_1, 1, iParam2, 0);
		}
		iVar1++;
	}
	return true;
}

// Position - 0x15E0
void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) {
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

// Position - 0x19B4
int func_16(int iParam0, int iParam1) {
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

// Position - 0x1BCC
bool func_17(int iParam0) { return func_18(func_182(), iParam0); }

// Position - 0x1BDE
int func_18(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_26(iParam1) || !func_26(iParam0)) {
		return 1;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_22(iParam0);
	iVar1 = func_22(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_21(iParam0);
	iVar1 = func_21(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_20(iParam0);
	iVar1 = func_20(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_19(iParam0);
	iVar1 = func_19(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	return 0;
}

// Position - 0x1CEA
int func_19(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x1CFD
int func_20(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x1D10
int func_21(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x1D23
int func_22(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x1D35
int func_23(int iParam0) { return iParam0 & 15; }

// Position - 0x1D42
var func_24(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_25(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x1D67
int func_25(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x1D7E
int func_26(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return 0;
	}
	iVar0 = func_19(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return 0;
	}
	iVar1 = func_20(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return 0;
	}
	iVar2 = func_21(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return 0;
	}
	iVar3 = func_24(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return 0;
	}
	iVar4 = func_23(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return 0;
	}
	iVar5 = func_22(iParam0);
	if (iVar5 < 1 || iVar5 > func_27(iVar4, iVar3)) {
		return 0;
	}
	return 1;
}

// Position - 0x1E5A
int func_27(int iParam0, int iParam1) {
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

// Position - 0x1EFC
void func_28(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 1:
	case 2:
		gameplay::set_bit(&Global_101700.f_23945, func_73(Local_43.f_4));
		if (iParam0 == 1) {
			func_72(0);
			iVar0 = 8;
			gameplay::set_bit(&Global_101700.f_23945, func_71(Local_43.f_4));
		}
		else {
			func_72(1);
			iVar0 = 4;
			gameplay::clear_bit(&Global_101700.f_23945, func_71(Local_43.f_4));
			func_183(2, 94, 10000, 0, 0);
			if (Global_86001 == 0) {
				func_57(30, 1);
			}
		}
		iLocal_225 = 1;
		sLocal_224 = func_56(Local_43.f_4);
		func_38();
		func_37(&Local_43.f_6);
		if (func_36()) {
			if (gameplay::is_bit_set(Global_101700.f_23945, func_71(Local_43.f_4))) {
				iLocal_218 = func_182();
				func_174(&iLocal_218, 0, 0, iVar0, 0, 0, 0);
				Global_101700.f_23945.f_3 = iLocal_218;
				Global_101700.f_23945.f_2 = 5;
				func_1();
			}
			else {
				Global_101700.f_23945.f_2 = 6;
				func_1();
			}
		}
		else {
			Global_101700.f_23945.f_1 = func_35();
			gameplay::clear_bit(&Global_101700.f_23945, 8);
			func_30();
			iLocal_218 = func_182();
			func_174(&iLocal_218, 0, 0, iVar0, 0, 0, 0);
			Global_101700.f_23945.f_3 = iLocal_218;
			Global_101700.f_23945.f_2 = 4;
			func_1();
		}
		if (iParam0 != 1) {
			func_29();
		}
		break;

	case 3:
		if (Global_91491 == 10) {
			func_132(Local_43.f_4);
		}
		else if (Global_91491 == 13) {
			func_38();
			func_37(&Local_43.f_6);
			gameplay::clear_bit(&Global_101700.f_23945, 8);
			iLocal_218 = func_182();
			iVar0 = 8;
			func_174(&iLocal_218, 0, 0, iVar0, 0, 0, 0);
			Global_101700.f_23945.f_3 = iLocal_218;
			Global_101700.f_23945.f_2 = 3;
			func_38();
			func_1();
		}
		break;

	case 0:
		func_38();
		func_37(&Local_43.f_6);
		gameplay::clear_bit(&Global_101700.f_23945, 8);
		Global_101700.f_23945.f_2 = 1;
		break;
	}
}

// Position - 0x20F6
void func_29() {
	vector3 vVar0[24];

	StringCopy(&cVar0, "Maude_PostBailBond", 24);
	gameplay::terminate_all_scripts_with_this_name(&cVar0);
	script::request_script(&cVar0);
	while (!script::has_script_loaded(&cVar0)) {
		script::request_script(&cVar0);
		system::wait(0);
	}
	system::start_new_script(&cVar0, 1424);
	script::set_script_as_no_longer_needed(&cVar0);
}

// Position - 0x213A
void func_30() {
	int iVar0;

	iLocal_219 = 0;
	Local_43.f_4 = Global_101700.f_23945.f_1;
	Local_43 = {func_34(Local_43.f_4)};
	Local_43.f_3 = func_33(Local_43.f_4);
	Local_43.f_6 = -1;
	iVar0 = Global_101700.f_23945.f_1;
	iVar0--;
	if (iVar0 >= 0 && gameplay::is_bit_set(Global_101700.f_23945, func_71(iVar0))) {
		Local_43.f_5 = 1;
	}
	else {
		Local_43.f_5 = 0;
	}
	Local_43.f_7 = func_31(26, func_32(Local_43.f_4), 0);
}

// Position - 0x21BD
bool func_31(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_11(iParam0);
	if (iVar0 == -1) {
		return false;
	}
	iVar1 = Global_36925[iParam1 /*12*/].f_3;
	if (iVar1 >= 3) {
		return false;
	}
	iVar2 = -1;
	iVar3 = 0;
	iVar4 = iParam2;
	iVar3 = 0;
	while (iVar3 < Global_46225[iVar0 /*203*/].f_9) {
		if (Global_46225[iVar0 /*203*/].f_10[iVar3 /*48*/] == iParam1) {
			if (iVar4 == 0) {
				iVar2 = iVar3;
			}
			else {
				iVar4--;
			}
		}
		iVar3++;
	}
	if (iVar2 == -1) {
		return false;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 16) {
		if (Global_45863[iVar1 /*120*/].f_86[iVar3] &&
			Global_45863[iVar1 /*120*/].f_18[iVar3] == Global_46225[iVar0 /*203*/].f_1 &&
			Global_45863[iVar1 /*120*/].f_1[iVar3] == iVar2) {
			return Global_45863[iVar1 /*120*/].f_69[iVar3];
		}
		iVar3++;
	}
	return false;
}

// Position - 0x22A7
int func_32(int iParam0) {
	switch (iParam0) {
	case 0: return 75;

	case 1: return 76;

	case 2: return 77;

	case 3: return 78;

	default:
	}
	return 79;
}

// Position - 0x22E4
float func_33(int iParam0) {
	switch (iParam0) {
	case 0: return 150f;

	case 1: return 150f;

	case 2: return 150f;

	case 3: return 150f;

	default:
	}
	return 150f;
}

// Position - 0x2330
Vector3 func_34(int iParam0) {
	switch (iParam0) {
	case 0: return 2956.349f, 2795.955f, 39.9217f;

	case 1: return 162.5572f, 2289.158f, 93.1489f;

	case 2: return 515.5f, 5494.33f, 766.77f;

	case 3: return 1427.972f, 6351.139f, 22.9853f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x23A2
int func_35() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4 - 1) {
		if (!gameplay::is_bit_set(Global_101700.f_23945, iVar0)) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x23D5
bool func_36() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4 - 1) {
		if (!gameplay::is_bit_set(Global_101700.f_23945, iVar0)) {
			return false;
		}
		iVar0++;
	}
	return true;
}

// Position - 0x2407
void func_37(int *iParam0) {
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

// Position - 0x2444
void func_38() {
	func_55();
	func_47();
	func_43();
	func_42();
	func_41();
	func_40();
	Global_91528 = 0;
	Global_85999 = -1;
	gameplay::clear_bit(&Global_91491.f_20, 17);
	Global_91526 = 0;
	gameplay::_disable_automatic_respawn(0);
	gameplay::ignore_next_restart(0);
	gameplay::set_fade_in_after_death_arrest(1);
	gameplay::set_fade_out_after_arrest(1);
	gameplay::set_fade_out_after_death(1);
	func_39(0);
}

// Position - 0x249D
void func_39(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_91491.f_20, 13);
	}
	else {
		gameplay::clear_bit(&Global_91491.f_20, 13);
	}
}

// Position - 0x24C6
void func_40() {
	Global_69942 = {0f, 0f, 0f};
	Global_69945 = 0f;
	Global_91491.f_21 = 145;
}

// Position - 0x24E4
void func_41() {
	StringCopy(&Global_69934, "", 16);
	StringCopy(&Global_69938, "", 16);
}

// Position - 0x24FC
void func_42() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6) {
		Global_91491.f_22[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x2521
void func_43() {
	Global_91491 = 13;
	Global_91491.f_1 = -1;
	Global_91491.f_2 = 0;
	Global_91491.f_30 = 0f;
	gameplay::clear_bit(&Global_91491.f_20, 25);
	Global_91525 = 0;
	func_46(0);
	func_45();
	func_44();
	Global_91491.f_18 = -1;
	Global_91491.f_19 = -1;
}

// Position - 0x2570
void func_44() {
	gameplay::clear_bit(&Global_91491.f_20, 22);
	gameplay::clear_bit(&Global_91491.f_20, 8);
}

// Position - 0x2590
void func_45() {
	if (Global_91491.f_16 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_91491.f_16);
		Global_91491.f_16 = 0;
	}
	if (Global_91491.f_17 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_91491.f_17);
		Global_91491.f_17 = 0;
	}
}

// Position - 0x25CE
void func_46(int iParam0) {
	if (iParam0 == 1) {
		Global_36330 = 1;
	}
	else {
		Global_36330 = 0;
	}
}

// Position - 0x25E7
void func_47() { func_48(&Global_96040); }

// Position - 0x25F7
void func_48(var *uParam0) {
	int iVar0;
	int iVar1;

	*uParam0 = 145;
	func_54(&uParam0->f_1);
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
		func_53(&uParam0->f_25[0 /*295*/][iVar1 /*98*/]);
		func_53(&uParam0->f_25[1 /*295*/][iVar1 /*98*/]);
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
	func_52(&uParam0->f_2305);
	func_50(&uParam0->f_2311);
	func_49(&uParam0->f_2401);
}

// Position - 0x2B3F
void func_49(var *uParam0) {
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

// Position - 0x2B5A
void func_50(var *uParam0) {
	func_51(&uParam0->f_12);
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = {0f, 0f, 0f};
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

// Position - 0x2B89
void func_51(var *uParam0) {
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

// Position - 0x2C38
void func_52(var *uParam0) {
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

// Position - 0x2C56
void func_53(var *uParam0) {
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

// Position - 0x2D35
void func_54(int *iParam0) { *iParam0 = -15; }

// Position - 0x2D43
void func_55() {
	StringCopy(&Global_93627, "", 32);
	func_48(&Global_93635);
}

// Position - 0x2D5B
char *func_56(int iParam0) {
	switch (iParam0) {
	case 0: return "BBS_BJ1";

	case 1: return "BBS_BJ2";

	case 2: return "BBS_BJ3";

	case 3: return "BBS_BJ4";

	default: break;
	}
	return "";
}

// Position - 0x2DAF
int func_57(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_58(iParam0, iParam1);
}

// Position - 0x2DCA
int func_58(int iParam0, int iParam1) {
	if (func_70(14) && !func_69(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_68(&Global_2595550)) {
		if (func_66(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_59(&Global_2595550, iParam0)) {
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

// Position - 0x2E67
bool func_59(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_70(14) && !func_69(iParam1)) {
		return false;
	}
	if (func_66(uParam0, iParam1)) {
		return false;
	}
	if (func_65(uParam0) < 0f) {
		func_64(uParam0, 0);
	}
	func_62(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_60(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x2F18
int func_60(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_70(14) && !func_69(iParam1)) {
		return 0;
	}
	if (func_66(uParam0, iParam1)) {
		return 0;
	}
	if (func_65(uParam0) < 0f) {
		func_64(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_61(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x2F93
bool func_61(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x2FA4
void func_62(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_63(uParam0, iVar0);
		iVar0++;
	}
	func_64(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x2FD8
void func_63(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x2FE8
void func_64(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x3005
float func_65(var *uParam0) { return uParam0->f_72; }

// Position - 0x3011
bool func_66(var *uParam0, int iParam1) { return func_67(uParam0, iParam1) != -1; }

// Position - 0x3023
int func_67(var *uParam0, int iParam1) {
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

// Position - 0x3050
bool func_68(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x305E
int func_69(int iParam0) {
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

// Position - 0x30AE
bool func_70(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x30BC
int func_71(int iParam0) {
	switch (iParam0) {
	case 0: return 4;

	case 1: return 5;

	case 2: return 6;

	case 3: return 7;

	default:
	}
	return 4;
}

// Position - 0x30F4
void func_72(int iParam0) {
	iLocal_225 = 1;
	bLocal_222 = iParam0;
}

// Position - 0x3103
int func_73(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	default:
	}
	return 0;
}

// Position - 0x313B
void func_74(int iParam0) {
	int iVar0;

	if (!gameplay::is_bit_set(Global_101700.f_23945, 9)) {
		if (func_17(Global_101700.f_23945.f_3)) {
			if (func_222()) {
				if (func_200(4, 62, 2, -1, 0)) {
					iVar0 = func_75(iParam0);
					if (func_14(26, iVar0, 0)) {
						gameplay::set_bit(&Global_101700.f_23945, 9);
					}
				}
			}
		}
	}
}

// Position - 0x3199
int func_75(int iParam0) {
	switch (iParam0) {
	case 0: return 80;

	case 1: return 81;

	case 2: return 82;

	case 3: return 83;

	default:
	}
	return 80;
}

// Position - 0x31D6
void func_76(char[4] cParam0, int iParam1) {
	gameplay::clear_bit(&Global_91491.f_20, 17);
	func_77(cParam0, iParam1, 0);
}

// Position - 0x31F3
void func_77(char[4] cParam0, int iParam1, int iParam2) {
	if (Global_91491 != 10 && Global_91491 != 9) {
		StringCopy(&Global_93627, cParam0, 32);
		func_79(&Global_93635, cParam0, 0, "Start", iParam1, iParam2);
		func_78();
		Global_86002 = 0;
	}
}

// Position - 0x3238
void func_78() {
	int iVar0;
	int iVar1;

	Global_96040 = Global_93635;
	Global_96040.f_1 = Global_93635.f_1;
	Global_96040.f_6 = Global_93635.f_6;
	Global_96040.f_7 = Global_93635.f_7;
	Global_96040.f_8 = Global_93635.f_8;
	Global_96040.f_2 = Global_93635.f_2;
	Global_96040.f_3 = Global_93635.f_3;
	Global_96040.f_4 = Global_93635.f_4;
	Global_96040.f_5 = Global_93635.f_5;
	iVar1 = 0;
	while (iVar1 < 3) {
		Global_96040.f_9[iVar1] = Global_93635.f_9[iVar1];
		Global_96040.f_13[iVar1] = Global_93635.f_13[iVar1];
		Global_96040.f_17[iVar1] = Global_93635.f_17[iVar1];
		Global_96040.f_21[iVar1] = Global_93635.f_21[iVar1];
		Global_96040.f_25[0 /*295*/][iVar1 /*98*/] = {Global_93635.f_25[0 /*295*/][iVar1 /*98*/]};
		Global_96040.f_25[1 /*295*/][iVar1 /*98*/] = {Global_93635.f_25[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 < 12) {
			Global_96040.f_616[iVar1 /*65*/][iVar0] = Global_93635.f_616[iVar1 /*65*/][iVar0];
			Global_96040.f_616[iVar1 /*65*/].f_13[iVar0] = Global_93635.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_96040.f_616[iVar1 /*65*/].f_26[iVar0] = Global_93635.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_96040.f_616[iVar1 /*65*/].f_59 = Global_93635.f_616[iVar1 /*65*/].f_59;
		Global_96040.f_616[iVar1 /*65*/].f_60 = Global_93635.f_616[iVar1 /*65*/].f_60;
		Global_96040.f_616[iVar1 /*65*/].f_61 = Global_93635.f_616[iVar1 /*65*/].f_61;
		Global_96040.f_616[iVar1 /*65*/].f_62 = Global_93635.f_616[iVar1 /*65*/].f_62;
		Global_96040.f_616[iVar1 /*65*/].f_63 = Global_93635.f_616[iVar1 /*65*/].f_63;
		Global_96040.f_616[iVar1 /*65*/].f_64 = Global_93635.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9) {
			Global_96040.f_616[iVar1 /*65*/].f_39[iVar0] = Global_93635.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_96040.f_616[iVar1 /*65*/].f_49[iVar0] = Global_93635.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			Global_96040.f_812[iVar1 /*284*/][iVar0 /*3*/] = {Global_93635.f_812[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			Global_96040.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = {
				Global_93635.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4) {
			Global_96040.f_1665[iVar1 /*32*/][iVar0] = Global_93635.f_1665[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10) {
			Global_96040.f_1665[iVar1 /*32*/].f_5[iVar0] = Global_93635.f_1665[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15) {
			Global_96040.f_1665[iVar1 /*32*/].f_16[iVar0] = Global_93635.f_1665[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_96040.f_1762[iVar1] = Global_93635.f_1762[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3) {
			Global_96040.f_2259[iVar1 /*15*/][iVar0] = Global_93635.f_2259[iVar1 /*15*/][iVar0];
			Global_96040.f_2259[iVar1 /*15*/].f_5[iVar0] = Global_93635.f_2259[iVar1 /*15*/].f_5[iVar0];
			Global_96040.f_2259[iVar1 /*15*/].f_10[iVar0] = Global_93635.f_2259[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			Global_96040.f_1766[iVar1 /*164*/][iVar0] = Global_93635.f_1766[iVar1 /*164*/][iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_4[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_4[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_8[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_8[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_12[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_12[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_16[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_16[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_20[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_20[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_24[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_24[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_28[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_28[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_32[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_32[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_36[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_36[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_40[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_40[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_44[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_44[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_48[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_48[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_52[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_52[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_56[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_56[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_60[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_60[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_64[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_64[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_68[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_68[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_72[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_72[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_76[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_76[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_80[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_80[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_84[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_84[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_88[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_88[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_92[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_92[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_96[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_96[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_100[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_100[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_104[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_104[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_108[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_108[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_112[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_112[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_116[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_116[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_120[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_120[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_124[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_124[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_128[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_128[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_132[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_132[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_136[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_136[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_140[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_140[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_144[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_144[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_148[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_148[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_152[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_152[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_156[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_156[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_160[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_96040.f_2305 = {Global_93635.f_2305};
	Global_96040.f_2305.f_3 = Global_93635.f_2305.f_3;
	Global_96040.f_2311 = {Global_93635.f_2311};
	Global_96040.f_2311.f_3 = {Global_93635.f_2311.f_3};
	Global_96040.f_2311.f_6 = Global_93635.f_2311.f_6;
	Global_96040.f_2311.f_8 = Global_96040.f_2311.f_8;
	Global_96040.f_2311.f_7 = Global_93635.f_2311.f_7;
	Global_96040.f_2311.f_9 = Global_93635.f_2311.f_9;
	Global_96040.f_2311.f_11 = Global_93635.f_2311.f_11;
	Global_96040.f_2311.f_10 = Global_93635.f_2311.f_10;
	Global_96040.f_2311.f_12 = Global_93635.f_2311.f_12;
	Global_96040.f_2311.f_12.f_1 = {Global_93635.f_2311.f_12.f_1};
	Global_96040.f_2311.f_12.f_5 = Global_93635.f_2311.f_12.f_5;
	Global_96040.f_2311.f_12.f_6 = Global_93635.f_2311.f_12.f_6;
	Global_96040.f_2311.f_12.f_7 = Global_93635.f_2311.f_12.f_7;
	Global_96040.f_2311.f_12.f_8 = Global_93635.f_2311.f_12.f_8;
	Global_96040.f_2311.f_12.f_9 = {Global_93635.f_2311.f_12.f_9};
	Global_96040.f_2311.f_12.f_59 = {Global_93635.f_2311.f_12.f_59};
	Global_96040.f_2311.f_12.f_62 = Global_93635.f_2311.f_12.f_62;
	Global_96040.f_2311.f_12.f_63 = Global_93635.f_2311.f_12.f_63;
	Global_96040.f_2311.f_12.f_64 = Global_93635.f_2311.f_12.f_64;
	Global_96040.f_2311.f_12.f_65 = Global_93635.f_2311.f_12.f_65;
	Global_96040.f_2311.f_12.f_77 = Global_93635.f_2311.f_12.f_77;
	Global_96040.f_2311.f_12.f_66 = Global_93635.f_2311.f_12.f_66;
	Global_96040.f_2311.f_12.f_67 = Global_93635.f_2311.f_12.f_67;
	Global_96040.f_2311.f_12.f_68 = Global_93635.f_2311.f_12.f_68;
	Global_96040.f_2311.f_12.f_69 = Global_93635.f_2311.f_12.f_69;
	Global_96040.f_2311.f_12.f_71 = Global_93635.f_2311.f_12.f_71;
	Global_96040.f_2311.f_12.f_72 = Global_93635.f_2311.f_12.f_72;
	Global_96040.f_2311.f_12.f_73 = Global_93635.f_2311.f_12.f_73;
	Global_96040.f_2311.f_12.f_74 = Global_93635.f_2311.f_12.f_74;
	Global_96040.f_2311.f_12.f_75 = Global_93635.f_2311.f_12.f_75;
	Global_96040.f_2311.f_12.f_76 = Global_93635.f_2311.f_12.f_76;
	Global_96040.f_2401 = Global_93635.f_2401;
	Global_96040.f_2401.f_1 = Global_93635.f_2401.f_1;
	Global_96040.f_2401.f_2 = Global_93635.f_2401.f_2;
	Global_96040.f_2401.f_3 = Global_93635.f_2401.f_3;
}

// Position - 0x3ECC
void func_79(var *uParam0, char *sParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;

	*uParam0 = func_173();
	uParam0->f_1 = func_182();
	gameplay::_get_weather_type_transition(&uParam0->f_6, &uParam0->f_7, &uParam0->f_8);
	if (!ped::is_ped_injured(player::player_ped_id())) {
		func_115(&uParam0->f_2305, 0);
		func_114(player::player_ped_id());
		func_108(player::player_ped_id(), 0);
		weapon::get_current_ped_weapon(player::player_ped_id(), &uParam0->f_2, 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object")) {
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		uParam0->f_17[iVar1] = Global_101700.f_2095.f_539.f_294[iVar1];
		if (iVar1 == func_106()) {
			func_99(player::player_ped_id(), &uParam0->f_616[iVar1 /*65*/], 1);
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
		func_81(&uParam0->f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_80(&uParam0->f_2401);
	sParam3 = sParam3;
	iParam2 = iParam2;
}

// Position - 0x4D58
int func_80(var *uParam0) {
	*uParam0 = Global_87673;
	uParam0->f_1 = Global_87674;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

// Position - 0x4D7A
void func_81(var *uParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (iParam2 == 0) {
		iParam2 = player::player_ped_id();
	}
	if (entity::does_entity_exist(iParam2)) {
		uParam1->f_5 = func_97(iParam2);
	}
	if (func_94(iParam2, &iVar0, iParam3, iParam5)) {
		func_82(uParam0, uParam1, iVar0, iParam4);
	}
	else if (entity::does_entity_exist(iVar0)) {
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (vehicle::is_vehicle_model(iVar0, joaat("skylift")) &&
				ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
				func_82(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

// Position - 0x4E02
int func_82(var *uParam0, var *uParam1, int iParam2, int iParam3) {
	if (vehicle::is_vehicle_driveable(iParam2, 0)) {
		func_84(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_83(iParam2)) {
			uParam1->f_3 = 1;
		}
		else {
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

// Position - 0x4E42
bool func_83(int iParam0) {
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

// Position - 0x4E70
void func_84(var *uParam0, int iParam1, int iParam2) {
	func_91(iParam1, &uParam0->f_12);
	uParam0->f_7 = func_87(iParam1, 145, 0);
	uParam0->f_11 = func_86(iParam1);
	if (!uParam0->f_7) {
		if (!uParam0->f_10) {
			uParam0->f_10 = func_85(iParam1);
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

// Position - 0x4F4C
int func_85(int iParam0) {
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

// Position - 0x4F8E
int func_86(int iParam0) {
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

// Position - 0x4FF1
int func_87(int iParam0, int iParam1, int iParam2) {
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
					if (iParam2 == 0 || entity::get_entity_model(iParam0) == func_88(iParam1, iParam2)) {
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x507F
int func_88(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_90(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_89(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x50C1
void func_89(int iParam0, var *uParam1, int iParam2) {
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

// Position - 0x531D
bool func_90(int iParam0) { return iParam0 < 3; }

// Position - 0x5329
void func_91(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_51(uParam1);
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
		func_93(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_92(iVar0 + 1));
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

// Position - 0x55D5
int func_92(int iParam0) {
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

// Position - 0x5685
int func_93(int iParam0, var *uParam1, var *uParam2) {
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

// Position - 0x575F
bool func_94(int iParam0, var *uParam1, int iParam2, int iParam3) {
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
						if (func_95(*uParam1, func_173(), 1)) {
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

// Position - 0x588E
bool func_95(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_96(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x58FF
bool func_96(int iParam0, int iParam1, char *sParam2, int *iParam3) {
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

// Position - 0x59D6
int func_97(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_98(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x5A13
int func_98(int iParam0) {
	if (func_90(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x5A3D
void func_99(int iParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_97(iParam0);
		iVar1 = 0;
		while (iVar1 < 12) {
			func_105(iParam0, iVar1, &uParam1->f_13[iVar1], &(*uParam1)[iVar1], &uParam1->f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9) {
			func_104(iParam0, iVar1, &uParam1->f_39[iVar1], &uParam1->f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_90(iVar0)) {
			uParam1->f_59 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_64;
		}
		else if (network::network_is_game_in_progress() &&
				 entity::get_entity_model(iParam0) == entity::get_entity_model(player::player_ped_id())) {
			if (func_103(161, -1)) {
				uParam1->f_59 = func_100(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_100(747, Global_69521, 0);
			}
			uParam1->f_60 = func_100(748, Global_69521, 0);
			uParam1->f_61 = func_100(749, Global_69521, 0);
		}
		if (network::network_is_game_in_progress() && iParam0 == player::player_ped_id()) {
			if (func_103(161, -1)) {
				uParam1->f_59 = func_100(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_100(747, Global_69521, 0);
			}
		}
	}
}

// Position - 0x5BE7
int func_100(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x5C19
int func_101(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_102();
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

// Position - 0x5C4D
var func_102() { return Global_1312735; }

// Position - 0x5C59
bool func_103(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_101(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return false;
}

// Position - 0x5C85
void func_104(int iParam0, int iParam1, int *iParam2, int *iParam3, int iParam4, int iParam5) {
	int iVar0;

	iVar0 = func_97(iParam0);
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

// Position - 0x61CD
void func_105(int iParam0, int iParam1, int *iParam2, int *iParam3, var *uParam4, int iParam5, int iParam6) {
	int iVar0;

	iVar0 = func_97(iParam0);
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

// Position - 0x640E
int func_106() {
	func_107();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x6427
void func_107() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_98(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_97(player::player_ped_id());
			if (func_90(iVar0) && (!func_70(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_90(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x6524
void func_108(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_97(iParam0);
	if (func_90(iVar0) && !ped::is_ped_injured(iParam0)) {
		if (iParam0 == player::player_ped_id()) {
			func_109(iParam0, &Global_101700.f_2095.f_539.f_298[iVar0 /*284*/]);
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

// Position - 0x6617
void func_109(int iParam0, var *uParam1) {
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
			iVar3 = func_113(iVar0);
			if (iVar3 != 0) {
				vVar4.x = weapon::get_ped_weapontype_in_slot(iParam0, func_113(iVar0));
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
					iVar2 = func_111(vVar4.x, iVar1);
					while (iVar2 != 0) {
						if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, iVar2)) {
							gameplay::set_bit(&vVar4.f_2, iVar1);
						}
						iVar1++;
						iVar2 = func_111(vVar4.x, iVar1);
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
			if (dlc1::get_dlc_weapon_data(iVar7, &Var9) && !func_110(Var9.f_1) && iVar70 < 50) {
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

// Position - 0x687B
int func_110(int iParam0) {
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

// Position - 0x69E9
int func_111(int iParam0, int iParam1) {
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
			iVar1 = func_112(iParam0, &uVar2);
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

// Position - 0x74D5
int func_112(int iParam0, var *uParam1) {
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

// Position - 0x7510
int func_113(int iParam0) {
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

// Position - 0x7784
void func_114(int iParam0) {
	int iVar0;

	iVar0 = func_97(iParam0);
	if (func_90(iVar0) && !ped::is_ped_injured(iParam0)) {
		Global_101700.f_2095.f_539.f_294[iVar0] = ped::get_ped_armour(iParam0);
	}
}

// Position - 0x77C0
void func_115(var *uParam0, int iParam1) {
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
		if (func_119(&iVar0)) {
			if (func_117(iVar0, &vVar1, &fVar4)) {
				vVar1.z++;
				*uParam0 = {vVar1};
				uParam0->f_3 = fVar4;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f,
												  -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)) {
			iVar5 = func_173();
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
		else if (func_116(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)) {
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			uParam0->f_3 = 48.8028f;
		}
	}
}

// Position - 0x7D1B
bool func_116(vector3 vParam0, char *sParam3, vector3 vParam4) {
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

// Position - 0x7D5F
bool func_117(int iParam0, var *uParam1, float *fParam2) {
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
	return !func_118(*uParam1, 0f, 0f, 0f, 0);
}

// Position - 0x83F2
bool func_118(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x8439
bool func_119(int *iParam0) {
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !ped::is_ped_injured(player::player_ped_id())) {
		if (func_130()) {
			*iParam0 = func_125(entity::get_entity_coords(player::player_ped_id(), 0), 6, -1, 0, 1, -1);
			if (func_124(*iParam0) && !func_120(*iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x8494
int func_120(int iParam0) { return func_121(iParam0, 0, 1); }

// Position - 0x84A4
int func_121(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_123() == 0) {
			return gameplay::is_bit_set(func_100(func_122(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

// Position - 0x8504
int func_122(int iParam0) {
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

// Position - 0x87CB
int func_123() { return Global_25190; }

// Position - 0x87D6
int func_124(int iParam0) { return func_121(iParam0, 5, 1); }

// Position - 0x87E6
int func_125(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45) {
		if (iParam3 == 6 || iParam3 == func_129(iVar0)) {
			if (!iParam5 || func_128(iVar0)) {
				fVar1 = gameplay::get_distance_between_coords(vParam0, func_126(iVar0, 0), 1);
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

// Position - 0x8888
Vector3 func_126(int iParam0, int iParam1) {
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

	case 45: return func_127(Global_93004);
	}
	return 1000000f, 1000000f, 1000000f;
}

// Position - 0x8DA2
Vector3 func_127(int iParam0) {
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

// Position - 0x8EB8
int func_128(int iParam0) { return func_121(iParam0, 0, 0); }

// Position - 0x8EC8
int func_129(int iParam0) {
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

// Position - 0x913B
bool func_130() { return Global_91543.f_303 > 0; }

// Position - 0x914C
int func_131() {
	if (Global_91491 == 10 || Global_91491 == 9) {
		return 1;
	}
	return 0;
}

// Position - 0x9170
void func_132(int iParam0) {
	struct<6> Var0;

	Var0 = {func_133(iParam0)};
	script::request_script(&Var0);
	while (!script::has_script_loaded(&Var0)) {
		script::request_script(&Var0);
		system::wait(0);
	}
	iLocal_219 = system::start_new_script_with_args(&Var0, &Local_43, 8, 20500);
	script::set_script_as_no_longer_needed(&Var0);
}

// Position - 0x91B5
struct<6> func_133(int iParam0) {
	struct<6> Var0;

	switch (iParam0) {
	case 0: StringCopy(&Var0, "BailBond1", 24); break;

	case 1: StringCopy(&Var0, "BailBond2", 24); break;

	case 2: StringCopy(&Var0, "BailBond3", 24); break;

	case 3: StringCopy(&Var0, "BailBond4", 24); break;

	default: break;
	}
	return Var0;
}

//Position - 0x920F
bool func_134(int* iParam0)
{
	int iVar0;

	iVar0 = func_135(iParam0, 0, 4, 0, 0);
	if (iVar0 == 1) {
		return true;
	}
	return false;
}

// Position - 0x922E
int func_135(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_139(0)) {
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
		if (!func_137(iParam2)) {
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
			func_136(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x9365
void func_136(int *iParam0, int iParam1) {
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

// Position - 0x93B4
bool func_137(int iParam0) { return func_138(iParam0, Global_35781); }

// Position - 0x93C5
int func_138(int iParam0, int iParam1) {
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

// Position - 0x95A6
bool func_139(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_137(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x95C8
bool func_140(int iParam0) {
	if (gameplay::get_mission_flag()) {
		return false;
	}
	if (Global_25192) {
		return false;
	}
	if (func_70(6) || func_70(7)) {
		return false;
	}
	if (func_173() != 2) {
		return false;
	}
	if (cutscene::is_cutscene_playing()) {
		return false;
	}
	if (!iParam0) {
		if (!func_137(4)) {
			return false;
		}
		if (gameplay::get_random_event_flag()) {
			return false;
		}
		if (!player::is_player_playing(player::player_id())) {
			return false;
		}
		if (!func_144(4)) {
			return false;
		}
		if (player::is_player_playing(player::player_id())) {
			if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
				return false;
			}
		}
		if (cutscene::is_cutscene_playing()) {
			return false;
		}
		if (G_DisableMessagesAndCalls2) {
			return false;
		}
		if (func_143() || func_142()) {
			return false;
		}
		if (func_141()) {
			return false;
		}
	}
	return true;
}

// Position - 0x96A0
bool func_141() {
	if (Global_69962) {
		return true;
	}
	else if (Global_55816 && !Global_55822) {
		return true;
	}
	return false;
}

// Position - 0x96CA
int func_142() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x96E4
int func_143() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x9700
int func_144(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_173();
				if (!func_90(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_143() || Global_100747 ||
						Global_25192 || func_149() || func_148(8, -1) || func_130() || func_147() || func_141() ||
						func_142() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_143() || Global_25192 ||
						func_149() || func_148(8, -1) || func_141() || func_130() || func_147() || func_142() ||
						G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_143() || Global_100747 ||
						Global_25192 || func_149() || func_148(8, -1) || func_141() || func_130() || func_147() ||
						func_142() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5 || LastDispatchedMessageOrCall != -1) {
						return 0;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_143() || Global_100747 ||
						Global_25192 || func_149() || func_148(8, -1) || func_130() || func_147() || func_142() ||
						G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 4:
					if (func_143() || player::get_player_wanted_level(player::player_id()) > 0 || func_148(8, -1) ||
						func_142() || func_146() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 5:
					if (func_148(8, -1) || func_130() || func_147() || func_146() || func_145()) {
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
							player::is_player_climbing(player::player_id()) || func_143() || Global_25192 ||
							func_149() || func_148(8, -1) || func_147() || func_141() || func_142() ||
							G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
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
						player::is_player_being_arrested(player::player_id(), 1) || func_143() || func_147() ||
						Global_100747 || Global_25192 || func_149() || Global_36912 || func_148(8, -1) || func_141() ||
						func_146() || func_142() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_143() || Global_100747 ||
						Global_25192 || func_149() || func_148(8, -1) || func_141() || func_146() || func_130() ||
						func_147() || func_142()) {
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

// Position - 0x9E1D
var func_145() { return Global_91530.f_1; }

// Position - 0x9E2B
int func_146() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x9E51
bool func_147() { return Global_91543.f_304 > 0; }

// Position - 0x9E62
bool func_148(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x9E9D
var func_149() { return Global_1315233; }

// Position - 0x9EA9
void func_150(int iParam0) {
	if (Global_101700.f_23945.f_1 == 0) {
		if (!func_157(14)) {
			if (!iLocal_51) {
				if (func_31(26, func_32(iParam0), 0)) {
					func_154("AM_H_BAILBONDS", 1, 0, -1, 10000, 4, 0, 0, 0);
					iLocal_51 = 1;
				}
			}
			else {
				switch (func_152("AM_H_BAILBONDS")) {
				case 2: iLocal_51 = 0; break;

				case 1: func_151(14); break;
				}
			}
		}
	}
}

// Position - 0x9F1E
void func_151(int iParam0) {
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

// Position - 0x9F60
int func_152(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, &Global_100345)) {
		return 1;
	}
	if (func_153(sParam0)) {
		return 0;
	}
	return 2;
}

// Position - 0x9F87
bool func_153(char *sParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::are_strings_equal(sParam0, &Global_101700.f_19369[iVar0 /*16*/])) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x9FC2
void func_154(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	func_155(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x9FE2
void func_155(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6,
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
		func_156();
	}
}

// Position - 0xA1B4
void func_156() {
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

// Position - 0xA2D4
int func_157(int iParam0) {
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

// Position - 0xA317
void func_158(var *uParam0, var *uParam1) {
	if (!uParam0->f_7) {
		if (func_31(26, func_32(uParam0->f_4), 0)) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (!func_172() && !audio::is_ambient_speech_playing(player::player_ped_id()) &&
					!ui::is_message_being_displayed()) {
					func_171(uParam1, 2, player::player_ped_id(), "TREVOR", 0, 1);
					if (func_159(uParam1, func_170(uParam0->f_4), func_169(uParam0->f_4), 4, 0, 0, 0)) {
						uParam0->f_7 = 1;
					}
				}
				else {
					uParam0->f_7 = 1;
				}
			}
			else {
				uParam0->f_7 = 1;
			}
		}
	}
}

// Position - 0xA3A8
bool func_159(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_168(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_160(sParam2, iParam3, 0);
}

// Position - 0xA3F6
int func_160(char *sParam0, int iParam1, int iParam2) {
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
					func_167();
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
		if (func_148(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_166();
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
				func_165();
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
				if (func_164()) {
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
			if (func_163()) {
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
			func_162();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_161();
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
		func_167();
	}
	return 0;
}

// Position - 0xA6C2
void func_161() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0xA6F2
void func_162() {
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

// Position - 0xA787
bool func_163() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0xA7AE
bool func_164() {
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

// Position - 0xA847
void func_165() {
	if (func_70(14)) {
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
		Global_14443 = func_173();
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

// Position - 0xA8E9
void func_166() {
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

// Position - 0xA93F
void func_167() {
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

// Position - 0xA996
void func_168(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, var uParam5) {
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

// Position - 0xA9EC
char *func_169(int iParam0) {
	switch (iParam0) {
	case 0: return "BB1_TE";

	case 1: return "BB2_TE";

	case 2: return "BB3_TE";

	case 3: return "BB4_TE";

	default:
	}
	return "NULL";
}

// Position - 0xAA31
char *func_170(int iParam0) {
	switch (iParam0) {
	case 0: return "BB1AUD";

	case 1: return "BB2AUD";

	case 2: return "BB3AUD";

	case 3: return "BB4AUD";

	default:
	}
	return "NULL";
}

// Position - 0xAA76
void func_171(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0xAB11
int func_172() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0xAB33
int func_173() {
	func_107();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0xAB4C
void func_174(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_24(*iParam0);
	iVar1 = func_23(*iParam0);
	iVar2 = func_22(*iParam0);
	iVar3 = func_21(*iParam0);
	iVar4 = func_20(*iParam0);
	iVar5 = func_19(*iParam0);
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
	iVar6 = func_27(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_27(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_175(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0xACCE
void func_175(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_181(iParam0, iParam1);
	func_180(iParam0, iParam2);
	func_179(iParam0, iParam3);
	func_178(iParam0, iParam5);
	func_177(iParam0, iParam4);
	func_176(iParam0, iParam6);
}

// Position - 0xAD06
void func_176(int *iParam0, int iParam1) {
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

// Position - 0xAD8C
void func_177(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_23(*uParam0);
	iVar1 = func_24(*uParam0);
	if (iParam1 < 1 || iParam1 > func_27(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0xADDD
void func_178(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0xAE10
void func_179(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0xAE4A
void func_180(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0xAE85
void func_181(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0xAEC1
int func_182() {
	int *iVar0;

	func_181(&iVar0, time::get_clock_seconds());
	func_180(&iVar0, time::get_clock_minutes());
	func_179(&iVar0, time::get_clock_hours());
	func_177(&iVar0, time::get_clock_day_of_month());
	func_178(&iVar0, time::get_clock_month());
	func_176(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0xAF07
void func_183(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return;
	}
	func_184(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

// Position - 0xAFEE
int func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_196();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_195(99, 1);
			func_194(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_194(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_194(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_192(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_191(5)) {
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
			case 0: func_194(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_194(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_194(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_191(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_194(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_194(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_194(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_194(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_194(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_194(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
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
			case 0: func_194(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_194(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_194(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_194(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_194(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_194(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_194(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_194(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_194(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_191(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_194(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_194(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_194(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_194(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_194(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_194(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_190(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_195(95, iParam3); break;

		case 1: func_195(97, iParam3); break;

		case 2: func_195(96, iParam3); break;
		}
		func_195(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_187(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_187(iVar1);
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
		case 0: func_194(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_194(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_194(joaat("sp2_total_cash_earned"), iParam3); break;
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
	func_186(iParam0);
	if (Global_35781 == 15) {
		func_185(0);
	}
	return 1;
}

// Position - 0xB5ED
void func_185(int iParam0) {
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

// Position - 0xB86F
void func_186(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0xB8C9
void func_187(int iParam0) {
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
			 gameplay::is_bit_set(Global_2097152[func_189() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_189() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_188(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0xB98A
char *func_188(int iParam0) {
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

// Position - 0xBA03
int func_189() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0xBA10
void func_190(int iParam0) {
	func_195(93, iParam0);
	func_195(29, iParam0);
	func_195(30, iParam0);
}

// Position - 0xBA30
bool func_191(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_189() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0xBA6C
int func_192(int iParam0) {
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
		func_193(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_57(27, 1);
	return 1;
}

// Position - 0xBB23
int func_193(int iParam0, int iParam1) {
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

// Position - 0xBB74
void func_194(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0xBB97
void func_195(int iParam0, int iParam1) {
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

// Position - 0xBBF4
void func_196() {
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

// Position - 0xBC69
bool func_197(int iParam0, bool bParam1) {
	int iVar0;
	char *sVar1;
	char *sVar2;

	iVar0 = func_32(iParam0);
	sVar1 = func_199(iParam0, bParam1);
	sVar2 = func_198(iParam0);
	if (func_14(26, iVar0, 1)) {
		func_13(26, sVar1, 0);
		func_12(26, sVar2);
		func_5(26);
		return true;
	}
	return false;
}

// Position - 0xBCB3
char *func_198(int iParam0) {
	switch (iParam0) {
	case 0: return "BBONDS_DMAIL_C1";

	case 1: return "BBONDS_DMAIL_C2";

	case 2: return "BBONDS_DMAIL_C3";

	case 3: return "BBONDS_DMAIL_C4";

	default:
	}
	return "NULL";
}

// Position - 0xBCF8
char *func_199(int iParam0, bool bParam1) {
	switch (iParam0) {
	case 0:
		if (bParam1) {
			return "BBONDS_DMAIL_K1";
		}
		else {
			return "BBONDS_DMAIL_N1";
		}
		break;

	case 1:
		if (bParam1) {
			return "BBONDS_DMAIL_K2";
		}
		else {
			return "BBONDS_DMAIL_N2";
		}
		break;

	case 2:
		if (bParam1) {
			return "BBONDS_DMAIL_K3";
		}
		else {
			return "BBONDS_DMAIL_N3";
		}
		break;

	case 3:
		if (bParam1) {
			return "BBONDS_DMAIL_K4";
		}
		else {
			return "BBONDS_DMAIL_N4";
		}
		break;
	}
	return "NULL";
}

// Position - 0xBD85
bool func_200(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[16];
	int iVar22[2];
	int iVar25;
	int iVar26;
	int iVar27;

	if (!cam::is_screen_faded_in()) {
		return false;
	}
	if (func_219()) {
		return false;
	}
	if (player::is_player_playing(player::player_id())) {
		if (ped::get_ped_parachute_state(player::player_ped_id()) != -1) {
			return false;
		}
	}
	if (audio::is_scripted_conversation_ongoing()) {
		return false;
	}
	if (func_218() && iParam2 < 4) {
		return false;
	}
	if (player::is_player_playing(player::player_id())) {
		if (func_216(player::player_ped_id())) {
			if (gameplay::is_bit_set(iParam0, func_106()) && !gameplay::is_bit_set(iParam4, 19)) {
				return false;
			}
		}
	}
	if (G_DisableMessagesAndCalls1) {
		return false;
	}
	if (cutscene::is_cutscene_playing()) {
		return false;
	}
	if (G_DisableMessagesAndCalls2) {
		return false;
	}
	if (G_DisableMessagesAndCalls3) {
		return false;
	}
	if (func_143() || Global_17151.f_4 && Global_17151.f_104 == 4 || func_142()) {
		return false;
	}
	if (gameplay::is_bit_set(iParam4, 18)) {
		if (!gameplay::is_bit_set(iParam0, func_106())) {
			return false;
		}
	}
	iVar0 = 1;
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		iVar0 = 0;
	}
	if (iVar0 == 1) {
		return false;
	}
	if (!player::is_player_playing(player::player_id())) {
		return false;
	}
	else if (iParam2 != 5) {
		if (player::get_player_wanted_level(player::player_id()) > 1) {
			return false;
		}
		if (gameplay::is_auto_save_in_progress()) {
			return false;
		}
		if (Global_88752) {
			return false;
		}
		if (func_209(50f, 1) != -1) {
			return false;
		}
		if (iParam1 == 17 || iParam1 == 19 || iParam1 == 14 || iParam1 == 0 || iParam1 == 1 || iParam1 == 2) {
			if (gameplay::is_bit_set(iParam0, func_106())) {
				iVar1 = func_208(func_173());
				iVar2 = func_208(iParam1);
				iVar3 = func_207(iVar1, iVar2);
				if (iVar3 < 9) {
					if (Global_101700.f_17062.f_175[iVar3 /*19*/].f_8 == 1 ||
						Global_101700.f_17062.f_175[iVar3 /*19*/].f_8 == 2) {
						if (func_206(&Global_101700.f_17062.f_175[iVar3 /*19*/].f_5)) {
							if (func_203(&Global_101700.f_17062.f_175[iVar3 /*19*/].f_5) < 30f) {
								return false;
							}
						}
					}
				}
			}
		}
	}
	if (player::get_player_wanted_level(player::player_id()) > 2) {
		return false;
	}
	if (func_141()) {
		return false;
	}
	if (gameplay::is_bit_set(iParam4, 3)) {
		if (Global_100747) {
			return false;
		}
		if (player::is_player_playing(player::player_id())) {
			if (player::get_player_wanted_level(player::player_id()) > 0) {
				return false;
			}
		}
		if (Global_100412.f_19 != 0) {
			return false;
		}
		if (Global_35781 == 5) {
			return false;
		}
	}
	if (iParam3 != -1) {
		if (func_202(player::player_ped_id(), iParam3, 0)) {
			return false;
		}
	}
	iVar4 = func_173();
	if (func_90(iVar4)) {
		ped::get_ped_nearby_peds(player::player_ped_id(), &uVar5, -1);
		switch (iParam1) {
		case 4:
			switch (iVar4) {
			case 0:
				iVar22[0] = func_98(1);
				iVar22[1] = func_98(2);
				break;

			case 1:
				iVar22[0] = func_98(0);
				iVar22[1] = func_98(2);
				break;

			case 2:
				iVar22[0] = func_98(0);
				iVar22[1] = func_98(1);
				break;
			}
			break;

		case 5:
			iVar22[0] = func_98(1);
			iVar22[1] = func_98(2);
			break;

		case 6:
			iVar22[0] = func_201(12);
			iVar22[1] = func_98(1);
			break;

		case 7:
			iVar22[0] = func_201(12);
			iVar22[1] = func_98(0);
			break;

		case 8:
			iVar22[0] = func_98(0);
			iVar22[1] = func_98(1);
			break;

		case 9:
			iVar22[0] = func_98(0);
			iVar22[1] = func_98(2);
			break;

		case 10:
			iVar22[0] = func_201(23);
			iVar22[1] = func_98(0);
			break;

		case 11:
			iVar22[0] = func_201(23);
			iVar22[1] = func_98(0);
			break;

		default:
			if (func_90(iParam1)) {
				iVar22[0] = func_98(iParam1);
			}
			else {
				iVar22[0] = func_201(iParam1);
			}
			iVar22[1] = 0;
			break;
		}
		iVar25 = 0;
		while (iVar25 < 2) {
			if (iVar22[iVar25] != 0) {
				iVar26 = 0;
				while (iVar26 < 16) {
					if (entity::does_entity_exist(uVar5[iVar26])) {
						if (entity::get_entity_model(uVar5[iVar26]) == iVar22[iVar25]) {
							if (!entity::is_entity_dead(uVar5[iVar26], 0)) {
								if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
									if (system::vdist2(entity::get_entity_coords(uVar5[iVar26], 1),
													   entity::get_entity_coords(player::player_ped_id(), 1)) < 6400f) {
										return false;
									}
								}
							}
							else {
								return false;
							}
						}
					}
					iVar26++;
				}
				iVar27 = 0;
				switch (iVar22[iVar25]) {
				case joaat("player_zero"): iVar27 = Global_89302[0]; break;

				case joaat("player_one"): iVar27 = Global_89302[1]; break;

				case joaat("player_two"): iVar27 = Global_89302[2]; break;
				}
				if (entity::does_entity_exist(iVar27)) {
					if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
						if (system::vdist2(entity::get_entity_coords(iVar27, 1),
										   entity::get_entity_coords(player::player_ped_id(), 1)) < 6400f) {
							return false;
						}
					}
				}
				switch (iVar22[iVar25]) {
				case joaat("player_zero"): iVar27 = Global_91481[0]; break;

				case joaat("player_one"): iVar27 = Global_91481[1]; break;

				case joaat("player_two"): iVar27 = Global_91481[2]; break;
				}
				if (entity::does_entity_exist(iVar27)) {
					if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
						if (system::vdist2(entity::get_entity_coords(iVar27, 1),
										   entity::get_entity_coords(player::player_ped_id(), 1)) < 6400f) {
							return false;
						}
					}
				}
			}
			iVar25++;
		}
	}
	else {
		return false;
	}
	return true;
}

// Position - 0xC384
int func_201(int iParam0) {
	if (!func_90(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xC3AF
bool func_202(int iParam0, int iParam1, float fParam2) {
	struct<5> Var0;
	float fVar5;

	if (!entity::is_entity_dead(iParam0, 0)) {
		Var0 = {Global_35782[iParam1 /*5*/]};
		fVar5 = Var0.f_3;
		if (fParam2 > 0f) {
			fVar5 = fParam2;
		}
		if (gameplay::get_distance_between_coords(entity::get_entity_coords(iParam0, 1), Var0, 1) < fVar5) {
			return true;
		}
		else if (Var0.f_4 != -1) {
			return func_202(iParam0, Var0.f_4, fParam2);
		}
	}
	return false;
}

// Position - 0xC415
float func_203(var *uParam0) {
	if (func_206(uParam0)) {
		if (func_205(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_204(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0xC454
float func_204(bool bParam0) {
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

// Position - 0xC4AC
bool func_205(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0xC4BC
bool func_206(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0xC4CC
int func_207(int iParam0, int iParam1) {
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

// Position - 0xC656
int func_208(int iParam0) {
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

// Position - 0xC6B1
int func_209(float fParam0, int iParam1) {
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
		iVar36 = func_215();
		iVar37 = 0;
		iVar37 = 0;
		while (iVar37 < 63) {
			iVar32 = iVar37;
			if (gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 2) &&
				!gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 3)) {
				func_210(iVar32, &Var0);
				fVar35 = gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0),
															   Var0.f_6, 1);
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
	return iVar33;
}

// Position - 0xC75D
void func_210(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_211(uParam1, "Abigail1", func_213(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
		break;

	case 1:
		func_211(uParam1, "Abigail2", func_213(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
		break;

	case 2:
		func_211(uParam1, "Barry1", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_212(iParam0), 1, 0);
		break;

	case 3:
		func_211(uParam1, "Barry2", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_212(iParam0), 1, 1);
		break;

	case 4:
		func_211(uParam1, "Barry3", func_213(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 5:
		func_211(uParam1, "Barry3A", func_213(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 6:
		func_211(uParam1, "Barry3C", func_213(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 7:
		func_211(uParam1, "Barry4", func_213(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_212(iParam0), 0, 0);
		break;

	case 8:
		func_211(uParam1, "Dreyfuss1", func_213(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 9:
		func_211(uParam1, "Epsilon1", func_213(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 10:
		func_211(uParam1, "Epsilon2", func_213(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
		break;

	case 11:
		func_211(uParam1, "Epsilon3", func_213(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 12:
		func_211(uParam1, "Epsilon4", func_213(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 13:
		func_211(uParam1, "Epsilon5", func_213(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
		break;

	case 14:
		func_211(uParam1, "Epsilon6", func_213(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 15:
		func_211(uParam1, "Epsilon7", func_213(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 16:
		func_211(uParam1, "Epsilon8", func_213(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
		break;

	case 17:
		func_211(uParam1, "Extreme1", func_213(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 18:
		func_211(uParam1, "Extreme2", func_213(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 19:
		func_211(uParam1, "Extreme3", func_213(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 20:
		func_211(uParam1, "Extreme4", func_213(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 21:
		func_211(uParam1, "Fanatic1", func_213(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_212(iParam0), 1, 0);
		break;

	case 22:
		func_211(uParam1, "Fanatic2", func_213(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_212(iParam0), 1, 0);
		break;

	case 23:
		func_211(uParam1, "Fanatic3", func_213(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_212(iParam0), 0, 1);
		break;

	case 24:
		func_211(uParam1, "Hao1", func_213(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_212(iParam0), 0, 1);
		break;

	case 25:
		func_211(uParam1, "Hunting1", func_213(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 26:
		func_211(uParam1, "Hunting2", func_213(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 27:
		func_211(uParam1, "Josh1", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
		break;

	case 28:
		func_211(uParam1, "Josh2", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
		break;

	case 29:
		func_211(uParam1, "Josh3", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
		break;

	case 30:
		func_211(uParam1, "Josh4", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_212(iParam0), 1, 0);
		break;

	case 31:
		func_211(uParam1, "Maude1", func_213(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 32:
		func_211(uParam1, "Minute1", func_213(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 33:
		func_211(uParam1, "Minute2", func_213(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 34:
		func_211(uParam1, "Minute3", func_213(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 35:
		func_211(uParam1, "MrsPhilips1", func_213(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 36:
		func_211(uParam1, "MrsPhilips2", func_213(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_212(iParam0), 0, 0);
		break;

	case 37:
		func_211(uParam1, "Nigel1", func_213(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_212(iParam0), 1, 0);
		break;

	case 38:
		func_211(uParam1, "Nigel1A", func_213(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
		break;

	case 39:
		func_211(uParam1, "Nigel1B", func_213(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
		break;

	case 40:
		func_211(uParam1, "Nigel1C", func_213(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
		break;

	case 41:
		func_211(uParam1, "Nigel1D", func_213(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
		break;

	case 42:
		func_211(uParam1, "Nigel2", func_213(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
		break;

	case 43:
		func_211(uParam1, "Nigel3", func_213(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
		break;

	case 44:
		func_211(uParam1, "Omega1", func_213(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 45:
		func_211(uParam1, "Omega2", func_213(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 46:
		func_211(uParam1, "Paparazzo1", func_213(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 47:
		func_211(uParam1, "Paparazzo2", func_213(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 48:
		func_211(uParam1, "Paparazzo3", func_213(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 49:
		func_211(uParam1, "Paparazzo3A", func_213(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 50:
		func_211(uParam1, "Paparazzo3B", func_213(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 51:
		func_211(uParam1, "Paparazzo4", func_213(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 52:
		func_211(uParam1, "Rampage1", func_213(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 54:
		func_211(uParam1, "Rampage3", func_213(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_212(iParam0), 1, 0);
		break;

	case 55:
		func_211(uParam1, "Rampage4", func_213(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_212(iParam0), 1, 0);
		break;

	case 56:
		func_211(uParam1, "Rampage5", func_213(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
		break;

	case 53:
		func_211(uParam1, "Rampage2", func_213(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
		break;

	case 57:
		func_211(uParam1, "TheLastOne", func_213(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 58:
		func_211(uParam1, "Tonya1", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 59:
		func_211(uParam1, "Tonya2", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	case 60:
		func_211(uParam1, "Tonya3", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_212(iParam0), 0, 1);
		break;

	case 61:
		func_211(uParam1, "Tonya4", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_212(iParam0), 0, 1);
		break;

	case 62:
		func_211(uParam1, "Tonya5", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0xD8D2
void func_211(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0xD963
int func_212(int iParam0) {
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

// Position - 0xDCA9
struct<2> func_213(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_214(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0xDCDF
struct<2>
func_214(int iParam0) {
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

//Position - 0xE12A
int func_215()
{
	func_107();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0xE170
bool func_216(int iParam0) {
	if (iParam0 == 0) {
		return false;
	}
	if (func_217(iParam0) == -1) {
		return false;
	}
	return true;
}

// Position - 0xE191
int func_217(int iParam0) {
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

// Position - 0xE1DA
int func_218() {
	if (Global_35781 == 15) {
		return 0;
	}
	return 1;
}

// Position - 0xE1EF
bool func_219() {
	if (Global_14443.f_1 == 1) {
		return true;
	}
	return false;
}

// Position - 0xE208
bool func_220() {
	vector3 vVar0;
	float fVar3;

	if (entity::is_entity_dead(player::player_ped_id(), 0)) {
		return false;
	}
	vVar0 = {func_221(player::get_player_index())};
	fVar3 = Local_43.f_3;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (ped::is_ped_in_any_heli(player::player_ped_id()) || ped::is_ped_in_any_plane(player::player_ped_id())) {
			if (entity::is_entity_in_air(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
				fVar3 += 50f;
				if (fVar3 > 200f) {
					fVar3 = 200f;
				}
			}
		}
	}
	if (system::vdist2(vVar0, Local_43) <= fVar3 * fVar3) {
		return true;
	}
	return false;
}

// Position - 0xE29D
Vector3 func_221(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0xE2B0
bool func_222() {
	vector3 vVar0;

	if (player::is_player_dead(player::get_player_index())) {
		return false;
	}
	vVar0 = {func_221(player::get_player_index())};
	if (system::vdist2(vVar0, 2727.58f, 4144.19f, 43.95f) >= 50f * 50f) {
		return true;
	}
	return false;
}

// Position - 0xE2FE
void func_223() {
	char *sVar0;

	if (iLocal_225 != 0) {
		if (!func_225()) {
			iLocal_225 = 4;
		}
		switch (iLocal_225) {
		case 1:
			iLocal_220 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
			iLocal_225 = 2;
			break;

		case 2:
			if (bLocal_222) {
				sVar0 = "BBS_MPD";
			}
			else {
				sVar0 = "BBS_MPK";
			}
			if (graphics::has_scaleform_movie_loaded(iLocal_220)) {
				graphics::_push_scaleform_movie_function(iLocal_220, "SHOW_SHARD_MIDSIZED_MESSAGE");
				graphics::begin_text_command_scaleform_string("BBS_MP");
				graphics::end_text_command_scaleform_string();
				graphics::begin_text_command_scaleform_string(sVar0);
				ui::add_text_component_substring_text_label(sLocal_224);
				graphics::end_text_command_scaleform_string();
				graphics::_pop_scaleform_movie_function_void();
				iLocal_223 = gameplay::get_game_timer();
				iLocal_225 = 3;
			}
			break;

		case 3:
			if (graphics::has_scaleform_movie_loaded(iLocal_220)) {
				graphics::draw_scaleform_movie_fullscreen(iLocal_220, 255, 255, 255, 255, 0);
				graphics::_set_2d_layer(4);
				if (!iLocal_221) {
					audio::play_sound_frontend(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
					iLocal_221 = 1;
				}
			}
			if (gameplay::get_game_timer() - iLocal_223 > 7000) {
				if (!iLocal_52) {
					graphics::_push_scaleform_movie_function(iLocal_220, "SHARD_ANIM_OUT");
					graphics::_push_scaleform_movie_function_parameter_int(1);
					graphics::_push_scaleform_movie_function_parameter_float(0.33f);
					graphics::_pop_scaleform_movie_function_void();
					iLocal_52 = 1;
				}
			}
			if (gameplay::get_game_timer() - iLocal_223 > 7500) {
				iLocal_225 = 4;
			}
			break;

		case 4:
			graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_220);
			iLocal_52 = 0;
			func_224();
			break;
		}
	}
}

// Position - 0xE422
void func_224() {
	iLocal_225 = 0;
	iLocal_221 = 0;
	bLocal_222 = false;
	iLocal_223 = 0;
}

// Position - 0xE436
int func_225() {
	if (!player::is_player_playing(player::player_id())) {
		return 0;
	}
	if (ped::is_ped_injured(player::player_ped_id())) {
		return 0;
	}
	if (player::is_player_being_arrested(player::player_id(), 1)) {
		return 0;
	}
	if (func_173() != 2) {
		return 0;
	}
	if (cutscene::is_cutscene_playing()) {
		return 0;
	}
	return 1;
}

// Position - 0xE485
void func_226() {
	if (Global_101700.f_23945.f_1 == 0) {
		if (Global_101700.f_23945.f_2 == -1) {
			gameplay::clear_bit(&Global_101700.f_23945, 0);
			gameplay::clear_bit(&Global_101700.f_23945, 1);
			gameplay::clear_bit(&Global_101700.f_23945, 2);
			gameplay::clear_bit(&Global_101700.f_23945, 3);
			gameplay::clear_bit(&Global_101700.f_23945, 4);
			gameplay::clear_bit(&Global_101700.f_23945, 5);
			gameplay::clear_bit(&Global_101700.f_23945, 6);
			gameplay::clear_bit(&Global_101700.f_23945, 7);
			gameplay::clear_bit(&Global_101700.f_23945, 8);
			gameplay::clear_bit(&Global_101700.f_23945, 9);
			iLocal_218 = func_182();
			func_174(&iLocal_218, 0, 0, 1, 0, 0, 0);
			Global_101700.f_23945.f_3 = iLocal_218;
			Global_101700.f_23945.f_2 = 4;
		}
	}
	if (Global_101700.f_23945.f_2 == 2) {
		Global_101700.f_23945.f_2 = 1;
	}
	if (Global_101700.f_23945.f_2 == 1) {
		gameplay::clear_bit(&Global_101700.f_23945, 8);
	}
	func_224();
	func_30();
	func_227(62, 2, 0);
}

// Position - 0xE589
void func_227(int iParam0, int iParam1, int iParam2) {
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		func_165();
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
						func_228();
					}
				}
				else {
					Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_228();
				}
			}
			else {
				Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_228();
			}
		}
	}
}

// Position - 0xE733
void func_228() {
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

// Position - 0xE7B0
void func_229() {
	if (func_231("AM_H_BAILBONDS")) {
		ui::clear_help(1);
	}
	func_230(&uLocal_53, 2);
	graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_220);
	if (Local_43.f_6 != -1) {
		func_37(&Local_43.f_6);
	}
	script::terminate_this_thread();
}

// Position - 0xE7E9
void func_230(var *uParam0, int iParam1) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
		(*uParam0)[iParam1 /*10*/].f_7 = 0;
	}
}

// Position - 0xE806
bool func_231(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0xE819
int func_232(int iParam0) {
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
