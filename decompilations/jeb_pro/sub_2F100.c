int sub_2F100(int param0, char* param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3 = *(int*)(param0 + 4);
    char* ptr1 = param1;
    void* __s = (void*)(param0 + v3 + 8);
    int v4 = (*(int*)param0 + v3) * 8;
    if((v3 & 0x3f) < 56) {
        v2 = 61;
    }
    int v5 = (v3 & 0x3f) < 56 ? 60: 124;
    if((v3 & 0x3f) >= 56) {
        v2 = 125;
    }
    else {
        v1 = 62;
    }
    if((v3 & 0x3f) >= 56) {
        v1 = 126;
    }
    else {
        v0 = 63;
    }
    if((v3 & 0x3f) >= 56) {
        v0 = 127;
    }
    else {
        ptr0 = &g1;
    }
    if((v3 & 0x3f) >= 56) {
        ptr0 = &g2;
    }
    memset(__s, 0, (v3 & 0x3f) < 56 ? (size_t)(64 - v3): (size_t)(128 - v3));
    *(char*)(*(int*)(param0 + 4) + param0 + 8) = 128;
    *(char*)(param0 + v0 + 8) = (uint8_t)v4;
    *(char*)(param0 + v1 + 8) = (uint8_t)(v4 >>> 8);
    *(char*)(param0 + v2 + 8) = (uint8_t)(v4 >>> 16);
    *(char*)(param0 + v5 + 8) = (uint8_t)(v4 >>> 24);
    int result = sub_2EE28(param0, (int*)(param0 + 8), ptr0);
    int* ptr2 = (int*)(param0 + 0x88);
    do {
        *(ptr1 + 3) = (uint8_t)*ptr2;
        int v6 = *ptr2;
        ++ptr2;
        *(ptr1 + 2) = (uint8_t)(v6 >>> 8);
        *(ptr1 + SOCK_STREAM) = (uint8_t)*(short*)((char*)ptr2 - 2);
        *ptr1 = *(char*)((char*)ptr2 - SOCK_STREAM);
        ptr1 += 4;
    }
    while(param0 + 168 != ptr2);
    return result;
}
