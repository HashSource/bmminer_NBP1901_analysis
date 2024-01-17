int sub_1E820(int param0, char* param1, uint32_t param2) {
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
        *(char*)(param0 * 0x210 + gvar_58E018 + (int)(int*)(param1 + 16)) = (uint8_t)param2;
        return result;
    }
    return 0x80000401;
}
