int sub_4F238(int* param0, int param1, int param2) {
    void* ptr0 = (void*)param2;
    if(ptr0 != 0) {
        if(param0 == 0) {
        loc_4F27C:
            if(*(int*)((int)ptr0 + 4) != -1) {
                DMB();
                param2 = *(int*)((int)ptr0 + 4) - SOCK_STREAM;
                --*(int*)((int)ptr0 + 4);
            loc_4F2A8:
                if(param2 == 0) {
                    sub_4EB6C(ptr0);
                    return -1;
                }
            }
        }
        else {
            int* ptr1 = (int*)((int)ptr0 - (int)param0);
            param2 = (int)ptr1 >= 0 ? ((int*)((int)(int*)((int)ptr1 >>> 30) & SOCK_STREAM) ? SOCK_STREAM: (int*)((int)(int*)((int)ptr1 >>> 29) & SOCK_STREAM) ? 2: (int*)((int)(int*)((int)ptr1 >>> 28) & SOCK_STREAM) ? 3: (int*)((int)(int*)((int)ptr1 >>> 27) & SOCK_STREAM) ? 4: (int*)((int)(int*)((int)ptr1 >>> 26) & SOCK_STREAM) ? 5: (int*)((int)(int*)((int)ptr1 >>> 25) & SOCK_STREAM) ? 6: (int*)((int)(int*)((int)ptr1 >>> 24) & SOCK_STREAM) ? 7: (int*)((int)(int*)((int)ptr1 >>> 23) & SOCK_STREAM) ? 8: (int*)((int)(int*)((int)ptr1 >>> 22) & SOCK_STREAM) ? 9: (int*)((int)(int*)((int)ptr1 >>> 21) & SOCK_STREAM) ? 10: (int*)((int)(int*)((int)ptr1 >>> 20) & SOCK_STREAM) ? 11: (int*)((int)(int*)((int)ptr1 >>> 19) & SOCK_STREAM) ? 12: (int*)((int)(int*)((int)ptr1 >>> 18) & SOCK_STREAM) ? 13: (int*)((int)(int*)((int)ptr1 >>> 17) & SOCK_STREAM) ? 14: (int*)((int)(int*)((int)ptr1 >>> 16) & SOCK_STREAM) ? 15: (int*)((int)(int*)((int)ptr1 >>> 15) & SOCK_STREAM) ? 16: (int*)((int)(int*)((int)ptr1 >>> 14) & SOCK_STREAM) ? 17: (int*)((int)(int*)((int)ptr1 >>> 13) & SOCK_STREAM) ? 18: (int*)((int)(int*)((int)ptr1 >>> 12) & SOCK_STREAM) ? 19: (int*)((int)(int*)((int)ptr1 >>> 11) & SOCK_STREAM) ? 20: (int*)((int)(int*)((int)ptr1 >>> 10) & SOCK_STREAM) ? 21: (int*)((int)(int*)((int)ptr1 >>> 9) & SOCK_STREAM) ? 22: (int*)((int)(int*)((int)ptr1 >>> 8) & SOCK_STREAM) ? 23: (int*)((int)(int*)((int)ptr1 >>> 7) & SOCK_STREAM) ? 24: (int*)((int)(int*)((int)ptr1 >>> 6) & SOCK_STREAM) ? 25: (int*)((int)(int*)((int)ptr1 >>> 5) & SOCK_STREAM) ? 26: (int*)((int)(int*)((int)ptr1 >>> 4) & SOCK_STREAM) ? 27: (int*)((int)(int*)((int)ptr1 >>> 3) & SOCK_STREAM) ? 28: (int*)((int)(int*)((int)ptr1 >>> 2) & SOCK_STREAM) ? 29: (int*)((int)(int*)((int)ptr1 >>> SOCK_STREAM) & SOCK_STREAM) ? 30: (int*)((int)ptr1 & SOCK_STREAM) ? 31: 32) >>> 5: 0;
            if(param0[0] != SOCK_STREAM) {
                param2 |= SOCK_STREAM;
            }
            if(param2 == 0) {
                if((uint32_t)param0[3] < param1) {
                    goto loc_4F27C;
                }
                void* __src1 = sub_4E0B8(param0, SOCK_STREAM, 0);
                if(__src1 != 0) {
                    void* __dest = (void*)param0[4];
                    void* __src = (void*)((size_t)((param1 + SOCK_STREAM) * 4 - 4) + (int)__src1);
                    if(__dest == __src1) {
                        memmove((void*)((param1 + SOCK_STREAM) * 4 + (int)__dest), __src, (size_t)((param0[3] - param1) * 4));
                    }
                    else {
                        memcpy(__dest, __src1, (size_t)((param1 + SOCK_STREAM) * 4 - 4));
                        memcpy((void*)((param1 + SOCK_STREAM) * 4 + param0[4]), __src, (size_t)((param0[3] - param1) * 4));
                        sub_4D898(__src1);
                    }
                    int v0 = param0[3] + SOCK_STREAM;
                    *(void**)((size_t)((param1 + SOCK_STREAM) * 4 - 4) + param0[4]) = ptr0;
                    param0[3] = v0;
                    return 0;
                }
                if(*(int*)((int)ptr0 + 4) != -1) {
                    DMB();
                    param2 = *(int*)((int)ptr0 + 4) - SOCK_STREAM;
                    --*(int*)((int)ptr0 + 4);
                    goto loc_4F2A8;
                }
            }
            else {
                goto loc_4F27C;
            }
        }
    }
    return -1;
}
