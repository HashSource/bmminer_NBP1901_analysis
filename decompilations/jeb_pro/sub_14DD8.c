int sub_14DD8(int param0, int param1, int param2) {
    int v0 = sub_1E29C(param0);
    if((v0 != 0 ? param2 >>> 31: SOCK_STREAM) == 0) {
        switch(param1) {
            case 0: {
                uint32_t v1 = sub_1E19C();
                if((int)v1 <= param2) {
                    return 0xFF;
                }
                break;
            }
            case 1: {
                uint32_t v2 = sub_14434();
                if((int)v2 <= param2) {
                    return 0xFF;
                }
                break;
            }
            case 2: {
                uint32_t v3 = sub_14434();
                if((int)v3 <= param2) {
                    return 0xFF;
                }
                uint32_t v4 = sub_1E170();
                if(v4 == 0) {
                    return 0xFF;
                }
                break;
            }
        }
        pthread_mutex_lock(&g7F7C0);
        int result = (int)*((short*)(param2 * 6 + *(int*)(param1 * 4 + *(int*)(param0 * 4 + gvar_7F7B8))) + SOCK_STREAM);
        pthread_mutex_unlock(&g7F7C0);
        return result;
    }
    return 0xFF;
}
