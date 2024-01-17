int sub_3FFEC(int param0) {
    if(param0 == SOCK_STREAM) {
        return sub_40ED4(0x3bb, 0);
    }
    else if(param0 != 0) {
        int v0 = sub_40ED4(954, 0);
        int v1 = sub_40ED4(0x3bb, 0);
        return v1 + v0;
    }
    return sub_40ED4(954, 0);
}
