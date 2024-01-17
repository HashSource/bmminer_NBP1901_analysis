void start(FUNCPTR rtld_fini, int param1, int param2, int param3, int argc) {
    char stack_end;
    __libc_start_main(&sub_12620, argc, &stack_end, &sub_602D8, &sub_60314, rtld_fini, &stack_end);
    /*NO_RETURN*/ abort();
}
