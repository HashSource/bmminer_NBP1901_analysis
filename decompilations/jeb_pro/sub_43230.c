void* sub_43230(uint32_t* param0, void* __src, size_t __size) {
    int v0;
    int* ptr0 = *(param0 + 3);
    uint32_t* ptr1 = *(uint32_t**)(param0 + 5);
    if(*(int*)(*ptr0 + 32) != 0) {
        sub_44000(ptr1, &v0);
        *(int*)(*ptr0 + 32)(v0);
        ptr1 = *(uint32_t**)(param0 + 5);
    }
    return sub_44040(ptr1[5], __src, __size);
}
