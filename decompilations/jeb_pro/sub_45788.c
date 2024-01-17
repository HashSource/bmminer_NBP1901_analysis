int sub_45788(int param0, int param1) {
    int v0;
    pthread_mutex_lock(&g50511C);
    sub_40314(27, &v0);
    int v1 = (param0 * &ELFHeader) | (v0 & 0xfff0ffff);
    int v2 = param1 == 0 ? v1 & 0xffbfffff: v1 | 0xc00000;
    if(param1 == 0) {
        v2 |= 0x800000;
    }
    sub_445E0(v2);
    return pthread_mutex_unlock(&g50511C);
}
