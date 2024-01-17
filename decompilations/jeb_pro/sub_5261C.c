pthread_mutexattr_t* sub_5261C(int param0, uint32_t param1) {
    int v0;
    char v1;
    char __newthread;
    char v2;
    int __buf2;
    char __s2;
    char __buf3;
    short v3;
    char __attr;
    char __addr1;
    char __s;
    char __s1;
    char __s3;
    if(gvar_5859E8 == 0) {
        pthread_attr_init(&__attr);
        pthread_attr_setstacksize(&__attr, 0x100000);
        pthread_mutex_init(&g5859EC, NULL);
        gvar_5859E4 = param1;
        if(param1 != 0) {
            void* __src = (void*)(param0 + 4);
            void* __dest = (void*)&g589A0C;
            int* ptr0 = (int*)(param1 * 0x88 + (int)__src);
            do {
                void* dstbuf = memcpy(__dest, __src, 128);
                __src = (int)__src + 0x88;
                int v4 = *(int*)((int)__src - 140);
                __dest = (int)dstbuf + 0x88;
                *(int*)((int)dstbuf + 128) = *(int*)((int)__src - 8);
                *(int*)((int)dstbuf - 4) = v4;
            }
            while(__src != ptr0);
        }
        int v5 = 0;
        short v6 = 0;
        *(int*)&v3 = 0;
        short __addr = 2;
        in_addr_t sockaddr = inet_addr("127.0.0.1");
        *(in_addr_t*)&v1 = sockaddr;
        int __optval = SOCK_STREAM;
        int __fd = socket(AF_INET, SOCK_STREAM, 0);
        if(__fd >= 0) {
            int v7 = 4;
            int v8 = setsockopt(__fd, SOCK_STREAM, SO_REUSEADDR, &__optval, 4);
            if(v8 >= 0) {
                int v9 = 22026;
                while(SOCK_STREAM) {
                    v3 = (uint16_t)(uint8_t)(v9 >>> 8) | ((uint16_t)(uint8_t)v9 << 8);
                    ++v9;
                    v0 = bind(__fd, &__addr, 16);
                    if(v0 >= 0) {
                        break;
                    }
                    perror("bind error");
                }
                int v10 = listen(__fd, 5);
                if(v10 >= 0) {
                    int __addr_len = 16;
                    int __fd1 = accept(__fd, &__addr1, &__addr_len);
                    if(__fd1 >= 0) {
                        int __buf = 0;
                        memset(&__s, 0, 124);
                        sprintf(&__buf, "Hello!0x%x\n", 63);
                        size_t v11 = strlen(&__buf);
                        send(__fd1, &__buf, v11 + SOCK_STREAM, 0);
                        gvar_5859E8 = 1;
                        int __buf1 = 0;
                        gvar_585A04 = (uint32_t)__fd1;
                        memset(&__s1, 0, 508);
                        ssize_t len = recv(__fd1, &__buf1, 0x400, 0);
                        v0 = len;
                        if(len > 0) {
                            len += (int)&v2;
                        }
                        if(v0 > 0) {
                            *(char*)(len - 0x200) = 0;
                        }
                        __builtin_strcpy((char*)&__buf2, "123 456 789 abc");
                        memset(&__s2, 0, 240);
                        send(__fd1, &__buf2, 16, 0);
                        *(int*)&__buf3 = 0;
                        memset(&__s3, 0, 124);
                        ssize_t len1 = recv(__fd1, &__buf3, 128, 0);
                        if(len1 > 0) {
                            *(char*)(len1 + (int)&__buf3) = 0;
                        }
                        void* __arg = malloc(12);
                        *(int*)((int)__arg + 8) = __fd1;
                        *(int*)((int)__arg + 4) = __fd;
                        pthread_create(&__newthread, &__attr, &sub_522DC, __arg);
                        return 0;
                    }
                    perror("accept error");
                    return &gFFFFFFFC;
                }
                perror("listen error");
                return &gFFFFFFFC;
            }
            perror("set sockopt err");
            return &gFFFFFFFC;
        }
        perror("socket error");
        return &gFFFFFFFC;
    }
    return &gFFFFFFFF;
}
