void* sub_5C294(int param0, uint32_t* param1, uint32_t* param2) {
    int* ptr0 = *(param1 + 2);
    if(*(void**)(ptr0 + 79) == 0) {
        gettimeofday((timeval*)(ptr0 + 79), NULL);
        ptr0 = *(param1 + 2);
    }
    return sub_5EB48(param2, (size_t)(*(ptr0 + 80) / 1000), 3);
}
