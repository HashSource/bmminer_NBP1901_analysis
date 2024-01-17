int sub_1E3D4(int param0, int param1) {
    int result;
    int v0 = param0 >>> 31;
    if((int)gvar_58E004 <= param0) {
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
        *(int*)(param0 * 8 + gvar_58E020 + 4) = param1;
        return result;
    }
    return 0x80000401;
}
