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
vector3 vLocal_45 = {0f, 0f, 0f};
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
int iLocal_52 = 0;
struct<16> Local_53 = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
struct<16> Local_69 = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
int iLocal_85 = 0;
var uLocal_86 = 0;
vector3 vLocal_87 = {0f, 0f, 0f};
vector3 vLocal_90 = {0f, 0f, 0f};
float fLocal_93 = 0f;
int *iLocal_94 = NULL;
int iLocal_95 = 0;
int *iLocal_96 = NULL;
int iLocal_97 = 0;
int iLocal_98 = 0;
int iLocal_99 = 0;
int iLocal_100 = 0;
char *sLocal_101 = NULL;
float fLocal_102 = 0f;
int iLocal_103 = 0;
int iLocal_104 = 0;
int iLocal_105 = 0;
int iLocal_106 = 0;
int *iLocal_107 = NULL;
var uLocal_108 = 0;
var uLocal_109 = 0;
float fLocal_110 = 0f;
vector3 vLocal_111 = {0f, 0f, 0f};
vector3 vLocal_114 = {0f, 0f, 0f};
float fLocal_117 = 0f;
int iLocal_118 = 0;
int iLocal_119 = 0;
int iLocal_120 = 0;
int iLocal_121 = 0;
int iLocal_122 = 0;
int iLocal_123 = 0;
int iLocal_124 = 0;
bool bLocal_125 = 0;
bool bLocal_126 = 0;
int iLocal_127 = 0;
int iLocal_128 = 0;
var uLocal_129 = 0;
var uLocal_130 = 0;
var uLocal_131 = 0;
var uLocal_132 = 0;
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
  bool bVar0;
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;

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
  vLocal_45 = {500f, 500f, 500f};
  iLocal_96 = -1;
  iLocal_97 = 2050;
  iLocal_98 = -1;
  iLocal_99 = -1;
  sLocal_101 = "CC_SUBSTR";
  fLocal_102 = 125f;
  iLocal_103 = 1;
  iLocal_105 = 263;
  fLocal_117 = 4f;
  iLocal_118 = 1;
  iLocal_119 = -1;
  iLocal_120 = 6;
  iLocal_121 = 18;
  bLocal_125 = true;
  vLocal_90 = {ScriptParam_0.f_1[0 /*3*/]};
  vLocal_90 = {vLocal_90};
  uLocal_86 = uLocal_86;
  Local_69 = {Local_69};
  bVar0 = false;
  if (player::has_force_cleanup_occurred(82)) {
    func_92(1);
  }
  iLocal_85 = player::get_player_ped(player::player_id());
  iLocal_95 = 0;
  func_90(&Global_100353, 0);
  func_87();
  if (func_86(iLocal_94, 1)) {
    iLocal_100 = 10;
  }
  else {
    iLocal_100 = 9;
  }
  while (!Global_31554) {
    system::wait(0);
  }
  if (!func_86(iLocal_94, 8)) {
    if (!func_84(iLocal_100)) {
      if (func_83(0, iLocal_99)) {
        func_92(0);
      }
      else {
        func_92(1);
      }
    }
  }
  if (iLocal_99 != -1) {
    if (!func_83(0, iLocal_99)) {
      iLocal_118 = 0;
    }
  }
  if (func_86(iLocal_94, 8388608)) {
    func_92(1);
  }
  if (func_86(iLocal_94, 524288) && func_82() && !func_81()) {
    func_92(1);
  }
  if (script::_get_number_of_instances_of_script_with_name_hash(
          script::get_hash_of_this_script_name()) > 1 &&
      !func_86(iLocal_94, 4194304)) {
    if (iLocal_105 != 263) {
      func_80(iLocal_105, 1, 0);
      iLocal_105 = 263;
    }
    func_79(10);
  }
  while (true) {
    iLocal_85 = player::get_player_ped(player::player_id());
    if (func_86(iLocal_94, 1048576)) {
      if (entity::is_entity_dead(iLocal_85, 0)) {
        func_92(1);
      }
    }
    if (entity::does_entity_exist(iLocal_85) &&
        !entity::is_entity_dead(iLocal_85, 0)) {
      vLocal_87 = {entity::get_entity_coords(iLocal_85, 1)};
      fLocal_93 = system::vdist2(vLocal_87, ScriptParam_0.f_1[0 /*3*/]);
      fLocal_93 = fLocal_93;
      vLocal_111 = {vLocal_87};
      vLocal_114 = {ScriptParam_0.f_1[0 /*3*/]};
      vLocal_111.z = 0f;
      vLocal_114.z = 0f;
      fLocal_110 = system::vdist2(vLocal_111, vLocal_114);
      switch (iLocal_95) {
      case 0:
        if (func_84(iLocal_100) ||
            func_86(iLocal_94, 16) && !func_86(iLocal_94, 524288)) {
          iLocal_98 = -1;
          func_78();
          func_79(1);
        }
        else {
          if (fLocal_110 > fLocal_102 * fLocal_102) {
            if (iLocal_105 != 263) {
              func_80(iLocal_105, 1, 0);
              iLocal_105 = 263;
            }
            func_79(10);
          }
          if (vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2 > 500f) {
          }
        }
        break;

      case 1:
        if (func_77()) {
          iLocal_103 = iLocal_103;
          func_79(3);
        }
        else {
          func_78();
        }
        break;

      case 3:
        if (network::network_is_in_session()) {
          func_92(1);
          return;
        }
        if (!func_84(iLocal_100)) {
          if (!func_86(iLocal_94, 8)) {
            bVar1 = true;
            if (gameplay::are_strings_equal(&Global_91491.f_3, &Local_69)) {
              Local_69 = {Local_53};
              bVar1 = false;
            }
            if (bVar1) {
              func_92(0);
              break;
            }
          }
        }
        if (!func_86(iLocal_94, 4)) {
          func_76();
          func_75(&iLocal_94, 4);
        }
        if (fLocal_110 > fLocal_102 * fLocal_102 && !Global_91525) {
          if (iLocal_105 != 263) {
            if (func_74(6) && !func_73(iLocal_105)) {
            }
            else {
              func_80(iLocal_105, 1, 0);
              iLocal_105 = 263;
            }
          }
          func_79(10);
        }
        else {
          Local_69 = {Local_53};
          bVar2 = !func_86(iLocal_94, 64);
          func_90(&iLocal_94, 128);
          if (!func_72(3) && !Global_91525) {
            if (func_86(iLocal_94, 2097152)) {
              if ((!func_86(iLocal_94, 1) ||
                   !entity::does_entity_exist(func_71())) &&
                  !Global_91525) {
                func_79(10);
                break;
              }
            }
          }
          if (func_86(iLocal_94, 524288) && func_82() && !func_81()) {
            func_92(1);
          }
          if (func_70()) {
            func_92(1);
          }
          if (!func_61(6) || Global_100747 || func_60()) {
            bVar2 = false;
          }
          if (!iLocal_118) {
            func_58(&iLocal_94, 128);
            bVar2 = false;
          }
          if (func_86(iLocal_94, 1)) {
            if (!func_57()) {
              func_58(&iLocal_94, 128);
              bVar2 = false;
            }
          }
          if (func_56(1)) {
            bVar2 = false;
          }
          if (Global_69702) {
            bVar2 = false;
          }
          if (func_55()) {
            bVar2 = false;
          }
          if (streaming::is_player_switch_in_progress()) {
            bVar2 = false;
          }
          if (func_54() || func_53(8, -1)) {
            bVar2 = false;
          }
          if (!player::can_player_start_mission(player::player_id())) {
            bVar2 = false;
          }
          if (!player::is_player_script_control_on(player::player_id())) {
            bVar2 = false;
          }
          if (func_52(0) || func_51()) {
            bVar2 = false;
          }
          if (bVar2) {
            if (!func_46(iLocal_119)) {
              func_58(&iLocal_94, 128);
              bVar2 = false;
            }
            if (!entity::is_entity_at_coord(
                    iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117,
                    fLocal_117, 2f, 0, 1, iLocal_103)) {
              bVar2 = false;
            }
            iVar3 = time::get_clock_hours();
            if (iLocal_120 > iLocal_121) {
              if (iVar3 < iLocal_120 && iVar3 >= iLocal_121) {
                func_58(&iLocal_94, 128);
                bVar2 = false;
                if (fLocal_93 < fLocal_117 * fLocal_117 + 4f) {
                  if (!func_86(iLocal_94, 134217728)) {
                    func_45("MG_NA_TIME", iLocal_120, iLocal_121);
                    func_58(&iLocal_94, 134217728);
                  }
                }
                else {
                  func_90(&iLocal_94, 134217728);
                }
              }
            }
            else if (iVar3 < iLocal_120 || iVar3 >= iLocal_121) {
              func_58(&iLocal_94, 128);
              bVar2 = false;
              if (fLocal_93 < fLocal_117 * fLocal_117 + 4f) {
                if (!func_86(iLocal_94, 134217728)) {
                  func_45("MG_NA_TIME", iLocal_120, iLocal_121);
                  func_58(&iLocal_94, 134217728);
                }
              }
              else {
                func_90(&iLocal_94, 134217728);
              }
            }
            if (!player::is_player_control_on(player::player_id())) {
              bVar2 = false;
            }
            if (bVar2) {
              controls::set_input_exclusive(0, 51);
              if (func_44(uLocal_86)) {
                if (iLocal_96 == -1) {
                  func_43(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
                  func_58(&iLocal_94, 2048);
                }
                else if (!func_86(iLocal_94, 2048) ||
                         !ui::is_help_message_being_displayed()) {
                  func_42(&iLocal_96);
                  func_90(&iLocal_94, 2048);
                }
                if (func_40(iLocal_96, 1)) {
                  sLocal_101 = sLocal_101;
                  func_42(&iLocal_96);
                  func_90(&iLocal_94, 2048);
                  script::request_script(&Local_69);
                  player::set_player_control(player::player_id(), 0, 56);
                  func_79(5);
                }
              }
              else {
                sLocal_101 = sLocal_101;
                func_42(&iLocal_96);
                func_90(&iLocal_94, 2048);
                script::request_script(&Local_69);
                player::set_player_control(player::player_id(), 0, 56);
                func_79(5);
              }
            }
          }
          if (!bVar2) {
            if (iLocal_96 != -1) {
              func_42(&iLocal_96);
              func_90(&iLocal_94, 2048);
              ui::clear_help(0);
            }
          }
        }
        func_38();
        break;

      case 5:
        controls::set_input_exclusive(0, 51);
        if (script::has_script_loaded(&Local_69)) {
          if (iLocal_96 != -1) {
            func_42(&iLocal_96);
          }
          iVar4 = 2;
          bVar0 = false;
          if (func_86(iLocal_94, 1)) {
            if (func_74(6) || func_74(7)) {
              iVar4 = 1;
              bVar0 = true;
            }
          }
          if (iVar4 != 1) {
            iVar4 = func_35(&iLocal_98, 6, iLocal_100, 0, 0);
          }
          if (iVar4 == 1) {
            if (player::is_player_playing(player::player_id())) {
              player::clear_player_wanted_level(player::player_id());
            }
            func_34();
            if (Global_36912) {
              func_25(player::player_ped_id());
            }
            player::set_player_control(player::player_id(), 1, 56);
            iLocal_52 = func_24();
            func_90(&iLocal_94, 4);
            func_23();
            func_58(&iLocal_94, 2);
            func_79(6);
            func_19(&iLocal_107);
            if (iLocal_99 != -1) {
              func_18(iLocal_99);
              func_15(func_17(iLocal_99), 0, 0);
            }
          }
          else if (iVar4 == 2) {
            func_14();
          }
          else if (iVar4 == 0) {
            func_79(10);
          }
        }
        else {
          func_14();
        }
        break;

      case 6:
        if (!func_86(iLocal_94, 256)) {
          if (cam::is_screen_fading_out() || cam::is_screen_faded_in()) {
            controls::set_input_exclusive(0, 51);
          }
          else if (cam::is_screen_faded_out()) {
            func_58(&iLocal_94, 256);
          }
        }
        if (func_86(Global_100353, 262144)) {
          func_90(&Global_100353, 262144);
          func_13();
        }
        if (func_86(iLocal_94, 2097152)) {
          if (!func_72(3) && !script::is_thread_active(iLocal_52)) {
            func_79(10);
          }
        }
        if (!script::is_thread_active(iLocal_52)) {
          stats::playstats_oddjob_done(
              system::round(func_9(&iLocal_107) * 1000f), iLocal_99, 0);
          func_8(&iLocal_107);
          func_90(&iLocal_94, 256);
          func_7();
          if (bVar0) {
            func_90(&iLocal_94, 2);
          }
          else if (func_86(iLocal_94, 2)) {
            if (func_86(Global_100353, 0)) {
              func_6(&iLocal_98);
              iLocal_98 = -1;
              func_90(&iLocal_94, 2);
            }
            else {
              func_6(&iLocal_98);
              iLocal_98 = -1;
              func_90(&iLocal_94, 2);
            }
          }
          func_79(0);
          if (iLocal_99 != -1) {
            if (func_86(Global_100353, 0)) {
              stats::playstats_mission_checkpoint(func_17(iLocal_99), 0,
                                                  Global_91528, 0);
              func_5(func_17(iLocal_99), 0, Global_91528, 1, 0);
            }
            else {
              stats::playstats_mission_checkpoint(func_17(iLocal_99), 0,
                                                  Global_91528, 0);
              func_5(func_17(iLocal_99), 0, Global_91528, 0, 0);
            }
          }
          func_4();
          func_90(&Global_100353, 0);
          if (func_86(iLocal_94, 16777216)) {
            func_92(1);
          }
          if (iLocal_99 != -1) {
            if (Global_101700.f_8044) {
              if (!func_83(0, iLocal_99)) {
                func_92(1);
              }
            }
          }
        }
        func_3();
        break;

      case 8: func_79(0); break;

      case 10: func_92(1); break;

      case 9:
        if (fLocal_110 > fLocal_102 * fLocal_102) {
          if (iLocal_105 != 263) {
            func_80(iLocal_105, 1, 0);
            iLocal_105 = 263;
          }
          func_79(10);
        }
        break;

      case 7:
        func_2();
        if (iLocal_105 != 263) {
          func_80(iLocal_105, 0, 0);
        }
        if (iLocal_96 != -1) {
          func_42(&iLocal_96);
        }
        if (!gameplay::is_string_null_or_empty(sLocal_101)) {
          if (func_1(sLocal_101)) {
            ui::clear_help(1);
          }
        }
        func_79(4);
        break;

      case 4:
        if (iLocal_104 % 150 == 0) {
          if (!ped::is_ped_injured(player::player_ped_id())) {
            if (iLocal_106 == 2) {
              if (iLocal_106 == 2) {
                if (func_84(iLocal_100) && func_83(0, iLocal_99)) {
                  func_87();
                  if (iLocal_105 != 263) {
                    func_80(iLocal_105, 1, 0);
                  }
                  func_79(0);
                }
              }
            }
            else if (iLocal_106 == 0) {
              if (fLocal_110 > fLocal_102 * fLocal_102) {
                if (iLocal_105 != 263) {
                  func_80(iLocal_105, 1, 0);
                  iLocal_105 = 263;
                }
                func_79(10);
              }
            }
            else if (iLocal_106 == 1) {
              if (fLocal_110 > (80f + 5f) * (80f + 5f)) {
                func_87();
                if (iLocal_105 != 263) {
                  func_80(iLocal_105, 1, 0);
                }
                func_79(0);
              }
            }
          }
          else {
            func_80(iLocal_105, 1, 0);
          }
        }
        else {
          iLocal_104++;
        }
        break;
      }
    }
    system::wait(0);
  }
}

