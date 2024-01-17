int sub_34750(int param0, int param1) {
    char v0;
    int v1 = sub_3388C();
    int result = sub_1E29C(param0);
    if(result != 0) {
        uint32_t v2 = sub_1E160();
        sub_50CC4((int)(uint8_t)param0, (int)(v2 * param1), SOCK_STREAM);
        usleep(10000);
        uint32_t v3 = sub_1E160();
        sub_50CC4((int)(uint8_t)param0, (int)(v3 * param1), 0);
        usleep(10000);
        uint32_t v4 = sub_1E160();
        sub_515D0((int)(uint8_t)param0, (int)(v4 * param1), (uint8_t)v1, gvar_482A70);
        usleep(10000);
        uint32_t v5 = sub_1E160();
        *(int*)&v0 = 0;
        result = sub_51668((int)(uint8_t)param0, (int)(v5 * param1), (int)(uint8_t)(v1 >>> 8), (int)(uint8_t)(v1 >>> 16), 0);
    }
    return result;
}
