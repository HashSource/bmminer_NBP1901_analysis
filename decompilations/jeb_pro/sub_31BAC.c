int sub_31BAC() {
    int v0;
    char __ptr1;
    int v1 = 0;
    int v2 = 0;
    do {
        int v3 = sub_1E29C(v2);
        if(v3 != 0) {
            int v4 = sub_18654(v2, gvar_80FB4, &v0);
            if(v4 == 0 && v1 < v0) {
                v1 = v0;
            }
        }
        ++v2;
    }
    while(v2 != 4);
    if(gvar_7EB9C <= 4) {
        return v1 != 0 ? v1: -1;
    }
    snprintf(&__ptr1, 0x800, "max voltage in eeprom = %d\n", v1);
    sub_2E584(4, &__ptr1, 0);
    return v1 != 0 ? v1: -1;
}
