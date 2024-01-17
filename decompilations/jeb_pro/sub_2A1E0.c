int sub_2A1E0(int param0, int param1, int param2, int param3) {
    void* ptr0;
    void* __ptr = *(void**)param0;
    if(__ptr != 0) {
        sub_2A1A4(__ptr);
        free(__ptr);
        *(int*)param0 = 0;
        return (int)ptr0;
    }
    if(gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 2) {
        return param0;
    }
    return sub_28DD0(param1, param2, param3);
}
