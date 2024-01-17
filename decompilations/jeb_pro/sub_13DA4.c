int sub_13DA4(int param0, uint32_t param1, size_t __n) {
    char __ptr1;
    uint32_t v0 = param1;
    if(param1 == 0) {
        sub_13CE0(param0);
        int v1 = sub_1E30C();
        uint32_t v2 = sub_1E2FC();
        if((int)v2 <= v1) {
            gvar_7F7A4 = v0;
        }
        else {
            ++gvar_7F7A4;
            while(SOCK_STREAM) {
                int v3 = (int)(uint8_t)v0;
                ++v0;
                uint32_t v4 = sub_1E2FC();
                if((int)v4 <= v3) {
                    break;
                }
                else if(gvar_7EB9C > 3) {
                    uint32_t v5 = gvar_7F7A4;
                    int v6 = sub_1E43C(v3);
                    snprintf(&__ptr1, 0x800, "conti_check_count:%d, fan_id = %d, fan_speed = %d\n", v5, v3, v6);
                    sub_2E584(3, &__ptr1, 0);
                }
            }
        }
        int v7 = sub_1E30C();
        uint32_t v8 = sub_1E2FC();
        if((int)v8 > v7 && gvar_7F7A4 > 9) {
        loc_13EE8:
            if(gvar_7EB9C > SOCK_STREAM) {
                int v9 = sub_1E30C();
                uint32_t v10 = sub_1E2FC();
                snprintf(&__ptr1, 0x800, "Error, fan lost, only find %d (< %d)\n", v9, v10);
                sub_2E584(SOCK_STREAM, &__ptr1, 0);
            }
            int v11 = 0;
            while(SOCK_STREAM) {
                int v12 = (int)(uint8_t)v11;
                ++v11;
                uint32_t v13 = sub_1E2FC();
                if((int)v13 <= v12) {
                    break;
                }
                else if(gvar_7EB9C > 3) {
                    int v14 = sub_1E43C(v12);
                    snprintf(&__ptr1, 0x800, "fan_id = %d, fan_speed = %d\n", v12, v14);
                    sub_2E584(3, &__ptr1, 0);
                }
            }
            sub_356C4(10, 0xFF);
            sub_20A08(1);
            sub_31D58(7, "fan lost", __n);
            return -1;
        }
    }
    else {
        int v15 = 10;
        do {
            sub_13CE0(param0);
            int v16 = sub_1E30C();
            uint32_t v17 = sub_1E2FC();
            if((int)v17 <= v16) {
                break;
            }
            sub_304D4(2000);
            --v15;
        }
        while(v15 != 0);
        int v18 = sub_1E30C();
        uint32_t v19 = sub_1E2FC();
        if((int)v19 > v18) {
            goto loc_13EE8;
        }
    }
    sub_20A08(0);
    return 0;
}
