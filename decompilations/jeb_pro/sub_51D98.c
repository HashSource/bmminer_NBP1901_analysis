int sub_51D98(int param0, char param1, char param2, char* param3) {
    if(param3 != 0) {
        *(int*)&param3[0] = 0;
        if(param0 != 0) {
            param0 = SOCK_STREAM;
        }
        param3[3] = param2;
        param3[2] = param1;
        param3[4] = 0;
        param3[SOCK_STREAM] = 5;
        param3[0] = (uint8_t)((uint8_t)2 | ((uint8_t)(param0 & SOCK_STREAM) << 4)) | ((uint8_t)2 << 5);
        int v0 = sub_51F28(param3, 32);
        param3[4] = (char)((uint32_t)(uint8_t)(v0 & 0x1f) | ((uint32_t)(((uint32_t)param3[4] >>> 5) & 0x7ffffff) << 5));
        return 0;
    }
    return -1;
}
