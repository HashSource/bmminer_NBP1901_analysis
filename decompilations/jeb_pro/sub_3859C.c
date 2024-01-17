uint32_t sub_3859C(int param0, char* param1, int param2) {
    char __ptr1;
    char v0 = param0 < 0;
    char v1 = param0 == 0;
    if(param0 != 0) {
        v0 = param2 < 0;
        v1 = param2 == 0;
    }
    if(param1 == 0 || v1 != 0 || v0 != 0) {
        if(gvar_7EB9C <= 4) {
            return 0xffffffff;
        }
        snprintf(&__ptr1, 0x800, "s2hex para error dst(%p), src(%p), inlen(%d)\n", param0, param1, param2);
        sub_2E584(4, &__ptr1, 0);
        return 0xffffffff;
    }
    uint32_t v2 = (uint32_t)(param2 & SOCK_STREAM);
    if(param2 >> SOCK_STREAM != 0) {
        int* ptr0 = (int*)((param2 >> SOCK_STREAM) * 2 + param1);
        char* ptr1 = param1;
        char* ptr2 = (char*)(param0 - SOCK_STREAM);
        do {
            int v3 = (int)*(ptr1 + SOCK_STREAM);
            int v4 = (int)*ptr1;
            ptr1 += 2;
            int v5 = sub_38520(v4);
            int v6 = sub_38520(v3);
            *(ptr2 + SOCK_STREAM) = ((uint8_t)v5 * 16) ^ (uint8_t)v6;
            ++ptr2;
        }
        while(ptr1 != ptr0);
    }
    if(v2 == 0) {
        return param2 >> SOCK_STREAM;
    }
    int v7 = sub_38520((int)*((param2 >> SOCK_STREAM) * 2 + param1));
    int v8 = sub_384C0(0);
    *(char*)((param2 >> SOCK_STREAM) + param0) = ((uint8_t)v7 * 16) ^ (uint8_t)v8;
    return (uint32_t)((param2 >> SOCK_STREAM) + v2);
}
