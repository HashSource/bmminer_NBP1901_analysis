int sub_5A30C(uint32_t* param0, uint32_t* param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    uint32_t* ptr0;
    uint32_t v4 = param0[1293];
    uint32_t v5 = param1[4];
    int v6 = *(int*)(v4 + 4);
    char* ptr1 = *(char**)v5;
    if(v6 > 0) {
        v2 = 0;
    }
    *(uint32_t*)(v5 + 4) = ptr1;
    if(v6 > 0) {
        do {
            int* ptr2 = *(uint32_t*)(v2 * 4 + *(int*)v4);
            ++v2;
            int v7 = *(ptr2 + 2315)((int)ptr2, (int)param1, (int)v5);
            if(v7 != 0) {
                sub_5DF98(&g2, "src/rule.c", 0x11d, "zlog_spec_gen_path fail");
                return -1;
            }
            v4 = param0[1293];
            v5 = *(uint32_t*)(v4 + 4);
        }
        while((int)v5 > v2);
        ptr1 = *(uint32_t*)(param1[4] + 4);
    }
    *ptr1 = 0;
    int v8 = sub_57A1C(param0[1566], param1);
    if(v8 == 0) {
        char* __file = *(char**)param1[4];
        int __fd = open64(__file, (int)(param0[1035] | 0x441));
        if(__fd >= 0) {
            uint32_t v9 = param1[7];
            void* __buf = *(void**)v9;
            size_t __n = (size_t)(*(int*)(v9 + 4) - (int)__buf);
            ssize_t v10 = write(__fd, __buf, __n);
            if(v10 >= 0) {
                uint32_t v11 = param0[1562];
                if(v11 != 0) {
                    uint32_t v12 = param0[1563] + SOCK_STREAM;
                    if(v12 < v11) {
                        param0[1563] = v12;
                    }
                    else {
                        param0[1563] = 0;
                        int v13 = fsync(__fd);
                        if(v13 != 0) {
                            int* ptr3 = __errno_location();
                            int v14 = ptr3[0];
                            v1 = __fd;
                            v0 = v14;
                            sub_5DF98(&g2, "src/rule.c", 308, "fsync[%d] fail, errno[%d]");
                        }
                    }
                }
                int v15 = close(__fd);
                if(v15 >= 0) {
                    if(param0[1300] >= __n) {
                        __xstat64();
                        if(param0 == 0) {
                            uint32_t v16 = *(uint32_t*)&g1450;
                            if(((uint64_t)(__n + v3) | ((uint64_t)(int*)((uint32_t)__carry__(__n, v3) + (int)ptr0) << 32)) >= ((uint64_t)v16 | ((uint64_t)(v16 >> 31) << 32))) {
                                pthread_mutex_t* __mutex = *(pthread_mutex_t**)(gvar_99EEC8 + 5160);
                                int v17 = sub_59954(NULL, (uint8_t*)param1);
                                unsigned int v18 = *(unsigned int*)&g1454;
                                v1 = *(int*)&g1450;
                                v0 = v18;
                                pthread_mutex_t* ptr4 = sub_58958(__mutex, (unsigned int)__file, (int)__n, (char*)v17, v1, v18);
                                if(ptr4 != 0) {
                                    sub_5DF98(&g2, "src/rule.c", 335, "zlog_rotater_rotate fail");
                                    return -1;
                                }
                            }
                            return 0;
                        }
                        int* ptr5 = __errno_location();
                        int v19 = ptr5[0];
                        v1 = __file;
                        v0 = v19;
                        sub_5DF98(&g1, "src/rule.c", 323, "stat [%s] fail, errno[%d], maybe in rotating");
                        return 0;
                    }
                    sub_5DF98(NULL, "src/rule.c", 318, "one msg\'s len[%ld] > archive_max_size[%ld], no rotate");
                    return 0;
                }
                int* ptr6 = __errno_location();
                v1 = ptr6[0];
                sub_5DF98(&g2, "src/rule.c", 312, "write fail, maybe cause by write, errno[%d]");
                return -1;
            }
            int* ptr7 = __errno_location();
            v1 = ptr7[0];
            sub_5DF98(&g2, "src/rule.c", 301, "write fail, errno[%d]");
            close(__fd);
            return -1;
        }
        int* ptr8 = __errno_location();
        uint32_t v20 = param1[4];
        v0 = ptr8[0];
        v1 = *(int*)v20;
        sub_5DF98(&g2, "src/rule.c", 295, "open file[%s] fail, errno[%d]");
        return -1;
    }
    sub_5DF98(&g2, "src/rule.c", 288, "zlog_format_output fail");
    return -1;
}
