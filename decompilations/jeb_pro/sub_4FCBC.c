int sub_4FCBC(int param0, int param1, int param2, int param3) {
    char v0;
    sub_4FA10(param0, param1, param2, 188, 504);
    usleep(10000);
    if(param1 == 0) {
        sub_51A20(SOCK_STREAM, param0, param2, 176, &v0);
    }
    else {
        sub_51A20(0, param0, 0, 176, &v0);
    }
    char v1 = (v1 | 0x20) & 0x33;
    v0 = (v0 & 0xb4) | 0x43;
    char v2 = (v2 & 0xfb) | 0x78;
    uint8_t v3 = (uint8_t)((uint32_t)SOCK_STREAM | ((uint32_t)(((v3 | 0x30) >>> 4) & 0xfffffff) << 4));
    sub_4FA10(param0, param1, param2, 176, v0);
    usleep(10000);
    sub_4FA10(param0, param1, param2, 188, (uint32_t)(uint8_t)(param3 & 0x7) | ((uint32_t)63 << 3));
    usleep(10000);
    sub_4FA10(param0, param1, param2, 176, v0);
    usleep(10000);
    return 0;
}
