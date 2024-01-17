int sub_2FDA4(uint32_t* param0, timespec* __abstime) {
    int result;
    int v0 = pthread_mutex_lock((pthread_mutex_t*)(param0 + 3));
    if(v0 != 0) {
        sub_2F33C("tq_pop", 1158);
    }
    uint32_t* ptr0 = *param0;
    if(param0 == ptr0) {
        int v1 = __abstime == 0 ? pthread_cond_wait((pthread_cond_t*)(param0 + 10), (pthread_mutex_t*)(param0 + 3)): pthread_cond_timedwait((pthread_cond_t*)(param0 + 10), (pthread_mutex_t*)(param0 + 3), __abstime);
        if(v1 == 0) {
            uint32_t* ptr1 = *param0;
            if(ptr1 == ptr0) {
                result = 0;
            }
            else {
                ptr0 = ptr1;
                goto loc_2FDD0;
            }
        }
        else {
            result = 0;
        }
    }
    else {
    loc_2FDD0:
        uint32_t* ptr2 = *(ptr0 + SOCK_STREAM);
        uint32_t* ptr3 = *ptr0;
        result = *(int*)(ptr0 - SOCK_STREAM);
        *(ptr3 + SOCK_STREAM) = ptr2;
        *ptr2 = ptr3;
        *ptr0 = NULL;
        *(ptr0 + SOCK_STREAM) = NULL;
        free((void*)(ptr0 - SOCK_STREAM));
    }
    sub_2F2C0((pthread_mutex_t*)(param0 + 3), "tq_pop", 1184);
    gvar_7ECC4{sub_2F250}();
    return result;
}
