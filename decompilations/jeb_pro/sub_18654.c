int sub_18654(int param0, int param1, uint32_t* param2) {
    int v0;
    int v1;
    int __ptr1;
    char v2;
    int v3;
    uint32_t v4 = gvar_7F814;
    if(v4 != 0) {
        uint32_t* ptr0 = param2;
        if(*(char*)(v4 + 28) != 0) {
            param2 = *(uint32_t*)(param0 * 4 + v4);
            int* ptr1 = (int*)&gvar_7F81C;
            uint32_t* ptr2 = (uint32_t)*(uint16_t*)((char*)param2 + 35);
            int v5 = (uint32_t)*(uint16_t*)((char*)param2 + 37);
            uint32_t v6 = 0x43314235;
            do {
                int v7 = *(ptr1 - SOCK_STREAM);
                if(v7 != 0) {
                    param1 = *ptr1;
                    uint32_t* ptr3 = (uint32_t*)(v7 - (int)ptr2);
                    int v8 = (int)ptr3 >= 0 ? ((int*)((int)(int*)((int)ptr3 >>> 30) & SOCK_STREAM) ? SOCK_STREAM: (int*)((int)(int*)((int)ptr3 >>> 29) & SOCK_STREAM) ? 2: (int*)((int)(int*)((int)ptr3 >>> 28) & SOCK_STREAM) ? 3: (int*)((int)(int*)((int)ptr3 >>> 27) & SOCK_STREAM) ? 4: (int*)((int)(int*)((int)ptr3 >>> 26) & SOCK_STREAM) ? 5: (int*)((int)(int*)((int)ptr3 >>> 25) & SOCK_STREAM) ? 6: (int*)((int)(int*)((int)ptr3 >>> 24) & SOCK_STREAM) ? 7: (int*)((int)(int*)((int)ptr3 >>> 23) & SOCK_STREAM) ? 8: (int*)((int)(int*)((int)ptr3 >>> 22) & SOCK_STREAM) ? 9: (int*)((int)(int*)((int)ptr3 >>> 21) & SOCK_STREAM) ? 10: (int*)((int)(int*)((int)ptr3 >>> 20) & SOCK_STREAM) ? 11: (int*)((int)(int*)((int)ptr3 >>> 19) & SOCK_STREAM) ? 12: (int*)((int)(int*)((int)ptr3 >>> 18) & SOCK_STREAM) ? 13: (int*)((int)(int*)((int)ptr3 >>> 17) & SOCK_STREAM) ? 14: (int*)((int)(int*)((int)ptr3 >>> 16) & SOCK_STREAM) ? 15: (int*)((int)(int*)((int)ptr3 >>> 15) & SOCK_STREAM) ? 16: (int*)((int)(int*)((int)ptr3 >>> 14) & SOCK_STREAM) ? 17: (int*)((int)(int*)((int)ptr3 >>> 13) & SOCK_STREAM) ? 18: (int*)((int)(int*)((int)ptr3 >>> 12) & SOCK_STREAM) ? 19: (int*)((int)(int*)((int)ptr3 >>> 11) & SOCK_STREAM) ? 20: (int*)((int)(int*)((int)ptr3 >>> 10) & SOCK_STREAM) ? 21: (int*)((int)(int*)((int)ptr3 >>> 9) & SOCK_STREAM) ? 22: (int*)((int)(int*)((int)ptr3 >>> 8) & SOCK_STREAM) ? 23: (int*)((int)(int*)((int)ptr3 >>> 7) & SOCK_STREAM) ? 24: (int*)((int)(int*)((int)ptr3 >>> 6) & SOCK_STREAM) ? 25: (int*)((int)(int*)((int)ptr3 >>> 5) & SOCK_STREAM) ? 26: (int*)((int)(int*)((int)ptr3 >>> 4) & SOCK_STREAM) ? 27: (int*)((int)(int*)((int)ptr3 >>> 3) & SOCK_STREAM) ? 28: (int*)((int)(int*)((int)ptr3 >>> 2) & SOCK_STREAM) ? 29: (int*)((int)(int*)((int)ptr3 >>> SOCK_STREAM) & SOCK_STREAM) ? 30: (uint32_t*)((int)ptr3 & SOCK_STREAM) ? 31: 32) >>> 5: 0;
                    if(param1 == 0) {
                        v8 = 0;
                    }
                    if((param1 == v5 ? v8 & SOCK_STREAM: 0) != 0) {
                        uint32_t v9 = v6;
                        uint32_t __s1 = sub_1E0C0();
                        int v10 = strcmp((char*)__s1, "NBS2003");
                        v6 = v9;
                        if(v10 == 0) {
                            __ptr1 = 0;
                            v1 = 0;
                            *(int*)&v2 = 0;
                            v0 = 0;
                            int v11 = 0;
                            sub_18360(param0, &__ptr1, 16);
                            sub_182FC(param0, &v11);
                            v6 = v9;
                            if(__ptr1 != 810955078 || v6 != v1 || v2 != 49 || (uint32_t)(v11 - 3) > SOCK_STREAM) {
                                goto loc_187C8;
                            }
                            else {
                                int v12 = (int)ptr2 >= 0x500 ? ((int*)((int)(int*)((int)(ptr2 - 320) >>> 30) & SOCK_STREAM) ? SOCK_STREAM: (int*)((int)(int*)((int)(ptr2 - 320) >>> 29) & SOCK_STREAM) ? 2: (int*)((int)(int*)((int)(ptr2 - 320) >>> 28) & SOCK_STREAM) ? 3: (int*)((int)(int*)((int)(ptr2 - 320) >>> 27) & SOCK_STREAM) ? 4: (int*)((int)(int*)((int)(ptr2 - 320) >>> 26) & SOCK_STREAM) ? 5: (int*)((int)(int*)((int)(ptr2 - 320) >>> 25) & SOCK_STREAM) ? 6: (int*)((int)(int*)((int)(ptr2 - 320) >>> 24) & SOCK_STREAM) ? 7: (int*)((int)(int*)((int)(ptr2 - 320) >>> 23) & SOCK_STREAM) ? 8: (int*)((int)(int*)((int)(ptr2 - 320) >>> 22) & SOCK_STREAM) ? 9: (int*)((int)(int*)((int)(ptr2 - 320) >>> 21) & SOCK_STREAM) ? 10: (int*)((int)(int*)((int)(ptr2 - 320) >>> 20) & SOCK_STREAM) ? 11: (int*)((int)(int*)((int)(ptr2 - 320) >>> 19) & SOCK_STREAM) ? 12: (int*)((int)(int*)((int)(ptr2 - 320) >>> 18) & SOCK_STREAM) ? 13: (int*)((int)(int*)((int)(ptr2 - 320) >>> 17) & SOCK_STREAM) ? 14: (int*)((int)(int*)((int)(ptr2 - 320) >>> 16) & SOCK_STREAM) ? 15: (int*)((int)(int*)((int)(ptr2 - 320) >>> 15) & SOCK_STREAM) ? 16: (int*)((int)(int*)((int)(ptr2 - 320) >>> 14) & SOCK_STREAM) ? 17: (int*)((int)(int*)((int)(ptr2 - 320) >>> 13) & SOCK_STREAM) ? 18: (int*)((int)(int*)((int)(ptr2 - 320) >>> 12) & SOCK_STREAM) ? 19: (int*)((int)(int*)((int)(ptr2 - 320) >>> 11) & SOCK_STREAM) ? 20: (int*)((int)(int*)((int)(ptr2 - 320) >>> 10) & SOCK_STREAM) ? 21: (int*)((int)(int*)((int)(ptr2 - 320) >>> 9) & SOCK_STREAM) ? 22: (int*)((int)(int*)((int)(ptr2 - 320) >>> 8) & SOCK_STREAM) ? 23: (int*)((int)(int*)((int)(ptr2 - 320) >>> 7) & SOCK_STREAM) ? 24: (int*)((int)(int*)((int)(ptr2 - 320) >>> 6) & SOCK_STREAM) ? 25: (int*)((int)(int*)((int)(ptr2 - 320) >>> 5) & SOCK_STREAM) ? 26: (int*)((int)(int*)((int)(ptr2 - 320) >>> 4) & SOCK_STREAM) ? 27: (int*)((int)(int*)((int)(ptr2 - 320) >>> 3) & SOCK_STREAM) ? 28: (int*)((int)(int*)((int)(ptr2 - 320) >>> 2) & SOCK_STREAM) ? 29: (int*)((int)(int*)((int)(ptr2 - 320) >>> SOCK_STREAM) & SOCK_STREAM) ? 30: (uint32_t*)((int)ptr2 & SOCK_STREAM) ? 31: 32) >>> 5: 0;
                                if((v5 == 650 && ptr2 == 0x500) == 0) {
                                    if(ptr2 == 1300) {
                                        v12 |= SOCK_STREAM;
                                    }
                                    if((v5 == 625 ? v12 & SOCK_STREAM: 0) == 0) {
                                        goto loc_187C8;
                                    }
                                }
                                param2 = &g4EC;
                                if(v11 != 3) {
                                    param2 = &g4D8;
                                }
                            }
                        }
                        else {
                        loc_187C8:
                            param2 = ptr2;
                        }
                        if(ptr0 != 0) {
                            *ptr0 = param2;
                            return 0;
                        }
                    }
                }
                ptr1 += 2;
            }
            while(ptr1 != &gvar_7F8BC);
            if(gvar_7EB9C <= 4) {
                return -2;
            }
            __ptr1 = 0x746c6f76;
            v1 = 0x20656761;
            *(int*)&v2 = 0x6576656c;
            v0 = 1869488236;
            __builtin_strcpy(&v3, "t match");
            sub_2E584(4, &__ptr1, 0);
            return -2;
        }
    }
    if(gvar_7EB9C <= 4) {
        return -1;
    }
    snprintf(&__ptr1, 0x800, "No work mode voltage, chain = %d, mode = %d.\n", param0, param1);
    sub_2E584(4, &__ptr1, 0);
    return -1;
}
