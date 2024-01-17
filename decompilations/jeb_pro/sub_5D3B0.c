int sub_5D3B0(int* param0, size_t __nmemb) {
    if(param0 != 0) {
        void* ptr0 = sub_573D8(__nmemb);
        if(ptr0 != 0) {
            sub_57364(*(char**)(param0 + 2));
            *(void**)(param0 + 2) = ptr0;
            return 0;
        }
        sub_5DF98(&g2, "src/thread.c", 171, "zlog_event_new fail");
        return -1;
    }
    sub_5DF98(&g2, "src/thread.c", 167, "a_thread is null or 0");
    return -1;
}
