int sub_45A34(int param0) {
    int v0 = 0;
    sub_40314(0, &v0);
    int v1 = v0;
    if(param0 == 0) {
        v1 &= 0x7fffffff;
    }
    else if(param0 == SOCK_STREAM) {
        v1 |= 0x80000000;
    }
    sub_40390(0, v1);
    return 0;
}
