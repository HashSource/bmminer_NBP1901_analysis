void sub_282E4(char* __format, int param1, int param2, int param3) {
    int __arg;
    vsnprintf(&g80768, 0x200, __format, &__arg);
    sub_2E584(3, &g80768, SOCK_STREAM);
    /*NO_RETURN*/ exit(SOCK_STREAM);
}
