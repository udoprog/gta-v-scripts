#pragma region Local Var //{
struct<4> ScriptParam_0 = {
	0, 0, 0, 0
};
#pragma endregion //}

void __EntryFunction__() {
	switch (ScriptParam_0) {
	case 3:
		while (true) {
			system::wait(5000);
		}
		break;

	case 0:
	case 1:
		if (ScriptParam_0.f_1 == -1931845307) {
			func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
			func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
			func_1(1);
		}
		if (ScriptParam_0.f_1 == -1705871862) {
		}
		break;

	case 2:
		switch (ScriptParam_0.f_1) {
		case -1931845307: break;

		case -1705871862:
			switch (ScriptParam_0.f_3) {
			case 25: break;

			case 50: break;
			}
			break;
		}
		break;
	}
	script::terminate_this_thread();
}

// Position - 0xBA
void func_1(int iParam0) {
	if (graphics::_push_scaleform_movie_function_n("DISPLAY_DATA_SLOT")) {
		graphics::_push_scaleform_movie_function_parameter_int(iParam0);
		graphics::_pop_scaleform_movie_function_void();
	}
}

// Position - 0xD6
void func_2(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char *sParam5, int iParam6, int iParam7) {
	if (graphics::_push_scaleform_movie_function_n("SET_DATA_SLOT")) {
		graphics::_push_scaleform_movie_function_parameter_int(iParam0);
		graphics::_push_scaleform_movie_function_parameter_int(iParam1);
		graphics::_push_scaleform_movie_function_parameter_int(iParam2);
		graphics::_push_scaleform_movie_function_parameter_int(iParam3);
		graphics::_push_scaleform_movie_function_parameter_int(iParam7);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		if (iParam4) {
			graphics::_push_scaleform_movie_function_parameter_int(1);
		}
		else {
			graphics::_push_scaleform_movie_function_parameter_int(0);
		}
		if (iParam6 == 0) {
			func_3(sParam5);
		}
		else {
			graphics::_0xE83A3E3557A56640(sParam5);
		}
		graphics::_pop_scaleform_movie_function_void();
	}
}

// Position - 0x136
void func_3(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}
