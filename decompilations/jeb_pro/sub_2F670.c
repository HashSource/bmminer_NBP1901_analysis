void* sub_2F670(int param0, int* param1) {
    void* ptr0;
    int* ptr1 = (int*)((int)param1 * 2);
    int v0 = 789;
    void* result = sub_2F490((size_t)((char*)((int)(int*)((int)((int)ptr1 <= -1 ? (int*)(0 - (int)(int*)((int)(int*)(-1 - (int)ptr1) & 0x3)): (int*)((int)(int*)((char*)ptr1 + SOCK_STREAM) & 0x3)) * -1) + (int)ptr1) + 5), 1, "util.c", "\n", 789);
    if((int)param1 <= 0) {
        ptr0 = result;
    }
    else {
        char* ptr2 = (char*)(param0 - SOCK_STREAM);
        param1 = (int)param1 + (int)ptr2;
        char* ptr3 = (char*)((int)result + 2);
        do {
            int v1 = (uint32_t)*(ptr2 + SOCK_STREAM);
            ++ptr2;
            ptr3 += 2;
            *(ptr3 - 4) = a0123456789abcde[v1 >>> 4];
            *(ptr3 - 3) = a0123456789abcde[(uint32_t)*ptr2 & 0xf];
        }
        while(param1 != ptr2);
        ptr0 = (int)result + (int)ptr1;
    }
    *(char*)ptr0 = 0;
    return result;
}
