int sub_1E67C(int param0) {
    if(((param0 >>> 31) | (int)gvar_58DFBC <= param0) == 0) {
        if(gvar_58E010 == 0) {
            int result = sub_1B398();
            if(result < 0) {
                return result;
            }
        }
        return (int)*(char*)(param0 * 0x210 + gvar_58E018 + SOCK_STREAM);
    }
    return 0x80000401;
}
