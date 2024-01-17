int sub_5DAC0(uint32_t* param0, int* param1, uint32_t* param2) {
    int v0;
    int v1;
    __int128 v2;
    uint32_t* ptr0 = param0;
    int v3 = *(param0 + 3)((int)param1, (int)param1, (int)param2);
    int v4 = *(int*)(ptr0 + 2);
    sub_5FADC(v3, v4);
    uint32_t* ptr1 = *(uint32_t*)((int)(uint32_t*)((int)param1 * 4) + (int)*(ptr0 + SOCK_STREAM));
    char v5 = (int)ptr1 < 0;
    char v6 = ptr1 == 0;
    if(ptr1 != 0) {
        do {
            int v7 = *(ptr0 + 4)((int)param1, (int)*(ptr1 + SOCK_STREAM));
            if(v7 != 0) {
                int* ptr2 = *(ptr0 + 5);
                if(ptr2 != 0) {
                    ptr2((int)*(ptr1 + SOCK_STREAM));
                }
                int* ptr3 = *(ptr0 + 6);
                if(ptr3 != 0) {
                    ptr3((int)*(ptr1 + 2));
                }
                *(ptr1 + SOCK_STREAM) = param1;
                *(ptr1 + 2) = param2;
                return 0;
            }
            ptr1 = *(ptr1 + 4);
            v5 = (int)ptr1 < 0;
            v6 = ptr1 == 0;
        }
        while(ptr1 != 0);
        v4 = *(int*)(ptr0 + 2);
    }
    __int128 v8 = (unsigned __int128)0x3ff4cccccccccccdL | ((unsigned __int128)(uint64_t)(((unsigned __int128)(v2 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v4 << 96)) >>> 0x40X) << 64);
    VCVT.F64.U32((uint64_t)(v8 >>> 0x40X), (uint32_t)(v8 >>> 0x60X));
    VMUL.F64((uint64_t)(v8 >>> 0x40X), (uint64_t)(v8 >>> 0x40X), (uint64_t)v8);
    v2 = (unsigned __int128)(uint32_t)v8 | ((unsigned __int128)*ptr0 << 32) | ((unsigned __int128)(uint64_t)(v8 >>> 0x40X) << 64);
    VCVT.F64.U32((uint64_t)v2, (uint32_t)(v2 >>> 0x20X));
    VCMPE.F64((uint64_t)v2, (uint64_t)(v2 >>> 0x40X));
    VMRS((uint8_t)2 | ((uint8_t)v6 << 2) | ((uint8_t)v5 << 3), v1);
    if((v6 == 0 && v5 == 0)) {
        void* ptr4 = calloc((size_t)(v4 * 2), 4);
        if(ptr4 == 0) {
            int* ptr5 = __errno_location();
            v0 = ptr5[0];
            sub_5DF98(&g2, "src/zc_hashtable.c", 126, "calloc fail, errno[%d]");
            sub_5DF98(&g2, "src/zc_hashtable.c", 205, "rehash fail");
            return -1;
        }
        void* __ptr = *(void**)(ptr0 + SOCK_STREAM);
        if(v4 != 0) {
            void* ptr6 = __ptr;
            uint32_t* ptr7 = ptr0;
            int* ptr8 = (int*)(v4 * 4 + (int)ptr6);
            do {
                int* ptr9 = *(int**)ptr6;
                ptr6 = (int)ptr6 + 4;
                while(ptr9 != 0) {
                    int* ptr10 = *(ptr9 + 4);
                    int v9 = *ptr9;
                    *(ptr9 + 3) = 0;
                    *(ptr9 + 4) = 0;
                    sub_5FADC(v9, (int)(size_t)(v4 * 2));
                    uint32_t* ptr11 = *(uint32_t*)((int)(uint32_t*)((int)param1 * 4) + (int)ptr4);
                    if(ptr11 != 0) {
                        *(ptr11 + 3) = ptr9;
                        *(ptr9 + 4) = *(int*)((int)(int*)((int)param1 * 4) + (int)ptr4);
                    }
                    *(uint32_t*)((int)(uint32_t*)((int)param1 * 4) + (int)ptr4) = ptr9;
                    ptr9 = ptr10;
                }
            }
            while(ptr8 != ptr6);
            ptr0 = ptr7;
        }
        free(__ptr);
        *(void**)(ptr0 + SOCK_STREAM) = ptr4;
        *(size_t*)(ptr0 + 2) = (size_t)(v4 * 2);
    }
    void* ptr12 = calloc(1, 20);
    if(ptr12 != 0) {
        int v10 = *(ptr0 + 3)((int)param1);
        int v11 = *(int*)(ptr0 + 2);
        *(int*)((int)ptr12 + 16) = 0;
        *(uint32_t*)((int)ptr12 + 8) = param2;
        *(int*)((int)ptr12 + 12) = 0;
        *(int*)ptr12 = v10;
        *(uint32_t*)((int)ptr12 + 4) = param1;
        sub_5FADC(v10, v11);
        param2 = *(ptr0 + SOCK_STREAM);
        int* ptr13 = *(uint32_t*)((int)(uint32_t*)((int)param1 * 4) + (int)param2);
        if(ptr13 != 0) {
            *(void**)(ptr13 + 3) = ptr12;
            *(uint32_t*)((int)ptr12 + 16) = *(uint32_t*)((int)(uint32_t*)((int)param1 * 4) + (int)param2);
        }
        uint32_t* ptr14 = *ptr0;
        *(void**)((int)(int*)((int)param1 * 4) + (int)param2) = ptr12;
        *ptr0 = (uint32_t*)((char*)ptr14 + SOCK_STREAM);
        return 0;
    }
    int* ptr15 = __errno_location();
    v0 = ptr15[0];
    sub_5DF98(&g2, "src/zc_hashtable.c", 212, "calloc fail, errno[%d]");
    return -1;
}
