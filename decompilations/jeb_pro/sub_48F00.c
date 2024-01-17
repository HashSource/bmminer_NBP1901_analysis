int sub_48F00() {
    char __ptr1;
    if(gvar_505180 == 0) {
        int result = sub_48ABC();
        if(result < 0) {
            snprintf(&__ptr1, 0x800, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage");
            sub_2E584(0, &__ptr1, 0);
            return result;
        }
    }
    int v0 = sub_48D38();
    if((uint32_t)v0 <= 0xFF) {
        return sub_48834(gvar_50517C, (int)(uint8_t)v0);
    }
    return 0x80000301;
}
