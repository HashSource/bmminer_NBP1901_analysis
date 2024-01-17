int sub_4E25C(uint32_t* param0, char* __s2) {
    int v0;
    size_t v1 = *param0;
    if(*(int*)&__s2[0] != v1) {
        return 0;
    }
    if(param0 != __s2) {
        char* ptr0 = __s2;
        uint32_t* ptr1 = param0;
        char v2 = (int)v1 < 4;
        char v3 = v1 == 4;
        char v4 = (((v1 - 4) ^ v1) & (v1 ^ 0x4)) < 0;
        char v5 = v1 >= 4;
        if(v5 == 0 || v3 != 0) {
            switch(v1) {
                case 0: {
                    goto loc_4E36C;
                }
                case 1: {
                    goto loc_4E2A8;
                }
                case 2: {
                    goto loc_4E3F0;
                }
                case 3: {
                    goto loc_4E344;
                }
                case 4: {
                    goto loc_4E330;
                }
                default: {
                    throw 0;
                }
            }
        loc_4E2A8:
            uint32_t v6 = *(param0 + 3);
            if(*(int*)&__s2[12] == v6) {
                if(v6 != 0) {
                    size_t __n = 1;
                    int v7 = 0;
                    while(SOCK_STREAM) {
                        if(v1 == SOCK_STREAM && *(ptr1 + 3) > v7) {
                            int v8 = *(int*)(v7 * 4 + *(ptr1 + 4));
                        }
                        else {
                            v8 = 0;
                        }
                        if(__n != SOCK_STREAM) {
                            return 0;
                        }
                        if((uint8_t)*(int*)&ptr0[12] <= v7) {
                            return 0;
                        }
                        __s2 = *(char**)(v7 * 4 + *(int*)&ptr0[16]);
                        if((__s2 != 0 ? v8 == 0: SOCK_STREAM) != 0) {
                            return 0;
                        }
                        int v9 = sub_4E25C(v8, (int)__s2);
                        if(v9 == 0) {
                            return 0;
                        }
                        ++v7;
                        if(v7 == v6) {
                            goto loc_4E418;
                        }
                        else {
                            v1 = *ptr1;
                            __n = *(int*)&ptr0[0];
                        }
                    }
                loc_4E344:
                    uint32_t* ptr2 = param0 + 2;
                    return (*(int*)&ptr0[12] == *(ptr2 + SOCK_STREAM) && *(int*)&ptr0[8] == *ptr2) != 0;
                loc_4E36C:
                    if(*(param0 + 2) != *(int*)&__s2[8]) {
                        return 0;
                    }
                    int* ptr3 = (int*)(param0 + 2);
                    int v10 = sub_4BE20(ptr3);
                    if(v10 == 0) {
                        return SOCK_STREAM;
                    }
                loc_4E3C4:
                    do {
                        int v11 = sub_4BEB0(v10);
                        if(v11 == 0) {
                            goto loc_4E418;
                        }
                        int* ptr4 = (int*)(v11 - 16);
                        int v12 = sub_4BEB8(ptr4);
                        __s2 = v11;
                        int v13 = v12;
                        int* ptr5 = (int*)ptr0;
                        if(v12 == 0) {
                            return SOCK_STREAM;
                        }
                        uint32_t* ptr6 = sub_4E234(ptr5, __s2);
                        __s2 = ptr6;
                        int v14 = v13;
                        if(ptr6 == 0) {
                            return 0;
                        }
                        int v15 = sub_4E25C(v14, (int)__s2);
                        __s2 = ptr4;
                        int v16 = (int)ptr3;
                        if(v15 == 0) {
                            return 0;
                        }
                        if(*ptr1 != 0) {
                            goto loc_4E418;
                        }
                        v10 = sub_4BE98(v16, (int*)__s2);
                        if(v10 == 0) {
                            goto loc_4E418;
                        }
                        goto loc_4E3C4;
                    loc_4E3F0:
                        __n = *(size_t*)(param0 + 3);
                        if(*(int*)&__s2[12] != __n) {
                            return 0;
                        }
                        int v17 = memcmp(*(void**)(param0 + 2), *(int*)&__s2[8], __n);
                        if(v17 != 0) {
                            return 0;
                        }
                        goto loc_4E418;
                    }
                    while(SOCK_STREAM);
                }
            loc_4E418:
                return SOCK_STREAM;
            loc_4E330:
                VCMP.F64(*(uint64_t*)(param0 + 2), *(int64_t*)&__s2[8]);
                VMRS((uint8_t)v4 | ((uint8_t)v5 << SOCK_STREAM) | ((uint8_t)v3 << 2) | ((uint8_t)v2 << 3), v0);
                return v3 != 0;
            }
        }
        return 0;
    }
    return SOCK_STREAM;
}
