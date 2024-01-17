void sub_4C580(int param0, int param1, int param2) {
    if((uint32_t)(param1 + 2) <= SOCK_STREAM) {
        return;
    }
    sub_4C2FC(param0, param1);
    param0 = sub_4DAD4((int*)(param0 + 40), (char)param1, param2);
    if(param0 == param1) {
        return;
    }
    /*NO_RETURN*/ __assert_fail("c == d", "load.c", 0x11a, "lex_unget_unsave");
}
