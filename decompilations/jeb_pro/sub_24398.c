int sub_24398(int param0) {
    char v0;
    char v1;
    char v2;
    char __ptr1;
    char* ptr0;
    int v3;
    char* ptr1;
    short v4;
    int v5;
    int v6;
    int v7;
    int __ptr1_1;
    char* ptr2;
    uint32_t v8;
    int v9;
    char v10;
    char v11;
    short v12;
    char v13;
    char v14;
    char v15;
    int v16;
    char v17;
    char __s;
    char __addr;
    short v18;
    int v19;
    short v20;
    uint32_t v21 = 0;
    int __fd1 = param0;
    int __optval = 3;
    int v22 = 0;
    void* __ptr = calloc(1, 0x6000);
    short v23 = 2573;
    void* ptr3 = &__s;
    int v24 = 0;
    char v25 = 0;
    char v26 = 0;
    int __needle = 0xa0d0a0d;
    memset(&__s, 0, 0x2800);
    do {
        v9 = gvar_7F9F8;
        size_t __n = (size_t)(0x27ff - v21);
        void* __buf = ptr3;
        int __fd = __fd1;
        if(v9 == 0) {
            v9 = &__addr;
            socklen_t* __addr_len = &v24;
            ssize_t v27 = recvfrom(__fd, __buf, __n, 0, &__addr, __addr_len);
            v21 += v27;
            if(v27 <= 0) {
                close(__fd1);
                if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                    __ptr1 = ':';
                    v2 = 't';
                    v1 = 'e';
                    v0 = 'c';
                    __builtin_strcpy((char*)&v16, "read recvfrom<=0");
                    sub_2E584(7, &__ptr1, 0);
                }
                goto loc_24590;
            }
            else {
                v8 = v21;
                ptr3 = v21 + (int)&__s;
                if((int)v8 > 10238) {
                    goto loc_2462C;
                }
                else {
                    ptr2 = strstr((char*)&__s, &__needle);
                }
            }
        }
        else {
        loc_24480:
            if(gvar_482A5D == 0) {
            loc_244F4:
                if(__s != 71 || v15 != 69) {
                loc_24508:
                    close(__fd1);
                    if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                        __builtin_strcpy(&__ptr1, "statusServiceThread not support http command");
                        sub_2E584(7, &__ptr1, 0);
                    }
                    goto loc_24590;
                }
                else {
                    if(v14 != 84 || v13 != 32) {
                        goto loc_24508;
                    }
                    int v28 = setsockopt(__fd1, SOCK_STREAM, SO_SNDTIMEO_OLD, &__optval, 8);
                    if(v28 == 0) {
                        int result = setsockopt(__fd1, SOCK_STREAM, SO_RCVTIMEO_OLD, &__optval, 8);
                        if(result == 0) {
                            uint32_t v29 = gvar_7F9FC;
                            if(v29 == 0) {
                                if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                                    __ptr1 = 'N';
                                    v2 = '0';
                                    v1 = 't';
                                    v0 = ' ';
                                    __builtin_strcpy((char*)&v16, "e found.");
                                    sub_2E584(7, &__ptr1, 0);
                                }
                            loc_24864:
                                size_t v30 = strlen((char*)__ptr);
                                size_t v31 = v30;
                                int v32 = sprintf(&__ptr1, "HTTP/1.0  200  OK%s", &v23);
                                int v33 = sprintf(v32 + &__ptr1, "Server: SearchFreqServer%s", &v23);
                                int v34 = v32 + v33;
                                int v35 = sprintf(v34 + &__ptr1, "Cache-Control: no-cache%s", &v23);
                                int v36 = v35 + v34;
                                int v37 = sprintf(v36 + &__ptr1, "Pragma: no-cache%s", &v23);
                                int v38 = v37 + v36;
                                int v39 = sprintf(v38 + &__ptr1, "Content-Type: text/plain%s", &v23);
                                int v40 = v39 + v38;
                                int v41 = sprintf(v40 + &__ptr1, "Content-Length: %d%s", v30, &v23);
                                sprintf(v41 + v40 + &__ptr1, "Connection: Keep-Alive%s", &__needle);
                                if(gvar_482A5D != 0) {
                                    if(gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6 && gvar_7F9F8 != 0) {
                                    loc_24EA8:
                                        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6) {
                                            __builtin_strcpy(&__ptr1_1, "send http data...");
                                            sub_2E584(7, &__ptr1_1, 0);
                                        }
                                    loc_24AEC:
                                        ptr1 = &gvar_482A5C;
                                        do {
                                            ssize_t len = send(__fd1, (void*)((int)__ptr + result), v31 - result, 0);
                                            ssize_t v42 = len;
                                            if(gvar_482A5D != 0 && (gvar_590404 != 0 || *ptr1 != 0 || (int)gvar_7EBA0 > 6)) {
                                                snprintf(&__ptr1_1, 0x800, "send http data ret=%d", v42);
                                                sub_2E584(7, &__ptr1_1, 0);
                                            }
                                            if(len <= 0 && gvar_482A5D == 0) {
                                                close(__fd1);
                                                free(__ptr);
                                                return result;
                                            }
                                            else if(len <= 0 && gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6) {
                                                goto loc_24C44;
                                            }
                                            else if(len <= 0) {
                                                __ptr1_1 = 1952543859;
                                                v7 = 1699967861;
                                                v6 = 1667855986;
                                                v5 = 1919439973;
                                                *(int*)&v18 = 543449445;
                                                *(int*)&v4 = 1684956531;
                                                *(int*)&v11 = 1953785888;
                                                v3 = 1633951856;
                                                __builtin_strcpy((char*)&v19, "ta error");
                                                sub_2E584(7, &__ptr1_1, 0);
                                            loc_24C1C:
                                                if(gvar_482A5D == 0) {
                                                    close(__fd1);
                                                    free(__ptr);
                                                    return result;
                                                }
                                                if(gvar_590404 == 0) {
                                                loc_24C44:
                                                    if(gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6) {
                                                        close(__fd1);
                                                        free(__ptr);
                                                        return result;
                                                    }
                                                }
                                                __builtin_strcpy(&__ptr1_1, "one client disconnected!");
                                                sub_2E584(7, &__ptr1_1, 0);
                                                close(__fd1);
                                                free(__ptr);
                                                return result;
                                            }
                                            else {
                                                result += len;
                                            }
                                        }
                                        while(result < (int)v31 && gvar_7F9F8 == 0);
                                        goto loc_24C1C;
                                    }
                                    else if(gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6) {
                                        goto loc_24974;
                                    }
                                    else {
                                        __ptr1_1 = 1684956531;
                                        v7 = 1953785888;
                                        v6 = 0x65722070;
                                        v5 = 0x6e6f7073;
                                        *(int*)&v18 = 0x2e2e6573;
                                        v4 = 2606;
                                        char v43 = 0;
                                        sub_2E584(7, &__ptr1_1, 0);
                                        if(gvar_7F9F8 == 0) {
                                            goto loc_24974;
                                        }
                                    loc_24AC8:
                                        if(gvar_482A5D == 0) {
                                            goto loc_24AEC;
                                        }
                                        goto loc_24EA8;
                                    }
                                }
                                if(gvar_7F9F8 != 0) {
                                    goto loc_24AEC;
                                }
                            loc_24974:
                                size_t v44 = strlen(&__ptr1);
                                ptr1 = &gvar_590404;
                                char* ptr4 = (char*)&gvar_482A5C;
                                int v45 = 0;
                                do {
                                    ssize_t len1 = send(__fd1, (void*)(v45 + &__ptr1), v44 - v45, 0);
                                    if(len1 == -1) {
                                        int* ptr5 = __errno_location();
                                        if(ptr5[0] != 11) {
                                        loc_249F4:
                                            close(__fd1);
                                            if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                                                __builtin_strcpy(&__ptr1_1, "statusServiceThread send http response error");
                                                sub_2E584(7, &__ptr1_1, 0);
                                            }
                                            free(__ptr);
                                            return 0;
                                        }
                                        if(gvar_482A5D != 0 && (*ptr1 != 0 || *ptr4 != 0 || (int)gvar_7EBA0 > 6)) {
                                            __ptr1_1 = 1952543859;
                                            v7 = 1699967861;
                                            v6 = 1667855986;
                                            v5 = 1919439973;
                                            *(int*)&v18 = 543449445;
                                            *(int*)&v4 = 1684956531;
                                            *(int*)&v11 = 1953785888;
                                            v3 = 1769218160;
                                            __builtin_strcpy((char*)&v19, "meout, try again...");
                                            sub_2E584(7, &__ptr1_1, 0);
                                        }
                                        usleep(&loc_186A0);
                                    }
                                    else if(len1 <= 0) {
                                        goto loc_249F4;
                                    }
                                    else {
                                        v45 += len1;
                                    }
                                    v44 = strlen(&__ptr1);
                                }
                                while(v44 > (uint32_t)v45 && gvar_7F9F8 == 0);
                                goto loc_24AC8;
                            }
                            else {
                                int v46 = v29((int)&__s, (int)__ptr, 0x6000);
                                if(v46 == 0) {
                                    goto loc_24864;
                                }
                                else {
                                    close(__fd1);
                                }
                            }
                        }
                        else {
                            close(__fd1);
                            if(gvar_482A5D == 0 || (gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6)) {
                                goto loc_24590;
                            }
                            ptr0 = "setsockopt SO_RCVTIMEO failed";
                        loc_247A4:
                            char v47 = *(int*)&ptr0[4];
                            char v48 = *(int*)&ptr0[8];
                            char v49 = *(int*)&ptr0[12];
                            char* ptr6 = ptr0 + 16;
                            __ptr1 = *(int*)&ptr0[0];
                            v2 = v47;
                            v1 = v48;
                            v0 = v49;
                            char v50 = *(int*)&ptr6[4];
                            char v51 = *(int*)&ptr6[8];
                            char v52 = *(int*)&ptr6[12];
                            v16 = *(int*)&ptr6[0];
                            *(char*)&v12 = v50;
                            *(char*)&v10 = v51;
                            v20 = (uint16_t)v52;
                            sub_2E584(7, &__ptr1, 0);
                            goto loc_24590;
                        }
                    }
                    else {
                        close(__fd1);
                        if(gvar_482A5D == 0 || (gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6)) {
                            goto loc_24590;
                        }
                        ptr0 = "setsockopt SO_SNDTIMEO failed";
                        goto loc_247A4;
                    }
                }
                if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                    __ptr1 = 's';
                    v2 = 'u';
                    v1 = 'r';
                    v0 = 'e';
                    v16 = 'e';
                    *(int*)&v12 = 1953069157;
                    *(int*)&v10 = 0x726f6620;
                    *(int*)&v20 = 1920091424;
                    __builtin_strcpy(&v17, "or cmd!");
                    sub_2E584(7, &__ptr1, 0);
                }
                goto loc_24590;
            }
            if(gvar_590404 == 0) {
            loc_244A8:
                if(gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6) {
                    goto loc_244F4;
                }
            }
            snprintf(&__ptr1, 0x800, "get http=%s", &__s);
            sub_2E584(7, &__ptr1, 0);
            goto loc_244F4;
        }
    }
    while(ptr2 == 0);
    if(gvar_482A5D == 0) {
        goto loc_244F4;
    }
    else {
        if((gvar_590404 == 0 && gvar_482A5C == 0)) {
            uint32_t v53 = gvar_7EBA0;
            v8 = gvar_7EBA0;
            if((int)v53 <= 6) {
                goto loc_244A8;
            }
        }
        v9 = "\n";
        __ptr1 = 'f';
        v2 = ' ';
        v1 = 'p';
        v0 = 'q';
        __builtin_strcpy((char*)&v16, "t end flag!");
        sub_2E584(7, &__ptr1, 0);
        goto loc_24480;
    loc_2462C:
        close(__fd1);
    }
    if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
        __ptr1 = 'B';
        v2 = 'I';
        v1 = 'i';
        v0 = 'o';
        __builtin_strcpy((char*)&v16, "mall!");
        sub_2E584(7, &__ptr1, 0);
    }
loc_24590:
    if(__ptr == 0) {
        return 0;
    }
    free(__ptr);
    return 0;
}
