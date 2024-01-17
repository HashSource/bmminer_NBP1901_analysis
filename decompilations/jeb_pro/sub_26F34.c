int sub_26F34(int param0, int* param1) {
    uint32_t v0 = sub_1E0F0();
    if((int)v0 > 0) {
        int result = 0;
        int v1 = 0;
        param1 = (int*)(param0 * 0x400 + (int)param1) - SOCK_STREAM;
        do {
            ++v1;
            int v2 = *(param1 + SOCK_STREAM);
            ++param1;
            result += v2;
        }
        while(v1 != v0);
        return result;
    }
    return 0;
}
