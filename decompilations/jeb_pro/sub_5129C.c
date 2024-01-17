int sub_5129C(int param0, int param1, short param2, char param3, char param4) {
    *(int*)&param4 = (uint32_t)((uint16_t)(param4 & SOCK_STREAM) | ((uint16_t)param3 << SOCK_STREAM) | ((uint16_t)0 << 2)) | ((uint32_t)param2 << 16);
    return sub_4FA10(param0, 0, param1, 44, *(int*)&param4);
}
