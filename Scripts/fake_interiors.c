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
char *sLocal_18 = NULL;
var uLocal_19 = 0;
var uLocal_20 = 0;
var uLocal_21 = 0;
var uLocal_22 = 0;
float fLocal_23 = 0f;
float fLocal_24 = 0f;
float fLocal_25 = 0f;
var uLocal_26 = 0;
var uLocal_27 = 0;
int iLocal_28 = 0;
int iLocal_29 = 0;
vector3 vLocal_30 = {0f, 0f, 0f};
int iLocal_33 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_29 = -1;
	vLocal_30 = {0f, 0f, 0f};
	if (player::has_force_cleanup_occurred(2)) {
		script::terminate_this_thread();
	}
	while (true) {
		system::wait(0);
		if (!network::network_is_game_in_progress()) {
			script::terminate_this_thread();
		}
		if (func_15(player::player_id()) && entity::does_entity_exist(func_14())) {
			iLocal_33 = func_14();
		}
		else {
			iLocal_33 = player::player_ped_id();
		}
		if (entity::is_entity_dead(iLocal_33, 0)) {
		}
		func_1();
	}
}

// Position - 0xB1
void func_1() {
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	int iVar7;

	func_13();
	if (iLocal_29 != -1 && func_12(iLocal_29)) {
		vVar0 = {entity::get_entity_coords(iLocal_33, 0)};
		vVar3 = {func_11(iLocal_29)};
		if (system::vdist2(vVar3, vVar0) < IntToFloat(func_10(iLocal_29))) {
			bVar6 = false;
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 < func_9(iLocal_29)) {
				if (!bVar6) {
					if (entity::is_entity_in_angled_area(iLocal_33, func_8(iLocal_29, iVar7), func_7(iLocal_29, iVar7),
														 func_6(iLocal_29, iVar7), 0, 1, 0)) {
						bVar6 = true;
					}
				}
				iVar7++;
			}
			if (bVar6) {
				ui::set_radar_as_interior_this_frame(gameplay::get_hash_key(func_5(iLocal_29)), vVar3.x, vVar3.y,
													 func_4(iLocal_29), func_3(iLocal_29));
				func_2(iLocal_29);
			}
		}
	}
}

// Position - 0x170
void func_2(int iParam0) {
	vector3 vVar0;

	vVar0 = {entity::get_entity_coords(iLocal_33, 0)};
	ui::_set_player_blip_position_this_frame(vVar0.x, vVar0.y);
	switch (iParam0) {
	case 0: break;

	case 1: break;

	case 2:
		vVar0 = {entity::get_entity_coords(iLocal_33, 0)};
		ui::_set_player_blip_position_this_frame(vVar0.x, vVar0.y);
		break;

	case 3: ui::set_radar_as_exterior_this_frame(); break;

	case 4: ui::set_radar_as_exterior_this_frame(); break;
	}
}

// Position - 0x1DE
int func_3(int iParam0) {
	vector3 vVar0;

	switch (iParam0) {
	case 0: return 0;

	case 1:
		vVar0 = {entity::get_entity_coords(iLocal_33, 0)};
		if (vVar0.z < 9.7796f) {
			return 0;
		}
		else if (vVar0.z > 9.7796f && vVar0.z < 16f) {
			return 1;
		}
		else {
			return 2;
		}
		break;

	case 2:
		vVar0 = {entity::get_entity_coords(iLocal_33, 0)};
		if (vVar0.z < 178.9f) {
			return 0;
		}
		else if (vVar0.z > 178.9f && vVar0.z < 188.7f) {
			return 1;
		}
		else {
			return 2;
		}
		break;

	case 3: return 0;

	case 4: return 0;
	}
	return 0;
}

// Position - 0x2B3
int func_4(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 0;

	case 2: return 0;

	case 3: return 0;

	case 4: return 0;
	}
	return 0;
}

// Position - 0x304
char *func_5(int iParam0) {
	switch (iParam0) {
	case 0: return "V_FakeBoatPO1SH2A";

	case 1: return "V_FakeWarehousePO103";

	case 2: return "V_FakeKortzCenter";

	case 3: return "V_FakePrison";

	case 4: return "V_FakeMilitaryBase";
	}
	return "";
}

// Position - 0x360
float func_6(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 0: return 28.125f;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0: return 32.6875f;

		case 1: return 13.1875f;

		case 2: return 16.25f;

		case 3: return 21.75f;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0: return 95f;

		case 1: return 78.75f;

		case 2: return 70.6875f;

		case 3: return 64.4375f;

		case 4: return 32.375f;

		case 5: return 19f;

		case 6: return 19f;

		case 7: return 19.78125f;

		case 8: return 32.0625f;

		case 9: return 35.8125f;

		case 10: return 30.5f;
		}
		break;

	case 3:
		switch (iParam1) {
		case 0: return 3000f;
		}
		break;

	case 4:
		switch (iParam1) {
		case 0: return 1500f;
		}
		break;
	}
	return 0f;
}

