int sub_29070(pthread_mutex_t* __mutex, int param1, int param2) {
    int v0 = pthread_mutex_init(__mutex, NULL);
    if(v0 != 0) {
        sub_28FB8(param1, param2);
    }
    return sub_28E74((pthread_rwlock_t*)(__mutex + 6), param1, param2);
}
