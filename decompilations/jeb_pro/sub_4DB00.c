void sub_4DB00(uint32_t* param0, int64_t* param1) {
    int __endptr;
    int64_t v0;
    int v1;
    uint32_t* ptr0 = param0;
    int64_t* ptr1 = param1;
    lconv* ptr2 = localeconv();
    char* __nptr = *ptr0;
    int v2 = (uint32_t)ptr2->decimal_point[0];
    if(v2 != 46) {
        char* ptr3 = strchr(__nptr, 46);
        if(ptr3 != 0) {
            ptr3[0] = (char)v2;
            __nptr = *ptr0;
        }
    }
    int* ptr4 = __errno_location();
    ptr4[0] = 0;
    (uint64_t)param0 | ((uint64_t)param1 << 32) = strtod(__nptr, &__endptr);
    int v3 = (int)*(ptr0 + SOCK_STREAM) + (int)*ptr0;
    char v4 = v3 > __endptr;
    char v5 = v3 == __endptr;
    char v6 = (((__endptr - v3) ^ __endptr) & (v3 ^ __endptr)) < 0;
    char v7 = (uint32_t)v3 <= __endptr;
    if(v3 == __endptr) {
        VCMPE.F64(v0, 0x7fefffffffffffffL);
        VMRS((uint8_t)v6 | ((uint8_t)v7 << SOCK_STREAM) | ((uint8_t)v5 << 2) | ((uint8_t)v4 << 3), v1);
        if(v5 != 0 || v6 != v4) {
            VCMPE.F64(v0, 0xffefffffffffffffL);
            VMRS((uint8_t)v6 | ((uint8_t)v7 << SOCK_STREAM) | ((uint8_t)v5 << 2) | ((uint8_t)v4 << 3), v1);
            if(v4 == 0) {
                *ptr1 = v0;
                return;
            }
        }
        if(ptr4[0] != 34) {
            *ptr1 = v0;
        }
        return;
    }
    /*NO_RETURN*/ __assert_fail("end == strbuffer->value + strbuffer->length", "strconv.c", 78, "jsonp_strtod");
}
