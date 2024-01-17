int sub_1E5A0(int param0) {
    int result;
    int v0 = param0 >>> 31;
    if((int)gvar_58DFBC <= param0) {
        v0 |= SOCK_STREAM;
    }
    if(v0 == 0) {
        if(gvar_58E010 == 0) {
            result = sub_1B398();
            if(result < 0) {
                return result;
            }
        }
        else {
            result = 0;
        }
        char* ptr0 = (char*)(param0 * 0x210 + gvar_58E018);
        ++*(ptr0 + SOCK_STREAM);
        return result;
    }
    return 0x80000401;
}
