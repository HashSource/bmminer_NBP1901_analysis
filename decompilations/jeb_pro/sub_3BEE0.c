uint32_t sub_3BEE0(int param0, int* param1) {
    char __ptr1;
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "[DEBUG] Get freq result, chain = %d.\n", param0);
        sub_2E584(4, &__ptr1, 0);
    }
    uint32_t result = sub_1E0F0();
    if(result != 0) {
        int* ptr0 = (int*)(result * 4 + (int)param1);
        result = param0 * 0x400 + gvar_4FCB44;
        do {
            int v0 = *(int*)(result + 4);
            result += 4;
            *param1 = v0;
            ++param1;
        }
        while(param1 != ptr0);
    }
    return result;
}
