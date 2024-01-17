int sub_2D158(int param0, int param1) {
    int v0;
    int result;
    char __s;
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = "domain %02d %s total=%-8u";
    int* ptr0 = (int*)&g810DC;
    memset(&__s, 0, 0x100);
    do {
        result = sub_1E29C(v2);
        if(result != 0) {
            int v5 = *(ptr0 + 14);
            if(v5 == 0) {
                v5 = sub_536F4("bmminer_nonce");
                *(ptr0 + 14) = v5;
            }
            int v6 = "\n asic nonce number for chain[%d]...\n";
            int v7 = 20;
            int v8 = 24;
            int v9 = 538;
            int v10 = v2;
            sub_54CB0(v5, "asic_response.c", 15, "dump_nonce_info_all_core", 24, 538, 20, "\n asic nonce number for chain[%d]...\n");
            result = sub_1E0F0();
            int v11 = result;
            if(result > 0) {
                int v12 = v2;
                int v13 = 0;
                int v14 = v2 * 0x400 + 0x81124;
                int v15 = "dump_nonce_info_all_core";
                do {
                    int v16 = *(int*)(v14 + 4);
                    v14 += 4;
                    v0 = v13 + SOCK_STREAM;
                    v8 = v16;
                    v3 += v16;
                    int v17 = snprintf((char*)(v1 + (int)&__s), (size_t)(0x100 - v1), "asic[%03d]=%-8d", v13);
                    uint32_t v18 = sub_1E100();
                    result = sub_5FD8C(v0, (int)v18);
                    v1 += v17;
                    if(param1 == 0) {
                        int v19 = *(ptr0 + 14);
                        if(v19 == 0) {
                            int* ptr1 = sub_536F4("bmminer_nonce");
                            v19 = ptr1;
                            *(int**)(ptr0 + 14) = ptr1;
                        }
                        uint32_t v20 = sub_1E100();
                        int v21 = v3;
                        v3 = 0;
                        v1 = 0;
                        int v22 = sub_5FAF8(v13, (int)v20);
                        v7 = 20;
                        v10 = v22;
                        v6 = v4;
                        v8 = 24;
                        v9 = 544;
                        result = sub_54CB0(v19, "asic_response.c", 15, v15, 24, 544, 20, v6);
                    }
                    v13 = v0;
                }
                while(v0 != v11);
                v2 = v12;
            }
        }
        ++v2;
    }
    while(v2 != 4);
    return result;
}
