void* sub_5C454(int param0, uint32_t* param1, uint32_t* param2) {
    int* ptr0 = *(param1 + 2);
    void* __src = *(void**)(ptr0 + 68);
    if(__src != 0) {
        return sub_5F0D4(param2, __src, *(size_t*)(ptr0 + 69));
    }
    return sub_5F0D4(param2, "(file=null)", 11);
}
