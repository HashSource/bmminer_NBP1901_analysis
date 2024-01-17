int sub_4DAD4(int* param0, char param1, int param2) {
    int result;
    int v0 = *(param0 + SOCK_STREAM);
    int v1 = *(param0 + SOCK_STREAM);
    if(v0 == 0) {
        result = 0;
    }
    else {
        param2 = *param0;
        --v0;
        param1 = 0;
        *(param0 + SOCK_STREAM) = v0;
        result = (uint32_t)*(char*)(param2 + v0);
    }
    if(v1 != 0) {
        *(char*)(param2 + v0) = param1;
    }
    return result;
}
