int sub_20A50(int* param0) {
    char __ptr1;
    int v0 = (int)*(int*)&gvar_7F8F4;
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "error_code = %d\n", v0);
        sub_2E584(4, &__ptr1, 0);
    }
    size_t v1 = sub_4E990(v0, v0 >> 31);
    return sub_4EFD4(param0, "error_code", (void*)v1);
}
