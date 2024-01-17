int* sub_316D8(char* param0, int* param1) {
    if(param1 != 0) {
        param1 += param0;
        int v0 = -1;
        do {
            int v1 = (uint32_t)*param0;
            ++param0;
            v0 = (v0 >>> 8) ^ *(int*)((uint32_t)((uint8_t)v0 ^ (uint8_t)v1) * 4 + 417700);
        }
        while(param0 != param1);
        return (int*)~v0;
    }
    return NULL;
}
