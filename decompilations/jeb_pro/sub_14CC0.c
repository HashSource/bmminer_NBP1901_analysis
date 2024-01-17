int sub_14CC0(int param0, int param1, int param2) {
    if(param1 == 0) {
        uint32_t v0 = sub_1E19C();
        if((int)v0 > param2) {
        loc_14D28:
            if(gvar_7F7B8 != 0) {
                pthread_mutex_lock(&g7F7C0);
                int result = (int)*((short*)(param2 * 6 + *(int*)(param1 * 4 + *(int*)(param0 * 4 + gvar_7F7B8))) + SOCK_STREAM);
                pthread_mutex_unlock(&g7F7C0);
                return result;
            }
        }
    }
    else {
        uint32_t v1 = sub_1E170();
        if(v1 != 0) {
            uint32_t v2 = sub_14434();
            if((int)v2 > param2 && gvar_7F7BC != 0) {
                goto loc_14D28;
            }
        }
    }
    return 0xFF;
}
