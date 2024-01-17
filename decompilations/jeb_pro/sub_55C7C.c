int sub_55C7C(uint32_t* param0, int* param1) {
    int result;
    int* ptr0 = *(param0 + 0x112);
    if(*(ptr0 + SOCK_STREAM) > 0) {
        int v0 = 0;
        do {
            int* ptr1 = *(int**)(v0 * 4 + *ptr0);
            ++v0;
            result = sub_5BABC(ptr1, param1);
            ptr0 = *(param0 + 0x112);
        }
        while(*(ptr0 + SOCK_STREAM) > v0);
        return result;
    }
    return 0;
}
