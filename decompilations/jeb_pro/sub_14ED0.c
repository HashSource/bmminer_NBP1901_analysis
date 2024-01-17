int sub_14ED0(int param0) {
    uint32_t v0;
    int v1 = 0;
loc_14EE4:
    do {
        uint32_t v2 = sub_14434();
        if((int)v2 <= v1) {
            return 0;
        }
        int v3 = *(int*)(v1 * 4 + gvar_7F7B4);
        ++v1;
        if(param0 != v3) {
            goto loc_14EE4;
        }
        v0 = sub_1E170();
    }
    while(v0 == 0);
    return SOCK_STREAM;
}
