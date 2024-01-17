int sub_45B74() {
    char __info;
    int v0;
    char v1;
    uint32_t v2 = sub_40408();
    gvar_505108 = v2;
    gvar_50510C = v2 + 0x200000;
    gvar_505114 = v2 + 0x210000;
    int v3 = sysinfo(&__info);
    if(v0 > 1000000000) {
        v3 = 0x3f000000;
        gvar_505118 = 0x3f000000;
    }
    else if(v0 > 500000000) {
        v3 = 0x1f000000;
        gvar_505118 = 0x1f000000;
    }
    else {
        int v4 = 200000000;
        if(v0 <= 200000000) {
            v4 = 0x7000000;
        }
        else {
            v3 = 0xf000000;
        }
        if(v0 <= 200000000) {
            v3 = v4;
        }
        else {
            gvar_505118 = (uint32_t)v3;
        }
        if(v0 <= 200000000) {
            gvar_505118 = (uint32_t)v4;
        }
    }
    gvar_505110 = v2 + 0x200000;
    sub_44C24(v3);
    sub_40390(41, (int)(gvar_505118 + 0x200000));
    sub_40314(41, &v1);
    sub_45ACC();
    sub_45B34();
    return 0;
}
