int* sub_316B0(int* param0, int* param1, int param2) {
    if(param2 >>> 2 == 0) {
        return param0;
    }
    int* ptr0 = (int*)((int)(int*)((int)(int*)(param2 >>> 2) * 4) + (int)param1);
    --param0;
    do {
        int v0 = *param1;
        ++param1;
        *(param0 + SOCK_STREAM) = (uint32_t)(uint8_t)(v0 >>> 24) | ((uint32_t)(uint8_t)(v0 >>> 16) << 8) | ((uint32_t)(uint8_t)(v0 >>> 8) << 16) | ((uint32_t)(uint8_t)v0 << 24);
        ++param0;
    }
    while(param1 != ptr0);
    return param0;
}
