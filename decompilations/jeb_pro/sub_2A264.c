int sub_2A264(int* param0, uint32_t* param1, int* param2, int param3, int param4, int param5, int __src) {
    void* ptr0 = sub_290B4();
    *param1 = ptr0;
    int v0 = *param0;
    int v1 = pthread_mutex_lock((pthread_mutex_t*)(param2 + 53));
    if(v1 != 0) {
        sub_29014("get_work_by_nonce2", 1423);
    }
    sub_28EE8((pthread_rwlock_t*)(param2 + 59), "get_work_by_nonce2", 1423);
    int v2 = "get_work_by_nonce2";
    param2[156] = param4;
    param2[157] = param5;
    __src = (uint32_t)(uint8_t)(__src >>> 24) | ((uint32_t)(uint8_t)(__src >>> 16) << 8) | ((uint32_t)(uint8_t)(__src >>> 8) << 16) | ((uint32_t)(uint8_t)__src << 24);
    int v3 = 1426;
    sub_30EA8((void*)(param2 + 395), &__src, 4, "bmminer.c", "get_work_by_nonce2", 1426);
    int v4 = pthread_rwlock_unlock((pthread_rwlock_t*)(param2 + 59));
    if(v4 == 0) {
        int v5 = pthread_mutex_unlock((pthread_mutex_t*)(param2 + 53));
        if(v5 != 0) {
            goto loc_2A3B8;
        }
    }
    else {
        sub_28E18("get_work_by_nonce2", 1427);
        int v6 = pthread_mutex_unlock((pthread_mutex_t*)(param2 + 53));
        if(v6 != 0) {
        loc_2A3B8:
            sub_28F5C("get_work_by_nonce2", 1427);
        }
    }
    gvar_7ECC4{sub_2F250}();
    sub_2974C(param2, *param1);
    int v7 = __src;
    *(int*)(*param1 + 260) = param3;
    *(int*)(*param1 + 0x100) = v0;
    *(int*)(*param1 + 336) = 0;
    int* ptr1 = *(uint32_t*)(*param1 + 260);
    ++*(ptr1 + 17);
    *(char*)(*param1 + 0x110) = SOCK_STREAM;
    *(int*)(*param1 + 444) = v7;
    return SOCK_STREAM;
}
