int sub_50FA4(int param0, int param1) {
    return sub_4FA10(param0, SOCK_STREAM, 0, 144, ((uint32_t)((uint8_t)(param1 & 0x7) - SOCK_STREAM) * 4) | 0x38001801);
}
