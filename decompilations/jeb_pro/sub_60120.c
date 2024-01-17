int sub_60120(int param0, int param1, int param2, int param3) {
    int v0;
    if(param3 == 0 && param2 == 0) {
        char v1 = param1 == 0;
        if(v1 != 0) {
            v1 = param0 == 0;
        }
        if(v1 == 0) {
            param1 = -1;
            param0 = -1;
        }
        return sub_60150(param0, param1);
    }
    return sub_601C0(param0, param1, param2, param3, &v0);
}
