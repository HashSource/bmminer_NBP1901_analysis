void* sub_253A0(char* param0) {
    char __buf;
    char __dest1;
    short v0;
    char __dest;
    char v1;
    short v2;
    char* __s1_1 = param0;
    memset(&__buf, 0, 0x1000);
    memset(&__dest, 0, 0x400);
    memset(&__dest1, 0, 0x400);
    if(__s1_1 != 0) {
        int v3 = strncmp(__s1_1, "http://", 7);
        if(v3 == 0) {
            char* __src = __s1_1 + 7;
            char* __s1 = strchr(__src, 47);
            size_t __n = strlen(__src);
            size_t v4 = __n;
            if(__s1 == 0) {
                memcpy(&__dest, __src, __n);
                *(char*)(v4 + (int)&__dest) = 0;
            }
            else {
                size_t v5 = strlen(__s1);
                size_t __n1 = v4 - v5;
                memcpy(&__dest, __src, __n1);
                int v6 = (uint32_t)__s1[SOCK_STREAM];
                *(char*)(__n1 + (int)&__dest) = 0;
                if(v6 != 0) {
                    memcpy(&__dest1, (void*)(__s1 + SOCK_STREAM), v5 - SOCK_STREAM);
                    *(v5 + &v1) = 0;
                }
            }
            char* ptr0 = strchr((char*)&__dest, 58);
            if(ptr0 == 0) {
                long v7 = 80;
            }
            else {
                ptr0[0] = 0;
                v7 = strtol(ptr0 + SOCK_STREAM, NULL, 10);
            }
            hostent* ptr1 = gethostbyname((char*)&__dest);
            if(ptr1 != 0) {
                short v8 = (uint16_t)(uint8_t)(int)(v7 >>> 8) | ((uint16_t)(uint8_t)v7 << 8);
                short __addr = 2;
                char v9 = *(int*)&ptr1->h_addr_list[0][0];
                int __fd = socket(AF_INET, SOCK_STREAM, 0);
                int __fd1 = __fd;
                if(__fd != -1) {
                    int __optval = 10;
                    int v10 = 0;
                    int v11 = setsockopt(__fd, SOCK_STREAM, SO_SNDTIMEO_OLD, &__optval, 8);
                    if(v11 == 0) {
                        int v12 = setsockopt(__fd1, SOCK_STREAM, SO_RCVTIMEO_OLD, &__optval, 8);
                        if(v12 == 0) {
                            int v13 = connect(__fd1, &__addr, 16);
                            if(v13 != -1 && __fd1 >= 0) {
                                long v14 = v7;
                                sprintf((char*)&__buf, "GET /%s HTTP/1.1\r\nHOST: %s:%d\r\nAccept: */*\r\n\r\n", &__dest1, &__dest, v14);
                                size_t v15 = strlen((char*)&__buf);
                                if(v15 != 0) {
                                loc_255A4:
                                    do {
                                        ssize_t len = send(__fd1, (void*)(v12 + (int)&__buf), v15 - v12, 0);
                                        v12 += len;
                                        if(len != -1) {
                                            if(v12 >= (int)v15) {
                                                goto loc_257F8;
                                            }
                                            else {
                                                goto loc_255A4;
                                            }
                                        }
                                        if(gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 4) {
                                            return NULL;
                                        }
                                        char* ptr2 = "tcp client send failed\n";
                                        goto loc_255FC;
                                    }
                                    while(SOCK_STREAM);
                                }
                            loc_257F8:
                                ssize_t len1 = recv(__fd1, &__buf, 0x1000, 0);
                                if(len1 <= 0) {
                                    if(gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 4) {
                                        return NULL;
                                    }
                                    ptr2 = "tcp client recv failed\n";
                                loc_255FC:
                                    char v16 = *(int*)&ptr2[4];
                                    char v17 = *(int*)&ptr2[8];
                                    char v18 = *(int*)&ptr2[12];
                                    char* ptr3 = ptr2 + 16;
                                    *(char*)&__addr = *(int*)&ptr2[0];
                                    v9 = v16;
                                    char v19 = v17;
                                    *(char*)&v2 = v18;
                                    char v20 = *(int*)&ptr3[4];
                                    *(char*)&v0 = *(int*)&ptr3[0];
                                    char v21 = v20;
                                    sub_2E584(5, (char*)&__addr, 0);
                                    return NULL;
                                }
                                close(__fd1);
                                char* ptr4 = strstr((char*)&__buf, "HTTP/1.1");
                                if(ptr4 == 0) {
                                    return NULL;
                                }
                                long v22 = strtol(ptr4 + 9, NULL, 10);
                                if(v22 != 200) {
                                    return NULL;
                                }
                                char* __s = strstr((char*)&__buf, "\r\n\r\n");
                                char* ptr5 = __s;
                                if(ptr5 == 0) {
                                    return NULL;
                                }
                                size_t v23 = strlen(__s);
                                void* __dest2 = malloc(v23 + SOCK_STREAM);
                                void* result = __dest2;
                                if(result != 0) {
                                    strcpy((char*)__dest2, ptr5 + 4);
                                    return result;
                                }
                                return NULL;
                            }
                        }
                    }
                }
            }
        }
        else {
            goto loc_256AC;
        }
        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
            *(int*)&__addr = 544236404;
            v9 = 'c';
            v19 = 'n';
            *(int*)&v2 = 1952540018;
            *(int*)&v0 = 0x61662065;
            v21 = 'i';
            short v24 = 10;
            sub_2E584(5, (char*)&__addr, 0);
            return NULL;
        loc_256AC:
            if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
                *(int*)&__addr = 1936875888;
                v9 = 'e';
                v19 = 'l';
                *(int*)&v2 = 0x64656c69;
                v0 = 2593;
                char v25 = 0;
                sub_2E584(5, (char*)&__addr, 0);
                return NULL;
            }
        }
    }
    else if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
        *(int*)&__addr = 543978101;
        v9 = 'i';
        v19 = 'u';
        v2 = 10;
        sub_2E584(5, (char*)&__addr, 0);
    }
    return NULL;
}
