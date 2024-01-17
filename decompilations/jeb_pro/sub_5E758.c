void* sub_5E758(size_t __size, char* param1, char* __src) {
    char* ptr0;
    if(__size != 0) {
        char v0 = param1 == 0;
        char v1 = SOCK_STREAM;
        if(param1 != 0) {
            v0 = __size == param1;
            v1 = __size >= (uint32_t)param1;
        }
        if(v1 == 0 || v0 != 0) {
            void* __ptr1 = calloc(1, 0x424);
            if(__ptr1 != 0) {
                if(__src != 0) {
                    size_t v2 = strlen(__src);
                    if(v2 > 0x400) {
                        ptr0 = __src;
                        sub_5DF98(&g2, "src/buf.c", 110, "truncate_str[%s] overflow");
                        sub_5E70C(__ptr1);
                        return NULL;
                    }
                    memcpy((void*)((int)__ptr1 + 28), __src, v2 + SOCK_STREAM);
                    *(size_t*)((int)__ptr1 + 1056) = v2;
                }
                *(size_t*)((int)__ptr1 + 16) = __size;
                *(char**)((int)__ptr1 + 20) = param1;
                *(size_t*)((int)__ptr1 + 24) = __size;
                void* ptr1 = calloc(1, __size);
                *(void**)__ptr1 = ptr1;
                if(ptr1 != 0) {
                    int* ptr2 = (int*)(__size + (int)ptr1);
                    *(void**)((int)__ptr1 + 4) = ptr1;
                    *(uint32_t*)((int)__ptr1 + 12) = ptr2;
                    *(uint32_t*)((int)__ptr1 + 8) = (int*)((char*)ptr2 - SOCK_STREAM);
                    return __ptr1;
                }
                int* ptr3 = __errno_location();
                ptr0 = ptr3[0];
                sub_5DF98(&g2, "src/buf.c", 124, "calloc fail, errno[%d]");
                sub_5E70C(__ptr1);
                return NULL;
            }
            int* ptr4 = __errno_location();
            ptr0 = ptr4[0];
            sub_5DF98(&g2, "src/buf.c", 104, "calloc fail, errno[%d]");
            return 0;
        }
        size_t v3 = __size;
        ptr0 = param1;
        sub_5DF98(&g2, "src/buf.c", 98, "buf_size_max[%lu] < buf_size_min[%lu] && buf_size_max != 0");
        return NULL;
    }
    sub_5DF98(&g2, "src/buf.c", 92, "buf_size_min == 0, not allowed");
    return NULL;
}
