pthread_mutex_t* sub_58958(pthread_mutex_t* __mutex, unsigned int param1, int param2, char* param3, int param4, unsigned int param5) {
    int v0;
    int v1;
    int v2;
    unsigned int v3 = param1;
    if(param1 != 0) {
        int v4 = param2;
        char* __s4 = param3;
        pthread_mutex_t* __mutex1 = __mutex;
        int v5 = 0;
        int v6 = 0;
        int v7 = 0;
        int v8 = 0;
        pthread_mutex_t* __pglob = (pthread_mutex_t*)&g1;
        int v9 = pthread_mutex_trylock(__mutex);
        if(v9 == 0) {
            int v10 = fcntl(__mutex1[SOCK_STREAM].__data.__count, 13);
            if(v10 == 0) {
                goto loc_58A48;
            }
            else {
                int* ptr0 = __errno_location();
                int* ptr1 = ptr0;
            }
        }
        else if(v9 == 16) {
            goto loc_592B8;
        }
        else {
            goto loc_59104;
        }
        if(((ptr0[0] - 11) & 0xfffffffd) == 0) {
            sub_5DF98(&g1, "src/rotater.c", 493, "fcntl lock fail, as file is lock by other process");
            int v11 = pthread_mutex_unlock(__mutex1);
            if(v11 != 0) {
            loc_58B08:
                v69 = ptr1[0];
                sub_5DF98(&g2, "src/rotater.c", 498, "pthread_mutex_unlock fail, errno[%d]");
                goto loc_58A28;
            loc_58A48:
                __xstat64();
                pthread_mutex_t* result = __mutex;
                if(result == 0) {
                    int v12 = param4;
                    int v13 = v1;
                    int v14 = v13 + v4;
                    if(((uint64_t)v12 | ((uint64_t)(v12 >> 31) << 32)) < ((uint64_t)v14 | ((uint64_t)((uint32_t)__carry__(v13, v4) + v0) << 32))) {
                        unsigned int v15 = param5;
                        __mutex1[SOCK_STREAM].__data.__owner = (int)v3;
                        __mutex1[SOCK_STREAM].__data.__kind = (int)__s4;
                        __mutex1[45].__data.__count = v15;
                        if(__s4[0] == 0) {
                            char* __s = (char*)(__mutex1 + 10);
                            __pattern = __mutex1 + 10;
                            int v16 = snprintf(__s, 1025, "%s.*", v3);
                            int v17 = v16;
                            v63 = v16 == 1025;
                            v65 = (uint32_t)v16 >= 1025;
                            if(v65 == 0 || v63 != 0) {
                                char* __s1 = (char*)__mutex1[SOCK_STREAM].__data.__owner;
                                __mutex1[45].__data.__lock = SOCK_STREAM;
                                __mutex1[44].__data.__spins = 0;
                                size_t v18 = strlen(__s1);
                                __mutex1[44].__data.__kind = (int)(v18 + SOCK_STREAM);
                                size_t v19 = strlen(__s1);
                                __mutex1[44].__data.__nusers = v19 + 2;
                            loc_58CA8:
                                void* ptr2 = sub_5D4C0(&sub_58584);
                                __mutex1[45].__data.__owner = (int)ptr2;
                                if(ptr2 != 0) {
                                    int v20 = glob64(__pattern, 7, NULL, &__pglob);
                                    int v21 = v20;
                                    if(v20 == 0) {
                                        pthread_mutex_t* ptr3 = __pglob;
                                        int v22 = v2;
                                        pthread_mutex_t* ptr4 = ptr3;
                                        int* ptr5 = (int*)((char*)ptr3 - SOCK_STREAM);
                                        if(ptr4 != 0) {
                                            int* ptr6 = (int*)(v22 - 4);
                                            char* __format = "not the expect pattern file";
                                            int v23 = "src/rotater.c";
                                            pthread_mutex_t* ptr7 = NULL;
                                            do {
                                                char* __s2 = *(char**)(ptr6 + SOCK_STREAM);
                                                ++ptr6;
                                                int v24 = strcmp(__mutex1[SOCK_STREAM].__data.__owner, __s2);
                                                ptr4 = v24;
                                                if(v24 != 0) {
                                                    size_t v25 = strlen(__s2);
                                                    if(__s2[v25 - SOCK_STREAM] != 47) {
                                                        void* __ptr = calloc(1, 1032);
                                                        if(__ptr == 0) {
                                                            int* ptr8 = __errno_location();
                                                            int v26 = v23;
                                                            v69 = ptr8[0];
                                                            sub_5DF98(&g2, v26, 149, "calloc fail, errno[%d]");
                                                        }
                                                        else {
                                                            char* __s3 = (char*)((int)__ptr + 4);
                                                            int v27 = snprintf(__s3, 1025, "\n");
                                                            v63 = v27 == 0x400;
                                                            int v28 = v27;
                                                            if((uint32_t)v27 < 0x400 || v63 != 0) {
                                                                int v29 = 0;
                                                                __isoc99_sscanf();
                                                                if(__mutex1[44].__data.__spins <= 0) {
                                                                    int v30 = sub_5D6A0(__mutex1[45].__data.__owner, &sub_5856C, (uint32_t)__ptr);
                                                                    if(v30 == 0) {
                                                                        goto loc_58DC8;
                                                                    }
                                                                    else {
                                                                        sub_5DF98(&g2, "src/rotater.c", 219, "zc_arraylist_sortadd fail");
                                                                        globfree64(&__pglob);
                                                                        goto loc_58E9C;
                                                                    }
                                                                }
                                                                sub_5DF98(&g1, v23, 164, "aa.1.log is not expect, need aa.01.log");
                                                            }
                                                            else {
                                                                __errno_location();
                                                                v69 = v28;
                                                                int v31 = v23;
                                                                sub_5DF98(&g2, v31, 155, "snprintf fail or overflow, nwrite=[%d], errno[%d]");
                                                            }
                                                            free(__ptr);
                                                        }
                                                    }
                                                }
                                                sub_5DF98(&g1, v23, 211, __format);
                                            loc_58DC8:
                                                int* ptr9 = ptr5;
                                                ptr5 = (char*)ptr5 - SOCK_STREAM;
                                                v65 = (uint32_t)ptr9 >= SOCK_STREAM;
                                            }
                                            while(v65 != 0);
                                            result = ptr7;
                                        }
                                    }
                                    else if(v20 != 3) {
                                        __errno_location();
                                        v69 = v21;
                                        sub_5DF98(&g2, "src/rotater.c", 200, "glob err, rc=[%d], errno[%d]");
                                        goto loc_58E9C;
                                    }
                                    globfree64(&__pglob);
                                    int v32 = __mutex1[45].__data.__lock;
                                    if(v32 == SOCK_STREAM) {
                                        int v33 = __mutex1[45].__data.__owner;
                                        int v34 = *(int*)(v33 + 4) - SOCK_STREAM;
                                        if(v34 >= 0) {
                                            int v35 = v34 * 4;
                                            int v36 = *(int*)(v34 * 4 + *(int*)v33);
                                            if(v36 != 0) {
                                                int* ptr10 = (int*)(v35 - 4);
                                                char* ptr11 = __pattern;
                                            loc_58FEC:
                                                do {
                                                    v60 = __mutex1[45].__data.__count;
                                                    char* __name = (char*)(v36 + 4);
                                                    if((int)v60 > 0 && v60 - SOCK_STREAM <= v34) {
                                                        int v37 = unlink(__name);
                                                        if(v37 == 0) {
                                                            goto loc_58FC0;
                                                        }
                                                        else {
                                                            __errno_location();
                                                            v69 = __name;
                                                            sub_5DF98(&g2, "src/rotater.c", 0x131, "unlink[%s] fail, errno[%d]");
                                                            goto loc_59068;
                                                        }
                                                    }
                                                    memset(&__pglob, 0, 1025);
                                                    v60 = __mutex1[44].__data.__spins;
                                                    int v38 = __mutex1[44].__data.__kind;
                                                    int* ptr12 = (int*)(__mutex1[44].__data.__nusers + ptr11);
                                                    v56 = v34 + SOCK_STREAM;
                                                    ptr17 = ptr12;
                                                    v69 = ptr11;
                                                    int v39 = snprintf((char*)&__pglob, 1025, "%.*s%0*d%s", v38, v69, v60);
                                                    char* __old = __name;
                                                    if((uint32_t)v39 <= 0x400) {
                                                        int v40 = rename(__old, (char*)&__pglob);
                                                        if(v40 == 0) {
                                                        loc_58FC0:
                                                            int v41 = v34;
                                                            --v34;
                                                            if(v41 < SOCK_STREAM) {
                                                                goto loc_592CC;
                                                            }
                                                            else {
                                                                int v42 = __mutex1[45].__data.__owner;
                                                                if(*(int*)(v42 + 4) <= v34) {
                                                                    goto loc_59244;
                                                                }
                                                                else {
                                                                    v36 = *(int*)(*(int*)v42 + (int)ptr10);
                                                                    --ptr10;
                                                                    if(v36 == 0) {
                                                                        goto loc_59244;
                                                                    }
                                                                    goto loc_58FEC;
                                                                }
                                                            }
                                                        }
                                                        int* ptr13 = __errno_location();
                                                        v56 = ptr13[0];
                                                        v69 = __name;
                                                        sub_5DF98(&g2, "src/rotater.c", 323, "rename[%s]->[%s] fail, errno[%d]");
                                                        goto loc_59068;
                                                    }
                                                    __errno_location();
                                                    v69 = v39;
                                                    sub_5DF98(&g2, "src/rotater.c", 318, "nwirte[%d], overflow or errno[%d]");
                                                    goto loc_59068;
                                                }
                                                while(SOCK_STREAM);
                                            }
                                        loc_59244:
                                            sub_5DF98(&g2, "src/rotater.c", 297, "zc_arraylist_get fail");
                                            goto loc_59068;
                                        }
                                    loc_592CC:
                                        memset(&__pglob, 0, 1025);
                                        v60 = __mutex1[44].__data.__spins;
                                        int v43 = __mutex1[44].__data.__kind;
                                        int* ptr14 = (int*)(__mutex1[44].__data.__nusers + __pattern);
                                        v56 = 0;
                                        ptr17 = ptr14;
                                        v69 = __pattern;
                                        int v44 = snprintf((char*)&__pglob, 1025, "%.*s%0*d%s", v43, v69, v60);
                                        int v45 = v44;
                                    }
                                    else if(v32 == 2) {
                                        int v46 = __mutex1[45].__data.__owner;
                                        int v47 = *(int*)(v46 + 4);
                                        if(v47 > 0) {
                                            int v48 = 0;
                                            do {
                                                unsigned int v49 = __mutex1[45].__data.__count;
                                                if((int)v49 > 0 && v47 - v49 > v48) {
                                                    char* __name1 = (char*)(*(int*)(v48 * 4 + *(int*)v46) + 4);
                                                    int v50 = unlink(__name1);
                                                    if(v50 == 0) {
                                                        v46 = __mutex1[45].__data.__owner;
                                                    }
                                                    else {
                                                        __errno_location();
                                                        v69 = __name1;
                                                        sub_5DF98(&g2, "src/rotater.c", 246, "unlink[%s] fail, errno[%d]");
                                                        goto loc_59208;
                                                    }
                                                }
                                                v47 = *(int*)(v46 + 4);
                                                ++v48;
                                            }
                                            while(v47 > v48);
                                            if(v47 > 0) {
                                                int* ptr15 = *(uint32_t*)((v47 + 0x3fffffff) * 4 + *(int*)v46);
                                                if(ptr15 == 0) {
                                                    sub_5DF98(&g2, "src/rotater.c", 0x100, "zc_arraylist_get fail");
                                                    goto loc_59208;
                                                }
                                                else {
                                                    int v51 = *ptr15;
                                                    int v52 = v47 - SOCK_STREAM;
                                                    if(v52 < v51) {
                                                        v52 = v51;
                                                    }
                                                    int v53 = v52 + SOCK_STREAM;
                                                    goto loc_5915C;
                                                }
                                            }
                                        }
                                        v53 = 0;
                                    loc_5915C:
                                        memset(&__pglob, 0, 1025);
                                        int v54 = __mutex1[44].__data.__spins;
                                        int v55 = __mutex1[44].__data.__kind;
                                        int* ptr16 = (int*)(__mutex1[44].__data.__nusers + __pattern);
                                        int v56 = v53;
                                        int* ptr17 = ptr16;
                                        v69 = __pattern;
                                        int v57 = snprintf((char*)&__pglob, 1025, "%.*s%0*d%s", v55, v69, v54);
                                        int v58 = v57;
                                        if((uint32_t)v57 <= 0x400) {
                                            int v59 = rename(__mutex1[SOCK_STREAM].__data.__owner, (char*)&__pglob);
                                            if(v59 == 0) {
                                                goto loc_58E24;
                                            }
                                            else {
                                                int* ptr18 = __errno_location();
                                                unsigned int v60 = (unsigned int)__mutex1[SOCK_STREAM].__data.__owner;
                                                v56 = ptr18[0];
                                                v69 = v60;
                                                sub_5DF98(&g2, "src/rotater.c", 0x115, "rename[%s]->[%s] fail, errno[%d]");
                                                goto loc_59208;
                                            }
                                        }
                                        __errno_location();
                                        v69 = v58;
                                        sub_5DF98(&g2, "src/rotater.c", 0x110, "nwirte[%d], overflow or errno[%d]");
                                    loc_59208:
                                        sub_5DF98(&g2, "src/rotater.c", 456, "zlog_rotater_seq_files fail");
                                        goto loc_58EA4;
                                    }
                                    else {
                                        goto loc_58E24;
                                    }
                                    if((uint32_t)v44 <= 0x400) {
                                        int v61 = rename(__mutex1[SOCK_STREAM].__data.__owner, (char*)&__pglob);
                                        if(v61 == 0) {
                                            goto loc_58E24;
                                        }
                                        int* ptr19 = __errno_location();
                                        v60 = __mutex1[SOCK_STREAM].__data.__owner;
                                        v56 = ptr19[0];
                                        v69 = v60;
                                        sub_5DF98(&g2, "src/rotater.c", 340, "rename[%s]->[%s] fail, errno[%d]");
                                        goto loc_59068;
                                    loc_58E24:
                                        sub_585E4((int*)__mutex1);
                                        goto loc_58A7C;
                                    }
                                    else {
                                        __errno_location();
                                        v69 = v45;
                                        sub_5DF98(&g2, "src/rotater.c", 335, "nwirte[%d], overflow or errno[%d]");
                                    loc_59068:
                                        sub_5DF98(&g2, "src/rotater.c", 450, "zlog_rotater_roll_files fail");
                                        goto loc_58EA4;
                                    }
                                }
                                sub_5DF98(&g2, "src/rotater.c", 191, "zc_arraylist_new fail");
                            loc_58E9C:
                                sub_5DF98(&g2, "src/rotater.c", 443, "zlog_rotater_add_archive_files fail");
                                goto loc_58EA4;
                            }
                            __errno_location();
                            v69 = v17;
                            sub_5DF98(&g2, "src/rotater.c", 360, "nwirte[%d], overflow or errno[%d]");
                        loc_59420:
                            sub_5DF98(&g2, "src/rotater.c", 437, "zlog_rotater_parse_archive_path fail");
                        loc_58EA4:
                            result = &gFFFFFFFF;
                            sub_585E4((int*)__mutex1);
                            v69 = v3;
                            sub_5DF98(&g2, "src/rotater.c", 560, "zlog_rotater_lsmv [%s] fail, return");
                        }
                        else {
                            char* ptr20 = strchr(__s4, 35);
                            if(ptr20 == 0) {
                                v69 = __s4;
                                sub_5DF98(&g2, "src/rotater.c", 374, "no # in archive_path[%s]");
                            }
                            else {
                                __isoc99_sscanf();
                                __pglob = &g1;
                                int v62 = (uint32_t)ptr20[&g1];
                                if(v62 == 114) {
                                    __mutex1[45].__data.__lock = SOCK_STREAM;
                                    goto loc_58C3C;
                                }
                                if(v62 == 115) {
                                    __mutex1[45].__data.__lock = 2;
                                loc_58C3C:
                                    void* __src = (void*)__mutex1[SOCK_STREAM].__data.__kind;
                                    size_t __n = (size_t)(ptr20 - __src);
                                    char v63 = __n == 0x400;
                                    if(__n < 0x400 || v63 != 0) {
                                        void* __dest = (void*)(__mutex1 + 10);
                                        char* __pattern = (char*)(__mutex1 + 10);
                                        size_t __maxlen = (size_t)(1025 - __n);
                                        memcpy(__dest, __src, __n);
                                        int v64 = snprintf((char*)(__n + (int)__dest), __maxlen, &g6C8EC);
                                        if(v64 >= 0) {
                                            char v65 = (uint32_t)v64 <= __maxlen;
                                            if(v65 != 0) {
                                                __mutex1[44].__data.__kind = (int)__n;
                                                __mutex1[44].__data.__nusers = __n + SOCK_STREAM;
                                                goto loc_58CA8;
                                            }
                                        }
                                        __errno_location();
                                        v69 = v64;
                                        sub_5DF98(&g2, "src/rotater.c", 0x191, "nwirte[%d], overflow or errno[%d]");
                                    }
                                    else {
                                        v69 = __n;
                                        sub_5DF98(&g2, "src/rotater.c", 393, "sizeof glob_path not enough,len[%ld]");
                                    }
                                }
                                else {
                                    sub_5DF98(&g2, "src/rotater.c", 386, "#r or #s not found");
                                }
                            }
                            goto loc_59420;
                        }
                    }
                }
                else {
                    __errno_location();
                    v69 = v3;
                    result = &gFFFFFFFF;
                    sub_5DF98(&g2, "src/rotater.c", 0x221, "stat [%s] fail, errno[%d]");
                }
            loc_58A7C:
                v5 = 0;
                v6 = 0;
                v7 = 0;
                v8 = 0;
                int __fd = (int)__mutex1[SOCK_STREAM].__data.__count;
                __pglob = &g2;
                int v66 = fcntl(__fd, 13);
                if(v66 == 0) {
                    int v67 = pthread_mutex_unlock(__mutex1);
                    if(v67 == 0) {
                        return result;
                    }
                    int* ptr21 = __errno_location();
                    goto loc_59290;
                }
                else {
                    ptr21 = __errno_location();
                    v69 = __mutex1[SOCK_STREAM].__data.__count;
                    sub_5DF98(&g2, "src/rotater.c", 518, "unlock fd[%s] fail, errno[%d]");
                    int v68 = pthread_mutex_unlock(__mutex1);
                }
                if(v68 != 0) {
                loc_59290:
                    v69 = ptr21[0];
                    sub_5DF98(&g2, "src/rotater.c", 523, "pthread_mutext_unlock fail, errno[%d]");
                }
                sub_5DF98(&g2, "src/rotater.c", 569, "zlog_rotater_unlock fail");
                return result;
            loc_59104:
                v69 = v9;
                sub_5DF98(&g2, "src/rotater.c", 484, "pthread_mutex_trylock fail, rc[%d]");
                goto loc_58A28;
            loc_592B8:
                sub_5DF98(&g1, "src/rotater.c", 0x1e1, "pthread_mutex_trylock fail, as lock_mutex is locked by other threads");
            }
        }
        else {
            unsigned int v69 = __mutex1[SOCK_STREAM].__data.__count;
            sub_5DF98(&g2, "src/rotater.c", 495, "lock fd[%d] fail, errno[%d]");
            int v70 = pthread_mutex_unlock(__mutex1);
            if(v70 != 0) {
                goto loc_58B08;
            }
        }
    loc_58A28:
        sub_5DF98(&g1, "src/rotater.c", 539, "zlog_rotater_trylock fail, maybe lock by other process or threads");
        return NULL;
    }
    sub_5DF98(&g2, "src/rotater.c", 536, "base_path is null or 0");
    return &gFFFFFFFF;
}
