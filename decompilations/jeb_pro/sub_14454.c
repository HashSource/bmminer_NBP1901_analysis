int sub_14454(int param0, char* param1, uint32_t param2, uint32_t param3) {
    int __ptr1;
    if(gvar_7F7B0 != 0) {
        int v0 = sub_1E29C(param0);
        if(v0 != 0) {
            uint32_t v1 = sub_1E170();
            if(v1 != 0) {
                uint32_t v2 = sub_14434();
                if((int)v2 > (int)param1 && param2 <= SOCK_STREAM) {
                    uint32_t v3 = gvar_7F7B4;
                    uint8_t v4 = 0xff;
                    uint32_t v5 = gvar_7F7B0;
                    short v6 = (uint16_t)*(int*)((int)(int*)((int)param1 * 4) + v3);
                    if(param3 == 0) {
                        v1 = *(char*)(param2 * 16 + 394401);
                    }
                    if(param3 != 0) {
                        v1 = *(char*)(param2 * 16 + 394402);
                    }
                    int v7 = sub_142BC(param0, (uint32_t)((uint8_t)v6 * (uint8_t)v5), (int)v1, 0, &v4);
                    if(v7 != 0) {
                        return v4 - 64;
                    }
                    if(gvar_7EB9C > 3) {
                        char* ptr0 = *(char**)((int)(int*)((int)param1 * 4) + gvar_7F7B4);
                        snprintf(&__ptr1, 0x800, "read temp sensor failed: chain = %d, sensor pos = %d, address = %d, reg = %d\n", param0, ptr0, (int*)(gvar_7F7B0 * (int)ptr0), v1);
                        sub_2E584(3, &__ptr1, 0);
                        return 0xFF;
                    }
                }
                else if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, "%s invalid param. index = %d, type = %d, model = %d on chain %d", "read_sensor_on_asic", param1, param3, param2, param0);
                    sub_2E584(3, &__ptr1, 0);
                    return 0xFF;
                }
            }
            else if(gvar_7EB9C > 3) {
                snprintf(&__ptr1, 0x800, "%s chain %d ,index %d not connected", "read_sensor_on_asic", param0, param1);
                sub_2E584(3, &__ptr1, 0);
                return 0xFF;
            }
        }
        else if(gvar_7EB9C > 4) {
            snprintf(&__ptr1, 0x800, "%s chain %d not pluged", "read_sensor_on_asic", param0);
            sub_2E584(4, &__ptr1, 0);
            return 0xFF;
        }
    }
    else if(gvar_7EB9C > 3) {
        __builtin_strcpy(&__ptr1, "can not read temp by asic before calibration");
        sub_2E584(3, &__ptr1, 0);
    }
    return 0xFF;
}
