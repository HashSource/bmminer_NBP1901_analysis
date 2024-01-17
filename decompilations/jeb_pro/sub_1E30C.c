int sub_1E30C() {
    uint32_t v0 = gvar_58E004;
    if((int)v0 > 0) {
        int result = 0;
        uint32_t v1 = gvar_58E020;
        int v2 = 0;
        do {
            int v3 = (uint32_t)*(char*)(v2 * 8 + v1);
            ++v2;
            if(v3 != 0) {
                ++result;
            }
        }
        while(v0 != v2);
        return result;
    }
    return 0;
}
