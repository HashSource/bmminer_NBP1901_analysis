int sub_193F8() {
    int result;
    char __ptr1;
    int64_t v0;
    int v1;
    int v2 = 0;
    do {
        result = sub_1E29C(v2);
        char v3 = result < 0;
        char v4 = result == 0;
        if(result != 0) {
            result = sub_192C8(v2);
            VCMPE.F64(v0, 0x3fb999999999999aL);
            VMRS((uint8_t)2 | ((uint8_t)v4 << 2) | ((uint8_t)v3 << 3), v1);
            if((v4 == 0 && v3 == 0)) {
                VCMPE.F64(v0, 0L);
                VMRS((uint8_t)2 | ((uint8_t)v4 << 2) | ((uint8_t)v3 << 3), v1);
                if(v3 == 0) {
                    VCMP.F64(0L, 0x3fb999999999999aL);
                    VMRS((uint8_t)2 | ((uint8_t)v4 << 2) | ((uint8_t)0 << 3), v1);
                }
                else {
                    VMOVMI.F64(0L, v0);
                }
            }
        }
        ++v2;
    }
    while(v2 != 4);
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "the minimal voltage = %.2f");
        result = sub_2E584(4, &__ptr1, 0);
    }
    return result;
}
