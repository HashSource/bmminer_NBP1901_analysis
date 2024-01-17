uint32_t* sub_2DB50(uint32_t* param0, uint32_t* param1, int param2, int param3, int param4) {
    char __ptr1;
    uint32_t* ptr0 = param0;
    uint32_t* ptr1 = param1;
    param0 = *param1;
    param1 = *ptr0;
    if(param0 != param1) {
        snprintf(&__ptr1, 0x800, "List %s can\'t %s() a %s item - from %s %s() line %d in %s %s():%d", param1, "_k_add_head", param0, param2, param3, param4, "klist.c", "_k_add_head", 205);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    *(ptr1 + SOCK_STREAM) = NULL;
    *(ptr1 + 2) = *(ptr0 + 3);
    uint32_t* ptr2 = *(ptr0 + 3);
    if(ptr2 != 0) {
        *(ptr2 + SOCK_STREAM) = ptr1;
    }
    int v0 = (uint32_t)*(uint8_t*)(ptr0 + 11);
    *(ptr0 + 3) = ptr1;
    if(v0 != 0 && *(ptr0 + 4) == 0) {
        *(ptr0 + 4) = ptr1;
    }
    int* ptr3 = (int*)((char*)*(ptr0 + 8) + SOCK_STREAM);
    *(ptr0 + 7) = (int*)((char*)*(ptr0 + 7) + SOCK_STREAM);
    *(ptr0 + 8) = ptr3;
    return param0;
}
