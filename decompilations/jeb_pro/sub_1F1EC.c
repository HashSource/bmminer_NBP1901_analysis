int sub_1F1EC(int param0, int param1) {
    int v0 = 0;
    int result = sub_1E29C(0);
    if(result == 0) {
    loc_1F208:
        do {
            ++v0;
            if(v0 == 4) {
                return result;
            }
            result = sub_1E29C(v0);
        }
        while(result == 0);
    }
    sub_508DC();
    if(param1 != 0) {
        result = sub_50ED0((int)(uint8_t)v0);
        goto loc_1F208;
    }
    result = sub_50F28((int)(uint8_t)v0);
    goto loc_1F208;
}
