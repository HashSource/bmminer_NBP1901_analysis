int sub_60180(int param0, int param1) {
    int64_t v0;
    __int128 v1 = (unsigned __int128)((uint64_t)param0 | ((uint64_t)param1 << 32)) | ((unsigned __int128)0x3df0000000000000L << 64);
    VMUL.F64((uint64_t)(v1 >>> 0x40X), (uint64_t)param0 | ((uint64_t)param1 << 32), (uint64_t)(v1 >>> 0x40X));
    VCVT.U32.F64((uint32_t)(v1 >>> 0x40X), (uint64_t)(v1 >>> 0x40X));
    VCVT.F64.U32(v0, (uint32_t)(v1 >>> 0x40X));
    VMLS.F64((uint64_t)v1, v0, 0x41f0000000000000L);
    VCVT.U32.F64((uint32_t)(v1 >>> 0x60X), (uint64_t)v1);
    return (uint32_t)(v1 >>> 0x60X);
}
