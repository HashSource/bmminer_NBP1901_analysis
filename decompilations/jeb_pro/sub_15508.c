int sub_15508() {
    int v0 = 0;
    int result = 0xFF;
    do {
        int v1 = sub_154A8(v0);
        if(v1 != 0xFF) {
            if(result == 0xFF) {
                result = v1;
            }
            else {
                if(v1 >= result) {
                    result = v1;
                }
                result = (uint16_t)result;
            }
        }
        ++v0;
    }
    while(v0 != 4);
    return result;
}
