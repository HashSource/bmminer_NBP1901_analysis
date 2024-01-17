int sub_2932C(char* __s, int* param1, int* param2) {
    int result = sscanf(__s, "%d-%d", param1, param2);
    if(result == SOCK_STREAM) {
        *param2 = *param1;
    }
    return result;
}
