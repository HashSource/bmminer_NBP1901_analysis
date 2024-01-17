uint32_t* sub_43AE8(int param0, int param1) {
    int __ptr;
    uint32_t* ptr0 = *(uint32_t**)param0;
    int* ptr1 = (int*)(param0 + 4);
    if(ptr0 != ptr1) {
        int v0 = param1;
        int v1 = param0;
    loc_43B24:
        do {
            sub_44000(ptr0[4], &__ptr);
            int v2 = *(int*)(v1 + 36)(v0, (int)__ptr);
            free(__ptr);
            char v3 = v2 < 0;
            uint32_t* ptr2 = ptr0[0];
            if(v2 != 0) {
                ptr0 = ptr0[SOCK_STREAM];
                if(v3 != 0) {
                    ptr0 = ptr2;
                }
                if(ptr0 == ptr1) {
                    goto loc_43C04;
                }
                else {
                    goto loc_43B24;
                }
            }
            uint32_t* ptr3 = ptr0[SOCK_STREAM];
            if(ptr2 == ptr1) {
            loc_43B68:
                uint32_t* result = ptr0;
                goto loc_43B8C;
            loc_43B74:
                uint32_t* ptr4 = (uint32_t*)ptr3[0];
                while(ptr4 != ptr1) {
                    ptr3 = ptr4;
                    ptr4 = ptr3[0];
                }
                result = ptr3;
                ptr3 = ptr3[SOCK_STREAM];
            }
            else if(ptr3 != ptr1) {
                goto loc_43B74;
            }
            else {
                ptr3 = ptr2;
                goto loc_43B68;
            }
        loc_43B8C:
            ptr3[2] = result[2];
            uint32_t v4 = result[2];
            if(v4 == 0) {
                *(uint32_t**)v1 = ptr3;
            }
            else if(*(int*)v4 == result) {
                *(uint32_t**)v4 = ptr3;
            }
            else {
                *(uint32_t**)(v4 + 4) = ptr3;
            }
            if(ptr0 != result) {
                uint32_t v5 = ptr0[4];
                uint32_t v6 = ptr0[5];
                uint32_t v7 = result[5];
                ptr0[4] = result[4];
                result[4] = v5;
                ptr0[5] = v7;
                result[5] = v6;
            }
            if(result[3] == 0) {
                uint32_t* ptr5 = *(uint32_t**)v1;
            loc_43C14:
                while(ptr5 != ptr3) {
                loc_43C20:
                    while(ptr3[3] == 0) {
                        uint32_t* ptr6 = (uint32_t*)ptr3[2];
                        uint32_t* ptr7 = (uint32_t*)ptr6[0];
                        if(ptr7 != ptr3) {
                            if(ptr7[3] == SOCK_STREAM) {
                                ptr7[3] = 0;
                                ptr6[3] = 1;
                                sub_434E0((uint32_t*)v1, ptr6);
                                ptr6 = ptr3[2];
                                ptr7 = ptr6[0];
                            }
                            uint32_t v8 = ptr7[SOCK_STREAM];
                            uint32_t v9 = ptr7[0];
                            int v10 = *(int*)(v9 + 12);
                            if(*(int*)(v8 + 12) == 0) {
                                ptr3 = ptr6;
                                if(v10 == 0) {
                                    goto loc_43C64;
                                }
                                else {
                                    goto loc_43CB8;
                                }
                            }
                            if(v10 == 0) {
                                *(int*)(v8 + 12) = 0;
                                ptr7[3] = 1;
                                sub_4348C((uint32_t*)v1, ptr7);
                                ptr3 = ptr3[2];
                                ptr7 = ptr3[0];
                                v9 = ptr7[0];
                            }
                            else {
                                ptr3 = ptr6;
                            }
                        loc_43CB8:
                            ptr7[3] = ptr3[3];
                            ptr3[3] = 0;
                            *(uint32_t*)(v9 + 12) = 0;
                            sub_434E0((uint32_t*)v1, ptr3);
                            ptr3 = *(uint32_t**)v1;
                            ptr5 = *(uint32_t**)v1;
                            goto loc_43C14;
                        }
                        ptr7 = ptr6[SOCK_STREAM];
                        if(ptr7[3] == SOCK_STREAM) {
                            ptr7[3] = 0;
                            ptr6[3] = 1;
                            sub_4348C((uint32_t*)v1, ptr6);
                            ptr6 = ptr3[2];
                            ptr7 = ptr6[SOCK_STREAM];
                        }
                        uint32_t v11 = ptr7[0];
                        v9 = ptr7[SOCK_STREAM];
                        int v12 = *(int*)(v9 + 12);
                        if(*(int*)(v11 + 12) == 0) {
                            ptr3 = ptr6;
                            if(v12 == 0) {
                            loc_43C64:
                                ptr7[3] = 1;
                                if(*(int*)v1 != ptr3) {
                                    goto loc_43C20;
                                }
                                goto loc_43C78;
                            }
                            else {
                                goto loc_43D10;
                            }
                        }
                        if(v12 == 0) {
                            *(int*)(v11 + 12) = 0;
                            ptr7[3] = 1;
                            sub_434E0((uint32_t*)v1, ptr7);
                            ptr3 = ptr3[2];
                            ptr7 = ptr3[SOCK_STREAM];
                            v9 = ptr7[SOCK_STREAM];
                        }
                        else {
                            ptr3 = ptr6;
                        }
                    loc_43D10:
                        ptr7[3] = ptr3[3];
                        ptr3[3] = 0;
                        *(uint32_t*)(v9 + 12) = 0;
                        sub_4348C((uint32_t*)v1, ptr3);
                        ptr3 = *(uint32_t**)v1;
                        ptr5 = *(uint32_t**)v1;
                        goto loc_43C14;
                    }
                }
            loc_43C78:
                ptr3[3] = 0;
            }
            sub_4372C(v1);
            return result;
        }
        while(SOCK_STREAM);
    loc_43C04:
    }
    return NULL;
}
