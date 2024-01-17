int sub_51694(int param0, int param1, int param2, int param3) {
    char v0;
    char v1;
    *(int*)&v0 = param3;
    *(int*)&v1 = param2;
    return sub_4FDF0(param0, SOCK_STREAM, 0, (char)param1, v1, v0);
}
