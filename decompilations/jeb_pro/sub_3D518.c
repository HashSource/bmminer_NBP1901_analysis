void* sub_3D518(char* __nptr, int* param1) {
    int v0;
    void* result = sub_3D468(__nptr, &v0);
    if(result != 0) {
        return result;
    }
    if(v0 >= 0) {
        *param1 = v0;
        return 0;
    }
    return sub_3D2B4("\'%s\' is negative", __nptr);
}
