int sub_602D8(int param0, int param1, int param2, int param3) {
    initializer_0(param0, param1, param2, param3);
    int* ptr0 = (int*)&gvar_7DF00;
    int v0 = 0;
    do {
        ++v0;
        int v1 = *ptr0;
        ++ptr0;
        param0 = v1{initializer_1}();
    }
    while(v0 != SOCK_STREAM);
    return param0;
}
