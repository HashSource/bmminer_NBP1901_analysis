void* sub_2BC2C(int param0, int __src) {
    int v0;
    int __ptr1;
    sub_3DC80(&ptr_a__version_file, "Options for both config file and command line");
    sub_3DC80(&ptr_a__config__c, "Options for command line only");
    sub_3DD54(&v0, __src, &sub_282E4);
    if(param0 != SOCK_STREAM) {
        __builtin_strcpy(&__ptr1, "Unexpected extra commandline arguments");
        sub_2E584(3, &__ptr1, SOCK_STREAM);
    }
    void* dststr = sub_29458();
    if(gvar_80970 != 0) {
        dststr = sub_2A688();
    }
    __src = gvar_80968;
    if(__src != 0) {
        gvar_482130 = 1;
        dststr = strcpy(&g482158, (char*)__src);
        char* __src1 = (char*)gvar_8096C;
        if(__src1 == 0) {
            gvar_482138 = 11105;
            gvar_48213A = 0;
        }
        else {
            dststr = strcpy((char*)&gvar_482138, __src1);
        }
        if(gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 2) {
            return dststr;
        }
        snprintf(&__ptr1, 0x800, "Log file path: %s Open flag: %s", 4727128, &gvar_482138);
        dststr = sub_2E584(3, &__ptr1, 0);
    }
    return dststr;
}
