void sub_2600C(int param0, int param1) {
    char v0;
    char v1;
    int v2 = sub_452B0();
    sub_452D0(v2 | &ELFHeader);
    prctl(PR_SET_NAME, "nonce_reg_process");
    while(SOCK_STREAM) {
        int v3 = sub_44D3C();
        if(v3 >>> SOCK_STREAM != 0) {
            int v4 = 0;
        loc_26064:
            do {
                sub_44D94((int*)&v0);
                ++v4;
                if(v1 < 0) {
                    sub_2C5E8(&v0, param1);
                    if(v3 >>> SOCK_STREAM != v4) {
                        goto loc_26064;
                    }
                    goto loc_2608C;
                }
                else {
                    sub_2C96C(&v0);
                }
            }
            while(v3 >>> SOCK_STREAM != v4);
        loc_2608C:
        }
        sub_304D4(SOCK_STREAM);
    }
}
