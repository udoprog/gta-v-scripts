void __EntryFunction__() {
	gameplay::network_set_script_is_safe_for_network_game();
	while (true) {
		system::wait(0);
		func_1();
	}
}

// Position - 0x1C
void func_1() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_100354) {
		if (Global_100354[iVar0 /*28*/].f_21 != 0) {
			iVar1 = iVar0;
			if (gameplay::get_game_timer() > Global_100354[iVar0 /*28*/].f_21 &&
				Global_100354[iVar0 /*28*/].f_21 != -1) {
				if (func_3(iVar0)) {
					ui::clear_floating_help(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0)) {
				if (Global_100354[iVar0 /*28*/].f_21 != -1) {
					if (!gameplay::is_bit_set(Global_100354[iVar0 /*28*/].f_27, 0)) {
						Global_100354[iVar0 /*28*/].f_21 += system::round(gameplay::get_frame_time() * 1000f);
						if (ui::_0x2432784ACA090DA4(iVar1)) {
							gameplay::set_bit(&Global_100354[iVar0 /*28*/].f_27, 0);
						}
					}
				}
				if (Global_100354[iVar0 /*28*/].f_24.f_2 != 9999f) {
					if (Global_100354[iVar0 /*28*/].f_23 != 0) {
						if (!entity::is_entity_dead(Global_100354[iVar0 /*28*/].f_23, 0)) {
							if (!gameplay::is_bit_set(Global_100354[iVar0 /*28*/].f_27, 3)) {
								ui::_0x784BA7E0ECEB4178(
									iVar1, entity::get_offset_from_entity_in_world_coords(
											   Global_100354[iVar0 /*28*/].f_23, Global_100354[iVar0 /*28*/].f_24));
							}
							else {
								ui::_0xB094BC1DB4018240(iVar1, Global_100354[iVar0 /*28*/].f_23,
														Global_100354[iVar0 /*28*/].f_24,
														Global_100354[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if (Global_100354[iVar0 /*28*/].f_24 != 0f || Global_100354[iVar0 /*28*/].f_24.f_1 != 0f ||
							 Global_100354[iVar0 /*28*/].f_24.f_2 != 0f) {
						ui::_0x784BA7E0ECEB4178(iVar1, Global_100354[iVar0 /*28*/].f_24);
					}
				}
				else {
					ui::_0x7679CC1BCEBE3D4C(iVar1, Global_100354[iVar0 /*28*/].f_24,
											Global_100354[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if (gameplay::get_game_timer() - Global_100354[iVar0 /*28*/].f_22 > 1000) {
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

// Position - 0x20A
void func_2(int iParam0) {
	Global_100354[iParam0 /*28*/].f_21 = 0;
	StringCopy(&Global_100354[iParam0 /*28*/], "", 16);
	StringCopy(&Global_100354[iParam0 /*28*/].f_4, "", 64);
	Global_100354[iParam0 /*28*/].f_23 = 0;
	Global_100354[iParam0 /*28*/].f_24 = {0f, 0f, 0f};
	Global_100354[iParam0 /*28*/].f_27 = 0;
	Global_100354[iParam0 /*28*/].f_20 = 0;
	Global_100354[iParam0 /*28*/].f_22 = 0;
}

// Position - 0x272
bool func_3(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (!gameplay::are_strings_equal(&Global_100354[iParam0 /*28*/], "") &&
		!gameplay::is_string_null(&Global_100354[iParam0 /*28*/])) {
		if (gameplay::is_bit_set(Global_100354[iParam0 /*28*/].f_27, 1)) {
			if (gameplay::is_bit_set(Global_100354[iParam0 /*28*/].f_27, 2)) {
				return func_7(iVar0, &Global_100354[iParam0 /*28*/], &Global_100354[iParam0 /*28*/].f_4,
							  Global_100354[iParam0 /*28*/].f_20);
			}
			else {
				return func_6(iVar0, &Global_100354[iParam0 /*28*/], &Global_100354[iParam0 /*28*/].f_4);
			}
		}
		else if (gameplay::is_bit_set(Global_100354[iParam0 /*28*/].f_27, 2)) {
			return func_5(iVar0, &Global_100354[iParam0 /*28*/], Global_100354[iParam0 /*28*/].f_20);
		}
		else {
			return func_4(iVar0, &Global_100354[iParam0 /*28*/]);
		}
	}
	return false;
}

// Position - 0x34E
var func_4(int iParam0, char *sParam1) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam1);
	return ui::end_text_command_is_this_help_message_being_displayed(1 + iParam0);
}

// Position - 0x364
var func_5(int iParam0, char *sParam1, int iParam2) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam1);
	ui::add_text_component_integer(iParam2);
	return ui::end_text_command_is_this_help_message_being_displayed(1 + iParam0);
}

// Position - 0x380
var func_6(int iParam0, char *sParam1, char *sParam2) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam1);
	ui::add_text_component_substring_text_label(sParam2);
	return ui::end_text_command_is_this_help_message_being_displayed(1 + iParam0);
}

// Position - 0x39C
var func_7(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam1);
	ui::add_text_component_substring_text_label(sParam2);
	ui::add_text_component_integer(iParam3);
	return ui::end_text_command_is_this_help_message_being_displayed(1 + iParam0);
}