// Position - 0xB18
bool func_1(char *sParam0) {
  ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
  return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0xB2B
void func_2() {
  if (bLocal_125) {
    streaming::set_model_as_no_longer_needed(joaat("blazer"));
    streaming::set_model_as_no_longer_needed(joaat("journey"));
  }
}

// Position - 0xB4A
void func_3() {}

// Position - 0xB52
void func_4() {
  if (bLocal_125) {
    iLocal_124 = iLocal_122;
  }
}

// Position - 0xB63
void func_5(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
  if (gameplay::is_string_null_or_empty(&Global_88894)) {
    return;
  }
  if (gameplay::compare_strings(sParam0, &Global_88894, 0, -1) != 0) {
    return;
  }
  stats::playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4,
                                Global_86001);
  StringCopy(&Global_88894, "", 64);
}

// Position - 0xBA7
void func_6(int *iParam0) {
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

// Position - 0xBE4
void func_7() {
  vector3 vVar0[24];

  if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
    network::network_set_rich_presence(StackVal, 0, 0, 0);
  }
  else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
    StringCopy(&cVar0, "PRESENCE_0_STR", 24);
    network::_0x3E200C2BCF4164EB(0, &cVar0);
  }
}

// Position - 0xC26
void func_8(int *iParam0) {
  iParam0->f_1 = 0f;
  iParam0->f_2 = 0f;
  *iParam0 = 0;
}

