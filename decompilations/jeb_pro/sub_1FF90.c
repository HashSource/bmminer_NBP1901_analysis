int sub_1FF90(int param0, int param1) {
    uint32_t v0;
    char __ptr1;
    if(param0 == 0 || (uint32_t)param1 > 3) {
        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
            snprintf(&__ptr1, 0x800, "%s: input bad param\n", "api_miner_chain_temp_pic");
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        return param0;
    }
    size_t v1 = sub_4E540();
    uint32_t __s1 = sub_1E0C0();
    int v2 = strcmp((char*)__s1, "BHB28601");
    if(v2 == 0) {
    loc_20060:
        v0 = sub_14434();
    }
    else {
        uint32_t __s1_1 = sub_1E0C0();
        int v3 = strcmp((char*)__s1_1, "BHB28501");
        if(v3 == 0) {
            goto loc_20060;
        }
        else {
            v0 = sub_1E19C();
        }
    }
    if((int)v0 > 0) {
        int v4 = 0;
        do {
            int v5 = (int)(uint8_t)v4;
            ++v4;
            int v6 = sub_152F0(param1, v5);
            size_t v7 = sub_4E990((int)(uint16_t)v6, (int)(uint16_t)v6 >> 31);
            sub_4F494((int*)v1, (int)v7);
        }
        while(v4 != v0);
    }
    return sub_4EFD4((int*)param0, "temp_pic", (void*)v1);
}
