int sub_195A8(uint32_t param0) {
    int __s;
    __int128 v0;
    uint32_t v1 = param0;

    if(minerLogLevel > 3) {
        snprintf(&__s, 0x800, "%s to %d.\n", "set_voltage_by_steps", param0);
        param0 = logMessage(3, (int)&__s, 0);
    }

    VCVT.F64.S32((uint64_t)(((unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v1 << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v1 << 96)) >>> 0x60X));
    VDIV.F64(0x4059000000000000L, (uint64_t)(((unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v1 << 96)) >>> 0x40X), 0x4059000000000000L);
    int v2 = sub_48F00((int)param0);
    if(v2 >= 0) {
        gvar_7F8BC = v1;
        gvar_7F8C0 = v1;
        return 0;
    }

    if(minerLogLevel <= 3) {
        return -1;
    }

    __builtin_strcpy(&__s, "bitmain_set_voltage failed");
    logMessage(3, (int)&__s, 0);
    return -1;
}
