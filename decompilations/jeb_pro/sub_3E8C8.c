int sub_3E8C8(int param0, int param1, int* param2) {
    int v0;
    char v1;
    int v2 = SOCK_STREAM;
    int v3 = SOCK_STREAM;
    int v4 = 0;
    int v5 = -1;
loc_3E8DC:
    while(SOCK_STREAM) {
        int v6 = v4 + v3;
        int v7 = param0 + v5;
        if(param1 <= v6) {
            break;
        }
        while(SOCK_STREAM) {
            int v8 = (uint32_t)*(char*)(v7 + v3);
            int v9 = (uint32_t)*(char*)(param0 + v6);
            v1 = v8 == v9;
            if(v8 > v9) {
                v4 = v6;
                v3 = SOCK_STREAM;
                v2 = v6 - v5;
                v6 = v4 + SOCK_STREAM;
                v7 = param0 + v5;
                if(param1 > v6) {
                    continue;
                }
                break loc_3E8DC;
            }
            if(v1 == 0) {
                v2 = SOCK_STREAM;
                v5 = v4;
                v3 = SOCK_STREAM;
                ++v4;
                continue loc_3E8DC;
            }
            v0 = v3;
            ++v3;
            if(v2 != v0) {
                continue loc_3E8DC;
            }
            v4 = v6;
            v3 = SOCK_STREAM;
            continue loc_3E8DC;
        }
    }
    int v10 = SOCK_STREAM;
    int v11 = 0;
    int v12 = SOCK_STREAM;
    int v13 = -1;
    *param2 = v2;
loc_3E92C:
    while(SOCK_STREAM) {
        int v14 = v11 + v12;
        int v15 = param0 + v13;
        if(param1 <= v14) {
            break;
        }
        while(SOCK_STREAM) {
            int v16 = (uint32_t)*(char*)(v15 + v12);
            int v17 = (uint32_t)*(char*)(param0 + v14);
            v1 = v16 == v17;
            if((v16 <= v17 && v1 == 0)) {
                v11 = v14;
                v12 = SOCK_STREAM;
                v10 = v14 - v13;
                v14 = v11 + SOCK_STREAM;
                v15 = param0 + v13;
                if(param1 > v14) {
                    continue;
                }
                break loc_3E92C;
            }
            if(v1 == 0) {
                v10 = SOCK_STREAM;
                v13 = v11;
                v12 = SOCK_STREAM;
                ++v11;
                continue loc_3E92C;
            }
            v0 = v12;
            ++v12;
            if(v10 != v0) {
                continue loc_3E92C;
            }
            v11 = v14;
            v12 = SOCK_STREAM;
            continue loc_3E92C;
        }
    }
    int result = v5 + SOCK_STREAM;
    if(v13 + SOCK_STREAM >= v5 + SOCK_STREAM) {
        *param2 = v10;
        result = v13 + SOCK_STREAM;
    }
    return result;
}
