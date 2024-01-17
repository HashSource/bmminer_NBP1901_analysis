void sub_1F2E8() {
    __int128 v0;
    __int128 v1;
    __int128 v2 = (unsigned __int128)gvar_58E344 | ((unsigned __int128)((v0 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
    VCVT.F64.S32((uint64_t)((unsigned __int128)(uint64_t)v1 | ((unsigned __int128)gvar_5903F8 << 64) | ((unsigned __int128)(uint32_t)(v1 >>> 0x60X) << 96)), (uint32_t)(((unsigned __int128)(uint64_t)v1 | ((unsigned __int128)gvar_5903F8 << 64) | ((unsigned __int128)(uint32_t)(v1 >>> 0x60X) << 96)) >>> 0x40X));
    VCVT.F64.S32((uint64_t)(((unsigned __int128)(uint64_t)v1 | ((unsigned __int128)gvar_5903F8 << 64) | ((unsigned __int128)(uint32_t)(v1 >>> 0x60X) << 96)) >>> 0x40X), (uint32_t)v2);
    VDIV.F64((uint64_t)v2, gvar_80F50, (uint64_t)((unsigned __int128)(uint64_t)v1 | ((unsigned __int128)gvar_5903F8 << 64) | ((unsigned __int128)(uint32_t)(v1 >>> 0x60X) << 96)) + (uint64_t)(((unsigned __int128)(uint64_t)v1 | ((unsigned __int128)gvar_5903F8 << 64) | ((unsigned __int128)(uint32_t)(v1 >>> 0x60X) << 96)) >>> 0x40X));
}
