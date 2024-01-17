void* sub_28D70(char* __nptr, int* param1) {
    void* result = sub_3D4F0(__nptr, param1);
    if(result != 0) {
        return result;
    }
    if((uint32_t)param1[0] > 100) {
        result = "Value out of range";
    }
    return result;
}
