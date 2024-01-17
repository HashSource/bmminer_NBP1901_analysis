int sub_4FA10(int param0, int param1, int param2, int param3, int param4) {
    int v0;
    int v1;
    char v2;
    int v3 = sub_51CAC(param1, (char)param2, param3, param4, (char*)&v2);
    if(v3 == 0) {
        sub_51E54(param0, &v2, 9);
        if(param1 == SOCK_STREAM) {
            v1 = 0;
            v0 = 0;
        }
        else {
            v1 = param2;
            v0 = SOCK_STREAM;
        }
        sub_51B44(v0, param0, v1, param3, param4);
        return 0;
    }
    return -1;
}
