int sub_4EC38(uint32_t* param0) {
    if(param0 != 0 && *param0 == SOCK_STREAM) {
        int* ptr0 = *(param0 + 3);
        if(ptr0 != 0) {
            int v0 = 0;
            do {
                void* ptr1 = *(void**)(v0 * 4 + (int)*(param0 + 4));
                if(ptr1 != 0 && *(int*)((int)ptr1 + 4) != -1) {
                    DMB();
                    int v1 = *(int*)((int)ptr1 + 4) - SOCK_STREAM;
                    --*(int*)((int)ptr1 + 4);
                    if(v1 == 0) {
                        sub_4EB6C(ptr1);
                    }
                    ptr0 = *(param0 + 3);
                }
                ++v0;
            }
            while((uint32_t)ptr0 > v0);
        }
        *(param0 + 3) = NULL;
        return 0;
    }
    return -1;
}
