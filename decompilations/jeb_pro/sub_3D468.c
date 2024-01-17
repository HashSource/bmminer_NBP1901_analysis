void* sub_3D468(char* __nptr, int* param1) {
    void* result;
    int __endptr;
    int* ptr0 = __errno_location();
    ptr0[0] = 0;
    long v0 = strtol(__nptr, &__endptr, 0);
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
