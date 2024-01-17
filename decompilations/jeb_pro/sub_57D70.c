uint32_t* sub_57D70(uint32_t* param0, int param1) {
    uint32_t* result;
    if((int)*(param0 + SOCK_STREAM) > param1) {
        result = *(uint32_t*)(param1 * 4 + (int)*param0);
        if(result != 0) {
            return result;
        }
    }
    sub_5DF98(&g2, "src/level_list.c", 119, "l[%d] not in (0,254), or has no level defined,see configure file define, set to UNKOWN");
    int* ptr0 = *(param0 + SOCK_STREAM);
    result = (int)ptr0 > 254 ? *param0: NULL;
    if((int)ptr0 > 254) {
        result = *(result + 254);
    }
    return result;
}
