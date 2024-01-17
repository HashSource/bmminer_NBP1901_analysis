int sub_2DD70(uint32_t* param0, uint32_t* param1, uint32_t* param2, uint32_t* param3, uint32_t* param4, uint32_t* param5) {
    char __ptr1;
    int result;
    uint32_t* ptr0 = param1;
    param1 = *param1;
    int* ptr1 = *param0;
    if(param1 != ptr1) {
        int v0 = 262;
        snprintf(&__ptr1, 0x800, "List %s can\'t %s() a %s item - from %s %s() line %d in %s %s():%d", ptr1, "_k_insert_before", param1, param3, param4, param5, "klist.c", "_k_insert_before", 262);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    if(param2 == 0) {
        snprintf(&__ptr1, 0x800, "%s() (%s) can\'t before a null item - from %s %s() line %d in %s %s():%d", "_k_insert_before", *param0, param3, param4, param5, "klist.c", "_k_insert_before", 267);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    *(ptr0 + 2) = param2;
    *(ptr0 + SOCK_STREAM) = *(param2 + SOCK_STREAM);
    uint32_t* ptr2 = *(param2 + SOCK_STREAM);
    if(ptr2 == 0) {
        *(param0 + 3) = ptr0;
    }
    else {
        *(ptr2 + 2) = ptr0;
    }
    *(param2 + SOCK_STREAM) = ptr0;
    int* ptr3 = (int*)((char*)*(param0 + 8) + SOCK_STREAM);
    *(param0 + 7) = (int*)((char*)*(param0 + 7) + SOCK_STREAM);
    *(param0 + 8) = ptr3;
    return result;
}
