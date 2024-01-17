int sub_5FDB4(uint32_t param0, int param1, uint32_t param2, int param3) {
    uint8_t v0;
    uint32_t v1;
    uint32_t v2;
    uint8_t v3;
    uint32_t v4;
    char v5;
    int v6 = param1 * 2;
    int v7 = param3 * 2;
    char v8 = v6 == v7;
    if(v8 != 0) {
        v8 = param0 == param2;
    }
    if(v8 == 0) {
        v8 = (param0 | v6) == 0;
    }
    if(v8 == 0) {
        v8 = (param2 | v7) == 0;
    }
    if(v8 == 0) {
        v8 = ~(v6 >> 21) == 0;
    }
    if(v8 == 0) {
        v8 = ~(v7 >> 21) == 0;
    }
    if(v8 == 0) {
        int v9 = v6 >>> 21;
        int v10 = (v7 >>> 21) - v9;
        char v11 = v7 >>> 21 < v9;
        v5 = ~v9 + (v7 >>> 21) == -1;
        char v12 = (int64_t)~v9 + (int64_t)(v7 >>> 21) + 1L != ((uint64_t)((v7 >>> 21) - v9) | ((uint64_t)((((uint64_t)~v9 + (uint64_t)(v7 >>> 21) + 1L) >>> 31L) & 0x1L ? -1: 0) << 32));
        if(v12 != v11) {
            v10 = 0 - v10;
        }
        if((v5 == 0 && v12 == v11)) {
            v9 += v10;
            uint32_t v13 = param0 ^ param2;
            int v14 = param1 ^ param3;
            param0 ^= v13;
            param1 ^= v14;
            param2 = param0 ^ v13;
            param3 = param1 ^ v14;
        }
        if(v10 > 54) {
            return (int)param0;
        }
        int v15 = (uint32_t)(param1 & 0xfffff) | 0x100000;
        if(param1 < 0) {
            uint32_t v16 = param0;
            param0 = 0 - v16;
            v15 += ~(v15 * 2) + (uint32_t)(~v16 + 1L != (uint64_t)(0 - v16));
        }
        int v17 = (uint32_t)(param3 & 0xfffff) | 0x100000;
        if(param3 < 0) {
            uint32_t v18 = param2;
            param2 = 0 - v18;
            v17 += ~(v17 * 2) + (uint32_t)(~v18 + 1L != (uint64_t)(0 - v18));
        }
        if(v9 == v10) {
            v17 ^= 0x100000;
            if(v9 == 0) {
                v15 ^= 0x100000;
                v9 = SOCK_STREAM;
            }
            else {
                --v10;
            }
        }
        int v19 = v9 - SOCK_STREAM;
        int v20 = 32 - v10;
        if(v20 >= 0) {
            v4 = param2 << v20;
            uint32_t v21 = param2 >>> v10;
            uint32_t v22 = param0 + v21;
            int v23 = (uint32_t)__carry__(param0, v21) + v15;
            param2 = v17 << v20;
            param0 = v22 + param2;
            param3 = v17 >> v10;
            v3 = __carry__(v22, param2);
            v2 = v3 + v23 + param3;
            v11 = v3 + v23 + param3 < 0;
        }
        else {
            int v24 = v10 - 32;
            v4 = v17 << (v20 + 32);
            if(param2 >= SOCK_STREAM) {
                v4 |= 2;
            }
            param3 = v17 >> v24;
            uint32_t v25 = param0;
            param0 += param3;
            v3 = __carry__(param3, v25);
            v2 = (param3 >> 31) + v3 + v15;
            v11 = (param3 >> 31) + v3 + v15 < 0;
        }
        if(v11 != 0) {
            uint32_t v26 = v4;
            v4 = 0 - v26;
            v3 = ~v26 + 1L != (uint64_t)(0 - v26);
            uint32_t v27 = param0;
            param0 = ~v27 + v3;
            v2 = ~v2 + (uint32_t)(~v27 + v3 != ~v27 + v3);
        }
        if(v2 < 0x100000) {
            v0 = v4 >= 0x80000000;
            v4 *= 2;
            uint32_t v28 = param0;
            param0 = param0 * 2 + v0;
            v2 = v2 * 2 + (uint32_t)(v28 * 2L + v0 != v28 * 2 + v0);
            --v19;
            if((v2 & 0x100000) == 0) {
                char v29 = v2 == 0;
                if(v29 != 0) {
                    v2 = param0;
                    param0 = 0;
                }
                int v30 = v2 < 0x80000000 ? (v2 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v2 >>> 29) & SOCK_STREAM ? 2: (v2 >>> 28) & SOCK_STREAM ? 3: (v2 >>> 27) & SOCK_STREAM ? 4: (v2 >>> 26) & SOCK_STREAM ? 5: (v2 >>> 25) & SOCK_STREAM ? 6: (v2 >>> 24) & SOCK_STREAM ? 7: (v2 >>> 23) & SOCK_STREAM ? 8: (v2 >>> 22) & SOCK_STREAM ? 9: (v2 >>> 21) & SOCK_STREAM ? 10: (v2 >>> 20) & SOCK_STREAM ? 11: (v2 >>> 19) & SOCK_STREAM ? 12: (v2 >>> 18) & SOCK_STREAM ? 13: (v2 >>> 17) & SOCK_STREAM ? 14: (v2 >>> 16) & SOCK_STREAM ? 15: (v2 >>> 15) & SOCK_STREAM ? 16: (v2 >>> 14) & SOCK_STREAM ? 17: (v2 >>> 13) & SOCK_STREAM ? 18: (v2 >>> 12) & SOCK_STREAM ? 19: (v2 >>> 11) & SOCK_STREAM ? 20: (v2 >>> 10) & SOCK_STREAM ? 21: (v2 >>> 9) & SOCK_STREAM ? 22: (v2 >>> 8) & SOCK_STREAM ? 23: (v2 >>> 7) & SOCK_STREAM ? 24: (v2 >>> 6) & SOCK_STREAM ? 25: (v2 >>> 5) & SOCK_STREAM ? 26: (v2 >>> 4) & SOCK_STREAM ? 27: (v2 >>> 3) & SOCK_STREAM ? 28: (v2 >>> 2) & SOCK_STREAM ? 29: (v2 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v2 & SOCK_STREAM ? 31: 32: 0;
                if(v29 != 0) {
                    v30 += 32;
                }
                param3 = v30 - 11;
                param2 = param3 - 32;
                v11 = param3 < 32;
                v5 = param3 == 32;
                v12 = (((param3 - 32) ^ param3) & (param3 ^ 0x20)) < 0;
                if(param2 >= 0x80000000) {
                    uint32_t v31 = param2 + 12;
                    v11 = (int)param2 < -12;
                    v5 = param2 == -12;
                    v12 = (((param2 + 12) ^ param2) & ~(param2 ^ 0xc)) < 0;
                    if((v5 == 0 && v12 == v11)) {
                        param0 = v2 << (v31 + 20);
                        v1 = v2 >>> (12 - v31);
                    }
                    else {
                        param2 = v31 + 20;
                        goto loc_5FF22;
                    }
                }
                else {
                loc_5FF22:
                    if(v5 != 0 || v12 != v11) {
                        v4 = 32 - param2;
                    }
                    v1 = v2 << param2;
                    v4 = param0 >>> v4;
                    if(v5 != 0 || v12 != v11) {
                        v1 |= v4;
                        param0 <<= param2;
                    }
                }
                int v32 = v19 - param3;
                if(param3 <= v19) {
                    return (int)param0;
                }
                int v33 = ~v32 - 31;
                if(v33 < 0) {
                    int v34 = v33 + 12;
                    if(v34 <= 0) {
                        int v35 = v34 + 20;
                        return (v1 << (32 - v35)) | (param0 >>> v35);
                    }
                    int v36 = 12 - v34;
                    return (v1 << v36) | (param0 >>> (32 - v36));
                }
                return (int)(v1 >>> v33);
            }
        }
        else if(v2 >= 0x200000) {
            v0 = param0 & SOCK_STREAM;
            param0 = (uint32_t)((param0 >>> SOCK_STREAM) & 0x7fffffff) | ((uint32_t)((v2 & SOCK_STREAM) != 0) << 31);
            v4 = (uint32_t)((v4 >>> SOCK_STREAM) & 0x7fffffff) | ((uint32_t)v0 << 31);
            if((v19 + SOCK_STREAM) * 0x200000 >= 0xffc00000) {
                return 0;
            }
        }
        return (v4 == 0x80000000 ? (uint32_t)((param0 & SOCK_STREAM) != 0): (uint32_t)(v4 >= 0x80000000)) + param0;
    }
    char v37 = ~(v6 >> 21) == 0;
    if(v37 == 0) {
        v37 = ~(v7 >> 21) == 0;
    }
    if(v37 == 0) {
        v5 = v6 == v7;
        if(v5 != 0) {
            v5 = param0 == param2;
        }
        if(v5 == 0) {
            if((param0 | v6) == 0) {
                param0 = param2;
            }
            return (int)param0;
        }
        if(param1 != param3) {
            return 0;
        }
        if(v6 >>> 21 == 0) {
            return (int)(param0 * 2);
        }
        if(v6 >= 0xffc00000) {
            return 0;
        }
        return (int)param0;
    }
    if(~(v6 >> 21) != 0) {
        return (int)param2;
    }
    return (int)param0;
}
