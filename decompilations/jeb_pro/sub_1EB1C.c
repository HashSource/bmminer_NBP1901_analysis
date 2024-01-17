int sub_1EB1C(int param0) {
    int result;
    int v0 = 0;
loc_1EB30:
    do {
        int v1 = v0;
        int v2 = (int)(uint8_t)v0;
        ++v0;
        result = sub_1E29C(v1);
        if(result == 0) {
            if(v0 != 4) {
                goto loc_1EB30;
            }
            return 0;
        }
        result = sub_508E4(v2, SOCK_STREAM, (int)*(char*)&gvar_7EB58, param0);
    }
    while(v0 != 4);
    return result;
}
