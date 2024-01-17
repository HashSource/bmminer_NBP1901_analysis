int sub_15774() {
    int v0 = 0;
    int result = 0xFF;
    do {
        int v1 = sub_15610(v0, SOCK_STREAM);
        ++v0;
        if((int)(uint16_t)v1 < result) {
            result = (uint16_t)v1;
        }
    }
    while(v0 != 4);
    return result;
}
