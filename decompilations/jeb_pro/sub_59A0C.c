int sub_59A0C(uint32_t* param0, uint32_t* param1) {
    int v0;
    int v1;
    int v2;
    uint32_t* ptr0;
    int v3 = sub_57A1C(param0[1566], param1);
    if(v3 == 0) {
        int __fd = open64((char*)(param0 + 1036), (int)(param0[1035] | 0x441));
        if(__fd >= 0) {
            uint8_t v4 = param1[7];
            void* __buf = *(void**)v4;
            size_t __n = (size_t)(*(int*)(v4 + 4) - (int)__buf);
            ssize_t v5 = write(__fd, __buf, __n);
            if(v5 >= 0) {
                uint32_t v6 = param0[1562];
                if(v6 != 0) {
                    uint32_t v7 = param0[1563] + SOCK_STREAM;
                    if(v7 < v6) {
                        param0[1563] = v7;
                    }
                    else {
                        param0[1563] = 0;
                        int v8 = fsync(__fd);
                        if(v8 != 0) {
                            int* ptr1 = __errno_location();
                            int v9 = ptr1[0];
                            v1 = __fd;
                            v0 = v9;
                            sub_5DF98(&g2, "src/rule.c", 0xbb, "fsync[%d] fail, errno[%d]");
                        }
                    }
                }
                int v10 = close(__fd);
                if(v10 >= 0) {
                    if(param0[1300] >= __n) {
                        __xstat64();
                        if(param0 == 0) {
                            uint32_t v11 = *(uint32_t*)&g1450;
                            if(((uint64_t)(__n + v2) | ((uint64_t)(int*)((uint32_t)__carry__(__n, v2) + (int)ptr0) << 32)) >= ((uint64_t)v11 | ((uint64_t)(v11 >> 31) << 32))) {
                                pthread_mutex_t* __mutex = *(pthread_mutex_t**)(gvar_99EEC8 + 5160);
                                int v12 = sub_59954(NULL, (uint8_t*)param1);
                                unsigned int v13 = *(unsigned int*)&g1454;
                                v1 = *(int*)&g1450;
                                v0 = v13;
                                pthread_mutex_t* ptr2 = sub_58958(__mutex, 4144, (int)__n, (char*)v12, v1, v13);
                                if(ptr2 != 0) {
                                    sub_5DF98(&g2, "src/rule.c", 214, "zlog_rotater_rotate fail");
                                    return -1;
                                }
                            }
                            return 0;
                        }
                        int* ptr3 = __errno_location();
                        int v14 = ptr3[0];
                        v1 = param0 + 1036;
                        v0 = v14;
                        sub_5DF98(&g1, "src/rule.c", 202, "stat [%s] fail, errno[%d], maybe in rotating");
                        return 0;
                    }
                    sub_5DF98(NULL, "src/rule.c", 197, "one msg\'s len[%ld] > archive_max_size[%ld], no rotate");
                    return 0;
                }
                int* ptr4 = __errno_location();
                v1 = ptr4[0];
                sub_5DF98(&g2, "src/rule.c", 191, "close fail, maybe cause by write, errno[%d]");
                return -1;
            }
            int* ptr5 = __errno_location();
            v1 = ptr5[0];
            sub_5DF98(&g2, "src/rule.c", 180, "write fail, errno[%d]");
            close(__fd);
            return -1;
        }
        int* ptr6 = __errno_location();
        int v15 = ptr6[0];
        v1 = param0 + 1036;
        v0 = v15;
        sub_5DF98(&g2, "src/rule.c", 174, "open file[%s] fail, errno[%d]");
        return -1;
    }
    sub_5DF98(&g2, "src/rule.c", 167, "zlog_format_gen_msg fail");
    return -1;
}
