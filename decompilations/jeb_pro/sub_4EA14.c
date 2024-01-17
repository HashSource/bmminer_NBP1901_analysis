size_t sub_4EA14() {
    int64_t v0;
    char v1;
    char v2;
    char v3;
    int v4;
    __int128 v5;
    char v6;
    VCMP.F64(v0, v0);
    VMRS((uint8_t)v1 | ((uint8_t)v3 << SOCK_STREAM) | ((uint8_t)v2 << 2) | ((uint8_t)v6 << 3), v4);
    if(v1 == 0) {
        VABS.F64((uint64_t)((unsigned __int128)(uint64_t)v5 | ((unsigned __int128)0x7fefffffffffffffL << 64)), v0);
        VCMP.F64((uint64_t)((unsigned __int128)(uint64_t)v5 | ((unsigned __int128)0x7fefffffffffffffL << 64)), (uint64_t)(((unsigned __int128)(uint64_t)v5 | ((unsigned __int128)0x7fefffffffffffffL << 64)) >>> 0x40X));
        VMRS((uint8_t)0 | ((uint8_t)v3 << SOCK_STREAM) | ((uint8_t)v2 << 2) | ((uint8_t)v6 << 3), v4);
        if(v2 != 0 || v6 != 0) {
            size_t result = sub_4D880(16);
            if(result != 0) {
                *(int*)(result + 8) = (uint32_t)v0;
                *(int*)(result + 12) = (uint32_t)(v0 >>> 32L);
                *(int*)result = 4;
                *(int*)(result + 4) = SOCK_STREAM;
            }
            return result;
        }
    }
    return 0;
}
