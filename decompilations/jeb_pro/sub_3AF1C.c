char* sub_3AF1C() {
    __int128 v0;
    char* result;
    char __s;
    int v1;
    if(gvar_7EB9C > 3) {
        snprintf(&__s, 0x800, "%-40s : %d\n", "\n", **(int**)gvar_4FCB40);
        result = sub_2EA54(3, &__s, 0);
        if(gvar_7EB9C > 3) {
            snprintf(&__s, 0x800, "%-40s : %d\n", "freq_base", *(int*)(*(int*)gvar_4FCB40 + 4));
            result = sub_2EA54(3, &__s, 0);
            if(gvar_7EB9C > 3) {
                snprintf(&__s, 0x800, "%-40s : %d\n", "freq_threshold", *(int*)(*(int*)gvar_4FCB40 + 8));
                result = sub_2EA54(3, &__s, 0);
                if(gvar_7EB9C <= 3) {
                    goto loc_3B168;
                }
                else {
                    snprintf(&__s, 0x800, "%-40s : %d\n", "freq_serial_threshold", *(int*)(*(int*)gvar_4FCB40 + 12));
                    result = sub_2EA54(3, &__s, 0);
                    if(gvar_7EB9C > 3) {
                        snprintf(&__s, 0x800, "%-40s : %d\n", "freq_step", *(int*)(*(int*)gvar_4FCB40 + 16));
                        result = sub_2EA54(3, &__s, 0);
                        goto loc_3B0AC;
                    }
                }
            }
        }
        else {
        loc_3B0AC:
            uint32_t v2 = gvar_7EB9C;
            if(v2 > 3) {
                char* ptr0 = "false";
                snprintf(&__s, 0x800, "%-40s : %s\n", "is_inc_freq_with_high_vol", *(char*)(*(int*)gvar_4FCB40 + 20) != 0 ? "true": "false");
                result = sub_2EA54(3, &__s, 0);
                if(gvar_7EB9C <= 3) {
                    return result;
                }
                if(*(char*)(*(int*)gvar_4FCB40 + 21) != 0) {
                    ptr0 = "true";
                }
                snprintf(&__s, 0x800, "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", ptr0);
                result = sub_2EA54(3, &__s, 0);
            loc_3B168:
                if(gvar_7EB9C <= 3) {
                    return result;
                }
                snprintf(&__s, 0x800, "%-40s : %d\n", "is_board_init_with_power_off", *(int*)(*(int*)gvar_4FCB40 + 24));
                result = sub_2EA54(3, &__s, 0);
                if(gvar_7EB9C <= 3) {
                    return result;
                }
                v0 = (unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(*(int*)gvar_4FCB40 + 28) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96);
                VCVT.F64.F32((uint64_t)(v0 >>> 0x40X), (uint32_t)(v0 >>> 0x40X));
                *(double*)&v1 = (double)(v0 >>> 0x40X);
                snprintf(&__s, 0x800, "%-40s : %.4f\n", "hw_threshold", *(double*)&v1);
                result = sub_2EA54(3, &__s, 0);
                v2 = gvar_7EB9C;
            }
            if(v2 > 3) {
                v0 = (unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(*(int*)gvar_4FCB40 + 32) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96);
                VCVT.F64.F32((uint64_t)(v0 >>> 0x40X), (uint32_t)(v0 >>> 0x40X));
                *(double*)&v1 = (double)(v0 >>> 0x40X);
                snprintf(&__s, 0x800, "%-40s : %.2f\n", "nonce_rate_threshold", *(double*)&v1);
                result = sub_2EA54(3, &__s, 0);
                if(gvar_7EB9C > 3) {
                    VCVT.F64.F32((uint64_t)(((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(*(int*)gvar_4FCB40 + 36) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(*(int*)gvar_4FCB40 + 36) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96)) >>> 0x40X));
                    *(double*)&v1 = (double)(((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(*(int*)gvar_4FCB40 + 36) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96)) >>> 0x40X);
                    snprintf(&__s, 0x800, "%-40s : %.2f\n", "nonce_rate_dec_threshold", *(double*)&v1);
                    return sub_2EA54(3, &__s, 0);
                }
            }
        }
    }
    return result;
}
