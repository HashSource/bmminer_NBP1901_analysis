int sub_522DC(int* param0) {
    char* ptr0;
    int __buf1;
    ssize_t len;
    char __newthread;
    char __buf;
    short v0;
    char __attr;
    char __s;
    char __s3;
    pthread_t __th = pthread_self();
    pthread_detach(__th);
    *(int*)&v0 = 0;
    int v1 = 0;
    int v2 = 1650422883;
    int v3 = 1767992623;
    v0 = 110;
    prctl(PR_SET_NAME, &v2);
    pthread_attr_init(&__attr);
    pthread_attr_setstacksize(&__attr, 0x100000);
    int __fd = *(param0 + 2);
loc_52360:
    do {
        *(int*)&__buf = 0;
        memset(&__s, 0, 124);
        len = recv(__fd, &__buf, 128, 0);
        if(len > 0) {
            *(char*)(len + (int)&__buf) = 0;
            int __s1_1 = 0;
            int v4 = 0;
            int __s1 = 0;
            int v5 = 0;
            int v6 = 0;
            int v7 = 0;
            int v8 = 0;
            int v9 = 0;
            int v10 = 0;
            int v11 = 0;
            int v12 = 0;
            int v13 = 0;
            int v14 = 0;
            int v15 = 0;
            int v16 = 0;
            int v17 = 0;
            int v18 = 0;
            __isoc99_sscanf();
            int v19 = strcmp(&__s1, "regist");
            if(v19 != 0) {
                uint32_t v20 = gvar_5859E0;
                memcpy((void*)(v20 * 128 + 0x585a08), &__buf, 128);
                gvar_5859E0 = v20 + SOCK_STREAM;
                goto loc_52360;
            }
            void* __arg = calloc(152, 1);
            uint32_t v21 = gvar_5859E4;
            if(v21 != 0) {
                char* __s2 = (char*)&g589A0C;
                do {
                    int v22 = strcmp(&__s1_1, __s2);
                    __s2 += 0x88;
                    if(v22 == 0) {
                        int v23 = *(int*)(v19 * 0x88 + 0x589a8c);
                        *(int*)((int)__arg + 12) = *(int*)(v19 * 0x88 + 0x589a08);
                        *(int*)((int)__arg + 148) = v23;
                    loc_52498:
                        if(v19 == v21) {
                            goto loc_525B0;
                        }
                        else {
                            *(uint32_t*)__arg = gvar_7F788;
                            size_t v24 = strlen(&__s1_1);
                            memcpy((void*)((int)__arg + 16), &__s1_1, v24 + SOCK_STREAM);
                            *(int*)((int)__arg + 144) = 0;
                            pthread_create(&__newthread, &__attr, &sub_52050, __arg);
                            while(*(int*)((int)__arg + 144) == 0) {
                                usleep(10000);
                            }
                            uint32_t v25 = *(uint32_t*)__arg;
                            uint32_t v26 = gvar_7F788;
                            __buf1 = 0;
                            if(v26 != v25) {
                                gvar_7F788 = v25;
                            }
                            memset(&__s3, 0, 252);
                            ptr0 = "OK";
                            sprintf(&__buf1, "%x %d %s %s %s", 63, v25, "reg_resp", "OK", &__s1_1);
                            size_t v27 = strlen(&__buf1);
                            send(__fd, &__buf1, v27 + SOCK_STREAM, 0);
                            ++gvar_7F788;
                            goto loc_52360;
                        }
                    }
                    else {
                        ++v19;
                    }
                }
                while(v19 != v21);
                goto loc_52498;
            }
        loc_525B0:
            __buf1 = 0;
            memset(&__s3, 0, 252);
            ptr0 = "no_name";
            sprintf(&__buf1, "%x %d %s %s %s", 63, 0, "reg_resp", "no_name", &__s1_1);
            size_t v28 = strlen(&__buf1);
            send(__fd, &__buf1, v28 + SOCK_STREAM, 0);
            free(__arg);
            goto loc_52360;
        }
    }
    while(len > 0);
    return 0;
}
