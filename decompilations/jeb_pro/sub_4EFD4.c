int sub_4EFD4(int* param0, char* __src, void* param2) {
    void* ptr0 = param2;
    if(__src != 0) {
        size_t v0 = strlen(__src);
        int v1 = sub_4DFEC((int)__src, (int)v0);
        if(v1 != 0) {
            return sub_4EE2C(param0, __src, (uint32_t)ptr0);
        }
    }
    if(ptr0 != 0 && *(int*)((int)ptr0 + 4) != -1) {
        DMB();
        param2 = (char*)*(uint32_t*)((int)ptr0 + 4) - SOCK_STREAM;
        *(void**)((int)ptr0 + 4) = (void*)((char*)*(uint32_t*)((int)ptr0 + 4) - SOCK_STREAM);
        if(param2 == 0) {
            sub_4EB6C(ptr0);
            return -1;
        }
    }
    return -1;
}
