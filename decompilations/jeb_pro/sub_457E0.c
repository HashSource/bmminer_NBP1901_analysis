int sub_457E0(int* param0, int param1) {
    int v0;
    pthread_mutex_lock(&g50511C);
    sub_40390(28, *param0);
    sub_40390(29, *(param0 + SOCK_STREAM));
    sub_40390(30, *(param0 + 2));
    sub_40314(28, &v0);
    sub_40314(29, &v0);
    sub_40314(30, &v0);
    sub_40314(27, &v0);
    sub_445E0((param1 * &ELFHeader) | (v0 & 0xfff0ffff) | 0x80800000);
    return pthread_mutex_unlock(&g50511C);
}
