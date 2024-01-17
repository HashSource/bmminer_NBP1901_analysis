void sub_3D8F4(uint32_t* param0) {
    int v0;
    char* ptr0 = *param0;
    int* ptr1 = *(param0 + SOCK_STREAM);
    char v1 = ptr1 == 4;
    char v2 = (uint32_t)ptr1 >= 4;
    if(ptr1 != 4) {
        v1 = ptr1 == 2;
        v2 = (uint32_t)(int*)((char*)ptr1 - SOCK_STREAM) >= SOCK_STREAM;
    }
    if(v2 == 0 || v1 != 0) {
        if(*(param0 + 6) != 0) {
            if(*ptr0 == 45) {
                char* __s = ptr0 + SOCK_STREAM;
                size_t v3 = strcspn(__s, &g68A48);
                size_t v4 = v3;
                while(SOCK_STREAM) {
                    if(__s[0] == 45) {
                        if(v3 == SOCK_STREAM) {
                            /*NO_RETURN*/ errx(SOCK_STREAM, "Option %s: invalid long option \'--\'", *param0);
                        }
                        v0 = *(int*)(param0 + SOCK_STREAM);
                        ++gvar_99EE14;
                        goto loc_3D990;
                    }
                    if(v3 == SOCK_STREAM) {
                        v0 = *(int*)(param0 + SOCK_STREAM);
                        uint32_t v5 = (uint32_t)((v0 - 2) & 0xfffffffd);
                        uint32_t v6 = gvar_99EE18 + SOCK_STREAM;
                        if(((v0 - 2) & 0xfffffffd) == 0) {
                            v5 = gvar_99EE10;
                        }
                        gvar_99EE18 = v6;
                        if(((v0 - 2) & 0xfffffffd) == 0) {
                            gvar_99EE10 = v5 + SOCK_STREAM;
                        }
                    loc_3D990:
                        if(v0 == SOCK_STREAM) {
                            int v7 = (uint32_t)__s[v3];
                            if((v7 != 61 ? v7 == 32: SOCK_STREAM) != 0) {
                                /*NO_RETURN*/ errx(SOCK_STREAM, "Option %s: does not take arguments \'%s\'", *param0, (int*)((char*)(v3 + __s) + SOCK_STREAM));
                            }
                        }
                        __s = sub_3D7F4((int)__s, &v4);
                        if(__s == 0) {
                            return;
                        }
                        v3 = v4;
                    }
                    else {
                        goto loc_3D9F4;
                    }
                }
                return;
            loc_3D9F4:
                int* ptr2 = *param0;
                char* ptr3 = __s - SOCK_STREAM;
                /*NO_RETURN*/ errx(SOCK_STREAM, "Option %s: invalid short option \'%.*s\'", ptr2, v3 + SOCK_STREAM);
            }
            /*NO_RETURN*/ errx(SOCK_STREAM, "Option %s: does not begin with \'-\'", ptr0);
        }
        /*NO_RETURN*/ errx(SOCK_STREAM, "Option %s: description cannot be NULL", ptr0);
    }
    /*NO_RETURN*/ errx(SOCK_STREAM, "Option %s: unknown entry type %u");
}
