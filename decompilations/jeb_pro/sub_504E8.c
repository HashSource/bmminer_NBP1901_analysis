int sub_504E8(int param0, int param1, int param2, char* param3, int param4) {
    char v0;
    char v1;
    short v2;
    uint16_t v3;
    char v4;
    char v5;
    char v6;
    int v7;
    uint8_t v8;
    uint8_t v9;
    VCVT.F32.U32(v7, param4);
    int v10 = sub_502C0(&v0, &v1, 0);
    if(v10 == 0) {
        *(int*)&v2 = v3;
        *(int*)&v4 = v8;
        *(int*)&v5 = v0;
        *(int*)&v6 = v9;
        return sub_4FA9C(param0, param1, param2, param3, v5, v6, v4, v2);
    }
    return -1;
}
