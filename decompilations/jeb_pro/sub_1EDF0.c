int sub_1EDF0(int param0, int param1, int param2, int param3, int param4, int param5) {
    char __s;
    int v0;
    char v1;
    char v2;
    memset(&__s, 0, 44);
    int* ptr0 = &v0;
    int* ptr1 = &v0;
    int v3 = 2;
    int v4 = (uint32_t)(uint8_t)(param0 >>> 24) | ((uint32_t)(uint8_t)(param0 >>> 16) << 8) | ((uint32_t)(uint8_t)(param0 >>> 8) << 16) | ((uint32_t)(uint8_t)param0 << 24);
    int v5 = param1;
    do {
        int v6 = (uint32_t)*(char*)((char*)ptr1 + 9);
        ++ptr1;
        *(int*)(v3 * 4 + (int)&v4) = ((uint32_t)*(char*)((char*)ptr1 + 6) * 0x100) | ((uint32_t)*(char*)(ptr1 + SOCK_STREAM) * 0x1000000) | (v6 * &ELFHeader) | (uint32_t)*(char*)((char*)ptr1 + 7);
        ++v3;
    }
    while(v3 != 5);
    int* ptr2 = &v1;
    do {
        int v7 = (uint32_t)*(char*)((char*)ptr0 + 21);
        ++ptr0;
        *ptr2 = ((uint32_t)*(char*)((char*)ptr0 + 18) * 0x100) | ((uint32_t)*(char*)(ptr0 + 4) * 0x1000000) | (v7 * &ELFHeader) | (uint32_t)*(char*)((char*)ptr0 + 19);
        ++ptr2;
    }
    while(ptr0 != &v2);
    return sub_4587C(&v4, 52);
}
