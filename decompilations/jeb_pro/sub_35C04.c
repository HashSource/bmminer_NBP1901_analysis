uint32_t sub_35C04(int param0) {
    uint32_t v0 = 0;
    int v1 = 0;
    do {
        int v2 = sub_1E29C(v1);
        if(v2 != 0) {
            uint32_t v3 = sub_1E0F0();
            if(v3 != 0) {
                int v4 = param0 - 4 + v1 * 0x400;
                int v5 = 0;
                do {
                    int v6 = *(int*)(v4 + 4);
                    v4 += 4;
                    ++v5;
                    uint32_t v7 = sub_1E130();
                    v0 += v7 * v6;
                }
                while(v5 != v3);
            }
        }
        ++v1;
    }
    while(v1 != 4);
    return v0 / 1000;
}
