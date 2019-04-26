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
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
var uLocal_35 = 0;
int iLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
var uLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
char *sLocal_47 = NULL;
char *sLocal_48 = NULL;
char *sLocal_49 = NULL;
vector3 vLocal_50 = {0f, 0f, 0f};
vector3 vLocal_53 = {0f, 0f, 0f};
int iLocal_56 = 0;
#pragma endregion //}

void __EntryFunction__() {
	bool bVar0;
	int iVar1;
	int iVar18;
	int iVar19;

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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	sLocal_47 = "CHECKPOINT_NORMAL";
	sLocal_48 = "CHECKPOINT_MISSED";
	sLocal_49 = "CHECKPOINT_PERFECT";
	vLocal_50 = {1694.74f, 3276.502f, 41.2796f};
	vLocal_53 = {8.79494f, 0.59893f, 154.8464f};
	gameplay::network_set_script_is_safe_for_network_game();
	ui::_set_director_mode(0);
	gameplay::_show_ped_in_pause_menu(0);
	streaming::remove_ipl("prologue_DistantLights");
	streaming::remove_ipl("prologue_LODLights");
	iLocal_56 = 0;
	bVar0 = func_41();
	if (gameplay::_0xA049A5BE0F04F2F8() || gameplay::_0x3BBBD13E5041A79E()) {
		bVar0 = false;
	}
	if (bVar0) {
		script::_0xB1577667C3708F9B();
	}
	gameplay::_use_freemode_map_behavior(0);
	func_40(joaat("mp_registration"), 1424);
	script::set_script_with_name_hash_as_no_longer_needed(joaat("mp_registration"));
	func_40(joaat("mp_fm_registration"), 1424);
	script::set_script_with_name_hash_as_no_longer_needed(joaat("mp_fm_registration"));
	func_40(joaat("tunables_registration"), 1424);
	script::set_script_with_name_hash_as_no_longer_needed(joaat("tunables_registration"));
	func_40(joaat("sc_lb_global_block"), 1424);
	script::set_script_with_name_hash_as_no_longer_needed(joaat("sc_lb_global_block"));
	func_40(joaat("mp_save_game_global_block"), 1424);
	script::set_script_with_name_hash_as_no_longer_needed(joaat("mp_save_game_global_block"));
	func_40(joaat("mp_prop_global_block"), 1424);
	script::set_script_with_name_hash_as_no_longer_needed(joaat("mp_prop_global_block"));
	func_40(joaat("mp_prop_special_global_block"), 1424);
	script::set_script_with_name_hash_as_no_longer_needed(joaat("mp_prop_special_global_block"));
	func_40(joaat("title_update_registration"), 1424);
	script::set_script_with_name_hash_as_no_longer_needed(joaat("title_update_registration"));
	Global_2595907 = 0;
	func_40(joaat("sp_dlc_registration"), 1424);
	script::set_script_with_name_hash_as_no_longer_needed(joaat("sp_dlc_registration"));
	func_40(joaat("sp_pilotschool_reg"), 1424);
	script::set_script_with_name_hash_as_no_longer_needed(joaat("sp_pilotschool_reg"));
	func_39();
	switch (iLocal_56) {
	case 0:
		func_40(joaat("standard_global_init"), 1424);
		script::set_script_with_name_hash_as_no_longer_needed(joaat("standard_global_init"));
		break;
	}
	system::wait(0);
	Global_69704 = 1;
	Global_2 = bVar0;
	cam::set_gameplay_cam_relative_heading(0f);
	switch (iLocal_56) {
	case 0:
		Global_2621550 = 0;
		Global_2621549 = 0;
		func_40(joaat("standard_global_reg"), 1424);
		script::set_script_as_no_longer_needed("standard_global_reg");
		while (!gameplay::is_bit_set(Global_2595907, 0) || !gameplay::is_bit_set(Global_2595907, 1) ||
			   !gameplay::is_bit_set(Global_2595907, 2)) {
			if (!gameplay::is_bit_set(Global_2595907, 0)) {
			}
			if (!gameplay::is_bit_set(Global_2595907, 1)) {
			}
			if (!gameplay::is_bit_set(Global_2595907, 2)) {
			}
			system::wait(0);
		}
		gameplay::start_save_data(&Global_101700, 1, 1);
		gameplay::register_float_to_save(&Global_101700, "fSaveVersion");
		gameplay::stop_save_data();
		if (Global_1) {
			Global_0 = Global_101700;
		}
		Global_101700 = 1.7f;
		if (Global_1) {
			if (Global_0 != 1.7f) {
				func_28(Global_0);
			}
		}
		break;
	}
	gameplay::start_save_data(&Global_2097152, 10759, 0);
	gameplay::_start_save_array(&Global_2097152, 10759, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1) {
		func_22(&Global_2097152[iVar1 /*10758*/], iVar1);
		func_20(&Global_2097152[iVar1 /*10758*/], iVar1);
		func_18(&Global_2097152[iVar1 /*10758*/], iVar1);
		func_14(&Global_2097152[iVar1 /*10758*/], iVar1);
		func_12(&Global_2097152[iVar1 /*10758*/], iVar1);
		func_11(&Global_2097152[iVar1 /*10758*/], iVar1);
		func_10(&Global_2097152[iVar1 /*10758*/], iVar1);
		func_3(&Global_2097152[iVar1 /*10758*/], iVar1);
		iVar1++;
	}
	gameplay::stop_save_struct();
	gameplay::stop_save_data();
	iVar18 = 10759;
	iVar19 = gameplay::_0xA09F896CE912481F(0);
	if (iVar18 != iVar19) {
	}
	if (!network::_0xEA14EEF5B7CD2C30() && !network::_0x1D4DC17C38FEAFF0()) {
		network::_0xB606E6CC59664972(0);
	}
	pathfind::_0x228E5C6AD4D74BFD(0);
	gameplay::_show_ped_in_pause_menu(0);
	func_2();
	func_1();
	script::terminate_this_thread();
}

