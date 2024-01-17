int sub_26618(int param0, int param1, size_t __n) {
    char v0;
    char v1;
    __int128 v2;
    char v3;
    int v4;
    char v5;
    int result = sub_1A18C();
    VCVT.F64.S32((uint64_t)(((unsigned __int128)(v2 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)result << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(v2 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)result << 96)) >>> 0x60X));
    __int128 v6 = (unsigned __int128)gvar_99EE00 | ((unsigned __int128)(uint64_t)(((unsigned __int128)(v2 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)result << 96)) >>> 0x40X) << 64);
    VMUL.F64((uint64_t)(v6 >>> 0x40X), (uint64_t)(v6 >>> 0x40X), 0x3fee666666666666L);
    VCMPE.F64((uint64_t)(v6 >>> 0x40X), (uint64_t)v6);
    VMRS((uint8_t)v0 | ((uint8_t)v3 << SOCK_STREAM) | ((uint8_t)v1 << 2) | ((uint8_t)v5 << 3), v4);
    if(v1 != 0 || v0 != v5) {
        return result;
    }
    result = sub_25C08(result, param1);
    if(result == 0) {
        return 0;
    }
    sub_31D58(11, "Unbalance happened, reboot!\n", __n);
    return result;
}
