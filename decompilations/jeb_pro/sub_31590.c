int sub_31590(int param0, int param1) {
    if(param1 != 0) {
        int v0 = 0xFF;
        param1 = (uint32_t)((uint16_t)param1 - SOCK_STREAM) + param0;
        char* ptr0 = (char*)(param0 - SOCK_STREAM);
        int v1 = 0xFF;
        do {
            int v2 = (uint32_t)*(ptr0 + SOCK_STREAM);
            ++ptr0;
            char* ptr1 = (char*)((v2 ^ v0) + &aTq_freezethaw);
            v0 = (uint32_t)*(ptr1 + 0x8e8) ^ v1;
            v1 = (uint32_t)*(ptr1 + 2536);
        }
        while(param1 != ptr0);
        return (v1 * 0x100) | v0;
    }
    return 0xffff;
}
