uint32_t* sub_2E00C(uint32_t* param0, uint32_t* param1, int param2, int param3, int param4) {
    char __ptr1;
    uint32_t* ptr0 = param0;
    uint32_t* ptr1 = param1;
    param0 = *param1;
    param1 = *ptr0;
    if(param0 != param1) {
        snprintf(&__ptr1, 0x800, "List %s can\'t %s() a %s item - from %s %s() line %d in %s %s():%d", param1, "_k_unlink_item", param0, param2, param3, param4, "klist.c", "_k_unlink_item", 312);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    uint32_t* ptr2 = *(ptr1 + SOCK_STREAM);
    uint32_t* ptr3 = *(ptr1 + 2);
    if(ptr2 != 0) {
        *(ptr2 + 2) = ptr3;
        ptr3 = *(ptr1 + 2);
    }
    if(ptr3 != 0) {
        *(ptr3 + SOCK_STREAM) = *(ptr1 + SOCK_STREAM);
    }
    if(*(ptr0 + 3) == ptr1) {
        *(ptr0 + 3) = *(ptr1 + 2);
    }
    if(*(uint8_t*)(ptr0 + 11) != 0 && *(ptr0 + 4) == ptr1) {
        *(ptr0 + 4) = *(ptr1 + SOCK_STREAM);
    }
    *(ptr1 + 2) = NULL;
    *(ptr1 + SOCK_STREAM) = NULL;
    *(ptr0 + 7) = (int*)((char*)*(ptr0 + 7) - SOCK_STREAM);
    return param0;
}
