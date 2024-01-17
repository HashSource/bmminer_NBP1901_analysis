short* sub_4F90C(short* param0, char* __src) {
    if(param0 == 0) {
        return 0;
    }
    *(char*)&param0[46] = 0;
    *(int*)&param0[4] = 0;
    *(int*)&param0[0] = -1;
    *(int*)&param0[2] = -1;
    if(__src == 0) {
        *(char*)&param0[6] = 0;
        return param0;
    }
    return sub_4F8A8(param0, __src);
}
