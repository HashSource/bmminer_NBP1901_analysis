int sub_183FC(int param0, int param1, uint32_t* param2) {
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
            int v5 = (uint32_t)*(uint16_t*)((char*)param2 + 35);
            uint32_t* ptr2 = (uint32_t)*(uint16_t*)((char*)param2 + 37);
            uint32_t v6 = 0x43314235;
            do {
                int v7 = *(ptr1 - SOCK_STREAM);
                if(v7 != 0) {
                    param1 = *ptr1;
                    int v8 = v7 - v5;
                    int v9 = v8 >= 0 ? ((v8 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v8 >>> 29) & SOCK_STREAM ? 2: (v8 >>> 28) & SOCK_STREAM ? 3: (v8 >>> 27) & SOCK_STREAM ? 4: (v8 >>> 26) & SOCK_STREAM ? 5: (v8 >>> 25) & SOCK_STREAM ? 6: (v8 >>> 24) & SOCK_STREAM ? 7: (v8 >>> 23) & SOCK_STREAM ? 8: (v8 >>> 22) & SOCK_STREAM ? 9: (v8 >>> 21) & SOCK_STREAM ? 10: (v8 >>> 20) & SOCK_STREAM ? 11: (v8 >>> 19) & SOCK_STREAM ? 12: (v8 >>> 18) & SOCK_STREAM ? 13: (v8 >>> 17) & SOCK_STREAM ? 14: (v8 >>> 16) & SOCK_STREAM ? 15: (v8 >>> 15) & SOCK_STREAM ? 16: (v8 >>> 14) & SOCK_STREAM ? 17: (v8 >>> 13) & SOCK_STREAM ? 18: (v8 >>> 12) & SOCK_STREAM ? 19: (v8 >>> 11) & SOCK_STREAM ? 20: (v8 >>> 10) & SOCK_STREAM ? 21: (v8 >>> 9) & SOCK_STREAM ? 22: (v8 >>> 8) & SOCK_STREAM ? 23: (v8 >>> 7) & SOCK_STREAM ? 24: (v8 >>> 6) & SOCK_STREAM ? 25: (v8 >>> 5) & SOCK_STREAM ? 26: (v8 >>> 4) & SOCK_STREAM ? 27: (v8 >>> 3) & SOCK_STREAM ? 28: (v8 >>> 2) & SOCK_STREAM ? 29: (v8 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v8 & SOCK_STREAM ? 31: 32) >>> 5: 0;
                    if(param1 == 0) {
                        v9 = 0;
                    }
                    if((param1 == ptr2 ? v9 & SOCK_STREAM: 0) != 0) {
                        uint32_t v10 = v6;
                        uint32_t __s1 = sub_1E0C0();
                        int v11 = strcmp((char*)__s1, "NBS2003");
                        v6 = v10;
                        if(v11 == 0) {
                            __ptr1 = 0;
                            v1 = 0;
                            *(int*)&v2 = 0;
                            v0 = 0;
                            int v12 = 0;
                            sub_18360(param0, &__ptr1, 16);
                            sub_182FC(param0, &v12);
                            v6 = v10;
                            if(__ptr1 != 810955078 || v6 != v1 || v2 != 49 || (uint32_t)(v12 - 3) > SOCK_STREAM) {
                                goto loc_18574;
                            }
                            else if((ptr2 == 650 && v5 == 0x500) != 0) {
                                param2 = &g258;
                            }
                            else {
                                param2 = &g271;
                                char v13 = v5 == 1300 && ptr2 == 625;
                                if(v13 != 0) {
                                    param2 = &g23F;
                                }
                                if(v13 == 0) {
                                    if(((int)ptr2 >= 625 ? (((int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 30) & SOCK_STREAM) ? SOCK_STREAM: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 29) & SOCK_STREAM) ? 2: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 28) & SOCK_STREAM) ? 3: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 27) & SOCK_STREAM) ? 4: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 26) & SOCK_STREAM) ? 5: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 25) & SOCK_STREAM) ? 6: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 24) & SOCK_STREAM) ? 7: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 23) & SOCK_STREAM) ? 8: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 22) & SOCK_STREAM) ? 9: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 21) & SOCK_STREAM) ? 10: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 20) & SOCK_STREAM) ? 11: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 19) & SOCK_STREAM) ? 12: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 18) & SOCK_STREAM) ? 13: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 17) & SOCK_STREAM) ? 14: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 16) & SOCK_STREAM) ? 15: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 15) & SOCK_STREAM) ? 16: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 14) & SOCK_STREAM) ? 17: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 13) & SOCK_STREAM) ? 18: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 12) & SOCK_STREAM) ? 19: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 11) & SOCK_STREAM) ? 20: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 10) & SOCK_STREAM) ? 21: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 9) & SOCK_STREAM) ? 22: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 8) & SOCK_STREAM) ? 23: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 7) & SOCK_STREAM) ? 24: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 6) & SOCK_STREAM) ? 25: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 5) & SOCK_STREAM) ? 26: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 4) & SOCK_STREAM) ? 27: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 3) & SOCK_STREAM) ? 28: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> 2) & SOCK_STREAM) ? 29: (int*)((int)(int*)((int)(uint32_t*)((char*)ptr2 - 625) >>> SOCK_STREAM) & SOCK_STREAM) ? 30: (uint32_t*)((int)ptr2 & SOCK_STREAM) != SOCK_STREAM ? 31: 32) >>> 5) & (v5 >= 0x500 ? (((v5 - 0x500) >>> 30) & SOCK_STREAM ? SOCK_STREAM: ((v5 - 0x500) >>> 29) & SOCK_STREAM ? 2: ((v5 - 0x500) >>> 28) & SOCK_STREAM ? 3: ((v5 - 0x500) >>> 27) & SOCK_STREAM ? 4: ((v5 - 0x500) >>> 26) & SOCK_STREAM ? 5: ((v5 - 0x500) >>> 25) & SOCK_STREAM ? 6: ((v5 - 0x500) >>> 24) & SOCK_STREAM ? 7: ((v5 - 0x500) >>> 23) & SOCK_STREAM ? 8: ((v5 - 0x500) >>> 22) & SOCK_STREAM ? 9: ((v5 - 0x500) >>> 21) & SOCK_STREAM ? 10: ((v5 - 0x500) >>> 20) & SOCK_STREAM ? 11: ((v5 - 0x500) >>> 19) & SOCK_STREAM ? 12: ((v5 - 0x500) >>> 18) & SOCK_STREAM ? 13: ((v5 - 0x500) >>> 17) & SOCK_STREAM ? 14: ((v5 - 0x500) >>> 16) & SOCK_STREAM ? 15: ((v5 - 0x500) >>> 15) & SOCK_STREAM ? 16: ((v5 - 0x500) >>> 14) & SOCK_STREAM ? 17: ((v5 - 0x500) >>> 13) & SOCK_STREAM ? 18: ((v5 - 0x500) >>> 12) & SOCK_STREAM ? 19: ((v5 - 0x500) >>> 11) & SOCK_STREAM ? 20: ((v5 - 0x500) >>> 10) & SOCK_STREAM ? 21: ((v5 - 0x500) >>> 9) & SOCK_STREAM ? 22: ((v5 - 0x500) >>> 8) & SOCK_STREAM ? 23: ((v5 - 0x500) >>> 7) & SOCK_STREAM ? 24: ((v5 - 0x500) >>> 6) & SOCK_STREAM ? 25: ((v5 - 0x500) >>> 5) & SOCK_STREAM ? 26: ((v5 - 0x500) >>> 4) & SOCK_STREAM ? 27: ((v5 - 0x500) >>> 3) & SOCK_STREAM ? 28: ((v5 - 0x500) >>> 2) & SOCK_STREAM ? 29: ((v5 - 0x500) >>> SOCK_STREAM) & SOCK_STREAM ? 30: v5 & SOCK_STREAM ? 31: 32) >>> 5: 0): 0) == 0) {
                                        goto loc_18574;
                                    }
                                    param2 = &g23F;
                                    if(ptr2 == 650) {
                                        param2 = &g258;
                                    }
                                }
                            }
                        }
                        else {
                        loc_18574:
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
            __ptr1 = 0x71657266;
            v1 = 0x76656c20;
            *(int*)&v2 = 1847618661;
            v0 = 1830843503;
            __builtin_strcpy(&v3, "atch");
            sub_2E584(4, &__ptr1, 0);
            return -2;
        }
    }
    if(gvar_7EB9C <= 4) {
        return -1;
    }
    snprintf(&__ptr1, 0x800, "No work mode freq, chain = %d, mode = %d.\n", param0, param1);
    sub_2E584(4, &__ptr1, 0);
    return -1;
}
