// Stale decompilation - Refresh this view to re-decompile this code
int sub_195A8(int param0) {
    int __ptr1;
    __int128 v0;
    int v1 = param0;
    if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "%s to %d.\n", "set_voltage_by_steps", param0);
        param0 = sub_2E584(3, &__ptr1, 0);
    }
    VCVT.F64.S32((uint64_t)(((unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v1 << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v1 << 96)) >>> 0x60X));
    VDIV.F64(0x4059000000000000L, (uint64_t)(((unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v1 << 96)) >>> 0x40X), 0x4059000000000000L);
    int v2 = sub_48F00(param0);
    if(v2 >= 0) {
        gvar_7F8BC = (uint32_t)v1;
        gvar_7F8C0 = (uint32_t)v1;
        return 0;
    }
    if(gvar_7EB9C <= 3) {
        return -1;
    }
    __builtin_strcpy(&__ptr1, "bitmain_set_voltage failed");
    sub_2E584(3, &__ptr1, 0);
    return -1;
}
