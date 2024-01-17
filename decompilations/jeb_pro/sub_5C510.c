void* sub_5C510(int* param0, uint32_t* param1) {
    int* ptr0 = *(param1 + 3);
    int v0 = *(param0 + 0x909);
    *(ptr0 + SOCK_STREAM) = *ptr0;
    int v1 = v0((int)param0, (int)param1, (int)ptr0, (int)ptr0);
    if(v1 >= 0) {
        uint32_t* ptr1 = *(param1 + 3);
        void* ptr2 = *ptr1;
        return sub_5F1CC(*(uint32_t**)(param1 + 4), ptr2, (size_t)((int)*(ptr1 + SOCK_STREAM) - (int)ptr2), *(size_t*)(param0 + 2309), *(param0 + 2310), *(size_t*)(param0 + 2312), *(size_t*)(param0 + 2311));
    }
    sub_5DF98(&g2, "src/spec.c", 0x188, "a_spec->gen_buf fail");
    return &gFFFFFFFF;
}
