int* sub_57ED4(int param0, char* param1) {
    int* result;
    if(param0 != 0) {
        int v0 = param0;
        sub_5DF98(param1, "src/mdc.c", 22, "---mdc[%p]---");
        result = sub_5DE60(*(uint32_t**)param0);
        for(int* i = result; i != 0; i = result) {
            int v1 = i[2];
            int v2 = i[2];
            v0 = v1;
            int v3 = v1 + 1025;
            sub_5DF98(param1, "src/mdc.c", 28, "----mdc_kv[%p][%s]-[%s]----");
            result = sub_5DEA8(*(uint32_t**)param0, i);
        }
        return result;
    }
    return sub_5DF98(&g2, "src/mdc.c", 21, "a_mdc is null or 0");
}
