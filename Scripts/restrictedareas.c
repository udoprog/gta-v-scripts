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
int iLocal_27 = 0;
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
var uLocal_35 = 0;
int iLocal_36 = 0;
int iLocal_37 = 0;
int iLocal_38[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_47[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_56 = 0;
int iLocal_57 = 0;
int iLocal_58 = 0;
int iLocal_59[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_68 = 0;
int iLocal_69 = 0;
int iLocal_70 = 0;
int iLocal_71 = 0;
struct<6> Local_72 = {
	0, 0, 0, 0, 0, 0
};
var uLocal_78[8] = {0, 0, 0, 0, 0, 0, 0, 0};
var *uLocal_87 = NULL;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_71 = 3;
	if (player::has_force_cleanup_occurred(34)) {
		script::terminate_this_thread();
	}
	func_36();
	func_35(&uLocal_87, 8, 0, "TANNOY", 0, 1);
	while (true) {
		system::wait(0);
		func_34();
		if (player::is_player_playing(player::player_id())) {
			switch (iLocal_36) {
			case 0:
				if (func_33()) {
					iLocal_36 = 2;
				}
				else {
					if (iLocal_58) {
						iLocal_68 = 0;
						iLocal_69 = 0;
						iLocal_68 = 0;
						while (iLocal_68 < 8) {
							if (iLocal_59[iLocal_68]) {
								if (func_32(entity::get_entity_coords(player::player_ped_id(), 0), iLocal_68 + 1, 0,
											0)) {
									player::_0x4669B3ED80F24B4E(player::player_id());
									iLocal_69++;
								}
								else {
									iLocal_59[iLocal_68] = 0;
								}
							}
							iLocal_68++;
						}
						if (iLocal_69 == 0) {
							iLocal_58 = 0;
						}
					}
					if (system::timera() > 125) {
						iLocal_37 = iLocal_70 + 1;
						if (func_29(iLocal_37, entity::get_entity_coords(player::player_ped_id(), 0))) {
							if (!iLocal_38[iLocal_70]) {
								iLocal_38[iLocal_70] = 1;
							}
							if (func_28(iLocal_37)) {
								if (!iLocal_47[iLocal_70]) {
									iLocal_47[iLocal_70] = 1;
								}
								Local_72 = {func_27(iLocal_37)};
								if (script::_get_number_of_instances_of_script_with_name_hash(
										gameplay::get_hash_key(&Local_72)) == 0) {
									if (!Global_25403[iLocal_37]) {
										func_26(iLocal_37, Global_25403[iLocal_37]);
									}
								}
							}
							else if (!Global_25403[iLocal_37]) {
								if (ped::is_ped_in_flying_vehicle(player::player_ped_id())) {
									iLocal_56 = 0;
									switch (iLocal_37) {
									case 1:
										if (func_24() || func_23()) {
											iLocal_56 = 1;
										}
										break;

									case 2:
										if (func_21()) {
											iLocal_56 = 1;
										}
										break;

									case 7:
										if (func_19()) {
											iLocal_56 = 1;
										}
										break;
									}
									if (!iLocal_56) {
										if (func_32(entity::get_entity_coords(player::player_ped_id(), 0), iLocal_37, 0,
													0)) {
											if (gameplay::get_game_timer() - uLocal_78[iLocal_70] > 8000) {
												func_18();
											}
											else if (gameplay::is_projectile_in_area(
														 entity::get_entity_coords(player::player_ped_id(), 0) +
															 Vector(200f, 200f, 200f),
														 entity::get_entity_coords(player::player_ped_id(), 0) -
															 Vector(200f, 200f, 200f),
														 1)) {
												func_18();
											}
											else if (iLocal_37 != 4) {
												if (!iLocal_57) {
													if (func_1(&uLocal_87, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0)) {
														iLocal_57 = 1;
													}
												}
											}
										}
										else {
											uLocal_78[iLocal_70] = gameplay::get_game_timer();
										}
									}
								}
								else {
									iLocal_56 = 0;
									switch (iLocal_37) {
									case 1:
										if (func_24() || func_23()) {
											iLocal_56 = 1;
										}
										break;

									case 2:
										if (func_21()) {
											iLocal_56 = 1;
										}
										break;

									case 7:
										if (func_19()) {
											iLocal_56 = 1;
										}
										break;
									}
									if (!iLocal_56) {
										if (func_32(entity::get_entity_coords(player::player_ped_id(), 0), iLocal_37, 0,
													0)) {
											if (iLocal_37 != 4 ||
												gameplay::get_game_timer() - uLocal_78[iLocal_70] > 8000) {
												func_18();
											}
										}
										else {
											uLocal_78[iLocal_70] = gameplay::get_game_timer();
										}
									}
								}
							}
							else {
								iLocal_56 = 0;
								switch (iLocal_37) {
								case 1:
									if (func_24() || func_23()) {
										iLocal_56 = 1;
									}
									break;

								case 2:
									if (func_21()) {
										iLocal_56 = 1;
									}
									break;

								case 7:
									if (func_19()) {
										iLocal_56 = 1;
									}
									break;
								}
								if (!iLocal_56) {
									if (func_32(entity::get_entity_coords(player::player_ped_id(), 0), iLocal_37, 0,
												0)) {
										func_18();
									}
								}
							}
						}
						else if (iLocal_38[iLocal_70]) {
							if (func_28(iLocal_37)) {
								Local_72 = {func_27(iLocal_37)};
								if (script::_get_number_of_instances_of_script_with_name_hash(
										gameplay::get_hash_key(&Local_72)) == 0) {
									func_26(iLocal_37, 0);
									iLocal_38[iLocal_70] = 0;
								}
							}
							else if (Global_25403[iLocal_37]) {
								Global_25403[iLocal_37] = 0;
								iLocal_38[iLocal_70] = 0;
								iLocal_47[iLocal_70] = 0;
								iLocal_57 = 0;
							}
						}
						iLocal_70++;
						if (iLocal_70 == 8) {
							iLocal_70 = 0;
						}
						system::settimera(0);
					}
				}
				break;

			case 1: break;

			case 2:
				if (!func_33()) {
					iLocal_36 = 0;
				}
				break;
			}
		}
	}
}

// Position - 0x437
bool func_1(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_17(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_2(sParam2, iParam3, 0);
}

// Position - 0x485
int func_2(char *sParam0, int iParam1, int iParam2) {
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
		if (func_15(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_14();
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
				func_7();
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
				if (func_6()) {
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
			if (func_5()) {
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
			func_4();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_3();
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

// Position - 0x751
void func_3() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x782
void func_4() {
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

// Position - 0x817
bool func_5() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x83E
bool func_6() {
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

// Position - 0x8D7
void func_7() {
	if (func_13(14)) {
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
		Global_14443 = func_8();
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

// Position - 0x979
int func_8() {
	func_9();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x992
void func_9() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_12(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_11(player::player_ped_id());
			if (func_10(iVar0) && (!func_13(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_10(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0xA8F
bool func_10(int iParam0) { return iParam0 < 3; }

// Position - 0xA9B
int func_11(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_12(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0xAD8
int func_12(int iParam0) {
	if (func_10(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xB02
bool func_13(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xB10
void func_14() {
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

// Position - 0xB67
bool func_15(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0xBA2
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

// Position - 0xBF9
void func_17(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, var uParam5) {
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

// Position - 0xC4F
void func_18() {
	switch (iLocal_70) {
	case 0:
		iLocal_71 = 2;
		if (player::get_player_wanted_level(player::player_id()) < iLocal_71) {
		}
		break;

	case 1:
		if (ped::is_ped_in_flying_vehicle(player::player_ped_id()) &&
			gameplay::is_projectile_in_area(
				entity::get_entity_coords(player::player_ped_id(), 0) + Vector(200f, 200f, 200f),
				entity::get_entity_coords(player::player_ped_id(), 0) - Vector(200f, 200f, 200f), 1)) {
			iLocal_71 = 5;
		}
		else {
			iLocal_71 = 3;
		}
		if (player::get_player_wanted_level(player::player_id()) < iLocal_71) {
		}
		break;

	case 2:
		if (ped::is_ped_in_flying_vehicle(player::player_ped_id()) &&
			gameplay::is_projectile_in_area(
				entity::get_entity_coords(player::player_ped_id(), 0) + Vector(200f, 200f, 200f),
				entity::get_entity_coords(player::player_ped_id(), 0) - Vector(200f, 200f, 200f), 1)) {
			iLocal_71 = 5;
		}
		else {
			iLocal_71 = 4;
		}
		if (player::get_player_wanted_level(player::player_id()) < iLocal_71) {
		}
		break;

	case 3:
		iLocal_71 = 4;
		if (player::get_player_wanted_level(player::player_id()) < iLocal_71) {
		}
		break;

	case 4:
		iLocal_71 = 4;
		if (player::get_player_wanted_level(player::player_id()) < iLocal_71) {
		}
		break;

	case 5:
		iLocal_71 = 4;
		if (player::get_player_wanted_level(player::player_id()) < iLocal_71) {
		}
		break;

	case 6:
		iLocal_71 = 2;
		if (player::get_player_wanted_level(player::player_id()) < iLocal_71) {
		}
		break;

	case 7:
		iLocal_71 = 3;
		if (player::get_player_wanted_level(player::player_id()) < iLocal_71) {
		}
		break;
	}
	if (player::get_player_wanted_level(player::player_id()) < iLocal_71) {
		player::set_player_wanted_level(player::player_id(), iLocal_71, 0);
		player::set_player_wanted_level_now(player::player_id(), 0);
	}
	iLocal_59[iLocal_70] = 1;
	iLocal_58 = 1;
}

// Position - 0xDEB
bool func_19() {
	switch (func_8()) {
	case 0:
		if (func_20(65)) {
			return true;
		}
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("ambient_solomon")) > 0) {
			return true;
		}
		break;

	case 1:
		if (func_20(66)) {
			return true;
		}
		break;

	case 2:
		if (func_20(65)) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0xE50
bool func_20(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0xE7D
bool func_21() {
	switch (func_8()) {
	case 0:
		if (func_22(12, 5)) {
			return true;
		}
		break;

	case 1:
		if (func_22(13, 5)) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0xEBD
bool func_22(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return false;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0xEE0
int func_23() {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (entity::does_entity_exist(iVar0)) {
			if (vehicle::is_this_model_a_bicycle(entity::get_entity_model(iVar0)) ||
				entity::get_entity_model(iVar0) == joaat("caddy") ||
				entity::get_entity_model(iVar0) == joaat("caddy2")) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
	return 1;
}

// Position - 0xF45
int func_24() {
	if (func_25(8) == func_8()) {
		return 1;
	}
	return 0;
}

// Position - 0xF5F
int func_25(int iParam0) { return Global_101700.f_23863[iParam0 /*4*/]; }

// Position - 0xF72
void func_26(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_25347, iParam0)) {
		if (!iParam1) {
			gameplay::clear_bit(&Global_25347, iParam0);
			StringCopy(&Global_25348[iParam0 /*6*/], "NULL", 24);
			Global_25403[iParam0] = iParam1;
		}
	}
}

// Position - 0xFA9
struct<6> func_27(int iParam0) {
	return Global_25348[iParam0 /*6*/];
}

//Position - 0xFBA
bool func_28(int iParam0)
{
	if (gameplay::is_bit_set(Global_25347, iParam0)) {
		return true;
	}
	return false;
}

// Position - 0xFD3
bool func_29(int iParam0, vector3 vParam1) { return system::vdist2(vParam1, func_31(iParam0)) < func_30(iParam0); }

// Position - 0xFF0
float func_30(int iParam0) {
	switch (iParam0) {
	case 1: return 1000000f;

	case 2: return 1000000f;

	case 3: return 1500000f;

	case 4: return 500000f;

	case 5: return 500000f;

	case 6: return 500000f;

	case 7: return 500000f;

	case 8: return 500000f;
	}
	return 0f;
}

// Position - 0x1088
Vector3 func_31(int iParam0) {
	switch (iParam0) {
	case 1: return -1155.877f, 48.3426f, 52.4985f;

	case 2: return -1245.12f, -2818.38f, 12.94f;

	case 3: return -2176.19f, 3092.07f, 31.81f;

	case 4: return 1701.666f, 2586.261f, 51.4925f;

	case 5: return 3525.058f, 3711.323f, 35.6423f;

	case 6: return 548.1421f, -3157.961f, 5.0696f;

	case 7: return -1142.411f, -526.4487f, 31.6878f;

	case 8: return 456.8879f, -985.2783f, 35.6895f;
	}
	return 0f, 0f, 0f;
}

// Position - 0x1172
bool func_32(vector3 vParam0, int iParam3, int iParam4, int iParam5) {
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

// Position - 0x1EC6
bool func_33() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return false;
	}
	return true;
}

// Position - 0x1F04
void func_34() {}

// Position - 0x1F0C
void func_35(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x1FA7
void func_36() {}
