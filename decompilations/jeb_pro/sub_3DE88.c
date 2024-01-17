void* sub_3DE88(int* param0, int param1, int param2) {
    void* dstbuf = memmove((void*)(param2 * 4 + param1), (void*)(param2 * 4 + param1 + 4), (size_t)((*param0 - param2) * 4));
    --*param0;
    return dstbuf;
}