// Position - 0xC3C
float func_9(var *uParam0) {
  if (func_12(uParam0)) {
    if (func_11(uParam0)) {
      return uParam0->f_2;
    }
    else {
      return func_10(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
    }
  }
  return uParam0->f_1;
}

// Position - 0xC7B
float func_10(bool bParam0) {
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

// Position - 0xCD3
bool func_11(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0xCE3
bool func_12(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0xCF3
int func_13() { return 1; }

// Position - 0xCFC
void func_14() {}

// Position - 0xD04
void func_15(char *sParam0, int iParam1, int iParam2) {
  if (!gameplay::is_string_null_or_empty(&Global_88894)) {
    stats::playstats_mission_over(&Global_88894, 0, 0, 0, 1, 0);
    StringCopy(&Global_88894, "", 64);
  }
  StringCopy(&Global_88894, sParam0, 64);
  stats::playstats_mission_started(sParam0, iParam1, iParam2, func_16(0));
}

// Position - 0xD45
int func_16(int iParam0) {
  if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(
                      joaat("benchmark")) > 0) {
    return 1;
  }
  return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xD70
char *func_17(int iParam0) {
  switch (iParam0) {
  case 0: return "OJBJ";

  case 1: return "MGDT";

  case 2: return "MGGF";

  case 3: return "OJHU";

  case 4: return "MGOR";

  case 5: return "MGPS";

  case 6: return "MGRP";

  case 7: return "MGSEA";

  case 8: return "MGSTR";

  case 9: return "MGSC";

  case 10: return "MGSP";

  case 11: return "MGSRm";

  case 12: return "OJTX";

  case 13: return "MGTN";

  case 14: return "OJTW";

  case 15: return "OJDA";

  case 16: return "OJDG";

  case 17: return "MGTR";

  case 18: return "MGYG";

  case 19: return "MGCR";
  }
  return "INVALID!";
}

// Position - 0xEAE
void func_18(int iParam0) {
  var uVar0;
  vector3 vVar1[24];

  if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
    uVar0 = iParam0;
    network::network_set_rich_presence(8, &uVar0, 1, 1);
  }
  else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
    StringCopy(&cVar1, "SPMG_", 24);
    StringIntConCat(&cVar1, iParam0, 24);
    StringConCat(&cVar1, "_STR", 24);
    network::_0x3E200C2BCF4164EB(8, &cVar1);
  }
}

// Position - 0xF05
void func_19(var *uParam0) {
  if (!func_12(uParam0)) {
    func_22(uParam0);
  }
  else {
    func_20(uParam0);
  }
}

// Position - 0xF26
void func_20(var *uParam0) { func_21(uParam0, 0f); }

// Position - 0xF35
void func_21(int *iParam0, float fParam1) {
  uParam0->f_1 = func_10(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
  gameplay::set_bit(uParam0, 1);
  gameplay::clear_bit(iParam0, 2);
  iParam0->f_2 = 0f;
}

// Position - 0xF63
void func_22(var *uParam0) {
  if (!func_12(uParam0)) {
    func_20(uParam0);
  }
}

// Position - 0xF7B
void func_23() {
  if (bLocal_125) {
    if (bLocal_126) {
      if (entity::does_entity_exist(iLocal_123)) {
        entity::set_vehicle_as_no_longer_needed(&iLocal_123);
      }
      if (entity::does_entity_exist(iLocal_124)) {
        entity::set_vehicle_as_no_longer_needed(&iLocal_124);
      }
    }
  }
}

// Position - 0xFAB
var func_24() {
  vector3 vVar0;
  var uVar3;

  vVar0 = -1;
  vVar0.y = iLocal_124;
  vVar0.z = iLocal_123;
  uVar3 = system::start_new_script_with_args(&Local_53, &vVar0, 3, iLocal_97);
  script::set_script_as_no_longer_needed(&Local_53);
  return uVar3;
}

// Position - 0xFDB
void func_25(int iParam0) {
  int iVar0;
  int iVar1;
  int iVar2;

  if (iParam0 == 0) {
    return;
  }
  if (!entity::does_entity_exist(iParam0)) {
    return;
  }
  iVar0 = func_33(iParam0);
  if (iVar0 != -1) {
    iVar1 = Global_36715[iVar0 /*5*/];
    func_28(1, iVar1, 1);
    return;
  }
  iVar2 = func_27(iParam0);
  if (iVar2 == -1) {
    return;
  }
  func_26(iVar2);
}

// Position - 0x1034
void func_26(int iParam0) {
  if (iParam0 < 0 || iParam0 >= 5) {
    return;
  }
  if (Global_36689[iParam0 /*5*/].f_1 != 0) {
    if (Global_36689[iParam0 /*5*/].f_1 == player::player_ped_id()) {
      Global_36910 = 0;
    }
  }
  Global_36689[iParam0 /*5*/] = 13;
  Global_36689[iParam0 /*5*/].f_1 = 0;
  Global_36689[iParam0 /*5*/].f_2 = 0;
  Global_36689[iParam0 /*5*/].f_3 = 0;
  Global_36689[iParam0 /*5*/].f_4 = 0;
  Global_36688--;
  if (Global_36688 < 0) {
    Global_36688 = 0;
  }
}

// Position - 0x10B7
int func_27(int iParam0) {
  int iVar0;

  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < 5) {
    if (Global_36689[iVar0 /*5*/].f_1 == iParam0) {
      return iVar0;
    }
    iVar0++;
  }
  return -1;
}

// Position - 0x10E8
void func_28(int iParam0, int iParam1, int iParam2) {
  func_29(iParam0, iParam1, iParam2, 0, 0);
}

// Position - 0x10FC
void func_29(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
  int iVar0;

  if (iParam0 == -1) {
    return;
  }
  if (iParam1 == -1) {
    return;
  }
  if (iParam2 == 6) {
    return;
  }
  if (func_31(iParam0, iParam1, iParam2)) {
    return;
  }
  iVar0 = func_30();
  if (iVar0 == -1) {
    return;
  }
  Global_36796[iVar0 /*5*/] = iParam0;
  Global_36796[iVar0 /*5*/].f_1 = iParam1;
  Global_36796[iVar0 /*5*/].f_2 = iParam2;
  Global_36796[iVar0 /*5*/].f_3 = iParam3;
  Global_36796[iVar0 /*5*/].f_4 = iParam4;
}

// Position - 0x1173
int func_30() {
  int iVar0;

  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < 16) {
    if (Global_36796[iVar0 /*5*/].f_2 == 6) {
      return iVar0;
    }
    iVar0++;
  }
  return -1;
}

// Position - 0x11A4
bool func_31(int iParam0, int iParam1, int iParam2) {
  if (func_32(iParam0, iParam1, iParam2) == -1) {
    return false;
  }
  return true;
}

// Position - 0x11BF
int func_32(int iParam0, int iParam1, int iParam2) {
  int iVar0;

  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < 16) {
    if (iParam2 == Global_36796[iVar0 /*5*/].f_2) {
      if (iParam0 == Global_36796[iVar0 /*5*/]) {
        if (iParam1 == Global_36796[iVar0 /*5*/].f_1) {
          return iVar0;
        }
      }
    }
    iVar0++;
  }
  return -1;
}

