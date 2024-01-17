int sub_45ED0(int param0, int param1) {
    short __ptr1;
    char* ptr0 = "read return data";
    int v0 = param0;
    snprintf(&__ptr1, 0x800, "Dumping %u %s bytes from %p:\n", param1, "read return data", param0);
    int v1 = 0;
    sub_2E584(2, &__ptr1, 0);
    do {
        if(param1 <= v1) {
            ++v1;
            *(int*)&__ptr1 = ' ';
            sub_2E584(2, &__ptr1, 0);
            if(v1 != 16) {
                continue;
            }
            break;
        }
        int v2 = (uint32_t)*(char*)(param0 + v1);
        ++v1;
        snprintf(&__ptr1, 0x800, "%02x ", v2);
        sub_2E584(2, &__ptr1, 0);
    }
    while(v1 != 16);
    int v3 = 0;
    do {
        if(param1 <= v3) {
            ++v3;
            __ptr1 = 32;
            sub_2E584(2, &__ptr1, 0);
            if(v3 != 16) {
                continue;
            }
            break;
        }
        ++v3;
        snprintf(&__ptr1, 0x800, "%c");
        sub_2E584(2, &__ptr1, 0);
    }
    while(v3 != 16);
    __ptr1 = 10;
    return sub_2E584(2, &__ptr1, 0);
}
