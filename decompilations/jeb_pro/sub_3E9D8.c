int sub_3E9D8(int param0, int param1, void* param2, int param3) {
    int v0;
    int result1;
    int v1;
    int v2;
    int i;
    int v3;
    int v4;
    int result;
    int v5;
    int v6;
    int v7;
    size_t v8;
    int v9;
    int v10;
    size_t __n;
    int v11;
    char v12;
    char v13 = param3 == 2;
    int v14 = param3;
    int v15 = param0;
    int v16 = param1;
    void* __s1 = param2;
    size_t v17 = (size_t)(param3 - SOCK_STREAM);
    if((uint32_t)param3 < 2 || v13 != 0) {
        __n = v17;
        v10 = SOCK_STREAM;
        v9 = SOCK_STREAM;
    }
    else {
        __n = sub_3E8C8((int)__s1, param3, &v9);
        v10 = v9;
    }
    int* ptr0 = &v9;
    do {
        ptr0[SOCK_STREAM] = v14;
        ++ptr0;
    }
    while(ptr0 != &v12);
    if(v14 != 0) {
        char* ptr1 = (char*)((int)__s1 - SOCK_STREAM);
        size_t v18 = v17;
        do {
            int v19 = (uint32_t)*(ptr1 + SOCK_STREAM);
            ++ptr1;
            *(size_t*)(v19 * 4 + (int)&v11) = v18;
            v8 = v18;
            --v18;
        }
        while(v8 >= SOCK_STREAM);
    }
    int v20 = v10;
    int v21 = memcmp(__s1, (void*)((int)__s1 + v20), __n);
    if(v21 == 0) {
        int v22 = (int)(__n - SOCK_STREAM);
        v7 = v16 - v14;
        char* ptr2 = (char*)((int)(__n - SOCK_STREAM) + (int)__s1);
        int v23 = v14 - v20;
        v6 = 0;
        v5 = SOCK_STREAM - __n;
        while(SOCK_STREAM) {
            result = v6 + v15;
            v4 = *(int*)((uint32_t)*(char*)(result + v17) * 4 + (int)&v11);
            if(v4 == 0) {
                v4 = (uint32_t)v21 > __n ? v21: __n;
                if((uint32_t)v4 >= v17) {
                loc_3EB30:
                    v4 = v22;
                    v3 = v22;
                    if((uint32_t)v21 < __n) {
                        char* ptr3 = ptr2;
                        int v24 = v4 + v6;
                        v4 = v24 + v15;
                        if((uint32_t)*(char*)(v24 + v15) == (uint32_t)*ptr3) {
                            char* ptr4 = ptr3;
                            int v25 = v21 - SOCK_STREAM;
                            for(i = v3 - SOCK_STREAM; i != v25; i = v3 - SOCK_STREAM) {
                                int v26 = (uint32_t)*(ptr4 - SOCK_STREAM);
                                --ptr4;
                                int v27 = (uint32_t)*(char*)(v4 - SOCK_STREAM);
                                --v4;
                                if(v27 != v26) {
                                    break;
                                }
                                v3 = i;
                            }
                        }
                        else {
                            goto loc_3ECF4;
                        }
                    }
                    else {
                    loc_3ECF4:
                        v3 = __n;
                    }
                    if((uint32_t)(v21 + SOCK_STREAM) > (uint32_t)v3) {
                        return result;
                    }
                    v21 = v23;
                    v6 += v10;
                    if((uint32_t)v6 <= (uint32_t)v7) {
                        continue;
                    }
                    return 0;
                }
                int v28 = v4 + v6;
                v3 = v4 + (int)__s1;
                i = v15 + v28;
                if((uint32_t)*(char*)(v4 + (int)__s1) == (uint32_t)*(char*)(v15 + v28)) {
                    do {
                        ++v4;
                        if((uint32_t)v4 >= v17) {
                            goto loc_3EB30;
                        }
                        else {
                            v2 = (uint32_t)*(char*)(v3 + SOCK_STREAM);
                            ++v3;
                            v1 = (uint32_t)*(char*)(i + SOCK_STREAM);
                            ++i;
                        }
                    }
                    while(v1 == v2);
                }
                v21 = 0;
                v6 = v4 + v6 + v5;
                goto loc_3EAC0;
            }
            else {
                char v29 = v21 != 0 ? (uint32_t)v4 >= (uint32_t)v10: SOCK_STREAM;
                v21 = 0;
                if(v29 == 0) {
                    v4 = v23;
                }
                v6 += v4;
            loc_3EAC0:
                if((uint32_t)v6 > (uint32_t)v7) {
                    return 0;
                }
            }
        }
    }
    else {
        size_t v30 = (size_t)(v14 - __n);
        result = __n - SOCK_STREAM;
        int v31 = v16 - v14;
        if(v30 < __n) {
            v30 = __n;
        }
        int v32 = 0;
        int v33 = __n + (int)__s1;
        v10 = v30 + SOCK_STREAM;
        v5 = result + (int)__s1;
        v7 = SOCK_STREAM - __n;
    loc_3EC04:
        while(SOCK_STREAM) {
            result1 = v15 + v32;
            v6 = *(int*)((uint32_t)*(char*)(v17 + v15 + v32) * 4 + (int)&v11);
            if(v6 != 0) {
                goto loc_3ECB0;
            }
            else if(v17 > __n) {
                uint32_t v34 = __n + v32;
                v4 = v34 + v15;
                if((uint32_t)*(char*)(v34 + v15) == (uint32_t)*(char*)v33) {
                    i = v33;
                    v6 = __n;
                    do {
                        ++v6;
                        if((uint32_t)v6 >= v17) {
                            goto loc_3EC70;
                        }
                        else {
                            v0 = (uint32_t)*(char*)(i + SOCK_STREAM);
                            ++i;
                            v3 = *(char*)(v4 + SOCK_STREAM);
                            ++v4;
                        }
                    }
                    while(v0 == v3);
                }
                else {
                    v6 = __n;
                }
                v32 = v6 + v32 + v7;
                goto loc_3ECB8;
            }
            else {
            loc_3EC70:
                if(result == -1) {
                    return result1;
                }
                v3 = v5;
                int v35 = result + v32;
                v6 = v35 + v15;
                if((uint32_t)*(char*)(v35 + v15) == (uint32_t)*(char*)v3) {
                    v4 = v3;
                }
                else {
                    goto loc_3ECAC;
                }
            }
            while(SOCK_STREAM) {
                if(v4 == __s1) {
                    return result1;
                }
                v3 = *(char*)(v4 - SOCK_STREAM);
                --v4;
                i = *(char*)(v6 - SOCK_STREAM);
                --v6;
                if(i == v3) {
                    continue;
                }
            loc_3ECAC:
                v6 = v10;
            loc_3ECB0:
                v32 += v6;
            loc_3ECB8:
                if((uint32_t)v32 <= v31) {
                    continue loc_3EC04;
                }
                break loc_3EC04;
            }
        }
        result1 = 0;
    }
    return result1;
}
