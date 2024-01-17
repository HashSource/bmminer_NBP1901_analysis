uint8_t sub_2B800(int* param0) {
    char __ptr1;
    int v0 = *param0;
    if(*param0 <= 26) {
        jump *(int*)(*param0 * 4 + &gvar_2B81C);
    }
    if(gvar_590404 == 0) {
        uint8_t result = (uint8_t)gvar_482A5C;
        if(gvar_482A5C == 0 && (int)gvar_7EBA0 <= 2) {
            return result;
        }
    }
    snprintf(&__ptr1, 0x800, "Should not happen for unknown data type %d", v0);
    sub_2E584(3, &__ptr1, 0);
    return 0;
}
