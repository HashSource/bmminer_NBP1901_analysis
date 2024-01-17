int sub_44AE4() {
    int v0 = 0;
    sub_40314(13, &v0);
    sub_40390(13, ~(~(v0 >>> 16) * &ELFHeader));
    sleep(3);
    sub_40314(13, &v0);
    sub_40390(13, (v0 >>> 16) * &ELFHeader);
    sleep(1);
    return sub_444B8();
}
