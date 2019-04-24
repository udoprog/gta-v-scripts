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
int iLocal_36 = 0;
int iLocal_37 = 0;
struct<4> Local_38[10];
bool bLocal_79 = 0;
int iLocal_80 = 0;
int iLocal_81 = 0;
struct<27> Local_82 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
int iLocal_109 = 0;
var uLocal_110 = 0;
struct<11> Local_111[2];
struct<25> Local_134[21];
float fLocal_660 = 0f;
int iLocal_661 = 0;
bool bLocal_662 = 0;
bool bLocal_663 = 0;
bool bLocal_664 = 0;
int iLocal_665 = 0;
int iLocal_666 = 0;
vector3 vLocal_667 = {0f, 0f, 0f};
int iLocal_670 = 0;
int *iLocal_671 = NULL;
var uLocal_672 = 0;
var uLocal_673 = -1;
var uLocal_674 = 0;
var uLocal_675 = 0;
var uLocal_676 = 0;
var uLocal_677 = 0;
var uLocal_678 = 0;
var uLocal_679 = 0;
var uLocal_680 = 1000;
var uLocal_681 = 1000;
var uLocal_682 = 0;
int iLocal_683 = 0;
int iLocal_684 = 0;
int iLocal_685 = 0;
int iLocal_686 = 0;
int *iLocal_687 = NULL;
struct<8> Local_688[3];
var *uLocal_713 = NULL;
var uLocal_714 = 0;
var uLocal_715 = 0;
var uLocal_716 = 0;
var uLocal_717 = 0;
var uLocal_718 = 0;
var uLocal_719 = 0;
var uLocal_720 = 0;
var uLocal_721 = 0;
var uLocal_722 = 0;
var uLocal_723 = 0;
var uLocal_724 = 0;
var uLocal_725 = 0;
var uLocal_726 = 0;
var uLocal_727 = 0;
var uLocal_728 = 0;
var uLocal_729 = 0;
var uLocal_730 = 0;
var uLocal_731 = 0;
var uLocal_732 = 0;
var uLocal_733 = 0;
var uLocal_734 = 0;
var uLocal_735 = 0;
var uLocal_736 = 0;
var uLocal_737 = 0;
var uLocal_738 = 0;
var uLocal_739 = 0;
var uLocal_740 = 0;
var uLocal_741 = 0;
var uLocal_742 = 0;
var uLocal_743 = 0;
var uLocal_744 = 0;
var uLocal_745 = 0;
var uLocal_746 = 0;
var uLocal_747 = 0;
var uLocal_748 = 0;
var uLocal_749 = 0;
var uLocal_750 = 0;
var uLocal_751 = 0;
var uLocal_752 = 0;
var uLocal_753 = 0;
var uLocal_754 = 0;
var uLocal_755 = 0;
var uLocal_756 = 0;
var uLocal_757 = 0;
var uLocal_758 = 0;
var uLocal_759 = 0;
var uLocal_760 = 0;
var uLocal_761 = 0;
var uLocal_762 = 0;
var uLocal_763 = 0;
var uLocal_764 = 0;
var *uLocal_765 = NULL;
var uLocal_766 = 0;
var uLocal_767 = 0;
var uLocal_768 = 0;
var uLocal_769 = 0;
var uLocal_770 = 0;
var uLocal_771 = 0;
var uLocal_772 = 0;
var uLocal_773 = 0;
var uLocal_774 = 0;
var uLocal_775 = 0;
var uLocal_776 = 0;
var uLocal_777 = 0;
var uLocal_778 = 0;
var uLocal_779 = 0;
var uLocal_780 = 0;
var uLocal_781 = 0;
var uLocal_782 = 0;
var uLocal_783 = 0;
var uLocal_784 = 0;
var uLocal_785 = 0;
var uLocal_786 = 0;
var uLocal_787 = 0;
var uLocal_788 = 0;
var uLocal_789 = 0;
var uLocal_790 = 0;
var uLocal_791 = 0;
var uLocal_792 = 0;
var uLocal_793 = 0;
var uLocal_794 = 0;
var uLocal_795 = 0;
var uLocal_796 = 0;
var uLocal_797 = 0;
var uLocal_798 = 0;
var uLocal_799 = 0;
var uLocal_800 = 0;
var uLocal_801 = 0;
var uLocal_802 = 0;
var uLocal_803 = 0;
var uLocal_804 = 0;
var uLocal_805 = 0;
var uLocal_806 = 0;
var uLocal_807 = 0;
var uLocal_808 = 0;
var uLocal_809 = 0;
var uLocal_810 = 0;
var uLocal_811 = 0;
var uLocal_812 = 0;
var uLocal_813 = 0;
var uLocal_814 = 0;
var uLocal_815 = 0;
var uLocal_816 = 0;
int iLocal_817 = 0;
char *sLocal_818 = NULL;
char *sLocal_819 = NULL;
int *iLocal_820 = NULL;
int *iLocal_821 = NULL;
int *iLocal_822 = NULL;
int iLocal_823 = 0;
vector3 vLocal_824 = {0f, 0f, 0f};
vector3 vLocal_827 = {0f, 0f, 0f};
int iLocal_830 = 0;
int iLocal_831 = 0;
int iLocal_832 = 0;
bool bLocal_833 = 0;
int *iLocal_834 = NULL;
int iLocal_835 = 0;
int *iLocal_836 = NULL;
int iLocal_837 = 0;
int *iLocal_838 = NULL;
int *iLocal_839 = NULL;
struct<14> Local_840 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
struct<14> Local_854 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
struct<6> Local_868 = {
	0, 0, 0, 0, 0, 0
};
int iLocal_874 = 0;
int iLocal_875 = 0;
int iLocal_876 = 0;
int iLocal_877 = 0;
char[] cLocal_878[8] = 0;
var *uLocal_879 = NULL;
var uLocal_880 = 0;
var uLocal_881 = 0;
var uLocal_882 = 0;
var uLocal_883 = 0;
var uLocal_884 = 0;
var uLocal_885 = 0;
var uLocal_886 = 0;
var uLocal_887 = 0;
var uLocal_888 = 0;
var uLocal_889 = 0;
var uLocal_890 = 0;
var uLocal_891 = 0;
var uLocal_892 = 0;
var uLocal_893 = 0;
var uLocal_894 = 0;
var uLocal_895 = 0;
var uLocal_896 = 0;
var uLocal_897 = 0;
var uLocal_898 = 0;
var uLocal_899 = 0;
var uLocal_900 = 0;
var uLocal_901 = 0;
var uLocal_902 = 0;
var uLocal_903 = 0;
var uLocal_904 = 0;
var uLocal_905 = 0;
var uLocal_906 = 0;
var uLocal_907 = 0;
var uLocal_908 = 0;
var uLocal_909 = 0;
var uLocal_910 = 0;
var uLocal_911 = 0;
var uLocal_912 = 0;
var uLocal_913 = 0;
var uLocal_914 = 0;
var uLocal_915 = 0;
var uLocal_916 = 0;
var uLocal_917 = 0;
var uLocal_918 = 0;
var uLocal_919 = 0;
var uLocal_920 = 0;
var uLocal_921 = 0;
var uLocal_922 = 0;
var uLocal_923 = 0;
var uLocal_924 = 0;
var uLocal_925 = 0;
var uLocal_926 = 0;
var uLocal_927 = 0;
var uLocal_928 = 0;
var uLocal_929 = 0;
var uLocal_930 = 0;
var uLocal_931 = 0;
var uLocal_932 = 0;
var uLocal_933 = 0;
var uLocal_934 = 0;
var uLocal_935 = 0;
var uLocal_936 = 0;
var uLocal_937 = 0;
var uLocal_938 = 0;
var uLocal_939 = 0;
var uLocal_940 = 0;
var uLocal_941 = 0;
var uLocal_942 = 0;
var uLocal_943 = 0;
var uLocal_944 = 0;
var uLocal_945 = 0;
var uLocal_946 = 0;
var uLocal_947 = 0;
var uLocal_948 = 0;
var uLocal_949 = 0;
var uLocal_950 = 0;
var uLocal_951 = 0;
var uLocal_952 = 0;
var uLocal_953 = 0;
var uLocal_954 = 0;
var uLocal_955 = 0;
var uLocal_956 = 0;
var uLocal_957 = 0;
var uLocal_958 = 0;
var uLocal_959 = 0;
var uLocal_960 = 0;
var uLocal_961 = 0;
var uLocal_962 = 0;
var uLocal_963 = 0;
var uLocal_964 = 0;
var uLocal_965 = 0;
var uLocal_966 = 0;
var uLocal_967 = 0;
var uLocal_968 = 0;
var uLocal_969 = 0;
var uLocal_970 = 0;
var uLocal_971 = 0;
var uLocal_972 = 0;
var uLocal_973 = 0;
var uLocal_974 = 0;
var uLocal_975 = 0;
var uLocal_976 = 0;
var uLocal_977 = 0;
var uLocal_978 = 0;
var uLocal_979 = 0;
var uLocal_980 = 0;
var uLocal_981 = 0;
var uLocal_982 = 0;
var uLocal_983 = 0;
var uLocal_984 = 0;
var uLocal_985 = 0;
var uLocal_986 = 0;
var uLocal_987 = 0;
var uLocal_988 = 0;
var uLocal_989 = 0;
var uLocal_990 = 0;
var uLocal_991 = 0;
var uLocal_992 = 0;
var uLocal_993 = 0;
var uLocal_994 = 0;
var uLocal_995 = 0;
var uLocal_996 = 0;
var uLocal_997 = 0;
var uLocal_998 = 0;
var uLocal_999 = 0;
var uLocal_1000 = 0;
var uLocal_1001 = 0;
var uLocal_1002 = 0;
var uLocal_1003 = 0;
var uLocal_1004 = 0;
var uLocal_1005 = 0;
var uLocal_1006 = 0;
var uLocal_1007 = 0;
var uLocal_1008 = 0;
var uLocal_1009 = 0;
var uLocal_1010 = 0;
var uLocal_1011 = 0;
var uLocal_1012 = 0;
var uLocal_1013 = 0;
var uLocal_1014 = 0;
var uLocal_1015 = 0;
var uLocal_1016 = 0;
var uLocal_1017 = 0;
var uLocal_1018 = 0;
var uLocal_1019 = 0;
var uLocal_1020 = 0;
var uLocal_1021 = 0;
var uLocal_1022 = 0;
var uLocal_1023 = 0;
var uLocal_1024 = 0;
var uLocal_1025 = 0;
var uLocal_1026 = 0;
var uLocal_1027 = 0;
var uLocal_1028 = 0;
var uLocal_1029 = 0;
var uLocal_1030 = 0;
var uLocal_1031 = 0;
var uLocal_1032 = 0;
var uLocal_1033 = 0;
var uLocal_1034 = 0;
var uLocal_1035 = 0;
var uLocal_1036 = 0;
var uLocal_1037 = 0;
var uLocal_1038 = 0;
var uLocal_1039 = 0;
var uLocal_1040 = 0;
var uLocal_1041 = 0;
var uLocal_1042 = 0;
var uLocal_1043 = 0;
char[] cLocal_1044[8] = 0;
var uLocal_1045 = 0;
var uLocal_1046 = 0;
var uLocal_1047 = 0;
int iLocal_1048[3] = {0, 0, 0};
int iLocal_1052 = 0;
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_81 = 21;
	fLocal_660 = -1f;
	vLocal_667 = {0f, 0f, 0f};
	iLocal_670 = -1;
	sLocal_819 = "FBIPRA";
	vLocal_824 = {0f, 0f, 0f};
	vLocal_827 = {1381.472f, -2072.245f, 50.9981f};
	cLocal_878 = "FIBP1AU";
	iLocal_1052 = -1;
	gameplay::set_mission_flag(1);
	if (player::has_force_cleanup_occurred(19)) {
		sLocal_818 = 0;
		func_371();
		func_359();
	}
	func_342();
	if (func_341()) {
		func_340(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_326();
	while (true) {
		unk1::_0x208784099002BC30("M_TrT", 0);
		if (func_325(player::player_ped_id())) {
			func_321();
			func_317();
			player::set_all_random_peds_flee_this_frame(player::player_id());
			vehicle::set_vehicle_density_multiplier_this_frame(0.8f);
			switch (iLocal_683) {
			case 0: func_257(); break;

			case 1: func_233(); break;

			case 2: func_215(); break;

			case 3: func_102(); break;

			case 4: func_38(); break;

			case 5: func_1(); break;
			}
			if (iLocal_683 != 5) {
				if (iLocal_683 >= 0 && !iLocal_28) {
				}
			}
		}
		system::wait(0);
	}
}

// Position - 0x189
void func_1() {
	int iVar0;

	switch (iLocal_684) {
	case 0:
		ui::clear_prints();
		ui::clear_help(1);
		func_37();
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (func_36(iVar0) && entity::get_entity_model(iVar0) == joaat("towtruck")) {
				func_35(iVar0, 2);
			}
		}
		if (!gameplay::is_string_null_or_empty(sLocal_818)) {
			func_33(sLocal_818);
		}
		else {
			func_18(0);
		}
		iLocal_684 = 1;
		break;

	case 1:
		if (func_17()) {
			if (func_16()) {
				func_11();
			}
			func_2();
			gameplay::clear_area(entity::get_entity_coords(player::player_ped_id(), 1), 30f, 1, 0, 0, 0);
			func_359();
		}
		break;
	}
}

// Position - 0x23E
void func_2() {
	func_9(&Local_868);
	func_9(&iLocal_875);
	func_9(&iLocal_874);
	func_8(&Local_840);
	func_8(&Local_854);
	func_9(&iLocal_876);
	func_3();
}

// Position - 0x274
void func_3() {
	func_7(&Local_111[0 /*11*/].f_4);
	func_7(&Local_111[1 /*11*/].f_4);
	func_6(&iLocal_109);
	func_5(&Local_111[0 /*11*/], 1, 0, 1);
	func_5(&Local_111[1 /*11*/], 1, 0, 1);
	func_4(&Local_134[iLocal_661 /*25*/].f_17, 0);
	ped::remove_relationship_group(iLocal_80);
	streaming::remove_anim_dict("missfbi4prepp1");
	streaming::remove_anim_set("missfbi4prepp1_garbageman");
}

// Position - 0x2D2
void func_4(int *iParam0, int iParam1) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		if (!iParam1) {
			entity::set_object_as_no_longer_needed(iParam0);
		}
		else {
			object::_mark_object_for_deletion(*iParam0);
		}
	}
}

// Position - 0x30D
void func_5(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!ped::is_ped_injured(*iParam0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
			if (iParam3 == 0) {
				ai::clear_ped_secondary_task(*iParam0);
			}
			ped::set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1) {
				ped::set_blocking_of_non_temporary_events(*iParam0, 0);
			}
		}
		entity::set_ped_as_no_longer_needed(iParam0);
	}
}

