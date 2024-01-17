char* sub_5DF98(char* param0, int param1, int param2, char* __format) {
    int v0;
    int v1;
    FILE* __stream;
    char* __filename1;
    char __s;
    char __arg;
    if(gvar_58DE44 == 0) {
        gvar_58DE44 = 1;
        char* ptr0 = getenv("ZLOG_PROFILE_DEBUG");
        gvar_58DE48 = (uint32_t)ptr0;
        char* ptr1 = getenv("ZLOG_PROFILE_ERROR");
        gvar_58DE4C = (uint32_t)ptr1;
        if(param0 != SOCK_STREAM) {
        loc_5DFD0:
            if(param0 == 0) {
                char* __filename = (char*)gvar_58DE48;
                if(__filename == 0) {
                    return NULL;
                }
                __stream = fopen64(__filename, "a");
                if(__stream == 0) {
                    return &gFFFFFFFF;
                }
                sub_5DF58(&__s);
                __pid_t v2 = getpid();
                v1 = param1;
                v0 = param2;
                fprintf(__stream, "%s DEBUG (%d:%s:%ld) ", &__s, v2, param1, param2);
                vfprintf(__stream, __format, &__arg);
                fputc(10, __stream);
                fclose(__stream);
                return 0;
            }
            else if(param0 != 2) {
                __stream = NULL;
                vfprintf(__stream, __format, &__arg);
                fputc(10, __stream);
                fclose(__stream);
                return 0;
            }
            __filename1 = gvar_58DE4C;
            if(__filename1 != 0) {
                __stream = fopen64(__filename1, "a");
                if(__stream == 0) {
                    return &gFFFFFFFF;
                }
                sub_5DF58(&__s);
                __pid_t v3 = getpid();
                v1 = param1;
                v0 = param2;
                fprintf(__stream, "%s ERROR (%d:%s:%ld) ", &__s, v3, param1, param2);
                vfprintf(__stream, __format, &__arg);
                fputc(10, __stream);
                fclose(__stream);
            }
            return 0;
        }
    loc_5E0A0:
        __filename1 = gvar_58DE4C;
        if(__filename1 != 0) {
            __stream = fopen64(__filename1, "a");
            if(__stream == 0) {
                return &gFFFFFFFF;
            }
            sub_5DF58(&__s);
            __pid_t v4 = getpid();
            v1 = param1;
            v0 = param2;
            fprintf(__stream, "%s WARN  (%d:%s:%ld) ", &__s, v4, param1, param2);
            vfprintf(__stream, __format, &__arg);
            fputc(10, __stream);
            fclose(__stream);
            return 0;
        }
    }
    else if(param0 == SOCK_STREAM) {
        goto loc_5E0A0;
    }
    else {
        goto loc_5DFD0;
    }
    return 0;
}
