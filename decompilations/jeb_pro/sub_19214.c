int sub_19214(int param0) {
    char __ptr1;
    if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "chain[%d] PIC jump to app\n", param0);
        sub_2E584(3, &__ptr1, 0);
    }
    sub_46554((int)(uint8_t)param0);
    usleep(500000);
    int result = sub_46178((int)(uint8_t)param0);
    if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "Check chain[%d] PIC fw version=0x%02x\n", param0, result);
        result = sub_2E584(3, &__ptr1, 0);
    }
    return result;
}
