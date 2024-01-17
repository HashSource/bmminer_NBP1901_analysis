int sub_5A040(int* param0, uint32_t* param1) {
    int v0 = sub_57A1C(*(uint32_t**)(param0 + 1566), param1);
    if(v0 == 0) {
        uint32_t* ptr0 = sub_57D70(*(uint32_t**)(gvar_99EEC8 + 0x2440), *(int*)(param1[2] + 292));
        **(uint32_t*)(param1[7] + 4) = 0;
        syslog((int)(ptr0[515] | *(param0 + 1565)), "\n");
        return 0;
    }
    sub_5DF98(&g2, "src/rule.c", 364, "zlog_format_gen_msg fail");
    return -1;
}
