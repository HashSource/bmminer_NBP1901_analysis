uint32_t sub_2CFFC(int param0, char* param1) {
    uint32_t v0;
    uint32_t v1;
    uint32_t result;
    short __s;
    if(gvar_7EB9C <= 3) {
        result = sub_1E120();
        v1 = result;
        if((int)v1 <= 0) {
            goto loc_2D150;
        }
        else {
        loc_2D03C:
            v0 = gvar_7EB9C;
            uint32_t v2 = 0;
            do {
                if(v0 > 3) {
                    uint32_t v3 = v2;
                    ++v2;
                    snprintf(&__s, 0x800, "core[%03d]=%-8d", v3);
                    sub_2EA54(3, &__s, 0);
                    result = 3;
                    v0 = gvar_7EB9C;
                    if(v2 / 10 * 10 == v2 && v0 > 3) {
                        __s = 10;
                        result = sub_2EA54(3, &__s, (int)(v2 - v2 / 10 * 10));
                        v0 = gvar_7EB9C;
                        if(v2 != v1) {
                            continue;
                        }
                        break;
                    }
                }
                else {
                    ++v2;
                }
            }
            while(v2 != v1);
        }
    }
    else {
        snprintf(&__s, 0x800, "\n asic nonce number for chain[%d] asic[%d]...\n", param0, param1);
        sub_2EA54(3, &__s, 0);
        result = sub_1E120();
        v1 = result;
        if((int)v1 > 0) {
            goto loc_2D03C;
        }
    loc_2D150:
        v0 = gvar_7EB9C;
    }
    if(v0 > 3) {
        __s = 10;
        result = sub_2EA54(3, &__s, 0);
    }
    return result;
}
