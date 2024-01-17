uint32_t sub_1B2FC() {
    char v0;
    int v1;
    char v2;
    if(gvar_7EDC8 != 2) {
        uint32_t result = 50;
        int v3 = 0;
        do {
            int v4 = sub_1E29C(v3);
            if(v4 != 0) {
                sub_19D70((uint32_t)(v3 * 0x400 + &gvar_4FBAA0), &v0, &v1, &v2);
                uint32_t v5 = v1;
                if(v5 > result) {
                    result = v5;
                }
            }
            ++v3;
        }
        while(v3 != 4);
        return result;
    }
    uint32_t result1 = gvar_482A6C;
    if(result1 < 50) {
        result1 = 50;
    }
    return result1;
}
