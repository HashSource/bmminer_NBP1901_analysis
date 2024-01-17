int sub_3D6EC(char* __s, int* param1) {
    __int128 v0;
    __int128 v1 = (unsigned __int128)(uint64_t)v0 | ((unsigned __int128)*param1 << 64) | ((unsigned __int128)(uint32_t)(v0 >>> 0x60X) << 96);
    VCVT.F64.F32((uint64_t)(v1 >>> 0x40X), (uint32_t)(v1 >>> 0x40X));
    return snprintf(__s, 80, "%.1f");
}
