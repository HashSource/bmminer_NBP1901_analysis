void sub_17EF8() {
    int v0;
    uint32_t v1 = gvar_7F814;
    if(v1 == 0) {
        v0 = sub_16378();
        if(v0 != 0) {
            return;
        }
    }
    else if(*(char*)(v1 + 28) != 0) {
        return;
    }
    int v2 = 0;
    int v3 = 0;
    sub_16580();
    do {
        v0 = sub_1E29C(v2);
        if(v0 != 0) {
            v0 = sub_1740C(v2, gvar_7F814);
            v3 |= v0;
        }
        ++v2;
    }
    while(v2 != 4);
    if(v3 == 0) {
        *(char*)(gvar_7F814 + 28) = SOCK_STREAM;
    }
}
