int sub_4E7A0(int* param0, void* __src, size_t __n) {
    if(param0 != 0) {
        int v0 = (int)__src >= 0 ? ((int*)((int)(int*)((int)__src >>> 30) & SOCK_STREAM) ? SOCK_STREAM: (int*)((int)(int*)((int)__src >>> 29) & SOCK_STREAM) ? 2: (int*)((int)(int*)((int)__src >>> 28) & SOCK_STREAM) ? 3: (int*)((int)(int*)((int)__src >>> 27) & SOCK_STREAM) ? 4: (int*)((int)(int*)((int)__src >>> 26) & SOCK_STREAM) ? 5: (int*)((int)(int*)((int)__src >>> 25) & SOCK_STREAM) ? 6: (int*)((int)(int*)((int)__src >>> 24) & SOCK_STREAM) ? 7: (int*)((int)(int*)((int)__src >>> 23) & SOCK_STREAM) ? 8: (int*)((int)(int*)((int)__src >>> 22) & SOCK_STREAM) ? 9: (int*)((int)(int*)((int)__src >>> 21) & SOCK_STREAM) ? 10: (int*)((int)(int*)((int)__src >>> 20) & SOCK_STREAM) ? 11: (int*)((int)(int*)((int)__src >>> 19) & SOCK_STREAM) ? 12: (int*)((int)(int*)((int)__src >>> 18) & SOCK_STREAM) ? 13: (int*)((int)(int*)((int)__src >>> 17) & SOCK_STREAM) ? 14: (int*)((int)(int*)((int)__src >>> 16) & SOCK_STREAM) ? 15: (int*)((int)(int*)((int)__src >>> 15) & SOCK_STREAM) ? 16: (int*)((int)(int*)((int)__src >>> 14) & SOCK_STREAM) ? 17: (int*)((int)(int*)((int)__src >>> 13) & SOCK_STREAM) ? 18: (int*)((int)(int*)((int)__src >>> 12) & SOCK_STREAM) ? 19: (int*)((int)(int*)((int)__src >>> 11) & SOCK_STREAM) ? 20: (int*)((int)(int*)((int)__src >>> 10) & SOCK_STREAM) ? 21: (int*)((int)(int*)((int)__src >>> 9) & SOCK_STREAM) ? 22: (int*)((int)(int*)((int)__src >>> 8) & SOCK_STREAM) ? 23: (int*)((int)(int*)((int)__src >>> 7) & SOCK_STREAM) ? 24: (int*)((int)(int*)((int)__src >>> 6) & SOCK_STREAM) ? 25: (int*)((int)(int*)((int)__src >>> 5) & SOCK_STREAM) ? 26: (int*)((int)(int*)((int)__src >>> 4) & SOCK_STREAM) ? 27: (int*)((int)(int*)((int)__src >>> 3) & SOCK_STREAM) ? 28: (int*)((int)(int*)((int)__src >>> 2) & SOCK_STREAM) ? 29: (int*)((int)(int*)((int)__src >>> SOCK_STREAM) & SOCK_STREAM) ? 30: (void*)((int)__src & SOCK_STREAM) ? 31: 32) >>> 5: 0;
        if((*param0 != 2 ? v0 | SOCK_STREAM: v0) == 0) {
            size_t v1 = sub_4D8B0(__src, __n);
            if(v1 != 0) {
                sub_4D898(*(void**)(param0 + 2));
                *(size_t*)(param0 + 2) = v1;
                *(size_t*)(param0 + 3) = __n;
                return 0;
            }
        }
    }
    return -1;
}
