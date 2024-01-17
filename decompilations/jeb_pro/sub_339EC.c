int sub_339EC(int param0, int param1, size_t __n1, int param3) {
    int v0;
    short v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int __ptr1;
    short v6;
    size_t __n = gvar_7EB9C;
    gvar_7EDC8 = 2;
    int v7 = SOCK_STREAM;
    gvar_482A71 = 1;
    if(__n > 3) {
        param0 = sub_31C64();
        __n = gvar_7EB9C;
        if(__n <= 3) {
            goto loc_33A3C;
        }
        else {
            snprintf(&__ptr1, 0x800, "Miner compile time: %s type: %s\n", 0x80ba0, 527520);
            param0 = sub_2E584(3, &__ptr1, 0);
            __n = gvar_7EB9C;
            v7 = gvar_80DA0;
            if(v7 != 0 && __n <= 3) {
            loc_33A40:
                int v8 = sub_3FD74(param0, v7, __n);
                if(v8 == 0) {
                loc_33C10:
                    sub_140E4();
                    sub_141B4();
                    sub_42728();
                    sub_42778();
                    gvar_7EB5C = 1;
                    sub_24364();
                    sub_25284();
                    int v9 = sub_1B4AC();
                    if(v9 == 0) {
                        sub_3345C();
                        sub_13FB0(100);
                        sub_32BD0();
                        sub_45B74();
                        sub_324A8();
                        int v10 = sub_1E28C();
                        if(v10 == 0) {
                            if(gvar_7EB9C <= 3) {
                                return -1;
                            }
                            __ptr1 = 1663070030;
                            v5 = 1852399976;
                            v4 = 1769497888;
                            v3 = 0x202c7473;
                            v2 = 1953069157;
                            v1 = 2606;
                            char v11 = 0;
                            sub_2E584(3, &__ptr1, 0);
                            return -1;
                        }
                        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
                            int v12 = sub_1E28C();
                            snprintf(&__ptr1, 0x800, "chain num = %d", v12);
                            sub_2E584(5, &__ptr1, 0);
                        }
                        int v13 = 0;
                        do {
                            int v14 = v13;
                            int v15 = (int)(uint8_t)v13;
                            ++v13;
                            int v16 = sub_1E29C(v14);
                            if(v16 != 0) {
                                sub_5198C(v15, param1, (int)__n1, param3);
                            }
                        }
                        while(v13 != 4);
                        sub_17EF8();
                        int v17 = sub_17F7C();
                        if(v17 == 0) {
                            if(gvar_7EDC8 != SOCK_STREAM) {
                                sub_356C4(3, 0xFF);
                                if(gvar_7EB9C <= 3) {
                                    goto loc_33DB4;
                                }
                                else {
                                    goto loc_33D88;
                                }
                            }
                            if(gvar_7EB9C > 3) {
                            loc_33D88:
                                __ptr1 = 0x74786946;
                                v5 = 543519349;
                                v4 = 0x61746164;
                                v3 = 1634692128;
                                v2 = 0x61662064;
                                *(int*)&v1 = 0x64656c69;
                                v0 = 2019893292;
                                *(int*)&v6 = 170816617;
                                char v18 = 0;
                                sub_2E584(3, &__ptr1, 0);
                                goto loc_33DB4;
                            }
                        }
                        else {
                        loc_33DB4:
                            if(gvar_7EDC8 == 0) {
                                FILE* ptr0 = sub_36218();
                                if(ptr0 != 0) {
                                    char v19 = sub_17F90();
                                    if(v19 == 0 && gvar_7EB9C > 3) {
                                        __ptr1 = 0x656e694d;
                                        v5 = 1633951858;
                                        v4 = 1814061428;
                                        v3 = 543449455;
                                        v2 = 1818845542;
                                        *(int*)&v1 = 0x202c6465;
                                        v0 = 1953069157;
                                        v6 = 2606;
                                        char v20 = 0;
                                        sub_2E584(3, &__ptr1, 0);
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
                return 0;
            }
            else if(v7 != 0) {
                snprintf(&__ptr1, 0x800, "Miner sn: %s\n", &gvar_80DA0);
                param0 = sub_2E584(3, &__ptr1, 0);
                __n = gvar_7EB9C;
            }
            goto loc_33AF4;
        }
    }
    else {
    loc_33A3C:
        if(gvar_80DA0 != 0) {
            goto loc_33A40;
        }
    loc_33AF4:
        if(__n <= 3) {
            goto loc_33A40;
        }
        memcpy(&__ptr1, "commit version: dd076742 2022-10-27 22:42:25, build by: jenkins 2022-12-06 16:28:38\n", 85);
        param0 = sub_2E584(3, &__ptr1, 0);
        if(gvar_7EB9C <= 3) {
            goto loc_33A40;
        }
        snprintf(&__ptr1, 0x800, "opt_multi_version     = %d\n", gvar_7EB58);
        param0 = sub_2E584(3, &__ptr1, 0);
        if(gvar_7EB9C <= 3) {
            goto loc_33A40;
        }
        snprintf(&__ptr1, 0x800, "opt_bitmain_ab        = %d\n", gvar_7EB5C);
        param0 = sub_2E584(3, &__ptr1, 0);
        if(gvar_7EB9C <= 3) {
            goto loc_33A40;
        }
        snprintf(&__ptr1, 0x800, "mid_auto_gen          = %d\n", 0);
        param0 = sub_2E584(3, &__ptr1, 0);
        if(gvar_7EB9C <= 3) {
            goto loc_33A40;
        }
        snprintf(&__ptr1, 0x800, "opt_bitmain_work_mode = %d\n", *(int*)&gvar_80FB4);
        int v21 = sub_2E584(3, &__ptr1, 0);
        int v22 = sub_3FD74(v21, param1, __n1);
        if(v22 == 0) {
            goto loc_33C10;
        }
    }
    return 0;
}
