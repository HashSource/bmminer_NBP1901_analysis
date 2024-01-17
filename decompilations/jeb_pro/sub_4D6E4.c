// Stale decompilation - Refresh this view to re-decompile this code
char* sub_4D6E4(char* __filename, int param1, short* param2) {
    sub_4F90C(param2, __filename);
    if(__filename != 0) {
        FILE* __stream = fopen64(__filename, "rb");
        if(__stream != 0) {
            char* result = (char*)sub_4D528((int)__stream, param1, (int)param2);
            fclose(__stream);
            return result;
        }
        int* ptr0 = __errno_location();
        strerror(ptr0[0]);
        sub_4C0CC((int)param2, 0, 3, "unable to open %s: %s");
        return NULL;
    }
    sub_4C0CC((int)param2, 0, 4, "wrong arguments");
    return NULL;
}
