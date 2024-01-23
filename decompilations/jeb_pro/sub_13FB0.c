uint32_t sub_13FB0(uint32_t param0) {
    int __s;
    uint32_t result = gvar_7F7A8;

    if(result == 0) {
        result = sub_4101C(0);
        gvar_7F7A8 = result;
    }

    if(result < 0x80000000) {
        if(gvar_7F7AC != param0) {
            if(minerLogLevel > 4) {
                snprintf(&__s, 0x800, "set pwm = %d", param0);
                logMessage(4, (int)&__s, 0);
                result = gvar_7F7A8;
            }
            sub_4110C((int)result, (int)param0);
            result = sub_1E49C((int)param0);
            gvar_7F7AC = param0;
        }
    }
    else if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
        __builtin_strcpy(&__s, "pwm for fan init error");
        result = logMessage(3, (int)&__s, 0);
    }

    return result;
}
