int sub_20398(int param0, int param1, int param2, int param3) {
    char __ptr1;
    int v0 = (uint32_t)param1 > 3;
    if(param0 == 0 || v0 != 0) {
        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
            snprintf(&__ptr1, 0x800, "%s: input bad param\n", "api_miner_chain_rate_array");
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        return param0;
    }
    size_t v1 = sub_4E540();
    uint32_t v2 = gvar_7F8F0;
    if(v2 > 23) {
        uint32_t v3 = v2 - v2 / 24 * 24;
        uint32_t v4 = v3 + 24;
        do {
            int v5 = (int)(v3 * 0xaaaaaaab);
            uint32_t v6 = v3 - v3 / 24 * 24;
            ++v3;
            int v7 = (param1 * 24 + v6) * 8 + &gvar_58E040;
            int v8 = sub_6015C(*(int*)v7, *(int*)(v7 + 4), v5, v7);
            size_t v9 = sub_4E990(v8, param1);
            sub_4F494((int*)v1, (int)v9);
        }
        while(v4 != v3);
    }
    else if(v2 != 0) {
        int* ptr0 = (int*)(param1 * 192 + &gvar_58E040);
        while(SOCK_STREAM) {
            int v10 = *ptr0;
            int v11 = *(ptr0 + SOCK_STREAM);
            ptr0 += 2;
            ++v0;
            int v12 = sub_6015C(v10, v11, param2, param3);
            size_t v13 = sub_4E990(v12, param1);
            sub_4F494((int*)v1, (int)v13);
            param3 = gvar_7F8F0;
            if((uint32_t)param3 > v0) {
                continue;
            }
            break;
        }
    }
    return sub_4EFD4((int*)param0, "rate_array", (void*)v1);
}
