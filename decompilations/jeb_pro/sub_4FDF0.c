int sub_4FDF0(int param0, int param1, int param2, char param3, char param4, char param5) {
    int v0 = (uint32_t)((uint8_t)0 | ((uint8_t)param3 << 4)) | ((uint32_t)(uint8_t)(param4 & 0x3) << 6) | ((uint32_t)0 << 8);
    *(int*)&param4 = (param5 != 0 ? (uint32_t)((uint8_t)v0 | SOCK_STREAM): (uint32_t)(uint8_t)((uint32_t)(param5 & SOCK_STREAM) | ((uint32_t)((v0 >>> SOCK_STREAM) & 0x7fffffff) << SOCK_STREAM))) | 0x80008000;
    return sub_4FA10(param0, param1, param2, 60, *(int*)&param4);
}
