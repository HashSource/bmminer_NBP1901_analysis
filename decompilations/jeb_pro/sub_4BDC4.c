int sub_4BDC4(void* param0) {
    sub_4B8AC(param0);
    int result = *(int*)((int)param0 + 8);
    if(SOCK_STREAM << result != 0) {
        uint32_t* ptr0 = *(uint32_t*)((int)param0 + 4);
        uint32_t* ptr1 = (uint32_t*)((8 << result) + (int)ptr0);
        do {
            *(ptr0 + SOCK_STREAM) = (int*)((int)param0 + 12);
            *ptr0 = (int*)((int)param0 + 12);
            ptr0 += 2;
        }
        while(ptr1 != ptr0);
    }
    *(uint32_t*)((int)param0 + 16) = (int*)((int)param0 + 12);
    *(uint32_t*)((int)param0 + 12) = (int*)((int)param0 + 12);
    *(uint32_t*)((int)param0 + 24) = (int*)((int)param0 + 20);
    *(uint32_t*)((int)param0 + 20) = (int*)((int)param0 + 20);
    *(int*)param0 = 0;
    return result;
}
