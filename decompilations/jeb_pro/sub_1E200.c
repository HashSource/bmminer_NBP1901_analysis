int sub_1E200(int param0, int param1) {
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
        v0 = gvar_58E018;
        if((uint32_t)*(char*)(param0 * 0x210 + v0) == param1) {
            return result;
        }
        *(char*)(param0 * 0x210 + v0) = (uint8_t)param1;
        int v1 = gvar_58E014;
        gvar_58E014 = param1 != 0 ? (uint8_t)((uint8_t)v1 + SOCK_STREAM): (uint8_t)((uint8_t)v1 - SOCK_STREAM);
        return result;
    }
    return 0x80000401;
}
