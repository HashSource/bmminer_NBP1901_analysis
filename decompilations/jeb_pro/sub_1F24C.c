int sub_1F24C(int param0) {
    int v0 = 0;
    int result = sub_1E29C(0);
    if(result == 0) {
    loc_1F268:
        do {
            ++v0;
            if(v0 == 4) {
                return result;
            }
            result = sub_1E29C(v0);
        }
        while(result == 0);
    }
    result = sub_50D54((int)(uint8_t)v0, param0);
    goto loc_1F268;
}
