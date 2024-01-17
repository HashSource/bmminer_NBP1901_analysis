void* sub_2FBFC() {
    int v0 = 1077;
    void* result = sub_2F490(1, 88, "util.c", "tq_new", 1077);
    *(void**)result = result;
    *(void**)((int)result + 4) = result;
    pthread_mutex_init((pthread_mutex_t*)((int)result + 12), NULL);
    pthread_cond_init((pthread_cond_t*)((int)result + 40), NULL);
    return result;
}
