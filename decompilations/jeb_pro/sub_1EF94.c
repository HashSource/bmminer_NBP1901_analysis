int sub_1EF94(int param0, int param1) {
    int v0 = 0;
    int result = sub_1E29C(0);
    if(result == 0) {
    loc_1EFB0:
        do {
            ++v0;
            if(v0 == 4) {
                return result;
            }
            result = sub_1E29C(v0);
        }
        while(result == 0);
    }
    result = sub_5161C((int)(uint8_t)v0, (uint8_t)param1, 0);
    goto loc_1EFB0;
}
