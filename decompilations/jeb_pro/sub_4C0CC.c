int sub_4C0CC(int param0, int param1, int param2, char* __format) {
    int v0;
    int v1;
    int v2;
    char __s;
    char __arg;
    char __s1;
    if(param0 != 0) {
        int v3 = param2;
        vsnprintf(&__s, 160, __format, &__arg);
        char v4 = 0;
        if(param1 == 0) {
            v1 = -1;
            v0 = 0;
            v2 = -1;
        }
        else {
            int v5 = sub_4D9C8((int*)(param1 + 40));
            v2 = *(int*)(param1 + 24);
            v1 = *(int*)(param1 + 28);
            v0 = *(int*)(param1 + 36);
            if((v5 == 0 || *(char*)v5 == 0)) {
                int v6 = *(int*)(param1 + 20);
                if(v3 == 8) {
                    v3 = 6;
                }
                if(v6 != -2) {
                    snprintf(&__s1, 160, "%s near end of file", &__s);
                }
            }
            else if(*(int*)(param1 + 44) <= 20) {
                snprintf(&__s1, 160, "%s near \'%s\'", &__s, v5);
            }
        }
        param0 = sub_4F95C(param0, v2, v1, v0, v3, "\n");
    }
    return param0;
}
