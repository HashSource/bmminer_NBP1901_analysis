int sub_182FC(int param0, uint32_t* param1) {
    uint32_t v0 = gvar_7F814;
    if(v0 != 0 && *(char*)(v0 + 28) != 0) {
        if(param1 != 0) {
            *param1 = (uint32_t)*(char*)(*(int*)(param0 * 4 + v0) + 15);
            return 0;
        }
        return -2;
    }
    if(gvar_7EB9C <= 3) {
        return -1;
    }
    return sub_1697C(param0);
}
