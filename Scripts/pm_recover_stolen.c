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
int iLocal_20 = 0;
char *sLocal_21 = NULL;
float fLocal_22 = 0f;
var uLocal_23 = 0;
var uLocal_24 = 0;
var uLocal_25 = 0;
float fLocal_26 = 0f;
float fLocal_27 = 0f;
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
var uLocal_35 = 0;
int iLocal_36 = 0;
struct<28> Local_37 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_65 = 0;
var uLocal_66 = 0;
int iLocal_67 = 0;
int iLocal_68 = 0;
int iLocal_69 = 0;
bool bLocal_70 = 0;
int iLocal_71 = 0;
int iLocal_72 = 0;
var *uLocal_73 = NULL;
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
int iLocal_238 = 0;
int iLocal_239 = 0;
char[] cLocal_240[8] = 0;
var uLocal_241 = 0;
int iLocal_242 = 0;
int iLocal_243 = 0;
int iLocal_244 = 0;
int iLocal_245 = 0;
int iLocal_246 = 0;
var *uLocal_247 = NULL;
var *uLocal_248 = NULL;
int iLocal_249 = 0;
int iLocal_250 = 0;
int iLocal_251 = 0;
int iLocal_252 = 0;
int iLocal_253 = 0;
int *iLocal_254 = NULL;
var uLocal_255 = 0;
var uLocal_256 = -1;
var uLocal_257 = 0;
var uLocal_258 = 0;
var uLocal_259 = 0;
var uLocal_260 = 0;
var uLocal_261 = 0;
var uLocal_262 = 0;
var uLocal_263 = 1000;
var uLocal_264 = 1000;
var uLocal_265 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_67 = -1;
	iLocal_238 = -1;
	iLocal_239 = -1;
	StringCopy(&cLocal_240, "PMRAUD", 8);
	iLocal_252 = -1;
	iLocal_253 = -1;
	gameplay::set_mission_flag(1);
	if (player::has_force_cleanup_occurred(3)) {
		func_81(2);
		func_80();
	}
	func_74();
	while (true) {
		system::wait(0);
		if (func_73()) {
			iLocal_239 = -1;
		}
		else if (iLocal_239 == -1) {
			iLocal_239 = gameplay::get_game_timer();
		}
		func_1();
	}
}

