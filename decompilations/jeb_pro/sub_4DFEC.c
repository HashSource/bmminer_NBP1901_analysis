int sub_4DFEC(int param0, int param1) {
    if(param1 != 0) {
        int v0 = 0;
    loc_4E03C:
        do {
            int v1 = sub_4DE1C((int)*(char*)(param0 + v0));
            int v2 = param1 - v0;
            char* ptr0 = (char*)(param0 + v0);
            if(v1 != 0) {
                if((uint32_t)v1 > SOCK_STREAM && (uint32_t)v1 > (uint32_t)v2) {
                    return 0;
                }
                else if((uint32_t)v1 > SOCK_STREAM) {
                    int v3 = sub_4DE88(ptr0, v1, NULL);
                    v0 = v1 + v0 - SOCK_STREAM;
                    if(v3 == 0) {
                        return 0;
                    }
                }
                ++v0;
                if((uint32_t)param1 <= (uint32_t)v0) {
                    goto loc_4E064;
                }
                else {
                    goto loc_4E03C;
                }
            }
            return 0;
        }
        while(SOCK_STREAM);
    }
loc_4E064:
    return SOCK_STREAM;
}
