int sub_315EC(char* param0, int param1) {
    int result;
    int v0;
    if(param1 == 0) {
        v0 = SOCK_STREAM;
        result = 28;
    loc_316A8:
        result |= 2;
    }
    else {
        int v1 = SOCK_STREAM;
        int v2 = 0;
        int v3 = SOCK_STREAM;
        int v4 = SOCK_STREAM;
        int v5 = SOCK_STREAM;
        int v6 = SOCK_STREAM;
        int v7 = 0;
        int v8 = 128;
        while(SOCK_STREAM) {
            ++v2;
            ++v7;
            int v9 = (uint32_t)*param0 & v8;
            v8 >>>= SOCK_STREAM;
            if(v9 != 0) {
                v1 ^= SOCK_STREAM;
            }
            v0 = (uint32_t)(uint8_t)v1;
            if(v2 == 8) {
                ++param0;
                v2 = 0;
                v8 = 128;
            }
            int v10 = (uint32_t)((uint8_t)v5 ^ (uint8_t)v0);
            v1 = v3;
            if(param1 == v7) {
                result = v3 == 0 ? 0: 16;
                if(v4 != 0) {
                    result |= 8;
                }
                if(v5 != v0) {
                    result |= 4;
                }
                if(v6 == 0) {
                    break;
                }
                goto loc_316A8;
            }
            v3 = v4;
            v5 = v6;
            v4 = v10;
            v6 = v0;
        }
    }
    if(v0 != 0) {
        result |= SOCK_STREAM;
    }
    return result;
}
