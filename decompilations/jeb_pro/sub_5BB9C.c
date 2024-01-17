int sub_5BB9C(char* param0) {
    if(param0 != 0) {
        if(*param0 == 33) {
            int v0 = (uint32_t)*(param0 + SOCK_STREAM);
            return v0 >= 0 ? ((v0 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v0 >>> 29) & SOCK_STREAM ? 2: (v0 >>> 28) & SOCK_STREAM ? 3: (v0 >>> 27) & SOCK_STREAM ? 4: (v0 >>> 26) & SOCK_STREAM ? 5: (v0 >>> 25) & SOCK_STREAM ? 6: (v0 >>> 24) & SOCK_STREAM ? 7: (v0 >>> 23) & SOCK_STREAM ? 8: (v0 >>> 22) & SOCK_STREAM ? 9: (v0 >>> 21) & SOCK_STREAM ? 10: (v0 >>> 20) & SOCK_STREAM ? 11: (v0 >>> 19) & SOCK_STREAM ? 12: (v0 >>> 18) & SOCK_STREAM ? 13: (v0 >>> 17) & SOCK_STREAM ? 14: (v0 >>> 16) & SOCK_STREAM ? 15: (v0 >>> 15) & SOCK_STREAM ? 16: (v0 >>> 14) & SOCK_STREAM ? 17: (v0 >>> 13) & SOCK_STREAM ? 18: (v0 >>> 12) & SOCK_STREAM ? 19: (v0 >>> 11) & SOCK_STREAM ? 20: (v0 >>> 10) & SOCK_STREAM ? 21: (v0 >>> 9) & SOCK_STREAM ? 22: (v0 >>> 8) & SOCK_STREAM ? 23: (v0 >>> 7) & SOCK_STREAM ? 24: (v0 >>> 6) & SOCK_STREAM ? 25: (v0 >>> 5) & SOCK_STREAM ? 26: (v0 >>> 4) & SOCK_STREAM ? 27: (v0 >>> 3) & SOCK_STREAM ? 28: (v0 >>> 2) & SOCK_STREAM ? 29: (v0 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v0 & SOCK_STREAM ? 31: 32) >>> 5: 0;
        }
        return 0;
    }
    sub_5DF98(&g2, "src/rule.c", 1002, "a_rule is null or 0");
    return -1;
}
