int sub_54CB0(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7) {
    int v0;
    char v1;
    int v2 = param6;
    if(param0 == 0) {
    loc_54D10:
        pthread_rwlock_rdlock(&g58DE1C);
        if(gvar_58DE3C == 0) {
            sub_5DF98(&g2, "src/zlog.c", 850, "never call zlog_init() or dzlog_init() before");
            return pthread_rwlock_unlock(&g58DE1C);
        }
        void* ptr0 = pthread_getspecific(gvar_58DE08);
        uint32_t* __pointer = (uint32_t*)ptr0;
        int v3 = (int)gvar_58DE18;
        if(ptr0 == 0) {
            uint32_t v4 = gvar_99EEC8;
            __pointer = sub_5D07C(v3, *(size_t*)(v4 + 1052), *(char**)(v4 + 1056), *(size_t*)(v4 + 9292));
            if(__pointer == 0) {
                sub_5DF98(&g2, "src/zlog.c", 854, "zlog_thread_new fail");
                return pthread_rwlock_unlock(&g58DE1C);
            }
            int v5 = pthread_setspecific(gvar_58DE08, __pointer);
            if(v5 != 0) {
                sub_5CFA8((char*)__pointer);
                v0 = v5;
                sub_5DF98(&g2, "src/zlog.c", 854, "pthread_setspecific fail, rd[%d]");
                return pthread_rwlock_unlock(&g58DE1C);
            }
            v3 = gvar_58DE18;
        }
        if(__pointer[0] != v3) {
            uint32_t v6 = gvar_99EEC8;
            int v7 = sub_5D290(__pointer, *(size_t*)(v6 + 1052), *(char**)(v6 + 1056));
            if(v7 == 0) {
                v7 = sub_5D3B0((int*)__pointer, *(size_t*)(gvar_99EEC8 + 9292));
                if(v7 == 0) {
                    __pointer[0] = gvar_58DE18;
                    goto loc_54DBC;
                }
            }
            v0 = v7;
            sub_5DF98(&g2, "src/zlog.c", 854, "zlog_thread_resize_msg_buf fail, rd[%d]");
            return pthread_rwlock_unlock(&g58DE1C);
        }
    loc_54DBC:
        int v8 = *(int*)(param0 + 0x404);
        int* ptr1 = (int*)__pointer[2];
        int v9 = v2;
        v0 = param2;
        sub_57540(ptr1, param0, v8, param1, param2, param3, param4, param5, v2, param7, &v1);
        int v10 = sub_55C7C((uint32_t*)param0, (int*)__pointer);
        if(v10 != 0) {
            v0 = param1;
            sub_5DF98(&g2, "src/zlog.c", 861, "zlog_output fail, srcfile[%s], srcline[%ld]");
            return pthread_rwlock_unlock(&g58DE1C);
        }
        int v11 = *(int*)(gvar_99EEC8 + 9276);
        if(v11 == 0) {
            return pthread_rwlock_unlock(&g58DE1C);
        }
        uint32_t v12 = gvar_58DE40 + SOCK_STREAM;
        ++gvar_58DE40;
        if(v11 >= v12) {
            return pthread_rwlock_unlock(&g58DE1C);
        }
        pthread_rwlock_unlock(&g58DE1C);
        param0 = sub_53314(&gFFFFFFFF);
        if(param0 != 0) {
            return sub_5DF98(&g2, "src/zlog.c", 880, "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail");
        }
    }
    else {
        int v13 = v2 + 7;
        if(v13 >= 7) {
            v13 = v2;
        }
        int v14 = v2 & 0x7;
        int v15 = (int)*(char*)((v13 >> 3) + param0 + 1032);
        if(v2 <= 0) {
            v14 = 0 - ((0 - v2) & 0x7);
        }
        if((int*)((int)(int*)(v15 >> (7 - v14)) & SOCK_STREAM) != 0) {
            goto loc_54D10;
        }
    }
    return param0;
}
