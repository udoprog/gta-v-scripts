#pragma region Local Var //{
struct<2> ScriptParam_0 = {
	0, 0
};
var uScriptParam_2 = 0;
var uScriptParam_3 = 0;
#pragma endregion //}

void __EntryFunction__() {
	switch (ScriptParam_0) {
	case 3:
		while (true) {
			system::wait(5000);
		}
		break;

	case 2:
		if (ScriptParam_0.f_1 == -1029820160) {
		}
		break;

	case 0:
	case 1:
		if (ScriptParam_0.f_1 == -1931845307) {
			func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
			func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
			func_1(1);
		}
		if (ScriptParam_0.f_1 == -1029820160) {
		}
		break;
	}
	script::terminate_this_thread();
}

// Position - 0x8A
void func_1(int iParam0) {
	if (graphics::_push_scaleform_movie_function_n("DISPLAY_DATA_SLOT")) {
		graphics::_push_scaleform_movie_function_parameter_int(iParam0);
		graphics::_pop_scaleform_movie_function_void();
	}
}

// Position - 0xA6
void func_2(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char *sParam5) {
	if (graphics::_push_scaleform_movie_function_n("SET_DATA_SLOT")) {
		graphics::_push_scaleform_movie_function_parameter_int(iParam0);
		graphics::_push_scaleform_movie_function_parameter_int(iParam1);
		graphics::_push_scaleform_movie_function_parameter_int(iParam2);
		graphics::_push_scaleform_movie_function_parameter_int(iParam3);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		if (iParam4) {
			graphics::_push_scaleform_movie_function_parameter_int(1);
		}
		else {
			graphics::_push_scaleform_movie_function_parameter_int(0);
		}
		func_3(sParam5);
		graphics::_pop_scaleform_movie_function_void();
	}
}

// Position - 0xF6
void func_3(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}
