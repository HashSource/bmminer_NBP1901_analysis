int sub_44358(int param0, int param1, int param2, int param3) {
    char __ptr1;
    if((uint32_t)param0 <= 15) {
        int v0 = param1;
        int v1 = param2;
        if(*(int*)(param0 * 8 + 0x50508c) == 0) {
            int result = sub_440E8(param0);
            if(result < 0) {
                snprintf(&__ptr1, 0x800, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", param0);
                sub_2E584(0, &__ptr1, 0);
                return result;
            }
        }
        if(param3 != 0) {
            int v2 = param3 + v1;
            do {
                int v3 = v1;
                int v4 = *(int*)(param0 * 8 + 0x505088);
                ++v1;
                uint8_t v5 = (uint8_t)v0;
                int v6 = sub_496F4(v4, &v5, SOCK_STREAM, v3, SOCK_STREAM);
                v0 = (uint32_t)((uint8_t)v0 + SOCK_STREAM);
                if(v6 == SOCK_STREAM && v1 == v2) {
                    goto loc_4442C;
                }
                else if(v6 != SOCK_STREAM) {
                    snprintf(&__ptr1, 0x800, "fail to read eeprom by iic, chain: %d, addr: %d\n", param0, v5);
                    sub_2E584(0, &__ptr1, 0);
                    return 0x80000100;
                }
            }
            while(SOCK_STREAM);
        }
    loc_4442C:
        usleep(500000);
        return 0;
    }
    snprintf(&__ptr1, 0x800, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", param0);
    sub_2E584(0, &__ptr1, 0);
    return 0x80000101;
}
