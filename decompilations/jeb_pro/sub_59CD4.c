int sub_59CD4(uint32_t* param0, uint32_t* param1) {
    if(*(param0 + 2081) != 0) {
        uint32_t v0 = param1[4];
        uint32_t* ptr0 = *(param0 + 1293);
        char* ptr1 = *(char**)v0;
        int* ptr2 = *(ptr0 + SOCK_STREAM);
        *(uint32_t*)(v0 + 4) = ptr1;
        if((int)ptr2 > 0) {
            int v1 = 0;
            do {
                int* ptr3 = *(uint32_t*)(v1 * 4 + (int)*ptr0);
                ++v1;
                int v2 = *(ptr3 + 2315)((int)ptr3, (int)param1, (int)v0);
                if(v2 != 0) {
                    sub_5DF98(&g2, "src/rule.c", 0x1a1, "zlog_spec_gen_path fail");
                    return -1;
                }
                ptr0 = *(param0 + 1293);
                v0 = *(ptr0 + SOCK_STREAM);
            }
            while((int)v0 > v1);
            ptr1 = *(uint32_t*)(param1[4] + 4);
        }
        *ptr1 = 0;
        int v3 = sub_57A1C(*(uint32_t**)(param0 + 1566), param1);
        if(v3 == 0) {
            **(uint32_t*)(param1[7] + 4) = 0;
            uint32_t v4 = param1[7];
            int* ptr4 = *(param0 + 2081);
            int v5 = *(int*)v4;
            int v6 = *(int*)param1[4];
            int v7 = *(int*)(v4 + 4) - v5;
            int v8 = v5;
            int v9 = v6;
            int v10 = v7;
            int v11 = ptr4((int)&v8);
            if(v11 == 0) {
                return 0;
            }
            sub_5DF98(&g2, "src/rule.c", 430, "a_rule->record fail");
            return -1;
        }
        sub_5DF98(&g2, "src/rule.c", 420, "zlog_format_gen_msg fail");
        return -1;
    }
    uint32_t* ptr5 = param0 + 1568;
    sub_5DF98(&g2, "src/rule.c", 413, "user defined record funcion for [%s] not set, no output");
    return -1;
}
