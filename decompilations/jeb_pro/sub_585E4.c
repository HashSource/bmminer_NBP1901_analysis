void* sub_585E4(int* param0) {
    *(param0 + 8) = 0;
    *(param0 + 9) = 0;
    *(param0 + 271) = 0;
    *(param0 + 270) = 0;
    *(param0 + 269) = 0;
    *(param0 + 267) = 0;
    *(param0 + 268) = 0;
    memset((void*)(param0 + 10), 0, 1025);
    void* __ptr1 = *(void**)(param0 + 0x110);
    if(__ptr1 != 0) {
        __ptr1 = sub_5D580(__ptr1);
    }
    *(param0 + 0x110) = 0;
    return __ptr1;
}
