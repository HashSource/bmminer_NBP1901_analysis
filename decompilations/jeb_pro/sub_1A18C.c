int sub_1A18C() {
    uint32_t v0;
    uint32_t v1;
    char v2;
    uint32_t v3 = sub_1A014();
    int __ptr1 = &loc_1ADB0;
    int v4 = &loc_19A28;
    int v5 = &loc_17318;
    int v6 = &loc_15F90;
    int result = &loc_1ADB0;
    int v7 = &sub_157C0;
    int v8 = &loc_14820;
    int v9 = &loc_13C68;
    int v10 = &loc_12CC8;
    int v11 = sub_5FAF8((int)v3, &loc_1ADB0);
    if(v11 == 0) {
        int* ptr0 = &v4;
        do {
            result = *ptr0;
            ++ptr0;
            int v12 = sub_5FAF8((int)v3, result);
            if(v12 != 0) {
                goto loc_1A23C;
            }
        }
        while(ptr0 != &v2);
        result = sub_1A014();
        goto loc_1A21C;
    }
    else {
    loc_1A23C:
        gvar_7F8DC = (uint32_t)result;
        v0 = sub_1A014();
    }
    if(result == 0) {
        result = v0;
    loc_1A21C:
        if(gvar_7EB9C <= 4) {
            gvar_7F8DC = (uint32_t)result;
            return result;
        }
        snprintf(&__ptr1, 0x800, "format sale hash failed %d\n", result);
        sub_2E584(4, &__ptr1, 0);
    }
    v1 = gvar_7EB9C;
    gvar_7F8DC = (uint32_t)result;
    if(v1 > 4) {
        snprintf(&__ptr1, 0x800, "sale_hash_rate = %d\n", result);
        sub_2E584(4, &__ptr1, 0);
        return (int)gvar_7F8DC;
    }
    return result;
}
