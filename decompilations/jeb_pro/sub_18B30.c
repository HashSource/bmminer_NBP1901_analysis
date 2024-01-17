int sub_18B30(int param0) {
    uint32_t v0 = gvar_7F814;
    if(v0 != 0 && param0 <= 4) {
        v0 += param0;
        return *(char*)(v0 + 16) == 0 ? (uint32_t)*(char*)(v0 + 16): SOCK_STREAM;
    }
    return 0;
}
