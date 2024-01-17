// Deobfuscation score: 51 [EXPERIMENTAL]
int sub_6002C(int param0) {
    if(param0 == 0) {
        return 0;
    }
    int v0 = (param0 >= 0 ? (param0 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (param0 >>> 29) & SOCK_STREAM ? 2: (param0 >>> 28) & SOCK_STREAM ? 3: (param0 >>> 27) & SOCK_STREAM ? 4: (param0 >>> 26) & SOCK_STREAM ? 5: (param0 >>> 25) & SOCK_STREAM ? 6: (param0 >>> 24) & SOCK_STREAM ? 7: (param0 >>> 23) & SOCK_STREAM ? 8: (param0 >>> 22) & SOCK_STREAM ? 9: (param0 >>> 21) & SOCK_STREAM ? 10: (param0 >>> 20) & SOCK_STREAM ? 11: (param0 >>> 19) & SOCK_STREAM ? 12: (param0 >>> 18) & SOCK_STREAM ? 13: (param0 >>> 17) & SOCK_STREAM ? 14: (param0 >>> 16) & SOCK_STREAM ? 15: (param0 >>> 15) & SOCK_STREAM ? 16: (param0 >>> 14) & SOCK_STREAM ? 17: (param0 >>> 13) & SOCK_STREAM ? 18: (param0 >>> 12) & SOCK_STREAM ? 19: (param0 >>> 11) & SOCK_STREAM ? 20: (param0 >>> 10) & SOCK_STREAM ? 21: (param0 >>> 9) & SOCK_STREAM ? 22: (param0 >>> 8) & SOCK_STREAM ? 23: (param0 >>> 7) & SOCK_STREAM ? 24: (param0 >>> 6) & SOCK_STREAM ? 25: (param0 >>> 5) & SOCK_STREAM ? 26: (param0 >>> 4) & SOCK_STREAM ? 27: (param0 >>> 3) & SOCK_STREAM ? 28: (param0 >>> 2) & SOCK_STREAM ? 29: (param0 >>> SOCK_STREAM) & SOCK_STREAM ? 30: param0 & SOCK_STREAM ? 31: 32: 0) - 11;
    if(v0 < 0) {
        return param0 << (v0 + 32);
    }
    return 0;
}
