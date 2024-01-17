int sub_51F28(char* param0, int param1) {
    if(param1 != 0) {
        int v0 = 0;
        int v1 = SOCK_STREAM;
        int v2 = 0;
        int v3 = SOCK_STREAM;
        int v4 = SOCK_STREAM;
        int v5 = SOCK_STREAM;
        int v6 = SOCK_STREAM;
        int v7 = 128;
        while(SOCK_STREAM) {
            v0 = (uint32_t)((uint8_t)v0 + SOCK_STREAM);
            v2 = (uint32_t)((uint8_t)v2 + SOCK_STREAM);
            int v8 = (uint32_t)*param0 & v7;
            v7 >>>= SOCK_STREAM;
            int v9 = v8 != 0 ? (uint32_t)((uint8_t)v1 ^ SOCK_STREAM): (uint32_t)(uint8_t)v1;
            if(v0 == 8) {
                ++param0;
                v0 = 0;
                v7 = 128;
            }
            int v10 = (uint32_t)((uint8_t)v9 ^ (uint8_t)v5);
            v1 = v3;
            if(param1 <= v2) {
                int result = v3 == 0 ? 0: 16;
                if(v4 != 0) {
                    result |= 8;
                }
                if(v9 != v5) {
                    result |= 4;
                }
                if(v6 != 0) {
                    result |= 2;
                }
                if(v9 != 0) {
                    result |= SOCK_STREAM;
                }
                return result;
            }
            v3 = v4;
            v5 = v6;
            v4 = v10;
            v6 = v9;
        }
    }
    return 31;
}
