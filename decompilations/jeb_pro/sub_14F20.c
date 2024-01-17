int sub_14F20() {
    int v0 = 0;
    do {
        int v1 = sub_1E29C(v0);
        if(v1 != 0) {
            int v2 = 0;
            uint32_t v3 = sub_14434();
            while((int)v3 > v2) {
                uint32_t v4 = sub_1E170();
                if(v4 != 0) {
                    sub_51164((int)(uint8_t)v0, (int)((uint8_t)*(int*)(v2 * 4 + gvar_7F7B4) * (uint8_t)gvar_7F7B0));
                    usleep(10000);
                }
                ++v2;
                v3 = sub_14434();
            }
        }
        ++v0;
    }
    while(v0 != 4);
    return 0;
}
