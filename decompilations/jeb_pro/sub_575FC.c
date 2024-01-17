char* sub_575FC(int* param0, char* param1) {
    if(param0 != 0) {
        int v0 = *(param0 + 2049);
        int* ptr0 = param0;
        int* ptr1 = param0;
        int v1 = v0;
        int* ptr2 = (int*)((char*)param0 + 0x1001);
        return sub_5DF98(param1, "src/format.c", 29, "---format[%p][%s = %s(%p)]---");
    }
    return sub_5DF98(&g2, "src/format.c", 24, "a_format is null or 0");
}
