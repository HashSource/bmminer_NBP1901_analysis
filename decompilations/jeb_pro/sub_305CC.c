int* sub_305CC(int* param0, int* param1) {
    __int128 v0;
    __int128 v1;
    int v2 = *param1;
    VCVT.F64.S32((uint64_t)(((unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(*(param0 + SOCK_STREAM) - *(param1 + SOCK_STREAM)) << 96)) >>> 0x40X), *(param0 + SOCK_STREAM) - *(param1 + SOCK_STREAM));
    VCVT.F64.S32((uint64_t)((unsigned __int128)(*param0 - v2) | ((unsigned __int128)((v1 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32)), *param0 - v2);
    VDIV.F64((uint64_t)v0, (uint64_t)(((unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(*(param0 + SOCK_STREAM) - *(param1 + SOCK_STREAM)) << 96)) >>> 0x40X), 0x412e848000000000L);
    return param0;
}
