int sub_192C8(int param0) {
    __int128 v0;
    uint32_t v1;
    char __ptr1;
    int64_t v2;
    int64_t v3;
    int v4 = 0;
    int v5 = 0;
    int v6 = 0;
    int result = sub_47158((int)(uint8_t)param0, &v6, SOCK_STREAM);
    if((uint8_t)result == 0) {
        v0 = (unsigned __int128)0L | ((unsigned __int128)v2 << 64);
        v1 = gvar_7EB9C;
    }
    else {
        v1 = gvar_7EB9C;
        VCVT.F64.S32(v3, v6);
        v0 = (unsigned __int128)v3 | ((unsigned __int128)0x401e666666666666L << 64);
        VMUL.F64(v3, v3, 0x400a666666666666L);
        VMUL.F64((uint64_t)v0, (uint64_t)v0, 0x3f50000000000000L);
        VMUL.F64((uint64_t)v0, (uint64_t)v0, (uint64_t)(v0 >>> 0x40X));
        if(v1 > 5) {
            snprintf(&__ptr1, 0x800, "an0 = %f.\n", (uint64_t)v0);
            result = sub_2E584(5, &__ptr1, 0);
            v1 = gvar_7EB9C;
            VCVT.F64.S32((uint64_t)v0, v6);
            VMUL.F64((uint64_t)v0, (uint64_t)v0, 0x400a666666666666L);
            VMUL.F64((uint64_t)v0, (uint64_t)v0, 0x3f50000000000000L);
            VMUL.F64((uint64_t)v0, (uint64_t)v0, (uint64_t)(v0 >>> 0x40X));
        }
    }
    if(v1 > 4) {
        snprintf(&__ptr1, 0x800, "chain = %d, voltage = %f\n", param0, (uint64_t)v0);
        result = sub_2E584(4, &__ptr1, 0);
    }
    return result;
}
