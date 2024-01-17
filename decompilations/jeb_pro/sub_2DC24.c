int sub_2DC24(uint32_t* param0, uint32_t* param1, uint32_t* param2, uint32_t* param3, uint32_t* param4) {
    char __ptr1;
    int result;
    uint32_t* ptr0 = param1;
    param1 = *param1;
    int* ptr1 = *param0;
    if(param1 != ptr1) {
        int v0 = 236;
        snprintf(&__ptr1, 0x800, "List %s can\'t %s() a %s item - from %s %s() line %d in %s %s():%d", ptr1, "_k_add_tail", param1, param2, param3, param4, "klist.c", "_k_add_tail", 236);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    if(*(uint8_t*)(param0 + 11) == 0) {
        snprintf(&__ptr1, 0x800, "List %s can\'t %s() - do_tail is false - from %s %s() line %d in %s %s():%d", *param0, "_k_add_tail", param2, param3, param4, "klist.c", "_k_add_tail", 241);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    int* ptr2 = *(param0 + 4);
    *(ptr0 + 2) = NULL;
    *(ptr0 + SOCK_STREAM) = ptr2;
    uint32_t* ptr3 = *(param0 + 4);
    if(ptr3 != 0) {
        *(ptr3 + 2) = ptr0;
    }
    int* ptr4 = *(param0 + 3);
    *(param0 + 4) = ptr0;
    int* ptr5 = *(param0 + 7);
    int* ptr6 = *(param0 + 8);
    if(ptr4 == 0) {
        *(param0 + 3) = ptr0;
    }
    *(param0 + 7) = (int*)((char*)ptr5 + SOCK_STREAM);
    *(param0 + 8) = (int*)((char*)ptr6 + SOCK_STREAM);
    return result;
}
