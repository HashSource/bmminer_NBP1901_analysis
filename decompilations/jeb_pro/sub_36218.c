FILE* sub_36218() {
    FILE* ptr0 = fopen64("/config/scanfreqdone", "\n");
    if(gvar_7EB9C > 4) {
        int __ptr1 = 0x4245445b;
        int v0 = 0x205d4755;
        int v1 = 1667590211;
        int v2 = 1718165611;
        int v3 = 1702327072;
        int v4 = 1763733605;
        int v5 = 1818304627;
        int v6 = 1684104562;
        int v7 = 1868832889;
        int v8 = 0xa2e656e;
        char v9 = 0;
        sub_2E584(4, &__ptr1, 0);
    }
    FILE* __stream = ptr0;
    if(__stream != 0) {
        fclose(__stream);
        __stream = &g1;
    }
    return __stream;
}
