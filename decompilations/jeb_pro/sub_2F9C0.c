int sub_2F9C0(char* param0, int param1) {
    int result;
    int v0;
    if(param1 <= 127) {
        v0 = SOCK_STREAM;
        result = 2;
    }
    else if(param1 <= 16511) {
        result = 3;
        v0 = 2;
    }
    else {
        result = param1 <= 2113663 ? 4: 5;
        v0 = param1 <= 2113663 ? 3: 4;
    }
    *(int*)(param0 + SOCK_STREAM) = param1;
    *param0 = (uint8_t)v0;
    return result;
}
