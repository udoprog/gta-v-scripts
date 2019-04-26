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
int iLocal_18[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_34 = 0;
int iLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
int iLocal_38 = 0;
int iLocal_39 = 0;
float fLocal_40 = 0f;
float fLocal_41 = 0f;
float fLocal_42 = 0f;
float fLocal_43 = 0f;
int iLocal_44 = 0;
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
  fLocal_40 = 0.82f;
  fLocal_41 = 0.42f;
  fLocal_42 = 0f;
  fLocal_43 = 0f;
  gameplay::network_set_script_is_safe_for_network_game();
  func_28();
  iLocal_39 = 1;
  func_27();
  func_26();
  while (true) {
    system::wait(0);
    if (Global_14443.f_1 != 9) {
      switch (Global_14443.f_1) {
      case 7:
        func_21();
        if (iLocal_39) {
          func_18();
        }
        else {
          func_12();
        }
        break;

      case 8:
        func_21();
        func_12();
        if (func_11(2, Global_14411, 0)) {
          func_10();
          Global_14421 = 1;
          func_9(Global_14424, "DISPLAY_VIEW", 1f, -1082130432, -1082130432,
                 -1082130432, -1082130432);
          func_26();
          if (Global_14443.f_1 > 3) {
            Global_14443.f_1 = 7;
          }
        }
        break;

      default: break;
      }
      if (func_8()) {
        func_2();
      }
    }
    else {
      Global_14445 = 6;
      func_2();
    }
    if (func_1()) {
      func_2();
    }
  }
}

// Position - 0x113
bool func_1() {
  if (Global_14443.f_1 == 1 || Global_14443.f_1 == 3 || Global_14443.f_1 == 0 ||
      Global_14387 == 1) {
    Global_14430 = 1;
    return true;
  }
  return false;
}

// Position - 0x156
void func_2() {
  func_7();
  if (func_4(0)) {
    func_3();
  }
  script::terminate_this_thread();
}

// Position - 0x172
void func_3() {
  if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 2) {
    Global_3118[0 /*2811*/][0 /*281*/].f_259 = 0;
  }
  if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 2) {
    Global_3118[1 /*2811*/][0 /*281*/].f_259 = 0;
  }
  if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 2) {
    Global_3118[2 /*2811*/][0 /*281*/].f_259 = 0;
  }
  gameplay::clear_bit(&Global_2313, 25);
  gameplay::set_bit(&Global_2314, 11);
}

// Position - 0x1EF
bool func_4(int iParam0) {
  if (Global_35781 == 15) {
    return false;
  }
  if (func_5(iParam0)) {
    return false;
  }
  return true;
}

// Position - 0x211
bool func_5(int iParam0) { return func_6(iParam0, Global_35781); }

