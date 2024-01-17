char* sub_5C630(int* param0, char* param1) {
    if(param0 != 0) {
        int v0 = *(param0 + 2311);
        int v1 = *(param0 + 2312);
        int v2 = *(param0 + 1027);
        char* ptr0 = "true";
        int v3 = *(param0 + SOCK_STREAM);
        if(*(param0 + 2310) == 0) {
            ptr0 = "false";
        }
        int v4 = *param0;
        char* ptr1 = ptr0;
        int v5 = v0;
        int v6 = v4;
        int v7 = v1;
        int v8 = v2;
        int* ptr2 = param0 + 2;
        int v9 = v3;
        int* ptr3 = param0;
        int* ptr4 = (int*)((char*)param0 + 0x1411);
        int* ptr5 = param0 + 0x404;
        return sub_5DF98(param1, "src/spec.c", 41, "----spec[%p][%.*s][%s|%d][%s,%ld,%ld,%s][%s]----");
    }
    return sub_5DF98(&g2, "src/spec.c", 34, "a_spec is null or 0");
}
