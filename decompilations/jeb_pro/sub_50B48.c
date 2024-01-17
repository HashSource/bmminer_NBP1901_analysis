int sub_50B48(int param0, int param1) {
    char v0;
    sub_51A20(0, param0, 0, 88, &v0);
    char v1 = (uint8_t)(v1 & 0xf) | ((uint8_t)(param1 & 0xf) << 4);
    return sub_4FA10(param0, SOCK_STREAM, 0, 88, v0);
}
