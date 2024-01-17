int sub_59954(uint32_t* param0, uint8_t* param1) {
    int v0;
    uint32_t* ptr0 = *(param0 + 1559);
    if(ptr0 != 0) {
        uint32_t* ptr1 = *(uint32_t*)(param1 + 20);
        uint8_t* ptr2 = param1;
        int* ptr3 = *(ptr0 + SOCK_STREAM);
        param1 = *ptr1;
        if((int)ptr3 > 0) {
            v0 = 0;
        }
        *(ptr1 + SOCK_STREAM) = param1;
        if((int)ptr3 > 0) {
            do {
                int* ptr4 = *(uint32_t*)(v0 * 4 + (int)*ptr0);
                ++v0;
                int v1 = *(ptr4 + 2316)((int)ptr4, (int)ptr2, (int)ptr1);
                if(v1 != 0) {
                    sub_5DF98(&g2, "src/rule.c", 151, "zlog_spec_gen_path fail");
                    return 0;
                }
                ptr0 = *(param0 + 1559);
                ptr1 = *(ptr0 + SOCK_STREAM);
            }
            while((int)ptr1 > v0);
            param1 = *(*(uint32_t*)(ptr2 + 20) + SOCK_STREAM);
        }
        *param1 = NULL;
        return **(uint32_t*)(ptr2 + 20);
    }
    return (int)(param0 + 1302);
}