// Position - 0xBA
void func_1() {
	struct<4> Var0;
	vector3 vVar8;
	int iVar11;

	switch (iLocal_36) {
	case 0:
		streaming::request_model(Local_37.f_10);
		if (Local_37.f_11 != 0) {
			streaming::request_model(Local_37.f_11);
		}
		ui::request_additional_text("PRECOV", 0);
		if (ui::has_additional_text_loaded(0)) {
			if (entity::does_entity_exist(Global_100412.f_222[0]) &&
				vehicle::is_vehicle_driveable(Global_100412.f_222[0], 0)) {
				iLocal_244 = Global_100412.f_222[0];
				Global_100412.f_222[0] = 0;
				entity::set_entity_as_mission_entity(iLocal_244, 1, 1);
				Local_37.f_7 = entity::get_entity_model(iLocal_244);
				streaming::set_model_as_no_longer_needed(Local_37.f_7);
				vehicle::set_vehicle_model_is_suppressed(Local_37.f_7, 1);
			}
			if (entity::does_entity_exist(Global_100412.f_225[0])) {
				iLocal_245 = Global_100412.f_225[0];
				Global_100412.f_225[0] = 0;
				entity::set_entity_as_mission_entity(iLocal_245, 1, 1);
				Local_37.f_8 = entity::get_entity_model(iLocal_245);
				ped::set_ped_relationship_group_hash(iLocal_245, iLocal_251);
				ped::set_ped_money(iLocal_245, 0);
				ped::set_ped_accuracy(iLocal_245, 5);
				ped::set_ped_keep_task(iLocal_245, 1);
				ped::set_ped_combat_attributes(iLocal_245, 23, 1);
				if (vehicle::is_this_model_a_bike(Local_37.f_7)) {
					if (Local_37.f_26) {
						ped::set_ped_helmet(iLocal_245, 1);
						ped::give_ped_helmet(iLocal_245, 1, 4096, -1);
					}
					else {
						ped::set_ped_helmet(iLocal_245, 0);
					}
				}
				if (Local_37.f_20) {
					weapon::give_weapon_to_ped(iLocal_245, joaat("weapon_pistol"), 120, 0, 0);
					weapon::give_weapon_to_ped(iLocal_245, joaat("weapon_microsmg"), 120, 1, 1);
				}
				streaming::set_model_as_no_longer_needed(Local_37.f_8);
				entity::set_entity_proofs(iLocal_245, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
				func_72(&uLocal_73, 3, iLocal_245, "ABIGAIL", 0, 1);
			}
			if (entity::does_entity_exist(Global_100412.f_225[1])) {
				iLocal_246 = Global_100412.f_225[1];
				Global_100412.f_225[1] = 0;
				entity::set_entity_as_mission_entity(iLocal_246, 1, 1);
				Local_37.f_9 = entity::get_entity_model(iLocal_246);
				ped::set_ped_relationship_group_hash(iLocal_246, iLocal_251);
				ped::set_ped_money(iLocal_246, 0);
				ped::set_ped_accuracy(iLocal_246, 5);
				ped::set_ped_keep_task(iLocal_246, 1);
				ped::set_ped_combat_attributes(iLocal_246, 23, 1);
				if (vehicle::is_this_model_a_bike(Local_37.f_7)) {
					if (Local_37.f_26) {
						ped::set_ped_helmet(iLocal_246, 1);
						ped::give_ped_helmet(iLocal_246, 1, 4096, -1);
					}
					else {
						ped::set_ped_helmet(iLocal_246, 0);
					}
				}
				streaming::set_model_as_no_longer_needed(Local_37.f_9);
				entity::set_entity_proofs(iLocal_246, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
			}
			if (!entity::does_entity_exist(iLocal_245) || !ped::is_ped_injured(iLocal_245))
				&&(!entity::does_entity_exist(iLocal_246) || !ped::is_ped_injured(iLocal_246)) {
					iLocal_249 = func_71(iLocal_244, 1, 0);
					StringCopy(&Var0, "STOP_THIEF_", 32);
					StringConCat(&Var0, &Local_37.f_12, 32);
					func_70(&Var0, 7500, 1);
					func_69(&Local_37.f_22, 10000);
					iLocal_238 = 0;
					iLocal_68 = 0;
					iLocal_69 = 0;
					if (Local_37.f_19 != -1) {
						iLocal_67 = gameplay::get_game_timer() + Local_37.f_19;
					}
				}
			iLocal_36++;
		}
		break;

	case 1:
		if (entity::does_entity_exist(iLocal_245) && ped::is_ped_injured(iLocal_245) ||
			entity::does_entity_exist(iLocal_246) && ped::is_ped_injured(iLocal_246) ||
			Local_37.f_17 && vehicle::is_this_model_a_bike(Local_37.f_7) &&
				!ped::is_ped_in_vehicle(iLocal_245, iLocal_244, 0) ||
			Local_37.f_17 && vehicle::is_this_model_a_bike(Local_37.f_7) &&
				!ped::is_ped_in_vehicle(iLocal_246, iLocal_244, 0) ||
			Local_37.f_18 && !ped::is_ped_in_vehicle(iLocal_245, iLocal_244, 0) && func_68(iLocal_245)) {
			if (Local_37.f_17 && vehicle::is_this_model_a_bike(Local_37.f_7)) {
				if (!ped::is_ped_injured(iLocal_245) && ped::is_ped_in_vehicle(iLocal_245, iLocal_244, 0)) {
					ped::knock_ped_off_vehicle(iLocal_245);
				}
				if (!ped::is_ped_injured(iLocal_246) && ped::is_ped_in_vehicle(iLocal_246, iLocal_244, 0)) {
					ped::knock_ped_off_vehicle(iLocal_246);
				}
			}
			if (ui::is_message_being_displayed()) {
				ui::clear_prints();
			}
			if (ui::is_help_message_being_displayed()) {
				ui::clear_help(1);
			}
			if (func_73()) {
				func_66();
			}
			iLocal_238 = -1;
			if (streaming::has_model_loaded(Local_37.f_10) &&
				(Local_37.f_11 == 0 || streaming::has_model_loaded(Local_37.f_11))) {
				if (entity::does_entity_exist(iLocal_245)) {
					vVar8 = {ped::get_dead_ped_pickup_coords(iLocal_245, 1067030938, 1069547520)};
					uLocal_247 = object::create_pickup(joaat("pickup_money_med_bag"), vVar8, Local_37.f_28, -1, 1,
													   Local_37.f_10);
					streaming::set_model_as_no_longer_needed(Local_37.f_10);
					if (ui::does_blip_exist(iLocal_249)) {
						ui::remove_blip(&iLocal_249);
					}
					iLocal_249 = func_65(uLocal_247);
				}
				if (entity::does_entity_exist(iLocal_246) && Local_37.f_11 != 0) {
					vVar8 = {ped::get_dead_ped_pickup_coords(iLocal_246, 1067030938, 1069547520)};
					uLocal_248 = object::create_pickup(joaat("pickup_money_med_bag"), vVar8, Local_37.f_29, -1, 1,
													   Local_37.f_11);
					streaming::set_model_as_no_longer_needed(Local_37.f_11);
					if (ui::does_blip_exist(iLocal_250)) {
						ui::remove_blip(&iLocal_250);
					}
					iLocal_250 = func_65(uLocal_248);
				}
				func_64(&iLocal_254, 0, 0);
				iLocal_242 = 1;
				iLocal_36++;
			}
		}
		else {
			if (ped::is_ped_in_any_vehicle(iLocal_245, 0)) {
				if (ui::does_blip_exist(iLocal_250)) {
					ui::remove_blip(&iLocal_250);
				}
				if (!ui::does_blip_exist(iLocal_249)) {
					iLocal_249 = func_71(ped::get_vehicle_ped_is_in(iLocal_245, 0), 1, 0);
				}
			}
			else {
				if (ui::does_blip_exist(iLocal_249)) {
					ui::remove_blip(&iLocal_249);
				}
				if (!ui::does_blip_exist(iLocal_250)) {
					iLocal_250 = func_61(iLocal_245, 1, 145);
				}
			}
			func_40(&iLocal_254, iLocal_245, 0, 0, 1, 1, 1);
			if (iLocal_67 != -1) {
				if (gameplay::get_game_timer() > iLocal_67) {
					func_39();
				}
				else {
					iVar11 = func_38(gameplay::absi(iLocal_67 - gameplay::get_game_timer()), 0, Local_37.f_19);
					if (iVar11 <= 10000) {
						func_34(Local_37.f_19 - iVar11, Local_37.f_19, "UPLOAD", 9, 10000, 1, 2);
					}
					else {
						func_34(Local_37.f_19 - iVar11, Local_37.f_19, "UPLOAD", 9, 0, 1, 2);
					}
				}
			}
			if (entity::does_entity_exist(iLocal_245)) {
				if (func_33(player::player_ped_id(), iLocal_245, 1) > 500f) {
					func_39();
				}
				else if (ui::does_blip_exist(iLocal_249)) {
					func_32(iLocal_249, iLocal_245, 500f, 0.8f, 0);
				}
			}
			if (entity::does_entity_exist(iLocal_246)) {
				if (func_33(player::player_ped_id(), iLocal_246, 1) > 500f) {
					func_39();
				}
				else if (ui::does_blip_exist(iLocal_250)) {
					func_32(iLocal_250, iLocal_246, 500f, 0.8f, 0);
				}
			}
		}
		break;

	case 2:
		if (!object::does_pickup_exist(uLocal_247) || object::has_pickup_been_collected(uLocal_247)) {
			if (object::does_pickup_exist(uLocal_247)) {
				object::remove_pickup(uLocal_247);
			}
			if (ui::does_blip_exist(iLocal_249)) {
				ui::remove_blip(&iLocal_249);
			}
		}
		if (!object::does_pickup_exist(uLocal_248) || object::has_pickup_been_collected(uLocal_248)) {
			if (object::does_pickup_exist(uLocal_248)) {
				object::remove_pickup(uLocal_248);
			}
			if (ui::does_blip_exist(iLocal_250)) {
				ui::remove_blip(&iLocal_250);
			}
		}
		if (!ui::does_blip_exist(iLocal_249) && !ui::does_blip_exist(iLocal_250)) {
			if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
				if (!iLocal_71) {
					func_70("LOSE_WANTED", 7500, 1);
					iLocal_71 = 1;
				}
			}
			else {
				ui::clear_prints();
				func_31();
			}
		}
		else if (object::does_pickup_exist(uLocal_247) &&
					 func_30(player::player_ped_id(), object::get_pickup_coords(uLocal_247), 1) > 500f ||
				 object::does_pickup_exist(uLocal_248) &&
					 func_30(player::player_ped_id(), object::get_pickup_coords(uLocal_248), 1) > 500f) {
			func_39();
		}
		else if (iLocal_242 && func_28()) {
			ui::clear_prints();
			StringCopy(&Var0, "PKUP_", 32);
			StringConCat(&Var0, &Local_37.f_12, 32);
			func_70(&Var0, 7500, 1);
			iLocal_242 = 0;
		}
		break;
	}
	if (entity::does_entity_exist(iLocal_245) && !ped::is_ped_injured(iLocal_245)) {
		if (entity::does_entity_exist(iLocal_244) && vehicle::is_vehicle_driveable(iLocal_244, 0) && !iLocal_68) {
			if (!func_27(iLocal_245, 242628503, 1)) {
				ai::open_sequence_task(&iLocal_243);
				ai::task_vehicle_temp_action(0, iLocal_244, 31, 10000);
				ai::task_vehicle_mission_ped_target(0, iLocal_244, player::player_ped_id(), 8, 30f, Local_37.f_16,
													1000f, 0f, 1);
				ai::close_sequence_task(iLocal_243);
				ai::task_perform_sequence(iLocal_245, iLocal_243);
				ai::clear_sequence_task(&iLocal_243);
				iLocal_68 = 1;
			}
		}
		else if (func_27(iLocal_245, 242628503, 1) && ai::get_sequence_progress(iLocal_245) < 1 && !iLocal_69 &&
				 (entity::is_entity_in_angled_area(player::player_ped_id(), Local_37, Local_37.f_3, Local_37.f_6, 0, 1,
												   0) ||
				  ped::has_ped_received_event(iLocal_245, 122) || ped::has_ped_received_event(iLocal_245, 123) ||
				  ped::has_ped_received_event(iLocal_245, 124) || ped::has_ped_received_event(iLocal_245, 23) ||
				  func_26(Global_100412.f_35, 134217728))) {
			ai::task_vehicle_mission_ped_target(iLocal_245, iLocal_244, player::player_ped_id(), 8, 30f, Local_37.f_16,
												1000f, 0f, 1);
			iLocal_69 = 1;
		}
		else if (!func_27(iLocal_245, 242628503, 1) && !func_27(iLocal_245, -1273030092, 1) ||
				 !ped::is_ped_in_any_vehicle(iLocal_245, 0)) {
			if (!func_27(iLocal_245, 1805844857, 1)) {
				ai::task_smart_flee_ped(iLocal_245, player::player_ped_id(), 1000f, -1, 0, 1);
			}
		}
		else if (ped::is_ped_in_vehicle(iLocal_245, iLocal_244, 1) &&
				 (vehicle::is_vehicle_stuck_timer_up(iLocal_244, 0, 3000) ||
				  vehicle::is_vehicle_stuck_timer_up(iLocal_244, 1, 3000) ||
				  vehicle::is_vehicle_stuck_timer_up(iLocal_244, 2, 8000) ||
				  vehicle::is_vehicle_stuck_timer_up(iLocal_244, 3, 8000))) {
			if (!func_27(iLocal_245, 451360105, 1)) {
				ai::task_leave_vehicle(iLocal_245, iLocal_244, 0);
			}
		}
		if (Local_37.f_20) {
			if (!bLocal_70) {
				if (entity::has_entity_been_damaged_by_entity(iLocal_245, player::player_ped_id(), 1) ||
					entity::has_entity_been_damaged_by_entity(iLocal_244, player::player_ped_id(), 1) ||
					ped::has_ped_received_event(iLocal_245, 122) || ped::has_ped_received_event(iLocal_245, 123) ||
					ped::has_ped_received_event(iLocal_245, 124)) {
					bLocal_70 = true;
				}
			}
			if (bLocal_70) {
				if (ai::get_script_task_status(iLocal_245, 242628503) == 1 &&
						ai::get_sequence_progress(iLocal_245) == 1 ||
					ai::get_script_task_status(iLocal_245, -1273030092) == 1) {
					if (!ai::is_driveby_task_underneath_driving_task(iLocal_245)) {
						weapon::set_current_ped_vehicle_weapon(iLocal_245, joaat("weapon_microsmg"));
						ai::task_drive_by(iLocal_245, player::player_ped_id(), 0, 0f, 0f, 0f, 1000f, 100, 1,
										  -753768974);
					}
				}
			}
		}
		if (entity::does_entity_exist(iLocal_244) && vehicle::is_vehicle_driveable(iLocal_244, 0)) {
			if (!iLocal_72) {
				if (func_27(iLocal_245, 242628503, 1) && ai::get_sequence_progress(iLocal_245) == 1 ||
					func_27(iLocal_245, -1273030092, 1)) {
					if (audio::request_script_audio_bank("TAKINGS", 0, -1)) {
						audio::play_sound_from_entity(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_244, 0, 0, 0);
						iLocal_72 = 1;
					}
				}
			}
		}
	}
	if (entity::does_entity_exist(iLocal_246) && !ped::is_ped_injured(iLocal_246)) {
		if (!ped::is_ped_in_any_vehicle(iLocal_246, 0) && !func_27(iLocal_246, 1805844857, 1)) {
			ai::task_smart_flee_ped(iLocal_246, player::player_ped_id(), 1000f, -1, 0, 1);
		}
	}
	if (entity::does_entity_exist(iLocal_245) && !ped::is_ped_injured(iLocal_245)) {
		if (entity::is_entity_in_air(iLocal_245) && !ped::is_ped_in_any_vehicle(iLocal_245, 0)) {
			if (func_73()) {
				func_66();
			}
		}
		else if (func_33(player::player_ped_id(), iLocal_245, 1) < 15f) {
			switch (iLocal_238) {
			case 0:
				if (func_25()) {
					MemCopy(&Var0, {Local_37.f_12}, 8);
					StringConCat(&Var0, "_1", 32);
					MemCopy(&Var0, {func_24(&Var0)}, 8);
					if (func_7(&uLocal_73, &cLocal_240, &Var0, 8, 0, 0, 0)) {
						StringCopy(&Var0, "", 32);
						iLocal_238++;
					}
				}
				break;

			case 1:
				if (func_25()) {
					if (!audio::is_ambient_speech_playing(iLocal_245)) {
						if (func_5() == 0) {
							StringCopy(&Var0, "GENERIC_INSULT_HIGH", 32);
						}
						else if (func_5() == 1) {
							StringCopy(&Var0, "GENERIC_INSULT_MED", 32);
						}
						func_3(iLocal_245, &Var0, 10);
						iLocal_239 = -1;
						StringCopy(&Var0, "", 32);
						iLocal_238++;
					}
				}
				break;

			case 2:
				if (func_25() && gameplay::get_game_timer() - iLocal_239 > 3500) {
					MemCopy(&Var0, {Local_37.f_12}, 8);
					StringConCat(&Var0, "_3", 32);
					MemCopy(&Var0, {func_24(&Var0)}, 8);
					if (func_7(&uLocal_73, &cLocal_240, &Var0, 8, 0, 0, 0)) {
						StringCopy(&Var0, "", 32);
						iLocal_238++;
					}
				}
				break;

			case 3:
				if (func_25() && gameplay::get_game_timer() - iLocal_239 > 1500) {
					if (!audio::is_ambient_speech_playing(iLocal_245)) {
						if (func_5() == 0) {
							StringCopy(&Var0, "GENERIC_INSULT_HIGH", 32);
						}
						else if (func_5() == 1) {
							StringCopy(&Var0, "GENERIC_INSULT_MED", 32);
						}
						func_3(iLocal_245, &Var0, 10);
						iLocal_239 = -1;
						StringCopy(&Var0, "", 32);
						iLocal_238--;
					}
				}
				break;
			}
		}
	}
	if (entity::does_entity_exist(iLocal_245)) {
		if (ped::is_ped_injured(iLocal_245)) {
			if (Local_37.f_21) {
				func_2(1);
				func_39();
			}
		}
		else if (Local_37.f_27) {
			if (iLocal_252 == -1) {
				if (!entity::is_entity_in_air(iLocal_245)) {
					iLocal_252 = gameplay::get_game_timer();
				}
			}
			else if (gameplay::get_game_timer() - iLocal_252 > 2000) {
				entity::set_entity_proofs(iLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_246)) {
		if (ped::is_ped_injured(iLocal_246)) {
			if (Local_37.f_21) {
				func_2(1);
				func_39();
			}
		}
		else if (Local_37.f_27) {
			if (iLocal_253 == -1) {
				if (!entity::is_entity_in_air(iLocal_246)) {
					iLocal_253 = gameplay::get_game_timer();
				}
			}
			else if (gameplay::get_game_timer() - iLocal_253 > 2000) {
				entity::set_entity_proofs(iLocal_246, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

// Position - 0xDAF
void func_2(int iParam0) { Global_100412.f_220 = iParam0; }

// Position - 0xDBF
void func_3(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_4(iParam2), 1);
}

// Position - 0xDD6
int func_4(int iParam0) {
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

// Position - 0xFC6
int func_5() { return func_6(Global_100412.f_20, Global_100412.f_29); }

// Position - 0xFDE
int func_6(int iParam0, int iParam1) {
	switch (iParam0) {
	case 6:
	case 5:
	case 7: return 0;

	case 11:
	case 12:
	case 13:
	case 14:
		switch (iParam1) {
		case 0: return 0;

		case 1: return 1;
		}
		break;
	}
	return iParam1;
}

// Position - 0x1044
bool func_7(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_8(sParam2, iParam3, 0);
}

// Position - 0x1092
int func_8(char *sParam0, int iParam1, int iParam2) {
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
					func_22();
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
		if (func_21(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_20();
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
				func_13();
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
				if (func_12()) {
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
			if (func_11()) {
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
			func_10();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_9();
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
		func_22();
	}
	return 0;
}

// Position - 0x135E
void func_9() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x138F
void func_10() {
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

// Position - 0x1424
bool func_11() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x144B
bool func_12() {
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

// Position - 0x14E4
void func_13() {
	if (func_19(14)) {
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
		Global_14443 = func_14();
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

// Position - 0x1586
int func_14() {
	func_15();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x159F
void func_15() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_18(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_17(player::player_ped_id());
			if (func_16(iVar0) && (!func_19(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_16(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x169C
bool func_16(int iParam0) { return iParam0 < 3; }

// Position - 0x16A8
int func_17(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_18(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x16E5
int func_18(int iParam0) {
	if (func_16(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x170F
bool func_19(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x171D
void func_20() {
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

// Position - 0x1774
bool func_21(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x17AF
void func_22() {
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

// Position - 0x1806
void func_23(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, var uParam5) {
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

// Position - 0x185C
struct<4> func_24(char *sParam0) {
	struct<4> Var0;

	StringCopy(&Var0, sParam0, 16);
	switch (func_14()) {
	case 0: StringConCat(&Var0, "_M", 16); break;

	case 1: StringConCat(&Var0, "_F", 16); break;

	case 2: StringConCat(&Var0, "_T", 16); break;
	}
	return Var0;
}

//Position - 0x18AA
bool func_25()
{
	if (func_73()) {
		return false;
	}
	if (ui::is_subtitle_preference_switched_on()) {
		if (ui::is_message_being_displayed()) {
			return false;
		}
	}
	return true;
}

// Position - 0x18D0
bool func_26(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0x18DF
int func_27(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = ai::get_script_task_status(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0) {
		return 1;
	}
	else if (!iParam2) {
		if (iVar0 == 2 || iVar0 == 3) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x1925
int func_28() {
	if (ui::is_message_being_displayed()) {
		return 0;
	}
	if (ui::is_subtitle_preference_switched_on()) {
		if (func_73() && !func_29()) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x1955
int func_29() {
	if (Global_16756 == 1) {
		return 1;
	}
	return 0;
}

// Position - 0x196C
float func_30(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0x19A6
void func_31() {
	func_81(1);
	func_80();
}

// Position - 0x19B7
void func_32(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) {
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

// Position - 0x1B10
float func_33(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x1B6E
void func_34(int iParam0, var uParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_35(iParam0, uParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0,
			0, 1, -1);
}

// Position - 0x1B99
void func_35(var uParam0, var uParam1, char *sParam2, var uParam3, var uParam4, var uParam5, float fParam6,
			 float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13,
			 int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20,
			 int iParam21, int iParam22, int iParam23) {
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9) {
		if (iVar0 == -1) {
			if (func_37(0, iVar1) == 0) {
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1) {
		Global_1354542.f_1 = 1;
		func_36(0, iVar0);
		Global_1354542.f_1009[iVar0] = uParam0;
		Global_1354542.f_1009.f_11[iVar0] = uParam1;
		StringCopy(&Global_1354542.f_1009.f_22[iVar0 /*16*/], sParam2, 64);
		Global_1354542.f_1009.f_194[iVar0] = uParam3;
		Global_1354542.f_1009.f_183[iVar0] = uParam4;
		Global_1354542.f_1009.f_216[iVar0] = uParam5;
		Global_1354542.f_1009.f_227[iVar0 /*3*/] = fParam6;
		Global_1354542.f_1009.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1354542.f_1009.f_258[iVar0] = iParam8;
		Global_1354542.f_1009.f_269[iVar0] = uParam9;
		Global_1354542.f_1009.f_312[iVar0] = iParam10;
		Global_1354542.f_1009.f_323[iVar0] = iParam11;
		Global_1354542.f_1009.f_334[iVar0] = iParam12;
		Global_1354542.f_1009.f_345[iVar0] = iParam13;
		Global_1354542.f_1004 = 1;
		Global_1354542.f_1009.f_356[iVar0] = iParam14;
		Global_1354542.f_1009.f_367[iVar0] = iParam15;
		Global_1354542.f_1009.f_378[iVar0] = iParam16;
		Global_1354542.f_1009.f_389[iVar0] = iParam17;
		Global_1354542.f_1009.f_400[iVar0] = iParam18;
		Global_1354542.f_1009.f_411[iVar0] = iParam19;
		Global_1354542.f_1009.f_422[iVar0] = iParam20;
		Global_1354542.f_1009.f_433[iVar0] = iParam21;
		Global_1354542.f_1009.f_444[iVar0] = iParam22;
		Global_1354542.f_1009.f_455[iVar0] = iParam23;
	}
}

// Position - 0x1D62
void func_36(int iParam0, int iParam1) { gameplay::set_bit(&Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x1D7B
int func_37(int iParam0, int iParam1) { return gameplay::is_bit_set(Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x1D94
int func_38(int iParam0, int iParam1, int iParam2) {
	if (iParam0 > iParam2) {
		return iParam2;
	}
	else if (iParam0 < iParam1) {
		return iParam1;
	}
	return iParam0;
}

// Position - 0x1DB9
void func_39() {
	func_81(2);
	func_80();
}

// Position - 0x1DCA
void func_40(int *iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	iParam0->f_6 = 0;
	func_41(iParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x1DEC
void func_41(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
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
	if (func_60(iVar0)) {
		func_59();
	}
	if (func_58(iParam1) && entity::is_entity_visible(iParam1)) {
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
			if (func_53(iParam0, bParam7, bParam9, 0)) {
				func_49(iParam0, iParam1, vParam2, iParam6);
			}
			if (*iParam0) {
				*iParam0 = 0;
			}
			else if (iParam0->f_6 == 2) {
				if (func_45(iVar0)) {
					if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0) &&
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (iVar1 && !ui::is_help_message_being_displayed() && uParam8) {
							if (!func_60(iVar0)) {
								func_69(iVar0, -1);
								iParam0->f_3 = iVar0;
								if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
									func_44(1);
								}
							}
						}
					}
				}
			}
			else if (func_45(iVar0)) {
				if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0)) {
					if (entity::is_entity_on_screen(iParam1) && iVar1 && !ui::is_help_message_being_displayed() &&
						uParam8) {
						if (!func_60(iVar0)) {
							func_69(iVar0, -1);
							iParam0->f_3 = iVar0;
							if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
								func_44(1);
							}
						}
					}
				}
			}
		}
		else {
			if (!gameplay::is_string_null(sParam5)) {
				if (func_60(sParam5)) {
					ui::clear_help(1);
				}
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (ped::is_ped_in_any_boat(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
						func_64(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
						func_64(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
						func_64(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
						func_64(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
						func_64(iParam0, iVar0, 1);
					}
				}
				else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
					func_64(iParam0, iVar0, 1);
				}
			}
			if (!func_53(iParam0, bParam7, bParam9, 0)) {
				if (!*iParam0 && !iParam0->f_1 && !func_43(iParam0)) {
					func_42(iParam0);
				}
			}
		}
	}
	else {
		func_64(iParam0, iVar0, 0);
	}
}

// Position - 0x2159
void func_42(int *iParam0) {
	if (func_58(player::player_ped_id())) {
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

// Position - 0x21C2
bool func_43(var *uParam0) {
	int iVar0;

	if (uParam0->f_2 > 0) {
		iVar0 = uParam0->f_10 / 2;
		if (uParam0->f_2 + iVar0 > gameplay::get_game_timer()) {
			return true;
		}
	}
	return false;
}

// Position - 0x21ED
int func_44(int iParam0) {
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

// Position - 0x2297
bool func_45(char *sParam0) {
	if (!func_46(1, 1, 0)) {
		if (!gameplay::is_string_null_or_empty(sParam0) && func_60(sParam0) || func_60("CMN_HINT")) {
			ui::clear_help(1);
		}
		return false;
	}
	switch (Global_35781) {
	case 0:
	case 3:
		if (func_44(0) < 3) {
			return true;
		}
		break;

	case 4:
		if (func_44(0) < 1) {
			return true;
		}
		break;

	case 5:
	case 15:
		if (func_44(0) < 1) {
			return true;
		}
		break;

	default: break;
	}
	return false;
}

// Position - 0x2330
int func_46(int iParam0, int iParam1, int iParam2) {
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
	if (func_48(0)) {
		return 0;
	}
	if (func_47()) {
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

// Position - 0x24AC
bool func_47() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x24C1
bool func_48(int iParam0) {
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

// Position - 0x251B
void func_49(int *iParam0, int iParam1, vector3 vParam2, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (entity::is_entity_dead(iParam1, 0)) {
		func_64(iParam0, 0, 0);
	}
	if (func_52(vParam2, 0f, 0f, 0f, 0)) {
		if (entity::is_entity_a_ped(iParam1)) {
			iVar0 = entity::get_ped_index_from_entity_index(iParam1);
			if (!ped::is_ped_in_any_vehicle(iVar0, 0)) {
				if (ped::is_ped_a_player(iVar0)) {
					if (!func_50()) {
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

// Position - 0x2620
int func_50() { return func_51(player::player_id()); }

// Position - 0x2630
int func_51(int iParam0) {
	if (entity::get_entity_model(player::get_player_ped(iParam0)) == joaat("mp_f_freemode_01")) {
		return 1;
	}
	return 0;
}

// Position - 0x264F
bool func_52(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x2696
bool func_53(var *uParam0, bool bParam1, bool bParam2, int iParam3) {
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
				if (func_57(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (func_56(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (func_56(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (func_57(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		if (func_43(uParam0)) {
			uParam0->f_7 = 1;
			uParam0->f_5 = 4;
		}
		break;

	case 1:
		if (gameplay::get_game_timer() - uParam0->f_4 <= 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (!func_57(bParam1, bParam2, iParam3)) {
						uParam0->f_4 = gameplay::get_game_timer();
						uParam0->f_5 = 3;
					}
				}
				else if (!func_56(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (!func_56(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!func_57(bParam1, bParam2, iParam3)) {
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
				if (!func_57(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (!func_56(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (!func_56(bParam1, bParam2, iParam3) || ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
				ai::get_is_task_active(player::player_ped_id(), 2)) {
				uParam0->f_5 = 0;
			}
			else if (!func_57(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - uParam0->f_4 > 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (func_55(bParam1, bParam2, iParam3)) {
						uParam0->f_5 = 0;
					}
				}
				else if (func_54(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) || func_54(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
					ai::get_is_task_active(player::player_ped_id(), 2)) {
					uParam0->f_5 = 0;
				}
				else if (func_55(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
		}
		break;

	case 4:
		if (!func_43(uParam0)) {
			uParam0->f_5 = 0;
		}
		break;
	}
	if (!func_46(bParam1, bParam2, iParam3)) {
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7) {
		func_59();
		return true;
	}
	else {
		return false;
	}
	return false;
}

// Position - 0x2A02
bool func_54(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_46(bParam0, bParam1, bParam2)) {
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

// Position - 0x2A54
bool func_55(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_46(bParam0, bParam1, bParam2)) {
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

// Position - 0x2A9D
bool func_56(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_46(bParam0, bParam1, bParam2)) {
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

// Position - 0x2AFC
bool func_57(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_46(bParam0, bParam1, bParam2)) {
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

// Position - 0x2B52
bool func_58(int iParam0) {
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

// Position - 0x2BAD
void func_59() { gameplay::set_bit(&Global_2314, 4); }

// Position - 0x2BBD
bool func_60(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x2BD0
int func_61(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = func_62(iParam0, !iParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x2C22
int func_62(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_63(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_63(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_63(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x2CC6
var func_63(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x2CDD
void func_64(int *iParam0, int iParam1, int iParam2) {
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
		if (func_60(iParam0->f_3)) {
			ui::clear_help(1);
		}
	}
	if (!gameplay::is_string_null(sVar0)) {
		if (func_60(sVar0)) {
			ui::clear_help(1);
		}
	}
}

// Position - 0x2DBA
int func_65(var *uParam0) {
	int iVar0;

	if (!object::does_pickup_exist(uParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_pickup(uParam0);
	ui::set_blip_scale(iVar0, func_63(network::network_is_game_in_progress(), 0.7f, 0.7f));
	return iVar0;
}

// Position - 0x2DF2
void func_66() {
	Global_14611 = 0;
	func_67();
}

// Position - 0x2E02
void func_67() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x2E23
int func_68(int iParam0) {
	if (ped::has_ped_received_event(iParam0, 122) || ped::has_ped_received_event(iParam0, 123) ||
		ped::has_ped_received_event(iParam0, 124) || ped::has_ped_received_event(iParam0, 41) ||
		ped::_0x6CD5A433374D4CFB(iParam0, player::player_ped_id()) && ped::has_ped_received_event(iParam0, 29) ||
		entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
		return 1;
	}
	else {
		entity::clear_entity_last_damage_entity(iParam0);
	}
	return 0;
}

// Position - 0x2E9C
void func_69(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x2EB3
void func_70(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 1);
}

// Position - 0x2ECC
int func_71(int iParam0, int iParam1, int iParam2) { return func_62(iParam0, !iParam1, iParam2); }

// Position - 0x2EDF
void func_72(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x2F7A
bool func_73() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0x2F9C
void func_74() {
	func_75(&Local_37);
	ped::add_relationship_group("relThief", &iLocal_251);
	ped::set_relationship_between_groups(5, 1862763509, iLocal_251);
	ped::set_relationship_between_groups(5, iLocal_251, 1862763509);
	switch (func_14()) {
	case 0: func_72(&uLocal_73, 0, player::player_ped_id(), "MICHAEL", 0, 1); break;

	case 1: func_72(&uLocal_73, 1, player::player_ped_id(), "FRANKLIN", 0, 1); break;

	case 2: func_72(&uLocal_73, 2, player::player_ped_id(), "TREVOR", 0, 1); break;
	}
	player::set_wanted_level_multiplier(0.1f);
}

// Position - 0x302D
void func_75(var *uParam0) {
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = {entity::get_entity_coords(player::player_ped_id(), 0)};
	vVar0.z = 0f;
	iVar3 = 0;
	iVar4 = 0;
	gameplay::set_bit(&iVar3, 3);
	gameplay::set_bit(&iVar3, 4);
	gameplay::set_bit(&iVar4, 3);
	gameplay::set_bit(&iVar4, 4);
	gameplay::set_bit(&iVar4, 8);
	switch (func_5()) {
	case 0:
		uParam0->f_8 = joaat("a_m_m_eastsa_02");
		uParam0->f_10 = joaat("prop_cs_duffel_01b");
		uParam0->f_16 = 572;
		StringCopy(&uParam0->f_12, "MON", 16);
		uParam0->f_20 = 1;
		uParam0->f_28 = iVar3;
		break;

	case 1:
		uParam0->f_8 = joaat("a_m_m_paparazzi_01");
		uParam0->f_9 = joaat("a_m_m_paparazzi_01");
		uParam0->f_10 = joaat("prop_pap_camera_01");
		uParam0->f_11 = joaat("prop_npc_phone");
		uParam0->f_16 = 60;
		uParam0->f_17 = 1;
		uParam0->f_18 = 1;
		StringCopy(&uParam0->f_12, "PAP", 16);
		uParam0->f_19 = 60000;
		uParam0->f_21 = 1;
		StringCopy(&uParam0->f_22, "PAP_HLP", 16);
		uParam0->f_26 = 0;
		uParam0->f_27 = 1;
		uParam0->f_28 = iVar4;
		uParam0->f_29 = iVar3;
		break;
	}
	switch (func_79()) {
	case 5:
		*uParam0 = {178.0117f, 202.3507f, 102.9037f};
		uParam0->f_3 = {514.5839f, 78.78811f, 111.1864f};
		uParam0->f_6 = 131.0625f;
		break;

	case 6:
		*uParam0 = {418.5796f, -636.2899f, 25.43758f};
		uParam0->f_3 = {400.2468f, -826.1611f, 44.10468f};
		uParam0->f_6 = 95.375f;
		break;

	case 7:
		*uParam0 = {-1368.458f, -238.4543f, 40.36241f};
		uParam0->f_3 = {-1475.669f, -127.621f, 65.65466f};
		uParam0->f_6 = 158.25f;
		break;

	case 11:
		if (func_76(func_79(), vVar0)) {
			*uParam0 = {-602.3785f, 258.2744f, 79.0293f};
			uParam0->f_3 = {-469.064f, 244.8735f, 97.88577f};
			uParam0->f_6 = 70.125f;
		}
		else {
			*uParam0 = {-621.5889f, 262.0915f, 78.67405f};
			uParam0->f_3 = {-494.7666f, 248.2196f, 97.88564f};
			uParam0->f_6 = 70.125f;
		}
		break;

	case 12:
		if (func_76(func_79(), vVar0)) {
			*uParam0 = {137.2073f, 392.7482f, 110.9443f};
			uParam0->f_3 = {297.2104f, 336.0269f, 120.3525f};
			uParam0->f_6 = 95.375f;
		}
		else {
			*uParam0 = {191.3225f, 364.9949f, 104.5153f};
			uParam0->f_3 = {320.3688f, 325.2877f, 120.2689f};
			uParam0->f_6 = 70.125f;
		}
		break;

	case 13:
		if (func_76(func_79(), vVar0)) {
			*uParam0 = {-221.6586f, 6310.131f, 28.40555f};
			uParam0->f_3 = {-319.8287f, 6211.665f, 46.19521f};
			uParam0->f_6 = 95.375f;
		}
		else {
			*uParam0 = {-260.2809f, 6273.981f, 28.42822f};
			uParam0->f_3 = {-371.5657f, 6164.586f, 46.1894f};
			uParam0->f_6 = 95.375f;
		}
		break;

	case 14:
		*uParam0 = {-2313.765f, 4159.022f, 29.59011f};
		uParam0->f_3 = {-2140.887f, 4437.057f, 72.619f};
		uParam0->f_6 = 113.5f;
		break;
	}
}

// Position - 0x338D
bool func_76(int iParam0, vector3 vParam1) {
	switch (iParam0) {
	case 5:
		if (func_77(func_78(vParam1 - Vector(0f, 174.58f, 335.5574f)),
					func_78(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f) {
			return true;
		}
		else {
			return false;
		}
		break;

	case 6:
		if (func_77(func_78(vParam1 - Vector(0f, -711.023f, 393.0992f)),
					func_78(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f) {
			return true;
		}
		else {
			return false;
		}
		break;

	case 7:
		if (func_77(func_78(vParam1 - Vector(0f, -215.2002f, -1423.254f)),
					func_78(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f) {
			return true;
		}
		else {
			return false;
		}
		break;

	case 11:
		if (func_77(func_78(vParam1 - Vector(0f, 274.9096f, -564.5655f)),
					func_78(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f) {
			return true;
		}
		else {
			return false;
		}
		break;

	case 12:
		if (func_77(func_78(vParam1 - Vector(0f, 338.8084f, 225.5057f)),
					func_78(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f) {
			return true;
		}
		else {
			return false;
		}
		break;

	case 13:
		if (func_77(func_78(vParam1 - Vector(0f, 6256.5f, -299.9329f)),
					func_78(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f) {
			return true;
		}
		else {
			return false;
		}
		break;

	case 14:
		if (func_77(func_78(vParam1 - Vector(0f, 4287.951f, -2200.204f)),
					func_78(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f) {
			return true;
		}
		else {
			return false;
		}
		break;

	default: break;
	}
	return false;
}

// Position - 0x35B4
float func_77(vector3 vParam0, vector3 vParam3) {
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

// Position - 0x35D5
Vector3 func_78(vector3 vParam0) {
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

// Position - 0x3614
int func_79() { return Global_100412.f_20; }

// Position - 0x3622
void func_80() {
	if (entity::does_entity_exist(iLocal_245)) {
		if (!ped::is_ped_injured(iLocal_245)) {
			ai::task_smart_flee_ped(iLocal_245, player::player_ped_id(), 1000f, -1, 0, 1);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_245);
	}
	if (entity::does_entity_exist(iLocal_246)) {
		if (!ped::is_ped_injured(iLocal_246)) {
			ai::task_smart_flee_ped(iLocal_246, player::player_ped_id(), 1000f, -1, 0, 1);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_246);
	}
	if (entity::does_entity_exist(iLocal_244)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_244);
	}
	if (object::does_pickup_exist(uLocal_247)) {
		object::remove_pickup(uLocal_247);
	}
	if (object::does_pickup_exist(uLocal_248)) {
		object::remove_pickup(uLocal_248);
	}
	if (ui::does_blip_exist(iLocal_249)) {
		ui::remove_blip(&iLocal_249);
	}
	if (ui::does_blip_exist(iLocal_250)) {
		ui::remove_blip(&iLocal_250);
	}
	vehicle::set_vehicle_model_is_suppressed(Local_37.f_7, 0);
	player::set_wanted_level_multiplier(1f);
	ped::remove_relationship_group(iLocal_251);
	script::terminate_this_thread();
}

// Position - 0x36E3
void func_81(int iParam0) { Global_100412.f_22 = iParam0; }
