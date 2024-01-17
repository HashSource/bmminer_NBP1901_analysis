void sub_35A28() {
    char __ptr1;
    char v0;
    if(gvar_7EB9C > 4) {
        *(int*)&__ptr1 = '[';
        int v1 = 0x205d4755;
        int v2 = 0x76636552;
        int v3 = 0x6e6f6e20;
        int v4 = 0x61206563;
        int v5 = 0x7220646e;
        int v6 = 0x73696765;
        int v7 = 779249012;
        short v8 = 10;
        sub_2E584(4, &__ptr1, 0);
    }
    int v9 = sub_452B0();
    sub_452D0(v9 | &ELFHeader);
    sub_2BDD0();
    while(SOCK_STREAM) {
        int v10 = sub_44D3C();
        if((uint8_t)(v10 >>> SOCK_STREAM) != 0) {
            int v11 = 0;
        loc_35AC8:
            do {
                sub_44D94((int*)&__ptr1);
                if(v0 >= 0) {
                    if(gvar_5945C0 > 510 || gvar_5945B8 > 510) {
                        ++v11;
                        sub_2BDD0();
                        if((uint32_t)(uint8_t)(v10 >>> SOCK_STREAM) != v11) {
                            goto loc_35AC8;
                        }
                        goto loc_35B08;
                    }
                    else {
                        sub_39128((int)&__ptr1);
                        goto loc_35AB8;
                    }
                }
                sub_39018();
            loc_35AB8:
                ++v11;
            }
            while((uint32_t)(uint8_t)(v10 >>> SOCK_STREAM) != v11);
        loc_35B08:
        }
        usleep(1000);
    }
}
