int* sub_18C18(int* param0, int* param1, int* param2) {
    if((int)param2 <= 0) {
        return param0;
    }
    param2 = (int)(int*)((int)param2 * 4) + (int)param0;
    do {
        *param0 ^= *param1;
        ++param0;
    }
    while(param0 != param2);
    return param0;
}