// Position - 0x120B
int func_33(int iParam0) {
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

// Position - 0x1254
void func_34() {
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

// Position - 0x12D1
int func_35(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
    if (func_37(0)) {
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
    if (!func_84(iParam2)) {
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
      func_36(iParam0, iParam4);
    }
  }
  return 2;
}

// Position - 0x1408
void func_36(int *iParam0, int iParam1) {
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

// Position - 0x1457
bool func_37(int iParam0) {
  if (Global_35781 == 15) {
    return false;
  }
  if (func_84(iParam0)) {
    return false;
  }
  return true;
}

// Position - 0x1479
void func_38() {
  bool bVar0;
  vector3 vVar1;

  if (entity::does_entity_exist(iLocal_124) &&
      !entity::is_entity_dead(iLocal_124, 0) &&
      !fire::is_entity_on_fire(iLocal_124)) {
    vehicle::set_vehicle_doors_locked(iLocal_124, 2);
    vehicle::set_vehicle_undriveable(iLocal_124, 1);
    vehicle::set_vehicle_automatically_attaches(iLocal_124, 0, 0);
    vehicle::_0x2B6747FAA9DB9D6B(iLocal_124, 1);
    iLocal_122 = iLocal_124;
    if (entity::does_entity_exist(iLocal_123) &&
        !entity::is_entity_dead(iLocal_123, 0)) {
      vehicle::set_vehicle_undriveable(iLocal_123, 1);
      vehicle::_0x2B6747FAA9DB9D6B(iLocal_123, 1);
      vehicle::set_vehicle_automatically_attaches(iLocal_123, 0, 0);
      vehicle::set_vehicle_lights(iLocal_123, 1);
    }
  }
  else {
    if (entity::does_entity_exist(iLocal_124) &&
            entity::is_entity_dead(iLocal_124, 0) ||
        !entity::does_entity_exist(iLocal_124)) {
      func_39(0);
    }
    if (entity::does_entity_exist(iLocal_123) &&
            entity::is_entity_dead(iLocal_123, 0) ||
        !entity::does_entity_exist(iLocal_123)) {
      func_39(0);
    }
    if (iLocal_128 && streaming::has_anim_dict_loaded("oddjobs@hunterIntro") &&
        streaming::has_anim_dict_loaded("oddjobs@hunterOutro")) {
      streaming::remove_anim_dict("oddjobs@hunterIntro");
      streaming::remove_anim_dict("oddjobs@hunterOutro");
      iLocal_128 = 0;
    }
    return;
  }
  if (entity::is_entity_dead(player::player_ped_id(), 0)) {
    return;
  }
  if (fire::is_entity_on_fire(player::player_ped_id())) {
    return;
  }
  bVar0 = false;
  if (entity::does_entity_exist(player::player_ped_id()) &&
      !entity::is_entity_dead(player::player_ped_id(), 0)) {
    vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
    if (system::vdist(-1702.695f, 4666.941f, 22.7091f, vVar1) < 8f) {
      bVar0 = true;
    }
  }
  if (bVar0) {
    streaming::request_anim_dict("oddjobs@hunterIntro");
    streaming::request_anim_dict("oddjobs@hunterOutro");
    iLocal_128 = 1;
  }
  else if (iLocal_128 &&
           streaming::has_anim_dict_loaded("oddjobs@hunterIntro") &&
           streaming::has_anim_dict_loaded("oddjobs@hunterOutro")) {
    streaming::remove_anim_dict("oddjobs@hunterIntro");
    streaming::remove_anim_dict("oddjobs@hunterOutro");
    iLocal_128 = 0;
  }
}

// Position - 0x162C
void func_39(int iParam0) {
  if (iParam0 == 2) {
  }
  else if (iParam0 == 0) {
  }
  iLocal_106 = iParam0;
  iLocal_104 = 0;
  iLocal_95 = 7;
}

// Position - 0x164D
bool func_40(int iParam0, int iParam1) {
  int iVar0;

  iVar0 = func_41(iParam0);
  if (iVar0 == -1) {
    return false;
  }
  if (!player::is_player_playing(player::get_player_index())) {
    return false;
  }
  if (func_52(0)) {
    return false;
  }
  if (cutscene::is_cutscene_playing()) {
    return false;
  }
  if (iVar0 > -1 && iVar0 < 6) {
    if (Global_36484[iVar0 /*32*/] == 1 &&
        Global_36484[iVar0 /*32*/].f_4 == 1) {
      if (iParam1) {
        if (Global_36484[iVar0 /*32*/].f_29) {
          return false;
        }
      }
      Global_36484[iVar0 /*32*/].f_5 = 1;
      Global_36484[iVar0 /*32*/].f_29 = 1;
      return true;
    }
    else {
      if (Global_36484[iVar0 /*32*/] == 0) {
      }
      if (Global_36484[iVar0 /*32*/].f_7) {
      }
    }
  }
  return false;
}

// Position - 0x1705
int func_41(int iParam0) {
  int iVar0;

  if (iParam0 < 0) {
    return -1;
  }
  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < 6) {
    if (Global_36484[iVar0 /*32*/].f_1 == iParam0) {
      return iVar0;
    }
    iVar0++;
  }
  return -1;
}

// Position - 0x1740
void func_42(int *iParam0) {
  int iVar0;

  if (*iParam0 == -1) {
    return;
  }
  iVar0 = func_41(*iParam0);
  if (iVar0 == -1) {
    *iParam0 = -1;
    return;
  }
  if (iVar0 > -1 && iVar0 < 6) {
    if (Global_36484[iVar0 /*32*/]) {
      Global_36484[iVar0 /*32*/].f_7 = 1;
      *iParam0 = -1;
      return;
    }
  }
  *iParam0 = -1;
}

// Position - 0x1797
void func_43(int iParam0, int iParam1, char *sParam2, int iParam3,
             char *sParam4, int iParam5, int iParam6) {
  int iVar0;

  if (script::_get_number_of_instances_of_script_with_name_hash(
          joaat("context_controller")) < 1) {
  }
  if (streaming::is_player_switch_in_progress()) {
    if (*iParam0 != -1) {
      func_42(iParam0);
    }
    return;
  }
  if (*iParam0 != -1) {
    return;
  }
  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < 6) {
    if (!Global_36484[iVar0 /*32*/]) {
      Global_36484[iVar0 /*32*/] = 1;
      Global_36484[iVar0 /*32*/].f_1 = Global_36685;
      Global_36685++;
      Global_36484[iVar0 /*32*/].f_4 = 0;
      Global_36484[iVar0 /*32*/].f_29 = 0;
      Global_36484[iVar0 /*32*/].f_5 = 0;
      Global_36484[iVar0 /*32*/].f_2 = iParam1;
      StringCopy(&Global_36484[iVar0 /*32*/].f_8, sParam2, 16);
      Global_36484[iVar0 /*32*/].f_6 = iParam3;
      Global_36484[iVar0 /*32*/].f_31 = script::get_id_of_this_thread();
      Global_36484[iVar0 /*32*/].f_7 = 0;
      Global_36484[iVar0 /*32*/].f_3 = iParam5;
      if (!gameplay::is_string_null_or_empty(sParam4)) {
        Global_36484[iVar0 /*32*/].f_12 = 1;
        StringCopy(&Global_36484[iVar0 /*32*/].f_13, sParam4, 64);
        Global_36484[iVar0 /*32*/].f_30 = iParam6;
      }
      else {
        Global_36484[iVar0 /*32*/].f_12 = 0;
        Global_36484[iVar0 /*32*/].f_30 = 0;
      }
      *iParam0 = Global_36484[iVar0 /*32*/].f_1;
      return;
    }
    iVar0++;
  }
}

// Position - 0x18C2
bool func_44(var uParam0) { return true; }

// Position - 0x18CB
void func_45(char *sParam0, int iParam1, int iParam2) {
  ui::begin_text_command_display_help(sParam0);
  ui::add_text_component_integer(iParam1);
  ui::add_text_component_integer(iParam2);
  ui::end_text_command_display_help(0, 0, 1, -1);
}

// Position - 0x18ED
bool func_46(int iParam0) {
  func_47();
  return iParam0 == Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x1909
void func_47() {
  int iVar0;

  if (entity::does_entity_exist(player::player_ped_id())) {
    if (func_50(Global_101700.f_2095.f_539.f_3549) !=
        entity::get_entity_model(player::player_ped_id())) {
      iVar0 = func_49(player::player_ped_id());
      if (func_48(iVar0) && (!func_74(14) || Global_100652)) {
        if (Global_101700.f_2095.f_539.f_3549 != iVar0 &&
            func_48(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x1A06
bool func_48(int iParam0) { return iParam0 < 3; }

// Position - 0x1A12
int func_49(int iParam0) {
  int iVar0;
  int iVar1;

  if (entity::does_entity_exist(iParam0)) {
    iVar1 = entity::get_entity_model(iParam0);
    iVar0 = 0;
    while (iVar0 <= 2) {
      if (func_50(iVar0) == iVar1) {
        return iVar0;
      }
      iVar0++;
    }
  }
  return 145;
}

// Position - 0x1A4F
int func_50(int iParam0) {
  if (func_48(iParam0)) {
    return Global_101700.f_27009[iParam0 /*29*/];
  }
  else if (iParam0 != 145) {
  }
  return 0;
}

// Position - 0x1A79
var func_51() { return Global_68131; }

// Position - 0x1A85
bool func_52(int iParam0) {
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
  if (script::_get_number_of_instances_of_script_with_name_hash(
          joaat("cellphone_flashhand")) > 0) {
    return true;
  }
  if (Global_14443.f_1 > 3) {
    return true;
  }
  return false;
}

// Position - 0x1ADF
var func_53(int iParam0, int iParam1) {
  switch (iParam0) {
  case 5:
    if (iParam1 > -1) {
      return Global_1353070.f_203[iParam1];
    }
    break;
  }
  return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x1B1A
bool func_54() {
  return gameplay::get_game_timer() <= Global_17290.f_5745 + 100;
}

// Position - 0x1B2F
bool func_55() {
  if (script::_get_number_of_instances_of_script_with_name_hash(
          joaat("player_timetable_scene")) > 0) {
    return true;
  }
  return false;
}

// Position - 0x1B49
bool func_56(int iParam0) {
  if (iParam0) {
    return Global_17151.f_4 && Global_17151.f_104 == 4;
  }
  return Global_17151.f_4;
}

// Position - 0x1B72
int func_57() { return 1; }

// Position - 0x1B7B
void func_58(int *iParam0, int iParam1) { func_59(iParam0, iParam1); }

// Position - 0x1B8B
void func_59(var *uParam0, var uParam1) { *uParam0 |= uParam1; }

// Position - 0x1B9C
bool func_60() {
  int iVar0;
  bool bVar1;

  if (ped::is_ped_injured(player::player_ped_id())) {
    return false;
  }
  weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1);
  if (iVar0 == 0 || iVar0 == joaat("weapon_unarmed") ||
      iVar0 == joaat("weapon_electric_fence") ||
      iVar0 == joaat("gadget_parachute")) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
  }
  if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
    return bVar1 && controls::is_control_pressed(0, 69) ||
           bVar1 && controls::is_control_pressed(0, 70) ||
           bVar1 && controls::is_control_pressed(0, 68) ||
           player::is_player_targetting_anything(player::player_id());
  }
  return bVar1 && controls::is_control_pressed(0, 24) ||
         bVar1 && controls::is_control_pressed(0, 25) ||
         bVar1 && controls::is_control_pressed(0, 47) ||
         ped::_0xDCCA191DF9980FD7(player::player_ped_id()) ||
         player::is_player_targetting_anything(player::player_id());
}

// Position - 0x1CA6
bool func_61(int iParam0) {
  int iVar0;

  if (player::is_player_playing(player::player_id())) {
    if (entity::does_entity_exist(player::player_ped_id())) {
      if (!ped::is_ped_injured(player::player_ped_id())) {
        iVar0 = func_69();
        if (!func_48(iVar0)) {
          return false;
        }
        switch (iParam0) {
        case 9:
        case 0:
          if (!player::is_player_ready_for_cutscene(player::player_id()) ||
              entity::is_entity_in_air(player::player_ped_id()) ||
              ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
              ped::is_ped_ragdoll(player::player_ped_id()) ||
              ped::is_ped_falling(player::player_ped_id()) ||
              player::is_player_being_arrested(player::player_id(), 1) ||
              player::is_player_climbing(player::player_id()) ||
              ped::is_ped_in_combat(player::player_ped_id(), 0) || func_68() ||
              Global_100747 || Global_25192 || func_67() || func_53(8, -1) ||
              func_66() || func_65() || func_64() || func_55() ||
              Global_101700.f_6647.f_919[iVar0] == 5) {
            return false;
          }
          break;

        case 1:
          if (player::is_player_being_arrested(player::player_id(), 1) ||
              func_68() || Global_25192 || func_67() || func_53(8, -1) ||
              func_64() || func_66() || func_65() || func_55() ||
              Global_101700.f_6647.f_919[iVar0] == 5) {
            return false;
          }
          break;

        case 2:
          if (!player::is_player_ready_for_cutscene(player::player_id()) ||
              entity::is_entity_in_air(player::player_ped_id()) ||
              ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
              ped::is_ped_ragdoll(player::player_ped_id()) ||
              ped::is_ped_falling(player::player_ped_id()) ||
              player::is_player_being_arrested(player::player_id(), 1) ||
              player::is_player_climbing(player::player_id()) ||
              ped::is_ped_in_combat(player::player_ped_id(), 0) || func_68() ||
              Global_100747 || Global_25192 || func_67() || func_53(8, -1) ||
              func_64() || func_66() || func_65() || func_55() ||
              Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
            return false;
          }
          break;

        case 3:
          if (ped::is_ped_ragdoll(player::player_ped_id()) ||
              ped::is_ped_falling(player::player_ped_id()) ||
              player::is_player_being_arrested(player::player_id(), 1) ||
              ped::is_ped_in_combat(player::player_ped_id(), 0) || func_68() ||
              Global_100747 || Global_25192 || func_67() || func_53(8, -1) ||
              func_66() || func_65() || func_55() ||
              Global_101700.f_6647.f_919[iVar0] == 5) {
            return false;
          }
          break;

        case 4:
          if (func_68() ||
              player::get_player_wanted_level(player::player_id()) > 0 ||
              func_53(8, -1) || func_55() || func_63() ||
              Global_101700.f_6647.f_919[iVar0] == 5) {
            return false;
          }
          break;

        case 5:
          if (func_53(8, -1) || func_66() || func_65() || func_63() ||
              func_62()) {
            return false;
          }
          if (streaming::is_player_switch_in_progress() &&
              streaming::get_player_switch_type() != 3 &&
              streaming::get_player_switch_state() < 8) {
            return false;
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
                player::is_player_climbing(player::player_id()) || func_68() ||
                Global_25192 || func_67() || func_53(8, -1) || func_65() ||
                func_64() || func_55() ||
                Global_101700.f_6647.f_919[iVar0] == 5) {
              return false;
            }
          }
          break;

        case 7:
          if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
              !player::is_player_control_on(player::player_id()) ||
              !player::is_player_ready_for_cutscene(player::player_id()) ||
              !cam::is_screen_faded_in() ||
              entity::is_entity_in_air(player::player_ped_id()) ||
              ped::is_ped_ragdoll(player::player_ped_id()) ||
              ped::is_ped_falling(player::player_ped_id()) ||
              player::is_player_being_arrested(player::player_id(), 1) ||
              func_68() || func_65() || Global_100747 || Global_25192 ||
              func_67() || Global_36912 || func_53(8, -1) || func_64() ||
              func_63() || func_55() ||
              Global_101700.f_6647.f_919[iVar0] == 5) {
            return false;
          }
          break;

        case 8:
          if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
              !player::is_player_control_on(player::player_id()) ||
              !player::is_player_ready_for_cutscene(player::player_id()) ||
              !cam::is_screen_faded_in() ||
              player::is_player_wanted_level_greater(player::player_id(), 0) ||
              entity::is_entity_in_air(player::player_ped_id()) ||
              ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
              ped::is_ped_ragdoll(player::player_ped_id()) ||
              ped::is_ped_falling(player::player_ped_id()) ||
              ped::is_ped_swimming(player::player_ped_id()) ||
              player::is_player_being_arrested(player::player_id(), 1) ||
              player::is_player_climbing(player::player_id()) || func_68() ||
              Global_100747 || Global_25192 || func_67() || func_53(8, -1) ||
              func_64() || func_63() || func_66() || func_65() || func_55()) {
            return false;
          }
          break;
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
  else {
    return false;
  }
  return true;
}

// Position - 0x23C3
var func_62() { return Global_91530.f_1; }

// Position - 0x23D1
int func_63() {
  if (Global_88746 != -1) {
    return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
  }
  return 0;
}

// Position - 0x23F7
int func_64() {
  if (Global_69962) {
    return 1;
  }
  else if (Global_55816 && !Global_55822) {
    return 1;
  }
  return 0;
}

// Position - 0x2421
bool func_65() { return Global_91543.f_304 > 0; }

// Position - 0x2432
bool func_66() { return Global_91543.f_303 > 0; }

// Position - 0x2443
var func_67() { return Global_1315233; }

// Position - 0x244F
int func_68() {
  if (!network::network_is_game_in_progress()) {
    return Global_89302.f_44 == 1;
  }
  return 0;
}

// Position - 0x246B
var func_69() {
  func_47();
  return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x2484
bool func_70() {
  if (script::_get_number_of_instances_of_script_with_name_hash(
          joaat("stripperhome")) > 0) {
    return true;
  }
  return false;
}

// Position - 0x249E
var func_71() { return Global_87656; }

// Position - 0x24AA
int func_72(int iParam0) {
  switch (iParam0) {
  case 0: return 1;

  case 1:
    if (func_74(6) || func_74(7)) {
      return 1;
    }
    else {
      return func_72(3);
    }
    break;

  case 2: return 1;

  case 3:
    if (func_84(5)) {
      if (func_61(4)) {
        return 1;
      }
    }
    break;
  }
  return 0;
}

// Position - 0x251C
int func_73(int iParam0) {
  int iVar0;

  iVar0 = iParam0;
  if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
    return 0;
  }
  return ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19);
}

// Position - 0x2558
bool func_74(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x2566
void func_75(int *iParam0, int iParam1) { *iParam0 |= iParam1; }

// Position - 0x2577
void func_76() {
  if (bLocal_125) {
    bLocal_126 = true;
    if (!iLocal_127) {
      gameplay::clear_area_of_vehicles(-1702.46f, 4666.36f, 22.1255f, 10f, 0, 0,
                                       0, 0, 0);
      if (!entity::does_entity_exist(iLocal_123)) {
        iLocal_123 = vehicle::create_vehicle(
            joaat("blazer"), -1707.434f, 4666.563f, 22.1095f, 323.2491f, 1, 1);
      }
      if (!entity::does_entity_exist(iLocal_124)) {
        iLocal_124 = vehicle::create_vehicle(joaat("journey"), -1702.695f,
                                             4666.941f, 22.7091f, 80.03f, 1, 1);
        vehicle::set_vehicle_has_strong_axles(iLocal_124, 1);
      }
      iLocal_127 = 1;
    }
  }
}

// Position - 0x260A
bool func_77() {
  if (bLocal_125) {
    return streaming::has_model_loaded(joaat("blazer")) &
           streaming::has_model_loaded(joaat("journey"));
  }
  return true;
}

// Position - 0x2632
void func_78() {
  if (bLocal_125) {
    streaming::request_model(joaat("blazer"));
    streaming::request_model(joaat("journey"));
  }
}

// Position - 0x2651
void func_79(int iParam0) { iLocal_95 = iParam0; }

// Position - 0x265D
void func_80(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x2766
int func_81() {
  if (gameplay::is_pc_version()) {
    if (gameplay::_0xD10282B6E3751BA0() == 1f) {
      return 1;
    }
  }
  return 0;
}

// Position - 0x2783
int func_82() {
  if (Global_88746 != -1) {
    return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
  }
  return 0;
}

// Position - 0x27A9
bool func_83(int iParam0, int iParam1) {
  var uVar0;

  if (iParam0 == 11 || iParam0 == -1) {
    return false;
  }
  if (iParam1 < 0 || iParam1 >= 32) {
    return false;
  }
  uVar0 =
      gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iParam0], iParam1);
  return uVar0;
}

// Position - 0x27F6
bool func_84(int iParam0) { return func_85(iParam0, Global_35781); }

// Position - 0x2807
int func_85(int iParam0, int iParam1) {
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

// Position - 0x29E8
bool func_86(int *iParam0, int iParam1) { return (iParam0 & iParam1) != 0; }

// Position - 0x29F7
void func_87() {
  StringCopy(&Local_53, "hunting_ambient", 64);
  iLocal_99 = 3;
  iLocal_119 = 2;
  sLocal_101 = "PLAY_HUNT";
  iLocal_120 = 5;
  iLocal_121 = 19;
  fLocal_117 = 2f;
  iLocal_105 = 69;
  fLocal_102 = system::to_float(func_89(iLocal_105)) + 5f;
  if (!func_83(0, 3)) {
    func_88(iLocal_105);
    bLocal_125 = false;
  }
  iLocal_97 = 20500;
}

// Position - 0x2A45
void func_88(int iParam0) {
  if (iLocal_95 < 5) {
    if (iParam0 != 263) {
      if (iParam0 < 0 || iParam0 >= 263) {
      }
      func_80(iParam0, 0, 0);
    }
    iLocal_105 = 263;
    func_42(&iLocal_96);
    iLocal_95 = 9;
  }
}

// Position - 0x2A88
int func_89(int iParam0) {
  switch (iParam0) {
  case 91:
  case 92:
  case 110:
  case 111: return 20;

  case 66:
  case 67:
  case 76:
  case 107:
  case 108:
  case 109:
  case 96:
  case 97:
  case 98:
  case 99:
  case 100:
  case 101:
  case 102:
  case 103:
  case 129:
  case 130:
  case 131:
  case 133:
  case 137: return 100;

  case 125:
  case 126:
  case 127:
  case 128:
  case 132:
  case 134:
  case 135:
  case 136:
  case 68:
  case 69:
  case 95:
  case 70:
  case 71:
  case 73:
  case 74:
  case 75:
  case 72: return 209;
  }
  return -1;
}

// Position - 0x2BA0
void func_90(int *iParam0, int iParam1) { func_91(iParam0, iParam1); }

// Position - 0x2BB0
void func_91(int *iParam0, var uParam1) { *iParam0 -= (*iParam0 & uParam1); }

// Position - 0x2BC5
void func_92(int iParam0) {
  if (iParam0) {
    if (iLocal_105 != 263) {
      func_80(iLocal_105, 0, 0);
    }
  }
  func_42(&iLocal_96);
  if (func_86(iLocal_94, 2)) {
    func_4();
    func_90(&iLocal_94, 2);
    func_6(&iLocal_98);
  }
  iLocal_98 = -1;
  func_93();
  script::terminate_this_thread();
}

// Position - 0x2C0E
void func_93() {
  func_90(&iLocal_94, 4);
  func_94();
  if (script::is_thread_active(iLocal_52)) {
    player::force_cleanup_for_thread_with_this_id(iLocal_52, 3);
  }
  if (!gameplay::is_string_null(&Local_69)) {
    if (ui::get_length_of_literal_string(&Local_69) != 0) {
      script::set_script_as_no_longer_needed(&Local_69);
    }
  }
}

// Position - 0x2C4B
void func_94() {}
