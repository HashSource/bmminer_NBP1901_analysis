char* sub_2F5B4(int param0) {
    if(param0 != 0) {
        int* ptr0 = (int*)&ptr_aHttp_;
        char* result = "http0:";
        do {
            ptr0 += 2;
            if(*(ptr0 + SOCK_STREAM) == param0) {
                return result;
            }
            result = *(char**)(ptr0 + 2);
        }
        while(*(ptr0 + 2) != 0);
        return "invalid";
    }
    return "http:";
}
