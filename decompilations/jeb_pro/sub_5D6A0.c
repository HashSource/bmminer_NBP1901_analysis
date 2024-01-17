int sub_5D6A0(uint32_t* param0, void* __src, uint32_t param2) {
    int result;
    int v0;
    uint32_t v1 = param0[SOCK_STREAM];
    v0 = 0;
    if((int)v1 > 0) {
        do {
            int v2 = __src(*(int*)(v0 * 4 + param0[0]), (int)param2);
            v1 = param0[SOCK_STREAM];
            if(v2 > 0) {
                break;
            }
            ++v0;
        }
        while((int)v1 > v0);
    }
    if(v1 != v0) {
        uint32_t v3 = param0[0];
        result = *(int*)(v0 * 4 + v3);
        __src = v0 * 4 + v3;
        if(*(int*)(v0 * 4 + v3) != 0) {
            if((int)param0[2] <= (int)v1) {
                int v4 = sub_5D428(param0, (int*)(param0 + 2), 0);
                if(v4 != 0) {
                    sub_5DF98(&g2, "src/zc_arraylist.c", 107, "expand_internal fail");
                    return -1;
                }
                v3 = param0[0];
                v1 = param0[SOCK_STREAM];
                __src = v0 * 4 + v3;
            }
            memmove((void*)(v0 * 4 + v3 + 4), __src, (size_t)((v1 - v0) * 4));
            v1 = param0[SOCK_STREAM] + SOCK_STREAM;
            *(uint32_t*)(v0 * 4 + param0[0]) = param2;
            param0[SOCK_STREAM] = v1;
            return 0;
        }
        *(uint32_t*)(v0 * 4 + v3) = param2;
        return result;
    }
    return sub_5D5F0(param0, v0, param2);
}
