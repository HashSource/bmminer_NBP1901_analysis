int sub_2CDFC(int param0, int param1) {
    char v0 = param1 == 0xFF;
    char v1 = param1 >= 0xFF;
    if(v1 == 0 || v0 != 0) {
        v0 = param0 == 3;
        v1 = param0 >= 3;
    }
    if(v1 == 0 || v0 != 0) {
        return (int)*(uint32_t*)(param0 * 0x400 + param1 * 4 + (int)&gvar_81128);
    }
    return 0;
}
