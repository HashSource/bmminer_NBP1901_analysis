void* sub_2AB48(uint32_t* param0, void* __src, int param2, uint32_t param3) {
    char __ptr1;
    char* __src1 = *(char**)((int)__src + 288);
    size_t v0 = strlen(__src1);
    char* __src2 = *(char**)((int)__src + 308);
    size_t v1 = strlen(__src2);
    char* __src3 = *(char**)((int)__src + 320);
    size_t v2 = strlen(__src3);
    size_t __size = v0 + v1 + (v2 + 459);
    void* result = calloc(1, __size);
    if(result != 0) {
        *(int*)((int)result + SOCK_STREAM) = param2;
        *(char*)result = (uint8_t)param3;
        memcpy((void*)((int)result + 5), __src, 448);
        size_t v3 = strlen(__src1);
        *(char*)((int)result + 453) = (uint8_t)v3 + SOCK_STREAM;
        memcpy((void*)((int)result + 454), __src1, (size_t)((uint8_t)v3 + SOCK_STREAM));
        size_t v4 = strlen(__src2);
        *(char*)((char*)((size_t)((uint8_t)v3 + SOCK_STREAM) + (int)result) + 454) = (uint8_t)v4 + SOCK_STREAM;
        uint32_t v5 = (size_t)((uint8_t)v3 + SOCK_STREAM) + (size_t)((uint8_t)v4 + SOCK_STREAM) + 455;
        memcpy((void*)((char*)((size_t)((uint8_t)v3 + SOCK_STREAM) + (int)result) + 455), __src2, (size_t)((uint8_t)v4 + SOCK_STREAM));
        size_t v6 = strlen(__src3);
        *(char*)((int)result + v5) = (uint8_t)v6 + SOCK_STREAM;
        memcpy((void*)((char*)((int)result + v5) + SOCK_STREAM), __src3, (size_t)((uint8_t)v6 + SOCK_STREAM));
        if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
            snprintf(&__ptr1, 0x800, "need data size:%d, actual size:%d\n", __size, (size_t)((uint8_t)v6 + SOCK_STREAM) + v5 + SOCK_STREAM);
            sub_2E584(7, &__ptr1, 0);
        }
        *param0 = __size;
    }
    return result;
}
