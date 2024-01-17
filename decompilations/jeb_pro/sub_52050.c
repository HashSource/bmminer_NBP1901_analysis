int sub_52050(int* param0) {
    int v0;
    char __addr1;
    char __s1;
    char __s2;
    pthread_t __th = pthread_self();
    pthread_detach(__th);
    int v1 = *param0;
    int __s = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    sprintf(&__s, "ct_b/fcb/%d", v1);
    prctl(PR_SET_NAME, &__s);
    short __addr = 2;
    in_addr_t sockaddr = inet_addr("127.0.0.1");
    int __fd = socket(AF_INET, SOCK_STREAM, 0);
    if(__fd >= 0) {
        int __optval = SOCK_STREAM;
        int* ptr0 = (int*)&g4;
        int v5 = setsockopt(__fd, SOCK_STREAM, SO_REUSEADDR, &__optval, 4);
        if(v5 >= 0) {
            int v6 = *param0;
            while(SOCK_STREAM) {
                short v7 = (uint16_t)(uint8_t)(v6 >>> 8) | ((uint16_t)(uint8_t)v6 << 8);
                int v8 = bind(__fd, &__addr, 16);
                if(v8 >= 0) {
                    break;
                }
                perror("bind error");
                v6 = *param0 + SOCK_STREAM;
                ++*param0;
            }
            int v9 = listen(__fd, 5);
            if(v9 < 0) {
                perror("listen error");
                return 0;
            }
            int __addr_len = 16;
            *(param0 + 36) = SOCK_STREAM;
            int __fd1 = accept(__fd, &__addr1, &__addr_len);
            if(__fd1 < 0) {
                perror("accept error");
                return 0;
            }
            int __buf = 0;
            memset(&__s1, 0, 252);
            sprintf(&__buf, "%x %s\n", 63, param0 + 4);
            size_t v10 = strlen(&__buf);
            send(__fd1, &__buf, v10 + SOCK_STREAM, 0);
            size_t __size = *(size_t*)(param0 + 37);
            void* __buf1 = malloc(__size);
            ssize_t len = recv(__fd1, __buf1, __size, 0);
            if(len > 0) {
                *(char*)((int)__buf1 + len) = 0;
            }
            while(SOCK_STREAM) {
                ssize_t len1 = recv(__fd1, __buf1, *(size_t*)(param0 + 37), 0);
                if(len1 <= 0) {
                    v0 = 0;
                }
                else {
                    v0 = *(param0 + 3);
                    if(v0 != 0) {
                        v0 = v0((int)__buf1, len1);
                    }
                }
                int __buf2 = 0;
                memset(&__s2, 0, 252);
                char* ptr1 = "OK";
                ptr0 = param0 + 4;
                sprintf(&__buf2, "%x %d %s %s", 63, v0, param0 + 4, "OK");
                size_t v11 = strlen(&__buf2);
                send(__fd1, &__buf2, v11 + SOCK_STREAM, 0);
            }
        }
        perror("set sockopt err");
        return 0;
    }
    perror("socket error");
    return 0;
}
