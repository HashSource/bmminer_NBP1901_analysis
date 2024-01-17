int sub_1EA84(int param0) {
    int result;
    int v0 = 0;
loc_1EA90:
    do {
        int v1 = v0;
        int v2 = (int)(uint8_t)v0;
        ++v0;
        result = sub_1E29C(v1);
        if(result == 0 || (param0 != 0xFF ? param0 == v2: SOCK_STREAM) == 0) {
            if(v0 != 4) {
                goto loc_1EA90;
            }
            return result;
        }
        result = sub_513FC(v2);
    }
    while(v0 != 4);
    return result;
}
