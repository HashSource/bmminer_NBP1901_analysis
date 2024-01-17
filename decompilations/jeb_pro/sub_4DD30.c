int sub_4DD30(int param0, char* param1, int* param2) {
    if(param0 < &ELFHeader && param0 >= 0x800) {
        *param1 = (uint8_t)(param0 >>> 12) - 32;
        *(param1 + SOCK_STREAM) = (uint8_t)((param0 >>> 6) & 0x3f) - 128;
        *(param1 + 2) = ((uint8_t)param0 & 0x3f) - 128;
        *param2 = 3;
        return 0;
    }
    else if(param0 < &ELFHeader && param0 > 127) {
        *param1 = (uint8_t)(param0 >>> 6) - 64;
        *(param1 + SOCK_STREAM) = ((uint8_t)param0 & 0x3f) - 128;
        *param2 = 2;
        return 0;
    }
    else if(param0 < &ELFHeader && param0 >= 0) {
        *param1 = (uint8_t)param0;
        *param2 = SOCK_STREAM;
        return 0;
    }
    else if(param0 >= &ELFHeader && param0 < 0x110000) {
        *(int*)param1 = (uint32_t)((uint8_t)(param0 >>> 18) - 16) | ((uint32_t)((uint8_t)((param0 >>> 12) & 0x3f) - 128) << 8) | ((uint32_t)((uint8_t)((param0 >>> 6) & 0x3f) - 128) << 16) | ((uint32_t)(((uint8_t)param0 & 0x3f) - 128) << 24);
        *param2 = 4;
        return 0;
    }
    return -1;
}
