size_t sub_4E068(int* param0) {
    int v0;
    int v1;
    if(param0 == 0 || *param0 != 3) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = *(param0 + 2);
        v0 = *(param0 + 3);
    }
    size_t result = sub_4D880(16);
    if(result == 0) {
        return 0;
    }
    *(int*)(result + 8) = v1;
    *(int*)(result + 12) = v0;
    *(int*)result = 3;
    *(int*)(result + 4) = SOCK_STREAM;
    return result;
}
