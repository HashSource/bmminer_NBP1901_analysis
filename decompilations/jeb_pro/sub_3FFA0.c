int sub_3FFA0(int param0) {
    if(param0 == SOCK_STREAM) {
        return sub_40ED4(0x3bb, SOCK_STREAM);
    }
    else if(param0 != 0) {
        int v0 = sub_40ED4(954, SOCK_STREAM);
        int v1 = sub_40ED4(0x3bb, SOCK_STREAM);
        return v1 + v0;
    }
    return sub_40ED4(954, SOCK_STREAM);
}
