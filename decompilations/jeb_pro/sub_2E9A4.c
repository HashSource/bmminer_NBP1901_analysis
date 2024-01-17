int sub_2E9A4(int param0, int param1, int param2) {
    if(gvar_590404 == 0) {
        int v0 = param0;
        int __fd = fileno(stderr);
        int v1 = isatty(__fd);
        if(v1 == 0) {
            fprintf(stderr, "\n");
            fflush(stderr);
        }
        param0 = v0 != 3 ? gvar_58E350 & SOCK_STREAM: 0;
        if((v0 != 3 ? gvar_58E350 & SOCK_STREAM: 0) != 0) {
            return param0;
        }
        return sub_2E92C("\n", param1, param2);
    }
    syslog(param0 | 0x80, "\n");
    return param0;
}
