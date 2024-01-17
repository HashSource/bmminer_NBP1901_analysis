void* sub_3D3E0(char* __nptr, int* param1) {
    void* result;
    int __endptr;
    int v0;
    int* ptr0 = __errno_location();
    ptr0[0] = 0;
    strtof(__nptr, &__endptr);
    *param1 = v0;
    if(*__endptr == 0 && __nptr[0] != 0) {
        result = ptr0[0];
        if(ptr0[0] != 0) {
            return sub_3D2B4("\'%s\' is out of range", __nptr);
        }
    }
    else {
        result = sub_3D2B4("\'%s\' is not a number", __nptr);
    }
    return result;
}
