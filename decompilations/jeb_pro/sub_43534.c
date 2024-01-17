void sub_43534(int param0, uint32_t* param1) {
    if(param0 + 4 == param1) {
        return;
    }
    uint32_t* ptr0 = param1;
    while((uint32_t)*(ptr0 + 3) <= SOCK_STREAM) {
        sub_43534(param0, (int)*ptr0);
        ptr0 = *(ptr0 + SOCK_STREAM);
        if(param0 + 4 == ptr0) {
            return;
        }
    }
    /*NO_RETURN*/ __assert_fail("debug_node_color(pTree,n) == clib_red || debug_node_color(pTree,n) == clib_black", "3rdparty/cstl/src/c_rb.c", 479, "debug_verify_property_1");
}
