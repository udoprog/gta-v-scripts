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
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;
	int iVar1;

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
	iVar0 = -1;
	iVar1 = 0;
	if (player::has_force_cleanup_occurred(3)) {
		func_4();
	}
	while (true) {
		if (!iVar1) {
			switch (func_1(player::player_ped_id())) {
			case 1:
				if (audio::load_stream("MISSION_COMPLETE_FRANKLIN_SMALL", 0)) {
					audio::play_stream_frontend();
					iVar1 = 1;
				}
				break;

			case 2:
				if (audio::load_stream("MISSION_COMPLETE_TREVOR_SMALL", 0)) {
					audio::play_stream_frontend();
					iVar1 = 1;
				}
				break;

			default:
				if (audio::load_stream("MISSION_COMPLETE_MICHAEL_SMALL", 0)) {
					audio::play_stream_frontend();
					iVar1 = 1;
				}
				break;
			}
		}
		else if (iVar0 == -1) {
			iVar0 = gameplay::get_game_timer();
		}
		else if (gameplay::get_game_timer() > iVar0 + 8000) {
			func_4();
		}
		system::wait(0);
	}
}

// Position - 0xD2
int func_1(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_2(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x10F
int func_2(int iParam0) {
	if (func_3(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x139
bool func_3(int iParam0) { return iParam0 < 3; }

// Position - 0x145
void func_4() {
	audio::stop_stream();
	script::terminate_this_thread();
}
