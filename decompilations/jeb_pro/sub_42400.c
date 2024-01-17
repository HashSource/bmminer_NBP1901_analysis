int sub_42400() {
    char __attr;
    pthread_mutex_init(&g504FEC, NULL);
    gvar_505008 = 0;
    gvar_50500C = 0;
    gvar_505010 = 0;
    gvar_505014 = 0;
    gvar_505018 = 0;
    void* ptr0 = sub_432D0(&sub_42170, 0, 0);
    gvar_505004 = (uint32_t)ptr0;
    pthread_attr_init(&__attr);
    pthread_attr_setstacksize(&__attr, 0x200000);
    int result = pthread_create(&g50501C, &__attr, &sub_421C4, NULL);
    gvar_504FE8 = 1;
    return result;
}
