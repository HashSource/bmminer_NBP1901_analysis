char* sub_2EA54(int param0, char* param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char* __src = param1;
    int v6 = param0;
    int v7 = param2;
    size_t v8 = strlen((char*)&gvar_482258);
    size_t v9 = strlen(__src);
    if(v9 + v8 + SOCK_STREAM >= 0x800) {
        if(gvar_590404 == 0) {
            int __fd = fileno(stderr);
            int v10 = isatty(__fd);
            if(v10 == 0) {
                fputs((char*)&gvar_482258, stderr);
                fflush(stderr);
            }
            if(gvar_482130 != 0) {
                FILE* __s1 = (FILE*)gvar_482134;
                if(__s1 == 0) {
                    FILE* ptr0 = fopen64(&g482158, &gvar_482138);
                    __s1 = ptr0;
                    gvar_482134 = (uint32_t)ptr0;
                    if(ptr0 != 0) {
                        goto loc_2ECC0;
                    }
                }
                else {
                loc_2ECC0:
                    size_t __size = strlen((char*)&gvar_482258);
                    fwrite(&gvar_482258, __size, 1, __s1);
                    fflush(gvar_482134);
                }
            }
            int v11 = (int)gvar_482A58;
            if(v11 == 0) {
                v11 = sub_536F4("bmminer_miner");
                gvar_482A58 = (uint32_t)v11;
            }
            v5 = "\n";
            v4 = 10;
            v3 = &gvar_482258;
            v2 = 195;
            v1 = 60;
            sub_54CB0(v11, "logging.c", 9, "_applawlog", 10, 195, 60, "\n");
            if((v6 != 3 ? gvar_58E350 & SOCK_STREAM: 0) == 0) {
                sub_2E92C("\n", &gvar_482258, v7);
            }
        }
        else {
            syslog(v6 | 0x80, "\n");
            int v12 = (int)gvar_482A58;
            if(v12 == 0) {
                v12 = sub_536F4("bmminer_miner");
                gvar_482A58 = (uint32_t)v12;
            }
            v5 = "\n";
            v4 = 10;
            v3 = &gvar_482258;
            v2 = 167;
            v1 = 60;
            sub_54CB0(v12, "logging.c", 9, "_applawlog", 10, 167, 60, "\n");
        }
        gvar_482258 = 0;
    }
    char* result = strcat((char*)&gvar_482258, __src);
    param2 = &gvar_482258;
    do {
        v0 = (uint32_t)*(char*)param2;
        ++param2;
        if((v0 != 13 ? v0 == 10: SOCK_STREAM) != 0) {
            if(gvar_590404 == 0) {
                int __fd1 = fileno(stderr);
                int v13 = isatty(__fd1);
                if(v13 == 0) {
                    fputs((char*)&gvar_482258, stderr);
                    fflush(stderr);
                }
                if(gvar_482130 != 0) {
                    FILE* __s = (FILE*)gvar_482134;
                    if(__s == 0) {
                        FILE* ptr1 = fopen64(&g482158, &gvar_482138);
                        __s = ptr1;
                        gvar_482134 = (uint32_t)ptr1;
                        if(ptr1 != 0) {
                            goto loc_2EBEC;
                        }
                    }
                    else {
                    loc_2EBEC:
                        size_t __size1 = strlen((char*)&gvar_482258);
                        fwrite(&gvar_482258, __size1, 1, __s);
                        fflush(gvar_482134);
                    }
                }
                int v14 = (int)gvar_482A58;
                if(v14 == 0) {
                    v14 = sub_536F4("bmminer_miner");
                    gvar_482A58 = (uint32_t)v14;
                }
                result = sub_54CB0(v14, "logging.c", 9, "_applawlog", 10, 233, 60, "\n");
                if((v6 != 3 ? gvar_58E350 & SOCK_STREAM: 0) == 0) {
                    result = sub_2E92C("\n", &gvar_482258, v7);
                }
            }
            else {
                syslog(v6 | 0x80, "\n");
                int v15 = (int)gvar_482A58;
                if(v15 == 0) {
                    v15 = sub_536F4("bmminer_miner");
                    gvar_482A58 = (uint32_t)v15;
                }
                result = sub_54CB0(v15, "logging.c", 9, "_applawlog", 10, 205, 60, "\n");
            }
            gvar_482258 = 0;
            return result;
        }
    }
    while(v0 != 0);
    return result;
}