// Position - 0x3BD
void func_1() {
	Global_30[0] = interior::get_interior_at_coords_with_type(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_30[1] = interior::get_interior_at_coords_with_type(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_30[2] = interior::get_interior_at_coords_with_type(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_30[3] = interior::get_interior_at_coords_with_type(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_30[4] = interior::get_interior_at_coords_with_type(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_30[5] = interior::get_interior_at_coords_with_type(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_30[6] = interior::get_interior_at_coords_with_type(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_30[7] = interior::get_interior_at_coords_with_type(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_30[8] = interior::get_interior_at_coords_with_type(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_30[9] = interior::get_interior_at_coords_with_type(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_30[0] = interior::get_interior_at_coords_with_type(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_30[11] = interior::get_interior_at_coords_with_type(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_30[12] = interior::get_interior_at_coords_with_type(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_30[13] = interior::get_interior_at_coords_with_type(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_30[14] = interior::get_interior_at_coords_with_type(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_30[15] = interior::get_interior_at_coords_with_type(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_30[16] = interior::get_interior_at_coords_with_type(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_30[17] = interior::get_interior_at_coords_with_type(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_30[18] = interior::get_interior_at_coords_with_type(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_30[19] = interior::get_interior_at_coords_with_type(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_30[20] = interior::get_interior_at_coords_with_type(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_30[21] = interior::get_interior_at_coords_with_type(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_30[22] = interior::get_interior_at_coords_with_type(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_30[23] = interior::get_interior_at_coords_with_type(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_30[24] = interior::get_interior_at_coords_with_type(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_30[25] = interior::get_interior_at_coords_with_type(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_30[26] = interior::get_interior_at_coords_with_type(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_30[27] = interior::get_interior_at_coords_with_type(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_30[28] = interior::get_interior_at_coords_with_type(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_30[29] = interior::get_interior_at_coords_with_type(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_30[30] = interior::get_interior_at_coords_with_type(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_30[31] = interior::get_interior_at_coords_with_type(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_30[32] = interior::get_interior_at_coords_with_type(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_30[33] = interior::get_interior_at_coords_with_type(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_30[34] = interior::get_interior_at_coords_with_type(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_30[35] = interior::get_interior_at_coords_with_type(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_30[36] = interior::get_interior_at_coords_with_type(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_30[37] = interior::get_interior_at_coords_with_type(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_30[38] = interior::get_interior_at_coords_with_type(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_30[39] = interior::get_interior_at_coords_with_type(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_30[40] = interior::get_interior_at_coords_with_type(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_30[41] = interior::get_interior_at_coords_with_type(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_30[42] = interior::get_interior_at_coords_with_type(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_30[43] = interior::get_interior_at_coords_with_type(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_30[44] = interior::get_interior_at_coords_with_type(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_30[45] = interior::get_interior_at_coords_with_type(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_30[46] = interior::get_interior_at_coords_with_type(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_30[47] = interior::get_interior_at_coords_with_type(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_30[48] = interior::get_interior_at_coords_with_type(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_30[49] = interior::get_interior_at_coords_with_type(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_30[50] = interior::get_interior_at_coords_with_type(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_30[51] = interior::get_interior_at_coords_with_type(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_30[52] = interior::get_interior_at_coords_with_type(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_30[53] = interior::get_interior_at_coords_with_type(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_30[54] = interior::get_interior_at_coords_with_type(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_30[55] = interior::get_interior_at_coords_with_type(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_30[56] = interior::get_interior_at_coords_with_type(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_30[57] = interior::get_interior_at_coords_with_type(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_30[58] = interior::get_interior_at_coords_with_type(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_30[59] = interior::get_interior_at_coords_with_type(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_30[60] = interior::get_interior_at_coords_with_type(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

// Position - 0xADA
void func_2() {
	Global_139175 = 1;
	Global_139176 = 1;
}

// Position - 0xAEC
void func_3(var *uParam0, int iParam1) {
	func_9(uParam0, iParam1);
	func_8(uParam0, iParam1);
	func_7(uParam0, iParam1);
	func_6(uParam0, iParam1);
	func_5(uParam0, iParam1);
	func_4(uParam0, iParam1);
}

// Position - 0xB24
void func_4(var *uParam0, int iParam1) {
	char cVar0[32];

	StringCopy(&cVar0, "g_SaveData_DATE_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	gameplay::_start_save_array(&uParam0->f_10731.f_19, 8, &cVar0);
	gameplay::_start_save_struct(&uParam0->f_10731.f_19[0 /*7*/], 7, "TEMPSTAT_DATE");
	gameplay::register_int_to_save(&uParam0->f_10731.f_19[0 /*7*/], "TEMPSTAT_DATE.year");
	gameplay::register_int_to_save(&uParam0->f_10731.f_19[0 /*7*/].f_1, "TEMPSTAT_DATE.month");
	gameplay::register_int_to_save(&uParam0->f_10731.f_19[0 /*7*/].f_2, "TEMPSTAT_DATE.day");
	gameplay::register_int_to_save(&uParam0->f_10731.f_19[0 /*7*/].f_3, "TEMPSTAT_DATE.hour");
	gameplay::register_int_to_save(&uParam0->f_10731.f_19[0 /*7*/].f_4, "TEMPSTAT_DATE.minute");
	gameplay::register_int_to_save(&uParam0->f_10731.f_19[0 /*7*/].f_5, "TEMPSTAT_DATE.seconds");
	gameplay::register_int_to_save(&uParam0->f_10731.f_19[0 /*7*/].f_6, "TEMPSTAT_DATE.Milliseconds");
	gameplay::stop_save_struct();
	gameplay::stop_save_array();
}

// Position - 0xBEE
void func_5(var *uParam0, int iParam1) {
	char cVar0[32];

	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	gameplay::_start_save_array(&uParam0->f_10731.f_15, 4, &cVar0);
	gameplay::_start_save_struct(&uParam0->f_10731.f_15[0 /*3*/], 3, "TEMPSTAT_VEC");
	gameplay::register_float_to_save(&uParam0->f_10731.f_15[0 /*3*/], "TEMPSTAT_VEC.x");
	gameplay::register_float_to_save(&uParam0->f_10731.f_15[0 /*3*/].f_1, "TEMPSTAT_VEC.y");
	gameplay::register_float_to_save(&uParam0->f_10731.f_15[0 /*3*/].f_2, "TEMPSTAT_VEC.z");
	gameplay::stop_save_struct();
	gameplay::stop_save_array();
}

// Position - 0xC67
void func_6(var *uParam0, int iParam1) {
	char cVar0[32];

	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	gameplay::_start_save_array(&uParam0->f_10731.f_6, 9, &cVar0);
	gameplay::_0x8269816F6CFD40F8(&uParam0->f_10731.f_6[0 /*8*/], "TEMPSTAT_LABEL");
	gameplay::stop_save_array();
}

// Position - 0xCA2
void func_7(var *uParam0, int iParam1) {
	char cVar0[32];

	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	gameplay::_start_save_array(&uParam0->f_10731.f_4, 2, &cVar0);
	gameplay::register_bool_to_save(&uParam0->f_10731.f_4[0], "TEMPSTAT_BOOL");
	gameplay::stop_save_array();
}

// Position - 0xCDC
void func_8(var *uParam0, int iParam1) {
	char cVar0[32];

	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	gameplay::_start_save_array(&uParam0->f_10731.f_2, 2, &cVar0);
	gameplay::register_float_to_save(&uParam0->f_10731.f_2[0], "TEMPSTAT_FLOAT");
	gameplay::stop_save_array();
}

// Position - 0xD16
void func_9(var *uParam0, int iParam1) {
	char cVar0[32];

	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	gameplay::_start_save_array(&uParam0->f_10731, 2, &cVar0);
	gameplay::register_int_to_save(&uParam0->f_10731[0], "TEMPSTAT_INT1");
	gameplay::stop_save_array();
}

// Position - 0xD4C
void func_10(var *uParam0, int iParam1) {
	vector3 vVar0[24];
	int iVar6;
	struct<4> Var7;
	char cVar11[16];
	char cVar15[16];
	char cVar19[16];
	char cVar23[16];

	StringCopy(&cVar0, "MP_ATM_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	gameplay::_start_save_struct(&uParam0->f_10581, 150, &cVar0);
	gameplay::register_int_to_save(&uParam0->f_10581, "MPATM_CARET_");
	iVar6 = 0;
	StringCopy(&Var7, "MPATMLOGVAL", 16);
	gameplay::_start_save_array(&uParam0->f_10581.f_1, 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16) {
		cVar11 = {Var7};
		StringIntConCat(&cVar11, iVar6, 16);
		gameplay::register_int_to_save(&uParam0->f_10581.f_1[iVar6], &cVar11);
		iVar6++;
	}
	gameplay::stop_save_array();
	StringCopy(&Var7, "MPATMLOGSCRS", 16);
	gameplay::_start_save_array(&uParam0->f_10581.f_18, 97, &Var7);
	iVar6 = 0;
	while (iVar6 < 16) {
		cVar15 = {Var7};
		StringIntConCat(&cVar15, iVar6, 16);
		gameplay::_0x48F069265A0E4BEC(&uParam0->f_10581.f_18[iVar6 /*6*/], &cVar15);
		iVar6++;
	}
	gameplay::stop_save_array();
	StringCopy(&Var7, "MPATMLOGACT", 16);
	gameplay::_start_save_array(&uParam0->f_10581.f_115, 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16) {
		cVar19 = {Var7};
		StringIntConCat(&cVar19, iVar6, 16);
		gameplay::register_enum_to_save(&uParam0->f_10581.f_115[iVar6], &cVar19);
		iVar6++;
	}
	gameplay::stop_save_array();
	StringCopy(&Var7, "MPATMLOGDAT", 16);
	gameplay::_start_save_array(&uParam0->f_10581.f_132, 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16) {
		cVar23 = {Var7};
		StringIntConCat(&cVar23, iVar6, 16);
		gameplay::register_int_to_save(&uParam0->f_10581.f_132[iVar6], &cVar23);
		iVar6++;
	}
	gameplay::stop_save_array();
	gameplay::register_bool_to_save(&uParam0->f_10581.f_149, "mpAnyVecBought");
	gameplay::stop_save_struct();
}

// Position - 0xEC6
void func_11(var *uParam0, int iParam1) {
	struct<6> Var0;
	char cVar6[32];
	int iVar14;

	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	gameplay::_start_save_struct(&uParam0->f_10340, 241, &Var0);
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340, "BOUNTY_GAMERH64_1");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_1, "BOUNTY_GAMERH64_2");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_2, "BOUNTY_GAMERH64_3");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_3, "BOUNTY_GAMERH64_4");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_4, "BOUNTY_GAMERH64_5");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_5, "BOUNTY_GAMERH64_6");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_6, "BOUNTY_GAMERH64_7");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_7, "BOUNTY_GAMERH64_8");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_8, "BOUNTY_GAMERH64_9");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_9, "BOUNTY_GAMERH64_10");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_10, "BOUNTY_GAMERH64_11");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_11, "BOUNTY_GAMERH64_12");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_12, "BOUNTY_GAMERH64_13");
	gameplay::register_int_to_save(&uParam0->f_10340.f_13, "BOUNTY_TIME");
	gameplay::register_int_to_save(&uParam0->f_10340.f_14, "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	gameplay::_start_save_array(&uParam0->f_10340.f_15, 209, &Var0);
	iVar14 = 0;
	while (iVar14 < 16) {
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_1", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/], &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_2", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/].f_1, &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_3", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/].f_2, &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_4", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/].f_3, &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_5", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/].f_4, &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_6", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/].f_5, &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_7", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/].f_6, &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_8", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/].f_7, &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_9", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/].f_8, &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_10", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/].f_9, &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_11", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/].f_10, &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_12", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/].f_11, &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_13", 32);
		gameplay::_0xA735353C77334EA0(&uParam0->f_10340.f_15[iVar14 /*13*/].f_12, &cVar6);
		iVar14++;
	}
	gameplay::stop_save_array();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	gameplay::_start_save_array(&uParam0->f_10340.f_224, 17, &Var0);
	iVar14 = 0;
	while (iVar14 < 16) {
		MemCopy(&cVar6, {Var0}, 8);
		StringIntConCat(&cVar6, iVar14, 32);
		gameplay::register_int_to_save(&uParam0->f_10340.f_224[iVar14], &cVar6);
		iVar14++;
	}
	gameplay::stop_save_array();
	gameplay::stop_save_struct();
}

// Position - 0x12EC
void func_12(var *uParam0, int iParam1) {
	vector3 vVar0[24];

	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&uParam0->f_7546, &cVar0);
}

// Position - 0x130D
void func_13(var *uParam0, char *sParam1) {
	int iVar0;
	char cVar1[16];
	int iVar5;
	char cVar6[64];
	int iVar22;
	int iVar23;
	char cVar24[16];
	char cVar28[16];

	gameplay::_start_save_struct(uParam0, 2794, sParam1);
	gameplay::register_int_to_save(uParam0, "CASH_GIVEN_TOTAL");
	gameplay::register_int_to_save(&uParam0->f_1, "CASH_GIVEN_TIME");
	gameplay::register_int_to_save(&uParam0->f_2, "LAST_SAVED_CAR");
	gameplay::register_int_to_save(&uParam0->f_3, "CURRENT_PROP_VALUE");
	gameplay::register_int_to_save(&uParam0->f_11, "iNewVehPurchased");
	gameplay::register_int_to_save(&uParam0->f_4, "WHEELIE_TIMER");
	gameplay::register_int_to_save(&uParam0->f_5, "WHEELIE_UPDATES");
	gameplay::register_int_to_save(&uParam0->f_6, "WHEELIE_TIME");
	gameplay::register_bool_to_save(&uParam0->f_7, "GRAB_TIME");
	gameplay::register_int_to_save(&uParam0->f_8, "iLastSoldVehicleTime");
	gameplay::register_int_to_save(&uParam0->f_9, "ilasttimeplayed");
	gameplay::register_int_to_save(&uParam0->f_10, "iSaveCoupons");
	gameplay::register_int_to_save(&uParam0->f_12, "iLastBruciePillReminder");
	gameplay::register_int_to_save(&uParam0->f_13, "iLastSecVanReminder");
	gameplay::register_int_to_save(&uParam0->f_14, "iLastBountyReminder");
	gameplay::register_int_to_save(&uParam0->f_15, "iLastParaReminder");
	gameplay::register_int_to_save(&uParam0->f_16, "iLastCrateDropReminder");
	gameplay::register_int_to_save(&uParam0->f_17, "iLastGangAttackReminder");
	gameplay::register_int_to_save(&uParam0->f_18, "iLastImpExpReminder");
	gameplay::register_int_to_save(&uParam0->f_19, "iLastInsuranceReminder");
	gameplay::register_int_to_save(&uParam0->f_20, "iLastSurvivalReminder");
	gameplay::register_int_to_save(&uParam0->f_21, "iLastBikerBackupReminder");
	gameplay::register_int_to_save(&uParam0->f_22, "iLastVagosBackupReminder");
	gameplay::register_int_to_save(&uParam0->f_23, "iLastLesterVehReminder");
	gameplay::register_int_to_save(&uParam0->f_24, "iLastPersonalVehDeliveryReminder");
	gameplay::register_int_to_save(&uParam0->f_25, "iLastPegasusVehicleReminder");
	gameplay::register_int_to_save(&uParam0->f_26, "iLastMerryweatherReminder");
	gameplay::register_int_to_save(&uParam0->f_27, "iLastLesterHelpReminder");
	gameplay::register_int_to_save(&uParam0->f_28, "iLastLesterReqJobReminder");
	gameplay::register_int_to_save(&uParam0->f_29, "iLastGeraldReqJobReminder");
	gameplay::register_int_to_save(&uParam0->f_30, "iLastSimeonReqJobReminder");
	gameplay::register_int_to_save(&uParam0->f_31, "iLastMartinReqJobReminder");
	gameplay::register_int_to_save(&uParam0->f_32, "iLastRonReqJobReminder");
	gameplay::register_int_to_save(&uParam0->f_33, "iRecentlyPassedMissionBitset");
	gameplay::register_int_to_save(&uParam0->f_34, "iRecentlyPassedMissionTime");
	gameplay::register_int_to_save(&uParam0->f_35, "iLastImportExportDelTime");
	gameplay::register_int_to_save(&uParam0->f_36, "iLastImportExportListTime");
	gameplay::register_int_to_save(&uParam0->f_37, "iMyLastImportExportListDay");
	gameplay::register_int_to_save(&uParam0->f_38, "iVehicleWebsiteReminderTime");
	gameplay::register_bool_to_save(&uParam0->f_39, "bDefaultClothesSet");
	gameplay::_start_save_array(&uParam0->f_40, 5, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < uParam0->f_40) {
		StringCopy(&cVar1, "CLOTHES", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_int_to_save(&uParam0->f_40[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_45, 969, "CARMODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_45) {
		StringCopy(&cVar1, "CARMODS", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_int_to_save(&uParam0->f_45[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::register_int_to_save(&uParam0->f_1014, "iLastCrewCharWasIn");
	gameplay::register_int_to_save(&uParam0->f_1015, "iStripperUnlockedBS");
	gameplay::register_int_to_save(&uParam0->f_1016, "iGeneralBS");
	gameplay::register_int_to_save(&uParam0->f_1017, "iCarsModifiedTimeStamp");
	gameplay::_start_save_array(&uParam0->f_1018, 10, "GOLF_fLongestDriveHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_1018) {
		StringCopy(&cVar6, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		gameplay::register_float_to_save(&uParam0->f_1018[iVar5], &cVar6);
		iVar5++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1028, 10, "GOLF_fLongestPuttHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_1028) {
		StringCopy(&cVar6, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		gameplay::register_float_to_save(&uParam0->f_1028[iVar5], &cVar6);
		iVar5++;
	}
	gameplay::stop_save_array();
	gameplay::register_int_to_save(&uParam0->f_1038, "GOLF_iBestRound");
	gameplay::register_float_to_save(&uParam0->f_1039, "GOLF_fLongestDrive");
	gameplay::register_float_to_save(&uParam0->f_1040, "GOLF_fLongestPutt");
	gameplay::register_int_to_save(&uParam0->f_1041, "iShareLJCashTotal");
	gameplay::register_int_to_save(&uParam0->f_1042, "iShareLJCashTime");
	gameplay::register_int_to_save(&uParam0->f_1043, "iReceiveLJCashTotal");
	gameplay::register_int_to_save(&uParam0->f_1044, "iReceiveLJCashTime");
	gameplay::register_int_to_save(&uParam0->f_1045, "LAST_ACC_PROP");
	gameplay::register_int_to_save(&uParam0->f_1046, "MULTI1_PROP_VAL");
	gameplay::_start_save_array(&uParam0->f_1047, 11, "PROP_ARY_VAL");
	iVar22 = 0;
	while (iVar22 < uParam0->f_1047) {
		StringCopy(&cVar1, "PROP_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_int_to_save(&uParam0->f_1047[iVar22], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::register_int_to_save(&uParam0->f_1058, "KR_PATCH_UPDATE");
	iVar22 = 0;
	gameplay::_start_save_array(&uParam0->f_1794, 727, "DLC_MODS");
	iVar22 = 0;
	while (iVar22 < uParam0->f_1794) {
		StringCopy(&cVar1, "DLC_MODS_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_int_to_save(&uParam0->f_1794[iVar22], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	iVar22 = 0;
	gameplay::_start_save_array(&uParam0->f_2521, 171, "DLC_SUPERMODS");
	iVar22 = 0;
	while (iVar22 < uParam0->f_2521) {
		StringCopy(&cVar1, "DLC_SMODS_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_int_to_save(&uParam0->f_2521[iVar22], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1059, 144, "OUTFIT_CompDraw");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "CompDraw", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::_start_save_array(&uParam0->f_1059[iVar22 /*13*/], 13, &cVar1);
		iVar23 = 0;
		while (iVar23 < 12) {
			StringCopy(&cVar1, "CompDraw", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			gameplay::register_int_to_save(&uParam0->f_1059[iVar22 /*13*/][iVar23], &cVar1);
			iVar23++;
		}
		gameplay::stop_save_array();
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1203, 144, "OUTFIT_CompTex");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "CompTex", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::_start_save_array(&uParam0->f_1203[iVar22 /*13*/], 13, &cVar1);
		iVar23 = 0;
		while (iVar23 < 12) {
			StringCopy(&cVar1, "CompTex", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			gameplay::register_int_to_save(&uParam0->f_1203[iVar22 /*13*/][iVar23], &cVar1);
			iVar23++;
		}
		gameplay::stop_save_array();
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1347, 111, "OUTFIT_PropID");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "PropID", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::_start_save_array(&uParam0->f_1347[iVar22 /*10*/], 10, &cVar1);
		iVar23 = 0;
		while (iVar23 < 9) {
			StringCopy(&cVar1, "PropID", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			gameplay::register_int_to_save(&uParam0->f_1347[iVar22 /*10*/][iVar23], &cVar1);
			iVar23++;
		}
		gameplay::stop_save_array();
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1458, 111, "OUTFIT_PropTex");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "PropTex", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::_start_save_array(&uParam0->f_1458[iVar22 /*10*/], 10, &cVar1);
		iVar23 = 0;
		while (iVar23 < 9) {
			StringCopy(&cVar1, "PropTex", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			gameplay::register_int_to_save(&uParam0->f_1458[iVar22 /*10*/][iVar23], &cVar1);
			iVar23++;
		}
		gameplay::stop_save_array();
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1569, 12, "OUTFIT_Stored");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "Stored", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_bool_to_save(&uParam0->f_1569[iVar22], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1581, 12, "OUTFIT_CrewTatA");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "CrewDecalA", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_bool_to_save(&uParam0->f_1581[iVar22], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1593, 12, "OUTFIT_CrewTatB");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "CrewDecalB", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_bool_to_save(&uParam0->f_1593[iVar22], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1605, 12, "OUTFIT_CrewTatC");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "CrewDecalC", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_bool_to_save(&uParam0->f_1605[iVar22], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1617, 12, "OUTFIT_CrewTatD");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "CrewDecalD", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_bool_to_save(&uParam0->f_1617[iVar22], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1629, 12, "OUTFIT_CrewTatE");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "CrewDecalE", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_bool_to_save(&uParam0->f_1629[iVar22], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1641, 12, "OUTFIT_CrewTatF");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "CrewDecalF", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_bool_to_save(&uParam0->f_1641[iVar22], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1742, 12, "OUTFIT_Shirt");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "ShirtDecal", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_int_to_save(&uParam0->f_1742[iVar22], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1653, 89, "OUTFIT_Name");
	iVar22 = 0;
	while (iVar22 < 11) {
		StringCopy(&cVar1, "Name", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::_0x8269816F6CFD40F8(&uParam0->f_1653[iVar22 /*8*/], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_1754, 40, "LAST_JobGamer");
	iVar22 = 0;
	while (iVar22 < 3) {
		StringCopy(&cVar1, "LastJobG64_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_1", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/], &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_2", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/].f_1, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_3", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/].f_2, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_4", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/].f_3, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_5", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/].f_4, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_6", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/].f_5, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_7", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/].f_6, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_8", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/].f_7, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_9", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/].f_8, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_10", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/].f_9, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_11", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/].f_10, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_12", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/].f_11, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_13", 16);
		gameplay::_0xA735353C77334EA0(&uParam0->f_1754[iVar22 /*13*/].f_12, &cVar24);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::register_bool_to_save(&uParam0->f_2692, "DO_CompletedObjectives");
	gameplay::register_bool_to_save(&uParam0->f_2693, "DO_LoggedInToday");
	gameplay::register_int_to_save(&uParam0->f_2694, "DO_xValue");
	gameplay::register_int_to_save(&uParam0->f_2695, "DO_LastHistoryLength");
	gameplay::register_int_to_save(&uParam0->f_2696, "DO_LastResetTime");
	gameplay::_start_save_array(&uParam0->f_2697, 10, "DO_Objectives");
	iVar22 = 0;
	while (iVar22 < 3) {
		StringCopy(&cVar1, "Objective", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_int_to_save(&uParam0->f_2697[iVar22 /*3*/], &cVar1);
		StringCopy(&cVar1, "Completed", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_bool_to_save(&uParam0->f_2697[iVar22 /*3*/].f_1, &cVar1);
		StringCopy(&cVar1, "Initial", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_int_to_save(&uParam0->f_2697[iVar22 /*3*/].f_2, &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_2707, 25, "DO_History");
	iVar22 = 0;
	while (iVar22 < 24) {
		StringCopy(&cVar1, "History", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		gameplay::register_int_to_save(&uParam0->f_2707[iVar22], &cVar1);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_2732, 49, "LAST_JobGamer_TL");
	iVar22 = 0;
	while (iVar22 < 3) {
		StringCopy(&cVar1, "LastJobTL_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		cVar28 = {cVar1};
		StringConCat(&cVar28, "_1", 16);
		gameplay::_0xFAA457EF263E8763(&uParam0->f_2732[iVar22 /*16*/], &cVar28);
		iVar22++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_2781, 11, "BGSAVEINT");
	iVar0 = 0;
	while (iVar0 < 10) {
		StringCopy(&cVar1, "BGSAVEINT", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_int_to_save(&uParam0->f_2781[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_2792, 2, "PROPLIB");
	iVar0 = 0;
	while (iVar0 < 1) {
		StringCopy(&cVar1, "PROPLIB", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_int_to_save(&uParam0->f_2792[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::stop_save_array();
}

// Position - 0x208A
void func_14(var *uParam0, int iParam1) {
	vector3 vVar0[24];

	StringCopy(&cVar0, "MP_SAVED_CARAPP", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_15(&uParam0->f_5522, &cVar0, iParam1);
}

// Position - 0x20AD
void func_15(var *uParam0, char *sParam1, int iParam2) {
	char cVar0[64];
	int iVar16;

	gameplay::_start_save_struct(uParam0, 2024, sParam1);
	gameplay::_start_save_array(uParam0, 1808, "CAR_APP_DATA");
	iVar16 = 0;
	while (iVar16 < 139) {
		StringCopy(&cVar0, "CARAPP_DATA_", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		func_17(&(*uParam0)[iVar16 /*13*/], &cVar0);
		iVar16++;
	}
	gameplay::stop_save_array();
	gameplay::stop_save_struct();
	gameplay::_start_save_array(&uParam0->f_1849, 140, "CAR_HIDDEN");
	iVar16 = 0;
	while (iVar16 < 139) {
		StringCopy(&cVar0, "CAR_HIDDEN", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		gameplay::register_bool_to_save(&uParam0->f_1849[iVar16], &cVar0);
		iVar16++;
	}
	gameplay::stop_save_array();
	func_16(&uParam0->f_1808, "CAR_APP_ORDER");
	StringCopy(&cVar0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	gameplay::register_bool_to_save(&uParam0->f_1989, &cVar0);
	StringCopy(&cVar0, "bCarAppPlateSet", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	gameplay::register_bool_to_save(&uParam0->f_1991, &cVar0);
	StringCopy(&cVar0, "bDeleteCarData", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	gameplay::register_bool_to_save(&uParam0->f_1990, &cVar0);
	StringCopy(&cVar0, "iCarAppPlateBack", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	gameplay::register_int_to_save(&uParam0->f_1996, &cVar0);
	StringCopy(&cVar0, "tlCarAppPlateText", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	gameplay::_0x6F7794F28C6B2535(&uParam0->f_1992, &cVar0);
	StringCopy(&cVar0, "iOrderCount", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	gameplay::register_int_to_save(&uParam0->f_1997, &cVar0);
	StringCopy(&cVar0, "iOrderVehicle", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	gameplay::register_int_to_save(&uParam0->f_1998, &cVar0);
	gameplay::_start_save_array(&uParam0->f_1999, 11, "SAVED_VEH_SLOT");
	iVar16 = 0;
	while (iVar16 < 10) {
		StringCopy(&cVar0, "VEH_SLOT", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		gameplay::register_int_to_save(&uParam0->f_1999[iVar16], &cVar0);
		iVar16++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_2010, 11, "SAVED_VEH_PRIO");
	iVar16 = 0;
	while (iVar16 < 10) {
		StringCopy(&cVar0, "VEH_PRIO", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		gameplay::register_int_to_save(&uParam0->f_2010[iVar16], &cVar0);
		iVar16++;
	}
	gameplay::stop_save_array();
	gameplay::register_int_to_save(&uParam0->f_2021, "LAST_USED");
	gameplay::register_int_to_save(&uParam0->f_2022, "NEW_SAVED");
	gameplay::register_bool_to_save(&uParam0->f_2023, "SETUP_INIT");
}

// Position - 0x22AE
void func_16(var *uParam0, char *sParam1) {
	gameplay::_start_save_struct(uParam0, 41, sParam1);
	gameplay::register_enum_to_save(uParam0, "Model");
	gameplay::register_int_to_save(&uParam0->f_1, "iColourID1");
	gameplay::register_int_to_save(&uParam0->f_2, "iColourID2");
	gameplay::register_int_to_save(&uParam0->f_3, "iColour1Group");
	gameplay::register_int_to_save(&uParam0->f_4, "iColour2Group");
	gameplay::register_int_to_save(&uParam0->f_5, "iWindowTint");
	gameplay::register_int_to_save(&uParam0->f_6, "iTyreSmokeR");
	gameplay::register_int_to_save(&uParam0->f_7, "iTyreSmokeG");
	gameplay::register_int_to_save(&uParam0->f_8, "iTyreSmokeB");
	gameplay::register_int_to_save(&uParam0->f_9, "iEngine");
	gameplay::register_int_to_save(&uParam0->f_10, "iBrakes");
	gameplay::register_int_to_save(&uParam0->f_11, "iWheels");
	gameplay::register_int_to_save(&uParam0->f_12, "iWheelType");
	gameplay::register_int_to_save(&uParam0->f_13, "iExhaust");
	gameplay::register_int_to_save(&uParam0->f_14, "iSuspension");
	gameplay::register_int_to_save(&uParam0->f_15, "iArmour");
	gameplay::register_int_to_save(&uParam0->f_16, "iHorn");
	gameplay::register_int_to_save(&uParam0->f_17, "iLights");
	gameplay::register_bool_to_save(&uParam0->f_18, "bBulletProofTyres");
	gameplay::register_int_to_save(&uParam0->f_19, "iTurbo");
	gameplay::register_int_to_save(&uParam0->f_20, "iTyreSmoke");
	gameplay::_0x6F7794F28C6B2535(&uParam0->f_21, "tlPlateText");
	gameplay::register_int_to_save(&uParam0->f_25, "iPlateBack");
	gameplay::register_int_to_save(&uParam0->f_26, "UID");
	gameplay::register_int_to_save(&uParam0->f_27, "Cost");
	gameplay::_0x6F7794F28C6B2535(&uParam0->f_28, "tlPlateText_pending");
	gameplay::register_int_to_save(&uParam0->f_32, "iPlateBack_pending");
	gameplay::register_bool_to_save(&uParam0->f_33, "bProcessOrder");
	gameplay::register_bool_to_save(&uParam0->f_36, "bOrderPending");
	gameplay::register_bool_to_save(&uParam0->f_35, "bOrderReceivedOnBoot");
	gameplay::register_bool_to_save(&uParam0->f_34, "bOrderForPlayerVehicle");
	gameplay::register_bool_to_save(&uParam0->f_37, "bCheckPlateProfanity");
	gameplay::register_bool_to_save(&uParam0->f_40, "bOrderPaidFor");
	gameplay::register_bool_to_save(&uParam0->f_38, "bSCProfanityFailed");
	gameplay::register_bool_to_save(&uParam0->f_39, "bOrderFailedFunds");
	gameplay::stop_save_struct();
}

// Position - 0x2466
void func_17(var *uParam0, char *sParam1) {
	int iVar0;
	char cVar1[16];

	gameplay::_start_save_struct(uParam0, 13, sParam1);
	gameplay::register_enum_to_save(uParam0, "Model");
	gameplay::register_int_to_save(&uParam0->f_1, "iColourID1");
	gameplay::register_int_to_save(&uParam0->f_2, "iColourID2");
	gameplay::register_int_to_save(&uParam0->f_9, "iModCountWheels");
	gameplay::_start_save_array(&uParam0->f_3, 6, "iHornHash");
	iVar0 = 0;
	while (iVar0 < 5) {
		StringCopy(&cVar1, "iHornHash", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_int_to_save(&uParam0->f_3[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::register_bool_to_save(&uParam0->f_10, "bSendDataToCloud");
	gameplay::register_bool_to_save(&uParam0->f_11, "bDeleteData");
	gameplay::register_bool_to_save(&uParam0->f_12, "bUpdateMods");
	gameplay::stop_save_struct();
}

// Position - 0x250D
void func_18(var *uParam0, int iParam1) {
	vector3 vVar0[24];

	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_19(&uParam0->f_5466, &cVar0);
}

// Position - 0x252E
void func_19(var *uParam0, char *sParam1) {
	int iVar0;
	char cVar1[16];

	gameplay::_start_save_struct(uParam0, 56, sParam1);
	gameplay::register_bool_to_save(uParam0, "TV_ON");
	gameplay::register_int_to_save(&uParam0->f_1, "TV_CHANNEL_ID");
	gameplay::_start_save_array(&uParam0->f_2, 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2) {
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_bool_to_save(&uParam0->f_2[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_5, 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2) {
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_int_to_save(&uParam0->f_5[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::register_bool_to_save(&uParam0->f_8, "GARAGE_TV_ON");
	gameplay::register_int_to_save(&uParam0->f_9, "GARAGE_TV_CHANNEL_ID");
	gameplay::register_bool_to_save(&uParam0->f_10, "GARAGE_RADIO_ON");
	gameplay::register_int_to_save(&uParam0->f_11, "GARAGE_RADIO_STATION_ID");
	gameplay::register_int_to_save(&uParam0->f_12, "NUMBERS_TIMES_SMOKED");
	gameplay::register_int_to_save(&uParam0->f_13, "NUMBER_TIMES_DRANK");
	gameplay::register_int_to_save(&uParam0->f_14, "NUMBER_TIMES_STRIPPERS");
	gameplay::register_int_to_save(&uParam0->f_15, "NUMBERS_TIMES_SMOKED_SECOND");
	gameplay::register_int_to_save(&uParam0->f_16, "NUMBER_TIMES_DRANK_SECOND");
	gameplay::register_int_to_save(&uParam0->f_17, "NUMBER_TIMES_STRIPPERS_SECOND");
	gameplay::register_int_to_save(&uParam0->f_18, "NUMBERS_TIMES_SMOKED3");
	gameplay::register_int_to_save(&uParam0->f_19, "NUMBER_TIMES_DRANK3");
	gameplay::register_int_to_save(&uParam0->f_20, "NUMBER_TIMES_STRIPPERS3");
	gameplay::register_int_to_save(&uParam0->f_21, "NUMBERS_TIMES_SMOKED4");
	gameplay::register_int_to_save(&uParam0->f_22, "NUMBER_TIMES_DRANK4");
	gameplay::register_int_to_save(&uParam0->f_23, "NUMBER_TIMES_STRIPPERS4");
	gameplay::register_int_to_save(&uParam0->f_24, "NUMBERS_TIMES_SMOKED5");
	gameplay::register_int_to_save(&uParam0->f_25, "NUMBER_TIMES_DRANK5");
	gameplay::register_int_to_save(&uParam0->f_26, "NUMBER_TIMES_STRIPPERS5");
	gameplay::register_int_to_save(&uParam0->f_27, "NUMBERS_TIMES_SMOKEDYacht");
	gameplay::register_int_to_save(&uParam0->f_28, "NUMBER_TIMES_DRANKYacht");
	gameplay::register_int_to_save(&uParam0->f_29, "NUMBER_TIMES_STRIPPERSYacht");
	gameplay::register_enum_to_save(&uParam0->f_30, "DATE_LAST_CLEANED_APARTMENT");
	gameplay::register_enum_to_save(&uParam0->f_31, "SHOWERS_TAKEN");
	gameplay::_start_save_array(&uParam0->f_32, 8, "PROP_DRINKS");
	StringCopy(&cVar1, "DRANK_", 16);
	iVar0 = 0;
	while (iVar0 < 3) {
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		gameplay::register_int_to_save(&uParam0->f_32[iVar0], &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4) {
		StringCopy(&cVar1, "DRANK_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_int_to_save(&uParam0->f_32[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_40, 8, "PROP_SMOKES");
	StringCopy(&cVar1, "SMOKED_", 16);
	iVar0 = 0;
	while (iVar0 < 3) {
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		gameplay::register_int_to_save(&uParam0->f_40[iVar0], &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4) {
		StringCopy(&cVar1, "SMOKED_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_int_to_save(&uParam0->f_40[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_48, 8, "PROP_STRIPPERS");
	StringCopy(&cVar1, "STRIPPERS_", 16);
	iVar0 = 0;
	while (iVar0 < 3) {
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		gameplay::register_int_to_save(&uParam0->f_48[iVar0], &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4) {
		StringCopy(&cVar1, "STRIPPERS_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_int_to_save(&uParam0->f_48[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::stop_save_array();
}

// Position - 0x2848
void func_20(var *uParam0, int iParam1) {
	vector3 vVar0[24];

	StringCopy(&cVar0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_21(&uParam0->f_5461, &cVar0);
}

// Position - 0x2869
void func_21(var *uParam0, char *sParam1) {
	int iVar0;
	char cVar1[16];

	gameplay::_start_save_struct(uParam0, 5, sParam1);
	gameplay::register_int_to_save(uParam0, "BAV_Timestamp");
	gameplay::_start_save_array(&uParam0->f_1, 4, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 3) {
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_int_to_save(&uParam0->f_1[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::stop_save_array();
}

// Position - 0x28C7
void func_22(var *uParam0, int iParam1) {
	vector3 vVar0;

	StringCopy(&vVar0, "MP_SAVED_VEHICLES", 24);
	StringIntConCat(&vVar0, iParam1, 24);
	func_23(uParam0, &vVar0);
}

// Position - 0x28E5
void func_23(var *uParam0, char *sParam1) {
	int iVar0;
	char cVar1[32];

	iVar0 = 0;
	gameplay::_start_save_array(uParam0, 5461, sParam1);
	iVar0 = 0;
	while (iVar0 < 39) {
		StringCopy(&cVar1, "MP_VEHICLE", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		func_24(&(*uParam0)[iVar0 /*140*/], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
}

// Position - 0x292C
void func_24(var *uParam0, char *sParam1) {
	gameplay::_start_save_struct(uParam0, 140, sParam1);
	func_25(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	gameplay::register_int_to_save(&uParam0->f_101, "VEHICLE_BS");
	gameplay::register_int_to_save(&uParam0->f_103, "PAID_PREMIUM");
	gameplay::_0xFAA457EF263E8763(&uParam0->f_104, "PAID_PLAYER");
	gameplay::_0xFAA457EF263E8763(&uParam0->f_120, "RADIO_STATION");
	gameplay::register_int_to_save(&uParam0->f_102, "IMPOUND_TIME");
	gameplay::register_int_to_save(&uParam0->f_136, "COLOUR_GROUP1");
	gameplay::register_int_to_save(&uParam0->f_137, "COLOUR_GROUP2");
	gameplay::register_int_to_save(&uParam0->f_138, "PRICE_PAID");
	gameplay::register_int_to_save(&uParam0->f_139, "OBTAIN_TIME");
	gameplay::stop_save_struct();
}

// Position - 0x29B8
void func_25(var *uParam0, char *sParam1) {
	func_27(uParam0, "VEHICLE_SETUP_STRUCT");
	gameplay::_start_save_struct(uParam0, 101, sParam1);
	gameplay::register_int_to_save(&uParam0->f_78, "iSpawnVehicleHorn");
	gameplay::register_float_to_save(&uParam0->f_79, "fEnveffScale");
	gameplay::register_int_to_save(&uParam0->f_96, "iColour5");
	gameplay::register_int_to_save(&uParam0->f_97, "iLivery2");
	gameplay::register_int_to_save(&uParam0->f_98, "iColour6");
	func_26(&uParam0->f_80, "GamerHandleOfCarOwner");
	gameplay::register_int_to_save(&uParam0->f_93, "OwnerStatus");
	gameplay::register_int_to_save(&uParam0->f_94, "iFlags");
	gameplay::register_int_to_save(&uParam0->f_95, "iPVSlot");
	gameplay::register_int_to_save(&uParam0->f_99, "iPlayerIndex");
	gameplay::register_int_to_save(&uParam0->f_100, "iIEPlayerVehicle");
	gameplay::stop_save_struct();
}

// Position - 0x2A5C
void func_26(var *uParam0, char *sParam1) {
	gameplay::_start_save_struct(uParam0, 13, sParam1);
	gameplay::_0xA735353C77334EA0(uParam0, "Data64_1");
	gameplay::_0xA735353C77334EA0(&uParam0->f_1, "Data64_2");
	gameplay::_0xA735353C77334EA0(&uParam0->f_2, "Data64_3");
	gameplay::_0xA735353C77334EA0(&uParam0->f_3, "Data64_4");
	gameplay::_0xA735353C77334EA0(&uParam0->f_4, "Data64_5");
	gameplay::_0xA735353C77334EA0(&uParam0->f_5, "Data64_6");
	gameplay::_0xA735353C77334EA0(&uParam0->f_6, "Data64_7");
	gameplay::_0xA735353C77334EA0(&uParam0->f_7, "Data64_8");
	gameplay::_0xA735353C77334EA0(&uParam0->f_8, "Data64_9");
	gameplay::_0xA735353C77334EA0(&uParam0->f_9, "Data64_10");
	gameplay::_0xA735353C77334EA0(&uParam0->f_10, "Data64_11");
	gameplay::_0xA735353C77334EA0(&uParam0->f_11, "Data64_12");
	gameplay::_0xA735353C77334EA0(&uParam0->f_12, "Data64_13");
	gameplay::stop_save_struct();
}

// Position - 0x2B0C
void func_27(var *uParam0, char *sParam1) {
	int iVar0;
	char cVar1[16];

	gameplay::_start_save_struct(uParam0, 78, sParam1);
	gameplay::register_int_to_save(uParam0, "iPlateIndex");
	gameplay::_0x6F7794F28C6B2535(&uParam0->f_1, "tlPlateText");
	gameplay::register_int_to_save(&uParam0->f_5, "iColour1");
	gameplay::register_int_to_save(&uParam0->f_6, "iColour2");
	gameplay::register_int_to_save(&uParam0->f_7, "iColourExtra1");
	gameplay::register_int_to_save(&uParam0->f_8, "iColourExtra2");
	gameplay::register_int_to_save(&uParam0->f_62, "iTyreR");
	gameplay::register_int_to_save(&uParam0->f_63, "iTyreG");
	gameplay::register_int_to_save(&uParam0->f_64, "iTyreB");
	gameplay::register_int_to_save(&uParam0->f_65, "iWindowTintColour");
	gameplay::register_int_to_save(&uParam0->f_67, "iLivery");
	gameplay::register_int_to_save(&uParam0->f_69, "iWheelType");
	gameplay::register_enum_to_save(&uParam0->f_68, "eRoofState");
	gameplay::register_int_to_save(&uParam0->f_77, "iFlags");
	gameplay::register_int_to_save(&uParam0->f_71, "iCustomR");
	gameplay::register_int_to_save(&uParam0->f_72, "iCustomG");
	gameplay::register_int_to_save(&uParam0->f_73, "iCustomB");
	gameplay::register_int_to_save(&uParam0->f_74, "iNeonR");
	gameplay::register_int_to_save(&uParam0->f_75, "iNeonG");
	gameplay::register_int_to_save(&uParam0->f_76, "iNeonB");
	gameplay::register_enum_to_save(&uParam0->f_66, "eModel");
	gameplay::_start_save_array(&uParam0->f_9, 50, "MODS_ID");
	iVar0 = 0;
	while (iVar0 < 49) {
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_int_to_save(&uParam0->f_9[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::_start_save_array(&uParam0->f_59, 3, "MODS_VAR");
	iVar0 = 0;
	while (iVar0 < 2) {
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		gameplay::register_int_to_save(&uParam0->f_59[iVar0], &cVar1);
		iVar0++;
	}
	gameplay::stop_save_array();
	gameplay::register_enum_to_save(&uParam0->f_70, "eLockState");
	gameplay::stop_save_struct();
}

// Position - 0x2CA8
void func_28(float fParam0) {
	func_37();
	if (fParam0 == 1f) {
		func_35();
	}
	if (fParam0 <= 1.1f) {
		func_34();
	}
	if (fParam0 < 1.5f) {
		func_32();
	}
	if (fParam0 <= 1.5f) {
		func_31();
	}
	if (fParam0 == 1.5f) {
		func_30();
	}
	if (fParam0 < 1.7f) {
		func_29();
	}
}

// Position - 0x2D0A
void func_29() { Global_101700.f_25393.f_4 = 0; }

// Position - 0x2D1C
void func_30() {
	int iVar0;
	int iVar1;
	int iVar2;

	stats::stat_get_int(joaat("content_hanger_veh"), &iVar0, -1);
	stats::stat_get_int(joaat("content_marina_veh"), &iVar1, -1);
	stats::stat_get_int(joaat("content_heli_veh"), &iVar2, -1);
	if (iVar0 >= 0 && iVar1 >= 0 && iVar2 >= 0) {
		Global_101700.f_668.f_1044 -= iVar0;
	}
}

// Position - 0x2D7B
void func_31() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = 171;
		while (iVar1 <= 198) {
			if (gameplay::is_bit_set(Global_101700.f_24141[iVar1], iVar0)) {
				gameplay::clear_bit(&Global_101700.f_24141[iVar1], iVar0);
				iVar2 = iVar1 + 198 - 171 + 1;
				gameplay::set_bit(&Global_101700.f_24141[iVar2], iVar0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

// Position - 0x2DEA
void func_32() {
	if (func_33(54) || func_33(55) || func_33(56) || func_33(57) || func_33(58)) {
		gameplay::set_bit(&Global_101700.f_8975.f_25, 6);
	}
}

// Position - 0x2E39
int func_33(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x2E65
void func_34() {}

// Position - 0x2E6D
void func_35() {
	if (Global_101700.f_8044.f_99.f_205[7] != 0) {
		if (!Global_101700.f_8044.f_330[86 /*6*/]) {
			Global_101700.f_8044.f_330[86 /*6*/] = 1;
		}
	}
	if (Global_101700.f_8044.f_99.f_205[8] != 0) {
		if (!Global_101700.f_8044.f_330[71 /*6*/]) {
			Global_101700.f_8044.f_330[71 /*6*/] = 1;
		}
	}
	if (Global_101700.f_8044.f_99.f_205[9] != 0) {
		if (!Global_101700.f_8044.f_330[91 /*6*/]) {
			Global_101700.f_8044.f_330[91 /*6*/] = 1;
		}
	}
	if (Global_101700.f_8044.f_99.f_205[10] != 0) {
		if (!Global_101700.f_8044.f_330[67 /*6*/]) {
			Global_101700.f_8044.f_330[67 /*6*/] = 1;
		}
	}
	if (Global_101700.f_8044.f_99.f_205[11] != 0) {
		if (!Global_101700.f_8044.f_330[77 /*6*/]) {
			Global_101700.f_8044.f_330[77 /*6*/] = 1;
		}
	}
	func_36(195, 198);
	func_36(195, 197);
	func_36(195, 196);
}

// Position - 0x2F8D
void func_36(int iParam0, int iParam1) {
	struct<4> Var0;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	Var0 = {Global_101700.f_9153[iParam0 /*12*/]};
	uVar4 = Global_101700.f_9153[iParam0 /*12*/].f_4;
	uVar5 = Global_101700.f_9153[iParam0 /*12*/].f_5;
	uVar6 = Global_101700.f_9153[iParam0 /*12*/].f_6;
	uVar7 = Global_101700.f_9153[iParam0 /*12*/].f_7;
	uVar8 = Global_101700.f_9153[iParam0 /*12*/].f_8;
	uVar9 = Global_101700.f_9153[iParam0 /*12*/].f_9;
	uVar10 = Global_101700.f_9153[iParam0 /*12*/].f_10;
	uVar11 = Global_101700.f_9153[iParam0 /*12*/].f_11;
	Global_101700.f_9153[iParam0 /*12*/] = {Global_101700.f_9153[iParam1 /*12*/]};
	Global_101700.f_9153[iParam0 /*12*/].f_4 = Global_101700.f_9153[iParam1 /*12*/].f_4;
	Global_101700.f_9153[iParam0 /*12*/].f_5 = Global_101700.f_9153[iParam1 /*12*/].f_5;
	Global_101700.f_9153[iParam0 /*12*/].f_6 = Global_101700.f_9153[iParam1 /*12*/].f_6;
	Global_101700.f_9153[iParam0 /*12*/].f_7 = Global_101700.f_9153[iParam1 /*12*/].f_7;
	Global_101700.f_9153[iParam0 /*12*/].f_8 = Global_101700.f_9153[iParam1 /*12*/].f_8;
	Global_101700.f_9153[iParam0 /*12*/].f_9 = Global_101700.f_9153[iParam1 /*12*/].f_9;
	Global_101700.f_9153[iParam0 /*12*/].f_10 = Global_101700.f_9153[iParam1 /*12*/].f_10;
	Global_101700.f_9153[iParam0 /*12*/].f_11 = Global_101700.f_9153[iParam1 /*12*/].f_11;
	Global_101700.f_9153[iParam1 /*12*/] = {Var0};
	Global_101700.f_9153[iParam1 /*12*/].f_4 = uVar4;
	Global_101700.f_9153[iParam1 /*12*/].f_5 = uVar5;
	Global_101700.f_9153[iParam1 /*12*/].f_6 = uVar6;
	Global_101700.f_9153[iParam1 /*12*/].f_7 = uVar7;
	Global_101700.f_9153[iParam1 /*12*/].f_8 = uVar8;
	Global_101700.f_9153[iParam1 /*12*/].f_9 = uVar9;
	Global_101700.f_9153[iParam1 /*12*/].f_10 = uVar10;
	Global_101700.f_9153[iParam1 /*12*/].f_11 = uVar11;
}

// Position - 0x3191
void func_37() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16) {
		if (!func_38(Global_101700.f_23863[iVar0 /*4*/])) {
			if (Global_101700.f_23863[iVar0 /*4*/] != 145) {
				Global_101700.f_23863[iVar0 /*4*/] = 145;
			}
		}
		iVar0++;
	}
}

// Position - 0x31DC
bool func_38(int iParam0) { return iParam0 < 3; }

// Position - 0x31E8
void func_39() {
	unk2::_0x7E2BD3EF6C205F09("No_Filter", 1);
	unk2::_0x7E2BD3EF6C205F09("phone_cam1", 1);
	unk2::_0x7E2BD3EF6C205F09("phone_cam2", 1);
	unk2::_0x7E2BD3EF6C205F09("phone_cam3", 1);
	unk2::_0x7E2BD3EF6C205F09("phone_cam4", 1);
	unk2::_0x7E2BD3EF6C205F09("phone_cam5", 1);
	unk2::_0x7E2BD3EF6C205F09("phone_cam6", 1);
	unk2::_0x7E2BD3EF6C205F09("phone_cam7", 1);
	unk2::_0x7E2BD3EF6C205F09("phone_cam9", 1);
	unk2::_0x7E2BD3EF6C205F09("phone_cam12", 0);
}

// Position - 0x324A
void func_40(int iParam0, int iParam1) {
	script::request_script_with_name_hash(iParam0);
	while (!script::has_script_with_name_hash_loaded(iParam0)) {
		system::wait(0);
		script::request_script_with_name_hash(iParam0);
	}
	system::start_new_script_with_name_hash(iParam0, iParam1);
}

// Position - 0x3279
int func_41() {
	if (unk::_0xEF7D17BC6C85264C() || unk::_0xF2CA003F167E21D2() || network::_0x88B588B41FF7868E() ||
		network::_0x67FC09BC554A75E5()) {
		return 1;
	}
	return 0;
}
