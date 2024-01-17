void* sub_5F4D8(void* param0) {
    char v0;
    char __s;
    char __s1;
    void* result = param0;
    void* ptr0 = NULL;
    if(param0 != 0) {
        memset(&__s, 0, 0x1001);
        memset(&__s1, 0, 0x1001);
        __isoc99_sscanf();
        if((int)param0 > SOCK_STREAM) {
            void* ptr1 = __s;
            if(ptr1 != 0) {
                void* __ptr = calloc(1, 2064);
                if(__ptr != 0) {
                    int v1 = __s1;
                    *(void**)__ptr = NULL;
                    if(v1 != 0) {
                        int v2 = strcasecmp((char*)&__s1, "LOG_EMERG");
                        if(v2 == 0) {
                            *(int*)((int)__ptr + 2060) = 0;
                        loc_5F594:
                            __int32_t** ptr2 = __ctype_toupper_loc();
                            __int32_t* ptr3 = ptr2[0];
                            __int32_t** ptr4 = __ctype_tolower_loc();
                            __int32_t* ptr5 = ptr4[0];
                            char* ptr6 = (char*)((int)__ptr + 0x404);
                            char* ptr7 = (char*)((int)__ptr + 3);
                            void* ptr8 = &__s;
                            int v3 = 0;
                            while(SOCK_STREAM) {
                                int v4 = (int)(uint16_t)ptr1;
                                ++v3;
                                *(ptr7 + SOCK_STREAM) = (uint8_t)ptr3[v4];
                                ++ptr7;
                                *(ptr6 + SOCK_STREAM) = (uint8_t)ptr5[v4];
                                ++ptr6;
                                if(v3 != 0x400) {
                                    ptr1 = *(char*)((int)ptr8 + SOCK_STREAM);
                                    ptr8 = (int)ptr8 + SOCK_STREAM;
                                    if(ptr1 != 0) {
                                        continue;
                                    }
                                    break;
                                }
                                else if(v0 == 0) {
                                    break;
                                }
                                else {
                                    int v5 = 0x400;
                                    sub_5DF98(&g2, "src/level.c", 126, "not enough space for str, str[%s] > %d");
                                    sub_5DF98(&g2, "src/level.c", 138, "line[%s]");
                                    sub_5F474((char*)__ptr);
                                    return NULL;
                                }
                            }
                            char* ptr9 = (char*)(v3 + (int)__ptr);
                            *(ptr9 + 4) = 0;
                            *(ptr9 + 1029) = 0;
                            *(int*)((int)__ptr + 0x808) = v3;
                            return __ptr;
                        }
                        int v6 = strcasecmp((char*)&__s1, "LOG_ALERT");
                        if(v6 == 0) {
                            *(int*)((int)__ptr + 2060) = SOCK_STREAM;
                            goto loc_5F594;
                        }
                        else {
                            int v7 = strcasecmp((char*)&__s1, "LOG_CRIT");
                            if(v7 == 0) {
                                *(int*)((int)__ptr + 2060) = 2;
                                goto loc_5F594;
                            }
                            else {
                                int v8 = strcasecmp((char*)&__s1, "LOG_ERR");
                                if(v8 == 0) {
                                    *(int*)((int)__ptr + 2060) = 3;
                                    goto loc_5F594;
                                }
                                else {
                                    int v9 = strcasecmp((char*)&__s1, "LOG_WARNING");
                                    if(v9 == 0) {
                                        *(int*)((int)__ptr + 2060) = 4;
                                        goto loc_5F594;
                                    }
                                    else {
                                        int v10 = strcasecmp((char*)&__s1, "LOG_NOTICE");
                                        if(v10 == 0) {
                                            *(int*)((int)__ptr + 2060) = 5;
                                            goto loc_5F594;
                                        }
                                        else {
                                            int v11 = strcasecmp((char*)&__s1, "LOG_INFO");
                                            if(v11 == 0) {
                                                *(int*)((int)__ptr + 2060) = 6;
                                                goto loc_5F594;
                                            }
                                            else {
                                                int v12 = strcasecmp((char*)&__s1, "\n");
                                                if(v12 != 0) {
                                                    sub_5DF98(&g2, "src/level.c", 63, "wrong syslog level[%s]");
                                                    *(int*)((int)__ptr + 2060) = 0xffffff45;
                                                    sub_5DF98(&g2, "src/level.c", 113, "syslog_level_atoi fail");
                                                    sub_5DF98(&g2, "src/level.c", 138, "line[%s]");
                                                    sub_5F474((char*)__ptr);
                                                    return NULL;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    *(int*)((int)__ptr + 2060) = 7;
                    goto loc_5F594;
                }
                __errno_location();
                sub_5DF98(&g2, "src/level.c", 101, "calloc fail, errno[%d]");
                return 0;
            }
            sub_5DF98(&g2, "src/level.c", 95, "str[0] = 0");
            return NULL;
        }
        sub_5DF98(&g2, "src/level.c", 84, "level[%s], syntax wrong");
        return NULL;
    }
    sub_5DF98(&g2, "src/level.c", 77, "line is null or 0");
    return result;
}
