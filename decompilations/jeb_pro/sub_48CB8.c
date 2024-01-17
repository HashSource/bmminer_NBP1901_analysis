int sub_48CB8(int param0) {
    int result;
    char __ptr1;
    if(gvar_505180 == 0) {
        result = sub_48ABC();
        if(result < 0) {
            snprintf(&__ptr1, 0x800, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage_by_n");
            sub_2E584(0, &__ptr1, 0);
            return result;
        }
    }
    return sub_48834(gvar_50517C, param0);
}
