int sub_153EC(int param0, int param1) {
    int v0;
    int result;
    int v1 = sub_1E29C(param0);
    int v2 = v1 >= 0 ? ((v1 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v1 >>> 29) & SOCK_STREAM ? 2: (v1 >>> 28) & SOCK_STREAM ? 3: (v1 >>> 27) & SOCK_STREAM ? 4: (v1 >>> 26) & SOCK_STREAM ? 5: (v1 >>> 25) & SOCK_STREAM ? 6: (v1 >>> 24) & SOCK_STREAM ? 7: (v1 >>> 23) & SOCK_STREAM ? 8: (v1 >>> 22) & SOCK_STREAM ? 9: (v1 >>> 21) & SOCK_STREAM ? 10: (v1 >>> 20) & SOCK_STREAM ? 11: (v1 >>> 19) & SOCK_STREAM ? 12: (v1 >>> 18) & SOCK_STREAM ? 13: (v1 >>> 17) & SOCK_STREAM ? 14: (v1 >>> 16) & SOCK_STREAM ? 15: (v1 >>> 15) & SOCK_STREAM ? 16: (v1 >>> 14) & SOCK_STREAM ? 17: (v1 >>> 13) & SOCK_STREAM ? 18: (v1 >>> 12) & SOCK_STREAM ? 19: (v1 >>> 11) & SOCK_STREAM ? 20: (v1 >>> 10) & SOCK_STREAM ? 21: (v1 >>> 9) & SOCK_STREAM ? 22: (v1 >>> 8) & SOCK_STREAM ? 23: (v1 >>> 7) & SOCK_STREAM ? 24: (v1 >>> 6) & SOCK_STREAM ? 25: (v1 >>> 5) & SOCK_STREAM ? 26: (v1 >>> 4) & SOCK_STREAM ? 27: (v1 >>> 3) & SOCK_STREAM ? 28: (v1 >>> 2) & SOCK_STREAM ? 29: (v1 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v1 & SOCK_STREAM ? 31: 32) >>> 5: 0;
    if(param1 > 2) {
        v2 |= SOCK_STREAM;
    }
    if(v2 == 0) {
        uint32_t v3 = param1 == 0 ? sub_1E19C(): sub_14434();
        if((int)v3 <= 0) {
            return 0xFF;
        }
        result = 0xFF;
        int v4 = 0;
        do {
            switch(param1) {
                case 0: {
                    v0 = sub_152F0(param0, (int)(uint8_t)v4);
                    break;
                }
                case 1: {
                    v0 = sub_15354(param0, (int)(uint8_t)v4);
                    break;
                }
                default: {
                    v0 = sub_153A0(param0, (int)(uint8_t)v4);
                    break;
                }
            }
            if(v0 != 0xFF) {
                if(result == 0xFF) {
                    result = v0;
                }
                else if(v0 > result) {
                    result = v0;
                }
            }
            ++v4;
        }
        while(v4 != v3);
    }
    else {
        result = 0xFF;
    }
    return result;
}
