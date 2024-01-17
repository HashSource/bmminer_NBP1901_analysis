int sub_48438(int param0, int param1, int param2, int param3, int param4) {
    int result;
    char __ptr1;
    if((uint32_t)param0 <= 15) {
        if(*(int*)(param0 * 8 + 10088012) == 0) {
            result = sub_46024(param0);
            if(result < 0) {
                snprintf(&__ptr1, 0x800, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_write_iic", param0);
                sub_2E584(0, &__ptr1, 0);
                return result;
            }
        }
        return sub_46CA0(*(int*)(param0 * 8 + 10088008), param1, param2, param3, param4);
    }
    snprintf(&__ptr1, 0x800, "%s: Bad pic param, input chain is %d\n", "pic_write_iic", param0);
    sub_2E584(0, &__ptr1, 0);
    return 0x80000201;
}
