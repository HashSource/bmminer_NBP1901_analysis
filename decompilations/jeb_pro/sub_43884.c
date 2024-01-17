int sub_43884(uint32_t* param0, void* __src, size_t __size, void* __src1, size_t __size1) {
    uint32_t* ptr0;
    int v0;
    uint32_t v1;
    int __ptr;
    int __ptr1;
    void* ptr1 = malloc(24);
    if(ptr1 == 0) {
        return 2;
    }
    *(uint32_t**)ptr1 = param0 + SOCK_STREAM;
    *(uint32_t**)((int)ptr1 + 4) = param0 + SOCK_STREAM;
    *(int*)((int)ptr1 + 12) = SOCK_STREAM;
    void* ptr2 = sub_43FA4(__src, __size);
    *(void**)((int)ptr1 + 16) = ptr2;
    if(__src1 == 0) {
        *(void**)((int)ptr1 + 20) = NULL;
    }
    else {
        void* ptr3 = sub_43FA4(__src1, __size1);
        *(void**)((int)ptr1 + 20) = ptr3;
    }
    uint32_t v2 = param0[0];
    if(param0 + SOCK_STREAM == v2) {
        param0[0] = (uint32_t)ptr1;
        *(int*)((int)ptr1 + 8) = 0;
        v1 = ptr1;
    }
    else {
    loc_4391C:
        do {
            sub_44000(*(uint32_t**)(v2 + 16), &__ptr);
            sub_44000(*(uint32_t**)((int)ptr1 + 16), &__ptr1);
            v0 = param0[9]((int)__ptr1, (int)__ptr);
            free(__ptr);
            free(__ptr1);
            if(v0 != 0) {
                uint32_t v3 = v0 >= 0 ? *(uint32_t*)(v2 + 4): *(uint32_t*)v2;
                if(param0 + SOCK_STREAM != v3) {
                    v2 = v3;
                    goto loc_4391C;
                }
                *(uint32_t*)((int)ptr1 + 8) = v2;
                sub_44000(*(uint32_t**)(v2 + 16), &__ptr);
                sub_44000(*(uint32_t**)((int)ptr1 + 16), &__ptr1);
                int v4 = param0[9]((int)__ptr1, (int)__ptr);
                free(__ptr);
                free(__ptr1);
                v1 = param0[0];
                if(v4 < 0) {
                    *(void**)v2 = ptr1;
                }
                else {
                    *(void**)(v2 + 4) = ptr1;
                }
                goto loc_439C0;
            }
        }
        while(v0 != 0);
        return 0x191;
    loc_439C0:
        while(v1 != ptr1) {
        loc_439C4:
            do {
                ptr0 = *(uint32_t**)((int)ptr1 + 8);
                if(ptr0[3] == SOCK_STREAM) {
                    uint32_t* ptr4 = (uint32_t*)ptr0[2];
                    uint32_t* ptr5 = (uint32_t*)ptr4[0];
                    if(ptr0 != ptr5) {
                        if(ptr5[3] == SOCK_STREAM) {
                            ptr0[3] = 0;
                            ptr1 = ptr4;
                            ptr5[3] = 0;
                            ptr4[3] = 1;
                            continue loc_439C0;
                        }
                        if(ptr0[0] == ptr1) {
                            sub_434E0(param0, ptr0);
                            uint32_t v5 = ptr0[2];
                            ptr1 = ptr0;
                            ptr4 = *(uint32_t**)(v5 + 8);
                            ptr0 = v5;
                        }
                        ptr0[3] = 0;
                        ptr4[3] = 1;
                        sub_4348C(param0, ptr4);
                        v1 = param0[0];
                        if(v1 != ptr1) {
                            goto loc_439C4;
                        }
                        break loc_439C0;
                    }
                    uint32_t v6 = ptr4[SOCK_STREAM];
                    if(*(uint32_t*)(v6 + 12) != SOCK_STREAM) {
                        if(ptr5[SOCK_STREAM] == ptr1) {
                            sub_4348C(param0, ptr5);
                            ptr5 = ptr5[2];
                            ptr1 = ptr0;
                            ptr4 = ptr5[2];
                        }
                        ptr5[3] = 0;
                        ptr4[3] = 1;
                        sub_434E0(param0, ptr4);
                        v1 = param0[0];
                        continue loc_439C0;
                    }
                    ptr0[3] = 0;
                    ptr1 = ptr4;
                    *(int*)(v6 + 12) = 0;
                    ptr4[3] = 1;
                    continue loc_439C0;
                }
            }
            while(ptr0[3] == SOCK_STREAM);
        }
    }
    *(int*)(v1 + 12) = 0;
    sub_4372C((int)param0);
    return 0;
}
