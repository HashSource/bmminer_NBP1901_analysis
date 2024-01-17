void sub_2647C(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    uint32_t v2;
    prctl(PR_SET_NAME, "chk_sys");
    uint32_t __s1 = sub_1E0C0();
    int v3 = strcmp((char*)__s1, "BHB28601");
    if(v3 != 0) {
        sub_1E0C0();
    }
    time_t v4 = sub_26104();
    while(SOCK_STREAM) {
        uint32_t v5 = sub_31D38();
        if(v5 == 2) {
            time_t v6 = sub_26104();
            int v7 = (int)(v6 - v4);
            if((gvar_99EE08 | gvar_99EE0C) != 0 || (uint32_t)v7 > 1800) {
                time_t v8 = sub_26104();
                gvar_7FA3C = (uint32_t)v8;
                gvar_7FA08 = (uint32_t)v8;
                gvar_7FA40 = (uint32_t)v8;
                gvar_7FA38 = (uint32_t)v8;
                v2 = 1;
                pthread_setcancelstate(SOCK_STREAM, NULL);
                break;
            }
        }
        sub_304D4(10);
    }
loc_26548:
    do {
        int v9 = pthread_mutex_trylock(&g7FA44);
        if(v9 == 0) {
            if(gvar_7EB78 != 0) {
                sub_350E8();
            }
            pthread_mutex_unlock(&g7FA44);
        }
        ++v2;
        pthread_setcancelstate(0, NULL);
        pthread_testcancel();
        sub_304D4(1000);
        pthread_setcancelstate(SOCK_STREAM, NULL);
        v1 = v2 - v2 / 30 * 30;
    }
    while(v2 / 30 * 30 != v2);
    int v10 = sub_1E29C(v1);
    if(v10 == 0) {
    loc_265B4:
        do {
            ++v1;
            if(v1 == 4) {
                goto loc_26548;
            }
            v0 = sub_1E29C(v1);
        }
        while(v0 == 0);
    }
    uint32_t v11 = sub_1E160();
    sub_3EFF0(v1, (int)v11, param2, param3);
    goto loc_265B4;
}
