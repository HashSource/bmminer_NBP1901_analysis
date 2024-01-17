// Stale decompilation - Refresh this view to re-decompile this code
int sub_4A8C8(int param0, int param1, char* __s2) {
    int v0;
    int v1;
    int v2;
    snprintf(__s2, 11, "%p", param1, v0, v1, v2);
    uint32_t* ptr0 = sub_4BC44(param0, __s2);
    if(ptr0 == 0) {
        int v3 = sub_4EB60();
        return sub_4B9B0(param0, (int)__s2, v3);
    }
    return -1;
}
