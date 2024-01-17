int sub_3DA68(int* param0) {
    void* ptr0 = realloc(gvar_99EE1C, (gvar_99EE24 + SOCK_STREAM) * 28);
    uint32_t v0 = gvar_99EE24;
    gvar_99EE1C = (uint32_t)ptr0;
    gvar_99EE24 = v0 + SOCK_STREAM;
    int v1 = *(param0 + SOCK_STREAM);
    int v2 = *(param0 + 2);
    int v3 = *(param0 + 3);
    int* ptr1 = (int*)(v0 * 28 + (int)ptr0);
    *ptr1 = *param0;
    *(ptr1 + SOCK_STREAM) = v1;
    *(ptr1 + 2) = v2;
    *(ptr1 + 3) = v3;
    int result = *(param0 + 4);
    int v4 = *(param0 + 5);
    int v5 = *(param0 + 6);
    *(ptr1 + 4) = *(param0 + 4);
    *(ptr1 + 5) = v4;
    *(ptr1 + 6) = v5;
    return result;
}
