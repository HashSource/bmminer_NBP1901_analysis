int sub_50AE8(int param0, int param1, int param2) {
    char v0;
    sub_51A20(SOCK_STREAM, param0, param1, 88, &v0);
    char v1 = (uint8_t)(v1 & 0xf) | ((uint8_t)(param2 & 0xf) << 4);
    return sub_4FA10(param0, 0, param1, 88, v0);
}
