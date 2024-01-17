char* sub_5CFA8(char* __ptr2) {
    if(__ptr2 != 0) {
        char* __ptr = *(int*)&__ptr2[4];
        if(__ptr != 0) {
            sub_57F94(__ptr);
        }
        char* __ptr1 = *(int*)&__ptr2[8];
        if(__ptr1 != 0) {
            sub_57364(__ptr1);
        }
        void* __ptr1_1 = *(int*)&__ptr2[12];
        if(__ptr1_1 != 0) {
            sub_5E70C(__ptr1_1);
        }
        void* __ptr1_2 = *(int*)&__ptr2[16];
        if(__ptr1_2 != 0) {
            sub_5E70C(__ptr1_2);
        }
        void* __ptr1_3 = *(int*)&__ptr2[20];
        if(__ptr1_3 != 0) {
            sub_5E70C(__ptr1_3);
        }
        void* __ptr1_4 = *(int*)&__ptr2[24];
        if(__ptr1_4 != 0) {
            sub_5E70C(__ptr1_4);
        }
        void* __ptr1_5 = *(int*)&__ptr2[28];
        if(__ptr1_5 != 0) {
            sub_5E70C(__ptr1_5);
        }
        void* ptr0 = __ptr2;
        sub_5DF98(NULL, "src/thread.c", 59, "zlog_thread_del[%p]");
        free(__ptr2);
        return __ptr2;
    }
    return sub_5DF98(&g2, "src/thread.c", 43, "a_thread is null or 0");
}
