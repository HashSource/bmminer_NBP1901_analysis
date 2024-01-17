int sub_42C68(char* __file) {
    int v0;
    int __ptr1;
    short v1;
    if(gvar_505028 != 0) {
        return 0;
    }
    if(__file != 0) {
        int result = open64(__file, O_RDWR|O_NDELAY);
        gvar_50502C = (uint32_t)result;
        if(result >= 0) {
            gvar_505028 = 1;
            return result;
        }
        __ptr1 = 0x6e65706f;
        v0 = 1684237344;
        *(int*)&v1 = 1767990816;
        int v2 = 0x2164656c;
        int v3 = 0xa2121;
        sub_2E584(0, &__ptr1, 0);
        return -1;
    }
    __ptr1 = 543449442;
    v0 = 1634886000;
    v1 = 2669;
    char v4 = 0;
    sub_2E584(0, &__ptr1, 0);
    return -3;
}
