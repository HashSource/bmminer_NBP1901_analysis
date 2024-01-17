int sub_206B4(int param0, int param1) {
    char __ptr1;
    if(param0 == 0 || (uint32_t)param1 > 3) {
        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
            snprintf(&__ptr1, 0x800, "%s: input bad param\n", "api_miner_chain_eeprom");
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        return param0;
    }
    int v0 = sub_18B30(param1);
    int v1 = v0 == 0 ? sub_4EB54(): sub_4EB48();
    return sub_4EFD4((int*)param0, "eeprom", (void*)v1);
}
