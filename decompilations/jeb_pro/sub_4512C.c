int sub_4512C(int param0) {
    int result;
    int* ptr0 = (int*)(param0 - 4);
    int v0 = 48;
    do {
        int v1 = v0;
        ++v0;
        int v2 = *(ptr0 + SOCK_STREAM);
        ++ptr0;
        result = sub_40390(v1, v2);
    }
    while(v0 != 56);
    return result;
}
