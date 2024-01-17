int sub_40314(int param0, int* param1) {
    if(gvar_504CA4 == 0) {
        int v0 = sub_40038();
        if(v0 != 0) {
            return -1;
        }
    }
    uint32_t v1 = gvar_504C98;
    int v2 = gvar_504C8C == 0 ? *(int*)(param0 * 4 + 520496): *(int*)(param0 * 4 + 0x7ee48);
    *param1 = *(int*)(v2 * 4 + v1);
    return 0;
}
