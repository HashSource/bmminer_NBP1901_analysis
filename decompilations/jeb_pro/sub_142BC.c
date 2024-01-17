int sub_142BC(int param0, uint32_t param1, int param2, int param3, char* param4) {
    int v0;
    char v1;
    char v2;
    int result = param3;
    if(param3 != 0) {
        int v3 = 2;
        int v4 = 0;
        do {
            sub_1427C(param1, param0);
            int v5 = (int)*param4;
            *(int*)&v1 = param0;
            *(uint32_t*)&v2 = param1;
            sub_1ECDC(152, (uint8_t)param2, v5, SOCK_STREAM, v2, v1);
            sub_1427C(param1, param0);
            usleep(1000);
            sub_1427C(param1, param0);
            *(int*)&v1 = param0;
            *(uint32_t*)&v2 = param1;
            sub_1ECDC(152, (uint8_t)param2, 0, 0, v2, v1);
            int v6 = sub_1427C(param1, param0);
            usleep(1000);
            if((uint32_t)(uint8_t)(v6 >>> 8) == param2 || (uint32_t)(uint8_t)v6 == (uint32_t)*param4) {
                if(v4 == 0) {
                    return result;
                }
                return 0;
            }
            v0 = v3;
            v4 = SOCK_STREAM;
            v3 = SOCK_STREAM;
        }
        while(v0 != SOCK_STREAM);
        return 0;
    }
    int v7 = 2;
    while(SOCK_STREAM) {
        sub_1427C(param1, param0);
        *(int*)&v1 = param0;
        *(uint32_t*)&v2 = param1;
        sub_1ECDC(152, (uint8_t)param2, 0, 0, v2, v1);
        usleep(1000);
        int v8 = sub_1427C(param1, param0);
        usleep(1000);
        if((uint32_t)(uint8_t)(v8 >>> 8) != param2) {
            v0 = v7;
            result = SOCK_STREAM;
            v7 = SOCK_STREAM;
            if(v0 != SOCK_STREAM) {
                continue;
            }
        }
        else if(result == 0 && (uint8_t)v8 != 0) {
            *param4 = (uint8_t)v8;
            return SOCK_STREAM;
        }
        return 0;
    }
    return 0;
}
