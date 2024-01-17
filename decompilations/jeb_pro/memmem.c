void* memmem(void* __haystack, size_t __haystacklen, void* __needle, size_t __needlelen) {
    int v0;
    int v1;
    size_t v2;
    size_t v3;
    int v4;
    size_t v5;
    size_t v6;
    size_t __n;
    void* result;
    int v7 = (int)__needlelen;
    void* ptr0 = __haystack;
    if(__needlelen == 0) {
        return __haystack;
    }
    size_t v8 = __haystacklen;
    if(__haystacklen >= (uint32_t)v7) {
        if((uint32_t)v7 > 31) {
            return (void*)sub_3E9D8((int)__haystack, (int)__haystacklen, __needle, (int)__needlelen);
        }
        void* __s1 = __needle;
        void* ptr1 = memchr(__haystack, (int)*(char*)__s1, __haystacklen);
        int v9 = v7 - SOCK_STREAM;
        result = ptr1;
        __needlelen = v9 >= 0 ? (size_t)(((v9 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v9 >>> 29) & SOCK_STREAM ? 2: (v9 >>> 28) & SOCK_STREAM ? 3: (v9 >>> 27) & SOCK_STREAM ? 4: (v9 >>> 26) & SOCK_STREAM ? 5: (v9 >>> 25) & SOCK_STREAM ? 6: (v9 >>> 24) & SOCK_STREAM ? 7: (v9 >>> 23) & SOCK_STREAM ? 8: (v9 >>> 22) & SOCK_STREAM ? 9: (v9 >>> 21) & SOCK_STREAM ? 10: (v9 >>> 20) & SOCK_STREAM ? 11: (v9 >>> 19) & SOCK_STREAM ? 12: (v9 >>> 18) & SOCK_STREAM ? 13: (v9 >>> 17) & SOCK_STREAM ? 14: (v9 >>> 16) & SOCK_STREAM ? 15: (v9 >>> 15) & SOCK_STREAM ? 16: (v9 >>> 14) & SOCK_STREAM ? 17: (v9 >>> 13) & SOCK_STREAM ? 18: (v9 >>> 12) & SOCK_STREAM ? 19: (v9 >>> 11) & SOCK_STREAM ? 20: (v9 >>> 10) & SOCK_STREAM ? 21: (v9 >>> 9) & SOCK_STREAM ? 22: (v9 >>> 8) & SOCK_STREAM ? 23: (v9 >>> 7) & SOCK_STREAM ? 24: (v9 >>> 6) & SOCK_STREAM ? 25: (v9 >>> 5) & SOCK_STREAM ? 26: (v9 >>> 4) & SOCK_STREAM ? 27: (v9 >>> 3) & SOCK_STREAM ? 28: (v9 >>> 2) & SOCK_STREAM ? 29: (v9 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v9 & SOCK_STREAM ? 31: 32) >>> 5): 0;
        if(ptr1 == 0) {
            return result;
        }
        if(__needlelen != 0) {
            return result;
        }
        int* ptr2 = (int*)(v8 - (int)(int*)((int)ptr1 - (int)ptr0));
        if((uint32_t)v7 <= (uint32_t)ptr2) {
            if((uint32_t)v7 <= 2) {
                __n = v7 - SOCK_STREAM;
                v6 = 1;
                v5 = 1;
            }
            else {
                __n = sub_3E8C8((int)__s1, v7, &v5);
                v6 = v5;
            }
            size_t v10 = v6;
            int v11 = memcmp(__s1, (void*)(v10 + (int)__s1), __n);
            if(v11 == 0) {
                size_t v12 = __n - SOCK_STREAM;
                __needle = (int)ptr2 - v7;
                size_t v13 = v12;
                char* ptr3 = (char*)(v12 + (int)__s1);
                v4 = 0;
                int v14 = v7 - v10;
                v3 = SOCK_STREAM - __n;
                while(SOCK_STREAM) {
                    __needlelen = __n >= (uint32_t)v4 ? __n: v4;
                    if(__needlelen < (uint32_t)v7) {
                        int v15 = v11 + __needlelen;
                        v2 = __needlelen + (int)__s1;
                        __haystacklen = v15 + (int)result;
                        if((uint32_t)*(char*)(v15 + (int)result) == (uint32_t)*(char*)(__needlelen + (int)__s1)) {
                            do {
                                ++__needlelen;
                                if(__needlelen == v7) {
                                    goto loc_3EE1C;
                                }
                                else {
                                    v1 = (uint32_t)*(char*)(v2 + SOCK_STREAM);
                                    ++v2;
                                    v0 = (uint32_t)*(char*)(__haystacklen + SOCK_STREAM);
                                    ++__haystacklen;
                                }
                            }
                            while(v0 == v1);
                        }
                        v4 = 0;
                        v11 = v11 + __needlelen + v3;
                    }
                    else {
                    loc_3EE1C:
                        __needlelen = v13;
                        v2 = v13;
                        if(__n > (uint32_t)v4) {
                            char* ptr4 = ptr3;
                            int v16 = v11 + __needlelen;
                            __needlelen = v16 + (int)result;
                            if((uint32_t)*(char*)(v16 + (int)result) == (uint32_t)*ptr4) {
                                char* ptr5 = ptr4;
                                int v17 = v4 - SOCK_STREAM;
                                for(__haystacklen = v2 - SOCK_STREAM; __haystacklen != v17; __haystacklen = v2 - SOCK_STREAM) {
                                    int v18 = (uint32_t)*(ptr5 - SOCK_STREAM);
                                    --ptr5;
                                    int v19 = (uint32_t)*(char*)(__needlelen - SOCK_STREAM);
                                    --__needlelen;
                                    if(v19 != v18) {
                                        break;
                                    }
                                    v2 = __haystacklen;
                                }
                            }
                            else {
                                goto loc_3EFDC;
                            }
                        }
                        else {
                        loc_3EFDC:
                            v2 = __n;
                        }
                        if((uint32_t)(v4 + SOCK_STREAM) > v2) {
                            return (void*)(v11 + (int)result);
                        }
                        v4 = v14;
                        v11 += v6;
                    }
                    if((uint32_t)v11 <= (uint32_t)__needle) {
                        continue;
                    }
                    break;
                }
            }
            else {
                size_t v20 = (size_t)(v7 - __n);
                int v21 = __n - SOCK_STREAM;
                int* ptr6 = (int*)((int)ptr2 - v7);
                if(v20 < __n) {
                    v20 = __n;
                }
                uint32_t v22 = 0;
                size_t v23 = (size_t)(__n + (int)__s1);
                int v24 = SOCK_STREAM - __n;
                v6 = v21 + (int)__s1;
                v3 = v20 + SOCK_STREAM;
                do {
                    if((uint32_t)v7 > __n) {
                        uint32_t v25 = __n + v22;
                        __needle = v25 + (int)result;
                        if((uint32_t)*(char*)(v25 + (int)result) == (uint32_t)*(char*)v23) {
                            __haystacklen = v23;
                            __needlelen = __n;
                            do {
                                ++__needlelen;
                                if(__needlelen == v7) {
                                    goto loc_3EF4C;
                                }
                                else {
                                    v2 = *(char*)(__haystacklen + SOCK_STREAM);
                                    ++__haystacklen;
                                    v4 = *(char*)((int)__needle + SOCK_STREAM);
                                    __needle = (int)__needle + SOCK_STREAM;
                                }
                            }
                            while(v4 == v2);
                        }
                        else {
                            __needlelen = __n;
                        }
                        v22 = __needlelen + v22 + v24;
                    }
                    else {
                    loc_3EF4C:
                        if(v21 == -1) {
                            return (void*)((int)result + v22);
                        }
                        v4 = v6;
                        uint32_t v26 = v22 + v21;
                        __needlelen = v26 + (int)result;
                        if((uint32_t)*(char*)(v26 + (int)result) == (uint32_t)*(char*)v4) {
                            __needle = v4;
                        }
                        else {
                            goto loc_3EFB4;
                        }
                        while(SOCK_STREAM) {
                            if(__needle == __s1) {
                                return (void*)((int)result + v22);
                            }
                            v4 = *(char*)((int)__needle - SOCK_STREAM);
                            __needle = (int)__needle - SOCK_STREAM;
                            __haystacklen = *(char*)(__needlelen - SOCK_STREAM);
                            --__needlelen;
                            if(__haystacklen == v4) {
                                continue;
                            }
                        loc_3EFB4:
                            v22 += v3;
                            break;
                        }
                    }
                }
                while((uint32_t)ptr6 >= v22);
            }
        }
    }
    return NULL;
}
