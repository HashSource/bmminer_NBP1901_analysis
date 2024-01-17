int sub_4FB64(int param0, int param1, int param2, char param3) {
    sub_4FA10(param0, param1, param2, 60, (((uint32_t)((uint8_t)param3 | ((uint8_t)SOCK_STREAM << 2)) | ((uint32_t)SOCK_STREAM << 8) | 0x8000) & 0xff00ffff) | 0x80000000);
    usleep(10000);
    return sub_4FA10(param0, param1, param2, 60, ((uint32_t)((uint8_t)param3 | ((uint8_t)SOCK_STREAM << 2)) | ((uint32_t)2 << 8) | ((uint32_t)((((((uint32_t)((uint8_t)param3 | ((uint8_t)SOCK_STREAM << 2)) | ((uint32_t)SOCK_STREAM << 8) | 0x8000) & 0xff00ffff) | 0x80000000) >>> 12) & 0xfffff) << 12)) & 0xffff7fff);
}
