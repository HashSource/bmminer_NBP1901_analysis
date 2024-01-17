int sub_1EC84(int param0, int param1, int param2, int param3) {
    int result;
    int v0 = 0;
    do {
        result = sub_1E29C(v0);
        if(result != 0) {
            result = (uint8_t)v0;
            if((param0 != v0 ? param0 == 0xFF: SOCK_STREAM) != 0) {
                result = sub_4FEF0(result, param1, param2, param3);
            }
        }
        ++v0;
    }
    while(v0 != 4);
    return result;
}
