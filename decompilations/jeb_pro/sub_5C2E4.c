void* sub_5C2E4(int param0, int* param1, uint32_t* param2) {
    int* ptr0 = sub_581FC(*(uint32_t**)(param1 + SOCK_STREAM), param0 + 0x1010);
    if(ptr0 != 0) {
        return sub_5F0D4(param2, (void*)((char*)ptr0 + 1025), ptr0[513]);
    }
    int v0 = param0 + 0x1010;
    sub_5DF98(&g2, "src/spec.c", 123, "zlog_mdc_get_kv key[%s] fail");
    return NULL;
}
