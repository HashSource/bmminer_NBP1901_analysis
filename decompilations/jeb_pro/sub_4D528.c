void* sub_4D528(int param0, int param1, short* i) {
    char v0;
    sub_4F90C(i, stdin == param0 ? "<stdin>": "<stream>");
    if(param0 != 0) {
        void* result = NULL;
        int v1 = param0;
        int v2 = &→fgetc;
        char v3 = 0;
        int v4 = 0;
        int v5 = 0;
        int v6 = 0;
        int v7 = 0;
        int v8 = SOCK_STREAM;
        int v9 = sub_4D954(&v0);
        if(v9 == 0) {
            int v10 = param1;
            int v11 = -1;
            result = sub_4D288(&v2, param1, (int)i);
            sub_4C1FC((int*)&v2);
        }
        return result;
    }
    sub_4C0CC((int)i, 0, 4, "wrong arguments");
    return NULL;
}
