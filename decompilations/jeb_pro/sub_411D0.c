int sub_411D0(int param0, int* param1) {
    if(param0 <= 2) {
        if(param0 == SOCK_STREAM) {
            sub_40314(19, param1);
            param1[0] = (int)*(short*)((char*)&param1[0] + 2);
            return 0;
        }
        return -5;
    }
    int __ptr1 = 543449442;
    int v0 = 1634886000;
    short v1 = 2669;
    char v2 = 0;
    sub_2E584(0, &__ptr1, 0);
    return -3;
}
