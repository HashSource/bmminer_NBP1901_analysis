int sub_50C38(int param0, int param1) {
    char v0;
    char v1;
    char v2;
    sub_51A20(0, param0, 0, 24, &v2);
    if(param1 == 0) {
        v1 &= 191;
        v0 |= 240;
    }
    else {
        v1 |= 64;
        v0 = (uint8_t)(v0 & 0xf);
    }
    return sub_4FA10(param0, SOCK_STREAM, 0, 24, v2);
}
