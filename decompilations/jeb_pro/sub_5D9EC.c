uint32_t* sub_5D9EC(int* param0, int param1) {
    int v0 = *(param0 + 3)(param1, param1);
    sub_5FADC(v0, *(param0 + 2));
    uint32_t* result = *(uint32_t*)(param1 * 4 + *(param0 + SOCK_STREAM));
    if(result == 0) {
        return NULL;
    }
    do {
        int v1 = *(param0 + 4)(param1, (int)*(result + SOCK_STREAM));
        if(v1 != 0) {
            return result;
        }
        result = *(result + 4);
    }
    while(result != 0);
    return NULL;
}
