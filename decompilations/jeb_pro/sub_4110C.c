int sub_4110C(int param0, int param1) {
    int __ptr1;
    if(param0 <= 2) {
        if(param0 != SOCK_STREAM) {
            snprintf(&__ptr1, 0x800, "pwm type %d not supported\n", param0 - SOCK_STREAM);
            sub_2E584(0, &__ptr1, 0);
            return 0;
        }
        if(param1 >= 100) {
            param1 = 100;
        }
        sub_40390(19, (100 - param1) | (param1 * &ELFHeader));
        sub_40390(23, (100 - param1) | (param1 * &ELFHeader));
        return 0;
    }
    __ptr1 = 543449442;
    int v0 = 1634886000;
    short v1 = 2669;
    char v2 = 0;
    sub_2E584(0, &__ptr1, 0);
    return -3;
}
