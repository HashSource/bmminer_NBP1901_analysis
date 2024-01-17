int sub_600C4(uint32_t param0, uint32_t param1) {
    uint8_t v0;
    uint32_t v1;
    int v2;
    uint32_t v3;
    if((param0 | param1) == 0) {
        return (int)param0;
    }
    if((param1 & 0x80000000) < 0) {
        uint32_t v4 = param0;
        param0 = 0 - v4;
        param1 += ~(param1 * 2) + (uint32_t)(~v4 + 1L != (uint64_t)(0 - v4));
    }
    uint32_t v5 = 0x432;
    uint32_t v6 = param1 >>> 22;
    if(param1 >>> 22 != 0) {
        int v7 = 3;
        uint32_t v8 = v6 >>> 3;
        if(v6 >>> 3 != 0) {
            v7 = 6;
        }
        uint32_t v9 = v8 >>> 3;
        if(v8 >>> 3 != 0) {
            v7 += 3;
        }
        v3 = (v9 >>> 3) + v7;
        v2 = 32 - v3;
        v6 = param0 << v2;
        param0 = (param1 << v2) | (param0 >>> v3);
        param1 >>>= v3;
        v5 = v3 + 0x432;
    }
    if(param1 < 0x100000) {
        v0 = v6 >= 0x80000000;
        v6 *= 2;
        uint32_t v10 = param0;
        param0 = param0 * 2 + v0;
        param1 = param1 * 2 + (uint32_t)(v10 * 2L + v0 != v10 * 2 + v0);
        --v5;
        if((param1 & 0x100000) == 0) {
            char v11 = param1 == 0;
            if(v11 != 0) {
                param1 = param0;
                param0 = 0;
            }
            int v12 = param1 < 0x80000000 ? (param1 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (param1 >>> 29) & SOCK_STREAM ? 2: (param1 >>> 28) & SOCK_STREAM ? 3: (param1 >>> 27) & SOCK_STREAM ? 4: (param1 >>> 26) & SOCK_STREAM ? 5: (param1 >>> 25) & SOCK_STREAM ? 6: (param1 >>> 24) & SOCK_STREAM ? 7: (param1 >>> 23) & SOCK_STREAM ? 8: (param1 >>> 22) & SOCK_STREAM ? 9: (param1 >>> 21) & SOCK_STREAM ? 10: (param1 >>> 20) & SOCK_STREAM ? 11: (param1 >>> 19) & SOCK_STREAM ? 12: (param1 >>> 18) & SOCK_STREAM ? 13: (param1 >>> 17) & SOCK_STREAM ? 14: (param1 >>> 16) & SOCK_STREAM ? 15: (param1 >>> 15) & SOCK_STREAM ? 16: (param1 >>> 14) & SOCK_STREAM ? 17: (param1 >>> 13) & SOCK_STREAM ? 18: (param1 >>> 12) & SOCK_STREAM ? 19: (param1 >>> 11) & SOCK_STREAM ? 20: (param1 >>> 10) & SOCK_STREAM ? 21: (param1 >>> 9) & SOCK_STREAM ? 22: (param1 >>> 8) & SOCK_STREAM ? 23: (param1 >>> 7) & SOCK_STREAM ? 24: (param1 >>> 6) & SOCK_STREAM ? 25: (param1 >>> 5) & SOCK_STREAM ? 26: (param1 >>> 4) & SOCK_STREAM ? 27: (param1 >>> 3) & SOCK_STREAM ? 28: (param1 >>> 2) & SOCK_STREAM ? 29: (param1 >>> SOCK_STREAM) & SOCK_STREAM ? 30: param1 & SOCK_STREAM ? 31: 32: 0;
            if(v11 != 0) {
                v12 += 32;
            }
            v2 = v12 - 11;
            v3 = v2 - 32;
            char v13 = v2 < 32;
            char v14 = v2 == 32;
            char v15 = (((v2 - 32) ^ v2) & (v2 ^ 0x20)) < 0;
            if(v3 >= 0x80000000) {
                uint32_t v16 = v3 + 12;
                v13 = (int)v3 < -12;
                v14 = v3 == -12;
                v15 = (((v3 + 12) ^ v3) & ~(v3 ^ 0xc)) < 0;
                if((v14 == 0 && v15 == v13)) {
                    param0 = param1 << (v16 + 20);
                    v1 = param1 >>> (12 - v16);
                }
                else {
                    v3 = v16 + 20;
                    goto loc_5FF22;
                }
            }
            else {
            loc_5FF22:
                if(v14 != 0 || v15 != v13) {
                    v6 = 32 - v3;
                }
                v1 = param1 << v3;
                v6 = param0 >>> v6;
                if(v14 != 0 || v15 != v13) {
                    v1 |= v6;
                    param0 <<= v3;
                }
            }
            int v17 = v5 - v2;
            if(v2 <= (int)v5) {
                return (int)param0;
            }
            int v18 = ~v17 - 31;
            if(v18 < 0) {
                int v19 = v18 + 12;
                if(v19 <= 0) {
                    int v20 = v19 + 20;
                    return (v1 << (32 - v20)) | (param0 >>> v20);
                }
                int v21 = 12 - v19;
                return (v1 << v21) | (param0 >>> (32 - v21));
            }
            return (int)(v1 >>> v18);
        }
    }
    else if(param1 >= 0x200000) {
        v0 = param0 & SOCK_STREAM;
        param0 = (uint32_t)((param0 >>> SOCK_STREAM) & 0x7fffffff) | ((uint32_t)((param1 & SOCK_STREAM) != 0) << 31);
        v6 = (uint32_t)((v6 >>> SOCK_STREAM) & 0x7fffffff) | ((uint32_t)v0 << 31);
        if((v5 + SOCK_STREAM) * 0x200000 >= 0xffc00000) {
            return 0;
        }
    }
    return (v6 == 0x80000000 ? (uint32_t)((param0 & SOCK_STREAM) != 0): (uint32_t)(v6 >= 0x80000000)) + param0;
}
