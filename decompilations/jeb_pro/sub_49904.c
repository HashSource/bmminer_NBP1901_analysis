uint32_t sub_49904() {
    int v0;
    int v1;
    int* ptr0;
    if(gvar_504C90 != 0) {
        int v2 = (int)gvar_5051A0;
        if(v2 == 0) {
            ptr0 = sub_432D0(&sub_49834, 0, 0);
            gvar_5051A4 = (uint32_t)ptr0;
            pthread_mutex_init(&g5051A8, NULL);
            v2 = gvar_5051A0;
        }
        else {
            ptr0 = gvar_5051A4;
        }
        gvar_5051A0 = (uint32_t)(v2 + SOCK_STREAM);
        uint32_t result = (uint32_t)(v2 + SOCK_STREAM);
        v1 = 0;
        v0 = 0;
        sub_43320(ptr0, &result, 4, &v1, 8);
        return result;
    }
    v1 = 0x61656c70;
    v0 = 1763730803;
    int v3 = 544500078;
    int v4 = 1952541808;
    int v5 = 1836216166;
    int v6 = 1919510048;
    int v7 = 0x21217473;
    short v8 = 10;
    sub_2E584(0, (char*)&v1, 0);
    return 0xfffffffe;
}
