void* sub_5C758(char* param0, char* param1, int* param2, int param3) {
    int v0;
    int v1;
    int v2;
    int* ptr0;
    char* __s2 = param0;
    int v3 = 0;
    if(param0 != 0) {
        char* ptr1 = param1;
        void* result = param1;
        if(ptr1 != 0) {
            int* ptr2 = param2;
            void* __ptr = calloc(1, 0x2434);
            if(__ptr != 0) {
                int v4 = (uint32_t)__s2[0];
                *(char**)__ptr = __s2;
                if(v4 == 37) {
                    char* __s = (char*)((int)__ptr + 0x1411);
                    v3 = 0;
                    __isoc99_sscanf();
                    ptr0 = (int)__ptr + 0x2000;
                    if(param0 == SOCK_STREAM) {
                        *(ptr0 + 266) = &sub_5C5A0;
                        *(ptr0 + 267) = &sub_5C510;
                        *(ptr0 + 268) = &sub_5C480;
                        int v5 = (uint32_t)*(char*)((int)__ptr + 0x1411);
                        if(v5 == 45) {
                            *(char**)(ptr0 + 261) = (char*)&g1;
                            __s = (int)__ptr + 0x1412;
                        }
                        else {
                            if(v5 == 48) {
                                *(char**)(ptr0 + 262) = (char*)&g1;
                            }
                            *(ptr0 + 261) = 0;
                        }
                        int v6 = 0;
                        int v7 = 0;
                        __isoc99_sscanf();
                        char* ptr3 = strchr(__s, 46);
                        if(ptr3 != 0) {
                            __isoc99_sscanf();
                        }
                        int v8 = v7;
                        v2 = v3;
                        *(ptr0 + 264) = v6;
                        *(ptr0 + 263) = v8;
                    }
                    else {
                        *(ptr0 + 266) = &sub_5BD24;
                        v2 = SOCK_STREAM;
                        *(ptr0 + 267) = &sub_5BD34;
                        *(ptr0 + 268) = &sub_5BD44;
                        v3 = SOCK_STREAM;
                    }
                    int v9 = (uint32_t)__s2[v2];
                    char* __s1 = &__s2[v2];
                    if(v9 != 100) {
                        if(v9 != 77) {
                            int v10 = strncmp(__s1, "ms", 2);
                            int v11 = *(int*)__ptr;
                            if(v10 == 0) {
                                char* ptr4 = __s1 + 2;
                                *(uint32_t*)((int)__ptr + 4) = (int*)(ptr4 - v11);
                                *(char**)result = ptr4;
                                *(ptr0 + 265) = &sub_5C294;
                            }
                            else {
                                int v12 = strncmp(__s1, "\n", 2);
                                if(v12 == 0) {
                                    char* ptr5 = __s1 + 2;
                                    *(uint32_t*)((int)__ptr + 4) = (int*)(ptr5 - v11);
                                    *(char**)result = ptr5;
                                    *(ptr0 + 265) = &sub_5C258;
                                }
                                else {
                                    *(char**)result = __s1 + SOCK_STREAM;
                                    int v13 = (uint32_t)__s1[0];
                                    *(uint32_t*)((int)__ptr + 4) = (int*)((char*)(__s1 - v11) + SOCK_STREAM);
                                    switch(v13) {
                                        case 37: {
                                            *(ptr0 + 265) = &sub_5BD64;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 68: {
                                            int v14 = *ptr2;
                                            *(short*)((int)__ptr + 12) = 84;
                                            *(int*)((int)__ptr + 8) = 622872101;
                                            *ptr2 = v14 + SOCK_STREAM;
                                            *(int*)((int)__ptr + 0x100c) = v14;
                                            *(ptr0 + 265) = &sub_5C358;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 70: {
                                            *(ptr0 + 265) = &sub_5C454;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 72: {
                                            *(ptr0 + 265) = &sub_5BDC8;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 76: {
                                            *(ptr0 + 265) = &sub_5BEEC;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 84: {
                                            *(ptr0 + 265) = &sub_5BD78;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 85: {
                                            *(ptr0 + 265) = &sub_5C420;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 86: {
                                            *(ptr0 + 265) = &sub_5BDEC;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 99: {
                                            *(ptr0 + 265) = &sub_5BDDC;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 102: {
                                            break;
                                        }
                                        case 107: {
                                            *(ptr0 + 265) = &sub_5BDB4;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 109: {
                                            *(ptr0 + 265) = &sub_5BF18;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 110: {
                                            *(ptr0 + 265) = &sub_5BDA0;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 112: {
                                            *(ptr0 + 265) = &sub_5BE70;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 116: {
                                            *(ptr0 + 265) = &sub_5BD8C;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        case 118: {
                                            *(ptr0 + 265) = &sub_5BE2C;
                                            sub_5C630((int*)__ptr, NULL);
                                            return __ptr;
                                        }
                                        default: {
                                            int v15 = v13;
                                            v1 = v11;
                                            sub_5DF98(&g2, "src/spec.c", 634, "str[%s] in wrong format, p[%c]");
                                            sub_5C6F4((char*)__ptr);
                                            return NULL;
                                        }
                                    }
                                    *(ptr0 + 265) = &sub_5C204;
                                }
                            }
                            sub_5C630((int*)__ptr, NULL);
                            return __ptr;
                        }
                        v3 = 0;
                        __isoc99_sscanf();
                        if(param0 != SOCK_STREAM) {
                            v3 = 0;
                            int v16 = strncmp(__s1, &g6D3D8, 3);
                            if(v16 == 0) {
                                __s1 += 3;
                                v3 = 3;
                            }
                        }
                        int v17 = *(int*)__ptr;
                        if(__s1[-1] == 41) {
                            *(uint32_t*)((int)__ptr + 4) = (int*)(__s1 - v17);
                            *(char**)result = __s1;
                            *(ptr0 + 265) = &sub_5C2E4;
                            sub_5C630((int*)__ptr, NULL);
                            return __ptr;
                        }
                        v1 = v17;
                        sub_5DF98(&g2, "src/spec.c", 554, "in string[%s] can\'t find match \')\'");
                        sub_5C6F4((char*)__ptr);
                        return NULL;
                    }
                    int* ptr6 = (int*)((int)__ptr + 8);
                    if(__s1[SOCK_STREAM] == 40) {
                        int v18 = strncmp(__s1, &g6D398, 3);
                        if(v18 == 0) {
                            __s1 += 3;
                            *ptr6 = 622872101;
                            *(short*)(ptr6 + SOCK_STREAM) = 84;
                            v0 = *(int*)__ptr;
                        }
                        else {
                            v3 = 0;
                            __isoc99_sscanf();
                            ptr1 = param0;
                            v0 = *(int*)__ptr;
                            if(ptr1 == SOCK_STREAM) {
                                param3 = 0;
                            }
                            else {
                                v3 = 0;
                            }
                            if(ptr1 == SOCK_STREAM) {
                                __s1 = &__s1[param3];
                            }
                            if(__s1[-1] != 41) {
                                v1 = v0;
                                sub_5DF98(&g2, "src/spec.c", 0x211, "in string[%s] can\'t find match \')\'");
                                sub_5C6F4((char*)__ptr);
                                return NULL;
                            }
                        }
                    }
                    else {
                        ++__s1;
                        *(int*)((int)__ptr + 8) = 622872101;
                        *(short*)(ptr6 + SOCK_STREAM) = 84;
                        v0 = *(int*)__ptr;
                    }
                    int v19 = *ptr2;
                    *(int*)((int)__ptr + 0x100c) = *ptr2;
                    *ptr2 = v19 + SOCK_STREAM;
                    *(ptr0 + 265) = &sub_5C358;
                    *(char**)result = __s1;
                    *(uint32_t*)((int)__ptr + 4) = (int*)(__s1 - v0);
                }
                else {
                    char* ptr7 = strchr(__s2, 37);
                    *(char**)result = ptr7;
                    if(ptr7 == 0) {
                        size_t v20 = strlen(__s2);
                        *(size_t*)((int)__ptr + 4) = v20;
                        *(int**)result = (int*)(v20 + __s2);
                    }
                    else {
                        *(uint32_t*)((int)__ptr + 4) = (int*)(ptr7 - __s2);
                    }
                    *(int*)((int)__ptr + 0x2424) = &sub_5BD54;
                    *(int*)((int)__ptr + 0x2428) = &sub_5BD24;
                    *(int*)((int)__ptr + 0x242c) = &sub_5BD34;
                    *(int*)((int)__ptr + 9264) = &sub_5BD44;
                }
                sub_5C630((int*)__ptr, NULL);
                return __ptr;
            }
            int* ptr8 = __errno_location();
            v1 = ptr8[0];
            sub_5DF98(&g2, "src/spec.c", 0x1e1, "calloc fail, errno[%d]");
            return 0;
        }
        sub_5DF98(&g2, "src/spec.c", 0x1dd, "pattern_next is null or 0");
        return result;
    }
    sub_5DF98(&g2, "src/spec.c", 476, "pattern_start is null or 0");
    return __s2;
}
