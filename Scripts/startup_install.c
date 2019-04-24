void __EntryFunction__() {
	gameplay::network_set_script_is_safe_for_network_game();
	func_1("main_install", 1424);
}

// Position - 0x15
void func_1(char *sParam0, int iParam1) {
	script::request_script(sParam0);
	while (!script::has_script_loaded(sParam0)) {
		system::wait(0);
		script::request_script(sParam0);
	}
	system::start_new_script(sParam0, iParam1);
}
