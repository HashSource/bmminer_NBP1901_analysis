int sub_2CD30(int param0, int param1) {
    uint32_t v0 = sub_1E120();
    uint32_t v1 = sub_1E150();
    int v2 = sub_5FAF8((int)v0, (int)v1);
    uint32_t v3 = sub_1E150();
    int v4 = sub_5F880(param1, (int)v3);
    uint32_t v5 = sub_1E100();
    int v6 = v5 * v4;
    uint32_t v7 = sub_1E150();
    sub_5FADC(param1, (int)v7);
    int v8 = param1 * v2;
    uint32_t v9 = sub_1E100();
    uint32_t v10 = v9 + v6;
    int v11 = v2 + v8;
    if(v10 > v6) {
        int result = 0;
        int* ptr0 = (int*)(param0 * 0x100000 + v6 * 0x1000 + (v8 * 4 + 0x82124));
        do {
            if((uint32_t)v8 < (uint32_t)v11) {
                int* ptr1 = (int*)(v2 * 4 + (int)ptr0);
                int* ptr2 = ptr0;
                do {
                    int v12 = *(ptr2 + SOCK_STREAM);
                    ++ptr2;
                    result += v12;
                }
                while(ptr2 != ptr1);
            }
            ++v6;
            ptr0 += 0x400;
        }
        while(v10 != v6);
        return result;
    }
    return 0;
}
