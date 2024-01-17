int sub_1E7BC(int param0) {
    if(((param0 >>> 31) | (int)gvar_58DFBC <= param0) == 0) {
        if(gvar_58E010 == 0) {
            int result = sub_1B398();
            if(result < 0) {
                return result;
            }
        }
        return *(int*)(param0 * 0x210 + gvar_58E018 + 4);
    }
    return 0x80000401;
}
