int sub_26F7C(int param0, int param1) {
    int result;
    char v0;
    char v1;
    char v2;
    char v3;
    int v4;
    int v5;
    int64_t v6;
    int64_t v7;
    uint32_t v8 = sub_1E0F0();
    v4 = 0;
    if((int)v8 > 0) {
        int v9 = 0;
        int* ptr0 = (int*)(param0 * 0x400 + param1 - 4);
        do {
            ++v9;
            int v10 = *(ptr0 + SOCK_STREAM);
            ++ptr0;
            v4 += v10;
        }
        while(v8 != v9);
    }
    uint32_t v11 = sub_1E0F0();
    int v12 = sub_5FAF8(v4, (int)v11);
    uint32_t v13 = sub_1E0F0();
    if((int)v13 > 0) {
        int v14 = 0;
        int v15 = 0;
        int* ptr1 = (int*)(param0 * 0x400 + param1 - 4);
        do {
            int v16 = *(ptr1 + SOCK_STREAM);
            ++ptr1;
            ++v15;
            v3 = (int)v13 < v15;
            v2 = v13 == v15;
            v1 = (((v13 - v15) ^ v13) & (v13 ^ v15)) < 0;
            v0 = v13 >= v15;
            int v17 = v16 - v12;
            v14 += v17 * v17;
        }
        while(v13 != v15);
        uint32_t v18 = sub_1E0F0();
        result = sub_5FAF8(v14, (int)v18);
        VCVT.F64.S32(v6, result);
        VCMP.F64(v6, 0);
        VMRS((uint8_t)v1 | ((uint8_t)v0 << SOCK_STREAM) | ((uint8_t)v2 << 2) | ((uint8_t)v3 << 3), v5);
        VSQRT.F64(v7, v6);
        if(v3 != 0) {
            (uint64_t)param0 | ((uint64_t)param1 << 32) = sqrt((uint64_t)result | ((uint64_t)param1 << 32));
        }
        VCVT.F32.F64((uint32_t)v6, v7);
        return result;
    }
    return sub_1E0F0();
}
