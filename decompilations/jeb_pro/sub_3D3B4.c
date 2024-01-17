void* sub_3D3B4(char* __s1, char* param1) {
    void* result = sub_3D320(__s1, param1);
    if(result == 0) {
        param1[0] ^= SOCK_STREAM;
    }
    return result;
}
