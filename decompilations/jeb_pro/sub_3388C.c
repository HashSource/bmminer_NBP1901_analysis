int sub_3388C() {
    char __ptr1;
    char v0;
    uint32_t v1 = gvar_7EB9C;
    uint8_t v2 = (uint8_t)gvar_80FAC;
    uint8_t v3 = (uint8_t)gvar_80FA8;
    gvar_7EDE2 = v2;
    gvar_7EDE1 = v3;
    if(v1 > 3) {
        snprintf(&__ptr1, 0x800, "pulse_mode = %d, ccdly_sel = %d, pwth_sel = %d\n", (uint32_t)*(char*)&g7EDE0, v2, v3);
        sub_2E584(3, &__ptr1, 0);
    }
    int v4 = *(int*)&g7EDE0;
    *(short*)&__ptr1 = (char)v4;
    int v5 = (uint32_t)__ptr1 | ((uint32_t)v0 << 8) | ((uint32_t)0 << 16);
    return (uint32_t)(uint16_t)v5 | ((uint32_t)(uint8_t)(v4 >>> 16) << 16) | ((uint32_t)(uint8_t)(v5 >>> 24) << 24);
}
