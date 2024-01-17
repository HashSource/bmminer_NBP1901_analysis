int sub_1E4C0(int param0) {
    int result;
    __int128 v0;
    int v1 = param0 >>> 31;
    if((int)gvar_58DFBC <= param0) {
        v1 |= SOCK_STREAM;
    }
    if(v1 == 0) {
        if(gvar_58E010 == 0) {
            result = sub_1B398();
            if(result < 0) {
                return result;
            }
        }
        else {
            result = 0;
        }
        int* ptr0 = (int*)(param0 * 0x210 + gvar_58E018);
        *(ptr0 + 2) = (uint32_t)v0;
        *(ptr0 + 3) = (uint32_t)(v0 >>> 0x20X);
        return result;
    }
    return 0x80000401;
}
