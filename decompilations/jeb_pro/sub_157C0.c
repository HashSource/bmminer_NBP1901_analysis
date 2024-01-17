int sub_157C0() {
    int v0 = 0;
    int result = 0xFF;
    do {
        int v1 = sub_15610(v0, 2);
        ++v0;
        if((int)(uint16_t)v1 < result) {
            result = (uint16_t)v1;
        }
    }
    while(v0 != 4);
    return result;
}
