int sub_5D5F0(uint32_t* param0, int param1, uint32_t param2) {
    uint32_t v0 = param2;
    if((int)param0[2] <= param1) {
        int v1 = sub_5D428(param0, (int*)(param0 + 2), param1);
        if(v1 != 0) {
            sub_5DF98(&g2, "src/zc_arraylist.c", 81, "expand_internal fail");
            return -1;
        }
    }
    uint32_t v2 = param0[0];
    int v3 = *(int*)(param1 * 4 + v2);
    uint32_t* ptr0 = (uint32_t*)(param1 * 4 + v2);
    if(v3 != 0) {
        uint32_t v4 = param0[3];
        if(v4 != 0) {
            v4(v3);
            ptr0 = param1 * 4 + param0[0];
        }
    }
    param2 = param0[SOCK_STREAM];
    *ptr0 = v0;
    if(param1 >= (int)param2) {
        param0[SOCK_STREAM] = (uint32_t)(param1 + SOCK_STREAM);
    }
    return 0;
}
