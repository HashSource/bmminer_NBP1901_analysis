void* sub_3E370(char* __s, char* param1) {
    char* __s9;
    char* ptr0;
    uint32_t v0;
    int v1;
    char* __s1 = param1;
    char* ptr1 = __s;
    size_t v2 = strlen(__s);
    uint32_t v3 = gvar_99EE24;
    size_t __size = gvar_99EE18 + v2 + 20;
    if(__s1 != 0) {
        size_t v4 = strlen(__s1);
        __size += v4;
        if(v3 != 0) {
            v0 = gvar_99EE1C;
            goto loc_3E3D0;
        }
    }
    else if(v3 != 0) {
        char* ptr2 = NULL;
        v0 = gvar_99EE1C;
        uint32_t v5 = gvar_99EE1C;
        do {
            ++ptr2;
            if(*(int*)(v5 + 8) == &sub_3D5F0) {
                __s1 = *(char**)(v5 + 20);
                if(__s1 != 0) {
                    size_t v6 = strlen(__s1);
                    __size += v6;
                    goto loc_3E3D0;
                }
            }
            v5 += 28;
        }
        while(ptr2 != v3);
        __s1 = "\n";
    loc_3E3D0:
        int v7 = 0;
        ptr0 = __s1;
        do {
            uint32_t v8 = __size + 6;
            char* __s2 = *(char**)(v0 + 24);
            if(*(int*)(v0 + 4) == 8) {
                ++v7;
                size_t v9 = strlen(__s2);
                __size = v9 + __size + 3;
                v0 += 28;
                if(v7 < v3) {
                    continue;
                }
                break;
            }
            if(__s2 != 10087976) {
                size_t v10 = strlen(*(char**)v0);
                size_t v11 = strlen(__s2);
                uint32_t v12 = v11 + v8 + v10;
                __size = (*(int*)(v0 + 16) == 0 ? v12 + 21: v12 + 118) + SOCK_STREAM;
            }
            ++v7;
            v0 += 28;
        }
        while(v7 < v3);
    }
    void* __s3 = malloc(__size);
    void* ptr3 = __s3;
    void* result = __s3;
    if(__s3 != 0) {
        int v13 = sprintf((char*)__s3, "Usage: %s", ptr1);
        char* __s4 = (char*)(v13 + (int)ptr3);
        char* ptr4 = __s4 + 3;
        *(int*)(v13 + (int)ptr3) = 2972448;
        char* ptr5 = sub_3DB7C(&v1);
        if(ptr5 != 0) {
            int v14 = 0;
            do {
                char* ptr6 = ptr5;
                if(*(int*)(v1 * 28 + gvar_99EE1C + 24) != 10087976) {
                    ptr4[v14] = ptr5[0];
                    ++v14;
                }
                ptr5 = sub_3DBDC(ptr6, (uint32_t*)&v1);
            }
            while(ptr5 != 0);
            if(v14 != 0) {
                __s4 = (char*)(ptr4 + v14) + SOCK_STREAM;
                *(short*)&ptr4[v14] = 93;
            }
        }
        int v15 = sprintf(__s4, "\n");
        uint32_t v16 = gvar_99EE24;
        char* __s5 = (char*)(v15 + __s4) + SOCK_STREAM;
        *(short*)&__s4[v15] = 10;
        if(v16 != 0) {
            int v17 = 0;
            int v18 = 0;
            ptr0 = "                    ";
            int v19 = 0x2e2e2e;
            do {
                uint32_t v20 = gvar_99EE1C + v17;
                v16 = *(uint32_t*)(v20 + 24);
                if(v16 != 10087976) {
                    if(*(int*)(v20 + 4) == 8) {
                        int v21 = sprintf(__s5, "%s:\n", v16);
                        __s5 = &__s5[v21];
                    }
                    else {
                        int v22 = sprintf(__s5, "\n");
                        uint32_t v23 = gvar_99EE1C;
                        int v24 = v22;
                        char* __s8 = &__s5[v22];
                        if(*(int*)(v23 + v17 + 4) == 2) {
                            char* __s6 = *(char**)(v23 + v17);
                            char* ptr7 = __s8;
                            __s9 = __s6;
                            char* ptr8 = strchr(__s6, 32);
                            char* __s7 = __s9;
                            __s8 = ptr7;
                            if(ptr8 == 0) {
                                __s9 = __s8;
                                char* ptr9 = strchr(__s7, 61);
                                __s8 = __s9;
                                if(ptr9 == 0) {
                                    v24 += 6;
                                    *(int*)&__s8[0] = ' ';
                                    *(short*)&__s8[4] = 'g';
                                    __s8[6] = 0;
                                    __s8 = &__s5[v24];
                                }
                            }
                        }
                        int v25 = sprintf(__s8, "%.*s");
                        int v26 = v25 + v24;
                        int v27 = sprintf(&__s5[v26], "\n");
                        int v28 = v27 + v26;
                        char* ptr10 = &__s5[v28];
                        param1 = gvar_99EE1C + v17;
                        if(*(int*)&param1[16] != 0) {
                            __s9 = ptr10;
                            int v29 = v19;
                            *(int*)&param1[16]((int)&v1, (int)*(int*)&param1[20]);
                            int v30 = sprintf(__s9, " (default: %s)", &v1);
                            ptr10 = &__s5[v30 + v28];
                        }
                        *(short*)&ptr10[0] = 10;
                        __s5 = ptr10 + SOCK_STREAM;
                    }
                }
                ++v18;
                v17 += 28;
            }
            while(gvar_99EE24 > v18);
        }
        __s5[0] = 0;
    }
    return result;
}
