int sub_54F58(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    int result;
    int v0;
    char v1;
    int v2 = param5;
    pthread_rwlock_rdlock(&g58DE1C);
    if(gvar_58DE3C == 0) {
        sub_5DF98(&g2, "src/zlog.c", 896, "never call zlog_init() or dzlog_init() before");
    loc_54FD4:
        result = pthread_rwlock_unlock(&g58DE1C);
    }
    else {
        uint32_t v3 = gvar_58DE10;
        if(v3 == 0) {
            sub_5DF98(&g2, "src/zlog.c", 903, "zlog_default_category is null,dzlog_init() or dzlog_set_cateogry() is not called above");
            goto loc_54FD4;
        }
        else {
            int v4 = v2 + 7;
            if(v4 >= 7) {
                v4 = v2;
            }
            int v5 = v2 & 0x7;
            int v6 = (uint32_t)*(char*)((v4 >> 3) + v3 + 1032);
            if(v2 <= 0) {
                v5 = 0 - ((0 - v2) & 0x7);
            }
            if(((v6 >> (7 - v5)) & SOCK_STREAM) == 0) {
                goto loc_54FD4;
            }
            else {
                void* ptr0 = pthread_getspecific(gvar_58DE08);
                uint32_t* __pointer = (uint32_t*)ptr0;
                int v7 = (int)gvar_58DE18;
                if(ptr0 == 0) {
                    uint32_t v8 = gvar_99EEC8;
                    __pointer = sub_5D07C(v7, *(size_t*)(v8 + 1052), *(char**)(v8 + 1056), *(size_t*)(v8 + 9292));
                    if(__pointer == 0) {
                        sub_5DF98(&g2, "src/zlog.c", 909, "zlog_thread_new fail");
                        goto loc_54FD4;
                    }
                    else {
                        int v9 = pthread_setspecific(gvar_58DE08, __pointer);
                        if(v9 == 0) {
                            v7 = gvar_58DE18;
                        }
                        else {
                            sub_5CFA8((char*)__pointer);
                            v0 = v9;
                            sub_5DF98(&g2, "src/zlog.c", 909, "pthread_setspecific fail, rd[%d]");
                            goto loc_54FD4;
                        }
                    }
                }
                if(__pointer[0] != v7) {
                    uint32_t v10 = gvar_99EEC8;
                    int v11 = sub_5D290(__pointer, *(size_t*)(v10 + 1052), *(char**)(v10 + 1056));
                    if(v11 == 0) {
                        v11 = sub_5D3B0((int*)__pointer, *(size_t*)(gvar_99EEC8 + 9292));
                        if(v11 == 0) {
                            __pointer[0] = gvar_58DE18;
                            goto loc_55048;
                        }
                    }
                    v0 = v11;
                    sub_5DF98(&g2, "src/zlog.c", 909, "zlog_thread_resize_msg_buf fail, rd[%d]");
                    goto loc_54FD4;
                }
            loc_55048:
                int v12 = (int)gvar_58DE10;
                int v13 = *(int*)(v12 + 0x404);
                int* ptr1 = (int*)__pointer[2];
                v0 = param1;
                int v14 = param3;
                int v15 = v2;
                sub_57540(ptr1, v12, v13, param0, param1, param2, param3, param4, v2, param6, &v1);
                int v16 = sub_55C7C(gvar_58DE10, (int*)__pointer);
                if(v16 == 0) {
                    int v17 = *(int*)(gvar_99EEC8 + 9276);
                    if(v17 == 0) {
                        goto loc_54FD4;
                    }
                    uint32_t v18 = gvar_58DE40 + SOCK_STREAM;
                    ++gvar_58DE40;
                    if(v17 >= v18) {
                        goto loc_54FD4;
                    }
                    pthread_rwlock_unlock(&g58DE1C);
                    result = sub_53314(&gFFFFFFFF);
                }
                else {
                    v0 = param0;
                    sub_5DF98(&g2, "src/zlog.c", 918, "zlog_output fail, srcfile[%s], srcline[%ld]");
                    goto loc_54FD4;
                }
            }
        }
        if(result != 0) {
            return sub_5DF98(&g2, "src/zlog.c", 937, "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail");
        }
    }
    return result;
}
