int sub_505A4(int param0, int param1, char* param2, int param3, uint16_t param4) {
    char v0;
    char v1;
    char v2;
    short v3;
    *(int*)&v0 = (uint32_t)(uint8_t)param3;
    *(int*)&v1 = (uint32_t)(uint8_t)(param3 >>> 16);
    *(int*)&v2 = (uint32_t)(uint8_t)(param3 >>> 8);
    *(int*)&v3 = param4;
    return sub_4FA9C(param0, 0, param1, param2, v0, v2, v1, v3);
}
