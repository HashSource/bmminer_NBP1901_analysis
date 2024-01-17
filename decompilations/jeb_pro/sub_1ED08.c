int sub_1ED08() {
    char __ptr1;
    if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
        snprintf(&__ptr1, 0x800, "--- %s\n", "dhash_chip_set_addr_all");
        sub_2E584(7, &__ptr1, 0);
    }
    int v0 = 0;
    do {
        int v1 = sub_1E29C(v0);
        if(v1 != 0) {
            sub_4FE70((int)(uint8_t)v0);
            sub_304D4(30);
            uint32_t v2 = sub_1E160();
            sub_4FF50((int)(uint8_t)v0, (int)(uint8_t)v2);
        }
        ++v0;
    }
    while(v0 != 4);
    return sub_304D4(10);
}
