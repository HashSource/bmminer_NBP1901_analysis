int sub_3FEC0(int param0) {
    if(param0 != 0) {
        *(int*)param0 = 0;
        *(int*)(param0 + 4) = 0;
        *(int*)(param0 + 8) = 0;
        *(int*)(param0 + 12) = 0;
        return sub_3FA64(param0);
    }
    return -1;
}
