int sub_445E0(int param0) {
    int result;
    int v0;
    sub_40390(27, param0);
    if(param0 < 0) {
        int v1 = 3001;
        do {
            sub_40314(27, &v0);
            result = 1000;
            if(v0 >= 0) {
                return result;
            }
            result = usleep(1000);
            --v1;
        }
        while(v1 != 0);
        return result;
    }
    return sub_40314(27, &v0);
}
