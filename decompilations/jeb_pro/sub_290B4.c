void* sub_290B4() {
    int v0;
    char* ptr0;
    int __ptr1;
    char* ptr1 = (char*)&g558;
    void* result = sub_2F490(1, 448, "bmminer.c", "make_work", 0x558);
    if(result == 0) {
        __builtin_strcpy(&__ptr1, "Failed to calloc work in make_work");
        sub_2E584(3, &__ptr1, SOCK_STREAM);
    }
    int v1 = pthread_mutex_lock(&g590408);
    if(v1 == 0) {
        int v2 = pthread_rwlock_wrlock(&g590420);
        if(v2 != 0) {
            goto loc_291FC;
        }
    }
    else {
        int* ptr2 = __errno_location();
        int v3 = ptr2[0];
        ptr1 = "bmminer.c";
        ptr0 = "total_work_inc";
        v0 = 1359;
        snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v3, "bmminer.c", "total_work_inc", 1359);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        int v4 = pthread_rwlock_wrlock(&g590420);
        if(v4 != 0) {
        loc_291FC:
            int* ptr3 = __errno_location();
            int v5 = ptr3[0];
            ptr1 = "bmminer.c";
            ptr0 = "total_work_inc";
            v0 = 1359;
            snprintf(&__ptr1, 0x800, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", v5, "bmminer.c", "total_work_inc", 1359);
            sub_2E584(3, &__ptr1, SOCK_STREAM);
        }
    }
    uint32_t v6 = gvar_80B94;
    gvar_80B94 = v6 + SOCK_STREAM;
    int v7 = pthread_rwlock_unlock(&g590420);
    if(v7 != 0) {
        int* ptr4 = __errno_location();
        int v8 = ptr4[0];
        ptr1 = "bmminer.c";
        ptr0 = "total_work_inc";
        v0 = 0x551;
        snprintf(&__ptr1, 0x800, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", v8, "bmminer.c", "total_work_inc", 0x551);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
    }
    int v9 = pthread_mutex_unlock(&g590408);
    if(v9 != 0) {
        int* ptr5 = __errno_location();
        snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", ptr5[0], "bmminer.c", "total_work_inc", 0x551);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
    }
    gvar_7ECC4{sub_2F250}();
    *(uint32_t*)((int)result + 340) = v6;
    return result;
}
