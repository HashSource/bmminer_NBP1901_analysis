int sub_3204C(int param0, int param1, size_t __n) {
    int v0 = 0;
    int result = 0;
    do {
        int v1 = sub_1E29C(v0);
        if(v1 != 0) {
            int v2 = sub_32010(v0, param1, __n);
            result |= v2;
        }
        ++v0;
    }
    while(v0 != 4);
    return result;
}
