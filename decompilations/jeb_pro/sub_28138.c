int sub_28138(int param0) {
    char __ptr1;
    if(param0 > 3000000) {
        sub_1EB74();
        sub_304D4(100);
    }
    if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "set UART baud to %d\n", param0);
        sub_2E584(3, &__ptr1, 0);
    }
    sub_1E9CC(param0);
    sub_1E160();
    return sub_14F20();
}
