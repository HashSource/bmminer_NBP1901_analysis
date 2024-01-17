int sub_6015C(int param0, int param1, int param2, int param3) {
    char v0;
    char v1;
    char v2;
    int v3;
    char v4;
    VCMPE.F64((uint64_t)param0 | ((uint64_t)param1 << 32), 0);
    VMRS((uint8_t)v0 | ((uint8_t)v2 << SOCK_STREAM) | ((uint8_t)v1 << 2) | ((uint8_t)v4 << 3), v3);
    if(v4 == 0) {
        return sub_60180(param0, param1);
    }
    int v5 = sub_60180(param0, param1 ^ 0x80000000);
    return 0 - v5;
}
