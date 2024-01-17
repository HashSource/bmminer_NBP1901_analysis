int sub_36E7C(int param0) {
    char __ptr1;
    int v0 = *(int*)(gvar_4FCB34 + 4);
    if(gvar_7EB9C > 4) {
        int v1 = SOCK_STREAM;
        snprintf(&__ptr1, 0x800, "[DEBUG] Check if read reg done, chain = %d, done_threshold = %d.\n", param0, SOCK_STREAM);
        sub_2E584(4, &__ptr1, 0);
    }
    uint32_t v2 = sub_1E0F0();
    if(v2 != 0) {
        char* ptr0 = (char*)(param0 * 0x100 + v0);
        int* ptr1 = (int*)(ptr0 + v2);
        v2 = 0;
        do {
            int v3 = (uint32_t)*ptr0;
            ++ptr0;
            if(v3 != 0) {
                ++v2;
            }
        }
        while(ptr0 != ptr1);
    }
    uint32_t v4 = sub_1E0F0();
    uint32_t v5 = v4 - v2;
    return v5 < 0x80000000 ? ((v5 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v5 >>> 29) & SOCK_STREAM ? 2: (v5 >>> 28) & SOCK_STREAM ? 3: (v5 >>> 27) & SOCK_STREAM ? 4: (v5 >>> 26) & SOCK_STREAM ? 5: (v5 >>> 25) & SOCK_STREAM ? 6: (v5 >>> 24) & SOCK_STREAM ? 7: (v5 >>> 23) & SOCK_STREAM ? 8: (v5 >>> 22) & SOCK_STREAM ? 9: (v5 >>> 21) & SOCK_STREAM ? 10: (v5 >>> 20) & SOCK_STREAM ? 11: (v5 >>> 19) & SOCK_STREAM ? 12: (v5 >>> 18) & SOCK_STREAM ? 13: (v5 >>> 17) & SOCK_STREAM ? 14: (v5 >>> 16) & SOCK_STREAM ? 15: (v5 >>> 15) & SOCK_STREAM ? 16: (v5 >>> 14) & SOCK_STREAM ? 17: (v5 >>> 13) & SOCK_STREAM ? 18: (v5 >>> 12) & SOCK_STREAM ? 19: (v5 >>> 11) & SOCK_STREAM ? 20: (v5 >>> 10) & SOCK_STREAM ? 21: (v5 >>> 9) & SOCK_STREAM ? 22: (v5 >>> 8) & SOCK_STREAM ? 23: (v5 >>> 7) & SOCK_STREAM ? 24: (v5 >>> 6) & SOCK_STREAM ? 25: (v5 >>> 5) & SOCK_STREAM ? 26: (v5 >>> 4) & SOCK_STREAM ? 27: (v5 >>> 3) & SOCK_STREAM ? 28: (v5 >>> 2) & SOCK_STREAM ? 29: (v5 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v5 & SOCK_STREAM ? 31: 32) >>> 5: 0;
}
