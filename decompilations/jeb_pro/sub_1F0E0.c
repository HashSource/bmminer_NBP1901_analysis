int sub_1F0E0(int param0, int param1, int param2, int param3) {
    int result;
    int v0 = 0;
    do {
        result = sub_1E29C(v0);
        if(result != 0 && (param0 != 0xFF ? param0 == v0: SOCK_STREAM) != 0) {
            result = param1 == 0 ? sub_506F8((int)(uint8_t)v0, param2, param3, 0): sub_50794((int)(uint8_t)v0, param3, 0);
        }
        ++v0;
    }
    while(v0 != 4);
    return result;
}
