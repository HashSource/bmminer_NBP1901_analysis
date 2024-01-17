int sub_302E4(int* param0) {
    int v0 = *(param0 + SOCK_STREAM);
    return ((uint32_t)((v0 * 1125899907L) >>> 32L) >> 18) - (v0 >> 31) + *param0 * 1000;
}
