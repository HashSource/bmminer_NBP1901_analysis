int sub_2E0F8(uint32_t* param0, uint32_t* param1, uint32_t* param2, uint32_t* param3, uint32_t* param4) {
    char __ptr1;
    int result;
    uint32_t* ptr0 = param0;
    uint32_t* ptr1 = param1;
    param0 = *param0;
    param1 = *param1;
    if(param0 != param1) {
        int v0 = 338;
        snprintf(&__ptr1, 0x800, "List %s can\'t %s() to a %s list - from %s %s() line %d in %s %s():%d", param0, "_k_list_transfer_to_head", param1, param2, param3, param4, "klist.c", "_k_list_transfer_to_head", 338);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    if(*(uint8_t*)(ptr0 + 11) == 0) {
        snprintf(&__ptr1, 0x800, "List %s can\'t %s() - do_tail is false - from %s %s() line %d in %s %s():%d", *ptr0, "_k_list_transfer_to_head", param2, param3, param4, "klist.c", "_k_list_transfer_to_head", 343);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    if(*(ptr0 + 3) != 0) {
        uint32_t* ptr2 = *(ptr1 + 3);
        int* ptr3 = *(ptr0 + 4);
        if(ptr2 == 0) {
            *(ptr1 + 4) = ptr3;
        }
        else {
            *(ptr2 + SOCK_STREAM) = ptr3;
        }
        if(ptr2 != 0) {
            ptr2 = *(ptr1 + 3);
        }
        *(*(ptr0 + 4) + 2) = ptr2;
        *(ptr1 + 3) = *(ptr0 + 3);
        *(ptr0 + 4) = NULL;
        int* ptr4 = *(ptr0 + 7);
        *(ptr0 + 3) = NULL;
        *(ptr1 + 7) = (int*)((int)*(ptr1 + 7) + (int)ptr4);
        *(ptr0 + 7) = NULL;
        *(ptr1 + 8) = (int*)((int)*(ptr0 + 8) + (int)*(ptr1 + 8));
        *(ptr0 + 8) = NULL;
    }
    return result;
}
