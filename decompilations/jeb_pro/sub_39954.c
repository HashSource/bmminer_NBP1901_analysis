int sub_39954() {
    int v0 = 0;
    do {
        int v1 = sub_1E29C(v0);
        if(v1 != 0) {
            int v2 = sub_397A0(v0);
            if(v2 == 0) {
                return SOCK_STREAM;
            }
        }
        ++v0;
    }
    while(v0 != 4);
    return 0;
}
