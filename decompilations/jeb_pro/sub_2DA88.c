uint32_t* sub_2DA88(uint32_t* param0, int param1, int param2, int* param3) {
    char __ptr1;
    if(*(uint8_t*)(param0 + 11) == 0) {
        snprintf(&__ptr1, 0x800, "List %s can\'t %s() - do_tail is false - from %s %s() line %d in %s %s():%d", *param0, "_k_unlink_tail", param1, param2, param3, "klist.c", "_k_unlink_tail", 181);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    uint32_t* result = *(param0 + 4);
    if(result != 0) {
        int* ptr0 = *(result + SOCK_STREAM);
        *(param0 + 4) = *(result + SOCK_STREAM);
        if(ptr0 == 0) {
            *(param0 + 3) = NULL;
        }
        else {
            param2 = 0;
        }
        if(ptr0 != 0) {
            *(ptr0 + 2) = param2;
        }
        *(result + 2) = NULL;
        *(result + SOCK_STREAM) = NULL;
        *(param0 + 7) = (int*)((char*)*(param0 + 7) - SOCK_STREAM);
    }
    return result;
}
