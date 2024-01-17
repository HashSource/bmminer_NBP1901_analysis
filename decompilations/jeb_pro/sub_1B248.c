int sub_1B248(int param0, char* param1, int param2) {
    int __ptr1;
    char v0;
    short v1;
    int v2;
    if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "chain = %d, freq = %d\n", param0, param2);
        sub_2E584(3, &__ptr1, 0);
    }
    __ptr1 = 0;
    int v3 = 0;
    VCVT.F32.U32(v2, param2);
    sub_502C0((int)&__ptr1, &v0, 0);
    v3 = (uint32_t)(uint16_t)v3 | ((uint32_t)v0 << 16) | ((uint32_t)(uint8_t)(v3 >>> 24) << 24);
    *(int*)&v1 = v3;
    return sub_1F164(param0, SOCK_STREAM, 0, param1, __ptr1, v1);
}
