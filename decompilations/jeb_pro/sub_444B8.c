int sub_444B8() {
    int result;
    int v0 = 10;
    int v1 = 0;
    sub_40314(35, &v1);
    sub_40390(35, v1 & 0xffffffbf);
    do {
        usleep(1000);
        v1 = 0;
        sub_40314(35, &v1);
        result = 35;
        if((v1 & 0x40) == 0) {
            return result;
        }
        v1 = 0;
        sub_40314(35, &v1);
        result = sub_40390(35, v1 & 0xffffffbf);
        --v0;
    }
    while(v0 != 0);
    return result;
}
