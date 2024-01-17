int sub_430FC() {
    int v0;
    int result = 0;
    int* ptr0 = (int*)&g695A8;
    do {
        ++result;
        if(result == 16) {
            return 16;
        }
        v0 = *(ptr0 + 4);
        ptr0 += 4;
    }
    while(v0 != 0xFF || *(ptr0 + SOCK_STREAM) != 0xFF || *(ptr0 + 2) != 0xFF || *(ptr0 + 3) != 0xFF);
    return result;
}
