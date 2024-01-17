int sub_16580() {
    int result;
    uint32_t v0;
    char* __format;
    uint32_t* ptr0;
    uint32_t v1;
    int __ptr1;
    int v2;
    char v3;
    int v4 = 0;
    do {
        int v5 = sub_1E29C(v4);
        if(v5 != 0) {
            sub_440E8(v4);
            sub_304D4(10);
        }
        ++v4;
    }
    while(v4 != 4);
    memset(&gvar_7F818, 0, 160);
    char* ptr1 = sub_4D6E4("/etc/levels.json", 0, &v3);
    int* ptr2 = (int*)ptr1;
    if((ptr2 != 0 && ptr2[0] == 0)) {
        uint32_t* ptr3 = sub_4E234((int*)ptr1, "\n");
        uint32_t* ptr4 = ptr3;
        v1 = gvar_7EB9C;
        if(ptr4 != 0 && ptr4[0] == 2) {
            if(v1 > 4) {
                ptr0 = sub_4E768(ptr3);
                snprintf(&__ptr1, 0x800, "miner type in %s is %s", "/etc/levels.json", ptr0);
                sub_2E584(4, &__ptr1, 0);
            }
            uint32_t* __needle = sub_4E768(ptr4);
            char* __s1 = strstr(&g80CA0, (char*)__needle);
            if(__s1 != 0) {
                uint32_t* __s2 = sub_4E768(ptr4);
                int v6 = strcasecmp(__s1, (char*)__s2);
                if(v6 == 0) {
                    uint32_t* ptr5 = sub_4E234(ptr2, "levels");
                    if((ptr5 == 0 || ptr5[0] != SOCK_STREAM) && gvar_7EB9C <= 4) {
                        return -2;
                    }
                    else if(ptr5 == 0 || ptr5[0] != SOCK_STREAM) {
                        __format = "failed to get levels in %s\n";
                        snprintf(&__ptr1, 0x800, __format, "/etc/levels.json");
                        sub_2E584(4, &__ptr1, 0);
                        return -2;
                    }
                    int v7 = 0;
                    int v8 = 0;
                    char* ptr6 = "\n";
                    int v9 = 0;
                    int* ptr7 = (int*)&gvar_7EB9C;
                    while(SOCK_STREAM) {
                        uint32_t* ptr8 = sub_4E5A0(ptr5);
                        int v10 = v8;
                        int v11 = (uint32_t)ptr8 > (uint32_t)v8;
                        int* ptr9 = (int*)ptr5;
                        if(v7 > 19) {
                            v11 = 0;
                        }
                        ++v8;
                        if(v11 == 0) {
                            break;
                        }
                        int* ptr10 = sub_4E5BC(ptr9, v10);
                        int* ptr11 = ptr10;
                        if(ptr2[0] != 0) {
                            continue;
                        }
                        uint32_t* ptr12 = sub_4E234(ptr10, "\n");
                        if(ptr12 == 0 || ptr12[0] != 3) {
                            continue;
                        }
                        int v12 = v7 * 8 + &gvar_7F814;
                        int v13 = sub_4E9C4((int*)ptr12);
                        char* __s2_1 = ptr6;
                        *(int*)(v12 + 8) = v13;
                        uint32_t* ptr13 = sub_4E234(ptr11, __s2_1);
                        if(ptr13 == 0 || ptr13[0] != 3) {
                            continue;
                        }
                        int v14 = sub_4E9C4((int*)ptr13);
                        ++v7;
                        *(int*)(v12 + 4) = v14;
                    }
                    result = v9;
                    int* ptr14 = ptr7;
                    int v15 = 0;
                    do {
                        v0 = *(uint32_t*)(v15 * 8 + (int)&gvar_7F818);
                        int v16 = v15 * 8;
                        ++v15;
                        int* ptr15 = (int*)(v16 + &gvar_7F818);
                        if(v0 != 0) {
                            int v17 = *(ptr15 + SOCK_STREAM);
                            if(v17 != 0 && (uint32_t)*ptr14 > 4) {
                                int v18 = v17;
                                ptr0 = v0;
                                snprintf(&__ptr1, 0x800, "level %d, voltage = %d frequency = %d", v15, ptr0, v18);
                                sub_2E584(4, &__ptr1, 0);
                            }
                        }
                    }
                    while(v15 != 20);
                    if(ptr2[SOCK_STREAM] != -1) {
                        v1 = ptr2 + SOCK_STREAM;
                        DMB();
                        v0 = *(int*)v1 - SOCK_STREAM;
                        *(uint32_t*)v1 = (uint32_t)(*(int*)v1 - SOCK_STREAM);
                        if(v0 == 0) {
                            sub_4EB6C(ptr2);
                            return result;
                        }
                    }
                    return result;
                }
            }
            if(gvar_7EB9C <= 3) {
                return -3;
            }
            __ptr1 = 0x656e696d;
            int v19 = 2037653618;
            int v20 = 1847616880;
            int v21 = 1830843503;
            __builtin_strcpy(&v2, "atch");
            sub_2E584(3, &__ptr1, 0);
            return -3;
        }
        if(v1 <= 4) {
            return -2;
        }
        __format = "failed to get miner type in %s\n";
        snprintf(&__ptr1, 0x800, __format, "/etc/levels.json");
        sub_2E584(4, &__ptr1, 0);
        return -2;
    }
    else if(gvar_7EB9C <= 3) {
        result = -1;
    }
    else {
        snprintf(&__ptr1, 0x800, "load vol-freq config file %s failed\n", "/etc/levels.json");
        sub_2E584(3, &__ptr1, 0);
        return -1;
    }
    return result;
}
