int sub_4B9B0(int param0, char* __src, uint32_t param2) {
    uint32_t* ptr0;
    int v0;
    size_t v1;
    int v2 = *(int*)(param0 + 8);
    uint32_t v3 = param2;
    if(*(int*)param0 >>> v2 == 0) {
        v1 = *(size_t*)(param0 + 4);
        v0 = v2 < 32 ? ~(-1 << v2): -1;
    loc_4BAE4:
        size_t v4 = strlen(__src);
        int v5 = sub_4B2F4(__src, (int)v4, gvar_5051C0);
        uint32_t* ptr1 = (uint32_t*)((v0 & v5) * 8 + v1);
        uint32_t* ptr2 = sub_4B838(param0, ptr1, __src, (int*)v5);
        if(ptr2 != 0) {
            void* ptr3 = (void*)ptr2[5];
            if(ptr3 != 0 && *(int*)((int)ptr3 + 4) != -1) {
                DMB();
                param2 = *(uint32_t*)((int)ptr3 + 4) - SOCK_STREAM;
                --*(uint32_t*)((int)ptr3 + 4);
                if(param2 == 0) {
                    sub_4EB6C(ptr3);
                }
            }
            ptr2[5] = v3;
            return 0;
        }
        size_t v6 = sub_4D880(v4 + 25);
        if(v6 != 0) {
            *(int*)(v6 + 16) = v5;
            strncpy((char*)(v6 + 24), __src, v4 + SOCK_STREAM);
            uint32_t v7 = ptr1[0];
            *(uint32_t*)(v6 + 20) = v3;
            *(size_t*)(v6 + 4) = v6;
            *(size_t*)v6 = v6;
            *(uint32_t*)(v6 + 12) = v6 + 8;
            *(uint32_t*)(v6 + 8) = v6 + 8;
            if(param0 + 12 != v7 || ptr1[SOCK_STREAM] != v7) {
                *(int*)v6 = *(int*)v7;
                *(uint32_t*)(v6 + 4) = v7;
                *(size_t*)(*(int*)v7 + 4) = v6;
                *(size_t*)v7 = v6;
            }
            else {
                *(int*)v6 = *(int*)(param0 + 12);
                *(uint32_t*)(v6 + 4) = v7;
                *(size_t*)(*(int*)(param0 + 12) + 4) = v6;
                *(size_t*)(param0 + 12) = v6;
                ptr1[SOCK_STREAM] = v6;
            }
            ptr1[0] = v6;
            int v8 = *(int*)(param0 + 20);
            int v9 = *(int*)param0;
            *(int*)(v6 + 12) = param0 + 20;
            *(int*)(v6 + 8) = v8;
            *(uint32_t*)(*(int*)(param0 + 20) + 4) = v6 + 8;
            *(uint32_t*)(param0 + 20) = v6 + 8;
            *(int*)param0 = v9 + SOCK_STREAM;
            return 0;
        }
    }
    else {
        v1 = sub_4D880((size_t)(8 << (v2 + SOCK_STREAM)));
        if(v1 != 0) {
            sub_4D898(*(void**)(param0 + 4));
            *(size_t*)(param0 + 4) = v1;
            *(int*)(param0 + 8) = v2 + SOCK_STREAM;
            if(SOCK_STREAM << (v2 + SOCK_STREAM) != 0) {
                uint32_t v10 = (size_t)(8 << (v2 + SOCK_STREAM)) + v1;
                size_t v11 = v1;
                do {
                    *(int*)(v11 + 4) = param0 + 12;
                    *(int*)v11 = param0 + 12;
                    v11 += 8;
                }
                while(v10 != v11);
            }
            uint32_t* ptr4 = *(uint32_t*)(param0 + 16);
            *(int*)(param0 + 12) = param0 + 12;
            v0 = v2 + SOCK_STREAM < 32 ? ~(-1 << (v2 + SOCK_STREAM)): -1;
            *(int*)(param0 + 16) = param0 + 12;
            if(param0 + 12 != ptr4) {
                do {
                    ptr0 = *(ptr4 + SOCK_STREAM);
                    int* ptr5 = (int*)((int)*(ptr4 + 4) & v0);
                    uint32_t* ptr6 = *(uint32_t*)((int)(uint32_t*)((int)ptr5 * 8) + v1);
                    uint32_t* ptr7 = (uint32_t*)((int)(uint32_t*)((int)ptr5 * 8) + v1);
                    if(param0 + 12 == ptr6 && param0 + 12 == *(ptr7 + SOCK_STREAM)) {
                        int* ptr8 = *(uint32_t*)(param0 + 12);
                        *(int*)(ptr4 + SOCK_STREAM) = param0 + 12;
                        *ptr4 = ptr8;
                        *(uint32_t*)(*(int*)(param0 + 12) + 4) = ptr4;
                        *(uint32_t*)(param0 + 12) = ptr4;
                        *(ptr7 + SOCK_STREAM) = ptr4;
                        *ptr7 = ptr4;
                        ptr4 = ptr0;
                        if(param0 + 12 != ptr0) {
                            continue;
                        }
                        break;
                    }
                    int* ptr9 = *ptr6;
                    *(ptr4 + SOCK_STREAM) = ptr6;
                    *ptr4 = ptr9;
                    *(*ptr6 + SOCK_STREAM) = ptr4;
                    *ptr6 = ptr4;
                    *ptr7 = ptr4;
                    ptr4 = ptr0;
                }
                while(param0 + 12 != ptr0);
                int v12 = *(int*)(param0 + 8);
                v1 = *(size_t*)(param0 + 4);
                v0 = v12 < 32 ? ~(-1 << v12): -1;
            }
            goto loc_4BAE4;
        }
    }
    return -1;
}
