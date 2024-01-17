uint32_t sub_19DE4(int param0) {
    uint32_t v0 = gvar_7EDC8;
    uint32_t result = 0;
    if(v0 != 2) {
        sub_188A0(param0, gvar_80FB4, &result);
        return result;
    }
    uint32_t v1 = *(uint32_t*)(param0 * 4 + (int)&gvar_7F8C4);
    uint32_t v2 = sub_1E0F0();
    uint32_t v3 = sub_1E130();
    return (int)(v2 * v3 * v1) / 1000;
}
