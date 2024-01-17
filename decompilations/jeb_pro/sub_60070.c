int sub_60070(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    char v2 = param0 * 2 == 0;
    int v3 = param0 * 2;
    int v4 = (uint32_t)(((v3 >> 3) >>> SOCK_STREAM) & 0x7fffffff) | ((uint32_t)(param0 < 0) << 31);
    int result = v3 * 0x10000000;
    if(v2 == 0) {
        param3 = v3 & 0xff000000;
        v2 = (v3 & 0xff000000) == 0;
    }
    if(v2 == 0) {
        v2 = param3 == 0xff000000;
    }
    if(v2 == 0) {
        return result;
    }
    if((uint32_t)(v3 & 0xffffff) == 0) {
        return result;
    }
    if(param3 == 0xff000000) {
        return result;
    }
    int v5 = v4 & 0x7fffffff;
    char v6 = v5 == 0;
    if(v6 != 0) {
        v5 = result;
        result = 0;
    }
    int v7 = v5 >= 0 ? (v5 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v5 >>> 29) & SOCK_STREAM ? 2: (v5 >>> 28) & SOCK_STREAM ? 3: (v5 >>> 27) & SOCK_STREAM ? 4: (v5 >>> 26) & SOCK_STREAM ? 5: (v5 >>> 25) & SOCK_STREAM ? 6: (v5 >>> 24) & SOCK_STREAM ? 7: (v5 >>> 23) & SOCK_STREAM ? 8: (v5 >>> 22) & SOCK_STREAM ? 9: (v5 >>> 21) & SOCK_STREAM ? 10: (v5 >>> 20) & SOCK_STREAM ? 11: (v5 >>> 19) & SOCK_STREAM ? 12: (v5 >>> 18) & SOCK_STREAM ? 13: (v5 >>> 17) & SOCK_STREAM ? 14: (v5 >>> 16) & SOCK_STREAM ? 15: (v5 >>> 15) & SOCK_STREAM ? 16: (v5 >>> 14) & SOCK_STREAM ? 17: (v5 >>> 13) & SOCK_STREAM ? 18: (v5 >>> 12) & SOCK_STREAM ? 19: (v5 >>> 11) & SOCK_STREAM ? 20: (v5 >>> 10) & SOCK_STREAM ? 21: (v5 >>> 9) & SOCK_STREAM ? 22: (v5 >>> 8) & SOCK_STREAM ? 23: (v5 >>> 7) & SOCK_STREAM ? 24: (v5 >>> 6) & SOCK_STREAM ? 25: (v5 >>> 5) & SOCK_STREAM ? 26: (v5 >>> 4) & SOCK_STREAM ? 27: (v5 >>> 3) & SOCK_STREAM ? 28: (v5 >>> 2) & SOCK_STREAM ? 29: (v5 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v5 & SOCK_STREAM ? 31: 32: 0;
    if(v6 != 0) {
        v7 += 32;
    }
    param3 = v7 - 11;
    v3 = param3 - 32;
    char v8 = param3 < 32;
    v2 = param3 == 32;
    char v9 = (((param3 - 32) ^ param3) & (param3 ^ 0x20)) < 0;
    if(v3 < 0) {
        int v10 = v3 + 12;
        v8 = v3 < -12;
        v2 = v3 == -12;
        v9 = (((v3 + 12) ^ v3) & ~(v3 ^ 0xc)) < 0;
        if((v2 == 0 && v9 == v8)) {
            result = v5 << (v10 + 20);
            v1 = v5 >>> (12 - v10);
        }
        else {
            v3 = v10 + 20;
            goto loc_5FF22;
        }
    }
    else {
    loc_5FF22:
        if(v2 != 0 || v9 != v8) {
            v0 = 32 - v3;
        }
        v1 = v5 << v3;
        v0 = result >>> v0;
        if(v2 != 0 || v9 != v8) {
            v1 |= v0;
            result <<= v3;
        }
    }
    int v11 = 896 - param3;
    if(param3 <= 896) {
        return result;
    }
    int v12 = ~v11 - 31;
    if(v12 < 0) {
        int v13 = v12 + 12;
        if(v13 <= 0) {
            int v14 = v13 + 20;
            return (v1 << (32 - v14)) | (result >>> v14);
        }
        int v15 = 12 - v13;
        return (v1 << v15) | (result >>> (32 - v15));
    }
    return v1 >>> v12;
}
