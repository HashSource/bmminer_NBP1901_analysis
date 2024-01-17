int sub_5E558(uint32_t* param0, int param1) {
    int v0;
    int result;
    __int128 v1;
    size_t __size = *(size_t*)(param0 + 5);
    int v2 = *(int*)(param0 + 6);
    if(__size == 0) {
        result = 0;
        VCVT.F64.U32((uint64_t)((unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param1 << 96)), (uint32_t)(((unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param1 << 96)) >>> 0x60X));
        VCVT.F64.U32((uint64_t)(((unsigned __int128)(((unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param1 << 96)) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v2 << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(((unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param1 << 96)) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v2 << 96)) >>> 0x60X));
        VMLA.F64((uint64_t)(((unsigned __int128)(((unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param1 << 96)) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v2 << 96)) >>> 0x40X), (uint64_t)((unsigned __int128)(((unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param1 << 96)) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v2 << 96)), 1.5);
        VCVT.U32.F64((uint32_t)(((unsigned __int128)(((unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param1 << 96)) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v2 << 96)) >>> 0x60X), (uint64_t)(((unsigned __int128)(((unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param1 << 96)) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v2 << 96)) >>> 0x40X));
        __size = ((unsigned __int128)(((unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param1 << 96)) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v2 << 96)) >>> 0x60X;
        goto loc_5E598;
    }
    if((uint32_t)v2 < __size) {
        size_t v3 = (size_t)(param1 + v2);
        if(v3 <= __size) {
            __size = v3;
            result = 0;
        }
        else {
            result = SOCK_STREAM;
        }
    loc_5E598:
        void* __ptr = *param0;
        int* ptr0 = (int*)((int)*(param0 + SOCK_STREAM) - (int)__ptr);
        void* ptr1 = realloc(__ptr, __size);
        if(ptr1 != 0) {
            int* ptr2 = (int*)(__size + (int)ptr1);
            *(param0 + SOCK_STREAM) = (int*)((int)ptr0 + (int)ptr1);
            *param0 = ptr1;
            *(param0 + 3) = ptr2;
            *(param0 + 2) = (int*)((char*)ptr2 - SOCK_STREAM);
            *(size_t*)(param0 + 6) = __size;
            return result;
        }
        int* ptr3 = __errno_location();
        v0 = ptr3[0];
        sub_5DF98(&g2, "src/buf.c", 189, "realloc fail, errno[%d]");
        free(*param0);
        *param0 = NULL;
        *(void**)(param0 + SOCK_STREAM) = NULL;
        *(void**)(param0 + 2) = NULL;
        *(void**)(param0 + 3) = NULL;
        return -1;
    }
    v0 = v2;
    size_t v4 = __size;
    sub_5DF98(&g2, "src/buf.c", 169, "a_buf->size_real[%ld] >= a_buf->size_max[%ld]");
    return SOCK_STREAM;
}
