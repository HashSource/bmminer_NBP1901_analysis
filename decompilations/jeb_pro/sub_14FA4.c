int sub_14FA4() {
    char __attr;
    uint32_t v0 = sub_14434();
    uint32_t v1 = sub_1E19C();
    uint32_t v2 = (int)v1 < (int)v0 ? sub_14434(): sub_1E19C();
    if(gvar_7EB9C > 3) {
        snprintf((char*)&__attr, 0x800, "max sensor num = %d", v2);
        sub_2E584(3, (char*)&__attr, 0);
    }
    void* ptr0 = malloc(16);
    gvar_7F7B8 = (uint32_t)ptr0;
    void* ptr1 = malloc(48);
    void* ptr2 = calloc(v2 * 72, 1);
    void* ptr3 = ptr1;
    int* ptr4 = (int*)((int)ptr0 - 4);
    int* ptr5 = (int*)((int)ptr3 + 48);
    void* ptr6 = ptr2;
    do {
        int* ptr7 = (int*)(v2 * 6 + (int)ptr6);
        *(void**)(ptr4 + SOCK_STREAM) = ptr3;
        ++ptr4;
        int* ptr8 = (int*)(v2 * 6 + (int)ptr7);
        *(void**)ptr3 = ptr6;
        *(uint32_t*)((int)ptr3 + 4) = ptr7;
        *(uint32_t*)((int)ptr3 + 8) = ptr8;
        ptr3 = (int)ptr3 + 12;
        ptr6 = v2 * 6 + (int)ptr8;
    }
    while(ptr3 != ptr5);
    int v3 = 0;
    gvar_7F7D8 = (uint32_t)(v2 * 72 + (int)ptr2);
    uint32_t v4 = sub_14434();
    void* ptr9 = malloc(v4 * 4);
    gvar_7F7B4 = (uint32_t)ptr9;
    uint32_t v5 = sub_14434();
    while(v3 < (int)v5) {
        uint32_t v6 = gvar_7F7B4;
        int v7 = sub_1E180(v3);
        *(int*)(v3 * 4 + v6) = v7;
        ++v3;
        v5 = sub_14434();
    }
    uint32_t __size = sub_1E19C();
    void* ptr10 = malloc(__size);
    int v8 = 0;
    gvar_7F7DC = (uint32_t)ptr10;
    uint32_t v9 = sub_1E19C();
    while(v8 < (int)v9) {
        int v10 = sub_1E1AC(v8);
        *(char*)(gvar_7F7DC + v8) = (uint8_t)v10;
        ++v8;
        v9 = sub_1E19C();
    }
    pthread_attr_init(&__attr);
    pthread_attr_setstacksize(&__attr, 0x100000);
    gvar_7F7E0 = 1;
    pthread_create((pthread_t*)&gvar_7F7E4, &__attr, &sub_1585C, NULL);
    return pthread_detach(gvar_7F7E4);
}
