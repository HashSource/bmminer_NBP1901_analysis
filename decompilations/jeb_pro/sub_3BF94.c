int sub_3BF94() {
    __int128 v0;
    int result;
    short __s;
    int v1;
    if(gvar_7EB9C > 3) {
        snprintf(&__s, 0x800, "%-40s : %d\n", "\n", **(int**)gvar_4FCB44);
        sub_2EA54(3, &__s, 0);
        if(gvar_7EB9C > 3) {
            snprintf(&__s, 0x800, "%-40s : ", "freq_base");
            sub_2EA54(3, &__s, 0);
        }
    }
    int v2 = 0;
    do {
        result = sub_1E29C(v2);
        if(result != 0 && gvar_7EB9C > 3) {
            snprintf(&__s, 0x800, "[%d] = %d ", v2, *(int*)(v2 * 4 + *(int*)gvar_4FCB44 + 4));
            result = sub_2EA54(3, &__s, 0);
        }
        ++v2;
    }
    while(v2 != 4);
    if(gvar_7EB9C > 3) {
        __s = 10;
        result = sub_2EA54(3, &__s, 0);
        if(gvar_7EB9C > 3) {
            snprintf(&__s, 0x800, "%-40s : %d\n", "freq_threshold", *(int*)(*(int*)gvar_4FCB44 + 20));
            result = sub_2EA54(3, &__s, 0);
            if(gvar_7EB9C > 3) {
                snprintf(&__s, 0x800, "%-40s : %d\n", "freq_serial_threshold", *(int*)(*(int*)gvar_4FCB44 + 24));
                result = sub_2EA54(3, &__s, 0);
                if(gvar_7EB9C <= 3) {
                    goto loc_3C2C8;
                }
                else {
                    snprintf(&__s, 0x800, "%-40s : %d\n", "freq_diff_threshold", *(int*)(*(int*)gvar_4FCB44 + 28));
                    result = sub_2EA54(3, &__s, 0);
                    if(gvar_7EB9C > 3) {
                        snprintf(&__s, 0x800, "%-40s : %d\n", "freq_step", *(int*)(*(int*)gvar_4FCB44 + 32));
                        result = sub_2EA54(3, &__s, 0);
                        goto loc_3C204;
                    }
                }
            }
        }
        else {
        loc_3C204:
            uint32_t v3 = gvar_7EB9C;
            if(v3 > 3) {
                char* ptr0 = "false";
                snprintf(&__s, 0x800, "%-40s : %s\n", "is_inc_freq_with_high_vol", *(char*)(*(int*)gvar_4FCB44 + 36) != 0 ? "true": "false");
                result = sub_2EA54(3, &__s, 0);
                if(gvar_7EB9C <= 3) {
                    return result;
                }
                if(*(char*)(*(int*)gvar_4FCB44 + 37) != 0) {
                    ptr0 = "true";
                }
                snprintf(&__s, 0x800, "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", ptr0);
                result = sub_2EA54(3, &__s, 0);
            loc_3C2C8:
                if(gvar_7EB9C <= 3) {
                    return result;
                }
                snprintf(&__s, 0x800, "%-40s : %d\n", "is_board_init_with_power_off", *(int*)(*(int*)gvar_4FCB44 + 40));
                result = sub_2EA54(3, &__s, 0);
                if(gvar_7EB9C <= 3) {
                    return result;
                }
                v0 = (unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(*(int*)gvar_4FCB44 + 44) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96);
                VCVT.F64.F32((uint64_t)(v0 >>> 0x40X), (uint32_t)(v0 >>> 0x40X));
                *(double*)&v1 = (double)(v0 >>> 0x40X);
                snprintf(&__s, 0x800, "%-40s : %.4f\n", "hw_threshold", *(double*)&v1);
                result = sub_2EA54(3, &__s, 0);
                v3 = gvar_7EB9C;
            }
            if(v3 > 3) {
                v0 = (unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(*(int*)gvar_4FCB44 + 48) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96);
                VCVT.F64.F32((uint64_t)(v0 >>> 0x40X), (uint32_t)(v0 >>> 0x40X));
                *(double*)&v1 = (double)(v0 >>> 0x40X);
                snprintf(&__s, 0x800, "%-40s : %.2f\n", "nonce_rate_threshold", *(double*)&v1);
                result = sub_2EA54(3, &__s, 0);
                if(gvar_7EB9C > 3) {
                    VCVT.F64.F32((uint64_t)(((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(*(int*)gvar_4FCB44 + 52) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(*(int*)gvar_4FCB44 + 52) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96)) >>> 0x40X));
                    *(double*)&v1 = (double)(((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(*(int*)gvar_4FCB44 + 52) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96)) >>> 0x40X);
                    snprintf(&__s, 0x800, "%-40s : %.2f\n", "nonce_rate_dec_threshold", *(double*)&v1);
                    result = sub_2EA54(3, &__s, 0);
                    if(gvar_7EB9C > 3) {
                        snprintf(&__s, 0x800, "%-40s : %d\n", "freq_tuning_fine_step", *(int*)(*(int*)gvar_4FCB44 + 56));
                        result = sub_2EA54(3, &__s, 0);
                        if(gvar_7EB9C > 3) {
                            snprintf(&__s, 0x800, "%-40s : %d\n", "freq_tuning_fine_count", *(int*)(*(int*)gvar_4FCB44 + 60));
                            return sub_2EA54(3, &__s, 0);
                        }
                    }
                }
            }
        }
    }
    return result;
}
