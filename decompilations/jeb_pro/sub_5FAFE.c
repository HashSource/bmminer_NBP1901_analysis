int sub_5FAFE(int param0, int param1) {
    char v0;
    int v1 = param0 ^ param1;
    if(v0 != 0) {
        param1 = 0 - param1;
    }
    if(param1 != SOCK_STREAM) {
        char v2 = (param0 < 0 ? 0 - param0: param0) == param1;
        char v3 = (param0 < 0 ? 0 - param0: param0) >= param1;
        if((v3 != 0 && v2 == 0)) {
            if(((param1 - SOCK_STREAM) & param1) != 0) {
                jump ((param0 < 0 ? 0 - param0: param0) >= 0 ? ((param0 < 0 ? 0 - param0: param0) >>> 30) & SOCK_STREAM ? SOCK_STREAM: ((param0 < 0 ? 0 - param0: param0) >>> 29) & SOCK_STREAM ? 2: ((param0 < 0 ? 0 - param0: param0) >>> 28) & SOCK_STREAM ? 3: ((param0 < 0 ? 0 - param0: param0) >>> 27) & SOCK_STREAM ? 4: ((param0 < 0 ? 0 - param0: param0) >>> 26) & SOCK_STREAM ? 5: ((param0 < 0 ? 0 - param0: param0) >>> 25) & SOCK_STREAM ? 6: ((param0 < 0 ? 0 - param0: param0) >>> 24) & SOCK_STREAM ? 7: ((param0 < 0 ? 0 - param0: param0) >>> 23) & SOCK_STREAM ? 8: ((param0 < 0 ? 0 - param0: param0) >>> 22) & SOCK_STREAM ? 9: ((param0 < 0 ? 0 - param0: param0) >>> 21) & SOCK_STREAM ? 10: ((param0 < 0 ? 0 - param0: param0) >>> 20) & SOCK_STREAM ? 11: ((param0 < 0 ? 0 - param0: param0) >>> 19) & SOCK_STREAM ? 12: ((param0 < 0 ? 0 - param0: param0) >>> 18) & SOCK_STREAM ? 13: ((param0 < 0 ? 0 - param0: param0) >>> 17) & SOCK_STREAM ? 14: ((param0 < 0 ? 0 - param0: param0) >>> 16) & SOCK_STREAM ? 15: ((param0 < 0 ? 0 - param0: param0) >>> 15) & SOCK_STREAM ? 16: ((param0 < 0 ? 0 - param0: param0) >>> 14) & SOCK_STREAM ? 17: ((param0 < 0 ? 0 - param0: param0) >>> 13) & SOCK_STREAM ? 18: ((param0 < 0 ? 0 - param0: param0) >>> 12) & SOCK_STREAM ? 19: ((param0 < 0 ? 0 - param0: param0) >>> 11) & SOCK_STREAM ? 20: ((param0 < 0 ? 0 - param0: param0) >>> 10) & SOCK_STREAM ? 21: ((param0 < 0 ? 0 - param0: param0) >>> 9) & SOCK_STREAM ? 22: ((param0 < 0 ? 0 - param0: param0) >>> 8) & SOCK_STREAM ? 23: ((param0 < 0 ? 0 - param0: param0) >>> 7) & SOCK_STREAM ? 24: ((param0 < 0 ? 0 - param0: param0) >>> 6) & SOCK_STREAM ? 25: ((param0 < 0 ? 0 - param0: param0) >>> 5) & SOCK_STREAM ? 26: ((param0 < 0 ? 0 - param0: param0) >>> 4) & SOCK_STREAM ? 27: ((param0 < 0 ? 0 - param0: param0) >>> 3) & SOCK_STREAM ? 28: ((param0 < 0 ? 0 - param0: param0) >>> 2) & SOCK_STREAM ? 29: ((param0 < 0 ? 0 - param0: param0) >>> SOCK_STREAM) & SOCK_STREAM ? 30: param0 < 0 ? 0 - (param0 & SOCK_STREAM): param0 & SOCK_STREAM ? 31: 32: 0) * 16 - (param1 >= 0 ? (param1 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (param1 >>> 29) & SOCK_STREAM ? 2: (param1 >>> 28) & SOCK_STREAM ? 3: (param1 >>> 27) & SOCK_STREAM ? 4: (param1 >>> 26) & SOCK_STREAM ? 5: (param1 >>> 25) & SOCK_STREAM ? 6: (param1 >>> 24) & SOCK_STREAM ? 7: (param1 >>> 23) & SOCK_STREAM ? 8: (param1 >>> 22) & SOCK_STREAM ? 9: (param1 >>> 21) & SOCK_STREAM ? 10: (param1 >>> 20) & SOCK_STREAM ? 11: (param1 >>> 19) & SOCK_STREAM ? 12: (param1 >>> 18) & SOCK_STREAM ? 13: (param1 >>> 17) & SOCK_STREAM ? 14: (param1 >>> 16) & SOCK_STREAM ? 15: (param1 >>> 15) & SOCK_STREAM ? 16: (param1 >>> 14) & SOCK_STREAM ? 17: (param1 >>> 13) & SOCK_STREAM ? 18: (param1 >>> 12) & SOCK_STREAM ? 19: (param1 >>> 11) & SOCK_STREAM ? 20: (param1 >>> 10) & SOCK_STREAM ? 21: (param1 >>> 9) & SOCK_STREAM ? 22: (param1 >>> 8) & SOCK_STREAM ? 23: (param1 >>> 7) & SOCK_STREAM ? 24: (param1 >>> 6) & SOCK_STREAM ? 25: (param1 >>> 5) & SOCK_STREAM ? 26: (param1 >>> 4) & SOCK_STREAM ? 27: (param1 >>> 3) & SOCK_STREAM ? 28: (param1 >>> 2) & SOCK_STREAM ? 29: (param1 >>> SOCK_STREAM) & SOCK_STREAM ? 30: param1 & SOCK_STREAM ? 31: 32: 0) * 16 + &loc_5FD30;
            }
            param0 = (param0 < 0 ? 0 - param0: param0) >>> (31 - (param1 >= 0 ? (param1 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (param1 >>> 29) & SOCK_STREAM ? 2: (param1 >>> 28) & SOCK_STREAM ? 3: (param1 >>> 27) & SOCK_STREAM ? 4: (param1 >>> 26) & SOCK_STREAM ? 5: (param1 >>> 25) & SOCK_STREAM ? 6: (param1 >>> 24) & SOCK_STREAM ? 7: (param1 >>> 23) & SOCK_STREAM ? 8: (param1 >>> 22) & SOCK_STREAM ? 9: (param1 >>> 21) & SOCK_STREAM ? 10: (param1 >>> 20) & SOCK_STREAM ? 11: (param1 >>> 19) & SOCK_STREAM ? 12: (param1 >>> 18) & SOCK_STREAM ? 13: (param1 >>> 17) & SOCK_STREAM ? 14: (param1 >>> 16) & SOCK_STREAM ? 15: (param1 >>> 15) & SOCK_STREAM ? 16: (param1 >>> 14) & SOCK_STREAM ? 17: (param1 >>> 13) & SOCK_STREAM ? 18: (param1 >>> 12) & SOCK_STREAM ? 19: (param1 >>> 11) & SOCK_STREAM ? 20: (param1 >>> 10) & SOCK_STREAM ? 21: (param1 >>> 9) & SOCK_STREAM ? 22: (param1 >>> 8) & SOCK_STREAM ? 23: (param1 >>> 7) & SOCK_STREAM ? 24: (param1 >>> 6) & SOCK_STREAM ? 25: (param1 >>> 5) & SOCK_STREAM ? 26: (param1 >>> 4) & SOCK_STREAM ? 27: (param1 >>> 3) & SOCK_STREAM ? 28: (param1 >>> 2) & SOCK_STREAM ? 29: (param1 >>> SOCK_STREAM) & SOCK_STREAM ? 30: param1 & SOCK_STREAM ? 31: 32: 0));
            if(v1 < 0) {
                param0 = 0 - param0;
            }
            return param0;
        }
        if(v3 == 0) {
            param0 = 0;
        }
        if(v2 != 0) {
            param0 = (v1 >> 31) | SOCK_STREAM;
        }
        return param0;
    }
    if((param0 ^ v1) < 0) {
        param0 = 0 - param0;
    }
    return param0;
}
