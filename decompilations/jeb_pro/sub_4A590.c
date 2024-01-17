int sub_4A590(char* param0, int param1, int param2, int param3, int param4) {
    char* ptr0;
    int v0;
    char __s;
    int v1 = param2;
    char* ptr1 = param0;
    int v2 = param3;
    int v3 = param1;
    int v4 = 0;
    int v5 = v1("\n", SOCK_STREAM, param3, 0);
    if(v5 == 0) {
        int* ptr2 = (int*)(ptr1 + v3);
        char* ptr3 = ptr1;
        char* __format = "\\u%04X";
        while((uint32_t)ptr2 > (uint32_t)ptr3) {
            char* ptr4 = sub_4DF70(ptr3, (int)ptr2 - (int)ptr3, &v4);
            if(ptr4 == 0) {
                return -1;
            }
            int v6 = v4;
            int v7 = (v6 != 34 ? v6 == 92: SOCK_STREAM) != 0;
            if(v6 <= 31) {
                v7 |= SOCK_STREAM;
            }
            if(v7 == 0) {
                int v8 = v6 - 47;
                if(((param4 >>> 10) & (v8 >= 0 ? ((v8 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v8 >>> 29) & SOCK_STREAM ? 2: (v8 >>> 28) & SOCK_STREAM ? 3: (v8 >>> 27) & SOCK_STREAM ? 4: (v8 >>> 26) & SOCK_STREAM ? 5: (v8 >>> 25) & SOCK_STREAM ? 6: (v8 >>> 24) & SOCK_STREAM ? 7: (v8 >>> 23) & SOCK_STREAM ? 8: (v8 >>> 22) & SOCK_STREAM ? 9: (v8 >>> 21) & SOCK_STREAM ? 10: (v8 >>> 20) & SOCK_STREAM ? 11: (v8 >>> 19) & SOCK_STREAM ? 12: (v8 >>> 18) & SOCK_STREAM ? 13: (v8 >>> 17) & SOCK_STREAM ? 14: (v8 >>> 16) & SOCK_STREAM ? 15: (v8 >>> 15) & SOCK_STREAM ? 16: (v8 >>> 14) & SOCK_STREAM ? 17: (v8 >>> 13) & SOCK_STREAM ? 18: (v8 >>> 12) & SOCK_STREAM ? 19: (v8 >>> 11) & SOCK_STREAM ? 20: (v8 >>> 10) & SOCK_STREAM ? 21: (v8 >>> 9) & SOCK_STREAM ? 22: (v8 >>> 8) & SOCK_STREAM ? 23: (v8 >>> 7) & SOCK_STREAM ? 24: (v8 >>> 6) & SOCK_STREAM ? 25: (v8 >>> 5) & SOCK_STREAM ? 26: (v8 >>> 4) & SOCK_STREAM ? 27: (v8 >>> 3) & SOCK_STREAM ? 28: (v8 >>> 2) & SOCK_STREAM ? 29: (v8 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v8 & SOCK_STREAM ? 31: 32) >>> 5: 0)) == 0 && ((param4 >>> 6) & v6 > 127) == 0) {
                    goto loc_4A6D4;
                }
            }
            if(ptr1 != ptr3) {
                int v9 = v1((int)ptr1, (int)(int*)(ptr3 - ptr1), v2);
                if(v9 != 0) {
                    return -1;
                }
            }
            if(ptr4 == ptr3) {
                return v1("\n", SOCK_STREAM, v2);
            }
            int v10 = v4;
            char v11 = v10 < 12;
            char v12 = v10 == 12;
            char v13 = (((v10 - 12) ^ v10) & (v10 ^ 0xc)) < 0;
            if(v10 == 12) {
                v0 = 2;
                ptr0 = "\\f";
            }
            else if((v12 == 0 && v13 == v11)) {
                v11 = v10 < 34;
                v12 = v10 == 34;
                v13 = (((v10 - 34) ^ v10) & (v10 ^ 0x22)) < 0;
                if(v10 != 34) {
                    if((v12 == 0 && v13 == v11)) {
                        switch(v10) {
                            case 47: {
                                v0 = 2;
                                ptr0 = "\\/";
                                goto loc_4A6C4;
                            }
                            case 92: {
                                v0 = 2;
                                ptr0 = "\\\\";
                                goto loc_4A6C4;
                            }
                            default: {
                                goto loc_4A6F8;
                            }
                        }
                    }
                    if(v10 == 13) {
                        v0 = 2;
                        ptr0 = "\\r";
                        goto loc_4A6C4;
                    }
                    if(v10 < &ELFHeader) {
                        snprintf(&__s, 13, __format);
                        ptr0 = &__s;
                        v0 = 6;
                    }
                    else {
                    loc_4A734:
                        int v14 = v10 - &ELFHeader;
                        int v15 = (uint32_t)(uint16_t)(v14 & 0x3ff) | 0xdc00;
                        v4 = v14;
                        snprintf(&__s, 13, "\\u%04X\\u%04X", (uint32_t)(uint16_t)((v14 >>> 10) & 0x3ff) | 0xd800);
                        ptr0 = &__s;
                        v0 = 12;
                    }
                    goto loc_4A6C4;
                }
                v0 = 2;
                ptr0 = "\\\"";
            }
            else {
                if(v10 != 9) {
                    if(v10 != 10) {
                        if(v10 != 8) {
                        loc_4A6F8:
                            if(v10 >= &ELFHeader) {
                                goto loc_4A734;
                            }
                            snprintf(&__s, 13, __format);
                            ptr0 = &__s;
                            v0 = 6;
                            goto loc_4A6C4;
                        }
                        v0 = 2;
                        ptr0 = "\\b";
                        goto loc_4A6C4;
                    }
                    v0 = 2;
                    ptr0 = "\\n";
                    goto loc_4A6C4;
                }
                v0 = 2;
                ptr0 = "\\t";
            }
        loc_4A6C4:
            int v16 = v1((int)ptr0, v0, v2);
            if(v16 != 0) {
                return -1;
            }
            ptr1 = ptr4;
        loc_4A6D4:
            ptr3 = ptr4;
        }
        if(ptr1 == ptr3) {
            return v1("\n", SOCK_STREAM, v2);
        }
        int v17 = v1((int)ptr1, (int)(int*)(ptr3 - ptr1), v2);
        if(v17 != 0) {
            return -1;
        }
        return v1("\n", SOCK_STREAM, v2);
    }
    return -1;
}
