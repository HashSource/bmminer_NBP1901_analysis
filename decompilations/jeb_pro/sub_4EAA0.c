int sub_4EAA0(int* param0) {
    int64_t v0;
    int v1;
    __int128 v2;
    if(param0 != 0) {
        VCMP.F64(v0, v0);
        VMRS((uint8_t)2 | ((uint8_t)(param0 == 0) << 2) | ((uint8_t)((int)param0 < 0) << 3), v1);
        if(*param0 == 4) {
            VABS.F64((uint64_t)((unsigned __int128)(uint64_t)v2 | ((unsigned __int128)0x7fefffffffffffffL << 64)), v0);
            VCMP.F64((uint64_t)((unsigned __int128)(uint64_t)v2 | ((unsigned __int128)0x7fefffffffffffffL << 64)), (uint64_t)(((unsigned __int128)(uint64_t)v2 | ((unsigned __int128)0x7fefffffffffffffL << 64)) >>> 0x40X));
            VMRS(6, v1);
            *(int64_t*)(param0 + 2) = v0;
            return 0;
        }
    }
    return -1;
}
