int sub_4E5F0(int* param0, int* param1) {
    if(param0 != 0) {
        int v0 = (int)param1 >= 0 ? ((int*)((int)(int*)((int)param1 >>> 30) & SOCK_STREAM) ? SOCK_STREAM: (int*)((int)(int*)((int)param1 >>> 29) & SOCK_STREAM) ? 2: (int*)((int)(int*)((int)param1 >>> 28) & SOCK_STREAM) ? 3: (int*)((int)(int*)((int)param1 >>> 27) & SOCK_STREAM) ? 4: (int*)((int)(int*)((int)param1 >>> 26) & SOCK_STREAM) ? 5: (int*)((int)(int*)((int)param1 >>> 25) & SOCK_STREAM) ? 6: (int*)((int)(int*)((int)param1 >>> 24) & SOCK_STREAM) ? 7: (int*)((int)(int*)((int)param1 >>> 23) & SOCK_STREAM) ? 8: (int*)((int)(int*)((int)param1 >>> 22) & SOCK_STREAM) ? 9: (int*)((int)(int*)((int)param1 >>> 21) & SOCK_STREAM) ? 10: (int*)((int)(int*)((int)param1 >>> 20) & SOCK_STREAM) ? 11: (int*)((int)(int*)((int)param1 >>> 19) & SOCK_STREAM) ? 12: (int*)((int)(int*)((int)param1 >>> 18) & SOCK_STREAM) ? 13: (int*)((int)(int*)((int)param1 >>> 17) & SOCK_STREAM) ? 14: (int*)((int)(int*)((int)param1 >>> 16) & SOCK_STREAM) ? 15: (int*)((int)(int*)((int)param1 >>> 15) & SOCK_STREAM) ? 16: (int*)((int)(int*)((int)param1 >>> 14) & SOCK_STREAM) ? 17: (int*)((int)(int*)((int)param1 >>> 13) & SOCK_STREAM) ? 18: (int*)((int)(int*)((int)param1 >>> 12) & SOCK_STREAM) ? 19: (int*)((int)(int*)((int)param1 >>> 11) & SOCK_STREAM) ? 20: (int*)((int)(int*)((int)param1 >>> 10) & SOCK_STREAM) ? 21: (int*)((int)(int*)((int)param1 >>> 9) & SOCK_STREAM) ? 22: (int*)((int)(int*)((int)param1 >>> 8) & SOCK_STREAM) ? 23: (int*)((int)(int*)((int)param1 >>> 7) & SOCK_STREAM) ? 24: (int*)((int)(int*)((int)param1 >>> 6) & SOCK_STREAM) ? 25: (int*)((int)(int*)((int)param1 >>> 5) & SOCK_STREAM) ? 26: (int*)((int)(int*)((int)param1 >>> 4) & SOCK_STREAM) ? 27: (int*)((int)(int*)((int)param1 >>> 3) & SOCK_STREAM) ? 28: (int*)((int)(int*)((int)param1 >>> 2) & SOCK_STREAM) ? 29: (int*)((int)(int*)((int)param1 >>> SOCK_STREAM) & SOCK_STREAM) ? 30: (int*)((int)param1 & SOCK_STREAM) ? 31: 32) >>> 5: 0;
        if((param0[0] != SOCK_STREAM ? v0 | SOCK_STREAM: v0) == 0 && *param1 == SOCK_STREAM) {
            void* ptr0 = sub_4E0B8(param0, *(param1 + 3), SOCK_STREAM);
            if(ptr0 != 0) {
                size_t v1 = *(size_t*)(param1 + 3);
                void* __src = *(void**)(param1 + 4);
                size_t __n = v1;
                if(v1 != 0) {
                    int v2 = 0;
                    do {
                        int* ptr1 = *(uint32_t*)(v2 * 4 + (int)__src);
                        if(ptr1 != 0 && *(ptr1 + SOCK_STREAM) != -1) {
                            ++*(ptr1 + SOCK_STREAM);
                            DMB();
                            v1 = *(size_t*)(param1 + 3);
                            __src = *(void**)(param1 + 4);
                        }
                        ++v2;
                    }
                    while(v1 > (uint32_t)v2);
                    __n = v1 * 4;
                }
                memcpy((void*)(param0[3] * 4 + param0[4]), __src, __n);
                param0[3] += *(param1 + 3);
                return 0;
            }
        }
    }
    return -1;
}
