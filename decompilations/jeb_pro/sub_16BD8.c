int sub_16BD8(int param0) {
    int v0;
    short __ptr1;
    __int128 v1;
    if(gvar_7EB9C > 3) {
        int v2 = param0;
        int v3 = (uint32_t)*(char*)param0 & 0xf;
        snprintf(&__ptr1, 0x800, "%-30s : 0x%04x\n", "key_version", v3);
        param0 = sub_2E584(3, &__ptr1, 0);
        if(gvar_7EB9C > 3) {
            v3 = (uint32_t)*(char*)v2 >>> 4;
            snprintf(&__ptr1, 0x800, "%-30s : 0x%04x\n", "algorithm_code", v3);
            param0 = sub_2E584(3, &__ptr1, 0);
            if(gvar_7EB9C > 3) {
                v3 = (uint32_t)*(char*)(v2 + SOCK_STREAM);
                snprintf(&__ptr1, 0x800, "%-30s : 0x%04x\n", "fixture_info_len", v3);
                param0 = sub_2E584(3, &__ptr1, 0);
                if(gvar_7EB9C <= 3) {
                    goto loc_16DCC;
                }
                else {
                    v3 = (uint32_t)*(char*)(v2 + 45);
                    snprintf(&__ptr1, 0x800, "%-30s : 0x%04x\n", "fixture_standard", v3);
                    param0 = sub_2E584(3, &__ptr1, 0);
                    if(gvar_7EB9C > 3) {
                        v3 = (uint32_t)*(char*)(v2 + 46);
                        snprintf(&__ptr1, 0x800, "%-30s : 0x%04x\n", "test_standard", v3);
                        param0 = sub_2E584(3, &__ptr1, 0);
                        goto loc_16D4C;
                    }
                }
            }
        }
        else {
        loc_16D4C:
            if(gvar_7EB9C > 3) {
                v3 = *(int*)(v2 + 31);
                snprintf(&__ptr1, 0x800, "%-30s : %s\n", "chip_technology", v3);
                param0 = sub_2E584(3, &__ptr1, 0);
                if(gvar_7EB9C <= 3) {
                    return param0;
                }
                v3 = (uint32_t)*(char*)(v2 + 2);
                snprintf(&__ptr1, 0x800, "%-30s : 0x%02x\n", "fixture_fmt_version", v3);
                param0 = sub_2E584(3, &__ptr1, 0);
            loc_16DCC:
                if(gvar_7EB9C <= 3) {
                    goto loc_16EDC;
                }
                else {
                    v3 = *(int*)(v2 + 3);
                    snprintf(&__ptr1, 0x800, "%-30s : %s\n", "SN", v3);
                    param0 = sub_2E584(3, &__ptr1, 0);
                    if(gvar_7EB9C <= 3) {
                        return param0;
                    }
                    int v4 = (uint32_t)*(char*)(v2 + 27);
                    v0 = (uint32_t)*(char*)(v2 + 28);
                    v3 = v4;
                    snprintf(&__ptr1, 0x800, "%-30s : 0x%02x-%02x\n", 0x60830, v3, v0);
                    param0 = sub_2E584(3, &__ptr1, 0);
                }
            }
            if(gvar_7EB9C > 3) {
                int v5 = (uint32_t)*(char*)(v2 + 29);
                v0 = (uint32_t)*(char*)(v2 + 30);
                v3 = v5;
                snprintf(&__ptr1, 0x800, "%-30s : 0x%02x-%02x\n", 396472, v3, v0);
                param0 = sub_2E584(3, &__ptr1, 0);
                if(gvar_7EB9C <= 3) {
                    return param0;
                }
                v3 = (uint32_t)*(short*)(v2 + 35);
                snprintf(&__ptr1, 0x800, "%-30s : %u\n", "hash_board_voltage", v3);
                param0 = sub_2E584(3, &__ptr1, 0);
            loc_16EDC:
                if(gvar_7EB9C <= 3) {
                    goto loc_16FE4;
                }
                else {
                    v3 = (uint32_t)*(short*)(v2 + 37);
                    snprintf(&__ptr1, 0x800, "%-30s : %u\n", "hash_board_freq", v3);
                    param0 = sub_2E584(3, &__ptr1, 0);
                    if(gvar_7EB9C <= 3) {
                        return param0;
                    }
                    VCVT.F64.F32((uint64_t)(((unsigned __int128)(uint64_t)v1 | ((unsigned __int128)*(int*)(v2 + 39) << 64) | ((unsigned __int128)(uint32_t)(v1 >>> 0x60X) << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(uint64_t)v1 | ((unsigned __int128)*(int*)(v2 + 39) << 64) | ((unsigned __int128)(uint32_t)(v1 >>> 0x60X) << 96)) >>> 0x40X));
                    *(double*)&v3 = (double)(((unsigned __int128)(uint64_t)v1 | ((unsigned __int128)*(int*)(v2 + 39) << 64) | ((unsigned __int128)(uint32_t)(v1 >>> 0x60X) << 96)) >>> 0x40X);
                    snprintf(&__ptr1, 0x800, "%-30s : %.2f\n", "nonce_response_rate", *(double*)&v3);
                    param0 = sub_2E584(3, &__ptr1, 0);
                }
            }
            if(gvar_7EB9C > 3) {
                v3 = (uint32_t)*(char*)(v2 + 43);
                snprintf(&__ptr1, 0x800, "%-30s : %u\n", "inlet_temperature", v3);
                param0 = sub_2E584(3, &__ptr1, 0);
                if(gvar_7EB9C <= 3) {
                    return param0;
                }
                v3 = (uint32_t)*(char*)(v2 + 44);
                snprintf(&__ptr1, 0x800, "%-30s : %u\n", "outlet_temperature", v3);
                param0 = sub_2E584(3, &__ptr1, 0);
            loc_16FE4:
                if(gvar_7EB9C <= 3) {
                    goto loc_17118;
                }
                else {
                    int v6 = (uint32_t)*(char*)(v2 + 20);
                    v0 = v6 & 0x7f;
                    v3 = v6 >>> 7;
                    snprintf(&__ptr1, 0x800, "%-30s : 0x%02x-%02x\n", "asic sensor", v3, v0);
                    param0 = sub_2E584(3, &__ptr1, 0);
                    if(gvar_7EB9C <= 3) {
                        return param0;
                    }
                    char* ptr0 = *(uint32_t*)(v2 + 21);
                    int v7 = (uint32_t)*(ptr0 + 3);
                    int v8 = (uint32_t)*(ptr0 + 2);
                    v0 = (uint32_t)*(ptr0 + SOCK_STREAM);
                    v3 = (uint32_t)*ptr0;
                    snprintf(&__ptr1, 0x800, "%-30s : 0x%02x-%02x-%02x-%02x\n", "asic sensor addr", v3, v0, v8, v7);
                    param0 = sub_2E584(3, &__ptr1, 0);
                }
            }
            if(gvar_7EB9C > 3) {
                int v9 = (uint32_t)*(char*)(v2 + 25);
                v0 = v9 & 0x7f;
                v3 = v9 >>> 7;
                snprintf(&__ptr1, 0x800, "%-30s : 0x%02x-%02x\n", "pic sensor", v3, v0);
                param0 = sub_2E584(3, &__ptr1, 0);
                if(gvar_7EB9C <= 3) {
                    return param0;
                }
                v3 = (uint32_t)*(char*)(v2 + 26);
                snprintf(&__ptr1, 0x800, "%-30s : 0x%02x\n", "pic sensor addr", v3);
                param0 = sub_2E584(3, &__ptr1, 0);
            loc_17118:
                if(gvar_7EB9C <= 3) {
                    goto loc_17218;
                }
                else {
                    v3 = (uint32_t)*(char*)(v2 + 15);
                    snprintf(&__ptr1, 0x800, "%-30s : bin%d\n", "chip_bin", v3);
                    param0 = sub_2E584(3, &__ptr1, 0);
                    if(gvar_7EB9C <= 3) {
                        return param0;
                    }
                    v3 = *(int*)(v2 + 16);
                    snprintf(&__ptr1, 0x800, "%-30s : %s\n", "FT", v3);
                    param0 = sub_2E584(3, &__ptr1, 0);
                }
            }
            if(gvar_7EB9C <= 3) {
                return param0;
            }
            v3 = *(int*)(v2 + 7);
            snprintf(&__ptr1, 0x800, "%-30s : %s\n", "chip_die", v3);
            param0 = sub_2E584(3, &__ptr1, 0);
            if(gvar_7EB9C <= 3) {
                return param0;
            }
            snprintf(&__ptr1, 0x800, "%-30s : %s\n", "chip_marking", *(int*)(v2 + 11));
            param0 = sub_2E584(3, &__ptr1, 0);
        loc_17218:
            if(gvar_7EB9C > 3) {
                __ptr1 = 10;
                return sub_2E584(3, &__ptr1, 0);
            }
        }
    }
    return param0;
}
