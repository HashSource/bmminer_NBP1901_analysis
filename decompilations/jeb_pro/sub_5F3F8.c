char* sub_5F3F8(int* param0, char* param1) {
    if(param0 != 0) {
        int v0 = *(param0 + 515);
        int v1 = *(param0 + 0x202);
        int* ptr0 = (int*)((char*)param0 + 1029);
        int* ptr1 = param0 + SOCK_STREAM;
        int v2 = v1;
        int v3 = *param0;
        int* ptr2 = param0;
        int v4 = v3;
        return sub_5DF98(param1, "src/level.c", 26, "---level[%p][%d,%s,%s,%d,%d]---");
    }
    return sub_5DF98(&g2, "src/level.c", 19, "a_level is null or 0");
}
