int sub_3208C() {
    uint32_t v0;
    int result;
    int v1;
    uint32_t v2 = gvar_7EDC8;
    char v3 = (int)v2 < 2;
    char v4 = v2 == 2;
    char v5 = (((v2 - 2) ^ v2) & (v2 ^ 0x2)) < 0;
    char v6 = v2 >= 2;
    if(v2 == 2) {
        int v7 = 0;
        do {
            result = sub_1E29C(v7);
            if(result != 0) {
                result = sub_1E0F0();
                if(result > 0) {
                    uint32_t v8 = gvar_482A6C;
                    uint32_t* ptr0 = (uint32_t*)(v7 * 0x400 + &gvar_4FBAA0);
                    result = (v7 * 0x100 + result) * 4 + &gvar_4FBAA0;
                    do {
                        *ptr0 = v8;
                        ++ptr0;
                    }
                    while(result != ptr0);
                }
            }
            ++v7;
            v3 = v7 < 4;
            v4 = v7 == 4;
            v5 = (((v7 - 4) ^ v7) & (v7 ^ 0x4)) < 0;
            v6 = (uint32_t)v7 >= 4;
        }
        while(v7 != 4);
        v0 = gvar_7EB74;
        VCMPE.F32(gvar_7EB74, 0);
        VMRS((uint8_t)v5 | ((uint8_t)v6 << SOCK_STREAM) | ((uint8_t)v4 << 2) | ((uint8_t)v3 << 3), v1);
        if(v4 != 0 || v5 != v3) {
            goto loc_320B8;
        }
        else {
            result = sub_1A870(gvar_482A70, gvar_7EDCC, gvar_482A6C);
            VCMPE.F32(gvar_7EB74, 0);
            VMRS((uint8_t)v5 | ((uint8_t)v6 << SOCK_STREAM) | ((uint8_t)v4 << 2) | ((uint8_t)v3 << 3), v1);
        }
        if(v4 != 0 || v5 != v3) {
            uint32_t v9 = gvar_7EDD0;
            result = sub_1AD08(&gvar_4FBAA0, gvar_482A70, 1);
            gvar_482A6C = (uint32_t)result;
            VCVT.F32.U32(v9, result);
            return result;
        loc_320B8:
            VCMPE.F32(v0, 0);
            VMRS((uint8_t)v5 | ((uint8_t)v6 << SOCK_STREAM) | ((uint8_t)v4 << 2) | ((uint8_t)v3 << 3), v1);
            if(v4 != 0 || v5 != v3) {
                uint32_t v9 = gvar_7EDD0;
                result = sub_1AD08(&gvar_4FBAA0, gvar_482A70, 1);
                gvar_482A6C = (uint32_t)result;
                VCVT.F32.U32(v9, result);
                return result;
            }
        }
        VCVT.F32.U32(gvar_482A6C, gvar_482A6C);
        return result;
    }
    v0 = gvar_7EB74;
    goto loc_320B8;
}
