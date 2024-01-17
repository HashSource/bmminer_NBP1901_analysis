int sub_4587C(int* param0, int param1) {
    int* ptr0 = param0;
    pthread_mutex_lock(&g505134);
    if(param1 >>> 2 != 0) {
        int* ptr1 = (int*)((param1 >>> 2) * 4 + (int)ptr0);
        int v0 = 16;
        do {
            int v1 = *ptr0;
            ++ptr0;
            sub_40390(v0, v1);
            v0 = 17;
        }
        while(ptr0 != ptr1);
    }
    return pthread_mutex_unlock(&g505134);
}
