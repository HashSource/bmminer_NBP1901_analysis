int sub_16A04() {
    char __dest;
    int __ptr1;
    uint32_t v0 = gvar_7F814;
    if(v0 != 0 && *(char*)(v0 + 28) != 0) {
        int v1 = 0;
        int result = 0;
        char* __format1 = "[chain %d] Update miner info Failed, EEPROM does not have enough space.\n";
        char* __format = "[chain %d] Update miner info in eeprom.\n";
        do {
            int v2 = sub_1E29C(v1);
            if(v2 != 0) {
                uint32_t v3 = gvar_7F814;
                memset(&__dest, 0, 0x100);
                char* ptr0 = *(uint32_t*)(v1 * 4 + v3);
                if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, __format, v1);
                    sub_2E584(3, &__ptr1, 0);
                }
                int v4 = (uint32_t)*(ptr0 + SOCK_STREAM);
                size_t __n = (size_t)*(ptr0 + 56);
                memcpy(&__dest, (void*)(v4 + ptr0), __n);
                int v5 = (v4 + __n - 50) & 0xfffffff8;
                sub_18E48(57 - v4 + (int)&__dest, v5, SOCK_STREAM);
                int v6 = 57 - v4 + v5;
                if(254 - ((v4 + 5) & 0xfffffff8) < v6) {
                    result = -1;
                    if(gvar_7EB9C > 3) {
                        snprintf(&__ptr1, 0x800, __format1, v1);
                        sub_2E584(3, &__ptr1, 0);
                    }
                }
                else {
                    sub_44200(v1, (((v4 + 5) & 0xfffffff8) + 2) & 0xfe, (int)&__dest, v6);
                }
            }
            ++v1;
        }
        while(v1 != 4);
        return result;
    }
    if(gvar_7EB9C <= 3) {
        return -1;
    }
    __ptr1 = 1713401678;
    int v7 = 1970567273;
    int v8 = 1663067506;
    int v9 = 0x69666e6f;
    int v10 = 1634891111;
    int v11 = 1852795252;
    int v12 = 0x726f6620;
    int v13 = 1970038304;
    int v14 = 170813555;
    char v15 = 0;
    sub_2E584(3, &__ptr1, 0);
    return -1;
}
