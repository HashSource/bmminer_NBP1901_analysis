int sub_51D44(char param0, char* param1) {
    if(param1 != 0) {
        *(int*)&param1[0] = 0;
        param1[4] = 0;
        param1[2] = param0;
        param1[SOCK_STREAM] = 5;
        param1[0] = '@';
        int v0 = sub_51F28(param1, 32);
        param1[4] = (char)((uint32_t)(uint8_t)(v0 & 0x1f) | ((uint32_t)(((uint32_t)param1[4] >>> 5) & 0x7ffffff) << 5));
        return 0;
    }
    return -1;
}
