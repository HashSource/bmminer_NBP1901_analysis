int sub_600B4(uint32_t param0, uint32_t param1) {
    uint8_t v0;
    uint32_t v1;
    int v2;
    uint32_t v3;
    if((param0 | param1) == 0) {
        return (int)param0;
    }
    uint32_t v4 = 0x432;
    uint32_t v5 = param1 >>> 22;
    if(param1 >>> 22 != 0) {
        int v6 = 3;
        uint32_t v7 = v5 >>> 3;
        if(v5 >>> 3 != 0) {
            v6 = 6;
        }
        uint32_t v8 = v7 >>> 3;
        if(v7 >>> 3 != 0) {
            v6 += 3;
        }
        v3 = (v8 >>> 3) + v6;
        v2 = 32 - v3;
        v5 = param0 << v2;
        param0 = (param1 << v2) | (param0 >>> v3);
        param1 >>>= v3;
        v4 = v3 + 0x432;
    }
    if(param1 < 0x100000) {
        v0 = v5 >= 0x80000000;
        v5 *= 2;
        uint32_t v9 = param0;
        param0 = param0 * 2 + v0;
        param1 = param1 * 2 + (uint32_t)(v9 * 2L + v0 != v9 * 2 + v0);
        --v4;
        if((param1 & 0x100000) == 0) {
            char v10 = param1 == 0;
            if(v10 != 0) {
                param1 = param0;
                param0 = 0;
            }
            int v11 = param1 < 0x80000000 ? (param1 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (param1 >>> 29) & SOCK_STREAM ? 2: (param1 >>> 28) & SOCK_STREAM ? 3: (param1 >>> 27) & SOCK_STREAM ? 4: (param1 >>> 26) & SOCK_STREAM ? 5: (param1 >>> 25) & SOCK_STREAM ? 6: (param1 >>> 24) & SOCK_STREAM ? 7: (param1 >>> 23) & SOCK_STREAM ? 8: (param1 >>> 22) & SOCK_STREAM ? 9: (param1 >>> 21) & SOCK_STREAM ? 10: (param1 >>> 20) & SOCK_STREAM ? 11: (param1 >>> 19) & SOCK_STREAM ? 12: (param1 >>> 18) & SOCK_STREAM ? 13: (param1 >>> 17) & SOCK_STREAM ? 14: (param1 >>> 16) & SOCK_STREAM ? 15: (param1 >>> 15) & SOCK_STREAM ? 16: (param1 >>> 14) & SOCK_STREAM ? 17: (param1 >>> 13) & SOCK_STREAM ? 18: (param1 >>> 12) & SOCK_STREAM ? 19: (param1 >>> 11) & SOCK_STREAM ? 20: (param1 >>> 10) & SOCK_STREAM ? 21: (param1 >>> 9) & SOCK_STREAM ? 22: (param1 >>> 8) & SOCK_STREAM ? 23: (param1 >>> 7) & SOCK_STREAM ? 24: (param1 >>> 6) & SOCK_STREAM ? 25: (param1 >>> 5) & SOCK_STREAM ? 26: (param1 >>> 4) & SOCK_STREAM ? 27: (param1 >>> 3) & SOCK_STREAM ? 28: (param1 >>> 2) & SOCK_STREAM ? 29: (param1 >>> SOCK_STREAM) & SOCK_STREAM ? 30: param1 & SOCK_STREAM ? 31: 32: 0;
            if(v10 != 0) {
                v11 += 32;
            }
            v2 = v11 - 11;
            v3 = v2 - 32;
            char v12 = v2 < 32;
            char v13 = v2 == 32;
            char v14 = (((v2 - 32) ^ v2) & (v2 ^ 0x20)) < 0;
            if(v3 >= 0x80000000) {
                uint32_t v15 = v3 + 12;
                v12 = (int)v3 < -12;
                v13 = v3 == -12;
                v14 = (((v3 + 12) ^ v3) & ~(v3 ^ 0xc)) < 0;
                if((v13 == 0 && v14 == v12)) {
                    param0 = param1 << (v15 + 20);
                    v1 = param1 >>> (12 - v15);
                }
                else {
                    v3 = v15 + 20;
                    goto loc_5FF22;
                }
            }
            else {
            loc_5FF22:
                if(v13 != 0 || v14 != v12) {
                    v5 = 32 - v3;
                }
                v1 = param1 << v3;
                v5 = param0 >>> v5;
                if(v13 != 0 || v14 != v12) {
                    v1 |= v5;
                    param0 <<= v3;
                }
            }
            int v16 = v4 - v2;
            if(v2 <= (int)v4) {
                return (int)param0;
            }
            int v17 = ~v16 - 31;
            if(v17 < 0) {
                int v18 = v17 + 12;
                if(v18 <= 0) {
                    int v19 = v18 + 20;
                    return (v1 << (32 - v19)) | (param0 >>> v19);
                }
                int v20 = 12 - v18;
                return (v1 << v20) | (param0 >>> (32 - v20));
            }
            return (int)(v1 >>> v17);
        }
    }
    else if(param1 >= 0x200000) {
        v0 = param0 & SOCK_STREAM;
        param0 = (uint32_t)((param0 >>> SOCK_STREAM) & 0x7fffffff) | ((uint32_t)((param1 & SOCK_STREAM) != 0) << 31);
        v5 = (uint32_t)((v5 >>> SOCK_STREAM) & 0x7fffffff) | ((uint32_t)v0 << 31);
        if((v4 + SOCK_STREAM) * 0x200000 >= 0xffc00000) {
            return 0;
        }
    }
    return (v5 == 0x80000000 ? (uint32_t)((param0 & SOCK_STREAM) != 0): (uint32_t)(v5 >= 0x80000000)) + param0;
}
