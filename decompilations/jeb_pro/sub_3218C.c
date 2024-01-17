int sub_3218C(int param0) {
    if(param0 != 0) {
        int result = SOCK_STREAM;
        if(param0 <= SOCK_STREAM) {
            return SOCK_STREAM;
        }
        do {
            result *= 2;
        }
        while(result < param0);
        return result;
    }
    return 0;
}
