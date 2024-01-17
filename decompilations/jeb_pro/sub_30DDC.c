int sub_30DDC(int param0, int param1, int param2) {
    int __newthread;
    void* __sem = sub_2F408(24, "util.c", "cg_completion_timeout", 3649);
    sub_30A94((sem_t*)__sem, "util.c", "cg_completion_timeout", 3650);
    *(int*)((int)__sem + 16) = param0;
    *(int*)((int)__sem + 20) = param1;
    pthread_create(&__newthread, NULL, &sub_30B90, __sem);
    int v0 = 3656;
    int v1 = sub_30C54((sem_t*)__sem, param2, "util.c", "cg_completion_timeout", 3656);
    if(v1 != 0) {
        pthread_cancel(__newthread);
        return v1 >= 0 ? ((v1 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v1 >>> 29) & SOCK_STREAM ? 2: (v1 >>> 28) & SOCK_STREAM ? 3: (v1 >>> 27) & SOCK_STREAM ? 4: (v1 >>> 26) & SOCK_STREAM ? 5: (v1 >>> 25) & SOCK_STREAM ? 6: (v1 >>> 24) & SOCK_STREAM ? 7: (v1 >>> 23) & SOCK_STREAM ? 8: (v1 >>> 22) & SOCK_STREAM ? 9: (v1 >>> 21) & SOCK_STREAM ? 10: (v1 >>> 20) & SOCK_STREAM ? 11: (v1 >>> 19) & SOCK_STREAM ? 12: (v1 >>> 18) & SOCK_STREAM ? 13: (v1 >>> 17) & SOCK_STREAM ? 14: (v1 >>> 16) & SOCK_STREAM ? 15: (v1 >>> 15) & SOCK_STREAM ? 16: (v1 >>> 14) & SOCK_STREAM ? 17: (v1 >>> 13) & SOCK_STREAM ? 18: (v1 >>> 12) & SOCK_STREAM ? 19: (v1 >>> 11) & SOCK_STREAM ? 20: (v1 >>> 10) & SOCK_STREAM ? 21: (v1 >>> 9) & SOCK_STREAM ? 22: (v1 >>> 8) & SOCK_STREAM ? 23: (v1 >>> 7) & SOCK_STREAM ? 24: (v1 >>> 6) & SOCK_STREAM ? 25: (v1 >>> 5) & SOCK_STREAM ? 26: (v1 >>> 4) & SOCK_STREAM ? 27: (v1 >>> 3) & SOCK_STREAM ? 28: (v1 >>> 2) & SOCK_STREAM ? 29: (v1 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v1 & SOCK_STREAM ? 31: 32) >>> 5: 0;
    }
    pthread_join(__newthread, NULL);
    free(__sem);
    return SOCK_STREAM;
}
