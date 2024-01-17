int sub_1EA18(int param0, int param1, int param2, uint8_t param3) {
    int result;
    int v0 = 0;
    do {
        result = sub_1E29C(v0);
        if(result != 0 && (param0 != 0xFF ? (int)(uint8_t)v0 == param0: SOCK_STREAM) != 0) {
            result = param2 == 0 ? sub_50874((int)(uint8_t)v0, param1, param3): sub_508A0((int)(uint8_t)v0, param3);
        }
        ++v0;
    }
    while(v0 != 4);
    return result;
}
