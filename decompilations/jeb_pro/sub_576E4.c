int* sub_576E4(int* param0, int* param1) {
    int v0;
    int* result = param0;
    int v1 = 0;
    if(param0 != 0) {
        int* ptr0 = param1;
        void* __s = calloc(1, 0x2008);
        int* __ptr1 = (int*)__s;
        if(__ptr1 != 0) {
            memset(__s, 0, 0x1001);
            v1 = 0;
            __isoc99_sscanf();
            if(param0 == SOCK_STREAM) {
                int* ptr1 = result;
                if(*(char*)&result[0] == 34) {
                    int v2 = (uint32_t)*(char*)&__ptr1[0];
                    if(v2 != 0) {
                        unsigned short** ptr2 = __ctype_b_loc();
                        unsigned short* ptr3 = ptr2[0];
                        int* ptr4 = __ptr1;
                    loc_57770:
                        do {
                            int v3 = v2 * 2;
                            int v4 = v2 - 95;
                            if(v4 != 0) {
                                v4 = SOCK_STREAM;
                            }
                            if((((*(unsigned short*)((int)ptr3 + v3) ^ 0x8) >>> 3) & v4) == 0) {
                                v2 = (uint32_t)*((char*)&ptr4[0] + SOCK_STREAM);
                                ptr4 = (char*)ptr4 + SOCK_STREAM;
                                if(v2 != 0) {
                                    goto loc_57770;
                                }
                                goto loc_577A0;
                            }
                            else {
                                int* ptr5 = __ptr1;
                                sub_5DF98(&g2, "src/format.c", 92, "a_format->name[%s] character is not in [a-Z][0-9][_]");
                                goto loc_578B0;
                            }
                        }
                        while(SOCK_STREAM);
                    }
                loc_577A0:
                    char* __src = (char*)result + SOCK_STREAM;
                    char* ptr6 = strrchr(__src, 34);
                    if(ptr6 != 0) {
                        size_t __n = (size_t)(ptr6 - __src);
                        if(__n <= 0x1000) {
                            void* __dest = (void*)((char*)__ptr1 + 0x1001);
                            memset(__dest, 0, 0x1001);
                            memcpy(__dest, __src, __n);
                            void* ptr7 = sub_5E310((char*)__dest, 0x1001);
                            if(ptr7 == 0) {
                                int* ptr8 = __ptr1 + 0x800;
                                void* ptr9 = sub_5D4C0(&sub_5C6F4);
                                ptr8[SOCK_STREAM] = (int)ptr9;
                                if(ptr9 != 0) {
                                    int v5 = (int)*((char*)&__ptr1[0x400] + SOCK_STREAM);
                                    if(v5 != 0) {
                                    loc_57858:
                                        do {
                                            void* ptr10 = sub_5C758((char*)__dest, &v0, ptr0, v5);
                                            char* __ptr = (char*)ptr10;
                                            uint32_t v6 = (uint32_t)ptr10;
                                            if(ptr10 != 0) {
                                                int v7 = sub_5D694(ptr8[SOCK_STREAM], v6);
                                                if(v7 == 0) {
                                                    __dest = v0;
                                                    v5 = *(char*)__dest;
                                                    if(v5 == 0) {
                                                        goto loc_578C8;
                                                    }
                                                    else {
                                                        goto loc_57858;
                                                    }
                                                }
                                                sub_5C6F4(__ptr);
                                                sub_5DF98(&g2, "src/format.c", 132, "zc_arraylist_add fail");
                                                goto loc_578B0;
                                            }
                                            sub_5DF98(&g2, "src/format.c", 126, "zlog_spec_new fail");
                                            goto loc_578B0;
                                        }
                                        while(SOCK_STREAM);
                                    }
                                loc_578C8:
                                    sub_575FC(__ptr1, NULL);
                                    return __ptr1;
                                }
                                sub_5DF98(&g2, "src/format.c", 119, "zc_arraylist_new fail");
                                goto loc_578B0;
                            }
                            sub_5DF98(&g2, "src/format.c", 112, "zc_str_replace_env fail");
                            goto loc_578B0;
                        }
                        sub_5DF98(&g2, "src/format.c", 105, "pattern is too long");
                        goto loc_578B0;
                    }
                    ptr5 = result;
                    sub_5DF98(&g2, "src/format.c", 100, "there is no \" at end of pattern, line[%s]");
                    goto loc_578B0;
                }
                ptr5 = ptr1;
                sub_5DF98(&g2, "src/format.c", 86, "the 1st char of pattern is not \", line+nread[%s]");
                goto loc_578B0;
            }
            ptr5 = result;
            sub_5DF98(&g2, "src/format.c", 81, "format[%s], syntax wrong");
        loc_578B0:
            sub_5766C((char*)__ptr1);
            return NULL;
        }
        int* ptr11 = __errno_location();
        ptr5 = ptr11[0];
        sub_5DF98(&g2, "src/format.c", 69, "calloc fail, errno[%d]");
        return 0;
    }
    sub_5DF98(&g2, "src/format.c", 65, "line is null or 0");
    return result;
}
