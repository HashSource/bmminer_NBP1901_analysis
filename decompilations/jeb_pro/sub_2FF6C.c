int sub_2FF6C(int* param0, int* param1) {
    int v0 = *param0;
    int v1 = *param1;
    char v2 = v0 < v1;
    char v3 = (((v0 - v1) ^ v0) & (v0 ^ v1)) < 0;
    if(v0 != v1) {
        return v3 != v2;
    }
    return *(param0 + SOCK_STREAM) < *(param1 + SOCK_STREAM);
}
