int sub_4ED60(int* param0, int param1) {
    int v0;
    if(param0 != 0 && *param0 == SOCK_STREAM) {
        int v1 = *(param0 + 3);
        if(param1 < v1) {
            void* ptr0 = *(void**)(param1 * 4 + *(param0 + 4));
            if(ptr0 == 0 || *(int*)((int)ptr0 + 4) == -1) {
                v0 = v1 - SOCK_STREAM;
                if(param1 < v0) {
                    int v2 = *(param0 + 4);
                    memmove((void*)(param1 * 4 + v2), (void*)(param1 * 4 + v2 + 4), (size_t)((~param1 + v1) * 4));
                    v0 = *(param0 + 3) - SOCK_STREAM;
                    *(param0 + 3) = v0;
                    return 0;
                }
            }
            else {
                DMB();
                int v3 = *(int*)((int)ptr0 + 4) - SOCK_STREAM;
                --*(int*)((int)ptr0 + 4);
                if(v3 == 0) {
                    sub_4EB6C(ptr0);
                }
                v1 = *(param0 + 3);
                v0 = v1 - SOCK_STREAM;
                if(param1 < v0) {
                    int v2 = *(param0 + 4);
                    memmove((void*)(param1 * 4 + v2), (void*)(param1 * 4 + v2 + 4), (size_t)((~param1 + v1) * 4));
                    v0 = *(param0 + 3) - SOCK_STREAM;
                }
            }
            *(param0 + 3) = v0;
            return 0;
        }
    }
    return -1;
}
