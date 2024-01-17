void* sub_28D9C(char* __nptr, int* param1) {
    void* result = sub_3D4F0(__nptr, param1);
    if(result != 0) {
        return result;
    }
    if((uint32_t)(param1[0] - SOCK_STREAM) > 0xfffe) {
        result = "Value out of range";
    }
    return result;
}
