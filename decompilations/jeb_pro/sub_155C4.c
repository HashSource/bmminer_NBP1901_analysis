int sub_155C4() {
    int v0 = 0;
    int result = 0xFF;
    do {
        int v1 = sub_153EC(v0, 2);
        if((uint16_t)v1 != 0xFF) {
            if(result == 0xFF) {
                result = (uint16_t)v1;
            }
            else if((int)(uint16_t)v1 >= result) {
                result = (uint16_t)v1;
            }
        }
        ++v0;
    }
    while(v0 != 4);
    return result;
}
