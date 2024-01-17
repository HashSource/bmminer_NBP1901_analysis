char* sub_3D754(int* param0, uint32_t* param1) {
    char v0;
    char v1;
    *param0 = 0;
    if(gvar_99EE24 != 0) {
        uint32_t v2 = gvar_99EE1C;
        if(*(int*)(v2 + 4) != 8) {
            char* __s = (char*)(*(int*)v2 + SOCK_STREAM);
            size_t v3 = strcspn(__s, &g68A48);
            *param1 = v3;
            return __s;
        }
        int v4 = 28;
        int v5 = SOCK_STREAM;
    loc_3D7BC:
        do {
            *param0 = v5;
            v2 = gvar_99EE24;
            v1 = v2 == v5;
            v0 = v2 >= v5;
            ++v5;
            if((v0 != 0 && v1 == 0)) {
                v2 = gvar_99EE1C + v4;
                v4 += 28;
                if(*(int*)(v2 + 4) == 8) {
                    goto loc_3D7BC;
                }
                char* __s = (char*)(*(int*)v2 + SOCK_STREAM);
                size_t v3 = strcspn(__s, &g68A48);
                *param1 = v3;
                return __s;
            }
        }
        while((v0 != 0 && v1 == 0));
    }
    return NULL;
}
