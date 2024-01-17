int sub_16330(int param0, int param1, int param2, int param3) {
    int v0 = 0;
    int result = sub_1E29C(0);
    if(result == 0) {
    loc_1634C:
        do {
            ++v0;
            if(v0 == 4) {
                return result;
            }
            result = sub_1E29C(v0);
        }
        while(result == 0);
    }
    result = sub_162C4(v0, param0, param2, (char)param3);
    goto loc_1634C;
}
