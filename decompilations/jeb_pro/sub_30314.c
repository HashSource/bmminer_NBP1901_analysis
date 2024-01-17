int sub_30314(int* param0, int* param1, int* param2) {
    int v0 = *param0 - *param1;
    *param2 = *param0 - *param1;
    int v1 = *(param1 + SOCK_STREAM);
    int v2 = *(param0 + SOCK_STREAM);
    int result = v2 - v1;
    char v3 = v2 < v1;
    if(v3 == 0) {
        *(param2 + SOCK_STREAM) = result;
    }
    else {
        --v0;
        v1 = 1000000000;
    }
    if(v3 != 0) {
        *param2 = v0;
        *(param2 + SOCK_STREAM) = result + v1;
    }
    return result;
}
