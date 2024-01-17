int* sub_4E5BC(int* param0, int param1) {
    if(param0 == 0) {
        return 0;
    }
    if(*param0 == SOCK_STREAM && *(param0 + 3) > param1) {
        return *(uint32_t*)(param1 * 4 + *(param0 + 4));
    }
    return NULL;
}
