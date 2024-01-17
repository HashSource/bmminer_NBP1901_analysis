void sub_4A920(int param0, int param1, int param2, int param3, int param4, int param5) {
    int v0;
    int v1;
    int v2;
    char* __s2_2;
    int v3;
    char __s2;
    int v4 = param0;
    if(param0 != 0) {
        int v5 = param3;
        param3 = *(int*)v4;
        int v6 = param1 & &ELFHeader;
        int v7 = param1 & 0xfffeffff;
        int v8 = param2;
        int v9 = param1;
        if((uint32_t)param3 <= 7) {
            jump *(int*)(param3 * 4 + &gvar_4A954);
            if(v40 == 0) {
                int v10 = sub_4E49C((int*)v4);
                if(v6 == 0) {
                    int v11 = param4("\n", SOCK_STREAM, param5);
                    if(v11 == 0) {
                        if(v10 == 0) {
                            sub_4BCA4(v5, &__s2);
                            param4("}", SOCK_STREAM, param5);
                            return;
                        }
                        goto loc_4ABD4;
                    }
                }
                else {
                    if(v10 == 0) {
                        sub_4BCA4(v5, &__s2);
                        return;
                    }
                loc_4ABD4:
                    int v12 = v8 + SOCK_STREAM;
                    int v13 = sub_4A818(v7, v8 + SOCK_STREAM, 0, param4, param5);
                    if(v13 == 0) {
                        if((v9 & 0x80) == 0) {
                            v3 = v6;
                            int v14 = v12;
                            v12 = 0;
                            int* ptr0 = (int*)v10;
                            v10 = &__s2;
                            int v15 = v41;
                            v41 = v8;
                            do {
                                int v16 = sub_4E4E8((int*)v4, ptr0);
                                int __s = sub_4E51C((int)ptr0);
                                size_t v17 = strlen((char*)__s);
                                sub_4A590((char*)__s, (int)v17, param4, param5, v7);
                                int v18 = param4(v43, v15, param5);
                                if(v18 != 0) {
                                    return;
                                }
                                int* ptr1 = sub_4E528(ptr0);
                                sub_4A920((int)ptr1, v7, v14, v5, param4, param5);
                                if(param0 != 0) {
                                    return;
                                }
                                if(v16 == 0) {
                                    __s2_2 = v10;
                                    v2 = v3;
                                    int v19 = sub_4A818(v7, v41, 0, param4, param5);
                                    if(v19 != 0) {
                                        return;
                                    }
                                    goto loc_4B0B0;
                                }
                                else {
                                    int v20 = param4(",", SOCK_STREAM, param5);
                                    if(v20 != 0) {
                                        return;
                                    }
                                    ptr0 = v16;
                                    v1 = sub_4A818(v7, v14, SOCK_STREAM, param4, param5);
                                }
                            }
                            while(v1 == 0);
                            return;
                        }
                        uint32_t* ptr2 = sub_4E218((uint32_t*)v4);
                        uint32_t* ptr3 = ptr2;
                        size_t v21 = sub_4D880((size_t)((int)ptr2 * 4));
                        param3 = v21;
                        void* __base = (void*)v21;
                        if(v21 == 0) {
                            return;
                        }
                        int v22 = param3 - 4;
                        int v23 = v7;
                        int v24 = v5;
                        int v25 = v22;
                        int v26 = v22;
                        int v27 = 0;
                        v3 = v6;
                        int v28 = v10;
                        while(SOCK_STREAM) {
                            v0 = v27 + SOCK_STREAM;
                            int v29 = sub_4E51C(v28);
                            *(int*)(v25 + 4) = v29;
                            v25 += 4;
                            v28 = sub_4E4E8((int*)v4, (int*)v28);
                            if(v28 == 0) {
                                break;
                            }
                            v27 = v0;
                        }
                        char* __nmemb = (char*)v0;
                        int v30 = v3;
                        v5 = v24;
                        v3 = v27;
                        int v31 = v23;
                        if(v0 != ptr3) {
                            /*NO_RETURN*/ __assert_fail("i == size", "dump.c", 352, "do_dump");
                        }
                        qsort(__base, (size_t)__nmemb, 4, &sub_4A584);
                        ptr3 = v30;
                        v23 = &__s2;
                        int v32 = v26;
                        int v33 = v12;
                        v26 = 0;
                        int v34 = 0;
                        v12 = v8;
                        do {
                            char* __s2_1 = *(char**)(v32 + 4);
                            v32 += 4;
                            uint32_t* ptr4 = sub_4E234((int*)v4, __s2_1);
                            if(ptr4 == 0) {
                                /*NO_RETURN*/ __assert_fail("\n", "dump.c", 363, "do_dump");
                            }
                            size_t v35 = strlen(__s2_1);
                            sub_4A590(__s2_1, (int)v35, param4, param5, v31);
                            int v36 = param4(v43, v41, param5);
                            if(v36 != 0) {
                                sub_4D898(__base);
                                return;
                            }
                            sub_4A920((int)ptr4, v31, v33, v5, param4, param5);
                            if(param0 != 0) {
                                sub_4D898(__base);
                                return;
                            }
                            if((uint32_t)v34 >= (uint32_t)v3) {
                                int v37 = sub_4A818(v31, v12, 0, param4, param5);
                                if(v37 != 0) {
                                    sub_4D898(__base);
                                    return;
                                }
                            }
                            else {
                                int v38 = param4(",", SOCK_STREAM, param5);
                                if(v38 != 0) {
                                    sub_4D898(__base);
                                    return;
                                }
                                int v39 = sub_4A818(v31, v33, SOCK_STREAM, param4, param5);
                                if(v39 != 0) {
                                    sub_4D898(__base);
                                    return;
                                }
                            }
                            ++v34;
                        }
                        while(v34 != __nmemb);
                        v2 = ptr3;
                        __s2_2 = v23;
                        sub_4D898(__base);
                    loc_4B0B0:
                        sub_4BCA4(v5, __s2_2);
                        if(v2 == 0) {
                            param4("}", SOCK_STREAM, param5);
                            return;
                        }
                    }
                }
            }
        }
    }
}
