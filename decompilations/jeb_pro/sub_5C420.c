void* sub_5C420(int param0, uint32_t* param1, uint32_t* param2) {
    int* ptr0 = *(param1 + 2);
    if(*(ptr0 + 68) != 0) {
        return sub_5F0D4(param2, *(void**)(ptr0 + 70), *(size_t*)(ptr0 + 71));
    }
    return sub_5F0D4(param2, "(func=null)", 11);
}
