int sub_1F164(int param0, int param1, int param2, char* param3, int param4, uint16_t param5) {
    int result;
    int v0 = 0;
    do {
        result = sub_1E29C(v0);
        if(result != 0 && (param0 != 0xFF ? param0 == v0: SOCK_STREAM) != 0) {
            result = param1 == 0 ? sub_505A4((int)(uint8_t)v0, param2, param3, param4, param5): sub_50560((int)(uint8_t)v0, param3, param4, *(int*)&param5);
        }
        ++v0;
    }
    while(v0 != 4);
    return result;
}
