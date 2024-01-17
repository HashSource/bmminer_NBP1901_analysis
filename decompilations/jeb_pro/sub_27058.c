int sub_27058() {
    int v0;
    char v1;
    uint32_t v2 = gvar_7EB60;
    uint32_t v3 = gvar_7EB70;
    uint32_t v4 = gvar_7EB64;
    int v5 = (int)gvar_482A6C;
    uint32_t v6 = (gvar_482A8C - v2) * v3;
    int v7 = 0;
    gvar_482A8C = (int)(~(v6 >> 31) + ((uint32_t)(((int64_t)v6 * 1374389535L) >>> 32L) >> 5) + (v2 + SOCK_STREAM)) / 10 * 10;
    gvar_482A6C = ((uint32_t)((v5 - v4) * v3) / 100 + v4) / 5 * 5;
    do {
        int v8 = sub_1E29C(v7);
        if(v8 != 0) {
            char* ptr0 = (char*)gvar_482A6C;
            int v9 = gvar_482A70;
            *(int*)&v1 = 0;
            sub_1AAE4(v7, v9, v5, ptr0, 0);
        }
        ++v7;
    }
    while(v7 != 4);
    uint32_t v10 = sub_19AB4();
    int v11 = (int)gvar_482A8C;
    int v12 = v11 - v10;
    if(v12 < 0) {
        v12 = 0 - v12;
    }
    if((uint32_t)v12 / 20 <= SOCK_STREAM) {
        v0 = 0;
    }
    else {
        int v13 = SOCK_STREAM;
        while(SOCK_STREAM) {
            int v14 = v13 * 5;
            ++v13;
            v0 = v11 > (int)v10 ? v14 * 4 + v10: (int)(v10 - v14 * 4);
            sub_195A8(v0);
            usleep(&loc_30D40);
            v11 = gvar_482A8C;
            if((uint32_t)v12 / 20 != v13) {
                continue;
            }
            break;
        }
    }
    if(v11 != v0) {
        sub_195A8(v11);
    }
    return sub_1EAD4(15);
}
