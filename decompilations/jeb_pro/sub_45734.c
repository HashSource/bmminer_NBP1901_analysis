int sub_45734(int param0) {
    int v0;
    pthread_mutex_lock(&g50511C);
    usleep(50000);
    sub_40314(27, &v0);
    sub_445E0((param0 & 0x3f) | (v0 & 0xffffffc0));
    return pthread_mutex_unlock(&g50511C);
}
