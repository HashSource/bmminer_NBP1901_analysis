int sub_19AF0(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int __ptr1;
    int result;
    char v4;
    char v5;
    char __s;
    char __s1;
    int i;
    memset(&__s, 0, 128);
    memset(&__s1, 0, 32);
    int v6 = sub_258C8((char*)&__s1);
    if(v6 == 0) {
        sprintf((char*)&__s, "http://%s:%d/power/%s", param0, param1, &__s1);
        void* __ptr = sub_253A0((char*)&__s);
        if(__ptr != 0) {
            void* ptr0 = sub_4D38C((int)__ptr, 0, &i);
            if(ptr0 == 0) {
                result = -1;
                if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, "JSON decode failed(%d): %s", i, &v5);
                    sub_2E584(3, &__ptr1, 0);
                }
            }
            else {
                uint32_t* ptr1 = sub_4E234((int*)ptr0, "power");
                if(ptr1 == 0) {
                    result = -1;
                    if(gvar_7EB9C > 3) {
                        __ptr1 = 1780510574;
                        v3 = 544108403;
                        v2 = 0x656a626f;
                        v1 = 1885041763;
                        *(int*)&v4 = 1919252335;
                        *(int*)&v0 = 1868963933;
                        int v7 = 174354037;
                        char v8 = 0;
                        sub_2E584(3, &__ptr1, 0);
                    }
                }
                else {
                    result = sub_4E9C4((int*)ptr1);
                }
                if(*(int*)((int)ptr0 + 4) != -1) {
                    DMB();
                    int v9 = *(int*)((int)ptr0 + 4) - SOCK_STREAM;
                    --*(int*)((int)ptr0 + 4);
                    if(v9 == 0) {
                        sub_4EB6C(ptr0);
                    }
                }
            }
            free(__ptr);
            return result;
        }
        if(gvar_7EB9C > 3) {
            __ptr1 = 1886680168;
            v3 = 0x74656720;
            v2 = 1767990816;
            v1 = 0xa64656c;
            v4 = 0;
            sub_2E584(3, &__ptr1, 0);
            return -1;
        }
    }
    else if(gvar_7EB9C > 3) {
        __ptr1 = 0x20746567;
        v3 = 1633906540;
        v2 = 1885937772;
        v1 = 1767990816;
        *(int*)&v4 = 0xa64656c;
        v0 = 0;
        sub_2E584(3, &__ptr1, 0);
    }
    return -1;
}
