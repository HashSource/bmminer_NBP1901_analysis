int sub_1F984(int param0) {
    char __ptr1;
    if(param0 != 0) {
        int v0 = sub_1E30C();
        size_t v1 = sub_4E990(v0, v0 >> 31);
        param0 = sub_4EFD4((int*)param0, "fan_num", (void*)v1);
    }
    else if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
        snprintf(&__ptr1, 0x800, "%s: input bad json param\n", "api_miner_fan_num");
        param0 = sub_2E584(3, &__ptr1, 0);
    }
    return param0;
}
