int sub_32924(int param0) {
    int result;
    char __ptr1;
    sub_1ED08();
    sub_304D4(10);
    uint32_t v0 = sub_1E0F0();
    int v1 = (int)((uint8_t)v0 - SOCK_STREAM);
    if((uint8_t)v0 == SOCK_STREAM) {
        return (int)(v0 - SOCK_STREAM);
    }
loc_32964:
    do {
        sub_1E9B4(param0, v1);
        sub_2BE40(param0, 0);
        result = sub_1E67C(param0);
        uint32_t v2 = (uint32_t)(v1 - SOCK_STREAM);
        if(result <= 0) {
            v1 = (uint8_t)v2;
            if((uint8_t)v2 == 0) {
                return result;
            }
            goto loc_32964;
        }
        if(gvar_7EB9C > 3) {
            snprintf(&__ptr1, 0x800, "bad asic is %d\n", v1);
            return sub_2E584(3, &__ptr1, 0);
        }
    }
    while(gvar_7EB9C > 3);
    return result;
}
