int sub_13CE0(int param0) {
    int v0;
    char __ptr1;
    int v1 = 0;
    uint32_t v2 = sub_1E2FC();
    while(v2 > v1) {
        int v3 = sub_3FF08((int)(uint8_t)v1);
        if(v3 >= 0) {
            if(gvar_7EB9C > 4) {
                snprintf(&__ptr1, 0x800, "fan[%u] speed[%u]\n", (int)(uint8_t)v1, v3);
                sub_2E584(4, &__ptr1, 0);
            }
            sub_1E3D4((int)(uint8_t)v1, v3);
            if(v3 <= 9999) {
                v0 = SOCK_STREAM;
                if(param0 > (uint32_t)v3) {
                    goto loc_13D34;
                }
            }
            else {
            loc_13D34:
                v0 = 0;
            }
            sub_1E350((int)(uint8_t)v1, v0);
        }
        ++v1;
        v2 = sub_1E2FC();
    }
    return (int)(uint8_t)v1;
}
