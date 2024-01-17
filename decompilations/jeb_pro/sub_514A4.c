int sub_514A4(int param0) {
    char v0;
    sub_51A20(0, param0, 0, 176, &v0);
    v0 |= 16;
    sub_4FA10(param0, SOCK_STREAM, 0, 176, v0);
    usleep(30000);
    return 0;
}