// Position - 0x222
int func_6(int iParam0, int iParam1) {
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

// Position - 0x403
void func_7() {
  func_28();
  Global_3118[Global_14443 /*2811*/][0 /*281*/].f_124[2] = 1;
}

// Position - 0x422
bool func_8() {
  if (Global_2919 == 1 || Global_14443.f_1 < 7) {
    Global_14430 = 1;
    return true;
  }
  return false;
}

// Position - 0x44B
void func_9(int iParam0, char *sParam1, float fParam2, float fParam3,
            float fParam4, float fParam5, float fParam6) {
  graphics::_push_scaleform_movie_function(iParam0, sParam1);
  graphics::_push_scaleform_movie_function_parameter_int(
      system::round(fParam2));
  if (fParam3 != -1f) {
    graphics::_push_scaleform_movie_function_parameter_int(
        system::round(fParam3));
  }
  if (fParam4 != -1f) {
    graphics::_push_scaleform_movie_function_parameter_int(
        system::round(fParam4));
  }
  if (fParam5 != -1f) {
    graphics::_push_scaleform_movie_function_parameter_int(
        system::round(fParam5));
  }
  if (fParam6 != -1f) {
    graphics::_push_scaleform_movie_function_parameter_int(
        system::round(fParam6));
  }
  graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x4AE
void func_10() {
  if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
    audio::play_sound_frontend(-1, "Menu_Back", &Global_14432, 1);
  }
}

// Position - 0x4CF
bool func_11(int iParam0, int iParam1, int iParam2) {
  if (controls::is_control_just_pressed(iParam0, iParam1) ||
      iParam2 == 1 &&
          controls::is_disabled_control_just_pressed(iParam0, iParam1)) {
    if (gameplay::is_pc_version()) {
      if (gameplay::update_onscreen_keyboard() == 0 ||
          network::_network_is_text_chat_active() &&
              controls::_is_input_disabled(2)) {
        return false;
      }
    }
    if (ui::is_pause_menu_active() || ui::is_warning_message_active()) {
      return false;
    }
    else {
      return true;
    }
  }
  return false;
}

// Position - 0x541
void func_12() {
  if (Global_14421 == 0) {
    if (func_11(2, Global_14412, 0)) {
      func_15();
      Global_14421 = 1;
      func_28();
      graphics::_push_scaleform_movie_function(Global_14424,
                                               "GET_CURRENT_SELECTION");
      uLocal_36 = graphics::_pop_scaleform_movie_function();
      while (!graphics::_0x768FF8961BA904D6(uLocal_36)) {
        system::wait(0);
      }
      Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_259 =
          iLocal_18[graphics::_0x2DE7EFA66B906036(uLocal_36)];
      func_13(Global_14424, "SET_HEADER",
              &Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/]
                   .f_7[Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/]
                            .f_259 /*4*/],
              0, 0, 0, 0);
      if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
        func_9(Global_14424, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432,
               -1082130432, -1082130432);
      }
      else {
        func_9(Global_14424, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432,
               -1082130432, -1082130432);
      }
      if (func_4(0)) {
        func_3();
      }
    }
  }
}

// Position - 0x638
void func_13(int iParam0, char *sParam1, char *sParam2, char *sParam3,
             char *sParam4, char *sParam5, char *sParam6) {
  graphics::_push_scaleform_movie_function(iParam0, sParam1);
  func_14(sParam2);
  if (!gameplay::is_string_null_or_empty(sParam3)) {
    func_14(sParam3);
  }
  if (!gameplay::is_string_null_or_empty(sParam4)) {
    func_14(sParam4);
  }
  if (!gameplay::is_string_null_or_empty(sParam5)) {
    func_14(sParam5);
  }
  if (!gameplay::is_string_null_or_empty(sParam6)) {
    func_14(sParam6);
  }
  graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x693
void func_14(char *sParam0) {
  graphics::begin_text_command_scaleform_string(sParam0);
  graphics::end_text_command_scaleform_string();
}

// Position - 0x6A5
void func_15() {
  if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
    audio::play_sound_frontend(-1, "Menu_Accept", &Global_14432, 1);
    func_16();
  }
}

// Position - 0x6CA
void func_16() {
  if (func_17()) {
    mobile::_move_finger(5);
  }
}

// Position - 0x6DE
bool func_17() {
  int iVar0;
  int iVar1;
  int iVar2;

  if (Global_69702) {
    return false;
  }
  iVar2 = 0;
  iVar0 = cam::_0x19CAFA3C87F7C2FF();
  iVar1 = cam::_0xEE778F8C7E1142E2(iVar0);
  if (iVar1 == 4) {
    iVar2 = 1;
  }
  if (Global_2595532 || iVar2) {
    return true;
  }
  return true;
}

// Position - 0x725
void func_18() {
  Global_14421 = 1;
  iLocal_38 = 0;
  iLocal_39 = 0;
  func_19();
}

