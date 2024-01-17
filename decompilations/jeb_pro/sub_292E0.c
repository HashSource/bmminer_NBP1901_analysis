void* sub_292E0(char* __nptr, int* param1, int param2, int param3) {
    void* result = sub_3D4F0(__nptr, param1);
    if(result != 0) {
        return result;
    }
    int v0 = param1[0];
    int v1 = param2 > v0;
    if((v0 > param3 ? v1 | SOCK_STREAM: v1) != 0) {
        result = "Value out of range";
    }
    return result;
}
