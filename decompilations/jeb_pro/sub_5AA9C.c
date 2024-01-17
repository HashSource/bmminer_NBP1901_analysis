void* sub_5AA9C(void* param0, int param1, void* param2, void* param3, int param4, int param5) {
    char __s2;
    char __s;
    char __s1;
    int v0 = 0;
    if(param0 != 0) {
        if(param2 != 0) {
            if(param3 != 0) {
                void* __ptr = calloc(1, 0x2088);
                if(__ptr != 0) {
                    *(int*)((int)__ptr + 4136) = param4;
                    *(int*)((int)__ptr + 0x1868) = param5;
                    memset(&__s, 0, 0x1001);
                    __isoc99_sscanf();
                    if(param0 == SOCK_STREAM) {
                        memset(&__s1, 0, 0x1001);
                        memset(&__s2, 0, 0x1001);
                        __isoc99_sscanf();
                        sub_5DF98(&g2, "src/rule.c", 627, "sscanf [%s] fail, category or level is null");
                    }
                    else {
                        sub_5DF98(&g2, "src/rule.c", 612, "sscanf [%s] fail, selector");
                    }
                    sub_5A97C((char*)__ptr);
                    return 0;
                }
                __errno_location();
                sub_5DF98(&g2, "src/rule.c", 598, "calloc fail, errno[%d]");
                return 0;
            }
            sub_5DF98(&g2, "src/rule.c", 0x252, "formats is null or 0");
            return 0;
        }
        sub_5DF98(&g2, "src/rule.c", 593, "default_format is null or 0");
        return 0;
    }
    sub_5DF98(&g2, "src/rule.c", 592, "line is null or 0");
    return 0;
}
