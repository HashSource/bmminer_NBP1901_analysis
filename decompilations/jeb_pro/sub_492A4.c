int sub_492A4(int param0, int param1, int param2) {
    int __ptr1;
    int v0 = param0 + param2 + 12;
    int v1 = (int)gvar_505180;
    int result = 0;
    char v2 = (uint8_t)param0;
    char v3 = (uint8_t)param2;
    char v4 = (uint8_t)v0;
    char v5 = (uint8_t)(v0 >>> 8);
    int v6 = 0;
    int v7 = 0;
    int v8 = 0;
    int v9 = 101100117;
    if(v1 == 0) {
        result = sub_48ABC();
        if(result < 0) {
            snprintf(&__ptr1, 0x800, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_read");
            sub_2E584(0, &__ptr1, 0);
            return result;
        }
    }
    int v10 = (int)gvar_50517C;
    int v11 = param2 + 7;
    int v12 = sub_48520(v10, &v9, 8, &v8, v11);
    if(v12 == 0) {
        if(param2 != 0) {
            char* ptr0 = (char*)((char*)&v6 + SOCK_STREAM);
            char* ptr1 = (char*)(param1 - SOCK_STREAM);
            int v13 = (uint32_t)((uint8_t)param2 - SOCK_STREAM) + param1;
            do {
                param2 = (uint32_t)*ptr0;
                ++ptr0;
                *(ptr1 + SOCK_STREAM) = (uint8_t)param2;
                ++ptr1;
            }
            while(ptr1 != v13);
        }
        return result;
    }
    __ptr1 = 544499059;
    int v14 = 0x63204144;
    int v15 = 0x65766e6f;
    int v16 = 1869181810;
    int v17 = 0x204e206e;
    int v18 = 1818845542;
    int v19 = 681061;
    sub_2E584(0, &__ptr1, 0);
    return 0x80000300;
}
