int sub_329DC() {
    char __ptr1;
    int v0 = 0;
    int result = 0;
    do {
        int v1 = sub_1E29C(v0);
        if(v1 != 0) {
            int v2 = 0;
            do {
                sub_4594C(v0);
                sleep(3);
                sub_4672C((int)(uint8_t)v0);
                sub_304D4(1000);
                if(gvar_80FB0 != 0) {
                    if(gvar_7EB9C > 3) {
                        snprintf(&__ptr1, 0x800, "pic enabled for chain %d, press anykey to continue...", v0);
                        sub_2E584(3, &__ptr1, 0);
                    }
                    _IO_getc();
                }
                sub_45990(v0);
                sub_304D4(200);
                sub_4594C(v0);
                sleep(1);
                sub_45990(v0);
                sub_304D4(200);
                sub_2BE40(v0, 0);
                int v3 = sub_1E67C(v0);
                if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, "Chain[%d]: find %d asic, times %d\n", v0, v3, v2);
                    sub_2E584(3, &__ptr1, 0);
                }
                uint32_t v4 = sub_1E0F0();
                ++v2;
                if(v3 == v4) {
                    break;
                }
                sub_46900((int)(uint8_t)v0);
            }
            while(v2 != 3);
            int v5 = sub_1E67C(v0);
            uint32_t v6 = sub_1E0F0();
            if(v6 != v5) {
                if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, "Chain %d only find %d asic, will power off hash board %d\n", v0, v5, v0);
                    sub_2E584(3, &__ptr1, 0);
                }
                result = -1;
                sub_46900((int)(uint8_t)v0);
                sub_1E200(v0, 0);
            }
        }
        ++v0;
    }
    while(v0 != 4);
    return result;
}
