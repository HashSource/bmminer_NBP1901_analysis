int sub_3AEA0(int param0) {
    char __ptr1;
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "[DEBUG] Get freq result, chain = %d.\n", param0);
        sub_2E584(4, &__ptr1, 0);
    }
    return *(int*)(param0 * 4 + gvar_4FCB40 + 4);
}
