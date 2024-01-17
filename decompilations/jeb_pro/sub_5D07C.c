void* sub_5D07C(int param0, size_t __size, char* param2, size_t __nmemb) {
    void* __ptr2 = calloc(1, 32);
    if(__ptr2 != 0) {
        *(int*)__ptr2 = param0;
        void* ptr0 = sub_58008();
        *(void**)((int)__ptr2 + 4) = ptr0;
        if(ptr0 == 0) {
            sub_5DF98(&g2, "src/thread.c", 78, "zlog_mdc_new fail");
        }
        else {
            void* ptr1 = sub_573D8(__nmemb);
            *(void**)((int)__ptr2 + 8) = ptr1;
            if(ptr1 == 0) {
                sub_5DF98(&g2, "src/thread.c", 84, "zlog_event_new fail");
            }
            else {
                void* ptr2 = sub_5E758(1025, &g401, NULL);
                *(void**)((int)__ptr2 + 12) = ptr2;
                if(ptr2 == 0) {
                    sub_5DF98(&g2, "src/thread.c", 90, "zlog_buf_new fail");
                }
                else {
                    void* ptr3 = sub_5E758(1025, &g401, NULL);
                    *(void**)((int)__ptr2 + 16) = ptr3;
                    if(ptr3 == 0) {
                        sub_5DF98(&g2, "src/thread.c", 96, "zlog_buf_new fail");
                    }
                    else {
                        void* ptr4 = sub_5E758(1025, &g401, NULL);
                        *(void**)((int)__ptr2 + 20) = ptr4;
                        if(ptr4 == 0) {
                            sub_5DF98(&g2, "src/thread.c", 102, "zlog_buf_new fail");
                        }
                        else {
                            void* ptr5 = sub_5E758(__size, param2, "\n");
                            *(void**)((int)__ptr2 + 24) = ptr5;
                            if(ptr5 == 0) {
                                sub_5DF98(&g2, "src/thread.c", 108, "zlog_buf_new fail");
                            }
                            else {
                                void* ptr6 = sub_5E758(__size, param2, "\n");
                                *(void**)((int)__ptr2 + 28) = ptr6;
                                if(ptr6 != 0) {
                                    return __ptr2;
                                }
                                sub_5DF98(&g2, "src/thread.c", 114, "zlog_buf_new fail");
                            }
                        }
                    }
                }
            }
        }
        sub_5CFA8((char*)__ptr2);
        return NULL;
    }
    int* ptr7 = __errno_location();
    int v0 = ptr7[0];
    sub_5DF98(&g2, "src/thread.c", 70, "calloc fail, errno[%d]");
    return 0;
}
