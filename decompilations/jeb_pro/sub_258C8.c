int sub_258C8(char* __dest) {
    int result;
    char v0;
    int __fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(__fd >= 0) {
        int v1 = 0x200;
        int v2 = ioctl(__fd, 35090, &v1);
        result = -1;
        if(v2 == 0) {
            int v3 = v1 >>> 5;
            int* ptr0 = (int*)((v3 - SOCK_STREAM) * 32 + (int)&v0);
            while(SOCK_STREAM) {
                int v4 = v3;
                --v3;
                if(v4 == 0) {
                    break;
                }
                int v5 = ioctl(__fd, 35093, ptr0);
                if(v5 == 0) {
                    char* __src = inet_ntoa(*(in_addr*)(ptr0 + 5));
                    if(__src != 0) {
                        strcpy(__dest, __src);
                        result = strcmp("127.0.0.1", __dest);
                        if(result != 0) {
                            result = 0;
                            break;
                        }
                    }
                }
                ptr0 -= 8;
            }
        }
        close(__fd);
        return result;
    }
    return -1;
}
