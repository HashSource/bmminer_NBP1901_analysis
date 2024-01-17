int sub_50560(int param0, char* param1, int param2, int param3) {
    char v0;
    short v1;
    short v2;
    char v3;
    char v4;
    char v5;
    uint8_t v6;
    uint8_t v7;
    *(int*)&v0 = param2;
    *(int*)&v1 = param3;
    *(int*)&v2 = v1;
    *(int*)&v3 = v6;
    *(int*)&v4 = v0;
    *(int*)&v5 = v7;
    return sub_4FA9C(param0, SOCK_STREAM, 0, param1, v4, v5, v3, v2);
}
