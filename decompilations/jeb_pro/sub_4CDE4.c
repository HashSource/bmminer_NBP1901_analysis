int sub_4CDE4(int param0, int i, size_t __n1) {
    int v0 = *(int*)(param0 + 56);
    int v1 = param0;
    int __n1_1 = (int)__n1;
    int v2 = v0 + SOCK_STREAM;
    char v3 = v2 >= 0x800;
    *(int*)(param0 + 56) = v2;
    if(v3 == 0 || v2 == 0x800) {
        int v4 = *(int*)(param0 + 60);
        char v5 = v4 < 0x101;
        char v6 = v4 == 0x101;
        char v7 = (((v4 - 0x101) ^ v4) & (v4 ^ 0x101)) < 0;
        if(v4 == 0x101) {
            goto loc_4D074;
        }
        else {
            if((v6 == 0 && v7 == v5)) {
                v5 = v4 < 259;
                v7 = (((v4 - 259) ^ v4) & (v4 ^ 0x103)) < 0;
                if(v4 != 259) {
                    if(v7 == v5) {
                        if(v4 == 260) {
                            result = sub_4EB54();
                            goto loc_4CE48;
                        }
                        else if(v4 == 261) {
                            int result = sub_4EB60();
                            goto loc_4CE48;
                        }
                        else {
                            goto loc_4D164;
                        }
                    }
                    result = sub_4EA14();
                    goto loc_4CE48;
                }
                result = sub_4EB48();
                goto loc_4CE48;
            }
            v5 = v4 < 91;
            v6 = v4 == 91;
            v7 = (((v4 - 91) ^ v4) & (v4 ^ 0x5b)) < 0;
            int i2 = i;
            if(v4 == 91) {
                goto loc_4D084;
            }
            else if(v6 != 0 || v7 != v5) {
                goto loc_4D044;
            }
            else {
                if(v4 == 0x100) {
                    int __c = i & 0x10;
                    void* __src = *(void**)(param0 + 64);
                    size_t __n = *(size_t*)(param0 + 68);
                    if((i & 0x10) == 0) {
                        void* ptr0 = memchr(__src, __c, __n);
                        if(ptr0 != 0) {
                            sub_4C0CC(__n1_1, v1, 11, "\\u0000 is not allowed without JSON_ALLOW_NUL");
                            return __c;
                        }
                    }
                    result = sub_4E6F8(__src, __n);
                    *(int*)(v1 + 64) = 0;
                    *(int*)(v1 + 68) = 0;
                    goto loc_4CE48;
                }
                else if(v4 != 123) {
                    goto loc_4D164;
                }
                result = sub_4E1B0();
                if(result == 0) {
                    return 0;
                }
                sub_4C5CC(v1, __n1_1);
                int v8 = *(int*)(v1 + 60);
                if(v8 == 125) {
                    goto loc_4CE54;
                }
                else if(v8 == 0x100) {
                    void* __s = *(void**)(v1 + 64);
                    __n1 = *(size_t*)(v1 + 68);
                    *(int*)(v1 + 64) = 0;
                    *(int*)(v1 + 68) = 0;
                    if(__s == 0) {
                        return 0;
                    }
                    int v9 = i2 & SOCK_STREAM;
                }
                else {
                    goto loc_4D1E0;
                }
            }
        }
    loc_4CFE0:
        do {
            void* ptr1 = memchr(__s, 0, __n1);
            char* __s2 = (char*)__s;
            int* ptr2 = (int*)result;
            if(ptr1 == 0) {
                if(v9 != 0) {
                    uint32_t* ptr3 = sub_4E234(ptr2, __s2);
                    if(ptr3 != 0) {
                        sub_4D898(__s);
                        sub_4C0CC(__n1_1, v1, 14, "duplicate object key");
                        goto loc_4D01C;
                    }
                }
                sub_4C5CC(v1, __n1_1);
                int i1 = __n1_1;
                int v10 = v1;
                if(*(int*)(v1 + 60) == 58) {
                    sub_4C5CC(v10, i1);
                    uint32_t v11 = (uint32_t)sub_4CDE4(v1, i2, __n1_1);
                    uint32_t v12 = v11;
                    char* __src1 = (char*)__s;
                    int* ptr4 = (int*)result;
                    if(v11 != 0) {
                        int v13 = sub_4EE2C(ptr4, __src1, v12);
                        int v14 = v13;
                        void* ptr5 = __s;
                        if(v13 == 0) {
                            sub_4D898(ptr5);
                            sub_4C5CC(v1, __n1_1);
                            int v15 = *(int*)(v1 + 60);
                            i = __n1_1;
                            int v16 = v1;
                            if(v15 == 44) {
                                sub_4C5CC(v16, i);
                                if(*(int*)(v1 + 60) != 0x100) {
                                    goto loc_4D1E0;
                                }
                                __s = *(void**)(v1 + 64);
                                __n1 = *(size_t*)(v1 + 68);
                                *(int*)(v1 + 64) = v14;
                                *(int*)(v1 + 68) = v14;
                                if(__s == 0) {
                                    return 0;
                                }
                                goto loc_4CFE0;
                            }
                            if(v15 == 125) {
                                goto loc_4CE54;
                            }
                            sub_4C0CC(__n1_1, v1, 8, "\'}\' expected");
                            goto loc_4D01C;
                        }
                        sub_4D898(ptr5);
                        goto loc_4D01C;
                    }
                    sub_4D898(__s);
                    goto loc_4D01C;
                }
                sub_4D898(__s);
                sub_4C0CC(__n1_1, v1, 8, "\':\' expected");
                goto loc_4D01C;
            }
            sub_4D898(__s);
            sub_4C0CC(__n1_1, v1, 13, "NUL byte in object key not supported");
            goto loc_4D01C;
        loc_4D1E0:
            sub_4C0CC(__n1_1, v1, 8, "string or \'}\' expected");
        loc_4D01C:
            if(*(int*)(result + 4) == -1) {
                return 0;
            }
            uint32_t* ptr6 = (uint32_t*)(result + 4);
            DMB();
            __n1 = *ptr6 - SOCK_STREAM;
            --*ptr6;
            goto loc_4D138;
        loc_4D044:
            if(v4 != -1) {
                goto loc_4D164;
            }
            sub_4C0CC(__n1_1, param0, 8, "invalid token");
            return 0;
        loc_4D164:
            sub_4C0CC(__n1_1, v1, 8, "unexpected token");
            return 0;
        loc_4D084:
            result = sub_4E540();
            if(result == 0) {
                return 0;
            }
            sub_4C5CC(v1, __n1_1);
            int v17 = *(int*)(v1 + 60);
            if(v17 == 93) {
                goto loc_4CE54;
            }
            if(v17 != 0) {
            loc_4D0FC:
                do {
                    int v18 = sub_4CDE4(v1, i2, __n1_1);
                    i = v18;
                    int* ptr7 = (int*)result;
                    if(v18 == 0) {
                        goto loc_4D114;
                    }
                    else {
                        ptr1 = sub_4F494(ptr7, i);
                        i = __n1_1;
                        int v19 = v1;
                        if(ptr1 != 0) {
                            goto loc_4D114;
                        }
                        sub_4C5CC(v19, i);
                        int v20 = *(int*)(v1 + 60);
                        i = __n1_1;
                        int v21 = v1;
                        if(v20 == 44) {
                            sub_4C5CC(v21, i);
                            if(*(int*)(v1 + 60) == 0) {
                                goto loc_4D1C4;
                            }
                            else {
                                goto loc_4D0FC;
                            }
                        }
                        if(v20 == 93) {
                            goto loc_4CE54;
                        }
                        goto loc_4D1C4;
                    }
                }
                while(SOCK_STREAM);
            loc_4D1C4:
            }
            sub_4C0CC(__n1_1, v1, 8, "\']\' expected");
        loc_4D114:
            if(*(int*)(result + 4) == -1) {
                return 0;
            }
            ptr6 = result + 4;
            DMB();
            __n1 = *ptr6 - SOCK_STREAM;
            --*ptr6;
        loc_4D138:
            if(__n1 != 0) {
                return 0;
            }
            sub_4EB6C((void*)result);
            return 0;
        loc_4D074:
            int* ptr8 = (int*)(param0 + 64);
            result = sub_4E990(*ptr8, *(ptr8 + SOCK_STREAM));
        loc_4CE48:
            if(result == 0) {
                return 0;
            }
        loc_4CE54:
            --*(int*)(v1 + 56);
            return result;
        }
        while(SOCK_STREAM);
        return 0;
    }
    sub_4C0CC((int)__n1, param0, 2, "maximum parsing depth reached");
    return 0;
}
