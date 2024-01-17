void sub_2AEF4() {
    int v0;
    uint32_t v1 = gvar_58E354;
    if(v1 != 0) {
        uint32_t v2 = gvar_592460;
        *(int*)(v1 + 32) = 0;
        *(int*)(v1 + 4) = 0x80ea0;
        *(uint32_t*)(v1 + 20) = v2;
        *(int*)(v1 + 148) = SOCK_STREAM;
        if(v2 == 0) {
            int __ptr1 = 1818845510;
            int v3 = 1948279909;
            int v4 = 1633886319;
            int v5 = 0x636f6c6c;
            __builtin_strcpy(&v0, " cgpu_info data");
            sub_2E584(3, &__ptr1, SOCK_STREAM);
            v2 = *(uint32_t*)(v1 + 20);
        }
        *(int*)(v2 + 0x1654) = 0;
        *(int*)(v2 + 5720) = SOCK_STREAM;
        *(int*)(v2 + 5724) = 2;
        return;
    }
    /*NO_RETURN*/ __assert_fail("cgpu", "bmminer.c", 2026, "bitmain_primary_init");
}
