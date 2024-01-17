int sub_510D8(int param0, int param1) {
    int v0;
    sub_51A20(0, param0, 0, 144, &v0);
    return sub_4FA10(param0, SOCK_STREAM, 0, 144, (uint32_t)(uint16_t)v0 | ((uint32_t)(uint8_t)param1 << 16) | ((uint32_t)(uint8_t)(v0 >>> 24) << 24));
}
