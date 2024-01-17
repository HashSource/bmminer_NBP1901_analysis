int sub_460C4(int param0) {
    char __ptr1;
    if((uint32_t)param0 <= 15) {
        if(*(int*)(param0 * 8 + 10088008) != 0 || *(int*)(param0 * 8 + 10088012) != 0) {
            pthread_mutex_lock(&g50514C);
            sub_49574(*(int*)(param0 * 8 + 10088008));
            *(int*)(param0 * 8 + 10088012) = 0;
            param0 = pthread_mutex_unlock(&g50514C);
        }
        return param0;
    }
    snprintf(&__ptr1, 0x800, "%s: Bad pic param, input chain is %d\n", "close_pic", param0);
    return sub_2E584(0, &__ptr1, 0);
}
