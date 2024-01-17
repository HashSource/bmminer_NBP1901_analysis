int sub_601C0(int param0, int param1, int param2, int param3, int* param4) {
    int v0;
    char v1 = param1 == param3 ? param0 >= param2: param1 >= param3;
    int v2 = param0;
    if(v1 == 0) {
        param0 = 0;
    }
    int v3 = param1;
    if(v1 != 0) {
        int v4 = param3 >= 0 ? (param3 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (param3 >>> 29) & SOCK_STREAM ? 2: (param3 >>> 28) & SOCK_STREAM ? 3: (param3 >>> 27) & SOCK_STREAM ? 4: (param3 >>> 26) & SOCK_STREAM ? 5: (param3 >>> 25) & SOCK_STREAM ? 6: (param3 >>> 24) & SOCK_STREAM ? 7: (param3 >>> 23) & SOCK_STREAM ? 8: (param3 >>> 22) & SOCK_STREAM ? 9: (param3 >>> 21) & SOCK_STREAM ? 10: (param3 >>> 20) & SOCK_STREAM ? 11: (param3 >>> 19) & SOCK_STREAM ? 12: (param3 >>> 18) & SOCK_STREAM ? 13: (param3 >>> 17) & SOCK_STREAM ? 14: (param3 >>> 16) & SOCK_STREAM ? 15: (param3 >>> 15) & SOCK_STREAM ? 16: (param3 >>> 14) & SOCK_STREAM ? 17: (param3 >>> 13) & SOCK_STREAM ? 18: (param3 >>> 12) & SOCK_STREAM ? 19: (param3 >>> 11) & SOCK_STREAM ? 20: (param3 >>> 10) & SOCK_STREAM ? 21: (param3 >>> 9) & SOCK_STREAM ? 22: (param3 >>> 8) & SOCK_STREAM ? 23: (param3 >>> 7) & SOCK_STREAM ? 24: (param3 >>> 6) & SOCK_STREAM ? 25: (param3 >>> 5) & SOCK_STREAM ? 26: (param3 >>> 4) & SOCK_STREAM ? 27: (param3 >>> 3) & SOCK_STREAM ? 28: (param3 >>> 2) & SOCK_STREAM ? 29: (param3 >>> SOCK_STREAM) & SOCK_STREAM ? 30: param3 & SOCK_STREAM ? 31: 32: 0;
        v0 = v3 >= 0 ? (v3 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v3 >>> 29) & SOCK_STREAM ? 2: (v3 >>> 28) & SOCK_STREAM ? 3: (v3 >>> 27) & SOCK_STREAM ? 4: (v3 >>> 26) & SOCK_STREAM ? 5: (v3 >>> 25) & SOCK_STREAM ? 6: (v3 >>> 24) & SOCK_STREAM ? 7: (v3 >>> 23) & SOCK_STREAM ? 8: (v3 >>> 22) & SOCK_STREAM ? 9: (v3 >>> 21) & SOCK_STREAM ? 10: (v3 >>> 20) & SOCK_STREAM ? 11: (v3 >>> 19) & SOCK_STREAM ? 12: (v3 >>> 18) & SOCK_STREAM ? 13: (v3 >>> 17) & SOCK_STREAM ? 14: (v3 >>> 16) & SOCK_STREAM ? 15: (v3 >>> 15) & SOCK_STREAM ? 16: (v3 >>> 14) & SOCK_STREAM ? 17: (v3 >>> 13) & SOCK_STREAM ? 18: (v3 >>> 12) & SOCK_STREAM ? 19: (v3 >>> 11) & SOCK_STREAM ? 20: (v3 >>> 10) & SOCK_STREAM ? 21: (v3 >>> 9) & SOCK_STREAM ? 22: (v3 >>> 8) & SOCK_STREAM ? 23: (v3 >>> 7) & SOCK_STREAM ? 24: (v3 >>> 6) & SOCK_STREAM ? 25: (v3 >>> 5) & SOCK_STREAM ? 26: (v3 >>> 4) & SOCK_STREAM ? 27: (v3 >>> 3) & SOCK_STREAM ? 28: (v3 >>> 2) & SOCK_STREAM ? 29: (v3 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v3 & SOCK_STREAM ? 31: 32: 0;
        if(param3 == 0) {
            v4 = (param2 >= 0 ? (param2 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (param2 >>> 29) & SOCK_STREAM ? 2: (param2 >>> 28) & SOCK_STREAM ? 3: (param2 >>> 27) & SOCK_STREAM ? 4: (param2 >>> 26) & SOCK_STREAM ? 5: (param2 >>> 25) & SOCK_STREAM ? 6: (param2 >>> 24) & SOCK_STREAM ? 7: (param2 >>> 23) & SOCK_STREAM ? 8: (param2 >>> 22) & SOCK_STREAM ? 9: (param2 >>> 21) & SOCK_STREAM ? 10: (param2 >>> 20) & SOCK_STREAM ? 11: (param2 >>> 19) & SOCK_STREAM ? 12: (param2 >>> 18) & SOCK_STREAM ? 13: (param2 >>> 17) & SOCK_STREAM ? 14: (param2 >>> 16) & SOCK_STREAM ? 15: (param2 >>> 15) & SOCK_STREAM ? 16: (param2 >>> 14) & SOCK_STREAM ? 17: (param2 >>> 13) & SOCK_STREAM ? 18: (param2 >>> 12) & SOCK_STREAM ? 19: (param2 >>> 11) & SOCK_STREAM ? 20: (param2 >>> 10) & SOCK_STREAM ? 21: (param2 >>> 9) & SOCK_STREAM ? 22: (param2 >>> 8) & SOCK_STREAM ? 23: (param2 >>> 7) & SOCK_STREAM ? 24: (param2 >>> 6) & SOCK_STREAM ? 25: (param2 >>> 5) & SOCK_STREAM ? 26: (param2 >>> 4) & SOCK_STREAM ? 27: (param2 >>> 3) & SOCK_STREAM ? 28: (param2 >>> 2) & SOCK_STREAM ? 29: (param2 >>> SOCK_STREAM) & SOCK_STREAM ? 30: param2 & SOCK_STREAM ? 31: 32: 0) + 32;
            if(v3 == 0) {
            loc_602C0:
                v0 = (v2 >= 0 ? (v2 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v2 >>> 29) & SOCK_STREAM ? 2: (v2 >>> 28) & SOCK_STREAM ? 3: (v2 >>> 27) & SOCK_STREAM ? 4: (v2 >>> 26) & SOCK_STREAM ? 5: (v2 >>> 25) & SOCK_STREAM ? 6: (v2 >>> 24) & SOCK_STREAM ? 7: (v2 >>> 23) & SOCK_STREAM ? 8: (v2 >>> 22) & SOCK_STREAM ? 9: (v2 >>> 21) & SOCK_STREAM ? 10: (v2 >>> 20) & SOCK_STREAM ? 11: (v2 >>> 19) & SOCK_STREAM ? 12: (v2 >>> 18) & SOCK_STREAM ? 13: (v2 >>> 17) & SOCK_STREAM ? 14: (v2 >>> 16) & SOCK_STREAM ? 15: (v2 >>> 15) & SOCK_STREAM ? 16: (v2 >>> 14) & SOCK_STREAM ? 17: (v2 >>> 13) & SOCK_STREAM ? 18: (v2 >>> 12) & SOCK_STREAM ? 19: (v2 >>> 11) & SOCK_STREAM ? 20: (v2 >>> 10) & SOCK_STREAM ? 21: (v2 >>> 9) & SOCK_STREAM ? 22: (v2 >>> 8) & SOCK_STREAM ? 23: (v2 >>> 7) & SOCK_STREAM ? 24: (v2 >>> 6) & SOCK_STREAM ? 25: (v2 >>> 5) & SOCK_STREAM ? 26: (v2 >>> 4) & SOCK_STREAM ? 27: (v2 >>> 3) & SOCK_STREAM ? 28: (v2 >>> 2) & SOCK_STREAM ? 29: (v2 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v2 & SOCK_STREAM ? 31: 32: 0) + 32;
            }
        }
        else if(v3 == 0) {
            goto loc_602C0;
        }
        int v5 = v4 - v0;
        int v6 = param2 << v5;
        int v7 = (uint32_t)((((uint64_t)param2 | ((uint64_t)param3 << 32)) << v5) >>> 32L);
        v1 = v3 == v7 ? v2 >= v6: v3 >= v7;
        if(v1 == 0) {
            param0 = 0;
        }
        if(v1 != 0) {
            int v8 = v2;
            v2 -= v6;
            param0 = SOCK_STREAM << v5;
            v3 += ~v7 + (uint32_t)(v6 <= v8);
        }
        if(v5 != 0) {
            int v9 = (uint32_t)((v6 >>> SOCK_STREAM) & 0x7fffffff) | ((uint32_t)((v7 & SOCK_STREAM) != 0) << 31);
            int v10 = v5;
            do {
                if((v7 >>> SOCK_STREAM != v3 ? v7 >>> SOCK_STREAM <= v3: v2 >= v9) == 0) {
                    int v11 = v2;
                    v2 *= 2;
                    v3 = v3 * 2 + (uint32_t)__carry__(v11, v11);
                    --v10;
                    if(v10 != 0) {
                        continue;
                    }
                    break;
                }
                int v12 = v2 - v9;
                int v13 = ~(v7 >>> SOCK_STREAM) + (uint32_t)(v2 >= v9) + v3;
                v2 = v12 * 2 + SOCK_STREAM;
                v3 = v13 * 2 + (uint32_t)(v12 * 2 >= -1) + (uint32_t)__carry__(v12, v12);
                --v10;
            }
            while(v10 != 0);
            int v14 = param0 + v2;
            v2 = (uint32_t)(((uint64_t)v2 | ((uint64_t)v3 << 32)) >>> v5);
            v3 >>>= v5;
            param0 = v14 - (v2 << v5);
        }
    }
    if(param4 != 0) {
        *param4 = v2;
        *(param4 + SOCK_STREAM) = v3;
    }
    return param0;
}
