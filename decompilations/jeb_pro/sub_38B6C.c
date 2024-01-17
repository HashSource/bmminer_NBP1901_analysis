int sub_38B6C(int param0, int param1) {
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
    if((int)v8 <= 0) {
        v4 = 0;
    }
    else {
        int v9 = (param0 * 0x100 + v8) * 4 + param1 + 0x808ffc;
        int* ptr0 = (int*)(param0 * 0x400 + param1 + 0x808ffc);
        v4 = 0;
        do {
            int v10 = *(ptr0 + SOCK_STREAM);
            ++ptr0;
            v4 += v10;
        }
        while(v9 != ptr0);
    }
    uint32_t v11 = sub_1E0F0();
    int v12 = sub_5FAF8(v4, (int)v11);
    uint32_t v13 = sub_1E0F0();
    if((int)v13 > 0) {
        int v14 = (param0 * 0x100 + v13) * 4 + param1 + 0x808ffc;
        int* ptr1 = (int*)(param0 * 0x400 + param1 + 0x808ffc);
        int v15 = 0;
        do {
            int v16 = *(ptr1 + SOCK_STREAM);
            ++ptr1;
            v3 = v14 > (int)ptr1;
            v2 = v14 == ptr1;
            v1 = (int)(int*)((int)(int*)((int)(int*)((int)ptr1 - v14) ^ (int)ptr1) & (int)(int*)(v14 ^ (int)ptr1)) < 0;
            v0 = v14 <= (uint32_t)ptr1;
            int v17 = v16 - v12;
            v15 += v17 * v17;
        }
        while(v14 != ptr1);
        uint32_t v18 = sub_1E0F0();
        result = sub_5FAF8(v15, (int)v18);
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
