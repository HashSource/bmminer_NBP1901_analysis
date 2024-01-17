int sub_44540(int param0) {
    int v0;
    if(param0 != &loc_1C200) {
        __int128 v1 = (unsigned __int128)0x4136e36000000000L | ((unsigned __int128)(uint64_t)(((unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param0 << 96)) >>> 0x40X) << 64);
        VCVT.F64.S32((uint64_t)(v1 >>> 0x40X), (uint32_t)(v1 >>> 0x60X));
        VCMP.F64((uint64_t)(v1 >>> 0x40X), (uint64_t)v1);
        VMRS((uint8_t)((((param0 - &loc_1C200) ^ param0) & (param0 ^ &loc_1C200)) < 0) | ((uint8_t)(param0 >= &loc_1C200) << SOCK_STREAM) | ((uint8_t)(param0 == &loc_1C200) << 2) | ((uint8_t)(param0 < &loc_1C200) << 3), v0);
        if(param0 == 6000000) {
            return 3;
        }
        else if(param0 == 12000000) {
            return 4;
        }
        else if(param0 != 3000000) {
            if(param0 == 25000000) {
                param0 = 5;
            }
            return param0;
        }
        return 0;
    }
    return 26;
}
