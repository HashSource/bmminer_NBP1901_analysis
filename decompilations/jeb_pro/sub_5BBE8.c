int sub_5BBE8(char* __s1, char* __s2) {
    if(__s1 != 0) {
        if(__s2 != 0) {
            if((__s1[0] != 42 || __s1[SOCK_STREAM] != 0)) {
                int v0 = strcmp(__s1, __s2);
                if(v0 != 0) {
                    size_t v1 = strlen(__s1);
                    if(__s1[v1 - SOCK_STREAM] != 95) {
                        return 0;
                    }
                    size_t v2 = strlen(__s2);
                    int v3 = strncmp(__s1, __s2, v1 - SOCK_STREAM != v2 ? v1: v2);
                    return v3 >= 0 ? ((v3 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v3 >>> 29) & SOCK_STREAM ? 2: (v3 >>> 28) & SOCK_STREAM ? 3: (v3 >>> 27) & SOCK_STREAM ? 4: (v3 >>> 26) & SOCK_STREAM ? 5: (v3 >>> 25) & SOCK_STREAM ? 6: (v3 >>> 24) & SOCK_STREAM ? 7: (v3 >>> 23) & SOCK_STREAM ? 8: (v3 >>> 22) & SOCK_STREAM ? 9: (v3 >>> 21) & SOCK_STREAM ? 10: (v3 >>> 20) & SOCK_STREAM ? 11: (v3 >>> 19) & SOCK_STREAM ? 12: (v3 >>> 18) & SOCK_STREAM ? 13: (v3 >>> 17) & SOCK_STREAM ? 14: (v3 >>> 16) & SOCK_STREAM ? 15: (v3 >>> 15) & SOCK_STREAM ? 16: (v3 >>> 14) & SOCK_STREAM ? 17: (v3 >>> 13) & SOCK_STREAM ? 18: (v3 >>> 12) & SOCK_STREAM ? 19: (v3 >>> 11) & SOCK_STREAM ? 20: (v3 >>> 10) & SOCK_STREAM ? 21: (v3 >>> 9) & SOCK_STREAM ? 22: (v3 >>> 8) & SOCK_STREAM ? 23: (v3 >>> 7) & SOCK_STREAM ? 24: (v3 >>> 6) & SOCK_STREAM ? 25: (v3 >>> 5) & SOCK_STREAM ? 26: (v3 >>> 4) & SOCK_STREAM ? 27: (v3 >>> 3) & SOCK_STREAM ? 28: (v3 >>> 2) & SOCK_STREAM ? 29: (v3 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v3 & SOCK_STREAM ? 31: 32) >>> 5: 0;
                }
            }
            return SOCK_STREAM;
        }
        sub_5DF98(&g2, "src/rule.c", 1015, "category is null or 0");
        return -1;
    }
    sub_5DF98(&g2, "src/rule.c", 1014, "a_rule is null or 0");
    return -1;
}
