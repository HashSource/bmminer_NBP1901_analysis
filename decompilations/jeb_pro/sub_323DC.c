int sub_323DC() {
    int result;
    char __ptr1;
    int v0 = 0;
    do {
        result = sub_1E29C(v0);
        if(result != 0 && gvar_7EB9C > 3) {
            short v1 = sub_18094(v0);
            snprintf(&__ptr1, 0x800, "Chain [%d] PCB Version: 0x%04x\n", v0, v1);
            sub_2E584(3, &__ptr1, 0);
            result = v0;
            if(gvar_7EB9C > 3) {
                short v2 = sub_18128(result);
                snprintf(&__ptr1, 0x800, "Chain [%d] BOM Version: 0x%04x\n", v0, v2);
                result = sub_2E584(3, &__ptr1, 0);
            }
        }
        ++v0;
    }
    while(v0 != 4);
    return result;
}
