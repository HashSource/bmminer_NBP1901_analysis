int sub_30B10(int param0, pthread_attr_t* __attr, FUNCPTR __start_routine, void* __arg) {
    sub_30A94((sem_t*)(param0 + 16), "util.c", "thr_info_create", 1191);
    return pthread_create((pthread_t*)(param0 + 12), __attr, __start_routine, __arg);
}
