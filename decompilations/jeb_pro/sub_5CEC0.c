char* sub_5CEC0(int* param0, char* param1) {
    if(param0 != 0) {
        int v0 = *(param0 + 7);
        int v1 = *(param0 + 6);
        int v2 = *(param0 + 5);
        int v3 = *(param0 + 4);
        int v4 = *(param0 + 3);
        int v5 = *(param0 + 2);
        int v6 = *(param0 + SOCK_STREAM);
        int* ptr0 = param0;
        int v7 = v6;
        sub_5DF98(param1, "src/thread.c", 29, "--thread[%p][%p][%p][%p,%p,%p,%p,%p]--");
        sub_57ED4(*(param0 + SOCK_STREAM), param1);
        sub_5729C(*(int**)(param0 + 2), param1);
        sub_5E6A4(*(int**)(param0 + 3), param1);
        sub_5E6A4(*(int**)(param0 + 4), param1);
        sub_5E6A4(*(int**)(param0 + 5), param1);
        sub_5E6A4(*(int**)(param0 + 6), param1);
        return sub_5E6A4(*(int**)(param0 + 7), param1);
    }
    return sub_5DF98(&g2, "src/thread.c", 20, "a_thread is null or 0");
}
