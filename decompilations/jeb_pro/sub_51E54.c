int sub_51E54(int param0, int param1, int param2) {
    int v0 = 0;
    int v1 = 0;
    if(param2 != 0) {
        int* ptr0 = &v1;
    }
    int v2 = 0;
    int v3 = 0;
    if(param2 != 0) {
    loc_51E80:
        do {
            int v4 = 0;
            int v5 = param1 + v0;
            if(param2 > (uint32_t)v0) {
            loc_51E98:
                do {
                    int v6 = ptr0[0];
                    if(v4 == 0) {
                        ptr0[0] = ((uint32_t)*(char*)(param1 + v0) * 0x1000000) | v6;
                    }
                    else {
                        int v7 = (uint32_t)*(char*)(v4 + v5);
                        if(v4 == SOCK_STREAM) {
                            ptr0[0] = (v7 * &ELFHeader) | v6;
                        }
                        else {
                            int v8 = v7 | v6;
                            if(v4 == 2) {
                                ptr0[0] = (v7 * 0x100) | v6;
                            }
                            else {
                                ptr0[0] = v8;
                                if(v4 == 3) {
                                    v0 += 4;
                                    ++ptr0;
                                    if(param2 > (uint32_t)v0) {
                                        goto loc_51E80;
                                    }
                                    goto loc_51ED0;
                                }
                            }
                        }
                    }
                    ++v4;
                    if(v4 + v0 < param2) {
                        goto loc_51E98;
                    }
                    goto loc_51EBC;
                }
                while(SOCK_STREAM);
            }
            else {
            loc_51EBC:
                v0 += 4;
                ++ptr0;
                if(param2 > (uint32_t)v0) {
                    goto loc_51E80;
                }
            }
            goto loc_51ED0;
        }
        while(SOCK_STREAM);
    loc_51ED0:
    }
    sub_457E0(&v1, param0);
    return 0;
}
