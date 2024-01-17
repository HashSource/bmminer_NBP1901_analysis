int sub_26BD4(int param0, int param1) {
    int v0;
    int result;
    char __s;
    memset(&__s, 0, 0x100);
    int v1 = (int)gvar_8074C;
    if(v1 == 0) {
        v1 = sub_536F4("bmminer_tuning");
        gvar_8074C = (uint32_t)v1;
    }
    int v2 = param0;
    sub_54CB0(v1, "\n", 8, "_tuning_freq_dump_nonce_info", 28, 611, 20, "\n current freq: %d\n");
    int v3 = (int)gvar_8074C;
    if(v3 == 0) {
        v3 = sub_536F4("bmminer_tuning");
        gvar_8074C = (uint32_t)v3;
    }
    int v4 = 28;
    int v5 = "\n dump asic nonce number...\n";
    int v6 = 612;
    int v7 = "Chain[%d] nonce:\n";
    int v8 = 0;
    int v9 = 20;
    sub_54CB0(v3, "\n", 8, "_tuning_freq_dump_nonce_info", 28, 612, 20, "\n dump asic nonce number...\n");
    int v10 = 0;
    int* ptr0 = (int*)&gvar_7FA00;
    int v11 = "domain %02d %s";
    do {
        result = sub_1E29C(v10);
        if(result != 0) {
            int v12 = *(ptr0 + 0x353);
            if(v12 == 0) {
                v12 = sub_536F4("bmminer_tuning");
                *(ptr0 + 0x353) = v12;
            }
            v9 = 20;
            v5 = v7;
            v6 = 616;
            v4 = 28;
            v2 = v10;
            sub_54CB0(v12, "\n", 8, "_tuning_freq_dump_nonce_info", 28, 616, 20, v5);
            uint32_t v13 = sub_1E0F0();
            if((int)v13 > 0) {
                int v14 = 0;
                int v15 = v10;
                int* ptr1 = (int*)(param1 - 4 + v10 * 0x400);
                int v16 = "_tuning_freq_dump_nonce_info";
                do {
                    int v17 = *(ptr1 + SOCK_STREAM);
                    ++ptr1;
                    v0 = v14 + SOCK_STREAM;
                    v4 = v17;
                    int v18 = snprintf((char*)(v8 + (int)&__s), (size_t)(0x100 - v8), "asic[%03d]=%-8d", v14);
                    uint32_t v19 = sub_1E100();
                    sub_5FD8C(v0, (int)v19);
                    v8 += v18;
                    if(param1 == 0) {
                        v8 = 0;
                        int v20 = *(ptr0 + 0x353);
                        if(v20 == 0) {
                            int* ptr2 = sub_536F4("bmminer_tuning");
                            v20 = ptr2;
                            *(int**)(ptr0 + 0x353) = ptr2;
                        }
                        v2 = sub_5FAF8(v14, (int)v13);
                        v5 = v11;
                        v4 = 28;
                        v6 = 625;
                        v9 = 20;
                        sub_54CB0(v20, "\n", 8, v16, 28, 625, 20, v5);
                    }
                    v14 = v0;
                }
                while(v0 != v13);
                v10 = v15;
            }
            int v21 = *(ptr0 + 0x353);
            if(v21 == 0) {
                v21 = sub_536F4("bmminer_tuning");
                *(ptr0 + 0x353) = v21;
            }
            v5 = "Chain[%d] total nonce number = %d\n";
            v9 = 20;
            v4 = 28;
            v6 = 630;
            v2 = v10;
            sub_54CB0(v21, "\n", 8, "_tuning_freq_dump_nonce_info", 28, 630, 20, "Chain[%d] total nonce number = %d\n");
            int v22 = *(ptr0 + 0x353);
            if(v22 == 0) {
                v22 = sub_536F4("bmminer_tuning");
                *(ptr0 + 0x353) = v22;
            }
            v5 = "\n";
            v9 = 20;
            v4 = 28;
            v6 = 0x277;
            result = sub_54CB0(v22, "\n", 8, "_tuning_freq_dump_nonce_info", 28, 0x277, 20, "\n");
        }
        ++v10;
    }
    while(v10 != 4);
    return result;
}
