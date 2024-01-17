int sub_4E9EC(int* param0, int param1, int param2, int param3) {
    if(param0 != 0 && *param0 == 3) {
        *(param0 + 2) = param2;
        *(param0 + 3) = param3;
        return 0;
    }
    return -1;
}
