int sub_39128(int param0) {
    uint32_t v0 = gvar_4FCB3C;
    if(v0 != 0 && *(int*)(v0 + 4) != 0) {
        pthread_mutex_lock(&g810DC);
        uint32_t v1 = gvar_4FCB3C;
        if(*(int*)(v1 + 64) == 0) {
            sub_390B0((char*)param0);
        }
        else {
            *(int*)(*(int*)(v1 + 4) + 24)(param0);
        }
        param0 = pthread_mutex_unlock(&g810DC);
    }
    else if(gvar_7EB9C > 3) {
        int __ptr1 = 1684955464;
        int v2 = 0x6920656c;
        int v3 = 0x554e2073;
        int v4 = 0xa2e4c4c;
        char v5 = 0;
        param0 = sub_2E584(3, &__ptr1, 0);
    }
    return param0;
}
