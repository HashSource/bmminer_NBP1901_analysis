void* sub_5BF18(int param0, int param1, uint32_t* param2) {
    void* ptr0;
    uint32_t* ptr1;
    void* __src2;
    void* result;
    char v0;
    size_t __n;
    char* ptr2;
    int* ptr3 = *(uint32_t*)(param1 + 8);
    uint32_t* ptr4 = param2;
    param2 = *(uint32_t**)(ptr3 + 78);
    if(param2 == 0) {
        char* __format = *(char**)(ptr3 + 76);
        if(__format != 0) {
            int v1 = sub_5E8DC(ptr4, __format, *(__gnuc_va_list*)(ptr3 + 77));
            return (void*)v1;
        }
        return sub_5F0D4(ptr4, "format=(null)", 13);
    }
    if(param2 == SOCK_STREAM) {
        if(*(ptr3 + 74) != 0) {
            int v2 = param1;
            void* ptr5 = sub_5F0D4(ptr4, "\n             0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F    0123456789ABCDEF", 80);
            if(ptr5 == 0) {
                int v3 = 16;
                void* __src = "\n";
                int v4 = SOCK_STREAM;
                int v5 = 0;
                do {
                    ptr5 = sub_5F0D4(ptr4, __src, 1);
                    if(ptr5 == 0) {
                        int v6 = 10;
                        ptr5 = sub_5ED04(ptr4, param1, v4, v5, 10);
                        if(ptr5 == 0) {
                            ptr5 = sub_5F0D4(ptr4, &g6D254, 3);
                            if(ptr5 == 0) {
                                char* ptr6 = (char*)(v3 - 16);
                                ptr2 = v3 - 16;
                                do {
                                    int* ptr7 = *(uint32_t*)(v2 + 8);
                                    uint32_t* ptr8 = ptr4;
                                    void* __src1 = (void*)&g6D254;
                                    if(*(ptr7 + 75) <= (uint32_t)ptr2) {
                                        __n = 3;
                                    }
                                    else {
                                        size_t v7 = (size_t)*(*(ptr7 + 74) + ptr2);
                                        v0 = *(*(ptr7 + 74) + ptr2);
                                        void* ptr9 = sub_5EF24(ptr8, v7, 2);
                                        ptr5 = ptr9;
                                        __n = 1;
                                        __src1 = "\n";
                                        ptr8 = ptr4;
                                        if(ptr9 != 0) {
                                            goto loc_5C0D0;
                                        }
                                    }
                                    ptr5 = sub_5F0D4(ptr8, __src1, __n);
                                    if(ptr5 != 0) {
                                        goto loc_5C0D0;
                                    }
                                    ++ptr2;
                                }
                                while(v3 != ptr2);
                                void* ptr10 = sub_5F0D4(ptr4, "  ", 2);
                                result = ptr10;
                                if(ptr10 != 0) {
                                    ptr5 = result;
                                    goto loc_5C0D0;
                                }
                                do {
                                    int* ptr11 = *(uint32_t*)(v2 + 8);
                                    if(*(ptr11 + 75) > (uint32_t)ptr6) {
                                        __src2 = &v0;
                                        ptr1 = ptr4;
                                        int v8 = (uint32_t)*(*(ptr11 + 74) + ptr6);
                                        v0 = *(*(ptr11 + 74) + ptr6);
                                        if(v8 - 32 <= 94) {
                                            goto loc_5C0BC;
                                        }
                                        else {
                                            ptr0 = sub_5F0D4(ptr1, "\n", 1);
                                            if(ptr0 == 0) {
                                                goto loc_5C15C;
                                            }
                                            else {
                                                ptr5 = ptr0;
                                                goto loc_5C0D0;
                                            }
                                        }
                                    }
                                    __src2 = "\n";
                                    ptr1 = ptr4;
                                loc_5C0BC:
                                    ptr0 = sub_5F0D4(ptr1, __src2, 1);
                                    if(ptr0 == 0) {
                                        goto loc_5C15C;
                                    }
                                    ptr5 = ptr0;
                                    goto loc_5C0D0;
                                loc_5C15C:
                                    ++ptr6;
                                }
                                while(ptr6 != ptr2);
                                int v9 = v4;
                                v3 += 16;
                                int* ptr12 = *(uint32_t*)(v2 + 8);
                                v4 = v9 + SOCK_STREAM;
                                param2 = *(uint32_t**)(ptr12 + 75);
                                v5 += (uint32_t)((uint32_t)v9 >= -1);
                            }
                            else {
                                goto loc_5C0D0;
                            }
                        }
                        else {
                            goto loc_5C0D0;
                        }
                    }
                    else {
                        goto loc_5C0D0;
                    }
                }
                while((uint32_t)param2 > (uint32_t)ptr2);
                return result;
            }
        loc_5C0D0:
            if((int)ptr5 < 0) {
                sub_5DF98(&g2, "src/spec.c", 336, "write hex msg fail");
                return (void*)-1;
            }
            sub_5DF98(&g2, "src/spec.c", 339, "write hex msg, buf is full");
            return (void*)SOCK_STREAM;
        }
        void* ptr13 = sub_5F0D4(ptr4, "buf=(null)", 10);
        char v10 = ptr13 == 0;
        if((int)ptr13 < 0) {
            sub_5DF98(&g2, "src/spec.c", 336, "write hex msg fail");
            return (void*)-1;
        }
        if(v10 == 0) {
            sub_5DF98(&g2, "src/spec.c", 339, "write hex msg, buf is full");
            return (void*)SOCK_STREAM;
        }
    }
    return NULL;
}
