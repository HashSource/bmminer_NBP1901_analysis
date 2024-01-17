int sub_4369C(int param0, uint32_t* param1, int* param2, uint32_t* param3) {
    uint32_t* ptr0 = param1;
    int v0 = param0 + 4;
    int v1 = param0;
    int* ptr1 = param2;
    uint32_t* ptr2 = param3;
    int* ptr3 = (int*)((char*)param2 + SOCK_STREAM);
    while(ptr0 != v0) {
        int* ptr4 = *ptr0;
        if(*(ptr0 + 3) == 0) {
            ptr1 = ptr3;
            ptr3 = (char*)ptr3 + SOCK_STREAM;
        }
        param0 = sub_4369C(v1, (int)ptr4, (int)ptr1, (int)ptr2);
        ptr0 = *(ptr0 + SOCK_STREAM);
    }
    param3 = *ptr2;
    if(param3 != -1) {
        if(param3 == ptr3) {
            return param0;
        }
        /*NO_RETURN*/ __assert_fail("black_count == *path_black_count", "3rdparty/cstl/src/c_rb.c", 517, "debug_verify_property_5_helper");
    }
    *ptr2 = ptr3;
    return param0;
}
