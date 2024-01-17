int sub_51E08(char* param0) {
    if(param0 != 0) {
        *(int*)&param0[0] = 0;
        param0[4] = 0;
        param0[SOCK_STREAM] = 5;
        param0[0] = 'S';
        int v0 = sub_51F28(param0, 32);
        param0[4] = (char)((uint32_t)(uint8_t)(v0 & 0x1f) | ((uint32_t)(((uint32_t)param0[4] >>> 5) & 0x7ffffff) << 5));
        return 0;
    }
    return -1;
}
