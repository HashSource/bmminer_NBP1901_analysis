int sub_1E52C(int param0) {
    int64_t v0;
    if(((param0 >>> 31) | (int)gvar_58DFBC <= param0) != 0) {
        return param0;
    }
    int v1 = param0;
    if(gvar_58E010 == 0) {
        param0 = sub_1B398();
        if(param0 < 0) {
            VCVT.F64.S32(v0, param0);
            return param0;
        }
    }
    return v1 * 0x210 + gvar_58E018;
}
