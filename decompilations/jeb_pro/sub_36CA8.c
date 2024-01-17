uint32_t sub_36CA8(int param0, int param1, int param2, uint32_t param3) {
    int v0;
    int* ptr0;
    char __ptr1;
    int* ptr1 = (int*)((param0 * 0x100 + param1) * 4 + param3 + 0x800000);
    int v1 = *(int*)(gvar_4FCB34 + 4);
    *(ptr1 + 0x2400) += param2 >>> 16;
    uint32_t v2 = sub_1E130();
    char v3 = (int)(v2 * 8) > param2 >>> 16;
    char v4 = v2 * 8 == param2 >>> 16;
    char v5 = ((((param2 >>> 16) - v2 * 8) ^ (param2 >>> 16)) & ((v2 * 8) ^ (param2 >>> 16))) < 0;
    if(v4 != 0 || v5 != v3) {
        ptr0 = param0 * 4 + param3;
    }
    int* ptr2 = (int*)(param0 * 4 + param3);
    if(v4 != 0 || v5 != v3) {
        ptr0 += 0x200000;
    }
    if(v4 != 0 || v5 != v3) {
        ptr0 += 0x2800;
    }
    if(v4 != 0 || v5 != v3) {
        v0 = *ptr0;
    }
    int v6 = param0 * 0x100 + v1;
    if(v4 != 0 || v5 != v3) {
        *ptr0 = (param2 >>> 16) + v0;
    }
    *(ptr2 + 2107928) += (uint32_t)(uint16_t)param2 - (param2 >>> 16);
    *(char*)(param1 + v6) = SOCK_STREAM;
    uint32_t result = sub_1E130();
    if((int)(result * 8) >= param2 >>> 16 || gvar_7EB9C <= 3) {
        return result;
    }
    int v7 = param2 >>> 16;
    snprintf(&__ptr1, 0x800, "Nonce counter overflow: chain = %d, asic = %d, nonce_return = %d, nonce_match = %d, nonce_accumulate = %d\n", param0, param1, (uint32_t)(uint16_t)param2, param2 >>> 16, *(ptr1 + 0x2400));
    return sub_2E584(3, &__ptr1, 0);
}
