int sub_1EFE0(int param0, int param1, int param2, int param3) {
    int v0 = 0;
    int result = sub_1E29C(0);
    if(result == 0) {
    loc_1F004:
        do {
            ++v0;
            if(v0 == 4) {
                return result;
            }
            result = sub_1E29C(v0);
        }
        while(result == 0);
    }
    result = sub_51694((int)(uint8_t)v0, param1, param2, param3);
    goto loc_1F004;
}
