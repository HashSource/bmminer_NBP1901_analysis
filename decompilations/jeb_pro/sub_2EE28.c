int sub_2EE28(int param0, int* param1, int* param2) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    char v8;
    int v9;
    int v10;
    char v11;
    int v12;
    if((int)param2 <= 0) {
        return param0;
    }
    int* ptr1 = (int*)&gvar_7EBA4;
    int* ptr2 = (int*)(param0 + 0x88);
    int* ptr3 = param1;
    int* ptr4 = (int*)((int)(int*)((int)param2 * 64) + (int)param1);
    int v13 = param0 + 168;
    do {
        char* ptr5 = (char*)ptr3;
        int* ptr6 = &v10;
        int* ptr7 = &v7;
        do {
            int v14 = (uint32_t)*(ptr5 + SOCK_STREAM);
            int v15 = (uint32_t)*(ptr5 + 2);
            int v16 = (uint32_t)*(ptr5 + 3);
            int v17 = (uint32_t)*ptr5;
            ptr5 += 4;
            *(ptr6 + SOCK_STREAM) = (v17 * 0x1000000) | (v14 * &ELFHeader) | (v15 * 0x100) | v16;
            ++ptr6;
        }
        while(ptr6 != &v11);
        do {
            int v18 = *(ptr7 + 14);
            int* ptr8 = ptr7;
            int v19 = *(ptr7 + SOCK_STREAM);
            ++ptr7;
            *(ptr7 + 15) = (((__ror__(v19, 7)) ^ (__ror__(v19, 18))) ^ (v19 >>> 3)) + (((__ror__(v18, 17)) ^ (__ror__(v18, 19))) ^ (v18 >>> 10)) + (*(ptr8 + 9) + *ptr8);
        }
        while(ptr7 != &v8);
        int v20 = v13;
        int* ptr9 = &v13;
        int* ptr10 = ptr2;
        int* ptr11 = ptr2;
        do {
            int v21 = *ptr10;
            ++ptr10;
            *(ptr9 + SOCK_STREAM) = v21;
            ++ptr9;
        }
        while(v20 != ptr10);
        int* ptr12 = ptr10;
        int v22 = 0;
        int v23 = v10;
        int v24 = v6;
        int v25 = v4;
        int v26 = v2;
        int v27 = v9;
        int v28 = v5;
        int v29 = v3;
        int v30 = v12;
        while(SOCK_STREAM) {
            int v31 = ((~v24 & v26) ^ (v24 & v25)) + (((__ror__(v24, 6)) ^ (__ror__(v24, 11))) ^ (__ror__(v24, 25))) + *(int*)(v22 * 4 + (int)&v7);
            int v32 = *(int*)(v22 * 4 + (int)ptr1);
            ++v22;
            int v33 = v31 + v23 + v32;
            v1 = v33 + v30;
            v0 = (((v29 ^ v28) & v27) ^ (v29 & v28)) + (((__ror__(v27, 2)) ^ (__ror__(v27, 13))) ^ (__ror__(v27, 22))) + v33;
            v30 = v29;
            v23 = v26;
            if(v22 == 64) {
                break;
            }
            v29 = v28;
            v26 = v25;
            v28 = v27;
            v25 = v24;
            v27 = v0;
            v24 = v1;
        }
        v9 = v0;
        int* ptr13 = ptr12;
        param1 = &v13;
        int* ptr14 = ptr11;
        v10 = v26;
        v6 = v1;
        v4 = v24;
        v2 = v25;
        v5 = v27;
        v3 = v28;
        v12 = v29;
        do {
            param0 = *ptr14;
            int v34 = *(param1 + SOCK_STREAM);
            ++param1;
            *ptr14 += v34;
            ++ptr14;
        }
        while(ptr14 != ptr13);
        ptr0 = ptr3 + 16;
        ptr3 += 16;
    }
    while(ptr0 != ptr4);
    return param0;
}
