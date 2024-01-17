// Stale decompilation - Refresh this view to re-decompile this code
int sub_2E584(int param0, char* __ptr1, int param2) {
    int result;
    char __ptr;
    if(gvar_590404 == 0) {
        int v0 = 0;
        int v1 = 0;
        sub_302A0(&v0);
        int v2 = v1;
        int __timer = v0;
        tm* ptr0 = localtime(&__timer);
        int v3 = ptr0->tm_year;
        int v4 = v2 / 1000;
        char* ptr1 = (char*)ptr0->tm_sec;
        int v5 = ptr0->tm_min;
        int v6 = ptr0->tm_hour;
        int v7 = ptr0->tm_mday;
        int v8 = ptr0->tm_mon + SOCK_STREAM;
        snprintf(&__ptr, 64, " [%d-%02d-%02d %02d:%02d:%02d.%03d] ", v3 + 1900, v8, v7, v6, v5, ptr1, v2 / 1000);
        int __fd = fileno(stderr);
        int v9 = isatty(__fd);
        if(v9 == 0) {
            fprintf(stderr, "%s%s\n", &__ptr, __ptr1);
            fflush(stderr);
        }
        if(gvar_482130 != 0) {
            FILE* __s = (FILE*)gvar_482134;
            if(__s == 0) {
                FILE* ptr2 = fopen64(&g482158, &gvar_482138);
                __s = ptr2;
                gvar_482134 = (uint32_t)ptr2;
                if(ptr2 != 0) {
                    goto loc_2E6E8;
                }
            }
            else {
            loc_2E6E8:
                size_t __size = strlen(&__ptr);
                fwrite(&__ptr, __size, 1, __s);
                size_t __size1 = strlen(__ptr1);
                fwrite(__ptr1, __size1, 1, gvar_482134);
                fwrite("\n", 1, 1, gvar_482134);
                fflush(gvar_482134);
            }
        }
        int v10 = (int)gvar_48212C;
        if(v10 == 0) {
            v10 = sub_536F4("bmminer_miner");
            gvar_48212C = (uint32_t)v10;
        }
        v5 = "\n";
        v6 = 60;
        v8 = 7;
        v7 = 117;
        ptr1 = __ptr1;
        result = sub_54CB0(v10, "logging.c", 9, "_applog", 7, 117, 60, "\n");
        int v11 = gvar_58E350;
        if((param0 != 3 ? v11 & SOCK_STREAM: 0) == 0) {
            return sub_2E92C((int)&__ptr, (int)__ptr1, param2, v11);
        }
    }
    else {
        syslog(param0 | 0x80, "\n");
        int v12 = (int)gvar_48212C;
        if(v12 == 0) {
            v12 = sub_536F4("bmminer_miner");
            gvar_48212C = (uint32_t)v12;
        }
        result = sub_54CB0(v12, "logging.c", 9, "_applog", 7, 71, 60, "\n");
    }
    return result;
}
