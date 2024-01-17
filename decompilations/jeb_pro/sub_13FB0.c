int sub_13FB0(int param0) {
    int __ptr1;
    int result = (int)gvar_7F7A8;
    if(result == 0) {
        result = sub_4101C(0);
        gvar_7F7A8 = (uint32_t)result;
    }
    if(result >= 0) {
        if(gvar_7F7AC != param0) {
            if(gvar_7EB9C > 4) {
                snprintf(&__ptr1, 0x800, "set pwm = %d", param0);
                sub_2E584(4, &__ptr1, 0);
                result = gvar_7F7A8;
            }
            sub_4110C(result, param0);
            result = sub_1E49C((uint8_t)param0);
            gvar_7F7AC = (uint32_t)param0;
        }
    }
    else if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
        __builtin_strcpy(&__ptr1, "pwm for fan init error");
        result = sub_2E584(3, &__ptr1, 0);
    }
    return result;
}
