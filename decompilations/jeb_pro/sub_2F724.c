int sub_2F724(char* param0, char* param1, int param2) {
    int __ptr1;
    int v0;
    uint32_t v1 = (uint32_t)*param1;
    if(v1 != 0) {
        if(param2 != 0) {
            char* ptr0 = param0;
            int v2 = (uint32_t)*(param1 + SOCK_STREAM);
            if(v2 != 0) {
                int v3 = *(int*)(v2 * 4 + 0x6551c);
                int v4 = *(int*)(v1 * 4 + 0x6551c);
                int result = (v3 >>> 31) | (v4 >>> 31);
                if(((v3 >>> 31) | (v4 >>> 31)) == 0) {
                    param1 += 4;
                loc_2F780:
                    do {
                        --param2;
                        *ptr0 = ((uint8_t)v4 * 16) | (uint8_t)v3;
                        ++ptr0;
                        int v5 = (uint32_t)*(param1 - 2);
                        if(v5 != 0 && param2 == 0) {
                            return result;
                        }
                        else if(v5 != 0) {
                            int v6 = (uint32_t)*(param1 - SOCK_STREAM);
                            param1 += 2;
                            if(v6 == 0) {
                                goto loc_2F84C;
                            }
                            else {
                                v4 = *(int*)(v5 * 4 + 0x6551c);
                                v3 = *(int*)(v6 * 4 + 0x6551c);
                                if((v3 | v4) >= 0) {
                                    goto loc_2F780;
                                }
                                goto loc_2F7D4;
                            }
                        }
                        else if(param2 != 0) {
                            return 0;
                        }
                        else {
                            return SOCK_STREAM;
                        }
                    }
                    while(SOCK_STREAM);
                }
            loc_2F7D4:
                if(gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 2) {
                    return 0;
                }
                __builtin_strcpy(&__ptr1, "hex2bin scan failed");
                sub_2E584(3, &__ptr1, 0);
                result = 0;
                return result;
            }
        loc_2F84C:
            if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
                __ptr1 = 0x32786568;
                int v7 = 544106850;
                int v8 = 544371827;
                int v9 = 0x6e757274;
                __builtin_strcpy(&v0, "cated");
                sub_2E584(3, &__ptr1, 0);
            }
            return 0;
        }
    }
    else if(param2 == 0) {
        return SOCK_STREAM;
    }
    return 0;
}
