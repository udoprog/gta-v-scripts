void __EntryFunction__() {
	gameplay::start_save_data(&Global_2883584, 1, 1);
	func_1();
	gameplay::stop_save_data();
	gameplay::set_bit(&Global_2595907, 1);
}

// Position - 0x23
void func_1() { gameplay::register_int_to_save(&Global_2883584, "PILOT_SCHOOL_DUMMY_DATA"); }
