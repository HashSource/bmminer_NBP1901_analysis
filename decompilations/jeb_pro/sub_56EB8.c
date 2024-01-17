char* sub_56EB8(char* param0) {
    int v0;
    int v1;
    int v0;
    int v1;
    int v2;
    char* __dest;
    char* ptr0;
    void* __ptr2 = calloc(1, 9296);
    if(__ptr2 != 0) {
        if(param0 == 0 || *param0 == 0) {
            ptr0 = getenv("ZLOG_CONF_PATH");
            if(ptr0 == 0) {
                memset(__ptr2, 0, 1025);
                *(char*)((int)__ptr2 + 1048) = 1;
                __dest = (int)__ptr2 + 0x424;
                *(char*)((int)__ptr2 + 1056) = 0;
                *(char*)((int)__ptr2 + 1052) = 0;
                *(int*)&__dest[0] = '/';
                *(int*)&__dest[4] = '/';
                *(int*)&__dest[8] = 'g';
                *(short*)&__dest[12] = 'c';
                __dest[14] = 0;
            }
            else {
                getenv("ZLOG_CONF_PATH");
                int v3 = snprintf((char*)__ptr2, 1025, "\n");
                v2 = v3;
                if((uint32_t)v3 > 0x400) {
                    int* ptr1 = __errno_location();
                    int v4 = ptr1[0];
                    v1 = v2;
                    v0 = v4;
                    sub_5DF98(&g2, "src/conf.c", 120, "not enough space for path name, nwrite=[%d], errno[%d]");
                    sub_56E0C(__ptr2);
                    return NULL;
                }
                goto loc_56F40;
            }
        }
        else {
            int v5 = snprintf((char*)__ptr2, 1025, "\n");
            v2 = v5;
            if((uint32_t)v5 <= 0x400) {
                goto loc_56F40;
            }
            int* ptr1 = __errno_location();
            int v4 = ptr1[0];
            v1 = v2;
            v0 = v4;
            sub_5DF98(&g2, "src/conf.c", 120, "not enough space for path name, nwrite=[%d], errno[%d]");
            sub_56E0C(__ptr2);
            return NULL;
        loc_56F40:
            __dest = (int)__ptr2 + 0x424;
            *(char*)((int)__ptr2 + 1048) = 1;
            *(char*)((int)__ptr2 + 1052) = 0;
            *(char*)((int)__ptr2 + 1056) = 0;
            ptr0 = &g1;
            strcpy(__dest, (char*)__ptr2);
        }
        *(int*)((int)__ptr2 + 5164) = 0x61666564;
        *(int*)((int)__ptr2 + 5168) = 544500853;
        *(int*)((int)__ptr2 + 0x1434) = 0x2522203d;
        *(int*)((int)__ptr2 + 5176) = 1445273668;
        *(int*)((int)__ptr2 + 5180) = 0x70255b20;
        *(int*)((int)__ptr2 + 0x1440) = 977675578;
        *(int*)((int)__ptr2 + 0x1444) = 542985253;
        *(int*)((int)__ptr2 + 0x1448) = 0x6e256d25;
        *(short*)((int)__ptr2 + 0x144c) = 34;
        *(char*)((int)__ptr2 + 0x2434) = 65408;
        *(char*)((int)__ptr2 + 9276) = 0;
        *(char*)((int)__ptr2 + 9272) = 0;
        uint32_t* ptr2 = sub_57C30();
        *(char*)((int)__ptr2 + 0x2440) = (char)ptr2;
        if(ptr2 == 0) {
            sub_5DF98(&g2, "src/conf.c", 142, "zlog_level_list_new fail");
        }
        else {
            void* ptr3 = sub_5D4C0(&sub_5766C);
            *(char*)((int)__ptr2 + 0x2444) = (char)ptr3;
            if(ptr3 != 0) {
                void* ptr4 = sub_5D4C0(&sub_5A97C);
                *(char*)((int)__ptr2 + 0x2448) = (char)ptr4;
                if(ptr4 != 0) {
                    if(ptr0 != 0) {
                        char* ptr5 = sub_56030((char*)__ptr2);
                        if(ptr5 == 0) {
                            sub_56B38((uint32_t*)__ptr2, NULL);
                            return (char*)__ptr2;
                        }
                        sub_5DF98(&g2, "src/conf.c", 160, "zlog_conf_build_with_file fail");
                        sub_56E0C(__ptr2);
                        return NULL;
                    }
                    int* ptr6 = sub_576E4((int*)((int)__ptr2 + 5164), (int*)((int)__ptr2 + 9292));
                    *(char*)((int)__ptr2 + 9264) = (char)ptr6;
                    if(ptr6 == 0) {
                        sub_5DF98(&g2, "src/conf.c", 183, "zlog_format_new fail");
                    }
                    else {
                        void* ptr7 = sub_58834(__dest);
                        *(char*)((int)__ptr2 + 5160) = (char)ptr7;
                        if(ptr7 == 0) {
                            sub_5DF98(&g2, "src/conf.c", 189, "zlog_rotater_new fail");
                        }
                        else {
                            void* ptr8 = (void*)*(char*)((int)__ptr2 + 0x2444);
                            void* ptr9 = (void*)*(char*)((int)__ptr2 + 9264);
                            int v6 = (int)*(char*)((int)__ptr2 + 0x2440);
                            int* ptr10 = (int*)((int)__ptr2 + 9292);
                            v0 = *(char*)((int)__ptr2 + 9272);
                            v1 = *(char*)((int)__ptr2 + 0x2434);
                            void* __ptr = sub_5AA9C("*.*        >stdout", v6, ptr9, ptr8, v1, v0);
                            if(__ptr == 0) {
                                sub_5DF98(&g2, "src/conf.c", 202, "zlog_rule_new fail");
                            }
                            else {
                                int v7 = sub_5D694(*(uint32_t**)((int)__ptr2 + 0x2448), (uint32_t)__ptr);
                                if(v7 == 0) {
                                    sub_56B38((uint32_t*)__ptr2, NULL);
                                    return (char*)__ptr2;
                                }
                                sub_5A97C((char*)__ptr);
                                sub_5DF98(&g2, "src/conf.c", 209, "zc_arraylist_add fail");
                            }
                        }
                    }
                    sub_5DF98(&g2, "src/conf.c", 165, "zlog_conf_build_without_file fail");
                    sub_56E0C(__ptr2);
                    return NULL;
                }
                sub_5DF98(&g2, "src/conf.c", 154, "init rule_list fail");
                sub_56E0C(__ptr2);
                return NULL;
            }
            sub_5DF98(&g2, "src/conf.c", 148, "zc_arraylist_new fail");
        }
        sub_56E0C(__ptr2);
        return NULL;
    }
    int* ptr11 = __errno_location();
    v1 = ptr11[0];
    sub_5DF98(&g2, "src/conf.c", 105, "calloc fail, errno[%d]");
    return 0;
}
