void* sub_573D8(size_t __nmemb) {
    int v0;
    void* __ptr1 = calloc(1, 540);
    if(__ptr1 != 0) {
        void* ptr0 = calloc(__nmemb, 0x100c);
        *(void**)((int)__ptr1 + 372) = ptr0;
        if(ptr0 != 0) {
            *(size_t*)((int)__ptr1 + 376) = __nmemb;
            int v1 = gethostname((char*)((int)__ptr1 + 8), 0x100);
            if(v1 == 0) {
                size_t v2 = strlen((char*)((int)__ptr1 + 8));
                *(size_t*)((int)__ptr1 + 268) = v2;
                pthread_t v3 = pthread_self();
                *(pthread_t*)((int)__ptr1 + 424) = v3;
                int v4 = sprintf((char*)((int)__ptr1 + 428), &g68A44);
                *(int*)((int)__ptr1 + 0x1cc) = v4;
                int v5 = sprintf((char*)((int)__ptr1 + 464), "\n");
                *(int*)((int)__ptr1 + 496) = v5;
                long v6 = syscall(224);
                *(long*)((int)__ptr1 + 500) = v6;
                int v7 = sprintf((char*)((int)__ptr1 + 504), "%u");
                *(int*)((int)__ptr1 + 536) = v7;
                return __ptr1;
            }
            int* ptr1 = __errno_location();
            v0 = ptr1[0];
            sub_5DF98(&g2, "src/event.c", 78, "gethostname fail, errno[%d]");
            sub_57364((char*)__ptr1);
            return NULL;
        }
        int* ptr2 = __errno_location();
        v0 = ptr2[0];
        sub_5DF98(&g2, "src/event.c", 67, "calloc fail, errno[%d]");
        free(__ptr1);
        return NULL;
    }
    int* ptr3 = __errno_location();
    v0 = ptr3[0];
    sub_5DF98(&g2, "src/event.c", 61, "calloc fail, errno[%d]");
    return 0;
}
