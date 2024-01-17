uint32_t sub_37FA0(uint32_t* param0, int param1, int param2, uint32_t param3) {
    int v0;
    int __ptr;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    uint32_t v8;
    int v9;
    int v10;
    if(param3 != 0) {
        uint32_t v11 = param3;
        int v12 = param2 * param3 * 52;
        int* ptr0 = (int*)((param1 + 2107946) * 4);
        uint32_t result1 = 0;
        do {
            uint32_t result = result1;
            ++result1;
            int v13 = *((int*)(gvar_4FCB38 + (int)ptr0) + SOCK_STREAM);
            size_t cnt_read = fread(&__ptr, 1, 48, *param0);
            int* ptr1 = (int*)(v12 + v13);
            if(cnt_read != 48) {
                if(gvar_7EB9C <= 3) {
                    return result;
                }
                int __ptr1 = 1684107084;
                int v14 = 1919902496;
                int v15 = 1634738277;
                int v16 = 1919251572;
                int v17 = 0x6166206e;
                int v18 = 0x64656c69;
                short v19 = 2593;
                char v20 = 0;
                sub_2E584(3, &__ptr1, 0);
                return result;
            }
            *(ptr1 + SOCK_STREAM) = __ptr;
            int v21 = v6;
            int v22 = v1;
            int v23 = v5;
            *(ptr1 + 5) = v2;
            *(ptr1 + 6) = v21;
            *(ptr1 + 7) = v22;
            *(ptr1 + 8) = v23;
            int v24 = v7;
            int v25 = v3;
            param3 = v8;
            *(ptr1 + 9) = v0;
            *(ptr1 + 10) = v24;
            *(ptr1 + 11) = v25;
            int v26 = v9;
            param1 = v4;
            param2 = v10;
            *(uint32_t*)(ptr1 + 12) = param3;
            *(ptr1 + 2) = v26;
            *(ptr1 + 3) = param1;
            *(ptr1 + 4) = param2;
            *(uint32_t*)(v12 + v13) = result;
            v12 += 52;
        }
        while(result1 != v11);
        return result1;
    }
    return 0;
}
