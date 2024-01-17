int* sub_386BC(int* param0, int* param1) {
    char __s1;
    int __src;
    char v0;
    char v1;
    int v2;
    char v3;
    char v4;
    memset(&__src, 0, 32);
    memset(&__s1, 0, 32);
    if(param0 == 0) {
        return NULL;
    }
    int v5 = *(param0 + 6);
    int v6 = *(param0 + 7);
    int v7 = *(param0 + 8);
    int v8 = *(param0 + 5);
    int v9 = v5;
    int v10 = v6;
    int v11 = v7;
    int v12 = *(param0 + 10);
    int v13 = *(param0 + 11);
    int v14 = *(param0 + 12);
    int v15 = *(param0 + 9);
    int v16 = v12;
    int v17 = v13;
    int v18 = v14;
    sub_31268(&v8, 32);
    int v19 = *(param0 + 2);
    int __s2 = 80;
    int v20 = 0;
    int v21 = *(param0 + 3);
    int v22 = *(param0 + 4);
    __src = v19;
    int v23 = v21;
    int v24 = v22;
    sub_31268((char*)&__src, 12);
    sub_316B0(&v0, (int*)&__src, 12);
    __src = (uint32_t)(uint8_t)(int*)((int)param1 >>> 24) | ((uint32_t)(uint8_t)(int*)((int)param1 >>> 16) << 8) | ((uint32_t)(uint8_t)(int*)((int)param1 >>> 8) << 16) | ((uint32_t)(uint8_t)param1 << 24);
    sub_31268((char*)&__src, 4);
    sub_316B0(&v1, (int*)&__src, 4);
    sub_2327C(&__s2, (char*)&__src);
    memset(&__s2, 0, 232);
    sub_23430(&__src, 32, (char*)&__s1);
    int* ptr0 = &v2;
    param1 = &v4;
    do {
        int v25 = *(ptr0 + SOCK_STREAM);
        ++ptr0;
        *(param1 + SOCK_STREAM) = (uint32_t)(uint8_t)(v25 >>> 24) | ((uint32_t)(uint8_t)(v25 >>> 16) << 8) | ((uint32_t)(uint8_t)(v25 >>> 8) << 16) | ((uint32_t)(uint8_t)v25 << 24);
        ++param1;
    }
    while(ptr0 != &v3);
    return v2 == 0 ? v2: &g1;
}
