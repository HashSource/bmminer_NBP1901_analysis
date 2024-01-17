char sub_17F90() {
    int v0 = 0;
    do {
        int v1 = sub_1E29C(v0);
        if(v1 != 0) {
            char result = (char)*(char*)(gvar_7F814 + v0 + 20);
            if(*(char*)(gvar_7F814 + v0 + 20) == 0) {
                return result;
            }
        }
        ++v0;
    }
    while(v0 != 4);
    return SOCK_STREAM;
}
