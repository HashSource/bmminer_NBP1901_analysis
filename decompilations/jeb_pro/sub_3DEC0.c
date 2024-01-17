void sub_3DEC0(int* param0, int param1, uint32_t* param2, uint32_t* param3) {
    int v0;
    int* ptr0 = param0;
    int v1 = param1;
    uint32_t* ptr1 = param2;
    uint32_t* ptr2 = param3;
    char* ptr3 = getenv("POSIXLY_CORRECT");
    char* ptr4 = *(uint32_t*)(v1 + 4);
    if(ptr3 != 0) {
        uint32_t* ptr5 = (uint32_t*)(v1 + 4);
        if((ptr4 != 0 && *ptr4 == 45)) {
            int v2 = SOCK_STREAM;
            if(*(ptr4 + SOCK_STREAM) == 45) {
                goto loc_3E034;
            }
            else {
                goto loc_3DF74;
            }
        }
    }
    else if(ptr4 != 0) {
        if(*ptr4 == 45) {
            ptr5 = v1 + 4;
            v2 = SOCK_STREAM;
        }
        else {
            param3 = v1 + 8;
            v2 = SOCK_STREAM;
            do {
                ptr5 = param3;
                ptr4 = *param3;
                ++param3;
                ++v2;
                if(ptr4 != 0 && *ptr4 == 45) {
                    goto loc_3DF68;
                }
                else if(ptr4 == 0) {
                    return;
                }
            }
            while(SOCK_STREAM);
        }
    loc_3DF68:
        if(*(ptr4 + SOCK_STREAM) == 45) {
            goto loc_3E034;
        }
    loc_3DF74:
        uint32_t* ptr6 = (uint32_t*)&v0;
        char* ptr7 = sub_3DB7C(&v0);
        if(ptr7 != 0) {
            char* ptr8 = (char*)((char*)*ptr1 + SOCK_STREAM);
            if((uint32_t)*(char*)((int)*ptr5 + (int)ptr8) == (uint32_t)ptr7[0]) {
                goto loc_3DFA4;
            }
            else {
                uint32_t* ptr9 = ptr6;
            }
        loc_3E204:
            ptr7 = sub_3DBDC(ptr7, ptr9);
            while(ptr7 != 0) {
                ptr8 = (char*)*ptr1 + SOCK_STREAM;
                if((uint32_t)*(char*)((int)*ptr5 + (int)ptr8) != (uint32_t)ptr7[0]) {
                    goto loc_3E204;
                }
            loc_3DFA4:
                int v3 = v0;
                ptr6 = ptr7 - SOCK_STREAM;
                *ptr1 = ptr8;
                uint32_t v4 = gvar_99EE1C;
                size_t v5 = 2;
                int v6 = v3 * 28;
                int* ptr10 = (int*)(v6 + v4);
                if(*(ptr10 + SOCK_STREAM) == SOCK_STREAM) {
                    goto loc_3E174;
                }
                else {
                    goto loc_3DFE4;
                loc_3E034:
                    if(*(ptr4 + 2) == 0) {
                        sub_3DE88(ptr0, v1, v2);
                        return;
                    }
                    if(*ptr1 == 0) {
                        ptr6 = &v0;
                        char* ptr11 = sub_3DACC(&v0, &v5);
                        if(ptr11 == 0) {
                            goto loc_3E138;
                        }
                        else {
                            char* __s2 = ptr11;
                            uint32_t* ptr12 = ptr1;
                            int v7 = v2;
                        }
                    }
                    else {
                        goto loc_3E36C;
                    }
                }
            loc_3E09C:
                do {
                    char* ptr13 = *ptr5;
                    size_t __n = v5;
                    int v8 = strncmp(ptr13 + 2, __s2, __n);
                    if(v8 == 0) {
                        size_t v9 = __n + 2;
                        int v10 = (uint32_t)*(ptr13 + v9);
                        if(v10 == 0) {
                            v3 = v0;
                            ptr1 = ptr12;
                            v2 = v7;
                            ptr6 = __s2 - 2;
                            uint32_t v11 = gvar_99EE1C;
                            v6 = v3 * 28;
                            v5 = v9;
                            ptr10 = v6 + v11;
                            if(*(ptr10 + SOCK_STREAM) == SOCK_STREAM) {
                                goto loc_3E174;
                            }
                            goto loc_3E118;
                        }
                        else if(v10 == 61) {
                            v3 = v0;
                            ptr1 = ptr12;
                            uint32_t v12 = gvar_99EE1C;
                            v2 = v7;
                            v6 = v3 * 28;
                            int v13 = (int)((char*)(__n + ptr13) + 3);
                            v5 = v9;
                            ptr6 = __s2 - 2;
                            ptr10 = v12 + v6;
                        }
                        else {
                            goto loc_3E12C;
                        }
                        if(*(ptr10 + SOCK_STREAM) != SOCK_STREAM && v13 != 0) {
                            goto loc_3DFF8;
                        }
                        else if(*(ptr10 + SOCK_STREAM) != SOCK_STREAM) {
                        loc_3E118:
                            ptr8 = *ptr1;
                            goto loc_3DFE4;
                        }
                    }
                    else {
                        goto loc_3E12C;
                    }
                    if(v13 == 0) {
                    loc_3E174:
                        v13 = 0;
                        __ptr = *(ptr10 + 2)(*(ptr10 + 5), v6);
                    }
                    else {
                        int v14 = *(int*)v1;
                        void* ptr14 = "doesn\'t allow an argument";
                        ptr2("%s: %.*s: %s", v14, v9, ptr6);
                        return;
                    loc_3E12C:
                        __s2 = sub_3DB24(__s2, ptr6, (uint32_t)&v5);
                        if(__s2 != 0) {
                            goto loc_3E09C;
                        }
                        goto loc_3E138;
                    loc_3DFE4:
                        if(ptr8 == 0) {
                        loc_3DFEC:
                            v13 = *(int*)((v2 + SOCK_STREAM) * 4 + v1);
                            if(v13 == 0) {
                                int v15 = *(int*)v1;
                                ptr14 = "requires an argument";
                                ptr2("%s: %.*s: %s", v15, v5, ptr6);
                                return;
                            }
                        }
                        else {
                            int* ptr15 = *ptr5;
                            int* ptr16 = (int*)(ptr8 + SOCK_STREAM);
                            v13 = (int)ptr15 + (int)ptr16;
                            if(*(char*)((int)ptr15 + (int)ptr16) == 0) {
                                goto loc_3DFEC;
                            }
                            else {
                                *ptr1 = NULL;
                            }
                        }
                    loc_3DFF8:
                        uint32_t v16 = gvar_99EE1C;
                        int* ptr17 = (int*)(v6 + v16);
                        if(*(ptr17 + SOCK_STREAM) == 4) {
                            int* ptr18 = *(int**)(ptr17 + 5);
                            v7 = &gvar_99EE1C;
                            sub_3D3D4(v13, ptr18);
                            v3 = v0;
                            v16 = *(uint32_t*)v7;
                        }
                        int* ptr19 = (int*)(v3 * 28 + v16);
                        void* __ptr = (void*)*(ptr19 + 3)(v13, *(ptr19 + 5));
                    }
                    if(__ptr == 0) {
                        char* ptr20 = *ptr1;
                        if(ptr20 != 0 && *(char*)((char*)((int)*ptr5 + (int)ptr20) + SOCK_STREAM) != 0) {
                            return;
                        }
                        else if(ptr20 != 0) {
                            *ptr1 = NULL;
                        }
                        sub_3DE88(ptr0, v1, v2);
                        if(v13 == 0 || *ptr5 != v13) {
                            return;
                        }
                        sub_3DE88(ptr0, v1, v2);
                        return;
                    }
                    int v17 = *(int*)v1;
                    ptr14 = __ptr;
                    ptr2("%s: %.*s: %s", v17, v5, ptr6);
                    free(__ptr);
                    return;
                }
                while(SOCK_STREAM);
                ptr7 = sub_3DBDC(ptr7, ptr9);
            }
        loc_3E138:
        }
        char* __s = *ptr5;
        size_t v18 = strlen(__s);
        int v19 = *(int*)v1;
        ptr14 = "unrecognized option";
        ptr2("%s: %.*s: %s", v19, v18, __s);
        return;
    loc_3E36C:
        /*NO_RETURN*/ __assert_fail("*offset == 0", "ccan/opt/parse.c", 59, "parse_one");
    }
}
