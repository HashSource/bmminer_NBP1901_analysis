int sub_5198C(int param0, int param1, int param2, int param3) {
    if(param0 <= 3) {
        int v0 = 0;
        do {
            if(param0 == v0) {
                void* ptr0 = (void*)(param0 * &loc_20000 + 5265888);
                do {
                    void* __dest = ptr0;
                    ptr0 = (int)ptr0 + 0x200;
                    memcpy(__dest, &g7F588, 0x200);
                }
                while(param0 * &loc_20000 + 5396960 != ptr0);
                memcpy((void*)(param0 * 0x200 + 0x5051c8), &g7F588, 0x200);
            }
            ++v0;
        }
        while(v0 != 4);
        return 0;
    }
    return -1;
}
