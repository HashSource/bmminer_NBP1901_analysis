int sub_52000(char* param0, int* param1) {
    if(param1 != 0) {
        int v0 = 0xFF;
        param1 += param0;
        int v1 = 0xFF;
        do {
            int v2 = (uint32_t)*param0;
            ++param0;
            char* ptr0 = (char*)(v0 ^ v2);
            v0 = (uint32_t)*(ptr0 + 437112) ^ v1;
            v1 = (uint32_t)*(ptr0 + 437368);
        }
        while(param0 != param1);
        return (v1 * 0x100) | v0;
    }
    return 0xffff;
}
