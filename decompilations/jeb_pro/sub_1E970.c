int sub_1E970() {
    int v0 = 0;
    int result = sub_1E29C(0);
    if(result == 0) {
    loc_1E988:
        do {
            ++v0;
            if(v0 == 4) {
                return result;
            }
            result = sub_1E29C(v0);
        }
        while(result == 0);
    }
    result = sub_50C38((int)(uint8_t)v0, 0);
    goto loc_1E988;
}
