int* sub_30168(char* __s, char* __s1) {
    int v0;
    char v1;
    char __haystack;
    char v2;
    char __needle;
    if((__s1 != 0 ? __s == 0: SOCK_STREAM) == 0) {
        size_t v3 = strlen(__s);
        size_t v4 = strlen(__s1);
        if(v3 == 0) {
            v0 = SOCK_STREAM;
        }
        if(v3 != 0) {
            v0 = v4 < 0x80000000 ? ((v4 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v4 >>> 29) & SOCK_STREAM ? 2: (v4 >>> 28) & SOCK_STREAM ? 3: (v4 >>> 27) & SOCK_STREAM ? 4: (v4 >>> 26) & SOCK_STREAM ? 5: (v4 >>> 25) & SOCK_STREAM ? 6: (v4 >>> 24) & SOCK_STREAM ? 7: (v4 >>> 23) & SOCK_STREAM ? 8: (v4 >>> 22) & SOCK_STREAM ? 9: (v4 >>> 21) & SOCK_STREAM ? 10: (v4 >>> 20) & SOCK_STREAM ? 11: (v4 >>> 19) & SOCK_STREAM ? 12: (v4 >>> 18) & SOCK_STREAM ? 13: (v4 >>> 17) & SOCK_STREAM ? 14: (v4 >>> 16) & SOCK_STREAM ? 15: (v4 >>> 15) & SOCK_STREAM ? 16: (v4 >>> 14) & SOCK_STREAM ? 17: (v4 >>> 13) & SOCK_STREAM ? 18: (v4 >>> 12) & SOCK_STREAM ? 19: (v4 >>> 11) & SOCK_STREAM ? 20: (v4 >>> 10) & SOCK_STREAM ? 21: (v4 >>> 9) & SOCK_STREAM ? 22: (v4 >>> 8) & SOCK_STREAM ? 23: (v4 >>> 7) & SOCK_STREAM ? 24: (v4 >>> 6) & SOCK_STREAM ? 25: (v4 >>> 5) & SOCK_STREAM ? 26: (v4 >>> 4) & SOCK_STREAM ? 27: (v4 >>> 3) & SOCK_STREAM ? 28: (v4 >>> 2) & SOCK_STREAM ? 29: (v4 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v4 & SOCK_STREAM ? 31: 32) >>> 5: 0;
        }
        if(v0 == 0) {
            __int32_t** ptr0 = __ctype_tolower_loc();
            int v5 = 0;
            __int32_t* ptr1 = ptr0[0];
            char* ptr2 = &v1;
            char* ptr3 = __s - SOCK_STREAM;
            do {
                int v6 = (uint32_t)*(ptr3 + SOCK_STREAM);
                ++ptr3;
                ++v5;
                *(ptr2 + SOCK_STREAM) = (uint8_t)ptr1[v6];
                ++ptr2;
            }
            while(v5 < (int)v3);
            char* ptr4 = __s1 - SOCK_STREAM;
            char* ptr5 = &v2;
            int v7 = 0;
            do {
                int v8 = (uint32_t)*(ptr4 + SOCK_STREAM);
                ++ptr4;
                ++v7;
                *(ptr5 + SOCK_STREAM) = (uint8_t)ptr1[v8];
                ++ptr5;
            }
            while((int)v4 > v7);
            char* ptr6 = strstr(&__haystack, &__needle);
            if(ptr6 != 0) {
                return (int*)((int)(int*)(ptr6 - &__haystack) + (int)__s);
            }
        }
    }
    return NULL;
}
