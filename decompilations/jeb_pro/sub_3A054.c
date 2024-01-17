uint32_t sub_3A054(uint32_t param0, int param1) {
    __int128 v0;
    uint32_t v1;
    short __ptr1;
    __int128 v2;
    int64_t v3 = (uint64_t)v2;
    uint32_t v4 = gvar_4FCB3C;
    int v5 = (int)gvar_7EB9C;
    if(v4 != 0) {
        v4 = *(uint32_t*)(v4 + 4);
        if(v4 != 0) {
            uint32_t v6 = param0;
            int v7 = param1;
            if((uint32_t)v5 > 3) {
                snprintf(&__ptr1, 0x800, "chain %d stats:\n", v6);
                sub_2EA54(3, &__ptr1, 0);
                if(gvar_7EB9C > 3) {
                    uint32_t v8 = sub_1E130();
                    uint32_t v9 = sub_1E0F0();
                    v1 = v9 * v8 * 8;
                    snprintf(&__ptr1, 0x800, "%-30s : %d\n", "send_nonce_num", v1);
                    sub_2EA54(3, &__ptr1, 0);
                    if(gvar_7EB9C > 3) {
                        uint32_t v10 = v6 + 2107392;
                        v1 = *(uint32_t*)(v10 * 4 + v7);
                        snprintf(&__ptr1, 0x800, "%-30s : %d\n", "recv_nonce_num", v1);
                        sub_2EA54(3, &__ptr1, 0);
                        if(gvar_7EB9C <= 3) {
                            goto loc_3A558;
                        }
                        else {
                            v2 = (unsigned __int128)*(int*)(v10 * 4 + v7) | ((unsigned __int128)((v2 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
                            uint32_t v11 = sub_1E130();
                            VCVT.F32.U32((uint32_t)v2, (uint32_t)v2);
                            uint32_t v12 = sub_1E0F0();
                            v0 = (unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(v12 * v11 * 8) << 96);
                            VCVT.F32.S32((uint32_t)(v0 >>> 0x60X), (uint32_t)(v0 >>> 0x60X));
                            VDIV.F32((uint32_t)(v0 >>> 0x40X), (uint32_t)v2, (uint32_t)(v0 >>> 0x60X));
                            VCVT.F64.F32((uint64_t)(v0 >>> 0x40X), (uint32_t)(v0 >>> 0x40X));
                            *(double*)&v1 = (double)(v0 >>> 0x40X);
                            snprintf(&__ptr1, 0x800, "%-30s : %f\n", "nonce_return_rate", *(double*)&v1);
                            sub_2EA54(3, &__ptr1, 0);
                            if(gvar_7EB9C > 3) {
                                v1 = *(uint32_t*)((v6 + 2107908) * 4 + v7);
                                snprintf(&__ptr1, 0x800, "%-30s : %d\n", "nonce_num_repeated", v1);
                                sub_2EA54(3, &__ptr1, 0);
                                goto loc_3A4C0;
                            }
                        }
                    }
                }
                else {
                loc_3A4C0:
                    if(gvar_7EB9C > 3) {
                        v1 = *(uint32_t*)((v6 + 2107912) * 4 + v7);
                        snprintf(&__ptr1, 0x800, "%-30s : %d\n", "nonce_num_top_check_fail", v1);
                        sub_2EA54(3, &__ptr1, 0);
                        if(gvar_7EB9C <= 3) {
                            goto loc_3A0A0;
                        }
                        else {
                            v1 = *(uint32_t*)((v6 + 2107916) * 4 + v7);
                            snprintf(&__ptr1, 0x800, "%-30s : %d\n", "nonce_num_crc_err", v1);
                            sub_2EA54(3, &__ptr1, 0);
                        loc_3A558:
                            if(gvar_7EB9C <= 3) {
                                goto loc_3A688;
                            }
                            else {
                                v1 = *(uint32_t*)((v6 + 2107920) * 4 + v7);
                                snprintf(&__ptr1, 0x800, "%-30s : %d\n", "nonce_num_invalid", v1);
                                sub_2EA54(3, &__ptr1, 0);
                                if(gvar_7EB9C <= 3) {
                                    goto loc_3A0A0;
                                }
                                v1 = *(uint32_t*)((v6 + 2107924) * 4 + v7);
                                snprintf(&__ptr1, 0x800, "%-30s : %d\n", "nonce_num_hw", v1);
                                sub_2EA54(3, &__ptr1, 0);
                            }
                        }
                    }
                    if(gvar_7EB9C > 3) {
                        v1 = *(uint32_t*)((v6 + 2107928) * 4 + v7);
                        snprintf(&__ptr1, 0x800, "%-30s : %d\n", "nonce_num_extra", v1);
                        sub_2EA54(3, &__ptr1, 0);
                        if(gvar_7EB9C <= 3) {
                            goto loc_3A0A0;
                        }
                        v1 = *(uint32_t*)((v6 + 2107932) * 4 + v7);
                        snprintf(&__ptr1, 0x800, "%-30s : %d\n", "nonce_num_unknown_err", v1);
                        sub_2EA54(3, &__ptr1, 0);
                    loc_3A688:
                        if(gvar_7EB9C <= 3) {
                            goto loc_3A798;
                        }
                        else {
                            v1 = *(uint32_t*)(v6 * 4 + v7 + 0x80a884);
                            snprintf(&__ptr1, 0x800, "%-30s : %d\n", "invalid_asic_num", v1);
                            sub_2EA54(3, &__ptr1, 0);
                            if(gvar_7EB9C <= 3) {
                                goto loc_3A0A0;
                            }
                            v1 = *(uint32_t*)(v7 + 0x80a880);
                            snprintf(&__ptr1, 0x800, "%-30s : %d\n", "invalid_chain_num", v1);
                            sub_2EA54(3, &__ptr1, 0);
                        }
                    }
                    if(gvar_7EB9C <= 3) {
                        goto loc_3A0A0;
                    }
                    VCVT.F64.F32((uint64_t)(((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(v6 * 4 + v7 + 0x80a894) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(v6 * 4 + v7 + 0x80a894) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96)) >>> 0x40X));
                    *(double*)&v1 = (double)(((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*(int*)(v6 * 4 + v7 + 0x80a894) << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96)) >>> 0x40X);
                    snprintf(&__ptr1, 0x800, "%-30s : %.2f\n", "stddev", *(double*)&v1);
                    sub_2EA54(3, &__ptr1, 0);
                    if(gvar_7EB9C <= 3) {
                        goto loc_3A0A0;
                    }
                    __ptr1 = 10;
                    sub_2EA54(3, &__ptr1, 0);
                loc_3A798:
                    if(gvar_7EB9C > 3) {
                        snprintf(&__ptr1, 0x800, "Chain %d nonce:\n", v6);
                        sub_2E584(3, &__ptr1, 0);
                    }
                }
            }
        loc_3A0A0:
            param0 = sub_1E0F0();
            uint32_t v13 = param0;
            uint32_t v14 = gvar_7EB9C;
            if(param0 != 0) {
                uint32_t v15 = v6 * 0x400;
                int v16 = 0;
                do {
                    if(v14 > 3) {
                        v1 = *(uint32_t*)(v16 * 4 + v7 + (v15 + 0x809000));
                        snprintf(&__ptr1, 0x800, "IC[%03d]:%04d ", v16, v1);
                        sub_2EA54(3, &__ptr1, 0);
                    }
                    ++v16;
                    uint32_t v17 = sub_1E100();
                    param0 = sub_5FADC(v16, (int)v17);
                    v5 = param1;
                    v14 = gvar_7EB9C;
                    if(param1 == 0 && v14 > 3) {
                        __ptr1 = 10;
                        param0 = sub_2EA54(3, &__ptr1, v5);
                        v14 = gvar_7EB9C;
                    }
                }
                while(v16 != v13);
            }
            if(v14 <= 3 && *(int*)gvar_4FCB3C == 161) {
                return param0;
            }
            else if(v14 > 3) {
                __ptr1 = 10;
                param0 = sub_2EA54(3, &__ptr1, 0);
                if(*(int*)gvar_4FCB3C == 161) {
                    return param0;
                }
                if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, "Chain %d domain:\n", v6);
                    sub_2EA54(3, &__ptr1, 0);
                }
            }
            int v18 = 0;
            int v19 = 8430608;
            uint32_t v20 = v6 * 0x100;
            uint32_t v21 = v6 * 64;
            param0 = sub_1E0E0();
            if(param0 != 0) {
                do {
                    uint32_t v22 = sub_1E150();
                    uint32_t v23 = v22 * v18;
                    int v24 = 0;
                    uint32_t v25 = (v23 + v21) * 4;
                    uint32_t v26 = sub_1E150();
                    while(v26 > v24) {
                        if(gvar_7EB9C > 3) {
                            v1 = *(uint32_t*)(v24 * 4 + v25 + (v7 + 0x80a010));
                            snprintf(&__ptr1, 0x800, "D[%02d]:%04d ", v24 + v23, v1);
                            sub_2EA54(3, &__ptr1, 0);
                        }
                        ++v24;
                        v26 = sub_1E150();
                    }
                    uint32_t v27 = sub_1E150();
                    if((int)v27 <= SOCK_STREAM) {
                    loc_3A2C8:
                        if(gvar_7EB9C > 3) {
                            __ptr1 = 10;
                            sub_2EA54(3, &__ptr1, 0);
                        }
                    }
                    else if(gvar_7EB9C > 3) {
                        v1 = *(uint32_t*)(v18 * 4 + v7 + (v20 + v19));
                        snprintf(&__ptr1, 0x800, "D_BIG[%02d]:%05d", v18);
                        sub_2EA54(3, &__ptr1, 0);
                        goto loc_3A2C8;
                    }
                    ++v18;
                    param0 = sub_1E0E0();
                }
                while(param0 > v18);
            }
            if(gvar_7EB9C <= 3) {
                return param0;
            }
            __ptr1 = 0xa0a;
            char v28 = 0;
            return sub_2EA54(3, &__ptr1, 0);
        }
    }
    if((uint32_t)v5 <= 3) {
        return param0;
    }
    *(int*)&__ptr1 = 'H';
    int v29 = 0x6920656c;
    int v30 = 0x554e2073;
    int v31 = 0xa2e4c4c;
    char v32 = 0;
    return sub_2E584(3, &__ptr1, 0);
}
