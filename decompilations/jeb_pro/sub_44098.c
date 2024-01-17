int sub_44098(int param0) {
    char __ptr1;
    snprintf(&__ptr1, 0x800, "%s: Bad eeprom param, input chain is %d\n", "eeprom_open", param0);
    sub_2E584(0, &__ptr1, 0);
    return 0x80000101;
}
