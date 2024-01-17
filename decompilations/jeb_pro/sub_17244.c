char* sub_17244(char* param0, uint32_t param1, int param2) {
    short __ptr1;
    uint32_t v0 = param1;
    param1 = gvar_7EB9C;
    if(param1 > 3) {
        snprintf(&__ptr1, 0x800, "[chain %d]\n", param0);
        param0 = sub_2E584(3, &__ptr1, 0);
        param1 = gvar_7EB9C;
        if(param2 != 0) {
        loc_1728C:
            int v1 = 0;
        loc_17298:
            if(param1 > 3) {
                snprintf(&__ptr1, 0x800, "0x%04X ", v1);
                param0 = sub_2EA54(3, &__ptr1, v1 & 0xf);
                param1 = gvar_7EB9C;
                if((v1 & 0xf) == 8) {
                    goto loc_172C8;
                }
            loc_172A0:
                if(param1 <= 3) {
                    goto loc_172A8;
                loc_172C8:
                    if(param1 <= 3) {
                        goto loc_172A8;
                    }
                    __ptr1 = 0x2020;
                    char v2 = 0;
                    param0 = sub_2EA54(3, &__ptr1, 0);
                    param1 = gvar_7EB9C;
                    if(param1 <= 3) {
                    loc_172A8:
                        ++v1;
                        if(param2 <= v1) {
                            goto loc_17364;
                        }
                        else {
                        loc_172B8:
                            if((v1 & 0xf) == 0) {
                                goto loc_17298;
                            }
                            if((v1 & 0xf) != 8) {
                                goto loc_172A0;
                            }
                            goto loc_172C8;
                        }
                    }
                }
                snprintf(&__ptr1, 0x800, "%02X ", (uint32_t)*(char*)(v1 + v0));
                param0 = sub_2EA54(3, &__ptr1, 0);
                param1 = gvar_7EB9C;
                if((v1 & 0xf) != 15 || param1 <= 3) {
                    goto loc_172A8;
                }
                ++v1;
                __ptr1 = 10;
                param0 = sub_2EA54(3, &__ptr1, 0);
                param1 = gvar_7EB9C;
                if(param2 <= v1) {
                    goto loc_17364;
                }
                goto loc_172B8;
            }
            else {
                goto loc_172A0;
            }
        }
    loc_17364:
        if(param1 > 3) {
            __ptr1 = 10;
            return sub_2EA54(3, &__ptr1, 0);
        }
    }
    else if(param2 != 0) {
        goto loc_1728C;
    }
    return param0;
}
