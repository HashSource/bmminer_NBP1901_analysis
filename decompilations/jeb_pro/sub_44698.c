int sub_44698(int param0, char* param1, int* param2) {
    uint32_t v0 = gvar_505108;
    if(param2 != 0) {
        char* ptr0 = (char*)(param0 * 64 + v0 + 31);
        param2 = (char*)(param1 + param2) - SOCK_STREAM;
        --param1;
        do {
            v0 = *(ptr0 + SOCK_STREAM);
            ++ptr0;
            *(param1 + SOCK_STREAM) = (uint8_t)v0;
            ++param1;
        }
        while(param1 != param2);
    }
    return 0;
}
