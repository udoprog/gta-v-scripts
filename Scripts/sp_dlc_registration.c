void __EntryFunction__() {
	int iVar0;
	int iVar1;

	gameplay::start_save_data(&Global_2621548, 1, 1);
	gameplay::register_int_to_save(&Global_2621548, "aFakeSavedInt");
	gameplay::stop_save_data();
	gameplay::set_bit(&Global_2595907, 0);
	iVar0 = 1;
	iVar1 = gameplay::_0xA09F896CE912481F(1);
	if (iVar0 != iVar1) {
	}
}
