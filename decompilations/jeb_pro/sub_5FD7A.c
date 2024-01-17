int sub_5FD7A(int param0, int param1) {
    char v0 = param0 < 0;
    if((param0 != 0 && v0 == 0)) {
        param0 = 0x7fffffff;
    }
    if(v0 != 0) {
        param0 = 0x80000000;
    }
    return sub_60150(param0, param1);
}
