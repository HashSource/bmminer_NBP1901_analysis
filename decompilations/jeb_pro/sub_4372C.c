// Stale decompilation - Refresh this view to re-decompile this code
void sub_4372C(int param0) {
    uint32_t* ptr0 = *(uint32_t**)param0;
    sub_43534(param0, ptr0);
    if(param0 + 4 == ptr0 || ptr0[3] == 0) {
        sub_43594(param0, (int)ptr0);
        int v0 = -1;
        sub_4369C(param0, ptr0, NULL, &v0);
        return;
    }
    /*NO_RETURN*/ __assert_fail("debug_node_color(pTree,root) == clib_black", "3rdparty/cstl/src/c_rb.c", 486, "debug_verify_property_2");
}
