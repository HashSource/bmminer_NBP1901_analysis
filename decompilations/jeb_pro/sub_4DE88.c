int sub_4DE88(char* param0, int param1, int* param2) {
    int v0 = (uint32_t)*param0;
    switch(param1) {
        case 2: {
            v0 &= 31;
            goto loc_4DEC0;
        }
        case 3: {
            v0 &= 15;
            goto loc_4DEC0;
        }
        case 4: {
            v0 &= 7;
        loc_4DEC0:
            int v1 = (uint32_t)*(param0 + SOCK_STREAM);
            if((v1 ^ 0x80) <= 63) {
                char* ptr0 = param0 + SOCK_STREAM;
                int v2 = SOCK_STREAM;
                while(SOCK_STREAM) {
                    ++v2;
                    v0 = v0 * 64 + (v1 & 0x3f);
                    if(param1 <= v2) {
                        if(v0 < 0x110000 && v0 - 0xd800 >= 0x800 && (v0 <= 127 ? param1 == 2: 0) == 0) {
                            if(v0 < 0x800 && (param1 >= 3 ? (((param1 - 3) >>> 30) & SOCK_STREAM ? SOCK_STREAM: ((param1 - 3) >>> 29) & SOCK_STREAM ? 2: ((param1 - 3) >>> 28) & SOCK_STREAM ? 3: ((param1 - 3) >>> 27) & SOCK_STREAM ? 4: ((param1 - 3) >>> 26) & SOCK_STREAM ? 5: ((param1 - 3) >>> 25) & SOCK_STREAM ? 6: ((param1 - 3) >>> 24) & SOCK_STREAM ? 7: ((param1 - 3) >>> 23) & SOCK_STREAM ? 8: ((param1 - 3) >>> 22) & SOCK_STREAM ? 9: ((param1 - 3) >>> 21) & SOCK_STREAM ? 10: ((param1 - 3) >>> 20) & SOCK_STREAM ? 11: ((param1 - 3) >>> 19) & SOCK_STREAM ? 12: ((param1 - 3) >>> 18) & SOCK_STREAM ? 13: ((param1 - 3) >>> 17) & SOCK_STREAM ? 14: ((param1 - 3) >>> 16) & SOCK_STREAM ? 15: ((param1 - 3) >>> 15) & SOCK_STREAM ? 16: ((param1 - 3) >>> 14) & SOCK_STREAM ? 17: ((param1 - 3) >>> 13) & SOCK_STREAM ? 18: ((param1 - 3) >>> 12) & SOCK_STREAM ? 19: ((param1 - 3) >>> 11) & SOCK_STREAM ? 20: ((param1 - 3) >>> 10) & SOCK_STREAM ? 21: ((param1 - 3) >>> 9) & SOCK_STREAM ? 22: ((param1 - 3) >>> 8) & SOCK_STREAM ? 23: ((param1 - 3) >>> 7) & SOCK_STREAM ? 24: ((param1 - 3) >>> 6) & SOCK_STREAM ? 25: ((param1 - 3) >>> 5) & SOCK_STREAM ? 26: ((param1 - 3) >>> 4) & SOCK_STREAM ? 27: ((param1 - 3) >>> 3) & SOCK_STREAM ? 28: ((param1 - 3) >>> 2) & SOCK_STREAM ? 29: ((param1 - 3) >>> SOCK_STREAM) & SOCK_STREAM ? 30: (param1 & SOCK_STREAM) != SOCK_STREAM ? 31: 32) >>> 5: 0) != 0) {
                                return 0;
                            }
                            if(v0 >= &ELFHeader || (param1 >= 4 ? (((param1 - 4) >>> 30) & SOCK_STREAM ? SOCK_STREAM: ((param1 - 4) >>> 29) & SOCK_STREAM ? 2: ((param1 - 4) >>> 28) & SOCK_STREAM ? 3: ((param1 - 4) >>> 27) & SOCK_STREAM ? 4: ((param1 - 4) >>> 26) & SOCK_STREAM ? 5: ((param1 - 4) >>> 25) & SOCK_STREAM ? 6: ((param1 - 4) >>> 24) & SOCK_STREAM ? 7: ((param1 - 4) >>> 23) & SOCK_STREAM ? 8: ((param1 - 4) >>> 22) & SOCK_STREAM ? 9: ((param1 - 4) >>> 21) & SOCK_STREAM ? 10: ((param1 - 4) >>> 20) & SOCK_STREAM ? 11: ((param1 - 4) >>> 19) & SOCK_STREAM ? 12: ((param1 - 4) >>> 18) & SOCK_STREAM ? 13: ((param1 - 4) >>> 17) & SOCK_STREAM ? 14: ((param1 - 4) >>> 16) & SOCK_STREAM ? 15: ((param1 - 4) >>> 15) & SOCK_STREAM ? 16: ((param1 - 4) >>> 14) & SOCK_STREAM ? 17: ((param1 - 4) >>> 13) & SOCK_STREAM ? 18: ((param1 - 4) >>> 12) & SOCK_STREAM ? 19: ((param1 - 4) >>> 11) & SOCK_STREAM ? 20: ((param1 - 4) >>> 10) & SOCK_STREAM ? 21: ((param1 - 4) >>> 9) & SOCK_STREAM ? 22: ((param1 - 4) >>> 8) & SOCK_STREAM ? 23: ((param1 - 4) >>> 7) & SOCK_STREAM ? 24: ((param1 - 4) >>> 6) & SOCK_STREAM ? 25: ((param1 - 4) >>> 5) & SOCK_STREAM ? 26: ((param1 - 4) >>> 4) & SOCK_STREAM ? 27: ((param1 - 4) >>> 3) & SOCK_STREAM ? 28: ((param1 - 4) >>> 2) & SOCK_STREAM ? 29: ((param1 - 4) >>> SOCK_STREAM) & SOCK_STREAM ? 30: param1 & SOCK_STREAM ? 31: 32) >>> 5: 0) == 0) {
                                if(param2 != 0) {
                                    *param2 = v0;
                                }
                                return SOCK_STREAM;
                            }
                        }
                        return 0;
                    }
                    v1 = (uint32_t)*(ptr0 + SOCK_STREAM);
                    ++ptr0;
                    if((v1 ^ 0x80) > 63) {
                        return 0;
                    }
                }
            }
            return 0;
        }
        default: {
            return 0;
        }
    }
}
