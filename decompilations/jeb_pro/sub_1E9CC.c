int sub_1E9CC(int param0) {
    int v0 = 0;
    int result = sub_1E29C(0);
    if(result == 0) {
    loc_1E9E8:
        do {
            ++v0;
            if(v0 == 4) {
                return result;
            }
            result = sub_1E29C(v0);
        }
        while(result == 0);
    }
    result = sub_4FFE8((int)(uint8_t)v0, param0);
    goto loc_1E9E8;
}
