int* sub_2B2F4() {
    pthread_mutex_lock(&g80F20);
    int* result = sub_316D8(gvar_80F3C, gvar_80F38);
    pthread_mutex_unlock(&g80F20);
    return result;
}
