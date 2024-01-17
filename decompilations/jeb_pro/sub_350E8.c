int sub_350E8() {
    char __ptr1;
    int v0 = sub_1572C();
    int v1 = (int)gvar_7EDE4;
    int v2 = (uint32_t)(uint16_t)v0;
    int v3 = v2 - 10;
    int v4 = (int)(uint16_t)v3;
    int v5 = (int)(uint16_t)v3;
    if(v1 == 0xFF) {
        gvar_7EDE4 = (uint16_t)v4;
        goto loc_35250;
    }
    else {
        if(v1 - v4 <= 5) {
            goto loc_35250;
        }
        ++gvar_482A90;
        goto loc_35144;
    loc_35250:
        gvar_482A90 = 0;
    }
loc_35144:
    if((int)gvar_482A8C > 0 && *(int*)&gvar_80FB4 != SOCK_STREAM) {
        if((v4 > 19 && ((short)gvar_482A90 <= SOCK_STREAM || v2 - 21 > 8))) {
            if(v2 - 30 <= 21) {
                uint32_t v6 = sub_19AB4();
                v18 = gvar_482A8C;
                if(v6 - 19 > v18) {
                    do {
                        v6 -= 20;
                        sub_195A8((int)v6);
                        usleep(&loc_30D40);
                        v18 = gvar_482A8C;
                    }
                    while(v6 - 19 > v18);
                }
                if(v18 == v6) {
                    goto loc_35234;
                }
                else {
                    goto loc_352B0;
                }
            }
            uint32_t __s1 = sub_1E0C0();
            int v7 = strcmp((char*)__s1, "NBS1902L");
            if(v7 != 0) {
                v5 = v4 + 10;
            }
            if(v5 <= 49) {
                goto loc_35234;
            }
            uint32_t v8 = sub_19AB4();
            v19 = gvar_482A8C - 20;
            if(v8 == v19) {
                goto loc_35234;
            }
            v18 = v19;
        loc_352B0:
            sub_195A8(v18);
            gvar_7EDE4 = (uint16_t)v4;
            return 0;
        }
        uint32_t v9 = sub_19AB4();
        int v10 = 100;
        int v11 = (20 - v4) * 100;
        int v12 = (int)v9;
        if(v11 < 4000) {
            v10 = v11 / 40;
        }
        if(gvar_7EB9C > 4) {
            uint32_t v13 = gvar_482A8C;
            int v14 = v10;
            uint32_t v15 = v13;
            int v16 = v12 - v13 + v10;
            int v17 = v12;
            if(v16 < 0) {
                v16 = 0 - v16;
            }
            snprintf(&__ptr1, 0x800, "curr_vol = %d, g_voltage = %d,compensate_voltage = %d, abs = %d", v17, v15, v14, v16);
            sub_2E584(4, &__ptr1, 0);
        }
        int v18 = (int)(gvar_482A8C + v10);
        uint32_t v19 = (uint32_t)(v12 - v18);
        if(v19 >= 0x80000000) {
            v19 = 0 - v19;
        }
        if((int)v19 > 19) {
            int v20 = v12 + 49;
            if(v18 > v20) {
                do {
                    int v21 = sub_19AC4();
                    int v22 = v20;
                    v20 += 20;
                    if(v21 > v22) {
                        v12 += 20;
                        sub_195A8(v12);
                        usleep(&loc_30D40);
                        v18 = gvar_482A8C + v10;
                        if(v18 <= v20) {
                            goto loc_35230;
                        }
                    }
                    else {
                        v18 = gvar_482A8C + v10;
                        goto loc_35230;
                    }
                }
                while(SOCK_STREAM);
            loc_35230:
            }
            if(v18 != v12) {
                goto loc_352B0;
            }
        }
    loc_35234:
        gvar_7EDE4 = (uint16_t)v4;
    }
    return 0;
}
