int sub_25284() {
    int __ptr1;
    char __attr;
    char __newthread;
    if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
        __ptr1 = 1918989427;
        int v0 = 0x68742074;
        int v1 = 1952981093;
        int v2 = 1814065268;
        int v3 = 0xa2e676f;
        char v4 = 0;
        sub_2E584(5, &__ptr1, 0);
    }
    pthread_attr_init(&__attr);
    pthread_attr_setstacksize(&__attr, 0x200000);
    int result = pthread_create(&__newthread, &__attr, &sub_24F04, NULL);
    if(gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 4) {
        return result;
    }
    snprintf(&__ptr1, 0x800, "httpListenThread start ret=%d", result);
    return sub_2E584(5, &__ptr1, 0);
}
