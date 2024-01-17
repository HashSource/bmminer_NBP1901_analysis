int sub_4FE30(int param0, int param1, int param2, int param3) {
    if(param3 != 0) {
        param3 = 64;
    }
    return sub_4FA10(param0, param1, param2, 60, (((uint32_t)(uint8_t)param3 | ((uint32_t)13 << 8) | 0x8000) & 0xff00ffff) | 0x80000000);
}
