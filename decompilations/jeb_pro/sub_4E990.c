size_t sub_4E990(int param0, int param1) {
    size_t result = sub_4D880(16);
    if(result == 0) {
        return 0;
    }
    *(int*)(result + 8) = param0;
    *(int*)(result + 12) = param1;
    *(int*)result = 3;
    *(int*)(result + 4) = SOCK_STREAM;
    return result;
}
