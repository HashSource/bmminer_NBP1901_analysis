short sub_41474(int param0) {
    char __ptr1;
    int v0 = 0;
    switch(param0) {
        case 0: {
            sub_40314(88, &v0);
            return (uint32_t)(uint16_t)((v0 >>> 16) & 0x3ff);
        }
        case 1: {
            sub_40314(88, &v0);
            return (uint32_t)(uint16_t)(v0 & 0x3ff);
        }
        case 2: {
            sub_40314(89, &v0);
            return (uint32_t)(uint16_t)((v0 >>> 16) & 0x3ff);
        }
        case 3: {
            sub_40314(89, &v0);
            return (uint32_t)(uint16_t)(v0 & 0x3ff);
        }
        case 4: {
            sub_40314(90, &v0);
            return (uint32_t)(uint16_t)((v0 >>> 16) & 0x3ff);
        }
        case 5: {
            sub_40314(90, &v0);
            return (uint32_t)(uint16_t)(v0 & 0x3ff);
        }
        case 6: {
            sub_40314(91, &v0);
            return (uint32_t)(uint16_t)((v0 >>> 16) & 0x3ff);
        }
        case 7: {
            sub_40314(91, &v0);
            return (uint32_t)(uint16_t)(v0 & 0x3ff);
        }
        case 8: {
            sub_40314(92, &v0);
            return (uint32_t)(uint16_t)((v0 >>> 16) & 0x3ff);
        }
        case 9: {
            sub_40314(92, &v0);
            return (uint32_t)(uint16_t)(v0 & 0x3ff);
        }
        case 10: {
            sub_40314(93, &v0);
            return (uint32_t)(uint16_t)((v0 >>> 16) & 0x3ff);
        }
        case 11: {
            sub_40314(93, &v0);
            return (uint32_t)(uint16_t)(v0 & 0x3ff);
        }
        case 12: {
            sub_40314(94, &v0);
            return (uint32_t)(uint16_t)((v0 >>> 16) & 0x3ff);
        }
        case 13: {
            sub_40314(94, &v0);
            return (uint32_t)(uint16_t)(v0 & 0x3ff);
        }
    }
    snprintf(&__ptr1, 0x800, "%s: The uart%d is not supported!!!\n", "check_how_many_uart_data_in_fpga", param0);
    sub_2E584(0, &__ptr1, 0);
    return 0;
}
