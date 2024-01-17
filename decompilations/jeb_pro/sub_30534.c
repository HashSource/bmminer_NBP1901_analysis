int* sub_30534(int* param0, uint32_t* param1) {
    int64_t v0;
    uint32_t* ptr0 = (uint32_t*)(*param0 - (int)*param1);
    if((int)ptr0 <= 60) {
        VMOVLE((uint32_t)v0, (uint32_t*)((int)(uint32_t*)(*(param0 + SOCK_STREAM) - (int)*(param1 + SOCK_STREAM)) + (int)(uint32_t*)((int)ptr0 * 1000000)));
        VCVTLE.F64.S32(v0, (uint32_t)v0);
        return &gF4240;
    }
    return param0;
}
