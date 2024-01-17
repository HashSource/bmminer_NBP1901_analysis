int sub_4C5CC(int param0, int i) {
    int v0;
    int v1;
    int v2;
    char* ptr0;
    size_t v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int result;
    char v8;
    char v9;
    int result1;
    int __endptr;
    int v10;
    int v11;
    uint32_t* ptr1 = (uint32_t*)(param0 + 40);
    int v12 = param0;
    int v13 = i;
    sub_4D9B4(ptr1);
    if(*(int*)(v12 + 60) == 0x100) {
        sub_4D898(*(void**)(v12 + 64));
        *(int*)(v12 + 64) = 0;
        *(int*)(v12 + 68) = 0;
    }
    do {
        result1 = *(int*)(v12 + 20);
        if(result1 == 0) {
            sub_4C3B8(v12, v13);
            result1 = param0;
        }
        int v14 = result1 - 9;
        v9 = result1 == 32;
        v8 = (uint32_t)result1 >= 32;
        if(result1 != 32) {
            v9 = v14 == SOCK_STREAM;
            v8 = (uint32_t)v14 >= SOCK_STREAM;
        }
        result = v8 == 0 || v9 != 0;
    }
    while(v8 == 0 || v9 != 0 || result1 == 13);
    if(result1 == -1) {
        *(int*)(v12 + 60) = result;
        return result;
    }
    if(result1 != -2) {
        sub_4DAB0(ptr1, (char)result1);
        result = result1 & 0xffffffdf;
        if(((result - 91) & 0xfffffffd) == 0) {
            *(int*)(v12 + 60) = result1;
            return result1;
        }
        v9 = result1 != 44 ? result1 == 58: SOCK_STREAM;
        int v15 = v9 != 0;
        if(v9 != 0) {
            *(int*)(v12 + 60) = result1;
            return result1;
        }
        if(result1 != 34) {
            v15 = result1 - 48;
            v9 = result1 == 45;
            v8 = (uint32_t)result1 >= 45;
            if(result1 != 45) {
                v9 = v15 == 9;
                v8 = (uint32_t)v15 >= 9;
            }
            if((v8 != 0 && v9 == 0) && (uint32_t)(result - 65) <= 25) {
                do {
                    v7 = sub_4C540(v12, v13);
                }
                while((v7 & 0xffffffdf) - 65 <= 25);
                sub_4C580(v12, v7, v15);
                int __s1 = sub_4D9C8((int*)ptr1);
                char* __s1_1 = (char*)__s1;
                int v16 = strcmp((char*)__s1, "true");
                if(v16 == 0) {
                    *(int*)(v12 + 60) = 259;
                    return 259;
                }
                int v17 = strcmp(__s1_1, "false");
                if(v17 == 0) {
                    result1 = 260;
                    *(int*)(v12 + 60) = result1;
                    return result1;
                }
                int v18 = strcmp(__s1_1, "null");
                if(v18 == 0) {
                    *(int*)(v12 + 60) = 261;
                    return 261;
                }
                *(int*)(v12 + 60) = -1;
                return -1;
            }
            else if((v8 != 0 && v9 == 0)) {
                for(i = *(char*)(*(int*)(v12 + 16) + v12 + 8); i != 0; i = *(char*)(result + v12 + 8)) {
                    sub_4DAB0(ptr1, (char)i);
                    result = *(int*)(v12 + 16) + SOCK_STREAM;
                    v15 = *(int*)(v12 + 36) + SOCK_STREAM;
                    *(int*)(v12 + 16) = result;
                    *(int*)(v12 + 36) = v15;
                }
                *(int*)(v12 + 60) = -1;
                return -1;
            }
            *(int*)(v12 + 60) = -1;
            if(result1 == 45) {
                int v19 = sub_4C540(v12, v13);
                v6 = v19;
                if(v19 != 48) {
                    if((uint32_t)(v19 - 48) <= 9) {
                    loc_4C844:
                        do {
                            v5 = sub_4C540(v12, v13);
                        }
                        while((uint32_t)(v5 - 48) <= 9);
                    loc_4C854:
                        int v20 = *(int*)(v12 + 52);
                        int v21 = v20 & 0x8;
                        if((v20 & 0x8) == 0 && (v5 != 46 ? v5 == 69: SOCK_STREAM) == 0 && v5 == 101) {
                            goto loc_4C970;
                        }
                        else if((v20 & 0x8) == 0 && (v5 != 46 ? v5 == 69: SOCK_STREAM) == 0) {
                            sub_4C580(v12, v5, v15);
                            int __nptr = sub_4D9C8((int*)ptr1);
                            int* ptr2 = __errno_location();
                            ptr2[0] = v21;
                            (uint64_t)param0 | ((uint64_t)i << 32) = strtoll((char*)__nptr, &__endptr, 10);
                            if(ptr2[0] != 34) {
                                if(*(int*)(v12 + 44) + __nptr == __endptr) {
                                    *(int*)(v12 + 64) = v11;
                                    *(int*)(v12 + 68) = i;
                                    *(int*)(v12 + 60) = 0x101;
                                    return 0x101;
                                }
                                /*NO_RETURN*/ __assert_fail("end == saved_text + lex->saved_text.length", "load.c", 541, "lex_scan_number");
                            }
                            sub_4C0CC(v13, v12, 15, ((uint64_t)v11 | ((uint64_t)i << 32)) < 0L ? "too big negative integer": "too big integer");
                            return *(int*)(v12 + 60);
                        }
                        if(v5 == 46) {
                            int v22 = *(int*)(v12 + 20);
                            if(v22 == 0) {
                                sub_4C3B8(v12, v13);
                                v22 = param0;
                            }
                            if((uint32_t)(v22 - 48) > 9) {
                                sub_4C2FC(v12, v22);
                                return *(int*)(v12 + 60);
                            }
                            sub_4DAB0(ptr1, (char)v22);
                            do {
                                v5 = sub_4C540(v12, v13);
                            }
                            while((uint32_t)(v5 - 48) <= 9);
                        }
                        if((v5 & 0xffffffdf) == 69) {
                        loc_4C970:
                            v5 = sub_4C540(v12, v13);
                            if(((v5 - 43) & 0xfffffffd) == 0) {
                                v5 = sub_4C540(v12, v13);
                            }
                            if((uint32_t)(v5 - 48) > 9) {
                                v6 = v5;
                                sub_4C580(v12, v6, v15);
                                return *(int*)(v12 + 60);
                            }
                            do {
                                v5 = sub_4C540(v12, v13);
                            }
                            while((uint32_t)(v5 - 48) <= 9);
                        }
                        sub_4C580(v12, v5, v15);
                        sub_4DB00(ptr1, (int64_t*)&__endptr);
                        if(param0 == 0) {
                            v15 = __endptr;
                            result = v10;
                            *(int*)(v12 + 60) = 258;
                            *(int*)(v12 + 64) = v15;
                            *(int*)(v12 + 68) = result;
                            return 258;
                        }
                        sub_4C0CC(v13, v12, 15, "real number overflow");
                        return *(int*)(v12 + 60);
                    }
                    sub_4C580(v12, v6, v15);
                    return *(int*)(v12 + 60);
                }
            }
            else if(result1 != 48) {
                goto loc_4C844;
            }
            v5 = sub_4C540(v12, v13);
            if((uint32_t)(v5 - 48) <= 9) {
                v6 = v5;
                sub_4C580(v12, v6, v15);
                return *(int*)(v12 + 60);
            }
            goto loc_4C854;
        }
        *(int*)(v12 + 64) = v15;
        *(int*)(v12 + 60) = -1;
    loc_4C774:
        while(SOCK_STREAM) {
            int v23 = v13;
            int v24 = v12;
        loc_4C77C:
            while(SOCK_STREAM) {
                v4 = sub_4C540(v24, v23);
            loc_4C788:
                while(SOCK_STREAM) {
                    switch(v4) {
                        case -2: {
                            sub_4D898(*(void**)(v12 + 64));
                            int result2 = *(int*)(v12 + 60);
                            *(int*)(v12 + 64) = 0;
                            *(int*)(v12 + 68) = 0;
                            return result2;
                        }
                        case -1: {
                            sub_4C0CC(v13, v12, 6, "premature end of input");
                            sub_4D898(*(void**)(v12 + 64));
                            int result2 = *(int*)(v12 + 60);
                            *(int*)(v12 + 64) = 0;
                            *(int*)(v12 + 68) = 0;
                            return result2;
                        }
                        case 34: {
                            v3 = sub_4D880((size_t)(*(int*)(v12 + 44) + SOCK_STREAM));
                            if(v3 == 0) {
                                sub_4D898(*(void**)(v12 + 64));
                                int result2 = *(int*)(v12 + 60);
                                *(int*)(v12 + 64) = 0;
                                *(int*)(v12 + 68) = 0;
                                return result2;
                            }
                            *(size_t*)(v12 + 64) = v3;
                            int v25 = sub_4D9C8((int*)ptr1);
                            ptr0 = v25 + SOCK_STREAM;
                            goto loc_4CAB0;
                        }
                        default: {
                            if((uint32_t)v4 > 31) {
                                v23 = v13;
                                v24 = v12;
                                if(v4 != 92) {
                                    continue loc_4C77C;
                                }
                                break loc_4C77C;
                            }
                            sub_4C580(v12, v4, v15);
                            if(v4 == 10) {
                                sub_4C0CC(v13, v12, 8, "unexpected newline");
                                sub_4D898(*(void**)(v12 + 64));
                                int result2 = *(int*)(v12 + 60);
                                *(int*)(v12 + 64) = 0;
                                *(int*)(v12 + 68) = 0;
                                return result2;
                            loc_4CAB0:
                                do {
                                    v2 = (uint32_t)ptr0[0];
                                    if(v2 != 34) {
                                        char* ptr3 = ptr0 + SOCK_STREAM;
                                        if(v2 != 92) {
                                            *(char*)v3 = (uint8_t)v2;
                                            ptr0 = ptr3;
                                            ++v3;
                                            goto loc_4CAB0;
                                        }
                                        int v26 = (uint32_t)ptr0[SOCK_STREAM];
                                        if(v26 != 117) {
                                            v9 = v26 == 98;
                                            v8 = v26 >= 98;
                                            if(v26 == 98) {
                                                *(char*)v3 = 8;
                                            }
                                            else {
                                                if((v8 != 0 && v9 == 0)) {
                                                    v9 = v26 == 110;
                                                    v8 = v26 >= 110;
                                                    if(v26 == 110) {
                                                        *(char*)v3 = 10;
                                                    }
                                                    else {
                                                        if((v8 != 0 && v9 == 0)) {
                                                            switch(v26) {
                                                                case 114: {
                                                                    *(char*)v3 = 13;
                                                                    ++v3;
                                                                    ptr0 += 2;
                                                                    goto loc_4CAB0;
                                                                }
                                                                case 116: {
                                                                    *(char*)v3 = 9;
                                                                    ++v3;
                                                                    ptr0 += 2;
                                                                    goto loc_4CAB0;
                                                                }
                                                                default: {
                                                                    /*NO_RETURN*/ __assert_fail("\n", "load.c", 464, "lex_scan_string");
                                                                    *(char*)v3 = (uint8_t)v26;
                                                                    ++v3;
                                                                    ptr0 += 2;
                                                                    goto loc_4CAB0;
                                                                }
                                                            }
                                                        }
                                                        if(v26 != 102) {
                                                            /*NO_RETURN*/ __assert_fail("\n", "load.c", 464, "lex_scan_string");
                                                            *(char*)v3 = (uint8_t)v26;
                                                            ++v3;
                                                            ptr0 += 2;
                                                            goto loc_4CAB0;
                                                        }
                                                        v26 = 12;
                                                        *(char*)v3 = (uint8_t)v26;
                                                    }
                                                    ++v3;
                                                    ptr0 += 2;
                                                    goto loc_4CAB0;
                                                }
                                                if(v26 != 47 && v26 != 92 && v26 != 34) {
                                                    /*NO_RETURN*/ __assert_fail("\n", "load.c", 464, "lex_scan_string");
                                                }
                                                *(char*)v3 = (uint8_t)v26;
                                            }
                                            ++v3;
                                            ptr0 += 2;
                                            goto loc_4CAB0;
                                        }
                                        sub_4C268(ptr3);
                                        int v27 = param0;
                                        if(v27 >= 0) {
                                            int v28 = v27 - 0xd800;
                                            char* ptr4 = ptr0 + 6;
                                            int v29 = v28;
                                            if((uint32_t)v28 < 0x400) {
                                                int v30 = (uint32_t)ptr0[6];
                                                char* ptr5 = ptr4;
                                                if(v30 != 92 || ptr0[7] != 117) {
                                                    v1 = v27;
                                                    sub_4C0CC(v13, v12, 8, "invalid Unicode \'\\u%04X\'");
                                                    sub_4D898(*(void**)(v12 + 64));
                                                    int result2 = *(int*)(v12 + 60);
                                                    *(int*)(v12 + 64) = 0;
                                                    *(int*)(v12 + 68) = 0;
                                                    return result2;
                                                }
                                                sub_4C268(ptr0 + 7);
                                                char* ptr6 = ptr5;
                                                int v31 = v29;
                                                if(param0 < 0) {
                                                    v1 = ptr6;
                                                    sub_4C0CC(v13, v12, 8, "invalid Unicode escape \'%.6s\'");
                                                    sub_4D898(*(void**)(v12 + 64));
                                                    int result2 = *(int*)(v12 + 60);
                                                    *(int*)(v12 + 64) = 0;
                                                    *(int*)(v12 + 68) = 0;
                                                    return result2;
                                                }
                                                int v32 = param0 - 0xdc00;
                                                ptr0 += 12;
                                                if((uint32_t)v32 >= 0x400) {
                                                    int v33 = param0;
                                                    v1 = v27;
                                                    sub_4C0CC(v13, v12, 8, "invalid Unicode \'\\u%04X\\u%04X\'");
                                                    sub_4D898(*(void**)(v12 + 64));
                                                    int result2 = *(int*)(v12 + 60);
                                                    *(int*)(v12 + 64) = 0;
                                                    *(int*)(v12 + 68) = 0;
                                                    return result2;
                                                }
                                                v27 = v31 * 0x400 + v32 + &ELFHeader;
                                            }
                                            else {
                                                if((uint32_t)(v27 - 0xdc00) < 0x400) {
                                                    v1 = v27;
                                                    sub_4C0CC(v13, v12, 8, "invalid Unicode \'\\u%04X\'");
                                                    sub_4D898(*(void**)(v12 + 64));
                                                    int result2 = *(int*)(v12 + 60);
                                                    *(int*)(v12 + 64) = 0;
                                                    *(int*)(v12 + 68) = 0;
                                                    return result2;
                                                }
                                                ptr0 = ptr4;
                                            }
                                            int v34 = sub_4DD30(v27, (char*)v3, (int*)&__endptr);
                                            if(v34 == 0) {
                                                v3 += __endptr;
                                                goto loc_4CAB0;
                                            }
                                            /*NO_RETURN*/ __assert_fail("\n", "load.c", 452, "lex_scan_string");
                                            v1 = v27;
                                            sub_4C0CC(v13, v12, 8, "invalid Unicode \'\\u%04X\'");
                                            sub_4D898(*(void**)(v12 + 64));
                                            int result2 = *(int*)(v12 + 60);
                                            *(int*)(v12 + 64) = 0;
                                            *(int*)(v12 + 68) = 0;
                                            return result2;
                                        }
                                        v1 = ptr0;
                                        sub_4C0CC(v13, v12, 8, "invalid Unicode escape \'%.6s\'");
                                        sub_4D898(*(void**)(v12 + 64));
                                        int result2 = *(int*)(v12 + 60);
                                        *(int*)(v12 + 64) = 0;
                                        *(int*)(v12 + 68) = 0;
                                        return result2;
                                    }
                                }
                                while(v2 != 34);
                                *(char*)v3 = 0;
                                v15 = *(int*)(v12 + 64);
                                *(int*)(v12 + 60) = 0x100;
                                *(int*)(v12 + 68) = v3 - v15;
                                return 0x100;
                            }
                            v1 = v4;
                            sub_4C0CC(v13, v12, 8, "control character 0x%x");
                            sub_4D898(*(void**)(v12 + 64));
                            int result2 = *(int*)(v12 + 60);
                            *(int*)(v12 + 64) = 0;
                            *(int*)(v12 + 68) = 0;
                            return result2;
                        }
                    }
                }
            }
            int v35 = sub_4C540(v24, v23);
            if(v35 != 117) {
                if((v35 != 92 ? (v35 & 0xffffffbf) == 34: SOCK_STREAM) != 0 || v35 == 47 || (v35 & 0xfffffff7) == 102 || ((v35 - 114) & 0xfffffffd) == 0) {
                    continue;
                }
                break;
            }
            int v36 = sub_4C540(v12, v13);
            int v37 = 4;
            v4 = v36;
            do {
                int v38 = v4 & 0xffffffdf;
                int v39 = v4 - 48;
                int v40 = v38 - 65;
                v9 = v40 == 5;
                v8 = v40 >= 5;
                if((v8 != 0 && v9 == 0)) {
                    v9 = v39 == 9;
                    v8 = (uint32_t)v39 >= 9;
                }
                if(v8 != 0 && v9 == 0) {
                    break loc_4C774;
                }
                int v41 = sub_4C540(v12, v13);
                v0 = v37;
                --v37;
                v4 = v41;
            }
            while(v0 != SOCK_STREAM);
            goto loc_4C788;
        }
        sub_4C0CC(v13, v12, 8, "invalid escape");
        sub_4D898(*(void**)(v12 + 64));
        int result2 = *(int*)(v12 + 60);
        *(int*)(v12 + 64) = 0;
        *(int*)(v12 + 68) = 0;
        return result2;
    }
    *(int*)(v12 + 60) = -1;
    return -1;
}
