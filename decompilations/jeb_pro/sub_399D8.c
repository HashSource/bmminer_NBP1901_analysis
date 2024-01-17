int sub_399D8(int param0) {
    int result;
    char __ptr1;
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "[DEBUG] Set chain serial, chain_serial_count = %d.\n", param0);
        sub_2E584(4, &__ptr1, 0);
    }
    int v0 = 0;
    int v1 = 0;
    while(SOCK_STREAM) {
        int v2 = sub_1E29C(v1);
        result = v1;
        if(v2 == 0) {
        loc_39A28:
            ++v1;
            if(v1 != 4) {
                continue;
            }
            return result;
        }
        else if(param0 <= v0) {
            return result;
        }
        result = sub_397A0(result);
        if(result == 0) {
            ++v0;
            result = sub_3962C(v1, SOCK_STREAM);
        }
        goto loc_39A28;
    }
    return result;
}
