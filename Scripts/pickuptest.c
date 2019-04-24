void __EntryFunction__() {
  if (cam::is_screen_faded_out()) {
    cam::do_screen_fade_in(500);
  }
  if (player::has_force_cleanup_occurred(18)) {
    func_1();
  }
  while (true) {
    system::wait(0);
  }
}

// Position - 0x2F
void func_1() { script::terminate_this_thread(); }
