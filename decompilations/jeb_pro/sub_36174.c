int* sub_36174(int* param0) {
    char __ptr1;
    sub_356C4(15, 0xFF);
    if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "Unknown miner type(%d).\n", 2);
        sub_2E584(3, &__ptr1, 0);
    }
    *param0 = 3000;
    *(param0 + SOCK_STREAM) = 2000;
    *(param0 + 2) = &sub_359F8;
    return param0;
}
