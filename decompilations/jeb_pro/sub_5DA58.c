int* sub_5DA58(int* param0, int param1) {
    int v0 = *(param0 + 3)(param1, param1);
    sub_5FADC(v0, *(param0 + 2));
    uint32_t* ptr0 = *(uint32_t*)(param1 * 4 + *(param0 + SOCK_STREAM));
    if(ptr0 == 0) {
        return NULL;
    }
    do {
        int v1 = *(param0 + 4)(param1, (int)*(ptr0 + SOCK_STREAM));
        if(v1 != 0) {
            return *(ptr0 + 2);
        }
        ptr0 = *(ptr0 + 4);
    }
    while(ptr0 != 0);
    return NULL;
}
