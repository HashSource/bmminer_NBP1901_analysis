char* sub_4C04C(uint32_t* param0) {
    char* result = *(param0 + 2);
    if((uint32_t)*(param0 + SOCK_STREAM) > (uint32_t)result) {
        int* ptr0 = (int*)(result + SOCK_STREAM);
        result = (uint32_t)*(char*)((int)*param0 + (int)result);
        *(param0 + 2) = ptr0;
        return result;
    }
    return &gFFFFFFFF;
}
