int sub_283E4(int param0, int param1, int param2, int param3) {
    int __info;
    char __ptr1;
    char* ptr0 = NULL;
    int* ptr1 = (int*)&gvar_58E354;
    prctl(PR_SET_NAME, 407104);
    if(*(char*)(gvar_58E354 + 364) == 0) {
        int* ptr2 = (int*)&gvar_5903F8;
        char* ptr3 = (char*)&gvar_590404;
        char* ptr4 = (char*)&gvar_482A5D;
        do {
            pthread_mutex_lock(&g80A74);
            pthread_cond_wait(&g80A90, &g80A74);
            int v0 = sysinfo(&__info);
            if(v0 == 0) {
                *ptr2 = __info;
            }
            else {
                if(*ptr3 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 5) {
                    int* ptr5 = __errno_location();
                    int __errnum = ptr5[0];
                    ptr0 = strerror(__errnum);
                    snprintf(&__ptr1, 0x800, "Failed to get sysinfo, errno:%u, reason:%s\n", __errnum, ptr0);
                    sub_2E584(6, &__ptr1, 0);
                }
                time_t v1 = time(NULL);
                *ptr2 = v1;
            }
            size_t v2 = sub_4E1B0();
            sub_1F340((int)v2);
            int v3 = 0;
            sub_1F3E8((int)v2);
            int v4 = 0;
            sub_1F490((int)v2);
            sub_1F574((int)v2);
            sub_1F6AC((int)v2);
            sub_1F7C4((int)v2);
            sub_1F8B0((int)v2);
            sub_1F984((int)v2);
            sub_1FA2C((int)v2);
            size_t v5 = sub_4E540();
            do {
                int v6 = sub_1E29C(v3);
                if(v6 != 0) {
                    size_t v7 = sub_4E1B0();
                    if(*ptr4 != 0 && (*ptr3 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                        ptr0 = v3;
                        snprintf(&__ptr1, 0x800, "%s: now i = %d", "bitmain_update_api_stats", ptr0);
                        sub_2E584(7, &__ptr1, 0);
                    }
                    size_t v8 = sub_4E990(v3, v4);
                    sub_4EFD4((int*)v7, "index", (void*)v8);
                    sub_1FB14((int)v7, (uint32_t)v3);
                    sub_1FBD8((int)v7, v3);
                    sub_1FCD0((int)v7, v3);
                    sub_1FDD8((int)v7, v3);
                    sub_1FE9C((int*)v7, v3);
                    sub_1FF90((int)v7, v3);
                    sub_20234((int)v7, v3);
                    sub_200D0((int)v7, v3);
                    sub_20528((int)v7, v3);
                    sub_20398((int)v7, v3, param2, param3);
                    sub_205EC((int)v7, v3);
                    sub_206B4((int)v7, v3);
                    sub_20788((int*)v7, v3);
                    sub_20880((int*)v7, v3);
                    sub_208CC((int*)v7, v3);
                    sub_20918((int*)v7, v3);
                    sub_20964((int*)v7, v3);
                    sub_209BC((int*)v7, v3);
                    sub_4F494((int*)v5, (int)v7);
                }
                int v9 = v3;
                ++v3;
                v4 += (uint32_t)((uint32_t)v9 >= -1);
            }
            while((v4 == 0 && v3 == 4) == 0);
            sub_4EFD4((int*)v2, "chain", (void*)v5);
            sub_20AD4((int)v2);
            sub_20B7C((int)v2);
            sub_20C28((int)v2);
            sub_20A50((int*)v2);
            int __buf = sub_4B1A8((int*)v2, 0);
            if(__buf != 0) {
                if(*ptr4 != 0 && (*ptr3 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                    size_t v10 = strlen((char*)__buf);
                    ptr0 = v10 + SOCK_STREAM;
                    int v11 = __buf;
                    snprintf(&__ptr1, 0x800, "%s(%d) : %s", "bitmain_update_api_stats", ptr0, v11);
                    sub_2E584(7, &__ptr1, 0);
                }
                size_t v12 = strlen((char*)__buf);
                sub_28208((void*)__buf, v12 + SOCK_STREAM);
                free((void*)__buf);
            }
            if(v2 != 0 && *(int*)(v2 + 4) != -1) {
                DMB();
                int v13 = *(int*)(v2 + 4) - SOCK_STREAM;
                --*(int*)(v2 + 4);
                if(v13 == 0) {
                    sub_4EB6C((void*)v2);
                }
            }
            pthread_mutex_unlock(&g80A74);
        }
        while(*(char*)(*ptr1 + 364) == 0);
    }
    return 0;
}
