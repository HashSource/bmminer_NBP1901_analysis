size_t sub_32CC0(uint32_t* param0, uint8_t* param1, int param2) {
    char v0;
    char v1;
    char v2;
    char v3;
    int v4;
    int v5 = gvar_482A88;
    uint32_t v6 = gvar_482A80;
    uint8_t v7 = (uint8_t)((uint8_t)((uint32_t)(char*)((int)*(param1 + 680) & SOCK_STREAM) | ((uint32_t)((v7 >>> SOCK_STREAM) & 0x7fffffff) << SOCK_STREAM)) | 0x2);
    char v8 = (uint8_t)v6;
    short __src1 = 82;
    int* __src = NULL;
    int* ptr0 = NULL;
    char v9 = 15;
    if(v5 != 0) {
        int* ptr1 = *(uint32_t*)(param1 + 0x288);
        int* ptr2 = *(uint32_t*)(param1 + 652);
        char* ptr3 = *(param1 + 644);
        int* ptr4 = ptr1;
        int* ptr5 = ptr2;
    }
    sub_2F724(&v3, (char*)(param1 + 1780), 4);
    sub_2F724(&v1, (char*)(param1 + 1712), 32);
    sub_2F724(&v0, (char*)(param1 + 0x700), 4);
    sub_2F724(&v2, (char*)(param1 + 1804), 4);
    int* ptr6 = *(uint32_t*)(param1 + 1576);
    void* __src2 = *(void**)(param1 + 1568);
    size_t __n1 = *(size_t*)(param1 + 1572);
    size_t __n = *(size_t*)(param1 + 632);
    int* ptr7 = (int*)((int)ptr6 + (int)__src2);
    short v10 = (uint16_t)ptr6;
    short v11 = (uint16_t)__n1;
    short v12 = (uint16_t)__n;
    int v13 = *(ptr7 + SOCK_STREAM);
    int* ptr8 = *(uint32_t*)(param1 + 624);
    int* ptr9 = *(uint32_t*)(param1 + 628);
    int __dest = *ptr7;
    int v14 = v13;
    __src = ptr8;
    ptr0 = ptr9;
    memcpy(&__dest, &__src, __n);
    int* ptr10 = *(uint32_t*)(param1 + 1708);
    short v15 = (uint16_t)ptr10;
    int* ptr11 = (int*)((int)(int*)((int)ptr10 * 32) + __n1);
    void* __dest1 = malloc((size_t)((char*)ptr11 + 98));
    if(__dest1 == 0) {
        int __ptr1 = 1818845510;
        int v16 = 1948279909;
        int v17 = 1634541679;
        int v18 = 0x636f6c6c;
        __builtin_strcpy(&v4, " tmp_buf");
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
        ptr10 = *(uint32_t*)(param1 + 1708);
        __src2 = *(void**)(param1 + 1568);
        __n1 = *(size_t*)(param1 + 1572);
    }
    int* ptr12 = (int*)((char*)ptr11 + 90);
    memset(__dest1, 0, (size_t)((char*)ptr11 + 98));
    memcpy(__dest1, &__src1, 96);
    memcpy((void*)((int)__dest1 + 96), __src2, __n1);
    if((int)ptr10 > 0) {
        uint32_t* ptr13 = *(uint32_t*)(param1 + 676);
        uint32_t* ptr14 = (uint32_t*)(__n1 + (int)__dest1) + 24;
        uint32_t* ptr15 = (uint32_t*)((int)(uint32_t*)((int)ptr10 * 4) + (int)ptr13);
        do {
            uint32_t* ptr16 = *ptr13;
            ++ptr13;
            ptr14 += 8;
            int* ptr17 = *(ptr16 + SOCK_STREAM);
            int* ptr18 = *(ptr16 + 2);
            int* ptr19 = *(ptr16 + 3);
            *(ptr14 - 8) = *ptr16;
            *(ptr14 - 7) = ptr17;
            *(ptr14 - 6) = ptr18;
            *(ptr14 - 5) = ptr19;
            int* ptr20 = *(ptr16 + 5);
            int* ptr21 = *(ptr16 + 6);
            int* ptr22 = *(ptr16 + 7);
            *(ptr14 - 4) = *(ptr16 + 4);
            *(ptr14 - 3) = ptr20;
            *(ptr14 - 2) = ptr21;
            *(ptr14 - SOCK_STREAM) = ptr22;
        }
        while(ptr15 != ptr13);
    }
    int v19 = sub_31590((int)__dest1, (int)((uint16_t)ptr11 + 96));
    uint32_t v20 = gvar_482A80;
    uint32_t v21 = gvar_482A84;
    *(short*)((int*)((int)__dest1 + (int)ptr11) + 24) = (uint16_t)v19;
    gvar_482A80 = v20 + SOCK_STREAM;
    gvar_482A84 = (uint32_t)((uint32_t)(v20 >= -1) + v21);
    void* __dest2 = malloc((size_t)((char*)ptr11 + 98));
    *param0 = __dest2;
    memcpy(__dest2, __dest1, (size_t)((char*)ptr11 + 98));
    free(__dest1);
    return (size_t)((char*)ptr11 + 98);
}
