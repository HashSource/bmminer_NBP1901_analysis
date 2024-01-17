int sub_42694(int param0, int param1, size_t __n) {
    if(gvar_505020 == 0) {
        int v0 = sub_42368();
        sub_40794(v0);
        int v1 = sub_42368();
        sub_40AD8(v1, SOCK_STREAM, __n);
        int v2 = sub_42388(2);
        sub_40794(v2);
        int v3 = sub_42388(2);
        sub_40AD8(v3, SOCK_STREAM, __n);
        int v4 = sub_42388(0x100);
        sub_40794(v4);
        int v5 = sub_42388(0x100);
        sub_40AD8(v5, 0, __n);
        int v6 = sub_42388(0x101);
        sub_40794(v6);
        int v7 = sub_42388(0x101);
        sub_40AD8(v7, 0, __n);
        gvar_505020 = 1;
    }
    return 0;
}
