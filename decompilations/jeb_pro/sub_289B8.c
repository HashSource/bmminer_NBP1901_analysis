void sub_289B8(char* __s, int param1) {
    char __ptr1;
    int* ptr0 = (int*)__s;
    int v0 = param1;
    if(param1 != 0 && gvar_80B90 == 0) {
        gvar_80B90 = 1;
    }
    uint32_t v1 = gvar_7E61C;
    if(v1 != 16) {
        if((v1 & 0x8) == 0) {
            int* ptr1 = (int*)&ptr_a__logfile_openf;
            do {
                if(*(ptr1 - 7) != 0) {
                    __strdup();
                    void* __ptr = __s;
                    char* ptr2 = strtok(__s, "|");
                    if(ptr2 != 0) {
                        do {
                            if(ptr2[SOCK_STREAM] == 45) {
                                uint32_t* ptr3 = sub_4E234(ptr0, ptr2 + 2);
                                uint32_t* ptr4 = ptr3;
                                if(ptr4 != 0) {
                                    int v2 = *(ptr1 - 6);
                                    uint32_t v3 = ptr4[0];
                                    if((v2 & 0x6) == 0 || (v3 != 2 && v3 != SOCK_STREAM)) {
                                        int v4 = v3 - 5;
                                        if(v4 > SOCK_STREAM) {
                                            v10 = "Invalid value";
                                        loc_28AE0:
                                            if(v0 == 0) {
                                                goto loc_28BE0;
                                            }
                                            else {
                                                goto loc_28AEC;
                                            }
                                        }
                                        char* ptr5 = *(char**)(ptr1 - 2);
                                        if((v2 & SOCK_STREAM) != 0) {
                                            v10 = *(ptr1 - 5)((int)ptr5, v2, v4);
                                        loc_28BB8:
                                            if(v10 != 0) {
                                                if(v0 != 0) {
                                                    goto loc_28AEC;
                                                }
                                            loc_28BE0:
                                                snprintf(&g80AC8, 200, "Parsing JSON option %s: %s", ptr2, v10);
                                                return;
                                            loc_28AEC:
                                                if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
                                                    int v5 = v10;
                                                    snprintf(&__ptr1, 0x800, "Invalid config option %s: %s", ptr2, v5);
                                                    sub_2E584(3, &__ptr1, 0);
                                                }
                                                gvar_80B90 = 0xffffffff;
                                            }
                                        }
                                        else if(v3 != 5) {
                                            sub_3D300(ptr5);
                                        }
                                        else {
                                            sub_3D2F0(ptr5);
                                        }
                                    }
                                    else if(v3 != 2) {
                                        int v6 = (int)__ptr;
                                        uint32_t* ptr6 = ptr4;
                                        int v7 = (int)ptr2;
                                        int v8 = 0;
                                        uint32_t* ptr7 = sub_4E5A0(ptr6);
                                        if(ptr7 != 0) {
                                            do {
                                                int* __s1 = sub_4E5BC((int*)ptr6, v8);
                                                int* ptr8 = __s1;
                                                if(ptr8 == 0) {
                                                    goto loc_28CB0;
                                                }
                                                else {
                                                    int v9 = ptr8[0];
                                                    if(v9 == 0) {
                                                        sub_289B8((int)__s1, 0);
                                                        int v10 = (int)__s;
                                                    }
                                                    else if(v9 == 2) {
                                                        uint32_t* ptr9 = sub_4E768((uint32_t*)__s1);
                                                        int v11 = *(ptr1 - 4);
                                                        int v12 = (int)ptr9;
                                                        int v13 = v11{sub_2835C}((int)ptr9);
                                                        v10 = v13;
                                                        if(*(ptr1 - 6) == 4) {
                                                            int v14 = v13;
                                                            sub_3D3D4(v12, *(int**)(ptr1 - 2));
                                                            v10 = v14;
                                                        }
                                                    }
                                                    else {
                                                        goto loc_28C9C;
                                                    }
                                                    if(v10 == 0) {
                                                        goto loc_28C9C;
                                                    }
                                                    __ptr = v6;
                                                    ptr2 = v7;
                                                    goto loc_28AE0;
                                                loc_28C9C:
                                                    ++v8;
                                                    uint32_t* ptr10 = sub_4E5A0(ptr6);
                                                }
                                            }
                                            while((uint32_t)ptr10 > (uint32_t)v8);
                                        }
                                    loc_28CB0:
                                        __ptr = v6;
                                    }
                                    else {
                                        uint32_t* ptr11 = sub_4E768(ptr3);
                                        int v15 = *(ptr1 - 4);
                                        v6 = ptr11;
                                        int v16 = v15{sub_2835C}((int)ptr11);
                                        v10 = v16;
                                        if(*(ptr1 - 6) == 4) {
                                            v7 = v16;
                                            sub_3D3D4(v6, *(int**)(ptr1 - 2));
                                            v10 = v7;
                                        }
                                        goto loc_28BB8;
                                    }
                                }
                            }
                            ptr2 = strtok(NULL, "|");
                        }
                        while(ptr2 != 0);
                    }
                    free(__ptr);
                    int v17 = *(ptr1 + SOCK_STREAM);
                    if(v17 == 16) {
                        goto loc_28B6C;
                    }
                    else {
                        goto loc_28A40;
                    }
                }
                v17 = *(ptr1 + SOCK_STREAM);
                if(v17 == 16) {
                    goto loc_28B6C;
                }
            loc_28A40:
                ptr1 += 7;
            }
            while((v17 & 0x8) == 0);
        }
        /*NO_RETURN*/ __assert_fail("!(opt->type & OPT_SUBTABLE)", "bmminer.c", 734, "parse_config");
    }
loc_28B6C:
    uint32_t* ptr12 = sub_4E234(ptr0, "include");
    if(ptr12 != 0 && ptr12[0] == 2) {
        uint32_t* __filename = sub_4E768(ptr12);
        sub_288C4((char*)__filename);
        return;
    }
}
