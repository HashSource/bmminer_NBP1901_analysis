int sub_513FC(int param0) {
    char v0;
    sub_51A20(0, param0, 0, 176, &v0);
    v0 &= 191;
    char v1 = v1 & 0xfb;
    char v2 = v2 & 0xdf;
    return sub_4FA10(param0, SOCK_STREAM, 0, 176, v0);
}
