void* sub_294B8(void* __dest, uint32_t param1) {
    int v0;
    uint32_t v1;
    int v2;
    uint32_t v3;
    int v4;
    uint32_t v5;
    int v6;
    int __ptr1;
    char v7;
    char v8;
    char v9;
    int v10;
    char v11;
    int64_t v12;
    int64_t v13;
    VCMP.F64(v13, 0);
    VMRS((uint8_t)v7 | ((uint8_t)v9 << SOCK_STREAM) | ((uint8_t)v8 << 2) | ((uint8_t)v11 << 3), v10);
    if(v8 == 0) {
        VDIV.F64(v12, 0x4defffe000000000L, v13);
        VMUL.F64(0x33f0000000000000L, v12, 0x33f0000000000000L);
        int v14 = sub_60180(0, 0x33f00000);
        v6 = v14;
        v5 = param1;
        int v15 = sub_600B4((uint32_t)v14, param1);
        VMLS.F64(v12, (uint64_t)v15 | ((uint64_t)param1 << 32), 0x4bf0000000000000L);
        VMUL.F64(0x37f0000000000000L, v12, 0x37f0000000000000L);
        int v16 = sub_60180(0, 0x37f00000);
        v4 = v16;
        v3 = param1;
        int v17 = sub_600B4((uint32_t)v16, param1);
        VMLS.F64(v12, (uint64_t)v17 | ((uint64_t)param1 << 32), 0x47f0000000000000L);
        VMUL.F64(0x3bf0000000000000L, v12, 0x3bf0000000000000L);
        int v18 = sub_60180(0, 0x3bf00000);
        v2 = v18;
        v1 = param1;
        int v19 = sub_600B4((uint32_t)v18, param1);
        VMLS.F64(v12, (uint64_t)v19 | ((uint64_t)param1 << 32), 0x43f0000000000000L);
        v0 = sub_60180((int)v12, (int)(v12 >>> 32L));
    }
    else if(gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 2) {
        v0 = 0;
        v2 = 0;
        v4 = 0;
        v1 = 0;
        v3 = 0;
        v6 = 0xffff0000;
        v5 = 0;
    }
    else {
        v6 = 0xffff0000;
        v5 = 0;
        __builtin_strcpy(&__ptr1, "Diff zero passed to set_target");
        sub_2E584(3, &__ptr1, 0);
        v0 = 0;
        v2 = 0;
        v4 = 0;
        v1 = 0;
        v3 = 0;
    }
    int v20 = v6;
    uint32_t v21 = v5;
    int v22 = v4;
    int v23 = gvar_482A5D;
    uint32_t v24 = v3;
    int v25 = v2;
    uint32_t v26 = v1;
    int __src = v0;
    int v27 = 0;
    if(v23 != 0) {
        void* __ptr = sub_2F670((int)&__src, &g20);
        if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
            snprintf(&__ptr1, 0x800, "Generated target %s", __ptr);
            sub_2E584(7, &__ptr1, 0);
        }
        free(__ptr);
    }
    return sub_30EA8(__dest, &__src, 32, "bmminer.c", "set_target", 1124);
}
