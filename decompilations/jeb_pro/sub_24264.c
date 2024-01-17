int sub_24264(char* param0) {
    int v0 = 0;
    int v1 = 0;
    int v2 = 0;
    char* __s = param0;
    uint32_t v3 = sub_19AB4();
    do {
        int v4 = v2;
        ++v2;
        int v5 = sub_1E29C(v4);
        if(v5 != 0) {
            int v6 = sprintf(__s, "chain%d_voltage=%d;", v2, v3);
            int v7 = v6 + v1;
            ++v0;
            int v8 = sprintf(&param0[v7], "chain%d_voladded=%d;", v2, 0);
            int v9 = v8 + v7;
            int v10 = sprintf(&param0[v9], "chain%d_basefreq=%d;", v2, 300);
            int v11 = v10 + v9;
            int v12 = sprintf(&param0[v11], "chain%d_badcore=%d;", v2, 0);
            v1 = v12 + v11;
            __s = &param0[v1];
        }
    }
    while(v2 != 4);
    int v13 = sprintf(__s, "chainnum=%d;", v0);
    return sprintf(&param0[v1 + v13], "version=%s;", 0x80ba0);
}
