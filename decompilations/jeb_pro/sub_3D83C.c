char* sub_3D83C(char* param0, uint32_t* param1, uint32_t param2) {
    uint32_t v0 = param1[0];
    if(gvar_99EE24 > v0) {
        char* result = param0;
        do {
            int* ptr0 = (int*)(v0 * 28 + gvar_99EE1C);
            if(*(ptr0 + SOCK_STREAM) != 8) {
                if(result == 0) {
                    char* __s = (char*)(*ptr0 + SOCK_STREAM);
                    size_t v1 = strcspn(__s, &g68A48);
                    *(uint32_t*)param2 = v1;
                    return __s;
                }
                result = sub_3D7F4((int)result, (uint32_t*)param2);
                if(result != 0) {
                    return result;
                }
                v0 = param1[0];
            }
            ++v0;
            param1[0] = v0;
        }
        while(gvar_99EE24 > v0);
    }
    return NULL;
}
