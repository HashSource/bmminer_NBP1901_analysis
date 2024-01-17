void* sub_4D79C(void* param0, int param1, int param2, short* i) {
    char __s;
    char v0;
    memset(&__s, 0, 1040);
    int v1 = param1;
    void* ptr0 = param0;
    sub_4F90C(i, "<callback>");
    if(param0 != 0) {
        void* result = NULL;
        int v2 = &sub_4C070;
        char v3 = 0;
        int v4 = 0;
        int v5 = 0;
        int v6 = 0;
        int v7 = 0;
        int v8 = SOCK_STREAM;
        int v9 = sub_4D954(&v0);
        if(v9 == 0) {
            int v10 = param2;
            int v11 = -1;
            result = sub_4D288(&v2, param2, (int)i);
            sub_4C1FC((int*)&v2);
        }
        return result;
    }
    sub_4C0CC((int)i, 0, 4, "wrong arguments");
    return 0;
}
