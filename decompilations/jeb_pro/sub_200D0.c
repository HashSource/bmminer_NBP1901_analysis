int sub_200D0(int param0, int param1) {
    uint32_t v0;
    char __ptr1;
    int v1 = (uint32_t)param1 > 3;
    if(param0 == 0 || v1 != 0) {
        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
            snprintf(&__ptr1, 0x800, "%s: input bad param\n", "api_miner_chain_temp_chip");
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        return param0;
    }
    size_t v2 = sub_4E540();
    if(*(int*)&gvar_80FB4 == SOCK_STREAM || (int)gvar_482A8C <= 0) {
        v0 = sub_1E19C();
        while(v1 < (int)v0) {
            int v3 = sub_152F0(param1, (int)(uint8_t)v1);
            ++v1;
            size_t v4 = sub_4E990((int)(uint16_t)v3, (int)(uint16_t)v3 >> 31);
            sub_4F494((int*)v2, (int)v4);
            v0 = sub_1E19C();
        }
    }
    else {
        while(SOCK_STREAM) {
            v0 = sub_14434();
            int v5 = v1;
            int v6 = (int)(uint8_t)v1;
            ++v1;
            if((int)v0 <= v5) {
                break;
            }
            int v7 = sub_153A0(param1, v6);
            size_t v8 = sub_4E990((int)(uint16_t)v7, (int)(uint16_t)v7 >> 31);
            sub_4F494((int*)v2, (int)v8);
        }
    }
    return sub_4EFD4((int*)param0, "temp_chip", (void*)v2);
}
