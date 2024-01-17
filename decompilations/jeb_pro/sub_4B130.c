// Stale decompilation - Refresh this view to re-decompile this code
int sub_4B130(int* param0, int param1, int param2, int param3) {
    char v0;
    if((param3 & 0x200) != 0 || (param0 != 0 && *param0 <= SOCK_STREAM)) {
        int v1 = param2;
        param2 = sub_4B91C(&v0);
        if(param2 == 0) {
            int result = sub_4A920((int)param0, param3, 0, (int)&v0, param1, v1);
            sub_4B998(&v0);
            return result;
        }
    }
    return -1;
}
