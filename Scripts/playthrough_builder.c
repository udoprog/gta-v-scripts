void __EntryFunction__() {
	if (player::has_force_cleanup_occurred(2)) {
		script::terminate_this_thread();
	}
}
