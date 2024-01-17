int sub_44164(int param0) {
    int result;
    char __ptr1;
    if(param0 <= 15) {
        result = *(int*)(param0 * 8 + 0x505088);
        if(result != 0 || *((int*)(param0 * 8) + 0x141423) != 0) {
            result = sub_49574(result);
            *((int*)(param0 * 8) + 0x141423) = 0;
            *(int*)(param0 * 8 + 0x505088) = 0;
        }
        return result;
    }
    snprintf(&__ptr1, 0x800, "%s: Bad eeprom param, input chain is %d\n", "eeprom_close", param0);
    return sub_2E584(0, &__ptr1, 0);
}
