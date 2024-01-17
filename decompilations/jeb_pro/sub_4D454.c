void* sub_4D454(int param0, int param1, int param2, short* i) {
    char v0;
    sub_4F90C(i, "<buffer>");
    if(param0 != 0) {
        void* result = NULL;
        int v1 = &sub_4C04C;
        char v2 = 0;
        int v3 = 0;
        int v4 = 0;
        int v5 = 0;
        int v6 = 0;
        int v7 = SOCK_STREAM;
        int v8 = sub_4D954(&v0);
        if(v8 == 0) {
            int v9 = param2;
            int v10 = -1;
            result = sub_4D288(&v1, param2, (int)i);
            sub_4C1FC((int*)&v1);
        }
        return result;
    }
    sub_4C0CC((int)i, 0, 4, "wrong arguments");
    return NULL;
}
