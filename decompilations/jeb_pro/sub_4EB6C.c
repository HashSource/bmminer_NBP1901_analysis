void* sub_4EB6C(void* param0) {
    if(param0 == 0) {
        return 0;
    }
    if(*(int*)param0 <= 4) {
        jump *(int*)(*(int*)param0 * 4 + &gvar_4EB88);
    }
    return param0;
}
