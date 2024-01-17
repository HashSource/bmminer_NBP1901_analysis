int sub_2FCD0(uint32_t* param0, int param1) {
    int result;
    int v0 = 1129;
    void* __ptr = sub_2F490(1, 12, "util.c", "tq_push", 1129);
    *(int*)__ptr = param1;
    *(uint32_t*)((int)__ptr + 4) = (int*)((int)__ptr + 4);
    *(uint32_t*)((int)__ptr + 8) = (int*)((int)__ptr + 4);
    int v1 = pthread_mutex_lock((pthread_mutex_t*)(param0 + 3));
    if(v1 != 0) {
        sub_2F33C("tq_push", 1133);
    }
    if(*(uint8_t*)(param0 + 2) == 0) {
        uint32_t* ptr0 = *(param0 + SOCK_STREAM);
        result = SOCK_STREAM;
        *(param0 + SOCK_STREAM) = (int*)((int)__ptr + 4);
        *(uint32_t*)((int)__ptr + 4) = param0;
        *(uint32_t*)((int)__ptr + 8) = ptr0;
        *ptr0 = (int*)((int)__ptr + 4);
    }
    else {
        result = 0;
        free(__ptr);
    }
    pthread_cond_signal((pthread_cond_t*)(param0 + 10));
    sub_2F2C0((pthread_mutex_t*)(param0 + 3), "tq_push", 1146);
    gvar_7ECC4{sub_2F250}();
    return result;
}
