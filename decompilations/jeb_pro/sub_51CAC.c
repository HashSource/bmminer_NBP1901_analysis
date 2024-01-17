int sub_51CAC(int param0, char param1, int param2, int param3, char* param4) {
    if(param4 != 0) {
        *(int*)&param4[0] = 0;
        if(param0 != 0) {
            param0 = SOCK_STREAM;
        }
        param4[3] = (char)param2;
        param4[7] = (char)param3;
        param4[2] = param1;
        param4[4] = (char)(param3 >>> 24);
        param4[5] = (char)(param3 >>> 16);
        param4[6] = (char)(param3 >>> 8);
        param4[8] = 0;
        param4[0] = (uint8_t)((uint8_t)SOCK_STREAM | ((uint8_t)(param0 & SOCK_STREAM) << 4)) | ((uint8_t)2 << 5);
        param4[SOCK_STREAM] = 9;
        int v0 = sub_51F28(param4, 64);
        param4[8] = (char)((uint32_t)(uint8_t)(v0 & 0x1f) | ((uint32_t)(((uint32_t)param4[8] >>> 5) & 0x7ffffff) << 5));
        return 0;
    }
    return -1;
}
