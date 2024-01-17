int sub_1FA2C(int param0) {
    char __ptr1;
    if(param0 != 0) {
        size_t v0 = sub_4E540();
        uint32_t v1 = sub_1E2FC();
        if((int)v1 > 0) {
            int v2 = 0;
            do {
                int v3 = v2;
                ++v2;
                int v4 = sub_1E43C(v3);
                size_t v5 = sub_4E990(v4, v4 >> 31);
                sub_4F494((int*)v0, (int)v5);
            }
            while(v2 != v1);
        }
        param0 = sub_4EFD4((int*)param0, &g61B1C, (void*)v0);
    }
    else if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
        snprintf(&__ptr1, 0x800, "%s: input bad json param\n", "api_miner_fan_speed");
        param0 = sub_2E584(3, &__ptr1, 0);
    }
    return param0;
}
