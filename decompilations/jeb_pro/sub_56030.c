char* sub_56030(char* param0) {
    int v0;
    char v1;
    size_t v2;
    char* ptr0;
    int v3;
    void* ptr1;
    int v4;
    int v5;
    char __s;
    char v6;
    char __tp;
    char __timer;
    char v7;
    char* __filename = param0;
    __lxstat64();
    char* ptr2 = param0;
    char* result = param0;
    if(ptr2 == 0) {
        localtime_r(&__timer, &__tp);
        strftime(__filename + 1025, 21, "%F %T", &__tp);
        FILE* __stream = fopen64(__filename, "\n");
        if(__stream != 0) {
            int __c = (int)result;
            memset(&__s, __c, 0x1001);
            char* ptr3 = "zlog_rule_new fail [%s]";
            int v8 = __c;
            int* ptr4 = (int*)(__filename + 9292);
            int v9 = __c;
        loc_560E8:
            do {
                char* ptr5 = fgets((char*)&__s, 0x1001 - v8, __stream);
                if(ptr5 == 0) {
                    fclose(__stream);
                    return result;
                }
                ++__c;
                size_t v10 = strlen((char*)&__s);
                int v11 = v10 - SOCK_STREAM;
                if(*(char*)(v11 + (int)&__s) == 10) {
                    *(char*)(v11 + (int)&__s) = 0;
                }
                v5 = __s;
            }
            while(v5 == 0);
            unsigned short** ptr6 = __ctype_b_loc();
            void* ptr7 = &__s;
            unsigned short* ptr8 = ptr6[0];
            while(SOCK_STREAM) {
                int v12 = ptr8[v5];
                int v13 = ptr8[v5];
                v4 = v12 & 0x2000;
                if((v13 & 0x2000) == 0) {
                    break;
                }
                v5 = (uint32_t)*(char*)((int)ptr7 + SOCK_STREAM);
                ptr7 = (int)ptr7 + SOCK_STREAM;
                if(v5 == 0) {
                    goto loc_560E8;
                }
            }
            if(v5 == 35) {
                goto loc_560E8;
            }
            int v14 = (uint32_t)*(char*)ptr7;
            if(v14 == 0) {
                ptr1 = &__s;
            }
            else {
                char* ptr9 = &v6;
                do {
                    *(ptr9 + SOCK_STREAM) = (uint8_t)v14;
                    ++ptr9;
                    ++v4;
                    v14 = (uint32_t)*(char*)((int)ptr7 + SOCK_STREAM);
                    ptr7 = (int)ptr7 + SOCK_STREAM;
                }
                while(v14 != 0);
                ptr1 = v4 + (int)&__s;
            }
            *(char*)ptr1 = 0;
            size_t v15 = strlen((char*)&__s);
            char* ptr10 = v15 + &v6;
            while(SOCK_STREAM) {
                v3 = (uint32_t)*ptr10;
                ptr0 = ptr10 - SOCK_STREAM;
                if((ptr8[v3] & 0x2000) == 0) {
                    break;
                }
                ptr10 = ptr0;
            }
            if((v3 != 92 || (int)(int*)(ptr10 - &__s) > 4066 || (ptr8[(uint32_t)*(ptr10 - SOCK_STREAM)] & 0x2000) != 0) && (v3 != 92 || (int)(int*)(ptr10 - &__s) > 4066)) {
                int v16 = __s;
                int v17 = 0;
                *(ptr10 + SOCK_STREAM) = 0;
                if(v16 == 0) {
                    v2 = strlen((char*)&__s);
                }
                else {
                    void* ptr11 = &__s;
                    do {
                        if(v16 == 34) {
                            v17 ^= SOCK_STREAM;
                            goto loc_56228;
                        }
                        else {
                            if(v16 != 35 || v17 != 0) {
                                goto loc_56228;
                            }
                            *(char*)ptr11 = (uint8_t)v17;
                            break;
                        loc_56228:
                            v16 = (uint32_t)*(char*)((int)ptr11 + SOCK_STREAM);
                            ptr11 = (int)ptr11 + SOCK_STREAM;
                        }
                    }
                    while(v16 != 0);
                    goto loc_56258;
                }
                if(v2 > 0x1000) {
                    sub_5DF98(&g2, "src/conf.c", 346, "line_len[%ld] > MAXLEN_CFG_LINE[%ld], may cause overflow");
                    sub_5DF98(&g2, "src/conf.c", 314, "parse configure file[%s]line_no[%ld] fail");
                    result = &gFFFFFFFF;
                    sub_5DF98(&g2, "src/conf.c", 315, "line[%s]");
                    fclose(__stream);
                    return result;
                loc_56258:
                    v2 = strlen((char*)&__s);
                    v1 = v2 == 0x1000;
                    if(v2 >= 0x1000 && v1 == 0) {
                        sub_5DF98(&g2, "src/conf.c", 346, "line_len[%ld] > MAXLEN_CFG_LINE[%ld], may cause overflow");
                        sub_5DF98(&g2, "src/conf.c", 314, "parse configure file[%s]line_no[%ld] fail");
                        result = &gFFFFFFFF;
                        sub_5DF98(&g2, "src/conf.c", 315, "line[%s]");
                        fclose(__stream);
                        return result;
                    }
                    if(__s == 91) {
                        __isoc99_sscanf();
                        int v18 = strcmp((char*)&v7, "global");
                        if(v18 == 0) {
                            int v19 = v9;
                            ptr2 = v9;
                            if(v19 != 0) {
                                sub_5DF98(&g2, "src/conf.c", 368, "wrong sequence of section, must follow global->levels->formats->rules");
                                sub_5DF98(&g2, "src/conf.c", 314, "parse configure file[%s]line_no[%ld] fail");
                                result = &gFFFFFFFF;
                                sub_5DF98(&g2, "src/conf.c", 315, "line[%s]");
                                fclose(__stream);
                                return result;
                            }
                            v9 = SOCK_STREAM;
                        }
                        else {
                            int v20 = strcmp((char*)&v7, "levels");
                            if(v20 == 0) {
                                int v21 = v9;
                                ptr2 = v9;
                                if(v21 > SOCK_STREAM) {
                                    sub_5DF98(&g2, "src/conf.c", 368, "wrong sequence of section, must follow global->levels->formats->rules");
                                    sub_5DF98(&g2, "src/conf.c", 314, "parse configure file[%s]line_no[%ld] fail");
                                    result = &gFFFFFFFF;
                                    sub_5DF98(&g2, "src/conf.c", 315, "line[%s]");
                                    fclose(__stream);
                                    return result;
                                }
                                v9 = 2;
                            }
                            else {
                                int v22 = strcmp((char*)&v7, "formats");
                                if(v22 != 0) {
                                    int v23 = strcmp((char*)&v7, "\n");
                                    if(v23 == 0 && v9 == 4) {
                                        sub_5DF98(&g2, "src/conf.c", 368, "wrong sequence of section, must follow global->levels->formats->rules");
                                    }
                                    else if(v23 == 0) {
                                        char* ptr12 = __filename + 0x2000;
                                        char v24 = *(int*)&ptr12[1084];
                                        if(v24 != 0 && (uint8_t)*(int*)&ptr12[1080] >= (uint8_t)v24) {
                                            sub_5DF98(&g1, "src/conf.c", 382, "fsync_period[%ld] >= reload_conf_period[%ld],set fsync_period to zero");
                                            *(int*)&ptr12[1080] = 0;
                                        }
                                        void* ptr13 = sub_58834(__filename + 0x424);
                                        *(int*)&__filename[5160] = (char)ptr13;
                                        if(ptr13 != 0) {
                                            int* ptr14 = sub_576E4((int*)(__filename + 5164), ptr4);
                                            ptr2 = ptr14;
                                            *(int*)&ptr12[1072] = (char)ptr14;
                                            if(ptr2 == 0) {
                                                sub_5DF98(&g2, "src/conf.c", 398, "zlog_format_new fail");
                                                sub_5DF98(&g2, "src/conf.c", 314, "parse configure file[%s]line_no[%ld] fail");
                                                result = &gFFFFFFFF;
                                                sub_5DF98(&g2, "src/conf.c", 315, "line[%s]");
                                                fclose(__stream);
                                                return result;
                                            }
                                            v9 = 4;
                                            v8 = 0;
                                            goto loc_560E8;
                                        }
                                        sub_5DF98(&g2, "src/conf.c", 391, "zlog_rotater_new fail");
                                    }
                                    else {
                                        sub_5DF98(&g2, "src/conf.c", 363, "wrong section name[%s]");
                                    }
                                    sub_5DF98(&g2, "src/conf.c", 314, "parse configure file[%s]line_no[%ld] fail");
                                    result = &gFFFFFFFF;
                                    sub_5DF98(&g2, "src/conf.c", 315, "line[%s]");
                                    fclose(__stream);
                                    return result;
                                }
                                int v25 = v9;
                                ptr2 = v9;
                                if(v25 > 2) {
                                    sub_5DF98(&g2, "src/conf.c", 368, "wrong sequence of section, must follow global->levels->formats->rules");
                                    sub_5DF98(&g2, "src/conf.c", 314, "parse configure file[%s]line_no[%ld] fail");
                                    result = &gFFFFFFFF;
                                    sub_5DF98(&g2, "src/conf.c", 315, "line[%s]");
                                    fclose(__stream);
                                    return result;
                                }
                                v9 = 3;
                            }
                        }
                        v8 = 0;
                        goto loc_560E8;
                    }
                }
                int v26 = v9 - SOCK_STREAM;
                v1 = v26 == 3;
                if((uint32_t)v26 < 3 || v1 != 0) {
                    int* ptr15 = (int*)(v26 * 4 + &gvar_56284);
                    jump *ptr15;
                }
                sub_5DF98(&g2, "src/conf.c", 498, "not in any section");
                sub_5DF98(&g2, "src/conf.c", 314, "parse configure file[%s]line_no[%ld] fail");
                result = &gFFFFFFFF;
                sub_5DF98(&g2, "src/conf.c", 315, "line[%s]");
                fclose(__stream);
                return result;
            }
            else if(v3 != 92 || (int)(int*)(ptr10 - &__s) > 4066 || (ptr8[(uint32_t)*(ptr10 - SOCK_STREAM)] & 0x2000) != 0) {
                do {
                    v0 = (uint32_t)*(ptr0 - SOCK_STREAM);
                    --ptr0;
                }
                while((ptr8[v0] & 0x2000) != 0);
            }
            v8 = (int)(void*)(ptr0 + SOCK_STREAM) - (int)&__s;
            *(ptr0 + SOCK_STREAM) = 0;
            goto loc_560E8;
        }
        result = &gFFFFFFFF;
        sub_5DF98(&g2, "src/conf.c", 245, "open configure file[%s] fail");
        return result;
    }
    __errno_location();
    result = &gFFFFFFFF;
    sub_5DF98(&g2, "src/conf.c", 0xee, "lstat conf file[%s] fail, errno[%d]");
    return result;
}
