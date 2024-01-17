int sub_45334(uint32_t* param0) {
    int* ptr0;
    int __s;
    int v0;
    memset(&__s, 0, 32);
    uint32_t v1 = gvar_50510C;
    size_t __n = *(size_t*)(param0 + 3);
    uint32_t v2 = gvar_505110 == v1 ? gvar_505114: v1;
    size_t __nmemb = (__n & 0x3f) <= 55 ? (size_t)((__n & 0xffffffc0) + 64): (size_t)((__n & 0xffffffc0) + 128);
    void* __dest = calloc(__nmemb, 1);
    void* __ptr = __dest;
    if(__dest != 0) {
        memcpy(__dest, *(void**)(param0 + 2), __n);
        int* ptr1 = (int*)((int)__dest + __nmemb);
        *(char*)((int)__dest + __n) = 128;
        *(ptr1 - 2) = 0;
        *(ptr1 - SOCK_STREAM) = (uint32_t)(uint8_t)(__n >>> 21) | ((uint32_t)(uint8_t)(__n >>> 13) << 8) | ((uint32_t)(uint8_t)(__n >>> 5) << 16) | ((uint32_t)((uint8_t)__n * 8) << 24);
        if(__nmemb != 0) {
            char* ptr2 = (char*)((int)__dest - SOCK_STREAM);
            int* ptr3 = (int*)(__nmemb - SOCK_STREAM + (int)__dest);
            char* ptr4 = (char*)(v2 - SOCK_STREAM);
            char* ptr5 = ptr2;
            char* ptr6 = ptr4;
            char* ptr7 = ptr4;
            do {
                char v3 = *(ptr5 + SOCK_STREAM);
                ++ptr5;
                *(ptr7 + SOCK_STREAM) = v3;
                ++ptr7;
            }
            while(ptr3 != ptr5);
            size_t v4 = __nmemb;
            int v5 = 0;
            int* ptr8 = (int*)(__nmemb + ptr4);
            do {
                int v6 = (uint32_t)*(ptr6 + SOCK_STREAM);
                ++ptr6;
                int v7 = (uint32_t)*(ptr2 + SOCK_STREAM);
                ++ptr2;
                if(v6 != v7) {
                    int v8 = v5;
                    int v9 = v7;
                    printf("%s: coinbase_padding_in_ddr[%d] = 0x%x, but *(coinbase_padding + %d) = 0x%x", "dhash_send_job", v5, v6, v8, v9);
                }
                ++v5;
            }
            while(ptr6 != ptr8);
            __nmemb = v4;
        }
        if(*(param0 + 5) != 0) {
            int v10 = 0;
            uint32_t v11 = __nmemb + v2;
            do {
                v11 += 32;
                int* ptr9 = (int*)(v10 * 32 + (int)*(param0 + 4));
                ++v10;
                int v12 = *(ptr9 + SOCK_STREAM);
                int v13 = *(ptr9 + 2);
                int v14 = *(ptr9 + 3);
                *(int*)(v11 - 32) = *ptr9;
                *(int*)(v11 - 28) = v12;
                *(int*)(v11 - 24) = v13;
                *(int*)(v11 - 20) = v14;
                int v15 = *(ptr9 + 5);
                int v16 = *(ptr9 + 6);
                int v17 = *(ptr9 + 7);
                *(int*)(v11 - 16) = *(ptr9 + 4);
                *(int*)(v11 - 12) = v15;
                *(int*)(v11 - 8) = v16;
                *(int*)(v11 - 4) = v17;
            }
            while((uint32_t)*(param0 + 5) > v10);
        }
        sub_444B8();
        uint32_t v18 = gvar_505118;
        sub_40390(41, gvar_50510C == v2 ? (int)(v18 + 0x200000): (int)(v18 + 0x210000));
        sub_40314(41, &v0);
        sub_40390(44, *(int*)(param0 + 8));
        sub_40314(44, &v0);
        sub_44F48(*(int*)(param0 + 9), *param0 == 0 ? *(int*)(param0 + SOCK_STREAM): SOCK_STREAM, *(int*)(param0 + 10));
        memset(&__s, 0, 32);
        char* ptr10 = *(param0 + 11);
        int* ptr11 = &v0;
        int* ptr12 = (int*)(ptr10 + 32);
        do {
            int v19 = (uint32_t)*(ptr10 + 2);
            ptr10 += 4;
            ptr11[SOCK_STREAM] = ((uint32_t)*(ptr10 - 3) * 0x100) | ((uint32_t)*(ptr10 - SOCK_STREAM) * 0x1000000) | (v19 * &ELFHeader) | (uint32_t)*(ptr10 - 4);
            ++ptr11;
        }
        while(ptr10 != ptr12);
        sub_4512C((int)&__s);
        sub_40390(46, *(int*)(param0 + 6));
        sub_40314(46, &v0);
        sub_40390(47, *(int*)(param0 + 7));
        sub_40314(47, &v0);
        sub_40390(36, (int)(int*)((int)(int*)((int)*(param0 + 13) * &ELFHeader) | (uint32_t)(uint16_t)((uint32_t)0 | ((uint32_t)(int*)((int)*(param0 + 14) & 0xffffff) << 8))) | (uint32_t)(uint8_t)(__nmemb >>> 6));
        sub_40314(36, &v0);
        int* ptr13 = *(param0 + 17);
        __s = *(param0 + 16);
        int* ptr14 = ptr13;
        sub_45244((int*)&__s);
        sub_45288((uint16_t)*(param0 + 5));
        sub_40390(42, (int)((uint16_t)*(param0 + 5) * 32 + (uint16_t)__nmemb));
        sub_40314(42, &v0);
        usleep(1000);
        sub_40390(20, (uint32_t)(int*)((int)*(param0 + 18) & 0x1ffff) | 0x80000000);
        sub_40314(20, &v0);
        int* ptr15 = *(param0 + SOCK_STREAM);
        int* ptr16 = *param0;
        int* ptr17 = *(param0 + 19);
        if(ptr16 == 0 && (uint32_t)ptr15 > SOCK_STREAM) {
            ptr16 = NULL;
            ptr0 = (int)(int*)((int)ptr15 * 0x100) & 0xf00;
        }
        else {
            ptr0 = &g100;
            if(ptr16 != 0) {
                ptr16 = &g4000;
            }
        }
        if(ptr17 != 0) {
            ptr17 = &g80;
            sub_452F8();
        }
        v0 = 0;
        sub_40314(35, &v0);
        sub_40390(35, (int)(int*)((int)(int*)((v0 & 0xfffff0bf) | 0x8060 | (int)ptr16) | (int)ptr0) | (int)ptr17);
        free(__ptr);
        gvar_505110 = v2;
        return 0;
    }
    return -4;
}
