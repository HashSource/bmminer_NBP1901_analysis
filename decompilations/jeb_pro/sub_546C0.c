int sub_546C0(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7) {
    int v0;
    int v1 = param5;
    uint32_t v2 = gvar_58DE10;
    int v3 = param4;
    int v4 = v1 + 7;
    if(v4 >= 7) {
        v4 = v1;
    }
    int v5 = v1 & 0x7;
    int v6 = param6;
    void* ptr0 = (void*)*(char*)((v4 >> 3) + v2 + 1032);
    if(v1 <= 0) {
        v5 = 0 - ((0 - v1) & 0x7);
    }
    int v7 = param7;
    if((int*)((int)(int*)((int)ptr0 >> (7 - v5)) & SOCK_STREAM) != 0) {
        pthread_rwlock_rdlock(&g58DE1C);
        if(gvar_58DE3C == 0) {
            sub_5DF98(&g2, "src/zlog.c", 742, "never call zlog_init() or dzlog_init() before");
            return pthread_rwlock_unlock(&g58DE1C);
        }
        else if(gvar_58DE10 == 0) {
            sub_5DF98(&g2, "src/zlog.c", 749, "zlog_default_category is null,dzlog_init() or dzlog_set_cateogry() is not called above");
            return pthread_rwlock_unlock(&g58DE1C);
        }
        void* ptr1 = pthread_getspecific(gvar_58DE08);
        uint32_t* __pointer = (uint32_t*)ptr1;
        int v8 = (int)gvar_58DE18;
        if(ptr1 == 0) {
            uint32_t v9 = gvar_99EEC8;
            __pointer = sub_5D07C(v8, *(size_t*)(v9 + 1052), *(char**)(v9 + 1056), *(size_t*)(v9 + 9292));
            if(__pointer == 0) {
                sub_5DF98(&g2, "src/zlog.c", 753, "zlog_thread_new fail");
                return pthread_rwlock_unlock(&g58DE1C);
            }
            int v10 = pthread_setspecific(gvar_58DE08, __pointer);
            if(v10 != 0) {
                sub_5CFA8((char*)__pointer);
                v0 = v10;
                sub_5DF98(&g2, "src/zlog.c", 753, "pthread_setspecific fail, rd[%d]");
                return pthread_rwlock_unlock(&g58DE1C);
            }
            v8 = gvar_58DE18;
        }
        if(__pointer[0] != v8) {
            uint32_t v11 = gvar_99EEC8;
            int* ptr2 = (int*)&gvar_99EEC8;
            int v12 = sub_5D290(__pointer, *(size_t*)(v11 + 1052), *(char**)(v11 + 1056));
            if(v12 == 0) {
                v12 = sub_5D3B0((int*)__pointer, *(size_t*)(*ptr2 + 9292));
                if(v12 == 0) {
                    __pointer[0] = gvar_58DE18;
                    goto loc_547C0;
                }
            }
            v0 = v12;
            sub_5DF98(&g2, "src/zlog.c", 753, "zlog_thread_resize_msg_buf fail, rd[%d]");
            return pthread_rwlock_unlock(&g58DE1C);
        }
    loc_547C0:
        int v13 = (int)gvar_58DE10;
        int* ptr3 = (int*)__pointer[2];
        int v14 = *(int*)(v13 + 0x404);
        int v15 = param2;
        int v16 = v7;
        int v17 = v6;
        v0 = param1;
        int v18 = v1;
        int v19 = v3;
        int v20 = param3;
        sub_57540(ptr3, v13, v14, param0, param1, param2, param3, v3, v1, v6, v7);
        int v21 = sub_55C7C(gvar_58DE10, (int*)__pointer);
        if(v21 != 0) {
            v15 = v3;
            v0 = param0;
            sub_5DF98(&g2, "src/zlog.c", 761, "zlog_output fail, srcfile[%s], srcline[%ld]");
            return pthread_rwlock_unlock(&g58DE1C);
        }
        int v22 = *(int*)(gvar_99EEC8 + 9276);
        if(v22 == 0) {
            return pthread_rwlock_unlock(&g58DE1C);
        }
        uint32_t v23 = gvar_58DE40 + SOCK_STREAM;
        ++gvar_58DE40;
        if(v22 >= v23) {
            return pthread_rwlock_unlock(&g58DE1C);
        }
        pthread_rwlock_unlock(&g58DE1C);
        param0 = sub_53314(&gFFFFFFFF);
        if(param0 != 0) {
            return sub_5DF98(&g2, "src/zlog.c", 778, "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail");
        }
    }
    return param0;
}
