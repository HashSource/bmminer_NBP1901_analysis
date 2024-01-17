uint32_t sub_36DBC(char* param0) {
    int v0;
    int v1 = (int)param0[2];
    int v2 = (uint32_t)param0[0] & 0xf;
    sub_1E160();
    if((uint32_t)v2 <= 3) {
        int v3 = (uint32_t)param0[SOCK_STREAM];
        int v4 = sub_1E29C(v2);
        if(v4 != 0) {
            int v5 = sub_5FAF8(v1, v0);
            uint32_t result = sub_1E0F0();
            if(result > (uint32_t)v5) {
                if(v3 == 144) {
                    if((*(int*)&param0[4] & 0x88) == 0) {
                        return result;
                    }
                    *(char*)(v2 * 0x100 + *(int*)(gvar_4FCB34 + 4) + v5) = SOCK_STREAM;
                    return result;
                }
                if(v3 == 224) {
                    return sub_36CA8(v2, v5, *(int*)&param0[4], gvar_4FCB34 + 8);
                }
            }
        }
    }
    sub_390B0(param0);
    return (uint32_t)param0;
}
