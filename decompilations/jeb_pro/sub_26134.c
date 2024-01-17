int sub_26134(int param0, int param1) {
    char __ptr1;
    int v0;
    int v1;
    time_t v2 = sub_26104();
    uint32_t v3 = gvar_99EE08;
    uint32_t v4 = gvar_7FA10;
    uint32_t v5 = gvar_99EE0C;
    uint32_t v6 = gvar_7FA14;
    uint32_t v7 = gvar_7FA08;
    char v8 = (int)v4 > (int)v3;
    char v9 = v4 == v3;
    char v10 = (((v3 - v4) ^ v3) & (v4 ^ v3)) < 0;
    uint8_t v11 = (uint8_t)(v4 <= v3);
    gvar_7FA08 = (uint32_t)v2;
    int v12 = (int)(v2 - v7);
    int v13 = sub_600B4(v3 - v4, ~v6 + v11 + v5);
    __int128 v14 = (unsigned __int128)0x41cdcd6500000000L | ((unsigned __int128)((uint64_t)v13 | ((uint64_t)param1 << 32)) << 64);
    __int128 v15 = (unsigned __int128)v0 | ((unsigned __int128)v12 << 32) | ((unsigned __int128)0x41efffffffe00000L << 64);
    VMUL.F64((uint64_t)(v15 >>> 0x40X), (uint64_t)(v14 >>> 0x40X), (uint64_t)(v15 >>> 0x40X));
    VCVT.F64.S32((uint64_t)v15, (uint32_t)(v15 >>> 0x20X));
    gvar_7FA10 = v3;
    gvar_7FA14 = v5;
    VDIV.F64((uint64_t)(v14 >>> 0x40X), (uint64_t)(v15 >>> 0x40X), (uint64_t)v14);
    VDIV.F64((uint64_t)(v15 >>> 0x40X), (uint64_t)(v14 >>> 0x40X), (uint64_t)v15);
    gvar_99EE00 = (uint64_t)(v15 >>> 0x40X);
    int result = sub_1A18C();
    VCVT.F64.S32((uint64_t)(((unsigned __int128)(v15 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)result << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(v15 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)result << 96)) >>> 0x60X));
    __int128 v16 = (unsigned __int128)gvar_99EE00 | ((unsigned __int128)(uint64_t)(((unsigned __int128)(v15 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)result << 96)) >>> 0x40X) << 64);
    VMUL.F64((uint64_t)(v16 >>> 0x40X), (uint64_t)(v16 >>> 0x40X), 0.75);
    VCMPE.F64((uint64_t)(v16 >>> 0x40X), (uint64_t)v16);
    VMRS((uint8_t)v10 | ((uint8_t)v11 << SOCK_STREAM) | ((uint8_t)v9 << 2) | ((uint8_t)v8 << 3), v1);
    if(v9 != 0 || v10 != v8 || gvar_7EB9C <= 3) {
        return result;
    }
    snprintf(&__ptr1, 0x800, "avg rate is lower than ideal rate, %0.2f in %ld mins\n", (uint64_t)v16, v12 >> 31);
    return sub_2E584(3, &__ptr1, 0);
}
