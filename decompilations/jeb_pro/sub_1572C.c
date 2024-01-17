int sub_1572C() {
    int v0 = 0;
    int result = 0xFF;
    do {
        int v1 = v0;
        ++v0;
        int v2 = sub_156CC(v1);
        if(v2 < result) {
            result = v2;
        }
        result = (uint16_t)result;
    }
    while(v0 != 4);
    return result;
}
