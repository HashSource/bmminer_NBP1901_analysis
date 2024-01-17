int sub_508E4(int param0, int param1, int param2, int param3) {
    short v0;
    sub_51A20(0, param0, 0, 164, &v0);
    uint8_t v1 = param1 != 0 ? v1 | 0x80: (uint8_t)((uint32_t)(v1 & 0x7f) | ((uint32_t)(param1 & SOCK_STREAM) << 7) | ((uint32_t)0 << 8));
    switch(param2) {
        case 4: {
            v1 &= 207;
            break;
        }
        case 8: {
            v1 = (uint32_t)(v1 & 0xf) | ((uint32_t)SOCK_STREAM << 4) | ((uint32_t)((v1 >>> 6) & 0x3ffffff) << 6);
            break;
        }
        case 12: {
            v1 = (uint32_t)(v1 & 0xf) | ((uint32_t)2 << 4) | ((uint32_t)((v1 >>> 6) & 0x3ffffff) << 6);
            break;
        }
        default: {
            return -1;
        }
    }
    v0 = (uint16_t)param3;
    v1 &= 191;
    return sub_4FA10(param0, SOCK_STREAM, 0, 164, v0);
}
