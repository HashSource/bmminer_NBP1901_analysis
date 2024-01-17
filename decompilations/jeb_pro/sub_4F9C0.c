int sub_4F9C0(int param0, int param1, int param2, int param3, int param4, char* param5, __gnuc_va_list param6) {
    int v0 = param0;
    if(v0 == 0) {
        return param0;
    }
    if(*(char*)(v0 + 92) != 0) {
        return param0;
    }
    *(int*)v0 = param1;
    __gnuc_va_list __arg = param6;
    *(int*)(v0 + 4) = param2;
    char* __format = param5;
    *(int*)(v0 + 8) = param3;
    param0 = vsnprintf((char*)(v0 + 92), 159, __format, __arg);
    param3 = param4;
    *(char*)(v0 + 250) = 0;
    *(char*)(v0 + 251) = (uint8_t)param3;
    return param0;
}
