char* sub_57364(char* __ptr1) {
    if(__ptr1 != 0) {
        void* __ptr = *(int*)&__ptr1[372];
        if(__ptr != 0) {
            free(__ptr);
        }
        void* ptr0 = __ptr1;
        sub_5DF98(NULL, "src/event.c", 50, "zlog_event_del[%p]");
        free(__ptr1);
        return __ptr1;
    }
    return sub_5DF98(&g2, "src/event.c", 48, "a_event is null or 0");
}
