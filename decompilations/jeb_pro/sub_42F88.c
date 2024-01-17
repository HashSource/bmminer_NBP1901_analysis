int sub_42F88(int __fd) {
    if(gvar_505028 == 0) {
        return 0;
    }
    int result = close(__fd);
    if(result != 0) {
        int __ptr1 = 543449964;
        int v0 = 0x736f6c63;
        int v1 = 0x61662065;
        int v2 = 0x64656c69;
        int v3 = 0xa212121;
        char v4 = 0;
        sub_2E584(0, &__ptr1, 0);
        result = -1;
    }
    gvar_505028 = 0;
    return result;
}