// Position - 0x73B
void func_19() {
  int iVar0[15];
  int iVar16;
  int iVar17;
  int iVar18;

  func_9(Global_14424, "DISPLAY_VIEW", 1f, -1082130432, -1082130432,
         -1082130432, -1082130432);
  func_28();
  iLocal_34 = 0;
  iVar16 = 0;
  while (iVar16 < 9) {
    iVar17 = 0;
    iVar18 = 9;
    Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_84[iVar18] = 5000;
    while (iVar17 < 9) {
      if (Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_124[iVar17] ==
          1) {
        if (iVar0[iVar17] == 0) {
          if (Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/]
                  .f_84[iVar17] <
              Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/]
                  .f_84[iVar18]) {
            iVar18 = iVar17;
            func_20(Global_14424, "SET_DATA_SLOT", system::to_float(13),
                    system::to_float(iVar16),
                    system::to_float(
                        Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/]
                            .f_104[iVar18]),
                    -1f, -1f,
                    &Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/]
                         .f_7[iVar18 /*4*/],
                    0, 0, 0, 0);
          }
        }
      }
      iVar17++;
    }
    iLocal_18[iVar16] = iVar18;
    iVar0[iVar18] = 1;
    if (Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_124[iVar16] ==
        1) {
      iLocal_34++;
    }
    iVar16++;
  }
  func_9(Global_14424, "DISPLAY_VIEW", 13f, -1082130432, -1082130432,
         -1082130432, -1082130432);
  func_13(Global_14424, "SET_HEADER",
          &Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/]
               .f_7[Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/]
                        .f_259 /*4*/],
          0, 0, 0, 0);
  if (Global_14431) {
    func_20(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0,
            0, 0, 0);
    func_20(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0,
            0, 0, 0);
  }
  else {
    func_20(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
    func_20(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
  }
  func_20(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
  gameplay::clear_bit(&Global_2313, 17);
}

// Position - 0x942
void func_20(int iParam0, char *sParam1, float fParam2, float fParam3,
             float fParam4, float fParam5, float fParam6, char *sParam7,
             char *sParam8, char *sParam9, char *sParam10, char *sParam11) {
  graphics::_push_scaleform_movie_function(iParam0, sParam1);
  graphics::_push_scaleform_movie_function_parameter_int(
      system::round(fParam2));
  if (fParam3 != -1f) {
    graphics::_push_scaleform_movie_function_parameter_int(
        system::round(fParam3));
  }
  if (fParam4 != -1f) {
    graphics::_push_scaleform_movie_function_parameter_int(
        system::round(fParam4));
  }
  if (fParam5 != -1f) {
    graphics::_push_scaleform_movie_function_parameter_int(
        system::round(fParam5));
  }
  if (fParam6 != -1f) {
    graphics::_push_scaleform_movie_function_parameter_int(
        system::round(fParam6));
  }
  if (!gameplay::is_string_null_or_empty(sParam7)) {
    func_14(sParam7);
  }
  if (!gameplay::is_string_null_or_empty(sParam8)) {
    func_14(sParam8);
  }
  if (!gameplay::is_string_null_or_empty(sParam9)) {
    func_14(sParam9);
  }
  if (!gameplay::is_string_null_or_empty(sParam10)) {
    func_14(sParam10);
  }
  if (!gameplay::is_string_null_or_empty(sParam11)) {
    func_14(sParam11);
  }
  graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x9F5
void func_21() {
  if (iLocal_44) {
    if (system::timera() > 50) {
      iLocal_44 = 0;
    }
  }
  if (controls::_is_input_disabled(2)) {
    if (func_11(2, 181, 0)) {
      if (iLocal_35 > 0) {
        iLocal_35--;
      }
      func_24();
    }
    if (func_11(2, 180, 0)) {
      iLocal_35++;
      if (iLocal_35 == iLocal_34) {
        iLocal_35 = 0;
      }
      func_22();
    }
  }
  if (iLocal_44 == 0) {
    if (func_11(2, Global_14419, 0)) {
      if (iLocal_35 > 0) {
        iLocal_35--;
      }
      func_24();
      iLocal_44 = 1;
      system::settimera(0);
    }
    if (func_11(2, Global_14420, 0)) {
      iLocal_35++;
      if (iLocal_35 == iLocal_34) {
        iLocal_35 = 0;
      }
      func_22();
      iLocal_44 = 1;
      system::settimera(0);
    }
  }
}

// Position - 0xAA2
void func_22() {
  func_9(Global_14424, "SET_INPUT_EVENT", system::to_float(3), -1082130432,
         -1082130432, -1082130432, -1082130432);
  audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
  func_23();
}

// Position - 0xADD
void func_23() {
  if (func_17()) {
    if (Global_14609 == 0) {
      mobile::_move_finger(2);
    }
    else {
      mobile::_move_finger(1);
    }
  }
}

// Position - 0xB00
void func_24() {
  func_9(Global_14424, "SET_INPUT_EVENT", system::to_float(1), -1082130432,
         -1082130432, -1082130432, -1082130432);
  audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
  func_25();
}

// Position - 0xB3B
void func_25() {
  if (func_17()) {
    if (Global_14609 == 0) {
      mobile::_move_finger(1);
    }
    else {
      mobile::_move_finger(2);
    }
  }
}

// Position - 0xB5E
void func_26() {
  int iVar0[15];
  int iVar16;
  int iVar17;
  int iVar18;

  iLocal_34 = 0;
  iVar16 = 0;
  func_28();
  while (iVar16 < 9) {
    iVar17 = 0;
    iVar18 = 9;
    Global_3118[Global_14443 /*2811*/][iVar18 /*281*/] = 5000;
    while (iVar17 < 9) {
      if (Global_3118[Global_14443 /*2811*/][iVar17 /*281*/].f_280 == 1) {
        if (iVar0[iVar17] == 0) {
          if (iVar17 == 0) {
            if (Global_3118[Global_14443 /*2811*/][iVar17 /*281*/] <
                Global_3118[Global_14443 /*2811*/][iVar18 /*281*/]) {
              iVar18 = iVar17;
              func_20(Global_14424, "SET_DATA_SLOT", system::to_float(2),
                      system::to_float(iVar16), -1f, -1f, -1f,
                      &Global_3118[Global_14443 /*2811*/][iVar18 /*281*/].f_2,
                      0, 0, 0, 0);
            }
          }
        }
      }
      iVar17++;
    }
    iLocal_18[iVar16] = iVar18;
    iVar0[iVar18] = 1;
    if (Global_3118[Global_14443 /*2811*/][iVar16 /*281*/].f_280 == 1) {
      iLocal_34++;
    }
    iVar16++;
  }
  func_9(Global_14424, "DISPLAY_VIEW", 13f, -1082130432, -1082130432,
         -1082130432, -1082130432);
  func_13(Global_14424, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
  if (Global_14431) {
    func_20(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0,
            0, 0, 0);
    func_20(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0,
            0, 0, 0);
  }
  else {
    func_20(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
    func_20(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
  }
  func_20(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
  gameplay::clear_bit(&Global_2313, 17);
}

// Position - 0xCF9
void func_27() {
  if (Global_35781 != 15) {
    func_28();
    Global_3118[Global_14443 /*2811*/][0 /*281*/].f_124[2] = 0;
  }
}

// Position - 0xD20
void func_28() {
  if (func_34(14)) {
    if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
      if (entity::get_entity_model(player::player_ped_id()) ==
          Global_101700.f_27009[0 /*29*/]) {
        Global_14443 = 0;
      }
      else if (entity::get_entity_model(player::player_ped_id()) ==
               Global_101700.f_27009[1 /*29*/]) {
        Global_14443 = 1;
      }
      else if (entity::get_entity_model(player::player_ped_id()) ==
               Global_101700.f_27009[2 /*29*/]) {
        Global_14443 = 2;
      }
      else {
        Global_14443 = 0;
      }
    }
  }
  else {
    Global_14443 = func_29();
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

// Position - 0xDC2
var func_29() {
  func_30();
  return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0xDDB
void func_30() {
  int iVar0;

  if (entity::does_entity_exist(player::player_ped_id())) {
    if (func_33(Global_101700.f_2095.f_539.f_3549) !=
        entity::get_entity_model(player::player_ped_id())) {
      iVar0 = func_32(player::player_ped_id());
      if (func_31(iVar0) && (!func_34(14) || Global_100652)) {
        if (Global_101700.f_2095.f_539.f_3549 != iVar0 &&
            func_31(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0xED8
bool func_31(int iParam0) { return iParam0 < 3; }

// Position - 0xEE4
int func_32(int iParam0) {
  int iVar0;
  int iVar1;

  if (entity::does_entity_exist(iParam0)) {
    iVar1 = entity::get_entity_model(iParam0);
    iVar0 = 0;
    while (iVar0 <= 2) {
      if (func_33(iVar0) == iVar1) {
        return iVar0;
      }
      iVar0++;
    }
  }
  return 145;
}

// Position - 0xF21
int func_33(int iParam0) {
  if (func_31(iParam0)) {
    return Global_101700.f_27009[iParam0 /*29*/];
  }
  else if (iParam0 != 145) {
  }
  return 0;
}

// Position - 0xF4B
bool func_34(int iParam0) { return Global_35781 == iParam0; }
