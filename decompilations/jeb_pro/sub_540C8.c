int sub_540C8(int param0, int param1) {
    memset((void*)(param0 + 1032), 0, 32);
    int v0 = param1 + 7;
    if(v0 >= 7) {
        v0 = param1;
    }
    int v1 = param1 & 0x7;
    char* ptr0 = (char*)((v0 >> 3) + param0);
    if(param1 <= 0) {
        v1 = 0 - ((0 - param1) & 0x7);
    }
    *(ptr0 + 1032) |= (uint8_t)(8 - v1 < 32 ? ~(0xFF << (8 - v1)): -1);
    memset((void*)((v0 >> 3) + param0 + 1033), 0xFF, (size_t)(31 - (v0 >> 3)));
    return 0;
}