// Position - 0x35C
void func_6(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0x394
void func_7(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x3B4
void func_8(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_dead(*iParam0, 0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
		}
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		ped::delete_ped(iParam0);
	}
}

// Position - 0x3F4
void func_9(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		if (func_36(*iParam0)) {
			if (entity::is_entity_a_mission_entity(*iParam0) &&
				entity::does_entity_belong_to_this_script(*iParam0, 1)) {
				if (func_10(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
						entity::set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				vehicle::delete_vehicle(iParam0);
			}
		}
		else {
			if (func_10(player::player_ped_id())) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
					entity::set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			vehicle::delete_vehicle(iParam0);
		}
	}
}

// Position - 0x490
bool func_10(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x4B1
void func_11() {
	func_14(918.8851f, -269.789f, 67.2145f, 325.9081f);
	func_12(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

// Position - 0x4E9
void func_12(vector3 vParam0, float fParam3) { func_13(&Global_96040.f_2311, vParam0, fParam3); }

// Position - 0x502
void func_13(var *uParam0, vector3 vParam1, var uParam4) {
	*uParam0 = {vParam1};
	uParam0->f_6 = uParam4;
}

// Position - 0x518
void func_14(vector3 vParam0, float fParam3) {
	if (func_15(Global_69942, 0f, 0f, 0f, 0)) {
		Global_69942 = {vParam0};
		Global_69945 = fParam3;
	}
}

// Position - 0x544
bool func_15(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x58B
bool func_16() {
	if (Global_91491 == 7) {
		return true;
	}
	return false;
}

// Position - 0x5A0
bool func_17() {
	if (Global_3) {
		return true;
	}
	if (Global_91491 == 7 || Global_91491 == 8) {
		return true;
	}
	return false;
}

// Position - 0x5CD
void func_18(int iParam0) {
	int iVar0;

	if (Global_101700.f_8044 || func_32(0)) {
		iVar0 = func_31();
		if (!func_19(iVar0)) {
			return;
		}
		gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 5);
		Global_91527 = iParam0;
	}
}

// Position - 0x612
int func_19(int iParam0) {
	int iVar0;
	int iVar1;

	func_24();
	if (player::is_player_playing(player::player_id())) {
		player::start_firing_amnesty(5000);
	}
	iVar0 = Global_82576[iParam0 /*5*/];
	iVar1 = Global_69971.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	player::_0xC9A763D8FE87436A(player::player_id());
	player::special_ability_deactivate(player::player_id());
	func_20(&Global_101700.f_2095.f_539, iVar1);
	if (Global_85999 == Global_91528) {
		Global_101700.f_8044.f_330[iVar1 /*6*/].f_1++;
	}
	if (!gameplay::is_bit_set(Global_82612[iVar1 /*34*/].f_15, 1)) {
		if (!player::is_player_playing(player::player_id())) {
			gameplay::set_fade_in_after_death_arrest(0);
		}
	}
	Global_101700.f_8044.f_330[iVar1 /*6*/].f_2++;
	Global_85999 = Global_91528;
	if (iParam0 == -1) {
		if (Global_101700.f_8044) {
		}
		return 0;
	}
	if (gameplay::is_bit_set(Global_82576[iParam0 /*5*/].f_1, 4)) {
		return 0;
	}
	if (gameplay::is_bit_set(Global_82576[iParam0 /*5*/].f_1, 5)) {
		return 0;
	}
	return 1;
}

// Position - 0x729
void func_20(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float *fVar5;

	if (iParam1 == 94) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = Global_101700.f_17492[iVar0];
		if (iVar1 == 8 || iVar1 == 9 || iVar1 == 10 || iVar1 == 11 || iVar1 == 34 || iVar1 == 72 || iVar1 == 73)
			&&!gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[0], 9) {}
		else {
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_22(Global_101700.f_17492[iVar0], &vVar2, &fVar5)) {
				Global_101700.f_17492[iVar0] = 318;
				func_21(&uParam0->f_1524[iVar0]);
				uParam0->f_1528[iVar0 /*3*/] = {0f, 0f, 0f};
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = {0f, 0f, 0f};
				uParam0->f_1556[iVar0] = 0;
				Global_89214[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_9 = 0f;
				Global_89214[iVar0 /*29*/].f_12 = 0f;
				Global_89214[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_10 = 0f;
				Global_89214[iVar0 /*29*/].f_13 = 0f;
				Global_89214[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_11 = 0f;
				Global_89214[iVar0 /*29*/].f_14 = 0f;
				Global_89214[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_26 = 0f;
				Global_89214[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_27 = 0f;
				Global_89214[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

// Position - 0x8F2
void func_21(int *iParam0) { *iParam0 = -15; }

// Position - 0x900
int func_22(int iParam0, var *uParam1, float *fParam2) {
	switch (iParam0) {
	case 11:
		*uParam1 = {115.1569f, -1286.684f, 28.2613f};
		*fParam2 = 111f;
		return 1;

	case 8:
		*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
		*fParam2 = 194.1887f;
		return 1;

	case 9: return func_22(8, uParam1, fParam2);

	case 10: return func_22(8, uParam1, fParam2);

	case 13:
		*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
		*fParam2 = 201.6328f;
		return 1;

	case 14:
		*uParam1 = {1432.34f, -1887.383f, 70.5768f};
		*fParam2 = 350.0509f;
		return 1;

	case 15:
		*uParam1 = {1666.204f, 1967.25f, 143.3213f};
		*fParam2 = 0.7896f;
		return 1;

	case 12:
		*uParam1 = {-1440.22f, -127.02f, 50f};
		*fParam2 = 42f;
		return 1;

	case 16:
		*uParam1 = {135.055f, -1759.64f, 27.8957f};
		*fParam2 = -129f;
		return 1;

	case 17:
		*uParam1 = {687.6992f, -1744.03f, 28.3624f};
		*fParam2 = 267.1409f;
		return 1;

	case 18:
		*uParam1 = {56.5117f, -744.6122f, 43.1356f};
		*fParam2 = 340.0526f;
		return 1;

	case 19:
		*uParam1 = {506.485f, -1884.967f, 24.764f};
		*fParam2 = 22.9566f;
		return 1;

	case 20:
		*uParam1 = {1555.958f, 953.6136f, 77.2063f};
		*fParam2 = 152.8118f;
		return 1;

	case 21:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 22:
		*uParam1 = {220.72f, -64.4177f, 68.2922f};
		*fParam2 = 250.4535f - 360f;
		return 1;

	case 74:
		*uParam1 = {2048.07f, 3840.84f, 34.2238f};
		*fParam2 = 119.603f;
		return 1;

	case 23:
		*uParam1 = {-464.22f, -1592.98f, 38.73f};
		*fParam2 = 168f;
		return 1;

	case 24:
		*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
		*fParam2 = 51.7279f;
		return 1;

	case 67:
		*uParam1 = {-9f, 508.1f, 173.6278f};
		*fParam2 = 151.2504f;
		return 1;

	case 25:
		*uParam1 = {72.2278f, -1464.68f, 28.2915f};
		*fParam2 = 156.8827f;
		return 1;

	case 27:
		*uParam1 = {763f, -906f, 24.2312f};
		*fParam2 = 7.2736f;
		return 1;

	case 26:
		*uParam1 = {257.9167f, -1120.786f, 28.3684f};
		*fParam2 = 97.2736f;
		return 1;

	case 28:
		*uParam1 = {422.5858f, -978.6332f, 69.7073f};
		*fParam2 = 4f;
		return 1;

	case 29:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 30:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 31:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 32:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 33:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 34:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 35:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 36:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 37:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 58:
		*uParam1 = {294.8521f, 882.9366f, 197.8527f};
		*fParam2 = 162.693f;
		return 1;

	case 59:
		*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
		*fParam2 = 128.9946f;
		return 1;

	case 60:
		*uParam1 = {1495.595f, -1848.821f, 70.2075f};
		*fParam2 = 32.2721f;
		return 1;

	case 38:
		*uParam1 = {2897.554f, 4032.241f, 50.1419f};
		*fParam2 = 192.8091f;
		return 1;

	case 39:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return 1;

	case 40:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return 1;

	case 41:
		*uParam1 = {1397f, 3725.8f, 33.0673f};
		*fParam2 = -3.7534f;
		return 1;

	case 42:
		*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
		*fParam2 = 90f;
		return 1;

	case 43:
		*uParam1 = {709.0244f, -2916.479f, 5.0589f};
		*fParam2 = 355.326f;
		return 1;

	case 44:
		*uParam1 = {643.5248f, -2917.325f, 5.1337f};
		*fParam2 = 334.1068f;
		return 1;

	case 45:
		*uParam1 = {595.2742f, -2819.183f, 5.0559f};
		*fParam2 = 46.8853f;
		return 1;

	case 46:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 47:
		*uParam1 = {314.4171f, 965.207f, 208.4024f};
		*fParam2 = 165.9421f;
		return 1;

	case 49:
		*uParam1 = {3321.537f, 4975.455f, 25.9097f};
		*fParam2 = 221.228f;
		return 1;

	case 48:
		*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
		*fParam2 = 42f + 180f;
		return 1;

	case 50:
		*uParam1 = {-731.3261f, 106.68f, 54.7169f};
		*fParam2 = 98.9764f;
		return 1;

	case 51:
		*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
		*fParam2 = 220.9554f;
		return 1;

	case 52:
		*uParam1 = {736.9869f, -2050.678f, 28.2718f};
		*fParam2 = 83.9922f;
		return 1;

	case 66:
		*uParam1 = {262.5499f, -2540.15f, 4.8433f};
		*fParam2 = -64.1366f;
		return 1;

	case 53:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 55:
		*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
		*fParam2 = 127.7547f;
		return 1;

	case 56:
		*uParam1 = {118.0988f, -1264.916f, 32.3637f};
		*fParam2 = -63f;
		return 1;

	case 57:
		*uParam1 = {37.5988f, -1351.52f, 28.2954f};
		*fParam2 = 90.0339f;
		return 1;

	case 61:
		*uParam1 = {-558.2693f, 261.1167f, 82.07f};
		*fParam2 = 84.6231f;
		return 1;

	case 62:
		*uParam1 = {-196.9999f, 507.9999f, 132.477f};
		*fParam2 = 99.6049f;
		return 1;

	case 63:
		*uParam1 = {1312.01f, -1645.87f, 51.2f};
		*fParam2 = 120f;
		return 1;

	case 68:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 69:
		*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
		*fParam2 = 211.8223f;
		return 1;

	case 64:
		*uParam1 = {2091.258f, 4714.852f, 40.1936f};
		*fParam2 = 136.0867f;
		return 1;

	case 54:
		*uParam1 = {1762.59f, 3247.212f, 40.735f};
		*fParam2 = 27.0648f;
		return 1;

	case 65:
		*uParam1 = {1764.013f, 3252.902f, 40.735f};
		*fParam2 = 27.0648f;
		return 1;

	case 70:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 71:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 72:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 73:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	default: break;
	}
	return 0;
}

// Position - 0x126F
void func_23(int iParam0, int iParam1) {
	if (iParam1) {
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92) {
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else {
		Global_85809[iParam0 /*2*/] = 0;
	}
}

// Position - 0x12AD
void func_24() {
	Global_91526 = 1;
	if (player::is_player_being_arrested(player::player_id(), 1)) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_25()) {
			case 0: StringCopy(&Global_69934, "CMN_MARRE", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FARRE", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TARRE", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
	}
	else if (!player::is_player_playing(player::player_id())) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_25()) {
			case 0: StringCopy(&Global_69934, "CMN_MDIED", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FDIED", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TDIED", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
		gameplay::set_bit(&Global_91491.f_20, 25);
	}
}

// Position - 0x1394
int func_25() {
	func_26();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x13AD
void func_26() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_30(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_29(player::player_ped_id());
			if (func_28(iVar0) && (!func_27(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_28(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x14AA
bool func_27(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x14B8
bool func_28(int iParam0) { return iParam0 < 3; }

// Position - 0x14C4
int func_29(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_30(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x1501
int func_30(int iParam0) {
	if (func_28(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x152B
int func_31() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 2)) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x1560
bool func_32(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x158B
void func_33(char *sParam0) {
	func_34(sParam0);
	func_18(0);
}

// Position - 0x159E
void func_34(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		if (ui::get_length_of_literal_string(sParam0) <= 16) {
			StringCopy(&Global_69934, sParam0, 16);
			StringCopy(&Global_69938, "", 16);
			if (unk1::_is_recording()) {
				unk1::_stop_recording_and_save_clip();
			}
		}
	}
}

// Position - 0x15DD
void func_35(int iParam0, int iParam1) { Global_91491.f_22[iParam1] = iParam0; }

// Position - 0x15F1
bool func_36(int iParam0) {
	if (func_10(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x161B
void func_37() { func_7(&iLocal_821); }

// Position - 0x162A
void func_38() {
	int iVar0;

	switch (iLocal_684) {
	case 0: iLocal_684 = 1; break;

	case 1:
		if (!func_101(player::player_ped_id(), vLocal_827, 270f)) {
			iLocal_684 = 2;
		}
		else if (!func_100("PRA_LEVAREA", 0, 0)) {
			func_99("PRA_LEVAREA", 60000, 0);
		}
		break;

	case 2:
		iVar0 = func_25();
		if (func_100("PRA_LEVAREA", 0, 0)) {
			ui::clear_prints();
		}
		if (iVar0 == 0) {
			if (func_66(&iLocal_687, &cLocal_1044, &uLocal_879)) {
				func_62();
				func_57();
			}
		}
		else {
			func_52(func_56(iVar0), -621899663, -621899663, 5, 0, iVar0, func_55(iVar0), 0, 6000, 6000, -1, 0, 0);
			func_62();
			func_57();
		}
		break;

	case 3:
		func_39(1, 1, 1);
		iLocal_684 = 2;
		break;
	}
}

// Position - 0x170B
void func_39(int iParam0, int iParam1, int iParam2) {
	func_41(0, 0, iParam2, 1);
	if (iParam0 == 1) {
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		cam::set_gameplay_cam_relative_heading(0f);
	}
	if (iParam1 == 1) {
		func_40(500, 0);
	}
}

// Position - 0x173F
void func_40(int iParam0, int iParam1) {
	if (cam::is_screen_faded_out() || cam::is_screen_fading_out()) {
		if (!cam::is_screen_fading_in()) {
			cam::do_screen_fade_in(iParam0);
		}
	}
	if (iParam1) {
		while (!cam::is_screen_faded_in()) {
			system::wait(0);
		}
	}
}

// Position - 0x177B
void func_41(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = player::get_player_index();
	player::set_everyone_ignore_player(iVar0, 0);
	player::set_player_control(iVar0, iParam3, 0);
	func_42(0, 1, 0, 0);
	if (iParam2 == 1) {
		ui::display_radar(1);
		ui::display_hud(1);
	}
	ui::clear_help(1);
	if (iParam0 == 1) {
		cam::set_widescreen_borders(0, 0);
	}
	if (iParam1 == 1) {
		if (iLocal_37 != 0 && iLocal_37 != joaat("object") && iLocal_37 != joaat("gadget_parachute")) {
			if (func_10(player::player_ped_id())) {
				if (weapon::has_ped_got_weapon(player::player_ped_id(), iLocal_37, 0)) {
					weapon::set_current_ped_weapon(player::player_ped_id(), iLocal_37, 0);
				}
			}
		}
	}
	if (func_325(player::player_ped_id())) {
		ped::set_ped_stealth_movement(player::player_ped_id(), 0, 0);
	}
}

// Position - 0x1822
void func_42(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_51(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_50()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_49(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_51(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_49(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_47(player::player_id()) &&
				!func_44(player::player_id(), 0) && !func_43()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_47(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0x193B
bool func_43() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x1958
bool func_44(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_45(-1, 0) == 8;
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

// Position - 0x19A3
int func_45(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_46();
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

// Position - 0x19E4
var func_46() { return Global_1312735; }

// Position - 0x19F0
int func_47(int iParam0) {
	if (func_44(iParam0, 0)) {
		return 1;
	}
	if (func_48()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x1A32
bool func_48() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x1A43
int func_49(int iParam0, int iParam1, var uParam2, int iParam3) {
	int iVar0;

	iVar0 = 0;
	if (gameplay::is_pc_version()) {
		if (cutscene::_0xA0FE76168A189DDB() != iParam0 && uParam2) {
			cutscene::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

// Position - 0x1A76
bool func_50() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x1A9D
void func_51(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}

// Position - 0x1AC0
int func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) {
	struct<15> Var0;
	int iVar15;

	if (func_32(0)) {
		return 0;
	}
	if (iParam8 < 0) {
		return 0;
	}
	if (iParam9 < 0) {
		return 0;
	}
	if (iParam10 == 76) {
		return 0;
	}
	if (iParam11 == 235) {
		return 0;
	}
	if (iParam6 == iParam5) {
		return 0;
	}
	if (iParam5 != 144 && iParam5 != 0 && iParam5 != 1 && iParam5 != 2) {
		return 0;
	}
	if (Global_101700.f_6647.f_136 < 9) {
		Var0 = iParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_101700.f_6647.f_911 == Var0) {
			Global_101700.f_6647.f_911 = -1;
		}
		Var0.f_3 = func_54(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = gameplay::get_game_timer() + iParam8;
		Var0.f_1 = iParam12;
		iVar15 = 0;
		gameplay::set_bit(&iVar15, iParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		gameplay::set_bit(&Var0.f_1, 0);
		gameplay::set_bit(&Var0.f_1, 13);
		gameplay::clear_bit(&Var0.f_1, 1);
		if (iParam4 == 0) {
			gameplay::set_bit(&Var0.f_1, 10);
		}
		Global_101700.f_6647[Global_101700.f_6647.f_136 /*15*/] = {Var0};
		Global_101700.f_6647.f_136++;
		func_53(iParam5);
		return 1;
	}
	return 0;
}

// Position - 0x1C1D
void func_53(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_28(iParam0)) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_136) {
		if (gameplay::is_bit_set(Global_101700.f_6647[iVar0 /*15*/].f_2, iParam0)) {
			if (Global_101700.f_6647[iVar0 /*15*/].f_3 > iVar1) {
				iVar1 = Global_101700.f_6647[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101700.f_6647.f_764) {
		if (gameplay::is_bit_set(Global_101700.f_6647.f_651[iVar2 /*14*/].f_2, iParam0)) {
			if (Global_101700.f_6647.f_651[iVar2 /*14*/].f_3 == 5) {
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101700.f_6647.f_919[iParam0] = iVar1;
}

// Position - 0x1CE1
int func_54(int iParam0) {
	switch (iParam0) {
	case 0:
	case 4: return 5;

	case 7: return 4;

	case 2: return 3;

	case 1: return 2;

	case 3: return 1;

	case 5:
	case 6: return 0;
	}
	return 7;
}

// Position - 0x1D4B
int func_55(int iParam0) {
	if (iParam0 == 1) {
		return 9;
	}
	return 8;
}

// Position - 0x1D60
int func_56(int iParam0) {
	if (iParam0 == 1) {
		return -714760066;
	}
	return -1198055521;
}

// Position - 0x1D7B
void func_57() {
	ui::clear_prints();
	func_60();
	func_58(0, 0);
	func_359();
}

// Position - 0x1D95
void func_58(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Global_55824) {
		Global_55824 = iParam1;
	}
	if (iParam0) {
		if (func_32(0) && Global_69948.f_1 == 1 && func_59(Global_69948)) {
		}
		else {
			Global_55822 = 1;
		}
	}
	if (Global_101700.f_8044 || func_32(0)) {
		iVar0 = func_31();
		iVar1 = Global_82576[iVar0 /*5*/];
		uVar2 = Global_69971.f_109[iVar1 /*4*/];
		if (iVar0 == -1) {
			if (Global_101700.f_8044) {
			}
			return;
		}
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 4)) {
			return;
		}
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 5)) {
			return;
		}
		gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 4);
		gameplay::set_bit(&Global_69950, 1);
		Global_69966 = uVar2;
		Global_69967 = gameplay::get_game_timer();
	}
}

// Position - 0x1E6B
int func_59(int iParam0) {
	switch (iParam0) {
	case 71: return 1;

	case 86: return 1;

	case 91: return 1;

	default: return 0;
	}
	return 0;
}

// Position - 0x1EA9
void func_60() {
	Global_14611 = 0;
	func_61();
}

// Position - 0x1EB9
void func_61() {
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

// Position - 0x1F10
void func_62() {
	func_65(0, -1);
	func_64(0, 318);
	func_63(1, 320);
}

// Position - 0x1F2E
void func_63(int iParam0, int iParam1) {
	int iVar0;

	if (Global_55830) {
	}
	Global_55830 = 0;
	if (iParam0) {
		Global_55831 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1) {
		iVar0 = 0;
		while (iVar0 < Global_67917) {
			if (Global_56047[Global_67918[iVar0 /*9*/] /*13*/] == 4) {
				Global_67918[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < Global_67917) {
			if (Global_67918[iVar0 /*9*/] > 0) {
				if (Global_67918[iVar0 /*9*/] == iParam1) {
					Global_67918[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

// Position - 0x1FC8
void func_64(int iParam0, int iParam1) {
	int iVar0;

	Global_55835 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		if (iParam1 == -1 || Global_67918[iVar0 /*9*/] == iParam1) {
			if (Global_67918[iVar0 /*9*/].f_6 != iParam0) {
				Global_67918[iVar0 /*9*/].f_6 = iParam0;
				Global_67918[iVar0 /*9*/].f_7 = 1;
				Global_67918[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

// Position - 0x2033
void func_65(int iParam0, int iParam1) {
	Global_55833 = iParam0;
	Global_55834 = iParam1;
}

// Position - 0x2045
bool func_66(int *iParam0, char *sParam1, var *uParam2) {
	switch (*iParam0) {
	case 0:
		if (func_97()) {
			if (func_96(74) || func_96(75))
				&&func_95() {
					if (func_25() == 0) {
						func_94(1);
						func_93(46, 1);
						*iParam0 = 4;
					}
					else {
						func_92(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_81(uParam2, func_91(), func_25(), "FBIPRAU", func_90(), 9, 1, 0, 0, 0)) {
							*sParam1 = {func_80(1)};
							func_93(46, 1);
							*iParam0 = 1;
						}
					}
				}
			else if (func_25() == 0) {
				func_94(0);
				*iParam0 = 4;
			}
			else {
				func_92(uParam2, 0, 0, "MICHAEL", 0, 1);
				if (func_81(uParam2, func_91(), func_25(), "FBIPRAU", func_90(), 9, 1, 0, 0, 0)) {
					*sParam1 = {func_80(0)};
					*iParam0 = 1;
				}
			}
		}
		else {
			func_73();
			*iParam0 = 4;
		}
		break;

	case 1:
		if (func_72()) {
			if (audio::get_current_scripted_conversation_line() >= 0) {
				func_71("FBIPRAU", sParam1);
				func_70(1);
				*iParam0 = 3;
			}
		}
		if (func_69()) {
			*iParam0 = 3;
		}
		break;

	case 2: break;

	case 3:
		if (!func_72()) {
			if (!func_68(0)) {
				if (!func_96(3) && func_97()) {
					func_67(50, 0);
				}
				return true;
			}
		}
		break;

	case 4: return true;
	}
	return false;
}

// Position - 0x21BA
void func_67(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0x21F7
bool func_68(int iParam0) {
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

// Position - 0x2251
bool func_69() {
	if (Global_15794 == 1 || Global_16761 == 1) {
		return true;
	}
	return false;
}

// Position - 0x2274
void func_70(int iParam0) {
	audio::stop_scripted_conversation(iParam0);
	if (iParam0) {
	}
}

// Position - 0x2288
void func_71(char *sParam0, char *sParam1) {
	if (audio::is_mobile_phone_call_ongoing()) {
		Global_15802 = 1;
		StringCopy(&Global_15809, sParam0, 24);
		StringCopy(&Global_15803, sParam1, 24);
	}
}

// Position - 0x22A9
bool func_72() {
	if (Global_15745 == 4) {
		if (audio::is_mobile_phone_call_ongoing()) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

// Position - 0x22CE
void func_73() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = func_78(iVar0);
		if (!ped::is_ped_injured(iVar1)) {
			if (func_77(iVar1, 0)) {
				return;
			}
		}
		iVar0++;
	}
	func_74(func_75(), 0, func_25(), func_91(), 9, 6000, 6000, -1, 0, -1, 0);
}

// Position - 0x2325
int func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10) {
	struct<15> Var0;
	int iVar15;

	if (func_32(0)) {
		return 0;
	}
	if (iParam5 < 0) {
		return 0;
	}
	if (iParam6 < 0) {
		return 0;
	}
	if (iParam7 == 76) {
		return 0;
	}
	if (iParam8 == 235) {
		return 0;
	}
	if (iParam3 == iParam2) {
		return 0;
	}
	if (iParam2 != 144 && iParam2 != 0 && iParam2 != 1 && iParam2 != 2) {
		return 0;
	}
	if (Global_101700.f_6647.f_136 < 9) {
		Var0 = iParam0;
		if (Global_101700.f_6647.f_911 == Var0) {
			Global_101700.f_6647.f_911 = -1;
		}
		Var0.f_3 = func_54(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = gameplay::get_game_timer() + iParam5;
		Var0.f_1 = iParam10;
		iVar15 = 0;
		gameplay::set_bit(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		gameplay::set_bit(&Var0.f_1, 0);
		gameplay::clear_bit(&Var0.f_1, 1);
		if (iParam1 == 0) {
			gameplay::set_bit(&Var0.f_1, 10);
		}
		Global_101700.f_6647[Global_101700.f_6647.f_136 /*15*/] = {Var0};
		Global_101700.f_6647.f_136++;
		func_53(iParam2);
		return 1;
	}
	return 0;
}

// Position - 0x2476
int func_75() {
	switch (func_76()) {
	case 33:
		switch (func_25()) {
		case 0: return -1847734803;

		case 1: return -714760066;

		case 2: return -1198055521;
		}
		break;

	case 34:
		switch (func_25()) {
		case 0: return 1374342572;

		case 1: return 530956160;

		case 2: return 240475766;
		}
		break;

	case 36:
		switch (func_25()) {
		case 0: return 580731697;

		case 1: return 728176806;

		case 2: return 910240872;
		}
		break;

	case 37:
		switch (func_25()) {
		case 0: return 74540475;

		case 1: return -1200353264;

		case 2: return 801340541;
		}
		break;
	}
	return -1;
}

// Position - 0x259C
int func_76() { return Global_69964; }

// Position - 0x25A8
bool func_77(int iParam0, int iParam1) {
	int iVar0;

	return false;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_29(iParam0);
		if (iVar0 > 3) {
			return false;
		}
		if (func_78(iVar0) != iParam0) {
			return false;
		}
		if (iParam1 == 0) {
			if (iParam0 == player::player_ped_id()) {
				return false;
			}
		}
		if (gameplay::is_bit_set(Global_87677, iVar0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x2604
int func_78(int iParam0) {
	if (iParam0 > 3) {
		return 0;
	}
	if (iParam0 == func_25()) {
		return player::player_ped_id();
	}
	return Global_89302[func_79(iParam0)];
}

// Position - 0x2635
int func_79(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	else if (iParam0 == 2) {
		return 2;
	}
	else if (iParam0 == 1) {
		return 1;
	}
	else if (iParam0 == 145) {
		return 3;
	}
	return 4;
}

// Position - 0x2670
struct<4> func_80(int iParam0) {
	struct<4> Var0;

	if (iParam0) {
		switch (func_25()) {
		case 1: StringCopy(&Var0, "FBI4_ISAGO", 16); break;

		case 2: StringCopy(&Var0, "FBI4_ISAGO", 16); break;
		}
	}
	else {
		switch (func_25()) {
		case 1: StringCopy(&Var0, "FBI4_THATSIT", 16); break;

		case 2: StringCopy(&Var0, "FBI4_THATSIT", 16); break;
		}
	}
	return Var0;
}

//Position - 0x26D6
bool func_81(var* uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_89(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_1631 = iParam2;
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15759 = 0;
	Global_15750 = 1;
	Global_15797 = 0;
	Global_15799 = 0;
	if (iParam6 == 1) {
		Global_15757 = 1;
	}
	else {
		Global_15757 = 0;
	}
	Global_2621441 = 0;
	return func_82(sParam4, iParam5, iParam9);
}

// Position - 0x273E
int func_82(char *sParam0, int iParam1, int iParam2) {
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
					func_61();
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
		if (func_88(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_87();
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
				func_86();
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
				if (func_85()) {
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
			if (func_50()) {
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
			func_84();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_83();
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
		func_61();
	}
	return 0;
}

// Position - 0x2A0A
void func_83() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x2A3B
void func_84() {
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

// Position - 0x2AD0
bool func_85() {
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

// Position - 0x2B69
void func_86() {
	if (func_27(14)) {
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
		Global_14443 = func_25();
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

// Position - 0x2C0B
void func_87() {
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

// Position - 0x2C62
bool func_88(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x2C9D
void func_89(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	Global_15199 = {*uParam0};
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
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

// Position - 0x2CF3
char *func_90() {
	char *sVar0;

	switch (func_76()) {
	case 33:
		switch (func_25()) {
		case 0: sVar0 = "FBIP1_MENDC"; break;

		case 1: sVar0 = "FBIP1_FENDC"; break;

		case 2: sVar0 = "FBIP1_TENDC"; break;
		}
		break;

	case 34:
		switch (func_25()) {
		case 0: sVar0 = "FBIP2_MENDC"; break;

		case 1: sVar0 = "FBIP2_FENDC"; break;

		case 2: sVar0 = "FBIP2_TENDC"; break;
		}
		break;

	case 36:
		switch (func_25()) {
		case 0: sVar0 = "FBIP4_MENDC"; break;

		case 1: sVar0 = "FBIP4_FENDC"; break;

		case 2: sVar0 = "FBIP4_TENDC"; break;
		}
		break;

	case 37:
		switch (func_25()) {
		case 0: sVar0 = "FBIP5_MENDC"; break;

		case 1: sVar0 = "FBIP5_FENDC"; break;

		case 2: sVar0 = "FBIP5_TENDC"; break;
		}
		break;
	}
	return sVar0;
}

// Position - 0x2DFB
int func_91() {
	int iVar0;

	switch (func_25()) {
	case 0: iVar0 = 5; break;

	case 1: iVar0 = 9; break;

	case 2: iVar0 = 8; break;
	}
	return iVar0;
}

// Position - 0x2E34
void func_92(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x2ECF
void func_93(int iParam0, int iParam1) {
	if (iParam0 == 146 || iParam0 == -1) {
		return;
	}
	if (Global_101700.f_8044.f_99.f_58[iParam0] == iParam1) {
		return;
	}
	Global_101700.f_8044.f_99.f_58[iParam0] = iParam1;
}

// Position - 0x2F14
void func_94(int iParam0) {
	if (iParam0) {
		func_74(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_96(3)) {
		func_74(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else {
		func_74(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

// Position - 0x2F85
int func_95() {
	if (func_96(41) && func_96(3) && func_96(21)) {
		return 1;
	}
	return 0;
}

// Position - 0x2FB0
bool func_96(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x2FDC
bool func_97() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37) {
		if (func_96(iVar1)) {
			iVar0++;
		}
		iVar1++;
	}
	if (func_98(45)) {
		iVar0++;
	}
	if (iVar0 == 4) {
		return true;
	}
	return false;
}

// Position - 0x3024
bool func_98(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0x3051
void func_99(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 1);
}

// Position - 0x306A
bool func_100(char *sParam0, int iParam1, char *sParam2) {
	ui::begin_text_command_is_message_displayed(sParam0);
	if (iParam1 == 1) {
		ui::add_text_component_substring_text_label(sParam2);
	}
	return ui::end_text_command_is_message_displayed();
}

// Position - 0x3088
bool func_101(int iParam0, vector3 vParam1, float fParam4) {
	return system::vdist2(entity::get_entity_coords(iParam0, 1), vParam1) <= fParam4 * fParam4;
}

// Position - 0x30A5
void func_102() {
	func_209(&iLocal_874, &iLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, vLocal_827, Local_868, 0, 1090519040);
	func_208();
	func_149();
	switch (iLocal_684) {
	case 0:
		if (func_116(iLocal_683, iLocal_28)) {
			if (player::get_player_wanted_level(player::player_id()) == 0) {
				if (func_36(iLocal_874)) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_874, 0)) {
						func_115("PRA_LEVVEH", &iLocal_820);
					}
				}
			}
			iLocal_684 = 1;
		}
		break;

	case 1:
		func_114(&iLocal_821, vLocal_827, &iLocal_685, iLocal_686, &iLocal_820, &iLocal_838);
		if (func_107(iLocal_874, vLocal_827, &iLocal_821, iLocal_686, iLocal_685, &iLocal_836, &iLocal_839, &iLocal_835,
					 &iLocal_834, &iLocal_820, 1090519040)) {
			if (!func_106()) {
				if (func_66(&iLocal_687, &cLocal_1044, &uLocal_879)) {
					func_62();
					func_57();
				}
			}
			else {
				func_93(46, 1);
				func_62();
				func_104(0);
			}
		}
		break;

	case 3:
		if (func_36(Local_868)) {
			if (!ped::is_ped_in_vehicle(player::player_ped_id(), Local_868, 0)) {
				ped::set_ped_into_vehicle(player::player_ped_id(), Local_868, -1);
			}
			else {
				func_103(Local_868, vLocal_827, 126.0705f, 0, 1);
				func_39(1, 1, 1);
				iLocal_684 = 1;
			}
		}
		break;
	}
}

// Position - 0x31F8
int func_103(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6) {
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (func_10(iParam0)) {
		if (iParam5 == 1) {
			fVar1 = 0f;
			bVar0 = gameplay::get_ground_z_for_3d_coord(vParam1, &fVar1, 0);
			if (bVar0) {
				vParam1.z = fVar1;
			}
		}
		entity::set_entity_coords(iParam0, vParam1, 1, 0, 0, iParam6);
		entity::set_entity_heading(iParam0, fParam4);
		if (iParam5) {
			return bVar0;
		}
		return 1;
	}
	return 0;
}

// Position - 0x3253
void func_104(int iParam0) {
	func_105(iLocal_683);
	iLocal_817 = iLocal_683;
	if (!iParam0) {
		iLocal_683 = iLocal_817 + 1;
	}
	else if (iLocal_817 > 0) {
		iLocal_683 = iLocal_817 - 1;
	}
	iLocal_820 = 0;
	iLocal_684 = 0;
}

// Position - 0x3290
void func_105(int iParam0) {
	switch (iParam0) {
	case 0: break;
	}
}

// Position - 0x32A8
int func_106() {
	if (func_97()) {
		if (func_96(74) || func_96(75))
			&&func_95() { return 1; }
	}
	return 0;
}

// Position - 0x32DA
bool func_107(int iParam0, vector3 vParam1, int *iParam4, int iParam5, int iParam6, int *iParam7, int *iParam8,
			  int iParam9, int *iParam10, int *iParam11, float fParam12) {
	float fVar0;

	if (iParam5 == 1 || iParam5 == 2 || iParam5 == 3) {
		if (iParam6 == 0) {
			if (func_36(iParam0)) {
				if (!entity::is_entity_upsidedown(iParam0)) {
					func_115(func_113(func_76()), iParam11);
				}
			}
			if (!entity::is_entity_at_coord(player::player_ped_id(), vParam1, fParam12, fParam12, 2f, 0, 1, 2)) {
				entity::is_entity_at_coord(player::player_ped_id(), vParam1, fParam12, fParam12, 2f, 1, 1, 2);
				if (func_100(func_113(func_76()), 0, 0)) {
					ui::clear_this_print(func_113(func_76()));
				}
				*iParam7 = 1;
				func_111(iParam4, vParam1, 1);
			}
			else {
				if (*iParam7) {
					fVar0 = fParam12 / 2f;
					if (func_101(player::player_ped_id(), vParam1, fVar0)) {
						*iParam7 = 0;
						func_110(1077936128, 1);
					}
				}
				func_7(iParam4);
			}
		}
	}
	else if (entity::is_entity_at_coord(iParam0, vParam1, fParam12, fParam12, 2f, 0, 1, 2)) {
		if (*iParam9 == -1) {
			vehicle::set_vehicle_doors_locked(iParam0, 2);
			return true;
		}
		if (!*iParam10) {
			if (func_100(func_113(func_76()), 0, 0)) {
				ui::clear_prints();
			}
			*iParam9 = gameplay::get_game_timer();
			*iParam10 = 1;
			vehicle::set_vehicle_doors_locked(iParam0, 2);
		}
		else if (gameplay::get_game_timer() - *iParam9 > 3000) {
			return true;
		}
	}
	else {
		if (vehicle::get_vehicle_door_lock_status(iParam0) == 2) {
			vehicle::set_vehicle_doors_locked(iParam0, 1);
		}
		if (!*iParam8) {
			if (func_100(func_109(func_76(), 0), 0, 0)) {
				ui::clear_this_print(func_109(func_76(), 0));
			}
			if (!func_100(func_108(func_76()), 0, 0)) {
				func_99(func_108(func_76()), 7500, 0);
				*iParam8 = 1;
			}
		}
		*iParam7 = 1;
	}
	return false;
}

// Position - 0x3484
char *func_108(int iParam0) {
	char *sVar0;

	switch (iParam0) {
	case 33: sVar0 = "PRA_RETVEH"; break;

	case 34: sVar0 = "PRB_RETVEH"; break;

	case 78: sVar0 = "PR_RETVEH"; break;

	case 80:
	case 81:
	case 82: sVar0 = "PRF_RETVEH"; break;
	}
	return sVar0;
}

// Position - 0x34DD
char *func_109(int iParam0, int iParam1) {
	char *sVar0;

	switch (iParam0) {
	case 33: sVar0 = "PRA_TAKBACK"; break;

	case 34: sVar0 = "PRB_TAKBACK"; break;

	case 78: sVar0 = "PR_TAKBACK"; break;

	case 80:
	case 81:
	case 82:
		if (!iParam1) {
			sVar0 = "PRF_TAKBACK";
		}
		else {
			sVar0 = "PRF_GARAGE";
		}
		break;
	}
	return sVar0;
}

// Position - 0x3545
bool func_110(float fParam0, int iParam1) {
	int iVar0;

	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		return true;
	}
	iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
	if (vehicle::is_vehicle_driveable(iVar0, 0)) {
		if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) == player::player_ped_id()) {
			if (!vehicle::is_vehicle_stopped(iVar0)) {
				vehicle::_set_vehicle_halt(iVar0, fParam0, iParam1, 0);
				return false;
			}
		}
		else {
			return true;
		}
	}
	if (ped::is_ped_stopped(player::player_ped_id())) {
		return true;
	}
	if (vehicle::is_vehicle_driveable(iVar0, 0)) {
		if (vehicle::is_vehicle_stopped(iVar0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x35C9
void func_111(int *iParam0, vector3 vParam1, int iParam4) {
	if (!ui::does_blip_exist(*iParam0)) {
		*iParam0 = func_112(vParam1, 5, iParam4);
	}
}

// Position - 0x35EA
int func_112(vector3 vParam0, int iParam3, int iParam4) {
	int iVar0;

	iVar0 = 0;
	iVar0 = ui::add_blip_for_coord(vParam0);
	ui::set_blip_priority(iVar0, iParam3);
	ui::set_blip_scale(iVar0, 1f);
	ui::set_blip_route(iVar0, iParam4);
	return iVar0;
}

// Position - 0x3618
char *func_113(int iParam0) {
	char *sVar0;

	switch (iParam0) {
	case 33: sVar0 = "PRA_LEVVEH"; break;

	case 34: sVar0 = "PRB_LEVVEH"; break;

	case 78: sVar0 = "PR_LEVVEH"; break;

	case 80:
	case 81:
	case 82: sVar0 = "PRF_LEAVE"; break;
	}
	return sVar0;
}

// Position - 0x3671
void func_114(int *iParam0, vector3 vParam1, int *iParam4, int iParam5, int *iParam6, int *iParam7) {
	switch (*iParam4) {
	case 0:
		if (player::get_player_wanted_level(player::player_id()) > 0) {
			*iParam4 = 1;
		}
		break;

	case 1:
		func_7(iParam0);
		if (iParam5 == 1 || iParam5 == 2 || iParam5 == 3) {
			ui::clear_prints();
			func_99("LOSE_WANTED", 7500, 0);
			*iParam4 = 2;
		}
		break;

	case 2:
		if (player::get_player_wanted_level(player::player_id()) == 0) {
			ui::clear_prints();
			if (iParam5 == 1 || iParam5 == 2 || iParam5 == 3) {
				func_115(func_109(func_76(), 0), iParam6);
				func_111(iParam0, vParam1, 1);
			}
			else if (iParam5 == 0 && !*iParam7) {
				func_99(func_108(func_76()), 7500, 0);
				*iParam7 = 1;
			}
			*iParam4 = 0;
		}
		break;
	}
}

// Position - 0x3751
void func_115(char *sParam0, int *iParam1) {
	if (!*iParam1) {
		func_99(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

// Position - 0x376E
bool func_116(int iParam0, int iParam1) {
	int *iVar0;

	switch (iParam0) {
	case 0:
		if (iParam1) {
			iLocal_28 = 0;
			func_39(1, 1, 1);
		}
		else if (func_143(1, vLocal_824, 0)) {
			if (func_142()) {
				func_141(33);
				vehicle::set_vehicle_model_is_suppressed(joaat("trash"), 1);
				vehicle::set_vehicle_model_is_suppressed(joaat("towtruck"), 1);
				vehicle::set_vehicle_model_is_suppressed(joaat("s_m_y_garbage"), 1);
				iLocal_683 = 2;
				func_7(&iLocal_821);
				func_139(&iLocal_671, 0, 0);
				func_138(190, 1244.338f, -339.3197f, 68.0823f);
				func_136();
				ai::set_scenario_type_enabled("DRIVE", 0);
				ai::set_scenario_type_enabled("WORLD_VEHICLE_ATTRACTOR", 0);
				ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
				ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", 0);
				return true;
			}
			else if (func_143(2, Local_868.f_1, Local_868.f_4) && func_143(3, Local_840.f_1, Local_840.f_4) &&
					 func_143(4, Local_854.f_1, Local_854.f_4) && func_135(0)) {
				func_136();
				func_141(33);
				if (func_325(Local_840)) {
					func_134(Local_840);
				}
				if (func_325(Local_854)) {
					func_133(Local_854);
				}
				func_132(Local_868);
				if (func_325(Local_854) && func_325(Local_840)) {
					func_121(iLocal_830, 1, 0, 1);
				}
				vehicle::set_vehicle_model_is_suppressed(joaat("trash"), 1);
				vehicle::set_vehicle_model_is_suppressed(joaat("towtruck"), 1);
				vehicle::set_vehicle_model_is_suppressed(joaat("s_m_y_garbage"), 1);
				if (ui::get_blip_from_entity(Local_868) != 0) {
					iVar0 = ui::get_blip_from_entity(Local_868);
					gameplay::set_this_script_can_remove_blips_created_by_any_script(1);
					func_7(&iVar0);
					gameplay::set_this_script_can_remove_blips_created_by_any_script(0);
				}
				func_119(&iLocal_821, Local_868, 1);
				func_138(190, 1244.338f, -339.3197f, 68.0823f);
				ai::set_scenario_type_enabled("DRIVE", 0);
				ai::set_scenario_type_enabled("WORLD_VEHICLE_ATTRACTOR", 0);
				ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
				ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", 0);
				return true;
			}
		}
		break;

	case 1:
		if (iParam1) {
			if (func_143(2, Local_868.f_1, Local_868.f_4) && func_143(3, Local_840.f_1, Local_840.f_4) &&
				func_143(4, Local_854.f_1, Local_854.f_4)) {
				func_118(player::player_ped_id(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
				func_117();
				iLocal_28 = 0;
				ai::set_scenario_type_enabled("DRIVE", 0);
				ai::set_scenario_type_enabled("WORLD_VEHICLE_ATTRACTOR", 0);
				ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
				ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", 0);
				func_39(1, 1, 1);
			}
		}
		else {
			func_136();
			return true;
		}
		break;

	case 2:
		if (iParam1) {
			if (func_143(2, Local_868.f_1, Local_868.f_4)) {
				func_117();
				func_136();
				ped::set_ped_into_vehicle(player::player_ped_id(), Local_868, -1);
				iLocal_28 = 0;
				func_39(1, 1, 1);
			}
		}
		else {
			return true;
		}
		break;

	case 3:
		if (iParam1) {
			if (func_143(2, vLocal_827, Local_868.f_4)) {
				func_117();
				ped::set_ped_into_vehicle(player::player_ped_id(), Local_868, -1);
				func_136();
				iLocal_28 = 0;
				func_39(1, 1, 1);
			}
		}
		else {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x3A84
void func_117() {
	if (iLocal_683 == 1) {
		func_134(Local_840);
		func_133(Local_854);
		func_132(Local_868);
		func_121(iLocal_830, 1, 0, 1);
	}
	iLocal_877 = 0;
	iLocal_838 = 0;
	iLocal_839 = 0;
	iLocal_834 = 0;
	iLocal_835 = 0;
	iLocal_836 = 0;
}

// Position - 0x3ACA
void func_118(int iParam0, vector3 vParam1, float fParam4) {
	if (func_325(iParam0)) {
		ai::clear_ped_tasks(iParam0);
	}
	func_103(iParam0, vParam1, fParam4, 0, 1);
}

// Position - 0x3AF0
void func_119(int *iParam0, int iParam1, int iParam2) {
	if (!ui::does_blip_exist(*iParam0)) {
		*iParam0 = func_120(iParam1, iParam2, 5);
	}
}

// Position - 0x3B0F
int func_120(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	if (func_10(iParam0)) {
		iVar0 = ui::add_blip_for_entity(iParam0);
		ui::set_blip_as_friendly(iVar0, iParam1);
		ui::set_blip_priority(iVar0, iParam2);
		ui::set_blip_scale(iVar0, 1f);
	}
	return iVar0;
}

// Position - 0x3B44
void func_121(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iLocal_81 = iParam0;
	bLocal_663 = iParam1;
	bLocal_662 = iParam2;
	bLocal_664 = iParam3;
	Local_111[0 /*11*/].f_1 = 0;
	Local_111[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_81 - 1) {
		Local_134[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	fLocal_660 = 0f;
	func_123();
	Local_111[1 /*11*/].f_7 = 3;
	Local_111[1 /*11*/].f_5 = 0;
	Local_111[1 /*11*/].f_10 = 1;
	Local_111[1 /*11*/].f_2 = 1500;
	Local_111[1 /*11*/].f_3 = 500;
	Local_111[0 /*11*/].f_5 = 0;
	Local_111[0 /*11*/].f_10 = 0;
	Local_111[0 /*11*/].f_2 = 1000;
	Local_111[0 /*11*/].f_3 = 100;
	ped::add_relationship_group("Enemies", &iLocal_80);
	ped::set_ped_relationship_group_hash(Local_111[0 /*11*/], iLocal_80);
	ped::set_ped_relationship_group_hash(Local_111[1 /*11*/], iLocal_80);
	entity::set_entity_is_target_priority(Local_111[0 /*11*/], 1, 0);
	entity::set_entity_is_target_priority(Local_111[1 /*11*/], 1, 0);
	func_122(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

// Position - 0x3C31
void func_122(vector3 vParam0, vector3 vParam3) {
	Local_82.f_8 = {vParam0};
	Local_82.f_11 = {vParam3};
	Local_82.f_1 = 4;
}

// Position - 0x3C52
void func_123() {
	if (!ped::is_ped_in_vehicle(Local_111[0 /*11*/], iLocal_109, 0)) {
		ai::task_follow_nav_mesh_to_coord(Local_111[0 /*11*/],
										  entity::get_offset_from_entity_in_world_coords(iLocal_109, func_131(1)), 1f,
										  -1, 1048576000, 0, 1193033728);
		Local_111[0 /*11*/].f_7 = 1;
	}
	else {
		func_124(1);
	}
}

// Position - 0x3C9B
void func_124(int iParam0) {
	if (!vehicle::is_vehicle_seat_free(iLocal_109, 0, 0)) {
		func_125(iParam0);
		if (iLocal_661 != iLocal_81 - 1) {
			if (iLocal_661 == 4) {
				ai::task_vehicle_goto_navmesh(Local_111[0 /*11*/], iLocal_109, Local_134[iLocal_661 /*25*/], 15f,
											  2883755, Local_134[iLocal_661 /*25*/].f_6);
			}
			else {
				ai::task_vehicle_drive_to_coord(Local_111[0 /*11*/], iLocal_109, Local_134[iLocal_661 /*25*/], 15f, 0,
												0, 2883755, Local_134[iLocal_661 /*25*/].f_6,
												Local_134[iLocal_661 /*25*/].f_7);
			}
			Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
			Local_111[0 /*11*/].f_7 = 4;
		}
		else {
			ai::task_vehicle_drive_wander(Local_111[0 /*11*/], iLocal_109, 15f, 786599);
			Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
			Local_111[0 /*11*/].f_7 = 10;
		}
	}
	else {
		Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
		Local_111[0 /*11*/].f_7 = 7;
	}
}

// Position - 0x3D7D
void func_125(bool bParam0) {
	if (iLocal_661 != -1) {
		if (!func_130(Local_134[iLocal_661 /*25*/].f_11) && !func_130(Local_134[iLocal_661 /*25*/].f_14)) {
			vehicle::set_all_vehicle_generators_active_in_area(
				Local_134[iLocal_661 /*25*/].f_11 - Local_134[iLocal_661 /*25*/].f_14,
				Local_134[iLocal_661 /*25*/].f_11 + Local_134[iLocal_661 /*25*/].f_14, 1, 1);
		}
	}
	if (!bParam0) {
		func_128();
	}
	else {
		iLocal_661 = func_126();
	}
	if (iLocal_661 != -1) {
		if (!func_130(Local_134[iLocal_661 /*25*/].f_11) && !func_130(Local_134[iLocal_661 /*25*/].f_14)) {
			vehicle::set_all_vehicle_generators_active_in_area(
				Local_134[iLocal_661 /*25*/].f_11 - Local_134[iLocal_661 /*25*/].f_14,
				Local_134[iLocal_661 /*25*/].f_11 + Local_134[iLocal_661 /*25*/].f_14, 0, 1);
		}
	}
}

// Position - 0x3E5F
int func_126() {
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	float fVar6[21];
	float fVar28;
	float fVar29;
	float fVar30;
	int iVar31;

	if (func_36(iLocal_109)) {
		vVar1 = {entity::get_entity_coords(iLocal_109, 1)};
		iVar4 = 0;
		while (iVar4 <= iLocal_81 - 1) {
			fVar28 = gameplay::get_distance_between_coords(vVar1, Local_134[iVar4 /*25*/], 1);
			if (!func_130(Local_134[iVar4 /*25*/]) && fVar28 > 25f) {
				fVar6[iVar4] = fVar28;
			}
			else {
				fVar6[iVar4] = -1f;
			}
			iVar4++;
		}
		fVar29 = fVar6[0];
		iVar4 = 0;
		while (iVar4 <= iLocal_81 - 1) {
			if (fVar6[iVar4] != -1f) {
				if (fVar6[iVar4] < fVar29) {
					fVar29 = fVar6[iVar4];
					iVar0 = iVar4;
				}
			}
			iVar4++;
		}
		fVar30 = func_127(Local_134[iVar0 /*25*/] - vVar1, entity::get_entity_forward_vector(iLocal_109));
		iVar5 = iVar0;
		iVar31 = 0;
		while (fVar30 < 0f && iVar31 < 40) {
			iVar5++;
			if (iVar5 >= 21) {
				iVar5 = 0;
			}
			vVar1 = {entity::get_entity_coords(iLocal_109, 1)};
			fVar30 = func_127(Local_134[iVar5 /*25*/] - vVar1, entity::get_entity_forward_vector(iLocal_109));
			iVar31++;
		}
		if (iVar31 >= 40) {
			iVar5 = iLocal_81 - 1;
		}
	}
	iVar0 = iVar5;
	return iVar0;
}

// Position - 0x3F98
float func_127(vector3 vParam0, vector3 vParam3) {
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

// Position - 0x3FB9
void func_128() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (bLocal_663) {
		while (Local_134[iLocal_661 /*25*/].f_18 && iVar0 != -1) {
			iLocal_661++;
			if (iLocal_661 >= iLocal_81 - 1) {
				iVar0 = -1;
				iLocal_661 = iLocal_81 - 1;
			}
		}
		if (iLocal_661 == iLocal_81 - 1) {
			if (bLocal_662) {
				iLocal_661 = 0;
				iVar0 = 0;
				while (iVar0 <= iLocal_81 - 1) {
					Local_134[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else {
				iLocal_661 = iLocal_81 - 1;
				return;
			}
		}
	}
	else {
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= iLocal_81 - 1) {
			if (Local_134[iVar0 /*25*/].f_18) {
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == iLocal_81 - 1) {
			iLocal_661 = iLocal_81 - 1;
		}
		else if (iVar1 == iLocal_81) {
			if (bLocal_662) {
				iVar0 = 0;
				while (iVar0 <= iLocal_81 - 1) {
					Local_134[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_661 = func_129();
			}
			else {
				iLocal_661 = -1;
				return;
			}
		}
		else {
			iLocal_661 = func_129();
		}
	}
}

// Position - 0x40C4
int func_129() {
	int iVar0;

	iVar0 = gameplay::get_random_int_in_range(0, iLocal_81 - 1);
	while (Local_134[iVar0 /*25*/].f_18) {
		iVar0 = gameplay::get_random_int_in_range(0, iLocal_81 - 1);
	}
	return iVar0;
}

// Position - 0x40F2
int func_130(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return 1;
	}
	return 0;
}

// Position - 0x411C
Vector3 func_131(int iParam0) {
	vector3 vVar0;
	int iVar3;

	if (!iParam0) {
		iVar3 = entity::get_entity_bone_index_by_name(iLocal_109, "wheel_rf");
	}
	else {
		iVar3 = entity::get_entity_bone_index_by_name(iLocal_109, "wheel_lf");
	}
	vVar0 = {entity::get_world_position_of_entity_bone(iLocal_109, iVar3)};
	vVar0 = {entity::get_offset_from_entity_given_world_coords(iLocal_109, vVar0)};
	if (!iParam0) {
		vVar0 = {vVar0 + Vector(0.5f, 0f, 1f)};
	}
	else {
		vVar0 = {vVar0 + Vector(0.5f, 0f, -1f)};
	}
	return vVar0;
}

// Position - 0x418C
void func_132(int iParam0) {
	if (func_36(iParam0)) {
		iLocal_109 = iParam0;
	}
}

// Position - 0x41A4
void func_133(int iParam0) {
	if (func_325(iParam0)) {
		Local_111[1 /*11*/] = iParam0;
	}
}

// Position - 0x41BF
void func_134(int iParam0) {
	if (func_325(iParam0)) {
		Local_111[0 /*11*/] = iParam0;
	}
}

// Position - 0x41DA
int func_135(int iParam0) {
	streaming::request_anim_dict("missfbi4prepp1");
	streaming::request_anim_set("missfbi4prepp1_garbageman");
	if (iParam0) {
		while (!streaming::has_anim_dict_loaded("missfbi4prepp1") &&
			   !streaming::has_anim_set_loaded("missfbi4prepp1_garbageman")) {
			system::wait(0);
		}
		return 1;
	}
	else if (streaming::has_anim_dict_loaded("missfbi4prepp1") &&
			 streaming::has_anim_set_loaded("missfbi4prepp1_garbageman")) {
		return 1;
	}
	return 0;
}

// Position - 0x4237
void func_136() { func_137(&uLocal_879); }

// Position - 0x4246
void func_137(var *uParam0) {
	int iVar0;
	char *sVar1;

	switch (func_25()) {
	case 0:
		iVar0 = 0;
		sVar1 = "MICHAEL";
		break;

	case 1:
		iVar0 = 1;
		sVar1 = "FRANKLIN";
		break;

	case 2:
		iVar0 = 2;
		sVar1 = "TREVOR";
		break;
	}
	func_92(uParam0, iVar0, player::player_ped_id(), sVar1, 0, 1);
}

// Position - 0x429C
void func_138(int iParam0, vector3 vParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (vParam1.x == Global_25501[iVar0 /*23*/][0 /*3*/] && vParam1.y == Global_25501[iVar0 /*23*/][0 /*3*/].f_1 &&
		vParam1.z == Global_25501[iVar0 /*23*/][0 /*3*/].f_2) {
		return;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
	Global_25501[iVar0 /*23*/][0 /*3*/] = {vParam1};
	Global_31551 = 1;
}

// Position - 0x4330
void func_139(int *iParam0, int iParam1, int iParam2) {
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
		if (func_140(iParam0->f_3)) {
			ui::clear_help(1);
		}
	}
	if (!gameplay::is_string_null(sVar0)) {
		if (func_140(sVar0)) {
			ui::clear_help(1);
		}
	}
}

// Position - 0x440D
bool func_140(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x4420
void func_141(int iParam0) {
	if (Global_88746 != -1) {
		if (iParam0 == Global_88746) {
			Global_88750 = 1;
			return;
		}
	}
}

// Position - 0x4444
bool func_142() {
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (vehicle::is_vehicle_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), joaat("trash"))) {
			entity::set_entity_as_mission_entity(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 1, 0);
			iLocal_874 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (func_36(iLocal_874)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x4497
bool func_143(int iParam0, vector3 vParam1, float fParam4) {
	switch (iParam0) {
	case 0:
		if (func_148(vParam1, vLocal_824, 1056964608, 0) && fParam4 == 0f) {
			return true;
		}
		break;

	case 1:
		ui::request_additional_text(sLocal_819, 0);
		if (ui::has_additional_text_loaded(0)) {
			return true;
		}
		break;

	case 2:
		if (func_36(Global_88321[0])) {
			entity::set_entity_as_mission_entity(Global_88321[0], 1, 1);
			Local_868 = Global_88321[0];
			if (func_36(Local_868)) {
				func_35(Local_868, 0);
				vehicle::set_vehicle_has_strong_axles(Local_868, 1);
				entity::_set_entity_register(Local_868, 1);
				return true;
			}
		}
		else if (func_147(&Local_868, Local_868.f_5, Local_868.f_1, Local_868.f_4, 1)) {
			func_35(Local_868, 0);
			vehicle::set_vehicle_has_strong_axles(Local_868, 1);
			entity::_set_entity_register(Local_868, 1);
			return true;
		}
		break;

	case 3:
		if (entity::does_entity_exist(Global_88321.f_9[0])) {
			if (!ped::is_ped_dead_or_dying(Global_88321.f_9[0], 1)) {
				entity::set_entity_as_mission_entity(Global_88321.f_9[0], 1, 1);
				Local_840 = Global_88321.f_9[0];
				if (func_325(Local_840)) {
					ped::set_blocking_of_non_temporary_events(Local_840, 1);
					ped::set_ped_config_flag(Local_840, 170, 0);
					ped::set_ped_flee_attributes(Local_840, 65536, 1);
					ped::set_ped_combat_attributes(Local_840, 50, 1);
					return true;
				}
			}
			else {
				return true;
			}
		}
		else if (func_144(&Local_840, Local_840.f_5, Local_840.f_1, Local_840.f_4, 1, 0, 1, 1)) {
			if (func_36(Local_868)) {
				ped::set_ped_into_vehicle(Local_840, Local_868, -1);
				ped::set_blocking_of_non_temporary_events(Local_840, 1);
				ped::set_ped_config_flag(Local_840, 170, 0);
				ped::set_ped_flee_attributes(Local_840, 65536, 1);
				ped::set_ped_combat_attributes(Local_840, 50, 1);
				return true;
			}
		}
		break;

	case 4:
		if (entity::does_entity_exist(Global_88321.f_9[1])) {
			if (!ped::is_ped_dead_or_dying(Global_88321.f_9[1], 1)) {
				entity::set_entity_as_mission_entity(Global_88321.f_9[1], 1, 1);
				Local_854 = Global_88321.f_9[1];
				if (func_325(Local_854)) {
					ped::set_ped_config_flag(Local_854, 170, 0);
					ped::set_ped_flee_attributes(Local_854, 65536, 1);
					ped::set_ped_combat_attributes(Local_854, 50, 1);
					ped::set_blocking_of_non_temporary_events(Local_854, 1);
					entity::set_entity_load_collision_flag(Local_854, 1);
					return true;
				}
			}
			else {
				return true;
			}
		}
		else if (func_144(&Local_854, Local_854.f_5, Local_854.f_1, Local_854.f_4, 1, 0, 1, 1)) {
			if (func_36(Local_868)) {
				ped::set_ped_into_vehicle(Local_854, Local_868, 0);
				ped::set_ped_config_flag(Local_854, 170, 0);
				ped::set_ped_flee_attributes(Local_854, 65536, 1);
				ped::set_ped_combat_attributes(Local_854, 50, 1);
				ped::set_blocking_of_non_temporary_events(Local_854, 1);
				entity::set_entity_load_collision_flag(Local_854, 1);
				return true;
			}
		}
		break;
	}
	return false;
}

// Position - 0x475B
bool func_144(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8,
			  int iParam9) {
	if (!entity::does_entity_exist(*iParam0)) {
		if (func_146(iParam1, "Loading", 0)) {
			*iParam0 = ped::create_ped(26, iParam1, vParam2, fParam5, 1, 1);
			if (func_325(*iParam0)) {
				if (iParam7) {
					entity::freeze_entity_position(*iParam0, 1);
				}
				if (iParam8) {
					ped::set_blocking_of_non_temporary_events(*iParam0, iParam8);
				}
				if (!iParam9) {
					ped::set_ped_can_be_targetted(*iParam0, iParam9);
				}
				if (iParam6) {
					func_145(iParam1, 1);
				}
				return true;
			}
		}
	}
	else if (func_325(*iParam0)) {
		return true;
	}
	return false;
}

// Position - 0x47E5
void func_145(int iParam0, int iParam1) {
	if (iParam1) {
		if (streaming::has_model_loaded(iParam0)) {
			streaming::set_model_as_no_longer_needed(iParam0);
		}
	}
	else {
		streaming::set_model_as_no_longer_needed(iParam0);
	}
}

// Position - 0x480A
bool func_146(int iParam0, char *sParam1, int iParam2) {
	streaming::request_model(iParam0);
	if (!gameplay::is_string_null_or_empty(sParam1) && iParam2 != -1) {
	}
	if (streaming::has_model_loaded(iParam0)) {
		return true;
	}
	return false;
}

// Position - 0x4839
bool func_147(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6) {
	if (!entity::does_entity_exist(*iParam0)) {
		if (func_146(iParam1, "Loading", 0)) {
			*iParam0 = vehicle::create_vehicle(iParam1, vParam2, fParam5, 1, 1);
			if (entity::does_entity_exist(*iParam0)) {
				if (!entity::is_entity_a_mission_entity(*iParam0)) {
					entity::set_entity_as_mission_entity(*iParam0, 1, 0);
				}
				vehicle::set_vehicle_on_ground_properly(*iParam0, 1084227584);
				if (iParam6) {
					func_145(iParam1, 1);
				}
				return true;
			}
		}
	}
	else {
		if (func_36(*iParam0)) {
			entity::set_entity_coords(*iParam0, vParam2, 1, 0, 0, 1);
			entity::set_entity_heading(*iParam0, fParam5);
		}
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
			return true;
		}
		else {
			return true;
		}
	}
	return false;
}

// Position - 0x48EB
int func_148(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
	if (fParam6 < 0f) {
		fParam6 = 0f;
	}
	if (!iParam7) {
		if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
			if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
				if (gameplay::absf(vParam0.z - vParam3.z) <= fParam6) {
					return 1;
				}
			}
		}
	}
	else if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
		if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x4966
void func_149() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2 - 1) {
		func_150(&Local_111[iVar0 /*11*/], iVar0);
		iVar0++;
	}
}

// Position - 0x498E
void func_150(int iParam0, int iParam1) {
	if (func_325(*iParam0)) {
		func_196(iParam0, iParam1, 0);
		if (entity::is_entity_playing_anim(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3)) {
			if (entity::get_entity_anim_current_time(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f) {
				if (func_10(Local_134[iLocal_661 /*25*/].f_17) &&
					entity::is_entity_attached(Local_134[iLocal_661 /*25*/].f_17)) {
					ped::reset_ped_movement_clipset(*iParam0, 1048576000);
					ped::reset_ped_weapon_movement_clipset(*iParam0);
					if (iLocal_661 <= 20 && iLocal_661 != -1) {
						Local_134[iLocal_661 /*25*/].f_18 = 1;
						iParam0->f_9 = 0;
					}
					entity::detach_entity(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
					entity::apply_force_to_entity_center_of_mass(
						Local_134[iLocal_661 /*25*/].f_17, 1, entity::get_entity_forward_vector(*iParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (iParam0->f_5) {
		case 0:
			if (iParam1 == 0) {
				func_193();
				func_192(iParam0);
			}
			func_179(iParam0);
			break;

		case 1: func_152(iParam0); break;
		}
	}
	else {
		if (func_10(Local_134[iLocal_661 /*25*/].f_17)) {
			if (entity::is_entity_attached(Local_134[iLocal_661 /*25*/].f_17)) {
				entity::detach_entity(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
				entity::apply_force_to_entity_center_of_mass(Local_134[iLocal_661 /*25*/].f_17, 1,
															 entity::get_entity_forward_vector(*iParam0), 0, 1, 1, 0);
			}
		}
		func_7(&iParam0->f_4);
		if (entity::does_entity_exist(*iParam0)) {
			if (!func_151(player::player_ped_id(), *iParam0, 150f, 1) && !iLocal_665) {
				func_5(iParam0, 1, 0, 1);
			}
		}
	}
}

// Position - 0x4B0C
bool func_151(int iParam0, int iParam1, float fParam2, int iParam3) {
	return system::vdist2(entity::get_entity_coords(iParam0, iParam3), entity::get_entity_coords(iParam1, iParam3)) <=
		   fParam2 * fParam2;
}

// Position - 0x4B2E
void func_152(var *uParam0) {
	int iVar0;
	int iVar1;

	switch (uParam0->f_6) {
	case 5:
		if (gameplay::get_game_timer() - uParam0->f_1 > uParam0->f_3) {
			if (func_178(*uParam0, 780511057)) {
				ai::clear_ped_tasks(*uParam0);
			}
			ai::task_smart_flee_ped(*uParam0, player::player_ped_id(), 30f, -1, 0, 0);
			uParam0->f_6 = 6;
			uParam0->f_1 = gameplay::get_game_timer();
		}
		break;

	case 21:
		if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
			if (func_171(*uParam0, player::player_ped_id(), 1126825984, 1, 250, 7)) {
				func_170(uParam0, 1);
				return;
			}
		}
		if (gameplay::get_game_timer() - uParam0->f_1 > uParam0->f_3) {
			if (!ped::is_ped_in_any_vehicle(*uParam0, 0)) {
				ai::task_put_ped_directly_into_melee(*uParam0, player::player_ped_id(), 8f, -1f, 10f, 0);
			}
			else {
				ai::open_sequence_task(&iVar0);
				ai::task_leave_any_vehicle(0, 0, 0);
				ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
				ai::close_sequence_task(iVar0);
				ai::task_perform_sequence(*uParam0, iVar0);
				ai::clear_sequence_task(&iVar0);
			}
			if (!ui::does_blip_exist(uParam0->f_4)) {
				uParam0->f_4 = func_167(*uParam0, 1, 145);
			}
			uParam0->f_6 = 22;
			uParam0->f_1 = gameplay::get_game_timer();
		}
		break;

	case 10:
		if (gameplay::get_game_timer() - uParam0->f_1 > uParam0->f_3) {
			if (ped::is_ped_in_any_vehicle(*uParam0, 0)) {
				ped::set_ped_reset_flag(*uParam0, 120, 1);
				uParam0->f_6 = 12;
				uParam0->f_1 = gameplay::get_game_timer();
			}
			else if (!func_178(*uParam0, 474215631)) {
				if (func_178(*uParam0, 780511057)) {
					ai::clear_ped_tasks(*uParam0);
				}
				ai::task_cower(*uParam0, -1);
				uParam0->f_6 = 12;
				uParam0->f_1 = gameplay::get_game_timer();
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - uParam0->f_1 > uParam0->f_3) {
			ai::task_use_mobile_phone(*uParam0, 1, 1);
			ai::task_smart_flee_ped(*uParam0, player::player_ped_id(), 500f, -1, 0, 1);
			uParam0->f_1 = gameplay::get_game_timer();
			uParam0->f_6 = 4;
			uParam0->f_5 = 1;
		}
		break;

	case 11:
		func_166(uParam0);
		if (gameplay::get_game_timer() - uParam0->f_1 > 5000) {
			if (!func_178(*uParam0, 713668775)) {
				if (entity::does_entity_exist(Local_111[func_165(uParam0->f_10) /*11*/])) {
					ai::task_follow_nav_mesh_to_coord(*uParam0, vLocal_667, 1f, -1, 2f, 0, 1193033728);
				}
			}
			uParam0->f_1 = gameplay::get_game_timer();
			uParam0->f_6 = 23;
			uParam0->f_5 = 1;
		}
		break;

	case 18:
		if (!func_178(*uParam0, -2017877118)) {
			ai::open_sequence_task(&iVar1);
			if (func_164(entity::get_entity_coords(*uParam0, 1),
						 entity::get_entity_coords(player::player_ped_id(), 1)) > 1.5f) {
				ai::task_turn_ped_to_face_coord(0, entity::get_entity_coords(player::player_ped_id(), 1), 0);
			}
			ai::task_start_scenario_in_place(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
			ai::close_sequence_task(iVar1);
			ai::task_perform_sequence(*uParam0, iVar1);
			ai::clear_sequence_task(&iVar1);
			uParam0->f_5 = 1;
			uParam0->f_6 = 20;
			uParam0->f_1 = gameplay::get_game_timer();
		}
		break;

	case 19:
		func_166(uParam0);
		if (!func_178(*uParam0, -2017877118)) {
			ai::task_start_scenario_in_place(*uParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
			uParam0->f_5 = 1;
			uParam0->f_6 = 20;
			uParam0->f_1 = gameplay::get_game_timer();
		}
		break;

	case 1:
		if (!ped::is_ped_in_vehicle(*uParam0, iLocal_109, 0)) {
			func_162(uParam0);
		}
		break;

	case 2:
		if (!ped::is_ped_sitting_in_any_vehicle(*uParam0) && gameplay::get_game_timer() - uParam0->f_1 > 3000) {
			func_162(uParam0);
		}
		break;

	case 4:
		if (gameplay::get_game_timer() - uParam0->f_1 > 8000) {
			ai::task_smart_flee_ped(*uParam0, player::player_ped_id(), 500f, -1, 0, 0);
			if (!iLocal_666) {
				if (player::get_player_wanted_level(player::player_id()) == 0) {
					player::set_player_wanted_level(player::player_id(), 2, 0);
					player::set_player_wanted_level_now(player::player_id(), 0);
					iLocal_666 = 1;
				}
			}
			ai::task_use_mobile_phone(*uParam0, 0, 1);
			uParam0->f_1 = gameplay::get_game_timer();
			uParam0->f_6 = 8;
		}
		else if (player::get_player_wanted_level(player::player_id()) > 1) {
			ai::task_use_mobile_phone(*uParam0, 0, 1);
			uParam0->f_1 = gameplay::get_game_timer();
			uParam0->f_6 = 8;
		}
		break;

	case 6:
		if (gameplay::get_game_timer() - uParam0->f_1 > uParam0->f_2) {
			if (!func_151(*uParam0, player::player_ped_id(), 15f, 1)) {
				func_7(&uParam0->f_4);
				uParam0->f_6 = 7;
				uParam0->f_1 = gameplay::get_game_timer();
			}
		}
		break;

	case 7:
		if (ped::is_ped_in_vehicle(*uParam0, iLocal_109, 1)) {
			if (uParam0->f_6 != 4 && uParam0->f_6 != 1) {
				if (func_160()) {
					if (func_325(*uParam0)) {
						ai::clear_ped_tasks(*uParam0);
						ai::task_smart_flee_ped(*uParam0, player::player_ped_id(), 500f, -1, 0, 1);
						uParam0->f_6 = 1;
					}
				}
			}
			if (!func_151(*uParam0, player::player_ped_id(), 120f, 1)) {
				func_5(uParam0, 1, 0, 1);
			}
		}
		else {
			func_162(uParam0);
		}
		break;

	case 8:
		if (!func_151(*uParam0, player::player_ped_id(), 120f, 1)) {
			func_5(uParam0, 1, 0, 1);
		}
		break;

	case 9:
		if (ped::is_ped_being_jacked(*uParam0)) {
			func_170(uParam0, 1);
			return;
		}
		if (gameplay::get_game_timer() - uParam0->f_1 > uParam0->f_2 || !func_178(*uParam0, 2104565373)) {
			func_157(uParam0);
		}
		break;

	case 12:
		if (gameplay::get_game_timer() - uParam0->f_1 >= uParam0->f_2) {
			ai::task_smart_flee_ped(*uParam0, player::player_ped_id(), 500f, -1, 0, 1);
			uParam0->f_6 = 5;
		}
		else {
			ped::set_ped_reset_flag(*uParam0, 120, 1);
		}
		break;

	case 13:
		if (gameplay::get_game_timer() - uParam0->f_1 >= uParam0->f_2) {
			if (!func_151(*uParam0, player::player_ped_id(), 15f, 1)) {
				func_157(uParam0);
				uParam0->f_1 = gameplay::get_game_timer();
			}
			else if (func_171(Local_111[func_165(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7)) {
				func_170(uParam0, 0);
			}
			else {
				func_156(uParam0);
				uParam0->f_1 = gameplay::get_game_timer();
			}
		}
		break;

	case 15:
		if (gameplay::get_game_timer() - uParam0->f_1 >= uParam0->f_2) {
			if (!func_151(*uParam0, player::player_ped_id(), 15f, 1)) {
				func_157(uParam0);
				uParam0->f_1 = gameplay::get_game_timer();
			}
			else if (func_171(Local_111[func_165(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7)) {
				func_170(uParam0, 0);
			}
			else {
				func_156(uParam0);
				uParam0->f_1 = gameplay::get_game_timer();
			}
		}
		break;

	case 16:
		if (ped::is_ped_being_jacked(*uParam0)) {
			func_170(uParam0, 1);
			return;
		}
		if (gameplay::get_game_timer() - iLocal_670 >= 9000) {
			if (!func_155(uParam0)) {
				func_157(uParam0);
				uParam0->f_1 = gameplay::get_game_timer();
			}
			else {
				uParam0->f_1 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_6 = 16;
			}
		}
		else if (gameplay::get_game_timer() - iLocal_670 >= 5000 && gameplay::get_game_timer() - iLocal_670 <= 5500) {
			if (ped::is_ped_in_any_vehicle(*uParam0, 0)) {
				if (ai::is_driveby_task_underneath_driving_task(*uParam0)) {
					ai::clear_driveby_task_underneath_driving_task(*uParam0);
				}
			}
		}
		break;

	case 14:
		if (gameplay::get_game_timer() - uParam0->f_1 >= uParam0->f_2) {
			if (!func_151(*uParam0, player::player_ped_id(), 15f, 1)) {
				func_157(uParam0);
				uParam0->f_1 = gameplay::get_game_timer();
			}
			else if (func_171(Local_111[func_165(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7)) {
				func_170(uParam0, 0);
			}
			else {
				func_156(uParam0);
				uParam0->f_1 = gameplay::get_game_timer();
			}
		}
		break;

	case 17:
		if (gameplay::get_game_timer() - uParam0->f_1 >= uParam0->f_2) {
			if (!func_151(*uParam0, player::player_ped_id(), 15f, 1)) {
				func_157(uParam0);
				uParam0->f_1 = gameplay::get_game_timer();
			}
			else if (func_171(Local_111[func_165(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7)) {
				func_170(uParam0, 0);
			}
			else {
				func_156(uParam0);
				uParam0->f_1 = gameplay::get_game_timer();
			}
		}
		break;

	case 20:
		if (weapon::is_ped_armed(player::player_ped_id(), 6) &&
			!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (func_171(*uParam0, player::player_ped_id(), 1126825984, 1, 250, 7)) {
				func_170(uParam0, 1);
				return;
			}
		}
		if (gameplay::get_game_timer() - uParam0->f_1 >= 6000) {
			if (!entity::is_entity_in_angled_area(
					*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, 5f, 0f, -2f),
					entity::get_entity_coords(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0)) {
				func_157(uParam0);
			}
			else {
				func_162(uParam0);
				func_162(&Local_111[func_165(uParam0->f_10) /*11*/]);
			}
			uParam0->f_1 = gameplay::get_game_timer();
		}
		func_166(uParam0);
		break;

	case 22:
		if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
			if (func_171(*uParam0, player::player_ped_id(), 1126825984, 1, 250, 7)) {
				func_170(uParam0, 1);
				return;
			}
		}
		if (gameplay::get_game_timer() - uParam0->f_1 >= uParam0->f_2) {
			if (!func_151(*uParam0, player::player_ped_id(), 15f, 1)) {
				func_157(uParam0);
				uParam0->f_1 = gameplay::get_game_timer();
				return;
			}
			else {
				func_156(uParam0);
				uParam0->f_1 = gameplay::get_game_timer();
			}
		}
		break;

	case 23:
		func_196(uParam0, uParam0->f_10, 1);
		func_166(uParam0);
		if (func_101(*uParam0, vLocal_667, 2f)) {
			if (func_153(*uParam0, vLocal_667, 1126825984, 0)) {
				ai::clear_ped_tasks(*uParam0);
				uParam0->f_6 = 19;
				uParam0->f_5 = 1;
				uParam0->f_1 = gameplay::get_game_timer();
			}
		}
		break;
	}
}

// Position - 0x547A
bool func_153(int iParam0, vector3 vParam1, float fParam4, int iParam5) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_154(vParam1 - entity::get_entity_coords(iParam0, 1))};
	if (fParam4 < 0.1f || fParam4 > 360f) {
		return true;
	}
	if (iParam5 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_154(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						  ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_127(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam4 / 2f)) {
		return false;
	}
	return true;
}

// Position - 0x5508
Vector3 func_154(vector3 vParam0) {
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

// Position - 0x5547
bool func_155(var *uParam0) {
	if (entity::is_entity_in_angled_area(
			player::player_ped_id(), entity::get_offset_from_entity_in_world_coords(iLocal_109, 0f, 10f, -2f),
			entity::get_offset_from_entity_in_world_coords(iLocal_109, 0f, 3f, 2f), 5f, 0, 1, 0) &&
		ped::is_ped_stopped(*uParam0)) {
		return true;
	}
	return false;
}

// Position - 0x5589
void func_156(var *uParam0) {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (func_36(iVar0)) {
			if (!vehicle::_0x639431E895B9AA57(*uParam0, iVar0, -1, 0, 0)) {
				uParam0->f_6 = 18;
				uParam0->f_1 = gameplay::get_game_timer();
			}
		}
	}
}

// Position - 0x55CF
void func_157(var *uParam0) {
	ped::set_relationship_between_groups(2, iLocal_80, 1862763509);
	switch (uParam0->f_8) {
	case 4: break;

	case 10: break;

	case 8: func_123(); break;

	case 3:
		if (!func_178(*uParam0, 242628503)) {
			if (iLocal_661 <= 20 && iLocal_661 != -1) {
				Local_134[iLocal_661 /*25*/].f_18 = 1;
			}
			if (!ped::is_ped_in_vehicle(*uParam0, iLocal_109, 0)) {
				if (uParam0->f_10 == 0) {
					ai::task_follow_nav_mesh_to_coord(
						*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, func_131(1)), 1f, -1,
						1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else {
					ai::task_follow_nav_mesh_to_coord(
						*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, func_131(0)), 1f, -1,
						1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
		}
		break;

	case 2:
		if (!ped::is_ped_in_vehicle(*uParam0, iLocal_109, 0)) {
			if (uParam0->f_10 == 0) {
				ai::task_follow_nav_mesh_to_coord(
					*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, func_131(1)), 1f, -1,
					1048576000, 0, 1193033728);
				uParam0->f_7 = 1;
			}
			else {
				ai::task_follow_nav_mesh_to_coord(
					*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, func_131(0)), 1f, -1,
					1048576000, 0, 1193033728);
				uParam0->f_7 = 1;
			}
		}
		break;

	case 9:
		if (!Local_134[iLocal_661 /*25*/].f_18) {
			if (uParam0->f_9 == 1) {
				func_158(uParam0);
			}
			else if (uParam0->f_10 == 0) {
				ai::task_follow_nav_mesh_to_coord(
					*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, func_131(1)), 1f, -1,
					1048576000, 0, 1193033728);
				uParam0->f_7 = 1;
			}
			else {
				ai::task_follow_nav_mesh_to_coord(
					*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, func_131(0)), 1f, -1,
					1048576000, 0, 1193033728);
				uParam0->f_7 = 1;
			}
		}
		else if (!ped::is_ped_in_vehicle(*uParam0, iLocal_109, 0)) {
			if (uParam0->f_10 == 0) {
				ai::task_follow_nav_mesh_to_coord(
					*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, func_131(1)), 1f, -1,
					1048576000, 0, 1193033728);
				uParam0->f_7 = 1;
			}
			else {
				ai::task_follow_nav_mesh_to_coord(
					*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, func_131(0)), 1f, -1,
					1048576000, 0, 1193033728);
				uParam0->f_7 = 1;
			}
		}
		break;

	default: break;
	}
	uParam0->f_1 = gameplay::get_game_timer();
	uParam0->f_5 = 0;
}

// Position - 0x57FA
void func_158(var *uParam0) {
	if (!func_178(*uParam0, -71340211)) {
		if (Local_134[iLocal_661 /*25*/].f_23 != 0) {
			if (func_10(Local_134[iLocal_661 /*25*/].f_17)) {
				ai::task_goto_entity_offset(*uParam0, Local_134[iLocal_661 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else {
			ai::task_follow_nav_mesh_to_coord(
				*uParam0, Local_134[iLocal_661 /*25*/].f_19, 1f, 20000, -1f, 0,
				func_159(Local_134[iLocal_661 /*25*/].f_19, entity::get_entity_coords(*uParam0, 1), 1));
		}
		if (func_36(iLocal_109)) {
			vehicle::set_vehicle_door_open(iLocal_109, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

// Position - 0x58A0
float func_159(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, int iParam6) {
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = Param3 - Param0;
	fVar2 = Param3.f_1 - Param0.f_1;
	if (fVar2 != 0f) {
		fVar0 = gameplay::atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f) {
		fVar0 = -90f;
	}
	else {
		fVar0 = 90f;
	}
	if (iParam6 == 1) {
		fVar0 *= -1f;
		if (fVar0 < 0f) {
			fVar0 += 360f;
		}
	}
	return fVar0;
}

// Position - 0x5905
bool func_160() {
	if (func_36(iLocal_109) && func_325(player::player_ped_id())) {
		if (entity::has_entity_been_damaged_by_entity(iLocal_109, player::player_ped_id(), 1)) {
			entity::clear_entity_last_damage_entity(iLocal_109);
			if (func_161() || entity::get_entity_health(iLocal_109) < 851) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x5953
int func_161() {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5) {
		if (vehicle::is_vehicle_tyre_burst(iLocal_109, iVar0, 0)) {
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3) {
		return 1;
	}
	return 0;
}

// Position - 0x598D
void func_162(int iParam0) {
	if (iParam0->f_6 != 3 && iParam0->f_6 != 4) {
		func_163(iParam0);
		iParam0->f_1 = gameplay::get_game_timer();
		iParam0->f_6 = 3;
		iParam0->f_5 = 1;
	}
}

// Position - 0x59C1
void func_163(var *uParam0) {
	if (uParam0->f_7 == 9) {
		if (uParam0->f_9 >= 2) {
			if (!ped::is_ped_injured(*uParam0)) {
				ped::reset_ped_movement_clipset(*uParam0, 1048576000);
				ped::reset_ped_weapon_movement_clipset(*uParam0);
				ai::task_play_anim(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

// Position - 0x5A17
float func_164(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5) {
	return gameplay::get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

// Position - 0x5A31
int func_165(int iParam0) {
	if (iParam0 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x5A44
void func_166(var *uParam0) {
	if (func_36(iLocal_109) && ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_109, 0) &&
		!ped::is_ped_in_vehicle(*uParam0, iLocal_109, 0)) {
		if (entity::get_entity_speed(iLocal_109) > 0f) {
			uParam0->f_1 = gameplay::get_game_timer();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
	}
}

// Position - 0x5A9E
int func_167(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = func_168(iParam0, !iParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x5AF0
int func_168(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_169(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_169(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_169(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x5B94
var func_169(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x5BAB
void func_170(var *uParam0, int iParam1) {
	func_163(uParam0);
	if (weapon::is_ped_armed(player::player_ped_id(), 6) || iParam1 || uParam0->f_6 == 23) {
		if (!func_151(player::player_ped_id(), *uParam0, 10f, 1)) {
			if (!func_178(*uParam0, 1805844857)) {
				uParam0->f_6 = 5;
				uParam0->f_5 = 1;
				uParam0->f_1 = gameplay::get_game_timer();
			}
		}
		else {
			uParam0->f_6 = 10;
			uParam0->f_5 = 1;
			uParam0->f_1 = gameplay::get_game_timer();
		}
	}
	else if (uParam0->f_5 != 1) {
		if (!func_178(*uParam0, 780511057) && !func_178(*uParam0, -71340211)) {
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
			uParam0->f_1 = gameplay::get_game_timer();
		}
	}
}

// Position - 0x5C67
bool func_171(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_177(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1)) {
		if (iVar4 != -1) {
			func_176(&Local_38[iVar4 /*4*/]);
		}
		return false;
	}
	if (!func_175(iParam0, iParam1, fParam2, iParam3)) {
		return false;
	}
	if (iVar4 == -1) {
		iVar4 = func_174();
		if (iVar4 == -1) {
			return false;
		}
		Local_38[iVar4 /*4*/].f_1 = iParam0;
		Local_38[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = {ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f)};
	iVar0 = func_172(&Local_38[iVar4 /*4*/], vVar1, iParam1, &Local_38[iVar4 /*4*/].f_3, iParam0, iParam5);
	return iVar0 || gameplay::get_game_timer() - Local_38[iVar4 /*4*/].f_3 < iParam4;
}

// Position - 0x5D28
int func_172(int *iParam0, vector3 vParam1, int iParam4, var *uParam5, int iParam6, int iParam7) {
	var uVar0;
	vector3 vVar1;
	var uVar4;
	int iVar7;
	int iVar8;

	iVar7 = 0;
	if (!func_10(iParam4)) {
		*iParam0 = 0;
		return 0;
	}
	if (*iParam0 == 0) {
		vVar1 = {func_173(iParam4, iParam7)};
		*iParam0 =
			worldprobe::start_shape_test_los_probe(vParam1, vVar1 + vVar1 - vParam1 * FtoV(0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = worldprobe::get_shape_test_result(*iParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0) {
		*iParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1) {
		return 0;
	}
	*iParam0 = 0;
	if (entity::is_entity_a_ped(iVar7)) {
		func_10(iVar7);
		if (entity::get_ped_index_from_entity_index(iVar7) == iParam4) {
			if (bLocal_79) {
				graphics::draw_debug_line_with_two_colours(vParam1, entity::get_entity_coords(iParam4, 1), 255, 0, 0,
														   255, 0, 0, 255, 255);
			}
			*uParam5 = gameplay::get_game_timer();
			return 1;
		}
		return 0;
	}
	if (entity::is_entity_a_vehicle(iVar7)) {
		func_10(iVar7);
		if (ped::is_ped_in_any_vehicle(iParam4, 0)) {
			if (entity::get_vehicle_index_from_entity_index(iVar7) == ped::get_vehicle_ped_is_in(iParam4, 0)) {
				if (bLocal_79) {
					graphics::draw_debug_line_with_two_colours(vParam1, entity::get_entity_coords(iParam4, 1), 255, 0,
															   0, 255, 0, 0, 255, 255);
				}
				*uParam5 = gameplay::get_game_timer();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

// Position - 0x5E54
Vector3 func_173(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == 7) {
		iVar0 = gameplay::get_random_int_in_range(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0) {
		return entity::get_entity_coords(iParam0, 1);
	}
	else if (iParam1 == 1) {
		return ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2) {
		return ped::get_ped_bone_coords(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3) {
		return ped::get_ped_bone_coords(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4) {
		return ped::get_ped_bone_coords(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5) {
		return ped::get_ped_bone_coords(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6) {
		return ped::get_ped_bone_coords(iParam0, 36864, 0f, 0f, 0f);
	}
	return entity::get_entity_coords(iParam0, 1);
}

// Position - 0x5F19
int func_174() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_38) {
		if (Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0 && Local_38[iVar0 /*4*/].f_2 == 0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x5F63
bool func_175(int iParam0, int iParam1, float fParam2, int iParam3) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_154(entity::get_entity_coords(iParam1, 1) - entity::get_entity_coords(iParam0, 1))};
	if (fParam2 < 0.1f || fParam2 > 360f) {
		return true;
	}
	if (iParam3 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_154(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						  ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_127(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam2 / 2f)) {
		return false;
	}
	return true;
}

// Position - 0x5FF4
void func_176(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

// Position - 0x600F
int func_177(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_38) {
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x604E
bool func_178(int iParam0, int iParam1) {
	if (func_325(iParam0)) {
		if (ai::get_script_task_status(iParam0, iParam1) == 1 || ai::get_script_task_status(iParam0, iParam1) == 0) {
			return true;
		}
	}
	return false;
}

// Position - 0x6081
void func_179(var *uParam0) {
	float fVar0;

	if (uParam0->f_9 == 0 && uParam0->f_10 == 1) {
	}
	switch (uParam0->f_7) {
	case 1:
		if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_109, 1)) {
			func_170(uParam0, 0);
			return;
		}
		if (uParam0->f_10 == 0) {
			func_190(uParam0, 1);
		}
		else {
			func_190(uParam0, 0);
		}
		break;

	case 2:
		if (ped::is_ped_sitting_in_vehicle(*uParam0, iLocal_109)) {
			if (!func_178(*uParam0, -1794415470)) {
				if (uParam0->f_10 == 0) {
					func_124(0);
				}
				else {
					uParam0->f_7 = 3;
				}
			}
		}
		else if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_109, 1)) {
			func_170(uParam0, 0);
			return;
		}
		break;

	case 3:
		if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_109, 1)) {
			func_170(uParam0, 0);
			return;
		}
		if (bLocal_664) {
			if (iLocal_661 <= 20 && iLocal_661 != -1) {
				if (!Local_134[iLocal_661 /*25*/].f_18) {
					if (func_101(*uParam0, Local_134[iLocal_661 /*25*/], 20f)) {
						if (Local_134[iLocal_661 /*25*/].f_9 && vehicle::is_vehicle_stopped(iLocal_109)) {
							func_189();
						}
					}
				}
			}
			else {
				uParam0->f_7 = 10;
			}
		}
		break;

	case 4:
		if (func_101(*uParam0, Local_134[iLocal_661 /*25*/], 25f)) {
			if (Local_134[iLocal_661 /*25*/].f_9) {
				func_188(uParam0);
			}
			else {
				Local_134[iLocal_661 /*25*/].f_18 = 1;
				func_124(0);
			}
		}
		break;

	case 5:
		if (func_36(iLocal_109)) {
			vehicle::_set_vehicle_halt(iLocal_109, 25f, 10, 0);
			fVar0 = entity::get_entity_speed(iLocal_109);
			if (fVar0 < 8f) {
				func_188(uParam0);
			}
		}
		break;

	case 6:
		if (!func_178(*uParam0, 242628503) && vehicle::is_vehicle_stopped(iLocal_109)) {
			if (bLocal_664) {
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_7 = 7;
			}
			else {
				ai::task_leave_any_vehicle(*uParam0, 0, 0);
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_7 = 8;
			}
		}
		break;

	case 7:
		if (func_325(Local_111[1 /*11*/])) {
			if (ped::is_ped_in_vehicle(Local_111[1 /*11*/], iLocal_109, 0) && Local_111[1 /*11*/].f_7 == 3) {
				func_124(0);
			}
		}
		break;

	case 8:
		if (!ped::is_ped_in_vehicle(*uParam0, iLocal_109, 0)) {
			func_158(uParam0);
		}
		break;

	case 9: func_180(uParam0); break;
	}
}

// Position - 0x62EA
void func_180(var *uParam0) {
	int iVar0;
	int iVar1;

	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0) {
	}
	switch (uParam0->f_9) {
	case 1:
		if (!func_178(*uParam0, -2015108952)) {
			ai::open_sequence_task(&iVar0);
			if (func_164(entity::get_entity_coords(*uParam0, 1), Local_134[iLocal_661 /*25*/].f_19) > 1.5f) {
				ai::task_turn_ped_to_face_coord(0, Local_134[iLocal_661 /*25*/].f_19, 0);
			}
			ai::task_play_anim(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
			ai::close_sequence_task(iVar0);
			ai::task_perform_sequence(*uParam0, iVar0);
			ai::clear_sequence_task(&iVar0);
			uParam0->f_9 = 2;
		}
		else if (func_185(Local_134[iLocal_661 /*25*/].f_19, *uParam0, 1f, 1f, 8f)) {
			func_184(uParam0);
			return;
		}
		ped::set_ped_capsule(*uParam0, 0.2f);
		break;

	case 2:
		if (func_178(*uParam0, 242628503)) {
			if (entity::is_entity_playing_anim(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3)) {
				if (entity::get_entity_anim_current_time(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >=
					0.333f) {
					ped::set_ped_movement_clipset(*uParam0, "missfbi4prepp1_garbageman", 0f);
					ped::set_ped_weapon_movement_clipset(*uParam0, "missfbi4prepp1_garbageman");
					if (func_10(Local_134[iLocal_661 /*25*/].f_17) &&
						!entity::is_entity_attached(Local_134[iLocal_661 /*25*/].f_17)) {
						entity::attach_entity_to_entity(Local_134[iLocal_661 /*25*/].f_17, *uParam0,
														ped::get_ped_bone_index(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f,
														0f, 1, 1, 0, 0, 2, 1);
					}
				}
			}
			if (func_185(Local_134[iLocal_661 /*25*/].f_19, *uParam0, 1f, 1f, 8f)) {
				func_184(uParam0);
				return;
			}
		}
		else if (!func_178(*uParam0, 713668775)) {
			if (func_36(iLocal_109)) {
				ai::task_follow_nav_mesh_to_coord(
					*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, 0f, -4.8f, 0f), 1f, -1, 0.25f,
					0, entity::get_entity_heading(iLocal_109));
			}
			uParam0->f_9 = 3;
		}
		ped::set_ped_capsule(*uParam0, 0.2f);
		break;

	case 3:
		if (func_36(iLocal_109)) {
			if (!func_185(entity::get_offset_from_entity_in_world_coords(iLocal_109, 0f, -5.5f, 0f), iLocal_109, 1.9f,
						  1.9f, 8f)) {
				if (entity::is_entity_at_coord(
						*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, 0f, -5.5f, 0f), 0.9f, 0.9f,
						2f, 0, 1, 0)) {
					if (!func_178(*uParam0, 713668775)) {
						ai::open_sequence_task(&iVar1);
						if (func_164(entity::get_entity_coords(*uParam0, 1), entity::get_entity_coords(iLocal_109, 1)) >
							3f) {
							ai::task_achieve_heading(0, entity::get_entity_heading(iLocal_109), 0);
						}
						ai::task_play_anim(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
						ai::close_sequence_task(iVar1);
						ai::task_perform_sequence(*uParam0, iVar1);
						ai::clear_sequence_task(&iVar1);
						uParam0->f_9 = 4;
					}
				}
				else if (!func_178(*uParam0, 713668775)) {
					ai::task_follow_nav_mesh_to_coord(
						*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, 0f, -4.8f, 0f), 1f, -1,
						0.25f, 0, entity::get_entity_heading(iLocal_109));
				}
			}
			else {
				func_182(uParam0);
			}
		}
		break;

	case 4:
		if (!func_185(entity::get_offset_from_entity_in_world_coords(iLocal_109, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f,
					  8f)) {
			if (func_178(*uParam0, 242628503)) {
				if (entity::is_entity_playing_anim(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3)) {
					if (entity::get_entity_anim_current_time(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >=
						0.391f) {
						if (func_10(Local_134[iLocal_661 /*25*/].f_17)) {
							if (entity::is_entity_attached(Local_134[iLocal_661 /*25*/].f_17)) {
								ped::reset_ped_movement_clipset(*uParam0, 1048576000);
								ped::reset_ped_weapon_movement_clipset(*uParam0);
								entity::detach_entity(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
								object::set_object_physics_params(Local_134[iLocal_661 /*25*/].f_17, 2f, -1f, -1f, -1f,
																  -1f, -1f, -1f, -1f, -1082130432, -1082130432,
																  -1082130432);
								entity::apply_force_to_entity_center_of_mass(
									Local_134[iLocal_661 /*25*/].f_17, 1, entity::get_entity_forward_vector(*uParam0),
									0, 1, 1, 0);
							}
							if (entity::is_entity_touching_entity(Local_134[iLocal_661 /*25*/].f_17, iLocal_109)) {
								func_181(&Local_134[iLocal_661 /*25*/].f_17);
							}
						}
					}
				}
			}
			else {
				uParam0->f_9 = 0;
				if (func_36(iLocal_109)) {
					vehicle::set_vehicle_door_shut(iLocal_109, 5, 0);
					func_181(&Local_134[iLocal_661 /*25*/].f_17);
				}
				func_157(uParam0);
			}
		}
		else {
			func_182(uParam0);
		}
		break;

	case 5: break;
	}
}

// Position - 0x672E
void func_181(int *iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		object::delete_object(iParam0);
	}
}

// Position - 0x6759
void func_182(var *uParam0) {
	int iVar0;
	int iVar1;

	ped::set_relationship_between_groups(5, iLocal_80, 1862763509);
	func_163(uParam0);
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!ped::is_ped_in_any_vehicle(*uParam0, 0)) {
			ai::task_put_ped_directly_into_melee(*uParam0, player::player_ped_id(), 8f, -1f, 10f, 0);
		}
		else {
			ai::open_sequence_task(&iVar0);
			ai::task_leave_any_vehicle(0, 0, 0);
			ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
			ai::close_sequence_task(iVar0);
			ai::task_perform_sequence(*uParam0, iVar0);
			ai::clear_sequence_task(&iVar0);
		}
	}
	else {
		ai::open_sequence_task(&iVar1);
		ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
		ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
		ai::close_sequence_task(iVar1);
		ai::task_perform_sequence(*uParam0, iVar1);
		ai::clear_sequence_task(&iVar1);
	}
	ped::reset_ped_movement_clipset(*uParam0, 1048576000);
	ped::reset_ped_weapon_movement_clipset(*uParam0);
	func_183();
	if (!ui::does_blip_exist(uParam0->f_4)) {
		uParam0->f_4 = func_167(*uParam0, 1, 145);
	}
	uParam0->f_1 = gameplay::get_game_timer();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

// Position - 0x6854
void func_183() {
	Local_82 = 0;
	Local_82.f_26 = 0;
	Local_82.f_18 = 0;
}

// Position - 0x6869
void func_184(var *uParam0) {
	int iVar0;
	int iVar1;

	ped::set_relationship_between_groups(5, iLocal_80, 1862763509);
	func_163(uParam0);
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!ped::is_ped_in_any_vehicle(*uParam0, 0)) {
			ai::task_put_ped_directly_into_melee(*uParam0, player::player_ped_id(), 8f, -1f, 10f, 0);
		}
		else {
			ai::open_sequence_task(&iVar0);
			ai::task_leave_any_vehicle(0, 0, 0);
			ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
			ai::close_sequence_task(iVar0);
			ai::task_perform_sequence(*uParam0, iVar0);
			ai::clear_sequence_task(&iVar0);
		}
	}
	else {
		ai::open_sequence_task(&iVar1);
		ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
		ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
		ai::close_sequence_task(iVar1);
		ai::task_perform_sequence(*uParam0, iVar1);
		ai::clear_sequence_task(&iVar1);
	}
	ped::reset_ped_movement_clipset(*uParam0, 1048576000);
	ped::reset_ped_weapon_movement_clipset(*uParam0);
	func_183();
	if (!ui::does_blip_exist(uParam0->f_4)) {
		uParam0->f_4 = func_167(*uParam0, 1, 145);
	}
	uParam0->f_1 = gameplay::get_game_timer();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

// Position - 0x6964
bool func_185(vector3 vParam0, int iParam3, vector3 vParam4) {
	Local_82.f_2 = {vParam0};
	Local_82.f_8 = {vParam4};
	func_186(&Local_82, iParam3);
	if (Local_82.f_26) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (entity::is_entity_a_vehicle(Local_82.f_18)) {
				if (func_10(Local_82.f_18)) {
					if (entity::get_vehicle_index_from_entity_index(Local_82.f_18) ==
						ped::get_vehicle_ped_is_in(player::player_ped_id(), 1)) {
						return true;
					}
				}
			}
		}
		else if (entity::is_entity_a_ped(Local_82.f_18)) {
			if (func_10(Local_82.f_18)) {
				if (entity::get_ped_index_from_entity_index(Local_82.f_18) == player::player_ped_id()) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x69F6
void func_186(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = worldprobe::get_shape_test_result(*uParam0, &iVar0, &uParam0->f_20, &uParam0->f_23, &uParam0->f_18);
	uParam0->f_19 = 2 == iVar1;
	if (uParam0->f_19) {
		if (0 == iVar0) {
			uParam0->f_26 = 0;
		}
		else {
			uParam0->f_26 = 1;
		}
	}
	if (iVar1 != 1) {
		func_187(uParam0, iParam1);
	}
}

// Position - 0x6A45
void func_187(var *uParam0, int iParam1) {
	switch (uParam0->f_1) {
	case 0: break;

	case 1: *uParam0 = worldprobe::start_shape_test_los_probe(uParam0->f_2, uParam0->f_5, 511, iParam1, 7); break;

	case 2: *uParam0 = worldprobe::start_shape_test_bound(uParam0->f_17, 511, 4); break;

	case 3: *uParam0 = worldprobe::start_shape_test_bounding_box(uParam0->f_17, 511, 4); break;

	case 4:
		*uParam0 =
			worldprobe::start_shape_test_box(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
		break;

	case 5:
		*uParam0 = worldprobe::start_shape_test_capsule(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
		break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

// Position - 0x6B0A
void func_188(var *uParam0) {
	int iVar0;

	if (func_36(iLocal_109)) {
		ai::open_sequence_task(&iVar0);
		ai::task_vehicle_drive_to_coord(0, iLocal_109, Local_134[iLocal_661 /*25*/].f_3, 8f, 0, joaat("trash"), 786469,
										10f, 15f);
		ai::task_vehicle_park(0, iLocal_109, Local_134[iLocal_661 /*25*/].f_3, Local_134[iLocal_661 /*25*/].f_8,
							  Local_134[iLocal_661 /*25*/].f_10, 5f, 1);
		ai::close_sequence_task(iVar0);
		ai::task_perform_sequence(*uParam0, iVar0);
		ai::clear_sequence_task(&iVar0);
		uParam0->f_7 = 6;
	}
}

// Position - 0x6B8C
void func_189() { func_158(&Local_111[1 /*11*/]); }

// Position - 0x6B9D
void func_190(var *uParam0, int iParam1) {
	int iVar0;

	if (func_185(entity::get_offset_from_entity_in_world_coords(iLocal_109, func_131(iParam1)), iLocal_109, 1.9f, 1.9f,
				 8f)) {
		if (entity::is_entity_in_angled_area(
				*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, 5f, 0f, -2f),
				entity::get_entity_coords(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0) &&
			entity::is_entity_in_angled_area(
				player::player_ped_id(), entity::get_offset_from_entity_in_world_coords(iLocal_109, 5f, 0f, -2f),
				entity::get_entity_coords(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0)) {
			func_191(uParam0);
		}
		else if (!func_178(*uParam0, 1227113341) &&
				 entity::is_entity_in_angled_area(
					 player::player_ped_id(), entity::get_offset_from_entity_in_world_coords(iLocal_109, 5f, 0f, -2f),
					 entity::get_entity_coords(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0)) {
			ai::clear_ped_tasks(*uParam0);
			ai::task_go_to_entity(*uParam0, player::player_ped_id(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_101(*uParam0, entity::get_offset_from_entity_in_world_coords(iLocal_109, func_131(iParam1)), 5f)) {
		iVar0 = -1;
		if (!iParam1) {
			iVar0 = 0;
		}
		ai::task_enter_vehicle(*uParam0, iLocal_109, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

// Position - 0x6CBE
void func_191(var *uParam0) {
	int iVar0;
	int iVar1;

	ped::set_relationship_between_groups(5, iLocal_80, 1862763509);
	func_163(uParam0);
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!ped::is_ped_in_any_vehicle(*uParam0, 0)) {
			ai::task_put_ped_directly_into_melee(*uParam0, player::player_ped_id(), 8f, -1f, 10f, 0);
		}
		else {
			ai::open_sequence_task(&iVar0);
			ai::task_leave_any_vehicle(0, 0, 0);
			ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
			ai::close_sequence_task(iVar0);
			ai::task_perform_sequence(*uParam0, iVar0);
			ai::clear_sequence_task(&iVar0);
		}
	}
	else {
		ai::open_sequence_task(&iVar1);
		ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
		ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
		ai::close_sequence_task(iVar1);
		ai::task_perform_sequence(*uParam0, iVar1);
		ai::clear_sequence_task(&iVar1);
	}
	ped::reset_ped_movement_clipset(*uParam0, 1048576000);
	ped::reset_ped_weapon_movement_clipset(*uParam0);
	func_183();
	uParam0->f_1 = gameplay::get_game_timer();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

// Position - 0x6D9F
void func_192(var *uParam0) {
	if (uParam0->f_5 != 1) {
		if (func_36(iLocal_109) && ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (!func_178(*uParam0, 2104565373) && ped::is_ped_in_vehicle(*uParam0, iLocal_109, 0)) {
				if (func_151(player::player_ped_id(), iLocal_109, 10f, 1)) {
					if (entity::is_entity_touching_entity(iLocal_109, player::player_ped_id())) {
						ai::task_drive_by(*uParam0, player::player_ped_id(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
						uParam0->f_1 = gameplay::get_game_timer();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

// Position - 0x6E2F
void func_193() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= iLocal_81 - 1) {
		if (Local_134[iVar0 /*25*/].f_23 != 0) {
			if (Local_134[iVar0 /*25*/].f_24) {
				if (iVar0 != iLocal_661 && func_10(Local_134[iVar0 /*25*/].f_17) &&
					func_195(Local_134[iVar0 /*25*/].f_17, player::player_ped_id(), 1) > 200f) {
					object::delete_object(&Local_134[iVar0 /*25*/].f_17);
					Local_134[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_134[iVar0 /*25*/].f_23 != 0) {
				if (func_101(player::player_ped_id(), Local_134[iVar0 /*25*/], 100f) ||
					func_101(Local_111[0 /*11*/], Local_134[iVar0 /*25*/], 120f)) {
					Local_134[iVar0 /*25*/].f_24 =
						func_194(&Local_134[iVar0 /*25*/].f_17, Local_134[iVar0 /*25*/].f_23,
								 Local_134[iVar0 /*25*/].f_19, Local_134[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x6F20
int func_194(var *uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6) {
	if (!entity::does_entity_exist(*uParam0)) {
		if (func_146(iParam1, "Loading", 0)) {
			*uParam0 = object::create_object(iParam1, vParam2, 1, 1, 0);
			if (entity::does_entity_exist(*uParam0)) {
				entity::set_entity_heading(*uParam0, fParam5);
				rope::activate_physics(*uParam0);
				if (iParam6) {
					func_145(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0)) {
		return 1;
	}
	return 0;
}

// Position - 0x6F8D
float func_195(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x6FEB
void func_196(var *uParam0, int iParam1, int iParam2) {
	if (uParam0->f_5 != 1 || iParam2) {
		if (!func_325(Local_111[func_165(iParam1) /*11*/])) {
			if (!iLocal_665) {
				if (entity::does_entity_exist(Local_111[func_165(iParam1) /*11*/])) {
					if (func_175(*uParam0, Local_111[func_165(iParam1) /*11*/], 140f, 0) ||
						func_151(Local_111[func_165(iParam1) /*11*/], *uParam0, 3f, 1)) {
						func_170(uParam0, 0);
						iLocal_665 = 1;
						return;
					}
					else {
						vLocal_667 = {entity::get_entity_coords(Local_111[func_165(iParam1) /*11*/], 1)};
						uParam0->f_1 = gameplay::get_game_timer();
						uParam0->f_8 = uParam0->f_7;
						uParam0->f_5 = 1;
						uParam0->f_6 = 11;
					}
				}
				else {
					func_170(uParam0, 0);
				}
			}
		}
		else if (Local_111[func_165(iParam1) /*11*/].f_6 == 22) {
			if (func_175(*uParam0, Local_111[func_165(iParam1) /*11*/], 140f, 0) &&
				func_151(Local_111[func_165(iParam1) /*11*/], player::player_ped_id(), 15f, 1)) {
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
			}
		}
		else if (Local_111[func_165(iParam1) /*11*/].f_6 == 5 || Local_111[func_165(iParam1) /*11*/].f_6 == 7) {
			if (func_151(Local_111[func_165(iParam1) /*11*/], *uParam0, 10f, 1)) {
				func_170(uParam0, 0);
			}
		}
		if (func_207(*uParam0)) {
			func_163(uParam0);
			uParam0->f_1 = gameplay::get_game_timer();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
		if (uParam0->f_10 == 0 && uParam0->f_7 == 4) {
			if (func_155(uParam0)) {
				if (ped::is_ped_in_vehicle(*uParam0, iLocal_109, 0)) {
					ai::task_drive_by(*uParam0, player::player_ped_id(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
					audio::_0x9D3AF56E94C9AE98(iLocal_109, 2000f);
					iLocal_670 = gameplay::get_game_timer();
					uParam0->f_1 = gameplay::get_game_timer();
					uParam0->f_6 = 16;
					uParam0->f_5 = 1;
				}
			}
		}
		if (func_198(*uParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_197(uParam0)) {
			if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
				if (func_36(iLocal_109)) {
					if (ped::is_ped_in_vehicle(*uParam0, iLocal_109, 0)) {
						if (entity::get_entity_speed(iLocal_109) > 5f) {
							if (iParam1 == 0) {
								ai::task_vehicle_mission_ped_target(*uParam0, iLocal_109, player::player_ped_id(), 8,
																	30f, 786469, 300f, 2f, 1);
								uParam0->f_6 = 7;
								ai::task_cower(Local_111[func_165(iParam1) /*11*/], -1);
								Local_111[func_165(iParam1) /*11*/].f_6 = 10;
								Local_111[func_165(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = gameplay::get_game_timer();
								Local_111[func_165(iParam1) /*11*/].f_1 = gameplay::get_game_timer();
							}
							else {
								ai::task_cower(*uParam0, -1);
								uParam0->f_6 = 12;
								ai::task_vehicle_mission_ped_target(Local_111[func_165(iParam1) /*11*/], iLocal_109,
																	player::player_ped_id(), 8, 30f, 786469, 300f, 2f,
																	1);
								Local_111[func_165(iParam1) /*11*/].f_6 = 5;
								Local_111[func_165(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = gameplay::get_game_timer();
								Local_111[func_165(iParam1) /*11*/].f_1 = gameplay::get_game_timer();
							}
						}
						else {
							func_170(uParam0, 0);
							if (entity::does_entity_exist(Local_111[func_165(iParam1) /*11*/])) {
								if (func_175(Local_111[func_165(iParam1) /*11*/], player::player_ped_id(), 1126825984,
											 0)) {
									func_170(&Local_111[func_165(iParam1) /*11*/], 0);
								}
							}
						}
						entity::clear_entity_last_damage_entity(*uParam0);
					}
					else {
						func_170(uParam0, 0);
						if (entity::does_entity_exist(Local_111[func_165(iParam1) /*11*/])) {
							if (func_171(Local_111[func_165(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7)) {
								func_170(&Local_111[func_165(iParam1) /*11*/], 0);
							}
						}
					}
				}
			}
			else {
				uParam0->f_1 = gameplay::get_game_timer();
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
				entity::clear_entity_last_damage_entity(*uParam0);
				if (func_171(Local_111[func_165(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7)) {
					Local_111[func_165(iParam1) /*11*/].f_1 = gameplay::get_game_timer();
					Local_111[func_165(iParam1) /*11*/].f_8 = uParam0->f_7;
					Local_111[func_165(iParam1) /*11*/].f_5 = 1;
					Local_111[func_165(iParam1) /*11*/].f_6 = 21;
					entity::clear_entity_last_damage_entity(Local_111[func_165(iParam1) /*11*/]);
				}
			}
			uParam0->f_5 = 1;
		}
		else if (ped::is_ped_being_jacked(*uParam0)) {
			func_163(uParam0);
			ai::task_smart_flee_ped(*uParam0, player::player_ped_id(), 500f, -1, 0, 1);
			uParam0->f_6 = 2;
			uParam0->f_5 = 1;
			uParam0->f_1 = gameplay::get_game_timer();
		}
		if (ped::is_ped_ragdoll(*uParam0)) {
			if (func_10(Local_134[iLocal_661 /*25*/].f_17)) {
				if (entity::is_entity_attached(Local_134[iLocal_661 /*25*/].f_17)) {
					entity::detach_entity(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
					entity::apply_force_to_entity_center_of_mass(
						Local_134[iLocal_661 /*25*/].f_17, 1, entity::get_entity_forward_vector(*uParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (uParam0->f_5 != 1) {
		if (func_325(Local_111[func_165(iParam1) /*11*/])) {
			if (ped::is_ped_being_jacked(Local_111[func_165(iParam1) /*11*/])) {
				func_163(uParam0);
				ai::task_smart_flee_ped(*uParam0, player::player_ped_id(), 120f, -1, 0, 0);
				uParam0->f_1 = gameplay::get_game_timer();
				uParam0->f_6 = 7;
				uParam0->f_5 = 1;
			}
		}
	}
}

// Position - 0x7513
int func_197(var *uParam0) {
	if (entity::is_entity_at_coord(player::player_ped_id(),
								   entity::get_offset_from_entity_in_world_coords(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0,
								   1, 0) &&
		!weapon::is_ped_armed(player::player_ped_id(), 6) && ped::get_ped_stealth_movement(player::player_ped_id())) {
		return 1;
	}
	return 0;
}

// Position - 0x755B
int func_198(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6,
			 int iParam7) {
	vector3 vVar0;

	if (func_10(player::player_ped_id()) && func_10(iParam0)) {
		if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
			return 1;
		}
		if (func_203(iParam0, iParam1, iParam5, iParam6, iParam7)) {
			return 1;
		}
		if (!weapon::is_ped_armed(player::player_ped_id(), 6)) {
			if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
				vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1) - entity::get_entity_coords(iParam0, 1)};
				if (vVar0.x * vVar0.x + vVar0.y * vVar0.y + vVar0.z * vVar0.z <= 5f) {
					return func_202(player::player_ped_id(), iParam0, fParam2);
				}
			}
		}
		if (iParam4) {
			return 0;
		}
		else if (func_199(iParam0, fParam3)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x7616
bool func_199(int iParam0, float fParam1) {
	float fVar0;

	if (func_10(player::player_ped_id()) && func_10(iParam0)) {
		if (func_201(iParam0) || player::is_player_targetting_entity(player::player_id(), iParam0)) {
			if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
				fVar0 = 40f;
			}
			else {
				fVar0 = 3f;
			}
			if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0)) {
				if (func_200(iParam0, fParam1)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x768C
bool func_200(int iParam0, float fParam1) { return func_171(iParam0, player::player_ped_id(), fParam1, 1, 250, 7); }

// Position - 0x76A4
int func_201(int iParam0) {
	if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) &&
		weapon::is_ped_armed(player::player_ped_id(), 6)) {
		return 1;
	}
	return 0;
}

// Position - 0x76CC
bool func_202(int iParam0, int iParam1, float fParam2) {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {entity::get_entity_forward_vector(iParam0)};
	vVar3 = {entity::get_entity_coords(iParam1, 1) - entity::get_entity_coords(iParam0, 1)};
	return (vVar0.x * vVar3.x + vVar0.y * vVar3.y) / system::vdist(vVar3, 0f, 0f, 0f) > system::cos(fParam2);
}

// Position - 0x7713
bool func_203(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) {
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 8f;
	fVar1 = 15f;
	if (iParam1 == 0) {
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2) {
		fVar0 = 2f;
	}
	if (func_10(player::player_ped_id()) && func_10(iParam0)) {
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan")) {
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2) {
			if (func_206(iParam0, iParam1, fVar0, fVar1)) {
				return true;
			}
			if (func_204(iParam0, fVar1, bParam3, bParam4)) {
				return true;
			}
		}
		else {
			if (weapon::is_ped_current_weapon_silenced(player::player_ped_id())) {
				if (ped::is_ped_shooting(player::player_ped_id())) {
					if (gameplay::is_bullet_in_area(entity::get_entity_coords(iParam0, 1), fVar0, 1)) {
						return true;
					}
				}
			}
			else {
				if (iParam1) {
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_206(iParam0, iParam1, fVar0, fVar1)) {
					return true;
				}
			}
			if (func_204(iParam0, fVar1, bParam3, bParam4)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x780E
bool func_204(int iParam0, float fParam1, bool bParam2, bool bParam3) {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {entity::get_entity_coords(iParam0, 1)};
	vVar3 = {vVar0};
	vVar0.x -= fParam1;
	vVar0.y -= fParam1;
	vVar0.z -= fParam1;
	vVar3.x += fParam1;
	vVar3.y += fParam1;
	vVar3.z += fParam1;
	if (bParam2) {
		if (gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_molotov"), fParam1, 1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_smokegrenade"), fParam1,
										  1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1)) {
			if (bParam3) {
				if (func_205(iParam0, fParam1)) {
					return true;
				}
				else {
					return false;
				}
			}
			return true;
		}
	}
	else {
		if (bParam3) {
			if (func_205(iParam0, fParam1)) {
				return true;
			}
			else {
				return false;
			}
		}
		if (gameplay::is_projectile_in_area(vVar0, vVar3, 1)) {
			return true;
		}
	}
	return false;
}

// Position - 0x791A
bool func_205(int iParam0, float fParam1) {
	var uVar0;
	vector3 vVar1;

	if (gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0)) {
		if (func_153(iParam0, vVar1, 90f, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x79AF
bool func_206(int iParam0, int iParam1, float fParam2, float fParam3) {
	if (iParam1) {
		if (ped::is_ped_shooting(player::player_ped_id())) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0)) {
				return true;
			}
		}
	}
	if (gameplay::is_bullet_in_area(entity::get_entity_coords(iParam0, 1), fParam2, 1)) {
		return true;
	}
	return false;
}

// Position - 0x79F7
bool func_207(int iParam0) {
	if (func_151(iParam0, player::player_ped_id(), 6f, 1)) {
		if (!ped::is_ped_in_any_vehicle(iParam0, 0)) {
			if (entity::is_entity_touching_entity(iParam0, player::player_ped_id())) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x7A2B
void func_208() {
	if (func_36(Local_868)) {
		if (func_151(player::player_ped_id(), Local_868, 100f, 1) && !iLocal_837) {
			vehicle::request_vehicle_asset(joaat("trash"), 3);
			if (!vehicle::has_vehicle_asset_loaded(joaat("trash"))) {
				iLocal_837 = 1;
			}
		}
		else if (!func_151(player::player_ped_id(), Local_868, 120f, 1) && iLocal_837) {
			vehicle::remove_vehicle_asset(joaat("trash"));
			iLocal_837 = 0;
		}
	}
}

// Position - 0x7AA2
void func_209(int *iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4, vector3 vParam5, int iParam8,
			  int iParam9, float fParam10) {
	if (func_36(*iParam0)) {
		switch (*iParam2) {
		case 0:
			if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
				func_7(iParam3);
				if (func_100(func_108(func_76()), 0, 0)) {
					ui::clear_this_print(func_108(func_76()));
				}
				if (*iParam0 == iParam8) {
					*iParam2 = 1;
				}
				else {
					*iParam2 = 2;
				}
			}
			else if (func_214(*iParam0) || func_213(*iParam0)) {
				func_7(iParam3);
				if (func_100(func_108(func_76()), 0, 0)) {
					ui::clear_this_print(func_108(func_76()));
				}
				*iParam2 = 3;
			}
			else {
				if (func_100(func_109(func_76(), iParam9), 0, 0)) {
					ui::clear_this_print(func_109(func_76(), iParam9));
				}
				if (func_76() != 33) {
					func_211(iParam0);
				}
				else {
					func_210(iParam0, iParam1);
				}
			}
			break;

		case 2:
		case 1:
			if (!ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0) && !func_214(*iParam0) &&
				!func_213(*iParam0)) {
				func_7(iParam4);
				if (!entity::is_entity_at_coord(*iParam0, vParam5, fParam10, fParam10, 2f, 0, 1, 2)) {
					func_119(iParam3, *iParam0, 1);
				}
				*iParam2 = 0;
			}
			break;

		case 3:
			if (!func_214(*iParam0) && !func_213(*iParam0)) {
				func_7(iParam4);
				if (!entity::is_entity_at_coord(*iParam0, vParam5, fParam10, fParam10, 2f, 0, 1, 2)) {
					func_119(iParam3, *iParam0, 1);
				}
				*iParam2 = 0;
			}
			break;
		}
	}
	else if (func_76() != 33) {
		func_211(iParam0);
	}
	else {
		func_210(iParam0, iParam1);
	}
}

// Position - 0x7C56
void func_210(int *iParam0, var *uParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!iLocal_28) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (iVar0 != *iParam0) {
				if (func_36(iVar0)) {
					iVar1 = entity::get_entity_model(iVar0);
					if (iVar1 == joaat("trash")) {
						*uParam1 = *iParam0;
						func_6(iParam0);
						*iParam0 = iVar0;
						func_35(*iParam0, 1);
						func_35(*uParam1, 3);
						if (!entity::is_entity_a_mission_entity(*iParam0)) {
							entity::set_entity_as_mission_entity(*iParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck")) {
						iVar2 = vehicle::get_entity_attached_to_tow_truck(
							ped::get_vehicle_ped_is_in(player::player_ped_id(), 0));
						if (func_10(iVar2)) {
							iVar0 = entity::get_vehicle_index_from_entity_index(iVar2);
							if (entity::get_entity_model(iVar0) == joaat("trash")) {
								*uParam1 = *iParam0;
								func_6(iParam0);
								*iParam0 = iVar0;
								func_35(*iParam0, 1);
								func_35(*uParam1, 3);
								if (!entity::is_entity_a_mission_entity(*iParam0)) {
									entity::set_entity_as_mission_entity(*iParam0, 1, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x7D43
void func_211(int *iParam0) {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (iVar0 != *iParam0) {
			if (func_36(iVar0)) {
				if (entity::get_entity_model(iVar0) == func_212(func_76())) {
					func_6(iParam0);
					*iParam0 = iVar0;
					func_35(*iParam0, 1);
					entity::set_entity_as_mission_entity(*iParam0, 1, 1);
				}
			}
		}
	}
}

// Position - 0x7DA0
int func_212(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 33: iVar0 = joaat("trash"); break;

	case 34: iVar0 = joaat("towtruck"); break;

	case 78: iVar0 = 0; break;

	case 80:
	case 81:
	case 82: iVar0 = joaat("gauntlet"); break;
	}
	return iVar0;
}

// Position - 0x7DF9
int func_213(int iParam0) {
	int iVar0;
	int iVar1;

	if (func_325(player::player_ped_id()) && ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
		func_36(iParam0)) {
		iVar0 = player::get_players_last_vehicle();
		if (func_36(iVar0)) {
			iVar1 = entity::get_entity_model(iVar0);
			if (iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2") || iVar1 == joaat("cargobob3")) {
				if (vehicle::does_cargobob_have_pick_up_rope(iVar0)) {
					if (vehicle::is_vehicle_attached_to_cargobob(iVar0, iParam0)) {
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x7E7C
int func_214(int iParam0) {
	int iVar0;
	int iVar1;

	if (func_325(player::player_ped_id()) && ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
		func_36(iParam0)) {
		iVar0 = player::get_players_last_vehicle();
		if (func_36(iVar0)) {
			iVar1 = entity::get_entity_model(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2")) {
				if (vehicle::is_vehicle_attached_to_tow_truck(iVar0, iParam0)) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x7EE8
void func_215() {
	func_209(&iLocal_874, &iLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, vLocal_827, Local_868, 0, 1090519040);
	func_149();
	func_232();
	func_208();
	switch (iLocal_684) {
	case 0:
		if (func_116(iLocal_683, iLocal_28)) {
			if (player::get_player_wanted_level(player::player_id()) == 0 && !func_231()) {
				func_111(&iLocal_821, vLocal_827, 1);
				func_115("PRA_TAKBACK", &iLocal_820);
			}
			iLocal_684 = 1;
		}
		break;

	case 1:
		func_114(&iLocal_821, vLocal_827, &iLocal_685, iLocal_686, &iLocal_820, &iLocal_838);
		func_221();
		if (func_219(iLocal_874, vLocal_827, &iLocal_821, iLocal_685, iLocal_686, &iLocal_820, &iLocal_839, 0, 0,
					 1086324736)) {
			unk1::_0x293220DA1B46CEBC(8f, 5f, 4);
			iLocal_684 = 2;
		}
		break;

	case 2:
		func_216();
		func_7(&iLocal_821);
		func_7(&iLocal_822);
		if (func_110(1077936128, 1)) {
			func_104(0);
		}
		break;

	case 3:
		if (func_36(iLocal_874)) {
			if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_874, 0)) {
				ped::set_ped_into_vehicle(player::player_ped_id(), iLocal_874, -1);
			}
			else {
				func_103(iLocal_874, vLocal_827, 146.5443f, 0, 1);
				func_39(1, 1, 1);
				iLocal_684 = 1;
			}
		}
		break;
	}
}

// Position - 0x8044
void func_216() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = func_78(iVar0);
		if (!ped::is_ped_injured(iVar1)) {
			if (func_218(iVar1)) {
				func_217(iVar1);
			}
		}
		iVar0++;
	}
}

// Position - 0x8080
int func_217(int iParam0) {
	int iVar0;

	return 0;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_29(iParam0);
		if (iVar0 > 3) {
			return 0;
		}
		if (func_78(iVar0) != iParam0) {
			return 0;
		}
		if (!gameplay::is_bit_set(Global_87678, iVar0)) {
			return 0;
		}
		gameplay::clear_bit(&Global_87678, iVar0);
		return 1;
	}
	return 0;
}

// Position - 0x80D8
bool func_218(int iParam0) {
	int iVar0;

	return false;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_29(iParam0);
		if (iVar0 > 3) {
			return false;
		}
		if (func_78(iVar0) != iParam0) {
			return false;
		}
		if (gameplay::is_bit_set(Global_87678, iVar0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x8121
bool func_219(int iParam0, vector3 vParam1, int *iParam4, int iParam5, int iParam6, int *iParam7, int *iParam8,
			  int iParam9, int iParam10, float fParam11) {
	if (iParam6 == 1 || iParam6 == 2 || iParam6 == 3) {
		if (iParam5 == 0) {
			func_111(iParam4, vParam1, 1);
			if (!iParam10) {
				if (func_36(iParam0)) {
					if (entity::is_entity_at_coord(iParam0, vParam1, fParam11, fParam11, 2f, 1, 1, 0)) {
						return true;
					}
				}
			}
			else if (entity::is_entity_at_coord(player::player_ped_id(), vParam1, fParam11, fParam11, 2f, 1, 1, 2)) {
				return true;
			}
			if (func_100(func_108(func_76()), 0, 0)) {
				ui::clear_this_print(func_108(func_76()));
			}
			if (!func_220()) {
				func_115(func_109(func_76(), iParam9), iParam7);
			}
		}
	}
	else if (iParam5 == 0) {
		if (!*iParam8) {
			if (func_100(func_109(func_76(), 0), 0, 0)) {
				ui::clear_this_print(func_109(func_76(), 0));
			}
			func_99(func_108(func_76()), 7500, 0);
			*iParam8 = 1;
		}
	}
	return false;
}

// Position - 0x8214
bool func_220() { return Global_91543.f_303 > 0; }

// Position - 0x8225
void func_221() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar2 = func_78(iVar0);
		if (!ped::is_ped_injured(iVar2)) {
			if (func_77(iVar2, 0)) {
				if (!iVar1) {
					if (func_151(player::player_ped_id(), iVar2, 5f, 1)) {
						if (!func_231()) {
							func_226(iVar0);
							iVar1 = 1;
						}
					}
				}
				if (!iLocal_1048[iVar0]) {
					if (iVar0 == 0) {
						func_92(&uLocal_879, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1) {
						func_92(&uLocal_879, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2) {
						func_92(&uLocal_879, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_1048[iVar0] = 1;
				}
			}
			if (!func_218(iVar2)) {
				if (func_77(iVar2, 0)) {
					if (func_225(iVar2) || func_223(iVar2)) {
						if (func_222(iVar2, 0)) {
							entity::set_entity_as_mission_entity(iVar2, 1, 1);
							ped::set_blocking_of_non_temporary_events(iVar2, 1);
							ai::clear_ped_tasks(iVar2);
						}
					}
				}
			}
			else if (entity::does_entity_belong_to_this_script(iVar2, 1)) {
				if (func_225(iVar2)) {
					if (ai::get_script_task_status(iVar2, -1273030092) != 1 &&
						ai::get_script_task_status(iVar2, -1273030092) != 0) {
						if (pathfind::_0xF7B79A50B905A30D(623.3781f, -172.26f, 1700.732f, -2115.843f)) {
							ai::task_vehicle_drive_to_coord(iVar2, ped::get_vehicle_ped_is_in(iVar2, 0), vLocal_827,
															20f, 0, 0, 34340901, 2f, 10f);
						}
						else {
							pathfind::_0x07FB139B592FA687(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_223(iVar2)) {
					if (func_36(Local_868)) {
						if (!func_151(iVar2, Local_868, 17f, 1)) {
							if (ai::get_script_task_status(iVar2, -1273030092) != 1 &&
								ai::get_script_task_status(iVar2, -1273030092) != 0) {
								ai::task_vehicle_mission(iVar2, ped::get_vehicle_ped_is_in(iVar2, 0), Local_868, 3, 20f,
														 786468, 2f, 0.5f, 1);
							}
						}
					}
				}
				else {
					func_217(iVar2);
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x8432
bool func_222(int iParam0, int iParam1) {
	int iVar0;

	return false;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_29(iParam0);
		if (iVar0 > 3) {
			return false;
		}
		if (func_78(iVar0) != iParam0) {
			return false;
		}
		if (gameplay::is_bit_set(Global_87678, iVar0)) {
			return false;
		}
		if (iParam1 == 0) {
			if (iParam0 == player::player_ped_id()) {
				return false;
			}
		}
		if (gameplay::is_bit_set(Global_87677, iVar0)) {
			weapon::set_ped_infinite_ammo(iParam0, 0, 0);
			entity::set_entity_load_collision_flag(iParam0, 0);
			gameplay::set_bit(&Global_87678, iVar0);
			return true;
		}
	}
	return false;
}

// Position - 0x84B8
bool func_223(int iParam0) {
	int iVar0;

	if (!func_224()) {
		if (!ped::is_ped_injured(player::player_ped_id()) && ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
			player::get_player_wanted_level(player::player_id()) == 0) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (func_36(iVar0)) {
				if (vehicle::is_vehicle_model(iVar0, joaat("trash"))) {
					return false;
				}
				if (ped::is_ped_in_vehicle(iParam0, iVar0, 0) &&
					vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) == iParam0) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x8538
int func_224() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x8554
bool func_225(int iParam0) {
	if (!func_224()) {
		if (entity::does_entity_exist(Local_868) && vehicle::is_vehicle_driveable(Local_868, 0) &&
			!entity::is_entity_at_coord(Local_868, vLocal_827, 2f, 2f, 2f, 0, 1, 0)) {
			if (!ped::is_ped_injured(player::player_ped_id()) &&
				ped::is_ped_in_vehicle(player::player_ped_id(), Local_868, 0) &&
				player::get_player_wanted_level(player::player_id()) == 0) {
				if (ped::is_ped_in_vehicle(iParam0, Local_868, 0) &&
					vehicle::get_ped_in_vehicle_seat(Local_868, -1, 0) == iParam0) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x85E2
void func_226(int iParam0) {
	if (iLocal_683 > 1) {
		if (iLocal_685 > 0) {
			if (!gameplay::is_bit_set(Local_688[iParam0 /*8*/].f_7, 0) && iLocal_686 == 1) {
				if (!ui::is_message_being_displayed()) {
					if (func_230(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][0], 8, 0, 0, 0)) {
						gameplay::set_bit(&Local_688[iParam0 /*8*/].f_7, 0);
					}
				}
			}
		}
		else {
			if (gameplay::is_bit_set(Local_688[iParam0 /*8*/].f_7, 0) &&
				!gameplay::is_bit_set(Local_688[iParam0 /*8*/].f_7, 1) && iLocal_686 == 1) {
				if (!ui::is_message_being_displayed()) {
					if (func_230(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][1], 7, 0, 0, 0)) {
						gameplay::set_bit(&Local_688[iParam0 /*8*/].f_7, 1);
					}
				}
			}
			if (!gameplay::is_bit_set(Local_688[iParam0 /*8*/].f_7, 5)) {
				if (func_229(iLocal_874, vLocal_827, 1) < 15f && iLocal_686 == 1) {
					if (!ui::is_message_being_displayed()) {
						if (func_230(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][5], 7, 0, 0, 0)) {
							gameplay::set_bit(&Local_688[iParam0 /*8*/].f_7, 5);
						}
					}
				}
			}
			switch (func_29(player::player_ped_id())) {
			case 0:
				if (iParam0 == 1) {
					if (!func_228(2)) {
						func_227(iParam0, 2);
					}
				}
				else if (iParam0 == 2) {
					if (!func_228(4)) {
						func_227(iParam0, 4);
					}
				}
				break;

			case 1:
				if (iParam0 == 0) {
					if (!func_228(2)) {
						func_227(iParam0, 2);
					}
				}
				else if (iParam0 == 2) {
					if (!func_228(3)) {
						func_227(iParam0, 3);
					}
				}
				break;

			case 2:
				if (iParam0 == 1) {
					if (!func_228(3)) {
						func_227(iParam0, 3);
					}
				}
				else if (iParam0 == 0) {
					if (!func_228(4)) {
						func_227(iParam0, 4);
					}
				}
				break;
			}
		}
	}
}

// Position - 0x87C1
void func_227(int iParam0, int iParam1) {
	if (!gameplay::is_bit_set(Local_688[iParam0 /*8*/].f_7, iParam1)) {
		if (iLocal_1052 != -1) {
			if (!ui::is_message_being_displayed()) {
				if (func_230(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][iParam1], 7, 0, 0, 0)) {
					gameplay::set_bit(&Local_688[iParam0 /*8*/].f_7, iParam1);
				}
			}
		}
		else if (!func_231() && !ui::is_message_being_displayed()) {
			iLocal_1052 = gameplay::get_game_timer();
		}
		else {
			iLocal_1052 = -1;
		}
	}
}

// Position - 0x8839
int func_228(int iParam0) {
	if (gameplay::is_bit_set(Local_688[0 /*8*/].f_7, iParam0) ||
		gameplay::is_bit_set(Local_688[1 /*8*/].f_7, iParam0) ||
		gameplay::is_bit_set(Local_688[2 /*8*/].f_7, iParam0)) {
		return 1;
	}
	return 0;
}

// Position - 0x887F
float func_229(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0x88B9
bool func_230(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_89(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_82(sParam2, iParam3, 0);
}

// Position - 0x8907
int func_231() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0x8929
void func_232() {
	if (func_101(player::player_ped_id(), vLocal_827, 220f)) {
		if (!iLocal_877 && !func_101(player::player_ped_id(), vLocal_827, 100f)) {
			iLocal_877 = func_147(&iLocal_876, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_101(player::player_ped_id(), vLocal_827, 240f)) {
		if (iLocal_877) {
			func_6(&iLocal_876);
			iLocal_877 = 0;
		}
	}
}

// Position - 0x89B2
void func_233() {
	func_209(&iLocal_874, &iLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, vLocal_827, Local_868, 0, 1090519040);
	func_208();
	func_149();
	switch (iLocal_684) {
	case 0:
		if (func_116(iLocal_683, iLocal_28)) {
			func_119(&iLocal_821, Local_868, 1);
			func_115("PRA_GOVAN", &iLocal_820);
			iLocal_684 = 1;
		}
		break;

	case 1:
		func_221();
		if (func_36(Local_868)) {
			func_236(&iLocal_671, Local_868, 0, 0, 1, 1, 1);
		}
		if (!bLocal_833) {
			if (func_325(Local_840) && ped::is_ped_being_jacked(Local_840)) {
				func_235();
			}
			if (func_325(Local_854) && ped::is_ped_being_jacked(Local_854)) {
				func_235();
			}
		}
		if (func_36(iLocal_874)) {
			if (iLocal_686 == 1 || iLocal_686 == 2 || iLocal_686 == 3) {
				unk1::_0x293220DA1B46CEBC(5f, 5f, 4);
				iLocal_684 = 2;
			}
		}
		break;

	case 2:
		func_7(&iLocal_821);
		func_139(&iLocal_671, 0, 0);
		func_104(0);
		break;

	case 3:
		func_8(&Local_840);
		func_8(&Local_854);
		if (func_36(Local_868)) {
			ped::set_ped_into_vehicle(player::player_ped_id(), Local_868, -1);
		}
		func_234(1);
		func_39(1, 1, 1);
		iLocal_684 = 1;
		break;
	}
}

// Position - 0x8B09
void func_234(int iParam0) {
	gameplay::enable_dispatch_service(1, iParam0);
	gameplay::enable_dispatch_service(2, iParam0);
	gameplay::enable_dispatch_service(3, iParam0);
	gameplay::enable_dispatch_service(4, iParam0);
	gameplay::enable_dispatch_service(5, iParam0);
	if (iParam0) {
		player::set_wanted_level_multiplier(1f);
		player::set_max_wanted_level(5);
	}
	else {
		player::set_max_wanted_level(0);
		player::set_wanted_level_multiplier(0f);
	}
}

// Position - 0x8B50
void func_235() {
	char *sVar0;

	switch (func_25()) {
	case 0: sVar0 = "FBI4_JACKSM"; break;

	case 1: sVar0 = "FBI4_JACKSF"; break;

	case 2: sVar0 = "FBI4_JACKST"; break;
	}
	bLocal_833 = func_230(&uLocal_879, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_833) {
		unk1::_0x293220DA1B46CEBC(8f, 8f, 4);
	}
}

// Position - 0x8BB6
void func_236(int *iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_237(iParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x8BD3
void func_237(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			  bool bParam9) {
	func_238(iParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

// Position - 0x8BF1
void func_238(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			  bool bParam9) {
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		func_139(iParam0, 0, 0);
	}
	iParam0->f_6 = 2;
	func_239(iParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

// Position - 0x8C29
void func_239(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
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
	if (func_140(iVar0)) {
		func_256();
	}
	if (func_255(iParam1) && entity::is_entity_visible(iParam1)) {
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
			if (func_250(iParam0, bParam7, bParam9, 0)) {
				func_247(iParam0, iParam1, vParam2, iParam6);
			}
			if (*iParam0) {
				*iParam0 = 0;
			}
			else if (iParam0->f_6 == 2) {
				if (func_244(iVar0)) {
					if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0) &&
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (iVar1 && !ui::is_help_message_being_displayed() && uParam8) {
							if (!func_140(iVar0)) {
								func_243(iVar0, -1);
								iParam0->f_3 = iVar0;
								if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
									func_242(1);
								}
							}
						}
					}
				}
			}
			else if (func_244(iVar0)) {
				if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0)) {
					if (entity::is_entity_on_screen(iParam1) && iVar1 && !ui::is_help_message_being_displayed() &&
						uParam8) {
						if (!func_140(iVar0)) {
							func_243(iVar0, -1);
							iParam0->f_3 = iVar0;
							if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
								func_242(1);
							}
						}
					}
				}
			}
		}
		else {
			if (!gameplay::is_string_null(sParam5)) {
				if (func_140(sParam5)) {
					ui::clear_help(1);
				}
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (ped::is_ped_in_any_boat(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
						func_139(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
						func_139(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
						func_139(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
						func_139(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
						func_139(iParam0, iVar0, 1);
					}
				}
				else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
					func_139(iParam0, iVar0, 1);
				}
			}
			if (!func_250(iParam0, bParam7, bParam9, 0)) {
				if (!*iParam0 && !iParam0->f_1 && !func_241(iParam0)) {
					func_240(iParam0);
				}
			}
		}
	}
	else {
		func_139(iParam0, iVar0, 0);
	}
}

// Position - 0x8F96
void func_240(int *iParam0) {
	if (func_255(player::player_ped_id())) {
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

// Position - 0x8FFF
bool func_241(var *uParam0) {
	int iVar0;

	if (uParam0->f_2 > 0) {
		iVar0 = uParam0->f_10 / 2;
		if (uParam0->f_2 + iVar0 > gameplay::get_game_timer()) {
			return true;
		}
	}
	return false;
}

// Position - 0x902A
int func_242(int iParam0) {
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

// Position - 0x90D4
void func_243(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x90EB
bool func_244(char *sParam0) {
	if (!func_245(1, 1, 0)) {
		if (!gameplay::is_string_null_or_empty(sParam0) && func_140(sParam0) || func_140("CMN_HINT")) {
			ui::clear_help(1);
		}
		return false;
	}
	switch (Global_35781) {
	case 0:
	case 3:
		if (func_242(0) < 3) {
			return true;
		}
		break;

	case 4:
		if (func_242(0) < 1) {
			return true;
		}
		break;

	case 5:
	case 15:
		if (func_242(0) < 1) {
			return true;
		}
		break;

	default: break;
	}
	return false;
}

// Position - 0x9184
int func_245(int iParam0, int iParam1, int iParam2) {
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
	if (func_68(0)) {
		return 0;
	}
	if (func_246()) {
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

// Position - 0x9300
bool func_246() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x9315
void func_247(int *iParam0, int iParam1, vector3 vParam2, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (entity::is_entity_dead(iParam1, 0)) {
		func_139(iParam0, 0, 0);
	}
	if (func_15(vParam2, 0f, 0f, 0f, 0)) {
		if (entity::is_entity_a_ped(iParam1)) {
			iVar0 = entity::get_ped_index_from_entity_index(iParam1);
			if (!ped::is_ped_in_any_vehicle(iVar0, 0)) {
				if (ped::is_ped_a_player(iVar0)) {
					if (!func_248()) {
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

// Position - 0x941A
int func_248() { return func_249(player::player_id()); }

// Position - 0x942A
int func_249(int iParam0) {
	if (entity::get_entity_model(player::get_player_ped(iParam0)) == joaat("mp_f_freemode_01")) {
		return 1;
	}
	return 0;
}

// Position - 0x9449
bool func_250(var *uParam0, bool bParam1, bool bParam2, int iParam3) {
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
				if (func_254(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (func_253(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (func_253(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (func_254(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		if (func_241(uParam0)) {
			uParam0->f_7 = 1;
			uParam0->f_5 = 4;
		}
		break;

	case 1:
		if (gameplay::get_game_timer() - uParam0->f_4 <= 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (!func_254(bParam1, bParam2, iParam3)) {
						uParam0->f_4 = gameplay::get_game_timer();
						uParam0->f_5 = 3;
					}
				}
				else if (!func_253(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (!func_253(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!func_254(bParam1, bParam2, iParam3)) {
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
				if (!func_254(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (!func_253(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (!func_253(bParam1, bParam2, iParam3) || ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
				ai::get_is_task_active(player::player_ped_id(), 2)) {
				uParam0->f_5 = 0;
			}
			else if (!func_254(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - uParam0->f_4 > 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (func_252(bParam1, bParam2, iParam3)) {
						uParam0->f_5 = 0;
					}
				}
				else if (func_251(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) || func_251(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
					ai::get_is_task_active(player::player_ped_id(), 2)) {
					uParam0->f_5 = 0;
				}
				else if (func_252(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
		}
		break;

	case 4:
		if (!func_241(uParam0)) {
			uParam0->f_5 = 0;
		}
		break;
	}
	if (!func_245(bParam1, bParam2, iParam3)) {
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7) {
		func_256();
		return true;
	}
	else {
		return false;
	}
	return false;
}

// Position - 0x97B5
bool func_251(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_245(bParam0, bParam1, bParam2)) {
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

// Position - 0x9807
bool func_252(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_245(bParam0, bParam1, bParam2)) {
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

// Position - 0x9850
bool func_253(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_245(bParam0, bParam1, bParam2)) {
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

// Position - 0x98AF
bool func_254(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_245(bParam0, bParam1, bParam2)) {
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

// Position - 0x9905
bool func_255(int iParam0) {
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

// Position - 0x9960
void func_256() { gameplay::set_bit(&Global_2314, 4); }

// Position - 0x9970
void func_257() {
	switch (iLocal_684) {
	case 0:
		if (func_116(iLocal_683, 0)) {
			func_269();
			func_267(33);
			player::set_max_wanted_level(2);
			player::set_wanted_level_multiplier(0.1f);
			if (func_341()) {
				func_264(0, -1, 1);
				func_40(500, 1);
				iLocal_684 = 2;
			}
			else {
				if (func_32(0)) {
					func_118(player::player_ped_id(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
					func_259(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
					func_40(500, 1);
				}
				func_258();
				if (iLocal_683 == 2) {
					iLocal_684 = 0;
				}
				else {
					iLocal_684 = 2;
				}
			}
		}
		break;

	case 2: func_104(0); break;
	}
}

// Position - 0x9A38
void func_258() {}

// Position - 0x9A40
void func_259(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	int iVar0;
	int iVar1;

	iVar0 = streaming::format_focus_heading(vParam0, iParam3, iParam4, 127);
	if (streaming::_0x07C313F94746702C(iVar0)) {
		iVar1 = gameplay::get_game_timer() + iParam5;
		while (!streaming::_0x7D41E9D2D17C5B2D(iVar0) && gameplay::get_game_timer() < iVar1) {
			if (iParam7) {
				func_261();
			}
			if (iParam6) {
				func_260();
			}
			system::wait(0);
		}
		if (gameplay::get_game_timer() < iVar1) {
		}
		streaming::_0x1EE7D8DF4425F053(iVar0);
	}
}

// Position - 0x9AAF
void func_260() { Global_17151.f_6 = 1; }

// Position - 0x9ABD
void func_261() {
	if (Global_14443.f_1 != 1) {
		if (func_68(0)) {
			func_262(0);
		}
		gameplay::set_bit(&Global_2314, 2);
	}
}

// Position - 0x9AE5
void func_262(int iParam0) {
	if (Global_14604) {
		func_263(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&Global_2314, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 30);
	}
	else {
		gameplay::clear_bit(&Global_2313, 30);
	}
	if (!func_50()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x9B55
void func_263(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_68(0)) {
			Global_14604 = 1;
			if (iParam1) {
				mobile::get_mobile_phone_position(&Global_14380);
			}
			Global_14371 = {Global_14389[Global_14388 /*3*/]};
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
	else if (Global_14604 == 1) {
		Global_14604 = 0;
		Global_14371 = {Global_14396[Global_14388 /*3*/]};
		if (iParam1) {
			mobile::set_mobile_phone_position(Global_14380);
		}
		else {
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
}

// Position - 0x9BC9
void func_264(int iParam0, int iParam1, int iParam2) {
	if (func_341() && func_266()) {
		while (Global_91486 != 6) {
			system::wait(0);
		}
		gameplay::set_game_paused(0);
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				ped::clear_ped_wetness(player::player_ped_id());
			}
		}
		if (iParam0 != 0) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (entity::does_entity_exist(iParam0)) {
					if (vehicle::is_vehicle_driveable(iParam0, 0)) {
						if (!ped::is_ped_in_vehicle(player::player_ped_id(), iParam0, 0)) {
							ped::set_ped_into_vehicle(player::player_ped_id(), iParam0, iParam1);
							cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
							cam::set_gameplay_cam_relative_heading(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1) {
			if (player::is_player_playing(player::player_id())) {
				player::set_player_control(player::player_id(), 1, 0);
			}
		}
		graphics::_stop_all_screen_effects();
		func_265(0);
	}
}

// Position - 0x9C8D
void func_265(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_91491.f_20, 13);
	}
	else {
		gameplay::clear_bit(&Global_91491.f_20, 13);
	}
}

// Position - 0x9CB6
var func_266() { return gameplay::is_bit_set(Global_91491.f_20, 13); }

// Position - 0x9CCA
void func_267(int iParam0) {
	Global_87679 = 0;
	switch (iParam0) {
	case 72:
		func_268(2);
		func_268(4);
		break;

	case 73:
		func_268(0);
		func_268(1);
		func_268(7);
		break;

	case 92:
		func_268(10);
		func_268(9);
		func_268(13);
		func_268(6);
		break;

	case 68: func_268(11); break;

	case 78: func_268(14); break;

	case 79: func_268(3); break;

	default: break;
	}
}

// Position - 0x9D58
void func_268(int iParam0) { gameplay::set_bit(&Global_87679, iParam0); }

// Position - 0x9D6A
void func_269() {
	int iVar0;

	iVar0 = player::get_players_last_vehicle();
	if (entity::does_entity_exist(iVar0)) {
		if (vehicle::is_vehicle_driveable(iVar0, 0)) {
			func_270(iVar0, entity::get_entity_coords(iVar0, 1), entity::get_entity_heading(iVar0), 24, 0);
		}
	}
}

// Position - 0x9DA7
void func_270(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6) {
	struct<60> Var0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (iParam5 != 24 && iParam5 != 25) {
			return;
		}
		if (iParam5 == 24) {
			if (entity::does_entity_exist(Global_68531.f_484[25]) &&
				vehicle::is_vehicle_driveable(Global_68531.f_484[25], 0)) {
				if (Global_68531.f_484[25] == iParam0) {
					return;
				}
			}
		}
		if (!iParam6) {
			if (vehicle::is_big_vehicle(iParam0) || entity::get_entity_model(iParam0) == joaat("bus") ||
				entity::get_entity_model(iParam0) == joaat("tourbus")) {
				return;
			}
		}
		func_316(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_312(iParam0, &Var0);
		if (func_15(vParam1, 0f, 0f, 0f, 0)) {
			vParam1 = {entity::get_entity_coords(iParam0, 1)};
			uParam4 = entity::get_entity_heading(iParam0);
		}
		if (iParam5 == 24) {
			if (gameplay::get_hash_key(script::get_this_script_name()) != joaat("vehicle_gen_controller")) {
				Global_69519 = gameplay::get_hash_key(script::get_this_script_name());
			}
		}
		func_305(iParam5, &Var0, vParam1, uParam4, func_311(iParam0));
		func_271(iParam5, iParam0, 0);
	}
}

// Position - 0x9ED0
void func_271(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam0 == -1) {
		return;
	}
	if (!func_302(&Global_68531.f_555[0 /*21*/], iParam0)) {
		return;
	}
	if (!gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 12) &&
		!gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
		if (Global_68531.f_555[0 /*21*/].f_4 != entity::get_entity_model(iParam1)) {
			return;
		}
	}
	if (Global_69438 != -1 && Global_69438 != iParam0) {
		return;
	}
	if (entity::does_entity_exist(iParam1)) {
		if (vehicle::is_vehicle_driveable(iParam1, 0)) {
			if (!entity::is_entity_a_mission_entity(iParam1)) {
				entity::set_entity_as_mission_entity(iParam1, 1, 1);
			}
			if (iParam0 == 24) {
				Global_101700.f_31389.f_4801 = func_291();
			}
			if (iParam1 != Global_68531.f_139[iParam0]) {
				if (iParam0 == 24) {
					iVar0 = func_290(iParam0);
					if (entity::does_entity_exist(iVar0) && vehicle::is_vehicle_driveable(iVar0, 0) &&
						iParam1 != iVar0) {
						func_272(iVar0, 145);
					}
				}
				Global_69437 = iParam1;
				Global_69438 = iParam0;
				Global_69439 = iParam2;
			}
		}
	}
}

// Position - 0x9FED
void func_272(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_273(iParam0)) {
		return;
	}
	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
		iVar0 = vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0);
		if (!entity::does_entity_exist(iVar0)) {
			iVar0 = vehicle::get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (entity::does_entity_exist(iVar0) && !ped::is_ped_injured(iVar0)) {
			if (entity::get_entity_model(iVar0) == joaat("player_zero")) {
				iParam1 = 0;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_one")) {
				iParam1 = 1;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_two")) {
				iParam1 = 2;
			}
		}
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		iVar2 = 0;
		while (iVar2 < 2) {
			if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66) {
				if (!gameplay::is_string_null_or_empty(
						&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
					if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
													&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66) {
			if (!gameplay::is_string_null_or_empty(&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
				if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
												&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_312(iParam0, &Global_101700.f_31389.f_5510);
}

// Position - 0xA1EF
int func_273(int iParam0) {
	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0) || func_288(iParam0, 0, 0) ||
		func_288(iParam0, 1, 0) || func_288(iParam0, 2, 0) || func_311(iParam0) != 145 || func_287(iParam0) ||
		func_286(iParam0) || func_285(iParam0) || func_284(iParam0) || !func_274(entity::get_entity_model(iParam0))) {
		if (func_286(iParam0)) {
		}
		if (func_286(iParam0)) {
		}
		if (func_288(iParam0, 0, 0)) {
		}
		if (func_288(iParam0, 1, 0)) {
		}
		if (func_288(iParam0, 2, 0)) {
		}
		if (func_311(iParam0) != 145) {
		}
		return 0;
	}
	return 1;
}

// Position - 0xA2CC
int func_274(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	if (!func_275(iParam0, 0)) {
		return 0;
	}
	if (vehicle::is_this_model_a_boat(iParam0) || vehicle::is_this_model_a_plane(iParam0) ||
		vehicle::is_this_model_a_heli(iParam0) || vehicle::is_this_model_a_train(iParam0)) {
		return 0;
	}
	switch (iParam0) {
	case joaat("bus"):
	case joaat("stretch"):
	case joaat("barracks"):
	case joaat("armytanker"):
	case joaat("rhino"):
	case joaat("armytrailer"):
	case joaat("barracks2"):
	case joaat("flatbed"):
	case joaat("ripley"):
	case joaat("towtruck"):
	case joaat("towtruck2"):
	case joaat("airbus"):
	case joaat("coach"):
	case joaat("rentalbus"):
	case joaat("tourbus"):
	case joaat("firetruk"):
	case joaat("pbus"):
	case joaat("trash"):
	case joaat("benson"):
	case joaat("boattrailer"):
	case joaat("biff"):
	case joaat("hauler"):
	case joaat("docktrailer"):
	case joaat("phantom"):
	case joaat("pounder"):
	case joaat("tractor2"):
	case joaat("bulldozer"):
	case joaat("handler"):
	case joaat("tiptruck"):
	case joaat("cutter"):
	case joaat("dump"):
	case joaat("mixer"):
	case joaat("mixer2"):
	case joaat("rubble"):
	case joaat("scrap"):
	case joaat("tiptruck2"):
	case joaat("camper"):
	case joaat("taco"):
	case joaat("boxville"):
	case joaat("boxville2"):
	case joaat("boxville3"):
	case joaat("journey"):
	case joaat("mule"):
	case joaat("mule2"):
	case joaat("police"):
	case joaat("police2"):
	case joaat("police3"):
	case joaat("police4"):
	case joaat("policeb"):
	case joaat("policeold1"):
	case joaat("policeold2"):
	case joaat("policet"):
	case joaat("taxi"):
	case joaat("submersible"):
	case joaat("submersible2"):
	case joaat("monster"): return 0;
	}
	return 1;
}

// Position - 0xA47D
int func_275(int iParam0, int iParam1) {
	int iVar0;
	struct<2> Var1;

	if (iParam0 == 0) {
		return 0;
	}
	if (!streaming::is_model_a_vehicle(iParam0)) {
		return 0;
	}
	if (iParam0 == joaat("dominator2") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("buffalo3") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("gauntlet2") && !network::network_is_game_in_progress() || iParam0 == joaat("blimp2") ||
		iParam0 == joaat("stalion2") && !network::network_is_game_in_progress() || iParam0 == joaat("blista3")) {
		if (!func_283()) {
			return 0;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < dlc1::get_num_dlc_vehicles()) {
			if (dlc1::get_dlc_vehicle_data(iVar0, &Var1)) {
				if (iParam0 == Var1.f_1) {
					if (dlc1::_is_dlc_data_empty(Var1)) {
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp")) {
		if (!func_282() && !func_281() && !func_280() && !func_279() && !func_283()) {
			return 0;
		}
	}
	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion")) {
		if (gameplay::is_durango_version() || gameplay::is_pc_version() || gameplay::is_orbis_version()) {
		}
		else if (!func_280()) {
			return 0;
		}
	}
	if (iParam1) {
		if (!func_278(iParam0)) {
			return 0;
		}
	}
	if (!func_276(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0xA60B
int func_276(int iParam0) {
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_277()) {
		return 1;
	}
	unk3::_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4) {
		return 1;
	}
	switch (iParam0) {
	case joaat("dune4"): StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64); break;

	case joaat("voltic2"): StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64); break;

	case joaat("ruiner2"): StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64); break;

	case joaat("phantom2"): StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64); break;

	case joaat("technical2"): StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64); break;

	case joaat("boxville5"): StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64); break;

	case joaat("wastelander"): StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64); break;

	case joaat("blazer5"): StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64); break;

	default: return 1;
	}
	if (!mobile::_network_shop_is_item_unlocked(&cVar2)) {
		return 0;
	}
	return 1;
}

// Position - 0xA6D7
int func_277() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0xA6EB
int func_278(int iParam0) {
	int iVar0;
	int iVar1;

	if (Global_2482093) {
		return 1;
	}
	iVar0 = 1;
	iVar1 = network::_get_posix_time();
	if (iParam0 == joaat("btype3")) {
		if (!Global_262145.f_5506 && !Global_262145.f_11530 && iVar1 < Global_262145.f_11531) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3")) {
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2")) {
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2")) {
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5")) {
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2")) {
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3")) {
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo")) {
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70")) {
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811")) {
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400")) {
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso")) {
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger")) {
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender")) {
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b")) {
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis")) {
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck")) {
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2")) {
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos")) {
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle")) {
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck")) {
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2")) {
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus")) {
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava")) {
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx")) {
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2")) {
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2")) {
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2")) {
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3")) {
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler")) {
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade")) {
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea")) {
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey")) {
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus")) {
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb")) {
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2")) {
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex")) {
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro")) {
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera")) {
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor")) {
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2")) {
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4")) {
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6")) {
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2")) {
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane")) {
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3")) {
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio")) {
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger")) {
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus")) {
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez")) {
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike")) {
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2")) {
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2")) {
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4")) {
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5")) {
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2")) {
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2")) {
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5")) {
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander")) {
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5")) {
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2")) {
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3")) {
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous")) {
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2")) {
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy")) {
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2")) {
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr")) {
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2")) {
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb")) {
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2")) {
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero")) {
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2")) {
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator")) {
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter")) {
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2")) {
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta")) {
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1")) {
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2")) {
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston")) {
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2")) {
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796) {
			iVar0 = 0;
		}
	}
	return iVar0;
}

// Position - 0xB42E
int func_279() { return 0; }

// Position - 0xB437
int func_280() { return 1; }

// Position - 0xB440
int func_281() { return 1; }

// Position - 0xB449
int func_282() {
	if (dlc2::is_dlc_present(-1226939934)) {
		return 1;
	}
	return 0;
}

// Position - 0xB462
bool func_283() {
	int iVar0;

	if (network::network_is_signed_in()) {
		if (network::_network_are_ros_available()) {
			if (network::_0x593570C289A77688()) {
				stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				gameplay::set_bit(&iVar0, 2);
				gameplay::set_bit(&iVar0, 4);
				gameplay::set_bit(&iVar0, 6);
				gameplay::set_bit(&Global_25, 2);
				gameplay::set_bit(&Global_25, 4);
				gameplay::set_bit(&Global_25, 6);
				stats::stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (gameplay::_0x5AA3BEFA29F03AD4()) {
					iVar0 = gameplay::get_profile_setting(866);
					gameplay::set_bit(&iVar0, 0);
					stats::_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_139179 == 2) {
		return true;
	}
	else if (Global_139179 == 3) {
		return false;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xB51D
int func_284(int iParam0) {
	int iVar0;
	char *sVar1;

	iVar0 = entity::get_entity_model(iParam0);
	sVar1 = vehicle::get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && gameplay::are_strings_equal(sVar1, "LAMAR G ")) {
		return 1;
	}
	if (!func_275(iVar0, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0xB563
int func_285(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(Global_89185[iVar0])) {
			if (Global_89185[iVar0] == iParam0) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0xB59E
bool func_286(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar0 = 0;
		while (iVar0 < 9) {
			if (entity::does_entity_exist(Global_89155[iVar0]) &&
				vehicle::is_vehicle_driveable(Global_89155[iVar0], 0)) {
				if (Global_89155[iVar0] == iParam0 &&
					entity::get_entity_model(Global_89155[iVar0]) == entity::get_entity_model(iParam0)) {
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0xB61A
int func_287(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(Global_68531.f_484[24])) {
		if (iParam0 == Global_68531.f_484[24]) {
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iVar0 != 24 && iVar0 != 21 && iVar0 != 22 && iVar0 != 23 && iVar0 != 27 && iVar0 != 30 && iVar0 != 33 &&
				iVar0 != 28 && iVar0 != 31 && iVar0 != 34 && iVar0 != 26 && iVar0 != 29 && iVar0 != 32) {
				if (iParam0 == Global_68531.f_484[iVar0]) {
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0xB702
bool func_288(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_289(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0xB773
bool func_289(int iParam0, int iParam1, char *sParam2, int *iParam3) {
	StringCopy(sParam2, "", 32);
	switch (iParam0) {
	case 0:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Michael - Beverly Hills", 32);
			*iParam3 = 0;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 1;
			return true;
		}
		break;

	case 1:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Franklin - Aunt", 32);
			*iParam3 = 5;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Franklin - Hills", 32);
			*iParam3 = 6;
			return true;
		}
		break;

	case 2:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 2;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - City", 32);
			*iParam3 = 3;
			return true;
		}
		else if (iParam1 == 2) {
			StringCopy(sParam2, "Trevor - Stripclub", 32);
			*iParam3 = 4;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0xB84B
int func_290(int iParam0) {
	if (iParam0 == -1) {
		return 0;
	}
	return Global_68531.f_139[iParam0];
}

// Position - 0xB867
var func_291() {
	int *iVar0;

	func_301(&iVar0, time::get_clock_seconds());
	func_300(&iVar0, time::get_clock_minutes());
	func_299(&iVar0, time::get_clock_hours());
	func_294(&iVar0, time::get_clock_day_of_month());
	func_293(&iVar0, time::get_clock_month());
	func_292(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0xB8AD
void func_292(int *iParam0, int iParam1) {
	if (iParam1 <= 0) {
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979) {
		return;
	}
	*iParam0 -= (*iParam0 & 2080374784);
	if (iParam1 < 2011) {
		*iParam0 |= system::shift_left(2011 - iParam1, 26);
		*iParam0 |= -2147483648;
	}
	else {
		*iParam0 |= system::shift_left(iParam1 - 2011, 26);
		*iParam0 -= (*iParam0 & -2147483648);
	}
}

// Position - 0xB933
void func_293(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0xB966
void func_294(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_298(*uParam0);
	iVar1 = func_296(*uParam0);
	if (iParam1 < 1 || iParam1 > func_295(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0xB9B7
int func_295(int iParam0, int iParam1) {
	if (iParam1 < 0) {
		iParam1 = 0;
	}
	switch (iParam0) {
	case 0:
	case 2:
	case 4:
	case 6:
	case 7:
	case 9:
	case 11: return 31;

	case 3:
	case 5:
	case 8:
	case 10: return 30;

	case 1:
		if (iParam1 % 4 == 0) {
			if (iParam1 % 100 != 0) {
				return 29;
			}
			else if (iParam1 % 400 == 0) {
				return 29;
			}
		}
		return 28;
	}
	return 30;
}

// Position - 0xBA59
var func_296(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_297(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0xBA7E
int func_297(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0xBA95
int func_298(var uParam0) { return uParam0 & 15; }

// Position - 0xBAA2
void func_299(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0xBADC
void func_300(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0xBB17
void func_301(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0xBB53
bool func_302(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&uParam0->f_5, "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = {0f, 0f, 0f};
	uParam0->f_18 = {0f, 0f, 0f};
	switch (iParam1) {
	case 0:
		*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
		uParam0->f_3 = 157.5705f;
		uParam0->f_4 = func_303(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 1:
		*uParam0 = {1970.943f, 3801.684f, 31.1396f};
		uParam0->f_3 = 301.3964f;
		uParam0->f_4 = func_303(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 2:
		*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
		uParam0->f_3 = 180.0808f;
		uParam0->f_4 = func_303(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 3:
		*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
		uParam0->f_3 = 141.6114f;
		uParam0->f_4 = func_303(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 4:
		*uParam0 = {10.9281f, 545.669f, 174.7951f};
		uParam0->f_3 = 61.392f;
		uParam0->f_4 = func_303(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 5:
		*uParam0 = {6.1093f, 544.9742f, 174.2835f};
		uParam0->f_3 = 92.1548f;
		uParam0->f_4 = func_303(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 6:
		*uParam0 = {1981.416f, 3808.131f, 31.1384f};
		uParam0->f_3 = 117.2557f;
		uParam0->f_4 = func_303(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 7:
		*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
		uParam0->f_3 = 35.7505f;
		uParam0->f_4 = func_303(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 8:
		*uParam0 = {148.2868f, -1270.569f, 28.2252f};
		uParam0->f_3 = 208.4685f;
		uParam0->f_4 = func_303(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 9:
		*uParam0 = {1459.509f, -1380.45f, 78.3259f};
		uParam0->f_3 = 99.6211f;
		uParam0->f_4 = joaat("scorcher");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 10:
		*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
		uParam0->f_3 = 98.3867f;
		uParam0->f_4 = joaat("seashark");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 11:
		*uParam0 = {353.0926f, 3577.593f, 32.351f};
		uParam0->f_3 = 16.6205f;
		uParam0->f_4 = joaat("duster");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 12:
		uParam0->f_14 = 0;
		*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
		uParam0->f_3 = 329.1082f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 13:
		uParam0->f_14 = 1;
		*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
		uParam0->f_3 = 329.5137f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 14:
		uParam0->f_14 = 2;
		*uParam0 = {1735.586f, 3294.531f, 40.1651f};
		uParam0->f_3 = 194.9525f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 15:
		uParam0->f_14 = 3;
		*uParam0 = {-846.27f, -1363.19f, 0.22f};
		uParam0->f_3 = 108.78f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 16:
		uParam0->f_14 = 4;
		*uParam0 = {-849.47f, -1354.99f, 0.24f};
		uParam0->f_3 = 109.84f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 17:
		uParam0->f_14 = 5;
		*uParam0 = {-852.47f, -1346.2f, 0.21f};
		uParam0->f_3 = 108.76f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 18:
		uParam0->f_14 = 6;
		*uParam0 = {-745.857f, -1433.904f, 4.0005f};
		uParam0->f_12 = 0;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-756.2952f, -1441.609f, 2.9184f};
		uParam0->f_18 = {-738.0606f, -1423.068f, 8.2835f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 19:
		uParam0->f_14 = 7;
		*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
		uParam0->f_12 = 1;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-772.8158f, -1459.957f, 3.2894f};
		uParam0->f_18 = {-754.3353f, -1440.836f, 8.3334f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 20:
		uParam0->f_14 = 8;
		*uParam0 = {1769.3f, 3244f, 41.1f};
		uParam0->f_12 = 2;
		uParam0->f_13 = 360;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 21:
		uParam0->f_14 = 9;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 22:
		uParam0->f_14 = 10;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 1;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 23:
		uParam0->f_14 = 11;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 2;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 26:
	case 27:
	case 28:
		iVar1 = iParam1 - 26;
		uParam0->f_14 = 12 + iVar1;
		*uParam0 = {196.2794f, -1020.479f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 29:
	case 30:
	case 31:
		iVar1 = iParam1 - 29;
		uParam0->f_14 = 15 + iVar1;
		*uParam0 = {199.8872f, -1020.048f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 32:
	case 33:
	case 34:
		iVar1 = iParam1 - 32;
		uParam0->f_14 = 18 + iVar1;
		*uParam0 = {203.6006f, -1019.776f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 24:
		uParam0->f_14 = 21;
		*uParam0 = {0f, 0f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = 0;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 25:
		uParam0->f_14 = 22;
		*uParam0 = {723.2515f, -632.0496f, 27.1484f};
		uParam0->f_3 = 12.9316f;
		uParam0->f_4 = joaat("tailgater");
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 35:
		*uParam0 = {-51.23f, 3111.9f, 24.95f};
		uParam0->f_3 = 46.78f;
		uParam0->f_4 = joaat("proptrailer");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 36:
		*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
		uParam0->f_3 = 308.0596f;
		uParam0->f_4 = joaat("bjxl");
		uParam0->f_10 = 126;
		uParam0->f_11 = 126;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 37:
		*uParam0 = {-2892.93f, 3192.37f, 11.66f};
		uParam0->f_3 = -132.35f;
		uParam0->f_4 = joaat("velum");
		uParam0->f_10 = 157;
		uParam0->f_11 = 157;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 38:
		*uParam0 = {1744.308f, 3270.673f, 40.2076f};
		uParam0->f_3 = 125f;
		uParam0->f_4 = joaat("cargobob3");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 39:
		*uParam0 = {1751.44f, 3322.643f, 42.1855f};
		uParam0->f_3 = 268.134f;
		uParam0->f_4 = joaat("submersible");
		gameplay::set_bit(&uParam0->f_9, 23);
		iVar0 = 1;
		break;

	case 41:
		*uParam0 = {1377.104f, -2076.2f, 52f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("towtruck");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 40:
		*uParam0 = {1380.42f, -2072.77f, 51.7607f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("trash");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 42:
		*uParam0 = {1359.389f, 3618.441f, 33.8907f};
		uParam0->f_3 = 108.2337f;
		uParam0->f_4 = joaat("barracks");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 43:
		*uParam0 = {693.1154f, -1018.155f, 21.6387f};
		uParam0->f_3 = 177.6454f;
		uParam0->f_4 = joaat("firetruk");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 44:
		*uParam0 = {-73.6963f, 495.124f, 143.5226f};
		uParam0->f_3 = 155.5994f;
		uParam0->f_4 = joaat("vacca");
		iVar0 = 1;
		break;

	case 45:
		*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
		uParam0->f_3 = 294.993f;
		uParam0->f_4 = joaat("surano");
		iVar0 = 1;
		break;

	case 46:
		*uParam0 = {533.9048f, -169.2469f, 53.7005f};
		uParam0->f_3 = 1.2998f;
		uParam0->f_4 = joaat("tornado2");
		iVar0 = 1;
		break;

	case 47:
		*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
		uParam0->f_3 = 267.7392f;
		uParam0->f_4 = joaat("superd");
		iVar0 = 1;
		break;

	case 48:
		*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
		uParam0->f_3 = 350.7697f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 49:
		*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
		uParam0->f_3 = 48.9311f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 50:
		*uParam0 = {-1062.076f, -226.7637f, 37.157f};
		uParam0->f_3 = 234.2767f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 51:
		*uParam0 = {68.16914f, -1558.958f, 29.46904f};
		uParam0->f_3 = 49.90575f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 52:
		*uParam0 = {589.4399f, 2736.708f, 42.03316f};
		uParam0->f_3 = -175.7105f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 53:
		*uParam0 = {-488.774f, -344.5721f, 34.36356f};
		uParam0->f_3 = 82.4042f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 54:
		*uParam0 = {288.8808f, -585.4728f, 43.15428f};
		uParam0->f_3 = -20.80707f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 55:
		*uParam0 = {304.8294f, -1383.674f, 31.67744f};
		uParam0->f_3 = -41.11603f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 56:
		*uParam0 = {1126.194f, -1481.486f, 34.7016f};
		uParam0->f_3 = -91.43369f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 57:
		*uParam0 = {-1598.36f, 5252.84f, 0f};
		uParam0->f_3 = 28.14f;
		uParam0->f_4 = joaat("submersible");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 58:
		*uParam0 = {-1602.62f, 5260.37f, 0.86f};
		uParam0->f_3 = 25.32f;
		uParam0->f_4 = joaat("dinghy");
		uParam0->f_13 = 404;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 59:
		*uParam0 = {2116.571f, 4763.279f, 40.1596f};
		uParam0->f_3 = 198.723f;
		uParam0->f_4 = joaat("bfinjection");
		iVar0 = 1;
		break;

	case 60:
		*uParam0 = {1133.21f, 120.2f, 80.9f};
		uParam0->f_3 = 134.4f;
		if (func_283()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 61:
		*uParam0 = {-806.31f, -2679.65f, 13.9f};
		uParam0->f_3 = 150.54f;
		if (func_283()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 62:
		*uParam0 = {1985.85f, 3828.96f, 31.98f};
		uParam0->f_3 = -16.58f;
		uParam0->f_4 = joaat("blazer3");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 63:
		*uParam0 = {3870.75f, 4464.67f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = joaat("submersible2");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		gameplay::set_bit(&uParam0->f_9, 30);
		iVar0 = 1;
		break;

	case 64:
		*uParam0 = {1257.729f, -2564.474f, 41.717f};
		uParam0->f_3 = 284.5561f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 65:
		*uParam0 = {643.2823f, 3014.152f, 42.2733f};
		uParam0->f_3 = 128.0554f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 66:
		*uParam0 = {38.9368f, 850.8677f, 196.3f};
		uParam0->f_3 = 311.6813f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 67:
		*uParam0 = {1333.875f, 4262.226f, 30.78f};
		uParam0->f_3 = 262.5293f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;
	}
	if (gameplay::is_bit_set(uParam0->f_9, 10)) {
		uParam0->f_4 = Global_101700.f_31389.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14) {
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") ||
				uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2")) {
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_15(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/]};
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f) {
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (gameplay::is_bit_set(uParam0->f_9, 19)) {
		if (!func_15(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (gameplay::is_bit_set(uParam0->f_9, 20)) {
		if (!func_15(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

// Position - 0xD24C
int func_303(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_28(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_304(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xD28E
void func_304(int iParam0, var *uParam1, int iParam2) {
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0) {
	case 0:
		iVar0 = joaat("tailgater");
		if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131]) {
			iVar0 = joaat("premier");
		}
		switch (iVar0) {
		case joaat("tailgater"):
			*uParam1 = iVar0;
			uParam1->f_2 = 3f;
			uParam1->f_4 = 0;
			uParam1->f_9 = 1;
			uParam1->f_11[0] = 1;
			StringCopy(&uParam1->f_27, "5MDS003", 16);
			break;

		case joaat("premier"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14.9f;
			uParam1->f_5 = 43;
			uParam1->f_6 = 43;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_9 = 0;
			StringCopy(&uParam1->f_27, "880HS955", 16);
			break;
		}
		break;

	case 2:
		iVar0 = joaat("bodhi2");
		switch (iVar0) {
		case joaat("bodhi2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14f;
			uParam1->f_5 = 32;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "BETTY 32", 16);
			if (Global_101700.f_8044.f_99.f_58[119]) {
				uParam1->f_11[1] = 1;
			}
			break;
		}
		break;

	case 1:
		if (iParam2 == 1) {
			iVar0 = joaat("buffalo2");
		}
		else if (iParam2 == 2) {
			iVar0 = joaat("bagger");
		}
		else if (Global_101700.f_8044.f_99.f_58[118]) {
			iVar0 = joaat("bagger");
		}
		else {
			iVar0 = joaat("buffalo2");
		}
		switch (iVar0) {
		case joaat("bagger"):
			*uParam1 = iVar0;
			uParam1->f_2 = 6f;
			uParam1->f_5 = 53;
			uParam1->f_6 = 0;
			uParam1->f_7 = 59;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "FC88", 16);
			break;

		case joaat("buffalo2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 0f;
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_10 = 1;
			StringCopy(&uParam1->f_27, "FC1988", 16);
			uParam1->f_11[0] = 1;
			uParam1->f_11[1] = 1;
			uParam1->f_11[2] = 1;
			uParam1->f_11[3] = 1;
			uParam1->f_11[4] = 1;
			uParam1->f_11[5] = 1;
			uParam1->f_11[6] = 1;
			uParam1->f_11[7] = 1;
			uParam1->f_11[8] = 1;
			break;
		}
		break;

	default: break;
	}
}

// Position - 0xD4EA
void func_305(int iParam0, var *uParam1, vector3 vParam2, var uParam5, int iParam6) {
	if (func_302(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
			func_310(iParam0);
			func_309(uParam1, &Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]);
			if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 11)) {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = uParam5;
			}
			else {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_306(iParam0, 1);
		}
	}
}

// Position - 0xD5E9
void func_306(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_308(iParam0, 0)) {
			func_307(iParam0, 1, 0);
			func_307(iParam0, 2, 0);
			func_307(iParam0, 3, 0);
			func_307(iParam0, 4, 0);
			func_307(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_307(iParam0, 0, 0);
	}
}

// Position - 0xD646
void func_307(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
}

// Position - 0xD681
int func_308(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0xD6A4
void func_309(var *uParam0, var *uParam1) {
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = {uParam0->f_1};
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = {uParam0->f_9};
	uParam1->f_59 = {uParam0->f_59};
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

// Position - 0xD770
void func_310(int iParam0) {
	if (iParam0 == -1) {
		return;
	}
	if (func_302(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
			entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
			Global_68531.f_139[iParam0] = 0;
		}
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			func_306(iParam0, 0);
		}
	}
}

// Position - 0xD7EA
int func_311(int iParam0) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 145;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

// Position - 0xD84D
void func_312(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_315(uParam1);
		uParam1->f_66 = entity::get_entity_model(iParam0);
		StringCopy(&uParam1->f_1, vehicle::get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = vehicle::get_vehicle_number_plate_text_index(iParam0);
		vehicle::get_vehicle_colours(iParam0, &uParam1->f_5, &uParam1->f_6);
		vehicle::get_vehicle_extra_colours(iParam0, &uParam1->f_7, &uParam1->f_8);
		vehicle::get_vehicle_tyre_smoke_color(iParam0, &uParam1->f_62, &uParam1->f_63, &uParam1->f_64);
		uParam1->f_65 = vehicle::get_vehicle_window_tint(iParam0);
		uParam1->f_67 = vehicle::get_vehicle_livery(iParam0);
		uParam1->f_69 = vehicle::get_vehicle_wheel_type(iParam0);
		uParam1->f_70 = vehicle::get_vehicle_door_lock_status(iParam0);
		vehicle::get_vehicle_custom_secondary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		vehicle::_get_vehicle_neon_lights_colour(iParam0, &uParam1->f_74, &uParam1->f_75, &uParam1->f_76);
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 2)) {
			gameplay::set_bit(&uParam1->f_77, 28);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 3)) {
			gameplay::set_bit(&uParam1->f_77, 29);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 30);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 1)) {
			gameplay::set_bit(&uParam1->f_77, 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			uParam1->f_65 = 0;
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			uParam1->f_68 = vehicle::get_convertible_roof_state(iParam0);
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (vehicle::_vehicle_has_landing_gear(iParam0)) {
				switch (vehicle::get_landing_gear_state(iParam0)) {
				case 2:
				case 0:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::set_bit(&uParam1->f_77, 22);
					break;

				case 3:
				case 1:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::clear_bit(&uParam1->f_77, 22);
					break;

				case 4: gameplay::set_bit(&uParam1->f_77, 23); break;
				}
			}
			else {
				gameplay::set_bit(&uParam1->f_77, 23);
			}
		}
		if (!vehicle::get_vehicle_tyres_can_burst(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 9);
		}
		if (vehicle::is_vehicle_stolen(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 10);
		}
		if (vehicle::get_is_vehicle_primary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 13);
			vehicle::get_vehicle_custom_primary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		}
		if (vehicle::get_is_vehicle_secondary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 12);
		}
		func_314(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_313(iVar0 + 1));
			}
			iVar0++;
		}
		if (graphics::_does_vehicle_have_decal(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 11);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 11);
		}
		if (decorator::decor_exist_on(iParam0, "IgnoredByQuickSave") &&
			decorator::decor_get_bool(iParam0, "IgnoredByQuickSave")) {
			gameplay::set_bit(&uParam1->f_77, 27);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 27);
		}
	}
}

// Position - 0xDAF9
int func_313(int iParam0) {
	switch (iParam0) {
	case 1: return 0;

	case 2: return 1;

	case 3: return 2;

	case 4: return 3;

	case 5: return 4;

	case 6: return 5;

	case 7: return 6;

	case 8: return 7;

	case 9: return 8;

	case 10: return 24;

	case 11: return 25;

	case 12: return 26;
	}
	return 0;
}

// Position - 0xDBA9
int func_314(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			(*uParam1)[iVar0] = 0;
			if (vehicle::is_toggle_mod_on(*iParam0, iVar1)) {
				(*uParam1)[iVar0] = 1;
			}
		}
		else {
			(*uParam1)[iVar0] = vehicle::get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23) {
				(*uParam2)[0] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24) {
				(*uParam2)[1] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

// Position - 0xDC83
void func_315(var *uParam0) {
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&uParam0->f_1, "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49) {
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

// Position - 0xDD33
void func_316(int iParam0) {
	if (iParam0 != 24 && iParam0 != 25) {
	}
	func_310(iParam0);
	func_306(iParam0, 0);
}

// Position - 0xDD5A
void func_317() {
	func_320();
	func_318();
}

// Position - 0xDD6A
void func_318() {
	if (!iLocal_831) {
		if (func_36(iLocal_874)) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_874, 0)) {
				func_65(iLocal_874, -1);
				func_64(iLocal_874, 318);
				iLocal_831 = 1;
			}
		}
	}
	if (!iLocal_832) {
		if (player::get_player_wanted_level(player::player_id()) > 0) {
			func_319(320, 0);
			iLocal_832 = 1;
		}
	}
	else if (player::get_player_wanted_level(player::player_id()) == 0) {
		func_63(0, 320);
		iLocal_832 = 0;
	}
}

// Position - 0xDDE2
void func_319(int iParam0, int iParam1) {
	int iVar0;

	Global_55832 = iParam0;
	if (!Global_55830) {
		Global_55830 = 1;
	}
	if (iParam1) {
		iVar0 = 0;
		while (iVar0 < Global_67917) {
			if (Global_67918[iVar0 /*9*/] == iParam0) {
				Global_67918[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

// Position - 0xDE2C
void func_320() {}

// Position - 0xDE34
void func_321() {
	if (!iLocal_28 && iLocal_683 != 5) {
		if (iLocal_683 > 0) {
			func_322();
		}
	}
}

// Position - 0xDE57
void func_322() {
	float fVar0;
	int iVar1;

	fVar0 = 600f;
	if (!func_36(iLocal_874)) {
		if (!func_36(iLocal_875) && !func_36(Local_868)) {
			func_324(1);
			return;
		}
		if (func_36(Local_868) && !func_151(player::player_ped_id(), Local_868, fVar0, 1)) {
			func_324(2);
		}
	}
	else {
		iVar1 = 0;
		if (!func_151(player::player_ped_id(), iLocal_874, fVar0, 1)) {
			iVar1++;
		}
		if (func_36(iLocal_875)) {
			if (!func_151(player::player_ped_id(), iLocal_875, fVar0, 1)) {
				iVar1++;
			}
		}
		else {
			iVar1++;
		}
		if (func_36(Local_868)) {
			if (!func_151(player::player_ped_id(), Local_868, fVar0, 1)) {
				iVar1++;
			}
		}
		else {
			iVar1++;
		}
		if (iVar1 >= 3) {
			func_324(2);
			return;
		}
		iVar1 = 0;
		if (func_323(iLocal_874)) {
			iVar1++;
		}
		if (func_36(iLocal_875)) {
			if (func_323(iLocal_875)) {
				iVar1++;
			}
		}
		else {
			iVar1++;
		}
		if (func_36(Local_868)) {
			if (func_323(Local_868)) {
				iVar1++;
			}
		}
		else {
			iVar1++;
		}
		if (iVar1 >= 3) {
			func_324(3);
			return;
		}
	}
}

// Position - 0xDF9D
bool func_323(int iParam0) {
	if (func_36(iParam0)) {
		if (vehicle::is_vehicle_stuck_timer_up(iParam0, 0, 7000) ||
			vehicle::is_vehicle_stuck_timer_up(iParam0, 3, 30000) ||
			vehicle::is_vehicle_stuck_timer_up(iParam0, 2, 30000) ||
			vehicle::is_vehicle_stuck_timer_up(iParam0, 1, 40000)) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

// Position - 0xDFF8
void func_324(int iParam0) {
	ui::clear_prints();
	func_60();
	switch (iParam0) {
	case 0: break;

	case 1: sLocal_818 = "PRA_FWRECK"; break;

	case 2: sLocal_818 = "PRA_FFAR"; break;

	case 3: sLocal_818 = "PRA_FSTUCK"; break;
	}
	iLocal_683 = 5;
	iLocal_684 = 0;
}

// Position - 0xE050
bool func_325(int iParam0) {
	if (func_10(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xE070
void func_326() {
	if (!func_96(36)) {
		func_327(21, 0, 0);
	}
}

// Position - 0xE08A
void func_327(int iParam0, int iParam1, int iParam2) {
	if (iParam1) {
		if (!func_339(iParam0, 0, 0)) {
			if (iParam2 && Global_91543.f_18[iParam0]) {
				if (func_338(iParam0) == 3 && !func_337(iParam0)) {
					func_336(iParam0);
					func_335(iParam0, 0, 0);
					func_329(iParam0, 1, 0);
					func_328(iParam0);
				}
				else {
					func_335(iParam0, 1, 0);
					func_328(iParam0);
				}
			}
			else {
				func_335(iParam0, 0, 0);
				func_329(iParam0, 1, 0);
				func_328(iParam0);
			}
		}
		else {
			func_329(iParam0, 1, 0);
			func_328(iParam0);
		}
	}
	else if (func_339(iParam0, 0, 0)) {
		func_329(iParam0, 0, 0);
		func_329(iParam0, 1, 0);
		func_328(iParam0);
	}
}

// Position - 0xE149
void func_328(int iParam0) {
	Global_91543.f_160[iParam0] = 1;
	Global_91543.f_159 = 1;
}

// Position - 0xE163
void func_329(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::clear_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_334() == 0) {
			iVar0 = func_332(func_333(iParam0), -1, 0);
			gameplay::clear_bit(&iVar0, iParam1);
			func_330(func_333(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::clear_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0xE1CC
void func_330(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_331(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0xE1FC
int func_331(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_46();
		if (iVar1 > -1) {
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else {
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

// Position - 0xE230
int func_332(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_331(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0xE262
int func_333(int iParam0) {
	switch (iParam0) {
	case 0: return 822;

	case 1: return 823;

	case 2: return 824;

	case 3: return 825;

	case 4: return 826;

	case 5: return 827;

	case 6: return 828;

	case 7: return 829;

	case 8: return 830;

	case 9: return 831;

	case 10: return 832;

	case 11: return 833;

	case 12: return 834;

	case 13: return 835;

	case 14: return 836;

	case 15: return 838;

	case 16: return 839;

	case 17: return 840;

	case 18: return 841;

	case 19: return 842;

	case 20: return 843;

	case 21: return 844;

	case 22: return 845;

	case 23: return 846;

	case 24: return 847;

	case 25: return 848;

	case 26: return 849;

	case 27: return 850;

	case 28: return 851;

	case 29: return 852;

	case 30: return 853;

	case 31: return 854;

	case 32: return 855;

	case 33: return 856;

	case 34: return 857;

	case 35: return 858;

	case 36: return 859;

	case 37: return 860;

	case 38: return 861;

	case 39: return 862;

	case 40: return 866;

	case 41: return 867;

	case 42: return 868;

	case 43: return 869;

	case 44: return 5847;

	case 45: return 3780;

	default: break;
	}
	return 6022;
}

// Position - 0xE529
int func_334() { return Global_25190; }

// Position - 0xE534
void func_335(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::set_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_334() == 0) {
			iVar0 = func_332(func_333(iParam0), -1, 0);
			gameplay::set_bit(&iVar0, iParam1);
			func_330(func_333(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::set_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0xE59D
void func_336(int iParam0) {
	if (Global_91543.f_18[iParam0]) {
		func_335(iParam0, 10, 1);
		func_335(iParam0, 19, 1);
	}
}

// Position - 0xE5C4
int func_337(int iParam0) { return func_339(iParam0, 5, 1); }

// Position - 0xE5D4
int func_338(int iParam0) {
	switch (iParam0) {
	case -1: return 6;

	case 0: return 0;

	case 1: return 0;

	case 2: return 0;

	case 3: return 0;

	case 4: return 0;

	case 5: return 0;

	case 6: return 0;

	case 7: return 1;

	case 8: return 1;

	case 9: return 1;

	case 10: return 1;

	case 11: return 1;

	case 12: return 1;

	case 13: return 1;

	case 14: return 1;

	case 15: return 1;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 2;

	case 23: return 2;

	case 24: return 2;

	case 25: return 2;

	case 26: return 2;

	case 27: return 2;

	case 28: return 3;

	case 29: return 3;

	case 30: return 3;

	case 31: return 3;

	case 32: return 3;

	case 33: return 3;

	case 34: return 3;

	case 35: return 3;

	case 36: return 3;

	case 37: return 3;

	case 38: return 3;

	case 39: return 4;

	case 40: return 4;

	case 41: return 4;

	case 42: return 4;

	case 43: return 4;

	case 44: return 4;

	case 45: return 5;
	}
	return 6;
}

// Position - 0xE847
bool func_339(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_334() == 0) {
			return gameplay::is_bit_set(func_332(func_333(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return false;
}

// Position - 0xE8A7
void func_340(vector3 vParam0, float fParam3, int iParam4, int iParam5) {
	if (func_341()) {
		gameplay::set_this_script_can_be_paused(0);
		gameplay::clear_bit(&Global_91491.f_20, 2);
		gameplay::set_game_paused(1);
		if (player::is_player_playing(player::player_id())) {
			player::set_player_control(player::player_id(), 0, 0);
		}
		Global_91487 = {vParam0};
		Global_91490 = fParam3;
		Global_91486 = 1;
		if (iParam4 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 14);
		}
		else {
			gameplay::clear_bit(&Global_91491.f_20, 14);
		}
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 24);
		}
		else {
			gameplay::clear_bit(&Global_91491.f_20, 24);
		}
		func_265(1);
	}
}

// Position - 0xE93C
bool func_341() {
	if (Global_91491 == 10 || Global_91491 == 9) {
		return true;
	}
	return false;
}

// Position - 0xE960
void func_342() {
	func_357();
	func_355();
	func_348();
	func_345();
	func_343();
}

// Position - 0xE97C
void func_343() {
	iLocal_1048[0] = 0;
	iLocal_1048[1] = 0;
	iLocal_1048[2] = 0;
	Local_688[0 /*8*/] = {func_344("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM")};
	Local_688[1 /*8*/] = {func_344("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "")};
	Local_688[2 /*8*/] = {func_344("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM")};
}

// Position - 0xEA05
struct<8> func_344(char *sParam0, char *sParam1, char *sParam2, char *sParam3, char *sParam4, char *sParam5) {
	struct<8> Var0;

	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

//Position - 0xEA43
void func_345()
{
	Local_134[0 /*25*/] = {func_347(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0)};
	func_346(&Local_134[0 /*25*/], vLocal_824, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_134[1 /*25*/] = {func_347(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0)};
	func_346(&Local_134[1 /*25*/], vLocal_824, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_134[2 /*25*/] = {func_347(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0)};
	func_346(&Local_134[2 /*25*/], vLocal_824, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_134[3 /*25*/] = {func_347(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0)};
	func_346(&Local_134[3 /*25*/], vLocal_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[4 /*25*/] = {func_347(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0)};
	func_346(&Local_134[4 /*25*/], vLocal_824, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_134[5 /*25*/] = {
		func_347(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s"))};
	func_346(&Local_134[5 /*25*/], 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f,
			 64.6268f, 10f, 10f, 5f);
	Local_134[6 /*25*/] = {
		func_347(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s"))};
	func_346(&Local_134[6 /*25*/], 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f,
			 60.0003f, 10f, 10f, 5f);
	Local_134[7 /*25*/] = {
		func_347(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s"))};
	func_346(&Local_134[7 /*25*/], 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f,
			 62.9454f, 10f, 10f, 5f);
	Local_134[8 /*25*/] = {func_347(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0)};
	func_346(&Local_134[8 /*25*/], vLocal_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[9 /*25*/] = {
		func_347(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s"))};
	func_346(&Local_134[9 /*25*/], 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f,
			 56.3395f, 10f, 10f, 5f);
	Local_134[10 /*25*/] = {func_347(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0)};
	func_346(&Local_134[10 /*25*/], vLocal_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[11 /*25*/] = {func_347(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0)};
	func_346(&Local_134[11 /*25*/], vLocal_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[12 /*25*/] = {
		func_347(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s"))};
	func_346(&Local_134[12 /*25*/], 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f,
			 56.5183f, 10f, 10f, 5f);
	Local_134[13 /*25*/] = {func_347(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0)};
	func_346(&Local_134[13 /*25*/], vLocal_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[14 /*25*/] = {func_347(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0)};
	func_346(&Local_134[14 /*25*/], vLocal_824, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_134[15 /*25*/] = {func_347(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0)};
	func_346(&Local_134[15 /*25*/], vLocal_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[16 /*25*/] = {func_347(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0)};
	func_346(&Local_134[16 /*25*/], vLocal_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[17 /*25*/] = {func_347(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0)};
	func_346(&Local_134[17 /*25*/], vLocal_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[18 /*25*/] = {func_347(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0)};
	func_346(&Local_134[18 /*25*/], vLocal_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_830 = 19;
}

// Position - 0xF228
void func_346(var *uParam0, vector3 vParam1, int iParam4, float fParam5, float fParam6, float fParam7, int iParam8,
			  vector3 vParam9, vector3 vParam12) {
	uParam0->f_3 = {vParam1};
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_9 = iParam4;
	uParam0->f_10 = iParam8;
	uParam0->f_11 = {vParam9};
	uParam0->f_14 = {vParam12};
}

// Position - 0xF26C
struct<25> func_347(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
	struct<25> Var0;

	Var0.f_9 = 1;
	Var0.f_10 = 3;
	Var0 = {vParam0};
	Var0.f_19 = {vParam3};
	Var0.f_22 = fParam6;
	Var0.f_23 = iParam7;
	return Var0;
}

//Position - 0xF2A6
void func_348()
{
	vector3 vVar0[6];

	vVar0[0 /*3*/] = {1251.308f, -400.6231f, 68.0926f};
	vVar0[1 /*3*/] = {1183.993f, -403.3443f, 66.8734f};
	vVar0[2 /*3*/] = {1161.54f, -372.6073f, 66.6034f};
	vVar0[3 /*3*/] = {1167.644f, -273.7987f, 67.9705f};
	vVar0[4 /*3*/] = {1252.362f, -247.353f, 77.5631f};
	vVar0[5 /*3*/] = {1330.062f, -341.0342f, 100.3476f};
	func_349(&vVar0, 6);
}

// Position - 0xF33E
void func_349(var *uParam0, int iParam1) {
	int iVar0;

	func_354(&uLocal_713);
	iVar0 = 0;
	while (iVar0 <= iParam1 - 1) {
		func_353(&uLocal_713, (*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	func_352(&uLocal_713);
	func_350(&uLocal_765, &uLocal_713, 50f);
}

// Position - 0xF387
void func_350(var *uParam0, var *uParam1, float fParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	if (uParam1->f_46 < 3) {
	}
	iVar0 = uParam1->f_46 - 1;
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_46 = uParam1->f_46;
	while (iVar1 < uParam1->f_46) {
		vVar3 = {(*uParam1)[iVar1 /*3*/] - (*uParam1)[iVar0 /*3*/]};
		vVar6 = {(*uParam1)[iVar2 /*3*/] - (*uParam1)[iVar1 /*3*/]};
		vVar3 = {vVar3 / FtoV(system::sqrt(vVar3.x * vVar3.x + vVar3.y * vVar3.y))};
		vVar6 = {vVar6 / FtoV(system::sqrt(vVar6.x * vVar6.x + vVar6.y * vVar6.y))};
		vVar9 = {vVar3 - vVar6};
		vVar9 = {vVar9 / FtoV(system::sqrt(vVar9.x * vVar9.x + vVar9.y * vVar9.y))};
		if (func_351(uParam1, (*uParam1)[iVar1 /*3*/] + vVar9)) {
			vVar9 = {-vVar9};
		}
		(*uParam0)[iVar1 /*3*/] = {(*uParam1)[iVar1 /*3*/] + vVar9 * FtoV(fParam2)};
		iVar0 = iVar1;
		iVar1++;
		iVar2 += 1 % uParam1->f_46;
	}
}

// Position - 0xF494
bool func_351(var *uParam0, struct<2> Param1, Vector3 vParam3) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_46 < 3) {
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = uParam0->f_46 - 1;
	while (iVar1 < uParam0->f_46) {
		if ((*uParam0)[iVar1 /*3*/].f_1 < Param1.f_1 && (*uParam0)[iVar2 /*3*/].f_1 >= Param1.f_1 ||
			(*uParam0)[iVar2 /*3*/].f_1 < Param1.f_1 && (*uParam0)[iVar1 /*3*/].f_1 >= Param1.f_1) {
			if ((*uParam0)[iVar1 /*3*/] + (Param1.f_1 - (*uParam0)[iVar1 /*3*/].f_1) /
											  ((*uParam0)[iVar2 /*3*/].f_1 - (*uParam0)[iVar1 /*3*/].f_1) *
											  ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]) <
				Param1) {
				iVar0 = !iVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return iVar0;
}

// Position - 0xF550
void func_352(var *uParam0) {
	int iVar0;
	float fVar1;

	if (uParam0->f_51 == 0) {
	}
	if (uParam0->f_46 < 3) {
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46) {
		uParam0->f_47 = {uParam0->f_47 + (*uParam0)[iVar0 /*3*/]};
		iVar0++;
	}
	uParam0->f_47 = {uParam0->f_47 / FtoV(system::to_float(iVar0))};
	iVar0 = 0;
	while (iVar0 < uParam0->f_46) {
		fVar1 = system::vdist2(uParam0->f_47, (*uParam0)[iVar0 /*3*/]);
		if (fVar1 > uParam0->f_50) {
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = system::sqrt(uParam0->f_50);
	uParam0->f_51 = 0;
}

// Position - 0xF5F0
void func_353(var *uParam0, vector3 vParam1) {
	if (uParam0->f_51 == 0) {
	}
	if (uParam0->f_46 >= 15) {
	}
	(*uParam0)[uParam0->f_46 /*3*/] = {vParam1};
	uParam0->f_46++;
}

// Position - 0xF621
void func_354(var *uParam0) {
	if (uParam0->f_51) {
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = {0f, 0f, 0f};
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

// Position - 0xF648
void func_355() {
	Local_840 = {func_356(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage"))};
	Local_854 = {func_356(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage"))};
}

// Position - 0xF696
struct<14> func_356(vector3 vParam0, float fParam3, int iParam4) {
	struct<14> Var0;

	Var0.f_1 = {vParam0};
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

//Position - 0xF6B9
void func_357()
{
	Local_868 = {func_358(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash"))};
}

// Position - 0xF6E3
struct<6> func_358(vector3 vParam0, float fParam3, int iParam4) {
	struct<6> Var0;

	Var0.f_1 = {vParam0};
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

//Position - 0xF705
void func_359()
{
	func_234(1);
	func_370(1);
	vehicle::set_vehicle_model_is_suppressed(joaat("trash"), 0);
	vehicle::set_vehicle_model_is_suppressed(joaat("towtruck"), 0);
	vehicle::set_vehicle_model_is_suppressed(joaat("s_m_y_garbage"), 0);
	func_62();
	func_369();
	func_368();
	func_360(0);
	script::terminate_this_thread();
}

// Position - 0xF74A
void func_360(int iParam0) {
	vector3 vVar0;

	if (iParam0) {
	}
	player::set_player_control(player::player_id(), 1, 0);
	ai::set_scenario_type_enabled("DRIVE", 1);
	ai::set_scenario_type_enabled("WORLD_VEHICLE_ATTRACTOR", 1);
	ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	ai::set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_37();
	func_367();
	func_366();
	func_365();
	func_364();
	func_216();
	if (iParam0) {
		if (entity::does_entity_exist(iLocal_874)) {
			if (entity::does_entity_exist(player::player_ped_id())) {
				if (!ped::is_ped_injured(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_874, 0)) {
						vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
						entity::set_entity_coords(player::player_ped_id(), vVar0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_362();
		ui::clear_prints();
		func_2();
	}
	else {
		func_361();
	}
	ui::_0x3DDA37128DD1ACA8(0);
	func_139(&iLocal_671, 0, 0);
	if (cam::does_cam_exist(iLocal_823)) {
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		cam::destroy_cam(iLocal_823, 0);
	}
}

// Position - 0xF82E
void func_361() {
	func_3();
	func_6(&Local_868);
	func_6(&iLocal_875);
	func_6(&iLocal_874);
	func_5(&Local_840, 1, 0, 1);
	func_5(&Local_854, 1, 0, 1);
	func_6(&iLocal_876);
}

// Position - 0xF86A
void func_362() {
	Global_14611 = 0;
	func_363();
}

// Position - 0xF87A
void func_363() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0xF89B
void func_364() {}

// Position - 0xF8A3
void func_365() {
	if (iLocal_837) {
		vehicle::remove_vehicle_asset(joaat("trash"));
	}
}

// Position - 0xF8BA
void func_366() {}

// Position - 0xF8C2
void func_367() { streaming::set_model_as_no_longer_needed(Local_868.f_5); }

// Position - 0xF8D3
void func_368() { func_327(21, 1, 0); }

// Position - 0xF8E3
void func_369() { Global_87679 = 0; }

// Position - 0xF8F0
void func_370(int iParam0) { Global_89130 = iParam0; }

// Position - 0xF8FE
void func_371() {
	int iVar0;

	if (script::has_script_loaded("buddyDeathResponse")) {
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_101700.f_8044 || func_32(0)) {
		if (!func_372()) {
			iVar0 = func_31();
			if (iVar0 != -1) {
				if (!func_19(iVar0)) {
					return;
				}
				gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 5);
				return;
			}
		}
		else {
			func_24();
		}
	}
}

// Position - 0xF96F
int func_372() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}