// Position - 0x4F2
Vector3 func_7(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 0: return 1240.537f, -3057.289f, 40.75164f;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0: return 34.27837f, -2654.244f, 20.9423f;

		case 1: return 13.93163f, -2654.561f, 14.44239f;

		case 2: return 55.59572f, -2667.499f, 10.82245f;

		case 3: return 34.5866f, -2746.387f, 10.95006f;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0: return -2169.17f, 256.7264f, 203.4081f;

		case 1: return -2216.394f, 329.4761f, 201.3617f;

		case 2: return -2345.353f, 350.7882f, 189.6522f;

		case 3: return -2288.097f, 388.9909f, 200.9045f;

		case 4: return -2310.263f, 406.638f, 200.9041f;

		case 5: return -2169.221f, 260.5679f, 202.4294f;

		case 6: return -2258.778f, 166.9506f, 202.8318f;

		case 7: return -2236.973f, 285.5958f, 203.0395f;

		case 8: return -2211.362f, 303.6741f, 214.9323f;

		case 9: return -2282.098f, 383.0904f, 201.0395f;

		case 10: return -2277.93f, 356.4442f, 201.1015f;
		}
		break;

	case 3:
		switch (iParam1) {
		case 0: return 200f, 2600f, -5f;
		}
		break;

	case 4:
		switch (iParam1) {
		case 0: return -1451.205f, 2689.44f, -37.62654f;
		}
		break;
	}
	return vLocal_30;
}

// Position - 0x73B
Vector3 func_8(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 0: return 1240.535f, -2880.354f, -19.96489f;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0: return 34.15308f, -2747.067f, 1.137565f;

		case 1: return 13.95777f, -2700.626f, 5.046232f;

		case 2: return 55.61185f, -2687.681f, 5.005801f;

		case 3: return 34.56926f, -2759.479f, -0.030933f;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0: return -2317.38f, 191.6319f, 165.4037f;

		case 1: return -2357.995f, 264.0297f, 162.7988f;

		case 2: return -2261.433f, 387.3963f, 154.3522f;

		case 3: return -2326.399f, 408.3378f, 140.3182f;

		case 4: return -2304.617f, 460.2127f, 140.2147f;

		case 5: return -2150.825f, 216.4168f, 162.8012f;

		case 6: return -2172.765f, 203.5957f, 167.4135f;

		case 7: return -2191.036f, 305.961f, 159.625f;

		case 8: return -2227.613f, 340.0587f, 165.1357f;

		case 9: return -2244.41f, 399.5764f, 137.5101f;

		case 10: return -2243.261f, 371.4072f, 137.2722f;
		}
		break;

	case 3:
		switch (iParam1) {
		case 0: return 3200f, 2600f, 3000f;
		}
		break;

	case 4:
		switch (iParam1) {
		case 0: return -2841.107f, 3506.837f, 1000.474f;
		}
		break;
	}
	return vLocal_30;
}

// Position - 0x984
int func_9(int iParam0) {
	switch (iParam0) {
	case 0: return 1;

	case 1: return 4;

	case 2: return 11;

	case 3: return 1;

	case 4: return 1;
	}
	return 0;
}

// Position - 0x9D6
int func_10(int iParam0) {
	switch (iParam0) {
	case 0: return 10000;

	case 1: return 10000;

	case 2: return 250000;

	case 3: return 9000000;

	case 4: return 2250000;
	}
	return 0;
}

// Position - 0xA34
Vector3 func_11(int iParam0) {
	switch (iParam0) {
	case 0: return 1240f, -2970f, 12.2f;

	case 1: return 40f, -2720f, 12f;

	case 2: return -2250f, 300f, 182.2f;

	case 3: return 1700f, 2580f, 80f;

	case 4: return -2250f, 3100f, 80f;
	}
	return vLocal_30;
}

// Position - 0xACE
int func_12(int iParam0) {
	switch (iParam0) {
	case 0: break;

	case 1: break;

	case 2: break;

	case 3: break;

	case 4: break;
	}
	return 1;
}

// Position - 0xB0B
void func_13() {
	vector3 vVar0;

	iLocal_28++;
	if (iLocal_28 > 4) {
		iLocal_28 = 0;
	}
	if (iLocal_28 != iLocal_29) {
		if (iLocal_29 == -1) {
			iLocal_29 = iLocal_28;
		}
		else {
			vVar0 = {entity::get_entity_coords(iLocal_33, 0)};
			if (system::vdist2(func_11(iLocal_28), vVar0) < system::vdist2(func_11(iLocal_29), vVar0)) {
				iLocal_29 = iLocal_28;
			}
		}
	}
}

// Position - 0xB65
var func_14() { return Global_2359301.f_2; }

// Position - 0xB73
int func_15(int iParam0) {
	if (func_17(iParam0, 0)) {
		return 1;
	}
	if (func_16()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0xBB5
bool func_16() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0xBC6
bool func_17(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_18(-1, 0) == 8;
	}
	else {
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1) {
		if (network::network_is_player_active(iParam0)) {
			bVar0 = player::get_player_team(iParam0) == 8;
		}
	}
	return bVar0;
}

// Position - 0xC11
int func_18(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_19();
	}
	if (Global_1315213[iVar1] == 1) {
		if (iParam1) {
		}
		iVar0 = 8;
	}
	else {
		iVar0 = Global_1312729[iVar1];
		if (iParam1) {
		}
	}
	return iVar0;
}

// Position - 0xC52
var func_19() { return Global_1312735; }
