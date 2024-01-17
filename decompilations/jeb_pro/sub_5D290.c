int sub_5D290(uint32_t* param0, size_t __size, char* param2) {
    if(param0 != 0) {
        int* ptr0 = *(param0 + 7);
        if(*(ptr0 + 4) != __size || *(ptr0 + 5) != param2) {
            void* __ptr1_1 = sub_5E758(__size, param2, "\n");
            if(__ptr1_1 != 0) {
                void* ptr1 = sub_5E758(__size, param2, "\n");
                if(ptr1 != 0) {
                    sub_5E70C(*(void**)(param0 + 6));
                    void* __ptr1 = *(void**)(param0 + 7);
                    *(void**)(param0 + 6) = __ptr1_1;
                    sub_5E70C(__ptr1);
                    *(void**)(param0 + 7) = ptr1;
                    return 0;
                }
                sub_5DF98(&g2, "src/thread.c", 147, "zlog_buf_new fail");
                sub_5E70C(__ptr1_1);
                return -1;
            }
            sub_5DF98(&g2, "src/thread.c", 141, "zlog_buf_new fail");
            return -1;
        }
        sub_5DF98(NULL, "src/thread.c", 135, "buf size not changed, no need rebuild");
        return 0;
    }
    sub_5DF98(&g2, "src/thread.c", 131, "a_thread is null or 0");
    return -1;
}
