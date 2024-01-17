size_t sub_5DF58(char* __s) {
    char __timer;
    char __tp;
    time(&__timer);
    localtime_r(&__timer, &__tp);
    return strftime(__s, 21, "%m-%d %T", &__tp);
}
