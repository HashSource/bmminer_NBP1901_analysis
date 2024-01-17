int sub_596B0(int* param0, uint32_t* param1) {
    int* ptr0;
    int v0;
    char* ptr1;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = sub_57A1C(*(uint32_t**)(param0 + 1566), param1);
    if(v5 == 0) {
        __xstat64();
        if(param0 == 0) {
            int __fd = *(int*)&g1438;
            if((*(int*)&g144C == v3 && *(int*)&g1448 == v1) != 0 && (*(int*)&g1444 == v4 && *(int*)&g1440 == v2) != 0) {
                goto loc_59750;
            }
            else {
                close(__fd);
                __fd = open64(&g1030, *(int*)&g102C | 0x441);
                *(int*)&g1438 = __fd;
            }
            if(__fd >= 0) {
                *(int*)&g1440 = v2;
                *(int*)&g1444 = v4;
                *(int*)&g1448 = v1;
                *(int*)&g144C = v3;
            loc_59750:
                uint32_t v6 = param1[7];
                void* __buf = *(void**)v6;
                ssize_t v7 = write(__fd, __buf, (size_t)(*(int*)(v6 + 4) - (int)__buf));
                if(v7 >= 0) {
                    int v8 = *(int*)&g1868;
                    if(v8 != 0) {
                        int v9 = *(int*)&g186C + SOCK_STREAM;
                        if(v9 < v8) {
                            *(int*)&g186C = v9;
                        }
                        else {
                            int __fd1 = *(int*)&g1438;
                            *(int*)&g186C = 0;
                            int v10 = fsync(__fd1);
                            if(v10 != 0) {
                                int* ptr2 = __errno_location();
                                int v11 = ptr2[0];
                                ptr1 = *(char**)&g1438;
                                v0 = v11;
                                sub_5DF98(&g2, "src/rule.c", 133, "fsync[%d] fail, errno[%d]");
                                return 0;
                            }
                        }
                    }
                    return 0;
                }
                int* ptr3 = __errno_location();
                ptr1 = ptr3[0];
                sub_5DF98(&g2, "src/rule.c", 125, "write fail, errno[%d]");
                return -1;
            }
            ptr0 = __errno_location();
            int v12 = ptr0[0];
            ptr1 = param0 + 1036;
            v0 = v12;
            sub_5DF98(&g2, "src/rule.c", 107, "open file[%s] fail, errno[%d]");
            return -1;
        }
        int* ptr4 = __errno_location();
        char* ptr5 = (char*)ptr4[0];
        ptr0 = ptr4;
        if(ptr5 == 2) {
            close(*(param0 + 1294));
            int v13 = open64((char*)(param0 + 1036), *(param0 + 1035) | 0x441);
            *(param0 + 1294) = v13;
            if(v13 < 0) {
                int v12 = ptr0[0];
                ptr1 = param0 + 1036;
                v0 = v12;
                sub_5DF98(&g2, "src/rule.c", 107, "open file[%s] fail, errno[%d]");
                return -1;
            }
            __xstat64();
            sub_5DF98(&g2, "src/rule.c", 114, "stat fail on new file[%s], errno[%d]");
            return -1;
        }
        v0 = ptr5;
        ptr1 = param0 + 1036;
        sub_5DF98(&g2, "src/rule.c", 91, "stat fail on [%s], errno[%d]");
        return -1;
    }
    sub_5DF98(&g2, "src/rule.c", 84, "zlog_format_gen_msg fail");
    return -1;
}
