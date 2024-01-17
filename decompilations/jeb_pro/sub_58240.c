char* sub_58240(int* param0, char* param1) {
    if(param0 != 0) {
        int v0 = *(param0 + 0x101);
        int* ptr0 = param0;
        int* ptr1 = param0;
        int v1 = v0;
        return sub_5DF98(param1, "src/record.c", 15, "--record:[%p][%s:%p]--");
    }
    return sub_5DF98(&g2, "src/record.c", 14, "a_record is null or 0");
}
