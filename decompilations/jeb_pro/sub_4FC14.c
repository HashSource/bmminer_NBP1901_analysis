int sub_4FC14(int param0, int param1, int param2) {
    int v0;
    sub_4FA10(param0, param1, param2, 188, 320);
    usleep(10000);
    if(param1 == 0) {
        sub_51A20(SOCK_STREAM, param0, param2, 176, &v0);
    }
    else {
        sub_51A20(0, param0, 0, 176, &v0);
    }
    sub_4FA10(param0, param1, param2, 176, 545009931);
    usleep(10000);
    return 0;
}
