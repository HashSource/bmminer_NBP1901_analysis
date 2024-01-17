int sub_1E894(int param0, char* __s) {
    if((int)gvar_58DFBC > param0) {
        uint32_t v0 = (int)__s >= 0 ? (uint32_t)(((int*)((int)(int*)((int)__s >>> 30) & SOCK_STREAM) ? SOCK_STREAM: (int*)((int)(int*)((int)__s >>> 29) & SOCK_STREAM) ? 2: (int*)((int)(int*)((int)__s >>> 28) & SOCK_STREAM) ? 3: (int*)((int)(int*)((int)__s >>> 27) & SOCK_STREAM) ? 4: (int*)((int)(int*)((int)__s >>> 26) & SOCK_STREAM) ? 5: (int*)((int)(int*)((int)__s >>> 25) & SOCK_STREAM) ? 6: (int*)((int)(int*)((int)__s >>> 24) & SOCK_STREAM) ? 7: (int*)((int)(int*)((int)__s >>> 23) & SOCK_STREAM) ? 8: (int*)((int)(int*)((int)__s >>> 22) & SOCK_STREAM) ? 9: (int*)((int)(int*)((int)__s >>> 21) & SOCK_STREAM) ? 10: (int*)((int)(int*)((int)__s >>> 20) & SOCK_STREAM) ? 11: (int*)((int)(int*)((int)__s >>> 19) & SOCK_STREAM) ? 12: (int*)((int)(int*)((int)__s >>> 18) & SOCK_STREAM) ? 13: (int*)((int)(int*)((int)__s >>> 17) & SOCK_STREAM) ? 14: (int*)((int)(int*)((int)__s >>> 16) & SOCK_STREAM) ? 15: (int*)((int)(int*)((int)__s >>> 15) & SOCK_STREAM) ? 16: (int*)((int)(int*)((int)__s >>> 14) & SOCK_STREAM) ? 17: (int*)((int)(int*)((int)__s >>> 13) & SOCK_STREAM) ? 18: (int*)((int)(int*)((int)__s >>> 12) & SOCK_STREAM) ? 19: (int*)((int)(int*)((int)__s >>> 11) & SOCK_STREAM) ? 20: (int*)((int)(int*)((int)__s >>> 10) & SOCK_STREAM) ? 21: (int*)((int)(int*)((int)__s >>> 9) & SOCK_STREAM) ? 22: (int*)((int)(int*)((int)__s >>> 8) & SOCK_STREAM) ? 23: (int*)((int)(int*)((int)__s >>> 7) & SOCK_STREAM) ? 24: (int*)((int)(int*)((int)__s >>> 6) & SOCK_STREAM) ? 25: (int*)((int)(int*)((int)__s >>> 5) & SOCK_STREAM) ? 26: (int*)((int)(int*)((int)__s >>> 4) & SOCK_STREAM) ? 27: (int*)((int)(int*)((int)__s >>> 3) & SOCK_STREAM) ? 28: (int*)((int)(int*)((int)__s >>> 2) & SOCK_STREAM) ? 29: (int*)((int)(int*)((int)__s >>> SOCK_STREAM) & SOCK_STREAM) ? 30: (char*)((int)__s & SOCK_STREAM) ? 31: 32) >>> 5): 0;
        int result = (param0 >>> 31) | v0;
        if(((param0 >>> 31) | v0) == 0) {
            if(gvar_58E010 == 0) {
                result = sub_1B398();
                if(result < 0) {
                    return result;
                }
            }
            snprintf(__s, 0x200, "\n");
            return result;
        }
    }
    return 0x80000401;
}
