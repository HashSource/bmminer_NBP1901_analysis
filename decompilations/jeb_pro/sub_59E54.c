int sub_59E54(int* param0, uint32_t* param1) {
    int v0 = sub_57A1C(*(uint32_t**)(param0 + 1566), param1);
    if(v0 == 0) {
        uint32_t v1 = param1[7];
        void* __buf = *(void**)v1;
        ssize_t v2 = write(2, __buf, (size_t)(*(int*)(v1 + 4) - (int)__buf));
        if(v2 >= 0) {
            return 0;
        }
        int* ptr0 = __errno_location();
        int v3 = ptr0[0];
        sub_5DF98(&g2, "src/rule.c", 0x1d1, "write fail, errno[%d]");
        return -1;
    }
    sub_5DF98(&g2, "src/rule.c", 459, "zlog_format_gen_msg fail");
    return -1;
}
