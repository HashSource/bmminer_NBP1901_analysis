int sub_595C0(int* param0, uint32_t* param1) {
    if(*(param0 + 2081) != 0) {
        int v0 = sub_57A1C(*(uint32_t**)(param0 + 1566), param1);
        if(v0 == 0) {
            **(uint32_t*)(param1[7] + 4) = 0;
            uint32_t v1 = param1[7];
            int v2 = *(param0 + 2081);
            int v3 = *(int*)v1;
            int v4 = *(int*)(v1 + 4);
            int* ptr0 = (int*)((char*)param0 + 0x1c81);
            int v5 = v3;
            int v6 = v4 - v3;
            int v7 = v2((int)&v5);
            if(v7 == 0) {
                return 0;
            }
            sub_5DF98(&g2, "src/rule.c", 0x191, "a_rule->record fail");
            return -1;
        }
        sub_5DF98(&g2, "src/rule.c", 391, "zlog_format_gen_msg fail");
        return -1;
    }
    int* ptr1 = param0 + 1568;
    sub_5DF98(&g2, "src/rule.c", 386, "user defined record funcion for [%s] not set, no output");
    return -1;
}
