int sub_1427C(uint32_t param0, int param1) {
    int result;
    int v0 = 8;
    do {
        result = sub_2C06C(28, param0, param1);
        if(result != 0) {
            return result;
        }
        usleep(1000);
        --v0;
    }
    while(v0 != 0);
    return result;
}
